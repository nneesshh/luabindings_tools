-- usage: (use instead of ant)
-- tolua++ "-L" "basic_patch.lua" "-o" "out/AABB.cpp" "AABB.pkg"

_is_functions = _is_functions or {}
_to_functions = _to_functions or {}
_push_functions = _push_functions or {}

_basic = _basic or {}
_basic['int8_t'] = 'number'
_basic['uint8_t'] = 'number'
_basic['int16_t'] = 'number'
_basic['uint16_t'] = 'number'
_basic['int32_t'] = 'number'
_basic['uint32_t'] = 'number'

-- check version for 5.1
assert(string.find(_VERSION, "5%.1", 1, true))

_basic_ctype = _basic_ctype or {}
_basic_ctype['integer'] = 'lua_Integer'

-- register int64 type
_to_functions["int64_t"] = "toluafix_to_int64"
_is_functions["int64_t"] = "toluafix_is_int64"
_push_functions["int64_t"] = "toluafix_push_int64"
_to_functions["uint64_t"] = "toluafix_to_int64"
_is_functions["uint64_t"] = "toluafix_is_int64"
_push_functions["uint64_t"] = "toluafix_push_int64"

local CCObjectTypes = {
    "CCObject",
    "CCAction",
    "CCImage",
    "CCFiniteTimeAction",
    "CCActionInstant",
}

-- register CCObject types
for i = 1, #CCObjectTypes do
    _push_functions[CCObjectTypes[i]] = "toluafix_pushusertype_ccobject"
end

-- register LUA_FUNCTION, LUA_TABLE, LUA_HANDLE type
_to_functions["LUA_FUNCTION"] = "toluafix_ref_function"
_is_functions["LUA_FUNCTION"] = "toluafix_isfunction"
_to_functions["LUA_TABLE"] = "toluafix_totable"
_is_functions["LUA_TABLE"] = "toluafix_istable"

local toWrite = {}
local currentString = ''
local out
local WRITE, OUTPUT = write, output

function output(s)
    out = _OUTPUT
    output = OUTPUT -- restore
    output(s)
end

function write(a)
    if out == _OUTPUT then
        currentString = currentString .. a
        if string.sub(currentString,-1) == '\n'  then
            toWrite[#toWrite+1] = currentString
            currentString = ''
        end
    else
        WRITE(a)
    end
end

function post_output_hook(package)
    local result = table.concat(toWrite)
    local function replace(pattern, replacement)
        local k = 0
        local nxt, currentString = 1, ''
        repeat
            local s, e = string.find(result, pattern, nxt, true)
            if e then
                currentString = currentString .. string.sub(result, nxt, s-1) .. replacement
                nxt = e + 1
                k = k + 1
            end
        until not e
        result = currentString..string.sub(result, nxt)
        if k == 0 then print('Pattern not replaced', pattern) end
    end

    replace([[#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"]],
      [[/****************************************************************************
//  (C) 2016 n.lee
****************************************************************************/

 #include <map>
 #include <string>

 extern "C" {
 #include "lua/tolua_fix.h"
 }
 #include "lua/tolua++.h"
]])

      --replace([[tolua_usertype(tolua_S,"uint64_t");]], [[]])
      --replace([[tolua_usertype(tolua_S,"int64_t");]], [[]])
      --replace([[*((uint64_t*)  ]], [[(]])
      --replace([[*((int64_t*)  ]], [[(]])
      replace([[toluafix_push_int64(tolua_S,(void*)]],
        [[toluafix_push_int64(tolua_S,]])

      --replace([[tolua_usertype(tolua_S,"LUA_FUNCTION");]], [[]])
      --replace([[*((LUA_FUNCTION*)]], [[(]])
      replace([[toluafix_pushusertype_ccobject(tolua_S,(void*)tolua_ret]],
        [[int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret]])

      replace('\t', '    ')

    WRITE(result)
end
