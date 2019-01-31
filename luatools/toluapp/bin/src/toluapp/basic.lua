-- tolua: basic utility functions
-- Written by Waldemar Celes
-- TeCGraf/PUC-Rio
-- Jul 1998
-- Last update: Apr 2003
-- $Id: $

-- This code is free software; you can redistribute it and/or modify it.
-- The software provided hereunder is on an "as is" basis, and
-- the author has no obligation to provide maintenance, support, updates,
-- enhancements, or modifications.

-- Basic C types and their corresponding Lua types
-- All occurrences of "char*" will be replaced by "_cstring",
-- All occurrences of "wchar_t*" will be replaced by "_wcstring",
-- and all occurrences of "void*" will be replaced by "_userdata"
_basic = {
    --key script data type, value isxxx
    ["lua_Table"] = "table",
    ["lua_Function"] = "function",
    ["lua_Handler"] = "handler",
    ["void"] = "",
    ["char"] = "integer",
    ["wchar_t"] = "integer",
    ["int"] = "integer",
    ["short"] = "integer",
    ["long"] = "integer",
    ["unsigned"] = "integer",
    ["float"] = "number",
    ["double"] = "number",
    ["_cstring"] = "string",
    ["_wcstring"] = "wstring",
    ["_userdata"] = "userdata",
    ["char*"] = "string",
    ["wchar_t*"] = "string",
    ["void*"] = "userdata",
    ["bool"] = "boolean",
    --opengl type
    ["GLvoid"] = "",
    ["GLchar"] = "integer",
    ["GLint"] = "integer",
    ["GLuint"] = "integer",
    --custom type
    ["real"] = "number",
    ["real_t"] = "number",
    ["f64"] = "number",
    ["s16"] = "integer",
    ["s32"] = "integer",
    ["u16"] = "integer",
    ["u32"] = "integer"
}

_basic_ctype = {
    ["number"] = "lua_Number",
    ["integer"] = "lua_Integer",
    ["string"] = "const char*",
    ["wstring"] = "const wchar_t*",
    ["userdata"] = "void*",
    ["boolean"] = "bool",
    ["value"] = "int",
    ["state"] = "lua_State*"
}

-- functions the are used to do a 'raw push' of basic types
_basic_raw_push = {}

-- List of user defined types
-- Each type corresponds to a variable name that stores its tag value.
_usertype = {}

-- List of types that have to be collected
_collect = {}

-- List of types
_global_types = {n = 0}
_global_types_hash = {}

-- list of classes
_global_classes = {}

-- List of enum constants
_global_enum_typenames = {}
_global_enum_values = {}

-- List of auto renaming
_renaming = {}
function appendrenaming(s)
    --print("appendenaming ----> ",s)
    local b, e, old, new = strfind(s, "%s*(.-)%s*@%s*(.-)%s*$")
    if not b then
        error("#Invalid renaming syntax; it should be of the form: pattern@pattern")
    end
    tinsert(_renaming, {old = old, new = new})
end

function applyrenaming(s)
    for i = 1, #_renaming do
        --print(s,"|||",_renaming[i].old,"*******",_renaming[i].new)
        -- ben modify
        -- bug if old is Shader_getTechnqiue , new is getTechnqiue , result is Shader_geTechnqiue
        local m, n = strgsub(s, _renaming[i].old, _renaming[i].new) --second param is iter number
        if n ~= 0 then
            return m
        end
    end
    return nil
end

-- Error handler
function tolua_error(s, f)
    if _curr_code then
        print("***curr code for error is " .. tostring(_curr_code))
        print(debug.traceback())
    end

    local out = _OUTPUT
    _OUTPUT = _STDERR
    if strsub(s, 1, 1) == "#" then
        write("\n** tolua: " .. strsub(s, 2) .. ".\n\n")
        if _curr_code then
            local _, _, s = strfind(_curr_code, "^%s*(.-\n)") -- extract first line
            if s == nil then
                s = _curr_code
            end
            s = strgsub(s, "_userdata", "void*") -- return with 'void*'
            s = strgsub(s, "_cstring", "char*") -- return with 'char*'
            s = strgsub(s, "_wcstring", "wchar_t*") -- return with 'wchar_t*'
            s = strgsub(s, "_lstate", "lua_State*") -- return with 'lua_State*'
            write("Code being processed:\n" .. s .. "\n")
        end
    else
        if not f then
            f = "(f is nil)"
        end
        print("\n** tolua internal error: " .. f .. s .. ".\n\n")
        return
    end
    _OUTPUT = out
end

function warning(msg)
    if flags["q"] then
        return
    end
    local out = _OUTPUT
    _OUTPUT = _STDERR
    write("\n** tolua warning: " .. msg .. ".\n\n")
    _OUTPUT = out
end

-- check if basic type
function isbasic(type_)
    local t = strgsub(type_, "const%s+", "")
    local m, t = applytypedef("", t) --mod,type
    local b = _basic[t]
    if b then
        return b, _basic_ctype[b]
    end
    return nil
end

-- split string using a token
function split(s, t)
    local l = {n = 0}
    local f = function(s)
        l.n = l.n + 1
        l[l.n] = s
        return ""
    end

    local p = "%s*(.-)%s*" .. t .. "%s*"
    s = strgsub(s, "^%s+", "")
    s = strgsub(s, "%s+$", "")
    s = strgsub(s, p, f)
    l.n = l.n + 1
    l[l.n] = strgsub(s, "(%s%s*)$", "")

    return l
end

-- splits a string using a pattern, considering the spacial cases of C code (templates, function parameters, etc)
-- pattern can't contain the '^' (as used to identify the begining of the line)
-- also strips whitespace
function split_c_tokens(s, pat)
    s = strgsub(s, "^%s*", "")
    s = strgsub(s, "%s*$", "")

    local token_begin = 1
    local token_end = 1
    local ofs = 1
    local ret = {n = 0}

    function add_token(ofs)
        local t = strsub(s, token_begin, ofs)
        t = strgsub(t, "^%s*", "")
        t = strgsub(t, "%s*$", "")
        ret.n = ret.n + 1
        ret[ret.n] = t
    end

    while ofs <= strlen(s) do
        local sub = strsub(s, ofs, -1)
        local b, e = strfind(sub, "^" .. pat)
        if b then
            add_token(ofs - 1)
            ofs = ofs + e
            token_begin = ofs
        else
            local char = strsub(s, ofs, ofs)
            if char == "(" or char == "<" or char == '"' then
                local block
                if char == "(" then
                    block = "^%b()"
                elseif char == "<" then
                    block = "^%b<>"
                elseif char == '"' then
                    block = '^%b""'
                end

                b, e = strfind(sub, block)
                if not b then
                    -- unterminated block?
                    ofs = ofs + 1
                else
                    ofs = ofs + e
                end
            else
                ofs = ofs + 1
            end
        end
    end
    add_token(ofs)
    --if ret.n == 0 then

    --	ret.n=1
    --	ret[1] = ""
    --end

    return ret
end

-- concatenate strings of a table
function concat(t, f, l, jstr)
    jstr = jstr or " "
    local s = ""
    local i = f
    while i <= l do
        s = s .. t[i]
        i = i + 1
        if i <= l then
            s = s .. jstr
        end
    end
    return s
end

-- concatenate all parameters, following output rules
function concatparam(line, ...)
    --local arg = arg or {n = select("#", ...), ...}
    local myarg = {...}
    local myarg_n = 0
    for k, v in pairs(myarg) do
        myarg_n = myarg_n + 1
    end
    myarg.n = myarg_n
    local arg = myarg

    local i = 1
    while i <= arg.n do
        if _cont and not strfind(_cont, '[%(,"]') and strfind(arg[i], "^[%a_~]") then
            line = line .. " "
        end
        line = line .. arg[i]
        if arg[i] ~= "" then
            _cont = strsub(arg[i], -1, -1)
        end
        i = i + 1
    end
    if strfind(arg[arg.n], "[%/%)%;%{%}]$") then
        _cont = nil
        line = line .. "\n"
    end
    return line
end

-- output line
function output(...)
    --local arg = arg or {n = select("#", ...), ...}
    local myarg = {...}
    local myarg_n = 0
    for k, v in pairs(myarg) do
        myarg_n = myarg_n + 1
    end
    myarg.n = myarg_n
    local arg = myarg

    local i = 1
    while i <= arg.n do
        if _cont and not strfind(_cont, '[%(,"]') and strfind(arg[i], "^[%a_~]") then
            write(" ")
        end
        write(arg[i])
        if arg[i] ~= "" then
            _cont = strsub(arg[i], -1, -1)
        end
        i = i + 1
    end
    if strfind(arg[arg.n], "[%/%;%{%}]$") then
        _cont = nil
        write("\n")
    end
end

function get_property_methods(ptype, name)
    if get_property_methods_hook and get_property_methods_hook(ptype, name) then
        return get_property_methods_hook(ptype, name)
    end

    if ptype == "default" then -- get_name, set_name
        return "get_" .. name, "set_" .. name
    end

    if ptype == "qt" then -- name, setName
        return name, "set" .. strupper(strsub(name, 1, 1)) .. strsub(name, 2, -1)
    end

    if ptype == "overload" then -- name, name
        return name, name
    end

    return nil
end

-------------- the hooks

-- called right after processing the $[ichl]file directives,
-- right before processing anything else
-- takes the package object as the parameter
function preprocess_hook(p)
    -- p.code has all the input code from the pkg
end

-- called for every $ifile directive
-- takes a table with a string called 'code' inside, the filename, and any extra arguments
-- passed to $ifile. no return value
function include_file_hook(t, filename, ...)
    --local arg = arg or {n = select("#", ...), ...}
    local myarg = {...}
    local myarg_n = 0
    for k, v in pairs(myarg) do
        myarg_n = myarg_n + 1
    end
    myarg.n = myarg_n
    local arg = myarg
end

-- called after processing anything that's not code (like '$renaming', comments, etc)
-- and right before parsing the actual code.
-- takes the Package object with all the code on the 'code' key. no return value
function preparse_hook(package)
end

-- called before starting output
function pre_output_hook(package)
end

-- called after writing all the output.
-- takes the Package object
function post_output_hook(package)
end

-- called from 'get_property_methods' to get the methods to retrieve a property
-- according to its type
function get_property_methods_hook(property_type, name)
end

-- called from ClassContainer:doparse with the string being parsed
-- return nil, or a substring
function parser_hook(s)
    return nil
end

-- register an user defined type: returns full type
function register_usertype_hook(type_)
    --if isbasic(type_) then
    --	return type_
    --end

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
        local ft = findtype(type_)
        if ft then
            return ft
        end
        _usertype[type_] = type_
        return type_
    end
end

-- called from classContainer:supcode(), when classtype == 'class'
function class_singleton_hook(self)
end

-- called from classFunction:supcode, before the call to the function is output
function pre_call_hook(self)
end

-- called from classFunction:supcode, output method signature
function call_new_method_hook(self, class, is_static, is_outside)
    local c_func = tolua_ret_constructor_hook(self)
    output(c_func) -- unclose
    if is_outside and not is_static then
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

    output(");") -- close
end

-- called from classFunction:supcode, output method signature
function call_static_method_hook(self, class, is_static, is_outside)
    -- tolua_ret
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
end

-- called from classFunction:supcode, output method signature
function call_member_method_hook(self, class, is_static, is_outside)
    -- tolua_ret
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
end

-- called from classFunction:supcode, output method signature
function call_simple_method_hook(self, class, is_static, is_outside)
    -- tolua_ret
    if self.type ~= "" and self.type ~= "void" then
        output("", self.mod, self.type, self.ptr, "tolua_ret = ")
        output("(", self.mod, self.type, self.ptr, ") ")
    else
        output("")
    end

    output(self.name)

    output("(")
    if is_outside and not is_static then
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
end

-- called from classFunction:supcode, after the call to the function is output
function post_call_hook(self)
end

-- called before the register code is output
function pre_register_hook(package)
end

-- called to output an error message
function output_error_hook(...)
    return strformat(...)
end

-- custom pushers

_push_functions = {}
_is_functions = {}
_to_functions = {}

_base_push_functions = {}
_base_is_functions = {}
_base_to_functions = {}

local function search_base(t, funcs)
    local class = _global_classes[t]

    while class do
        if funcs[class.type] then
            return funcs[class.type]
        end
        class = _global_classes[class.btype]
    end
    return nil
end

function get_push_function(t)
    return _push_functions[t] or search_base(t, _base_push_functions) or "tolua_pushusertype"
end

function get_to_function(t)
    return _to_functions[t] or search_base(t, _base_to_functions) or "tolua_tousertype"
end

function get_is_function(t)
    return _is_functions[t] or search_base(t, _base_is_functions) or "tolua_isusertype"
end

--
function tolua_ret_constructor_hook(self)
    local line = ""

    -- left =
    if self.type ~= "" and self.type ~= "void" then
        line = concatparam(line, self.mod, self.type, self.ptr, "tolua_obj = ")
        line = concatparam(line, self.mod, self.type, self.ptr, ") ")
    end

    -- right
    line = concatparam(line, "Mtolua_new(" .. self.type .. ")(") -- unclose for param
    return line
end

-- clone
function tolua_obj_copy_constructor_hook(type_, obj_)
    -- call copy constructor
    return "void* tolua_obj = Mtolua_new(" .. type_ .. ")(" .. obj_ .. "," --  -- unclose for param
end

--
function get_destructor_function(type_, var_)
    var_ = var_ or "self"
    return "Mtolua_delete(" .. var_ .. ")"
end

--
function constant_register_hook(pre, lname, varname, ns1, ns2)
    -- ignore ns2
    if ns1 then
        output(pre .. 'tolua_constant(tolua_S,"' .. lname .. '", ' .. ns1 .. "::" .. varname .. ");")
    else
        output(pre .. 'tolua_constant(tolua_S,"' .. lname .. '", ' .. varname .. ");")
    end
end

--
function collect_function_hook(collect)
    for i, v in pairs(collect) do
        output("\nstatic int " .. v .. " (lua_State* tolua_S)")
        output("{")
        output(" " .. type_ .. "* self = (" .. type_ .. "*) tolua_tousertype(tolua_S,1,0);")
        if not _basic[type_] and not _global_enum_typenames[type_] then
            output(" " .. get_destructor_function(i) .. ";")
        end
        output(" return 0;")
        output("}")
    end
end

-- (array) declare self
function array_pull_self_from_stack_hook(self, class, is_static)
    --
    if is_static then
        _, _, self.mod = strfind(self.mod, "^%s*static%s%s*(.*)")
    else
        if class and static == nil then
            output(" ", self.parent.type, "*", "self;")
            output(' lua_pushstring(tolua_S,".self");')
            output(" lua_rawget(tolua_S,1);")
            output(" self = ")
            output("(", self.parent.type, "*) ")
            output("lua_touserdata(tolua_S,-1);")
        else
        end
    end

    -- check index
    output("#ifndef TOLUA_RELEASE\n")
    output(" {")
    output("  tolua_Error tolua_err;")
    output("  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))")
    output('   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);')
    output(" }")
    output("#endif\n")
end

-- declare self
function pull_self_from_stack_hook(self, class, is_static)
    if is_static then
        _, _, self.mod = strfind(self.mod, "^%s*static%s%s*(.*)")
    else
        if class and self.name ~= "new" then
            output(" ", self.const, self.parent.type, "*", "self = ")
            output("(", self.const, self.parent.type, "*) ")
            local to_func = get_to_function(self.parent.type)
            output(to_func .. " (tolua_S,1,0);")
        else
        end
    end

    -- check self value
    if class and not is_static then
        output("#ifndef TOLUA_RELEASE\n")
        output("  tolua_Error tolua_err;")
        output(
            '  if (!self) tolua_error(tolua_S,"' ..
                output_error_hook("invalid 'self' in accessing variable '%s'", self.name) .. '",NULL);'
        )
        output("#endif\n")
    end
end

-- (array) declare one arg of self
function array_pull_arg_from_stack_hook(self, narg, is_cplusplus)
    local line = ""
    local ptr = ""
    local mod = self.mod
    local type_ = self.type
    local nctype = strgsub(self.type, "const%s+", "")

    type_ = strgsub(self.type, "const%s+", "") -- eliminates const modifier for arrays

    if self.ptr ~= "" and not isbasic(type_) then
        ptr = "*"
    end

    line = concatparam(line, " ", mod, type_, ptr)
    line = concatparam(line, "*") -- pointer for array
    line = concatparam(line, self.name)

    -- alloc for array
    if tonumber(self.dim) ~= nil then
        line = concatparam(line, "[", self.dim, "];")
    else
        if is_cplusplus then
            line = concatparam(line, " = Mtolua_new_dim(", type_, ptr, ", " .. self.dim .. ");")
        else
            line = concatparam(line, " = (", type_, ptr, "*)", "malloc((", self.dim, ")*sizeof(", type_, ptr, "));")
        end
    end

    output(line)
end

--
function pull_arg_from_stack_hook(self, narg)
    local line = ""
    local ptr = ""
    local mod = self.mod
    local type_ = self.type
    local nctype = strgsub(self.type, "const%s+", "")

    if self.ptr ~= "" then
        ptr = "*"
    end

    -- left
    line = concatparam(line, " ", self.mod, type_, ptr)
    line = concatparam(line, self.name)
    line = concatparam(line, " = ")

    -- assign value or ptr
    if ptr == "" then
        line = concatparam(line, "*")
    end

    -- right
    line = concatparam(line, "((", self.mod, type_)
    line = concatparam(line, "*")
    line = concatparam(line, ") ")

    if nctype and isenum(nctype) then
        line = concatparam(line, "(int) ")
    end

    local def = 0
    if self.def ~= "" then
        def = self.def
        if (ptr == "" or self.ptr == "&") and not t then
            -- skip "const" for "const dec_type var;" style code, it leads to "const const"
            local def_type = strgsub(type_, "const%s*", "")
            def = "(void*)&(const " .. def_type .. ")" .. def
        end
    end

    local to_func = get_to_function(type_)
    line = concatparam(line, to_func .. " (tolua_S,", narg, ",", def, "));")

    output(line)
end
