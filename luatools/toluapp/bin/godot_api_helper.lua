--- Luascript Component: godot api helper functions.
-- @module godot_api_helper.lua
-- @author n.lee
-- @copyright 2016
-- @license MIT/X11

local _M = {
    _VERSION = "0.0.1",
	_DESCRIPTION = ""
}

local sb = require('stringbuffer')
local tbl_unpack = unpack or table.unpack

function table_size(t)
    local count = 0
    for _,v in pairs(t) do
        count = count + 1
    end
    return count
end

function contains_val(t, val)
    for _,v in pairs(t) do
      if v == val then
          return true
      end
    end
    return false
end

function _M.is_reference_type(classes, t)
    for _,c in pairs(classes) do
        if c['name'] == t then
            if c['is_reference'] then
				        return true
            end
        end
    end
	  return false
end

function _M.make_gdnative_type(classes, t)
    if _M.is_enum(t) then
        return _M.remove_enum_prefix(t) .. " "
	  elseif _M.is_class_type(t) then
        if _M.is_reference_type(classes, t) then
            return "Ref<" .. _M.strip_name(t) .. "> "
        else
			  return _M.strip_name(t) .. " *"
		end
    else
        if t == "int" then
			      return "int64_t "
        end
        if t == "float" or t == "real" then
			      return "double "
		    end
		    return _M.strip_name(t) .. " "
	  end
end

function _M.generate_class_header(icalls, used_classes, classes, c)

    local source = sb.new()
    source:appendline("//#ifndef GODOT_CPP_" .. string.upper(_M.strip_name(c["name"])) .. "_HPP")
    source:appendline("//#define GODOT_CPP_" .. string.upper(_M.strip_name(c["name"])) .. "_HPP")
    source:appendline("")
    source:appendline("")
    
    source:appendline("$#include <gdnative_api_struct.gen.h>")
    source:appendline("$#include <stdint.h>")
    source:appendline("")
    
    
    source:appendline("$#include <core/CoreTypes.hpp>")

    local class_name = _M.strip_name(c["name"])

    -- # Ref<T> is not included in object.h in Godot either,
    -- # so don't include it here because it's not needed
    if class_name ~= "Object" and class_name ~= "Reference" then
        source:appendline("$#include <core/Ref.hpp>")
    end


    local included = sb.new()

    for _,used_class in ipairs(used_classes) do
        if _M.is_enum(used_class) and _M.is_nested_type(used_class) then
            local used_class_name = _M.remove_enum_prefix(_M.extract_nested_type(used_class))
            if not contains_val(included, used_class_name) then
                included:appendline(used_class_name)
                source:appendline("$#include \"" .. used_class_name .. ".hpp\"")
            end
        elseif _M.is_enum(used_class) and _M.is_nested_type(used_class) and not _M.is_nested_type(used_class, class_name) then
            local used_class_name = _M.remove_enum_prefix(used_class)
            if not contains_val(included, used_class_name) then
                included:appendline(used_class_name)
                source:appendline("$#include \"" .. used_class_name .. ".hpp\"")
            end
        end
    end

    source:appendline("")
    
    if c["base_class"] ~= "" then
        source:appendline("$#include \"" .. _M.strip_name(c["base_class"]) .. ".hpp\"")
    end

        
    
    source:appendline("namespace godot {")
    source:appendline("")


    for _,used_type in ipairs(used_classes) do
        if _M.is_enum(used_type) or _M.is_nested_type(used_type, class_name) then
            source:append("")
        else
            source:appendline("class " .. _M.strip_name(used_type) .. ";")
        end
    end
    
    
    source:appendline("")
    
    local vararg_templates = sb.new()
    
    -- # generate the class definition here
    source:append("class " .. class_name)
    if c["base_class"] == "" then
        source:append("")
    else
        source:append(" : public " .. _M.strip_name(c["base_class"]))
    end
    source:appendline(" {")
    
    source:appendline("public:")
    source:appendline("")

    -- # ___get_class_name
    -- source:appendline("\tstatic inline char *___get_class_name() { return (char *) \"" .. _M.strip_name(c["name"]) .. "\"; }")
    source:appendline("\tstatic inline char *___get_class_name();")

    -- source:appendline("\tstatic inline Object *___get_from_variant(Variant a) { return (Object *) a; }")
    source:appendline("\tstatic inline Object *___get_from_variant(Variant a);")

    local enum_values = sb.new()

    source:appendline("\n\t// enums")
    for _,enum in ipairs(c["enums"]) do
        source:appendline("\tenum " .. _M.strip_name(enum["name"]) .. " {")
        for _,value in ipairs(enum["values"]) do
            source:appendline("\t\t" .. remove_nested_type_prefix(value) .. " = " .. str(enum["values"][value]) .. ",")
            enum_values:appendline(value)
        end
        source:appendline("\t};")
    end

    source:appendline("\n\t// constants")
    
    for _,name in ipairs(c["constants"]) do
        if not contains_val(enum_values, name) then
            source:appendline("\tconst static int " .. name .. " = " .. str(c["constants"][name]) .. ";")
        end
    end

    
    if c["instanciable"] then
        source:appendline("\tstatic void *operator new(size_t);")
        
        source:appendline("\tstatic void operator delete(void *);")
    end
    
    source:appendline("\n\t// methods")
    
    for _,method in ipairs(c["methods"]) do
        
        local method_signature
        local method_name
        local has_default_argument        
        local method_arguments        
        local argument_name
        
        method_signature = sb.new()

        if c["singleton"] then
            method_signature:append("static ")
        end
        method_signature:append(_M.make_gdnative_type(classes, method["return_type"]))
        method_name = _M.escape_cpp(method["name"])
        method_signature:append(method_name .. "(")
            
            
        has_default_argument = false
        method_arguments = sb.new()
        
        for i, argument in ipairs(method["arguments"]) do
            method_signature:append("const " .. _M.make_gdnative_type(classes, argument["type"]))
            argument_name = _M.escape_cpp(argument["name"])
            method_signature:append(argument_name)
            method_arguments:append(argument_name)
            
            
            -- # default arguments
            local function escape_default_arg(_type, default_value)
                if _type == "Color" then
                    return "Color(" .. default_value .. ")"
                end
                if _type == "bool" or _type == "int" then
                    return string.lower(default_value)
                end
                if _type == "Array" then
                    return "Array()"
                end
                if contains_val({"PoolVector2Array", "PoolStringArray", "PoolVector3Array", "PoolColorArray", "PoolIntArray", "PoolRealArray"}, _type) then
                    return _type .. "()"
                end
                if _type == "Vector2" then
                    return "Vector2" .. default_value
                end
                if _type == "Vector3" then
                    return "Vector3" .. default_value
                end
                if _type == "Transform" then
                    return "Transform()"
                end
                if _type == "Transform2D" then
                    return "Transform2D()"
                end
                if _type == "Rect2" then
                    return "Rect2" .. default_value
                end
                if _type == "Variant" then
                    if default_value == "Null" then
                        return "Variant()"
                    else
                        return default_value
                    end
                end
                if _type == "String" then
                    return "\"" .. default_value .. "\""
                end
                if _type == "RID" then
                    return "RID()"
                end
                
                if default_value == "Null" or default_value == "[Object:null]" then
                    return "nullptr"
                end
                    
                return default_value
            end                   
            
            
            if argument["has_default_value"] or has_default_argument then
                method_signature:append(" = " .. escape_default_arg(argument["type"], argument["default_value"]))
                has_default_argument = true
            end
            
            
            if i < table_size(method["arguments"]) then
                method_signature:append(", ")
                method_arguments:append(",")
            end
        end
                
        if method["has_varargs"] then
            if table_size(method["arguments"]) > 0 then
                method_signature:append(", ")
                method_arguments:append(", ")
            end
            vararg_templates:append("\ttemplate <class... Args> " .. method_signature:tostr() .. "Args... args){\n\t\treturn " .. method_name .. "(" .. method_arguments:tostr() .. "Array::make(args...));\n\t}\n")
            method_signature:append("const Array& __var_args = Array()")
        else
            local arguments = {}
            for _,arginfo in ipairs(method["arguments"]) do
                table.insert(arguments, _M.get_icall_type_name(arginfo["type"]))
            end
            
            local icall_ret_type = _M.get_icall_type_name(method["return_type"])
            local icall_sig = { icall_ret_type, tbl_unpack(arguments) }
            table.insert(icalls, icall_sig)
        end
            
        method_signature:append(")")
        if method["is_const"] and not c["singleton"] then
            method_signature:append(" const")
        end
            

        source:appendline("\t" .. method_signature:tostr() .. ";")
    end
    
    source:appendline(vararg_templates:tostr())
    source:appendline("};")
    source:appendline("")
    
    
    source:appendline("}")
    source:appendline("")
    
    
    
    source:appendline("//#endif")
    
    
    return source:tostr()
end

function _M.generate_icall_header(icalls)
    
    local source = sb.new()
    source:appendline("//#ifndef GODOT_CPP__ICALLS_HPP")
    source:appendline("//#define GODOT_CPP__ICALLS_HPP")
    
    source:appendline("")
    
    source:appendline("$#include <gdnative_api_struct.gen.h>")
    source:appendline("$#include <stdint.h>")
    source:appendline("")
    
    source:appendline("$#include <core/CoreTypes.hpp>")
    source:appendline("$#include \"Object.hpp\"")
    source:appendline("")
    source:appendline("")
    
    source:appendline("namespace godot {")
    source:appendline("")
    
    for icall in ipairs(icalls) do
        local ret_type = icall[1]
        local args = icall[2]
        
        local method_signature = sb.new()
        
        method_signature:append(_M.return_type(ret_type) .. _M.get_icall_name(icall) .. "(godot_method_bind *mb, godot_object *inst")
        
        for arg in ipairs(args) do
            method_signature:append(", const ")
            
            if _M.is_core_type(arg) then
                method_signature:append(arg .. "&")
            elseif arg == "float" then
                method_signature:append("double ")
            elseif _M.is_primitive(arg) then
                method_signature:append(arg)
            else
                method_signature:append("Object *")
            end
        end
        
        method_signature:append(");")
        
        source:appendline(method_signature:tostr())
    end
    
    source:appendline("")
    
    source:appendline("}")
    source:appendline("")
    
    source:appendline("#endif")
    
    return source:tostr()
end
    

function _M.return_type(t)
    if _M.is_class_type(t) then
        return "Object *"
    end
    if t == "int" then
        return "int64_t "
    end
    if t == "float" or t == "real" then
        return "double "
    end
    return t .. " "
end


function _M.get_icall_type_name(name)
    if _M.is_enum(name) then
        return "int"
    end
    if _M.is_class_type(name) then
        return "Object"
    end
    return name
end


function _M.get_icall_name(sig)
    local ret_type = sig[1]
    local args = sig[2]
    local name = sb.new()

    name:append("___godot_icall_")
    name:append(_M.strip_name(ret_type))
    for arg in ipairs(args) do
        name:append("_" .. _M.strip_name(arg))
    end
    return name
end


function _M.get_used_classes(c)
    local classes = {}
    for _,method in ipairs(c["methods"]) do
        if _M.is_class_type(method["return_type"]) and not contains_val(classes, method["return_type"]) then
            table.insert(classes, method["return_type"])
        end
        
        for _,arg in ipairs(method["arguments"]) do
            if _M.is_class_type(arg["type"]) and not contains_val(classes, arg["type"]) then
                table.insert(classes, arg["type"])
            end
        end
    end
    return classes
end


function _M.strip_name(name)
    if string.byte(name, 1) == string.byte('_') then
        return string.sub(name, 2)
    end
    return name
end


function _M.extract_nested_type(nested_type)
    local pos = string.find(nested_type, "::")
    return _M.strip_name(string.sub(nested_type, 1, pos))
end

function _M.remove_nested_type_prefix(name)
    local pos = string.find(name, "::")
    if pos == nil then 
        return name
    else
        return _M.strip_name(string.sub(name, pos + 2))
    end
end

function _M.remove_enum_prefix(name)
    local pos = string.find(name, "enum.")
    return _M.strip_name(string.sub(name, pos + 5))
end

function _M.is_nested_type(name, type)
    type = type or ""
    return string.find(name, type .. "::") ~= nil
end

function _M.is_enum(name)
    return string.find(name, "enum.") == 1
end

function _M.is_class_type(name)
    return not _M.is_core_type(name) and not _M.is_primitive(name)
end

local primitive_types = {"int", "bool", "real", "float", "void"}

local core_types = {
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
    "Transform",
    "Transform2D",
    "Variant",
    "Vector2",
    "Vector3"
}

local escapes = {
    ["class"]    = "_class",
    ["char"]     = "_char",
    ["short"]    = "_short",
    ["bool"]     = "_bool",
    ["int"]      = "_int",
    ["default"]  = "_default",
    ["case"]     = "_case",
    ["switch"]   = "_switch",
    ["export"]   = "_export",
    ["template"] = "_template",
    ["new"]      = "new_",
    ["operator"] = "_operator"
}

function _M.is_primitive(name)
    return contains_val(primitive_types, name)
end

function _M.is_core_type(name)
    return contains_val(core_types, name)
end

function _M.escape_cpp(name)
    for k, v in pairs(escapes) do
        if k == name then
            return v
        end
    end
    return name
end

function _M.generate_icall_header(icalls)
    
    local source = sb.new()
    source:appendline("//#ifndef GODOT_CPP__ICALLS_HPP")
    source:appendline("//#define GODOT_CPP__ICALLS_HPP")
    
    source:appendline("")
    
    source:appendline("$#include <gdnative_api_struct.gen.h>")
    source:appendline("$#include <stdint.h>")
    source:appendline("")
    
    source:appendline("$#include <core/CoreTypes.hpp>")
    source:appendline("$#include \"Object.hpp\"")
    source:appendline("")
    source:appendline("")
    
    source:appendline("namespace godot {")
    source:appendline("")
    
    for icall in ipairs(icalls) do
        local ret_type = icall[1]
        local args = icall[2]
        
        local method_signature = sb.new()
        
        method_signature:append(_M.return_type(ret_type) .. _M.get_icall_name(icall) .. "(godot_method_bind *mb, godot_object *inst")
        
        for _,arg in iparis(args) do
            method_signature:append(", const ")
            
            if _M.is_core_type(arg) then
                method_signature:append(arg .. "&")
            elseif arg == "float" then
                method_signature:append("double ")
            elseif _M.is_primitive(arg) then
                method_signature:append(arg)
            else
                method_signature:append("Object *")
            end
        end
        
        method_signature:append(");")
        
        source:appendline(method_signature:tostr())
    end
    
    source:appendline("")
    
    source:appendline("}")
    source:appendline("")
    
    source:appendline("//#endif")
    
    return source:tostr()
end

return _M