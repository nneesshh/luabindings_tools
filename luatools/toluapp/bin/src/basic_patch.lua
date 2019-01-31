-- usage: (use instead of ant)
-- tolua++ "-L" "basic_patch.lua" "-o" "out/AABB.cpp" "AABB.pkg"
local sb = require("stringbuffer")
local tbl_unpack = unpack or table.unpack

_is_functions = _is_functions or {}
_to_functions = _to_functions or {}
_push_functions = _push_functions or {}

_basic = _basic or {}
_basic["int8_t"] = "integer"
_basic["uint8_t"] = "integer"
_basic["int16_t"] = "integer"
_basic["uint16_t"] = "integer"
_basic["int32_t"] = "integer"
_basic["uint32_t"] = "integer"
_basic["godot_char_type"] = "integer"
_basic["godot_char_type*"] = "string"

_basic_ctype = _basic_ctype or {}

--_basic_ctype["wchar"] = "const wchar_t*"

local FOR_LUA51 = false
if FOR_LUA51 then
    -- register int64 type
    _to_functions["int64_t"] = "toluafix_to_int64"
    _is_functions["int64_t"] = "toluafix_is_int64"
    _push_functions["int64_t"] = "toluafix_push_int64"
    _to_functions["uint64_t"] = "toluafix_to_int64"
    _is_functions["uint64_t"] = "toluafix_is_int64"
    _push_functions["uint64_t"] = "toluafix_push_int64"
else
    _basic["int64_t"] = "integer"
    _basic["uint64_t"] = "integer"
end

-- register lua object types: LUA_FUNCTION, LUA_TABLE
_to_functions["LUA_FUNCTION"] = "toluafix_ref_function"
_is_functions["LUA_FUNCTION"] = "toluafix_isfunction"
_to_functions["LUA_TABLE"] = "toluafix_totable"
_is_functions["LUA_TABLE"] = "toluafix_istable"

-- core type list
local _core_types = {
    "Array",
    "Basis",
    "Color",
    "Dictionary",
    "Error",
    "NodePath",
    "Plane",
    "PoolByteArray",
    "PoolIntArray",
    "PoolRealArray",
    "PoolStringArray",
    "PoolVector2Array",
    "PoolVector3Array",
    "PoolColorArray",
    "PoolIntArray",
    "PoolRealArray",
    "Quat",
    "Rect2",
    "AABB",
    "RID",
    "String",
    "CharString",
    "Transform",
    "Transform2D",
    "Variant",
    "Vector2",
    "Vector3"
}

local function _contains_val(t, val)
    for _, v in pairs(t) do
        if v == val then
            return true
        end
    end
    return false
end

local function _is_basic_type(name)
    local t = strgsub(name, "const%s+", "")
    local b, bc = _basic[t], _basic_ctype[t]
    return b, bc
end

local function _is_core_type(name)
    return _contains_val(_core_types, name)
end

local function _is_ref_type(name)
    local b, e, type_ = strfind(name, "^godot__ref_.*_$")
    return b, e, type_
end

local function _remove_ref_type_prefix(name)
    return strgsub(name, "^godot__ref_(.*)_$", "%1")
end

-- global enum typename
_global_enum_typenames = _global_enum_typenames or {}
local _auto_enum_typenames = require("__auto_godot_global_enum_typename")
for k, v in pairs(_auto_enum_typenames) do
    _global_enum_typenames[k] = v
end

-- naked class type
local function _get_nctype(type_)
    local nctype, bconst

    nctype = strgsub(type_, "const%s+", "")
    nctype = strgsub(nctype, "godot::", "")
    nctype = strgsub(nctype, "^%s*", "")

    bconst = false
    local b, e = strfind(type_, "const%s+")
    if b then
        bconst = true
    end

    return nctype, bconst
end

-- godot godot type
local function _get_godot_type(type_)
    local godot_type
    local nctype, bconst = _get_nctype(type_)
    if bconst then
        godot_type = "const godot::" .. nctype
    else
        godot_type = "godot::" .. nctype
    end
    return godot_type
end

-- register an user defined type: returns full type
function register_usertype_hook(type_)
    --if isbasic(type_) then
    --	return type_
    --end

    local nctype = _get_nctype(type_)
    if _is_core_type(nctype) then
        local godot_type = _get_godot_type(type_)
        return godot_type
    end

    local ft = findtype(type_)
    if not _usertype[ft] then
        return appendusertype(type_)
    end
    return ft
end

-- return type name: returns full type
function get_usertype_hook(type_)
    if type_ == "" or type_ == "void" then
        return type_
    else
        local nctype = _get_nctype(type_)
        if _is_core_type(nctype) then
            local godot_type = _get_godot_type(type_)
            return godot_type
        end

        local ft = findtype(type_)
        if ft then
            return ft
        end
        _usertype[type_] = type_
        return type_
    end
end

--
function class_singleton_hook(self)
    local type_ = strgsub(self.type, "::", "__")
    output("static godot_object *__static_object_" .. type_ .. " = nullptr;\n")
end

-- call static method hook
function call_static_method_hook(self, class, is_static, is_outside)
    local decl = sb.new()
    local nctype = _get_nctype(self.type)

    local class_nctype = _get_nctype(class)
    if _is_core_type(class_nctype) then
        -- core types
        if self.type ~= "" and self.type ~= "void" then
            output("", self.mod, self.type, self.ptr, "tolua_ret = ")
            output("(", self.mod, self.type, self.ptr, ") ")
        else
            output("")
        end

        if is_outside then
            output(self.name)
        else
            output(class .. "::" .. self.name)
        end

        output("(")

        -- write parameters
        local i = 1
        while self.args[i] do
            self.args[i]:passpar()
            i = i + 1
            if self.args[i] then
                output(",")
            end
        end

        if class and self.name == "operator[]" then
            -- substracts 1 from the index on operator[] functions, for compatibility
            -- with lua's method for indexing arrays (1 is the first element)
            output("-1);")
        else
            output(");")
        end
    else
        -- godot object types
        local ret_str
        local ret_type = self.type
        if self.type ~= "" and self.type ~= "void" then
            if _global_enum_typenames[self.type] then
                ret_str = "int tolua_ret;"
            elseif _is_basic_type(nctype) then
                ret_str = nctype .. " " .. self.ptr .. " tolua_ret;"
            elseif _is_core_type(nctype) then
                ret_str = _get_godot_type(self.type) .. " " .. self.ptr .. " tolua_ret;"
            else
                ret_str = "godot_object* tolua_ret;"
            end
        end
        decl:appendline(ret_str)

        local ret_var_str = ret_str and "&tolua_ret" or "nullptr"

        local arg_num = 0
        for _, _arg in ipairs(self.args) do
            if _arg.type ~= "" and _arg.type ~= "void" then
                arg_num = arg_num + 1
            end
        end

        if 0 == arg_num then
            decl:appendline("    const void *args[1] = {};")
        else
            decl:appendline("    const void *args[] = {")
            for _, _arg in ipairs(self.args) do
                if _arg.type ~= "" and _arg.type ~= "void" then
                    decl:appendline("     (void *) &" .. _arg.name .. ",")
                end
            end
            decl:appendline("    };")
        end

        local method_class_name = strgsub(class, "::", "__")
        local singleton_class_name = strgsub(class, "^_*", "")
        local signature =
            [[
    if (nullptr == __static_object_]] ..
            method_class_name ..
                [[) {
     __static_object_]] ..
                    method_class_name ..
                        [[ = godot::api->godot_global_get_singleton((char *) "]] ..
                            singleton_class_name ..
                                [[");
    }
    static godot_method_bind *mb = nullptr;
    if (mb == nullptr) {
     mb = godot::api->godot_method_bind_get_method("]] ..
                                    class ..
                                        [[", "]] ..
                                            self.name ..
                                                [[");
    }
    ]] ..
                                                    decl:tostr() ..
                                                        [[
    godot::api->godot_method_bind_ptrcall(mb, __static_object_]] ..
                                                            method_class_name .. [[, args, ]] .. ret_var_str
        --
        output(signature)

        if class and self.name == "operator[]" then
            -- substracts 1 from the index on operator[] functions, for compatibility
            -- with lua's method for indexing arrays (1 is the first element)
            output("-1);")
        else
            output(");")
        end
    end
end

-- call member method hook
call_member_method_hook = function(self, class, is_static, is_outside)
    local decl = sb.new()
    local nctype = _get_nctype(self.type)

    local class_nctype = _get_nctype(class)
    if _is_core_type(class_nctype) then
        -- core types
        if self.type ~= "" and self.type ~= "void" then
            output("", self.mod, self.type, self.ptr, "tolua_ret = ")
            output("(", self.mod, self.type, self.ptr, ") ")
        else
            output("")
        end

        if is_outside then
            output(self.name)
        else
            if self.cast_operator then
                --output('static_cast<',self.mod,self.type,self.ptr,' >(*self')
                output("self->operator ", self.mod, self.type, self.ptr)
            else
                output("self->" .. self.name)
            end
        end

        output("(")
        if is_outside then
            output("self")
            if self.args[1] and self.args[1].name ~= "" then
                output(",")
            end
        end

        -- write parameters
        local i = 1
        while self.args[i] do
            self.args[i]:passpar()
            i = i + 1
            if self.args[i] then
                output(",")
            end
        end

        if class and self.name == "operator[]" then
            -- substracts 1 from the index on operator[] functions, for compatibility
            -- with lua's method for indexing arrays (1 is the first element)
            output("-1);")
        else
            output(");")
        end
    else
        -- godot object types
        local ret_str
        local ret_type = self.type
        if self.type ~= "" and self.type ~= "void" then
            if _global_enum_typenames[self.type] then
                ret_str = "int tolua_ret;"
            elseif _is_basic_type(nctype) then
                if self.ptr == "*" then
                    ret_str = nctype .. "* tolua_ret;"
                else
                    ret_str = nctype .. " tolua_ret;"
                end
            elseif _is_core_type(nctype) then
                if self.ptr == "*" then
                    ret_str = "godot::" .. nctype .. "* tolua_ret;"
                else
                    ret_str = "godot::" .. nctype .. " tolua_ret;"
                end
            else
                ret_str = "godot_object* tolua_ret;"
            end
        end
        decl:appendline(ret_str)

        local ret_var_str = ret_str and "&tolua_ret" or "nullptr"

        local arg_num = 0
        for _, _arg in ipairs(self.args) do
            if _arg.type ~= "" and _arg.type ~= "void" then
                arg_num = arg_num + 1
            end
        end

        if 0 == arg_num then
            decl:appendline("   const void *args[1] = {};")
        else
            decl:appendline("   const void *args[] = {")
            for _, _arg in ipairs(self.args) do
                if _arg.type ~= "" and _arg.type ~= "void" then
                    decl:appendline("    (void *) &" .. _arg.name .. ",")
                end
            end
            decl:appendline("   };")
        end

        local method_class_name = class
        local signature =
            [[
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("]] ..
            class ..
                [[", "]] ..
                    self.name ..
                        [[");
   }
   ]] ..
                            decl:tostr() ..
                                [[
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, ]] ..
                                    ret_var_str

        --
        output(signature)

        if class and self.name == "operator[]" then
            -- substracts 1 from the index on operator[] functions, for compatibility
            -- with lua's method for indexing arrays (1 is the first element)
            output("-1);")
        else
            output(");")
        end
    end
end

local function _camel_to_snake(name)
    return strlower(strgsub(name, "(%u)", "_%1"))
end

--
function tolua_ret_constructor_hook(self)
    local line = ""
    local nctype = _get_nctype(self.type)

    if _is_core_type(nctype) then
        local godot_type = _get_godot_type(self.type)

        -- left =
        if self.type ~= "" and self.type ~= "void" then
            line = concatparam(line, self.mod, godot_type, self.ptr, "tolua_ret = (")
            line = concatparam(line, self.mod, godot_type, self.ptr, ") ")
        end

        -- right
        line = concatparam(line, "Mtolua_new(" .. godot_type .. ")(")
    else
        -- left =
        if self.type ~= "" and self.type ~= "void" then
            line = concatparam(line, self.mod, self.type, self.ptr, "tolua_ret = (")
            line = concatparam(line, self.mod, self.type, self.ptr, ") ")
        end

        -- right
        line = concatparam(line, "Mtolua_new(" .. self.type .. ")(") -- unclose for param
    end
    return line
end

--
function tolua_obj_copy_constructor_hook(type_, obj_)
    local nctype = _get_nctype(type_)

    if _is_core_type(nctype) then
        return "void* tolua_obj = Mtolua_new(" .. _get_godot_type(type_) .. ")(" .. obj_
    else
        return 'void* tolua_obj = godot::create_reference_ptr("' .. _remove_ref_type_prefix(type_) .. '", ' .. obj_
    end
end

--
function get_destructor_function(type_, var_)
    type_ = type_ or "object"
    var_ = var_ or "self"

    local nctype = _get_nctype(type_)
    if _is_core_type(nctype) then
        return "Mtolua_delete(" .. var_ .. ")"
    else
        return "godot::api->godot_object_destroy((godot_object *)" .. var_ .. ")"
    end
end

--
function constant_register_hook(pre, lname, varname, ns1, ns2)
    if ns1 then
        local nctype = _get_nctype(ns1)

        -- is core type name ?
        if _is_core_type(nctype) then
            output(
                pre ..
                    'tolua_constant(tolua_S,"' ..
                        lname .. '", (lua_Integer)godot::' .. nctype .. "::" .. varname .. ");"
            )
        elseif ns2 then
            output(
                pre ..
                    'tolua_constant(tolua_S,"' ..
                        lname .. '", (lua_Integer)godot__' .. nctype .. "__" .. ns2 .. "::" .. varname .. ");"
            )
        else
            output(
                pre ..
                    'tolua_constant(tolua_S,"' ..
                        lname .. '", (lua_Integer)godot__' .. nctype .. "::" .. varname .. ");"
            )
        end
    else
        output(pre .. 'tolua_constant(tolua_S,"' .. lname .. '", (lua_Integer)godot::' .. varname .. ");")
    end
end

--
function collect_function_hook(collect)
    for type_, v in pairs(collect) do
        local nctype = _get_nctype(type_)

        -- not basic and enum
        if not _is_basic_type(nctype) and not _global_enum_typenames[type_] then
            output("\nstatic int " .. v .. " (lua_State* tolua_S)")
            output("{")

            if _is_ref_type(type_) then
                output("  const godot_object* self = (const godot_object*) tolua_tousertype(tolua_S,1,0);")
            elseif _is_core_type(nctype) then
                local godot_type = _get_godot_type(type_)
                output("  " .. godot_type .. "* self = (" .. godot_type .. "*) tolua_tousertype(tolua_S,1,0);")
            else
                output("  " .. type_ .. "* self = (" .. type_ .. "*) tolua_tousertype(tolua_S,1,0);")
            end

            --
            output("  " .. get_destructor_function(type_) .. ";")
            output("  return 0;")
            output("}")
        end
    end
end

-- declare self, if the case
function pull_self_from_stack_hook(self, class, is_static)
    if is_static then
        _, _, self.mod = strfind(self.mod, "^%s*static%s%s*(.*)")
    else
        if class then
            if self.name == "new" then
                -- do nothing for new
            else
                local parent_nctype = _get_nctype(self.parent.type)
                local to_func = get_to_function(self.parent.type)

                if _is_core_type(parent_nctype) then
                    local parent_godot_type = _get_godot_type(self.parent.type)
                    output(
                        "  " ..
                            parent_godot_type ..
                                "* self = (" .. parent_godot_type .. "*) " .. to_func .. " (tolua_S,1,0);"
                    )
                else
                    output("  godot_object* self = (godot_object*)" .. to_func .. " (tolua_S,1,0);")
                end
            end
        else
            -- do nothing for non-class
        end
    end

    -- check self value
    if not is_static then
        if class then
            if self.name == "new" then
                -- do nothing for new
            else
                output("#ifndef TOLUA_RELEASE\n")
                output("  tolua_Error tolua_err;")
                output(
                    '  if (!self) tolua_error(tolua_S,"' ..
                        output_error_hook("invalid 'self' in accessing variable '%s'", self.name) .. '",NULL);'
                )
                output("#endif\n")
            end
        else
            -- do nothing for non-class
        end
    end
end

--
function pull_arg_from_stack_hook(self, narg)
    local line = ""
    local ptr = ""
    local mod = self.mod
    local type_ = self.type
    local nctype = _get_nctype(self.type)
    local godot_type = _get_godot_type(self.type)

    if self.ptr ~= "" then
        ptr = "*"
    end

    -- left
    if _is_core_type(nctype) then
        line = concatparam(line, " ", self.mod, godot_type, ptr)
    else
        line = concatparam(line, " ", "const godot_object", ptr)
    end

    if _is_ref_type(nctype) then
        line = concatparam(line, "*")
    end

    line = concatparam(line, self.name)
    line = concatparam(line, " = ")

    -- assign value or ptr
    if not _is_ref_type(nctype) and ptr == "" then
        line = concatparam(line, "*")
    end

    -- right
    if _is_core_type(nctype) then
        line = concatparam(line, "((", self.mod, godot_type)
    else
        line = concatparam(line, "((", "const godot_object")
    end

    line = concatparam(line, "*")
    line = concatparam(line, ") ")

    if nctype and isenum(nctype) then
        line = concatparam(line, "(int) ")
    end

    -- default value
    local def = 0
    if self.def ~= "" then
        def = self.def
        if (ptr == "" or self.ptr == "&") and not t then
            -- skip "const" for "const dec_type var;" style code, it leads to "const const"
            local def_type = nctype

            if _is_core_type(def_type) then
                def = "(void*)&(const godot::" .. def_type .. ")" .. def
            elseif def == "nullptr" then
                def = "(void*)" .. def
            else
                def = "(void*)&(const " .. def_type .. ")" .. def
            end
        end
    end

    local to_func = get_to_function(type_)
    line = concatparam(line, to_func .. " (tolua_S,", narg, ",", def, "));")

    output(line)
end

--
local toWrite = {}
local currentString = ""
local out
local WRITE2, OUTPUT2 = write, output

function output(s)
    out = _OUTPUT
    output = OUTPUT2 -- restore
    output(s)
end

function write(a)
    if out == _OUTPUT then
        currentString = currentString .. a
        if string.sub(currentString, -1) == "\n" then
            toWrite[#toWrite + 1] = currentString
            currentString = ""
        end
    else
        WRITE2(a)
    end
end

function post_output_hook(package)
    local result = table.concat(toWrite)
    local function replace(pattern, replacement)
        local k = 0
        local nxt, currentString = 1, ""
        repeat
            local s, e = string.find(result, pattern, nxt, true)
            if e then
                currentString = currentString .. string.sub(result, nxt, s - 1) .. replacement
                nxt = e + 1
                k = k + 1
            end
        until not e
        result = currentString .. string.sub(result, nxt)
        if k == 0 then
            print(" > Pattern not replaced", pattern)
        end
    end

    replace(
        [[#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"]],
        [[/****************************************************************************
//  (C) 2016 n.lee
****************************************************************************/
#include "stdafx.h"
#include <map>
#include <string>

extern "C" {
    #include "lua/tolua_fix.h"
}
#include "lua/tolua++.h"
]]
    )

    replace([[tolua_usertype(tolua_S,"uint64_t");]], [[]])
    replace([[tolua_usertype(tolua_S,"int64_t");]], [[]])
    replace([[*((uint64_t*)  ]], [[(]])
    replace([[*((int64_t*)  ]], [[(]])
    replace([[toluafix_push_int64(tolua_S,(void*)]], [[toluafix_push_int64(tolua_S,]])

    --replace([[tolua_usertype(tolua_S,"LUA_FUNCTION");]], [[]])
    --replace([[*((LUA_FUNCTION*)]], [[(]])

    replace("\t", "    ")

    WRITE2(result)
end
