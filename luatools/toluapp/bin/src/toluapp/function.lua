-- tolua: function class
-- Written by Waldemar Celes
-- TeCGraf/PUC-Rio
-- Jul 1998
-- $Id: $

-- This code is free software; you can redistribute it and/or modify it.
-- The software provided hereunder is on an "as is" basis, and
-- the author has no obligation to provide maintenance, support, updates,
-- enhancements, or modifications.

-- Function class
-- Represents a function or a class method.
-- The following fields are stored:
--  mod  = type modifiers
--  type = type
--  ptr  = "*" or "&", if representing a pointer or a reference
--  name = name
--  lname = lua name
--  args  = list of argument declarations
--  const = if it is a method receiving a const "this".
classFunction = {
	mod = "",
	type = "",
	ptr = "",
	name = "",
	args = {n = 0},
	const = ""
}
classFunction.__index = classFunction
setmetatable(classFunction, classFeature)

-- declare tags
function classFunction:decltype()
	self.type = get_usertype_hook(self.type)
	if strfind(self.mod, "const") then
		self.type = "const " .. self.type
		self.mod = strgsub(self.mod, "const", "")
	end
	local i = 1
	while self.args[i] do
		self.args[i]:decltype()
		i = i + 1
	end
end

-- Write binding function
-- Outputs C/C++ binding function.
function classFunction:supcode(local_constructor)
	local overload = strsub(self.cname, -2, -1) - 1 -- indicate overloaded func
	local nret = 0 -- number of returned values
	local class = self:inclass()
	if class then
		if self.name == "new" and self.parent.flags.pure_virtual then
			-- no constructor for classes with pure virtual methods
			return
		end

		if local_constructor then
			output("/* method: new_local of class ", class, " */")
		else
			output("/* method:", self.name, " of class ", class, " */")
		end
	else
		output("/* function:", self.name, " */")
	end

	if local_constructor then
		output("#ifndef TOLUA_DISABLE_" .. self.cname .. "_local")
		output("\nstatic int", self.cname .. "_local", "(lua_State* tolua_S)")
	else
		output("#ifndef TOLUA_DISABLE_" .. self.cname)
		output("\nstatic int", self.cname, "(lua_State* tolua_S)")
	end
	output("{")

	-- check types
	if overload < 0 then
		output("#ifndef TOLUA_RELEASE\n")
	end
	output(" tolua_Error tolua_err;")
	output(" if (\n")
	
	-- check self
	local narg
	if class then
		narg = 2
	else
		narg = 1
	end

	local _, _, is_static = strfind(self.mod, "^%s*(static)")

	if class then
		local func = get_is_function(self.parent.type)
		local type_ = self.parent.type
		if self.name == "new" or is_static ~= nil then
			func = "tolua_isusertable"
			type_ = self.parent.type
		end
		if self.const ~= "" then
			type_ = "const " .. type_
		end
		output("     !" .. func .. '(tolua_S,1,"' .. type_ .. '",0,&tolua_err) ||\n')
	end

	-- check args
	if self.args[1].type ~= "void" then
		local i = 1
		while self.args[i] do
			local btype = isbasic(self.args[i].type)
			if btype ~= "value" and btype ~= "state" then
				output("     " .. self.args[i]:outchecktype(narg) .. " ||\n")
			end
			if btype ~= "state" then
				narg = narg + 1
			end
			i = i + 1
		end
	end

	-- check end of list
	output("     !tolua_isnoobj(tolua_S," .. narg .. ",&tolua_err)\n )\n")
	output("  goto tolua_lerror;")

	output(" else\n")
	if overload < 0 then
		output("#endif\n")
	end
	output(" {")

	--
	local narg
	if class then
		narg = 2
	else
		narg = 1
	end

	-- declare self, if the case
	pull_self_from_stack_hook(self, class, is_static)

	-- declare parameters
	if self.args[1].type ~= "void" then
		local i = 1
		while self.args[i] do
			self.args[i]:declarearg(narg)
			if isbasic(self.args[i].type) ~= "state" then
				narg = narg + 1
			end
			i = i + 1
		end
	end

	-- get array element values
	if class then
		narg = 2
	else
		narg = 1
	end
	if self.args[1].type ~= "void" then
		local i = 1
		while self.args[i] do
			self.args[i]:getarray(narg)
			narg = narg + 1
			i = i + 1
		end
	end

	pre_call_hook(self)

	local is_outside = strfind(self.mod, "tolua_outside")
	
	-- call function
	if class and self.name == "delete" then
		output(get_destructor_function() .. ";")
	elseif class and self.name == "operator&[]" then
		-- substracts 1 from the index on operator[] functions, for compatibility 
		-- with lua's method for indexing arrays (1 is the first element)
		output("  self->operator[](", self.args[1].name, "-1) = ", self.args[2].name, ";")
	else
		output("  {")

		-- call signature hook
		if class and self.name == "new" then
			call_new_method_hook(self, class, is_static, is_outside)
		elseif class and is_static then
			call_static_method_hook(self, class, is_static, is_outside)
		elseif class then
			call_member_method_hook(self, class, is_static, is_outside)
		else
			call_simple_method_hook(self, class, is_static, is_outside)
		end

		-- return values
		if self.type ~= "" and self.type ~= "void" then
			nret = nret + 1
			local t, ct = isbasic(self.type)
			if t then
				if self.cast_operator and _basic_raw_push[t] then
					output("   ", _basic_raw_push[t], "(tolua_S,(", ct, ")tolua_ret);")
				else
					output("   tolua_push" .. t .. "(tolua_S,(", ct, ")tolua_ret);")
				end
			else
				t = self.type

				if _global_enum_typenames[t] then
					t = "integer"
					ct = "int"
					output("   tolua_push" .. t .. "(tolua_S,(", ct, ")tolua_ret);")
				else
					new_t = strgsub(t, "const%s+", "")
					local owned = false
					if strfind(self.mod, "tolua_owned") then
						owned = true
					end
					local push_func = get_push_function(t)
					if self.ptr == "" then
						output("   {")
						output("#ifdef __cplusplus\n")
						output("    " .. tolua_obj_copy_constructor_hook(new_t, "tolua_ret") .. ");")
						output("    " .. push_func .. '(tolua_S,tolua_obj,"', t, '");')
						output("    tolua_register_gc(tolua_S,lua_gettop(tolua_S));")
						output("#else\n")
						output("    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(", t, "));")
						output("    " .. push_func .. '(tolua_S,tolua_obj,"', t, '");')
						output("    tolua_register_gc(tolua_S,lua_gettop(tolua_S));")
						output("#endif\n")
						output("   }")
					elseif self.ptr == "&" then
						output("   " .. push_func .. '(tolua_S,(void*)&tolua_ret,"', t, '");')
					else
						output("   " .. push_func .. '(tolua_S,(void*)tolua_ret,"', t, '");')
						if owned or local_constructor then
							output("    tolua_register_gc(tolua_S,lua_gettop(tolua_S));")
						end
					end
				end
			end
		end
		local i = 1
		while self.args[i] do
			nret = nret + self.args[i]:retvalue()
			i = i + 1
		end
		output("  }")

		-- set array element values
		if class then
			narg = 2
		else
			narg = 1
		end
		if self.args[1].type ~= "void" then
			local i = 1
			while self.args[i] do
				self.args[i]:setarray(narg)
				narg = narg + 1
				i = i + 1
			end
		end

		-- free dynamically allocated array
		if self.args[1].type ~= "void" then
			local i = 1
			while self.args[i] do
				self.args[i]:freearray()
				i = i + 1
			end
		end
	end

	post_call_hook(self)

	output(" }")
	output(" return " .. nret .. ";")

	-- call overloaded function or generate error
	if overload < 0 then
		output("#ifndef TOLUA_RELEASE\n")
		output("tolua_lerror:\n")
		output(' tolua_error(tolua_S,"' .. output_error_hook("#ferror in function '%s'.", self.lname) .. '",&tolua_err);')
		output(" return 0;")
		output("#endif\n")
	else
		local _local = ""
		if local_constructor then
			_local = "_local"
		end
		output("tolua_lerror:\n")
		output(" return " .. strsub(self.cname, 1, -3) .. strformat("%02d", overload) .. _local .. "(tolua_S);")
	end
	output("}")
	output("#endif //#ifndef TOLUA_DISABLE\n")
	output("\n")

	-- recursive call to write local constructor
	if class and self.name == "new" and not local_constructor then
		self:supcode(1)
	end
end

-- register function
function classFunction:register(pre)
	if not self:check_public_access() then
		return
	end

	if self.name == "new" and self.parent.flags.pure_virtual then
		-- no constructor for classes with pure virtual methods
		return
	end

	output(pre .. 'tolua_function(tolua_S,"' .. self.lname .. '",' .. self.cname .. ");")

	if self.name == "new" then
		output(pre .. 'tolua_function(tolua_S,"new_local",' .. self.cname .. "_local);")
		output(pre .. 'tolua_function(tolua_S,".call",' .. self.cname .. "_local);")
	--output(' tolua_set_call_event(tolua_S,'..self.cname..'_local, "'..self.parent.type..'");')
	end
end

-- Print method
function classFunction:print(ident, close)
	print(ident .. "Function{")
	print(ident .. " mod  = '" .. self.mod .. "',")
	print(ident .. " type = '" .. self.type .. "',")
	print(ident .. " ptr  = '" .. self.ptr .. "',")
	print(ident .. " name = '" .. self.name .. "',")
	print(ident .. " lname = '" .. self.lname .. "',")
	print(ident .. " const = '" .. self.const .. "',")
	print(ident .. " cname = '" .. self.cname .. "',")
	print(ident .. " lname = '" .. self.lname .. "',")
	print(ident .. " args = {")
	local i = 1
	while self.args[i] do
		self.args[i]:print(ident .. "  ", ",")
		i = i + 1
	end
	print(ident .. " }")
	print(ident .. "}" .. close)
end

-- check if it returns an object by value
function classFunction:requirecollection(t)
	local r = false
	if self.type ~= "" and not isbasic(self.type) and not isenum(self.type) and self.ptr == "" then
		local type_ = strgsub(self.type, "%s*const%s+", "")
		t[type_] = "tolua_collect_" .. clean_template(type_)
		r = true
	end
	local i = 1
	while self.args[i] do
		r = self.args[i]:requirecollection(t) or r
		i = i + 1
	end
	return r
end

-- determine lua function name overload
function classFunction:overload()
	return self.parent:overload(self.lname)
end

function param_object(par) -- returns true if the parameter has an object as its default value
	if not strfind(par, "=") then
		return false
	end -- it has no default value

	local _, _, def = strfind(par, "=(.*)$")

	if strfind(par, "|") then -- a list of flags
		return true
	end

	if strfind(par, "%*") then -- it's a pointer with a default value
		if strfind(par, "=%s*new") or strfind(par, "%(") then -- it's a pointer with an instance as default parameter.. is that valid?
			return true
		end
		return false -- default value is 'NULL' or something
	end

	if strfind(par, "[%(&]") then
		return true
	end -- default value is a constructor call (most likely for a const reference)

	--if strfind(par, "&") then

	--	if strfind(def, ":") or strfind(def, "^%s*new%s+") then

	--		-- it's a reference with default to something like Class::member, or 'new Class'
	--		return true
	--	end
	--end

	return false -- ?
end

function strip_last_arg(all_args, last_arg) -- strips the default value from the last argument
	local _, _, s_arg = strfind(last_arg, "^([^=]+)")
	last_arg = strgsub(last_arg, "([%%%(%)])", "%%%1")
	all_args = strgsub(all_args, "%s*,%s*" .. last_arg .. "%s*%)%s*$", ")")
	return all_args, s_arg
end

-- Internal constructor
function _Function(t)
	setmetatable(t, classFunction)

	if t.const ~= "const" and t.const ~= "" then
		error("#invalid 'const' specification")
	end

	append(t)
	if t:inclass() then
		--print ('t.name is '..t.name..', parent.name is '..t.parent.name)
		if strgsub(t.name, "%b<>", "") == strgsub(t.parent.original_name or t.parent.name, "%b<>", "") then
			t.name = "new"
			t.lname = "new"
			t.parent._new = true
			t.type = t.parent.name
			t.ptr = "*"
		elseif strgsub(t.name, "%b<>", "") == "~" .. strgsub(t.parent.original_name or t.parent.name, "%b<>", "") then
			t.name = "delete"
			t.lname = "delete"
			t.parent._delete = true
		end
	end
	t.cname = t:cfuncname("tolua") .. t:overload(t)
	return t
end

-- Constructor
-- Expects three strings: one representing the function declaration,
-- another representing the argument list, and the third representing
-- the "const" or empty string.
function Function(d, a, c) --declare,arguments,constant
	--local t = split(strsub(a,2,-2),',') -- eliminate braces
	--local t = split_params(strsub(a,2,-2))

	if not flags["W"] and strfind(a, "%.%.%.%s*%)") then
		warning("Functions with variable arguments (`...') are not supported. Ignoring " .. d .. a .. c)
		return nil
	end

	local i = 1
	local l = {n = 0}

	a = strgsub(a, "%s*(%b%(%))%s*", "%1")
	local t, strip, last = strip_pars(strsub(a, 2, -2))
	if strip then
		--local ns = strsub(strsub(a,1,-2), 1, -(strlen(last)+1))
		local ns = join(t, ",", 1, last - 1)

		ns = "(" .. strgsub(ns, "%s*,%s*$", "") .. ")"
		--ns = strip_defaults(ns)

		local f = Function(d, ns, c)
		for i = 1, last do
			t[i] = strgsub(t[i], "=.*$", "")
		end
	end

	while t[i] do
		l.n = l.n + 1
		l[l.n] = Declaration(t[i], "var", true)
		i = i + 1
	end

	local f = Declaration(d, "func")
	f.args = l
	f.const = c
	return _Function(f)
end

function join(t, sep, first, last)
	first = first or 1
	last = last or #t
	local lsep = ""
	local ret = ""
	local loop = false
	for i = first, last do
		ret = ret .. lsep .. t[i]
		lsep = sep
		loop = true
	end
	if not loop then
		return ""
	end

	return ret
end

function strip_pars(s)
	local t = split_c_tokens(s, ",")
	local strip = false
	local last

	for i = t.n, 1, -1 do
		if not strip and param_object(t[i]) then
			last = i
			strip = true
		end
		--if strip then
		--	t[i] = strgsub(t[i], "=.*$", "")
		--end
	end

	return t, strip, last
end

function strip_defaults(s)
	s = strgsub(s, "^%(", "")
	s = strgsub(s, "%)$", "")

	local t = split_c_tokens(s, ",")
	local sep, ret = "", ""
	for i = 1, t.n do
		t[i] = strgsub(t[i], "=.*$", "")
		ret = ret .. sep .. t[i]
		sep = ","
	end

	return "(" .. ret .. ")"
end
