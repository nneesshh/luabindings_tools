-- tolua: declaration class
-- Written by Waldemar Celes
-- TeCGraf/PUC-Rio
-- Jul 1998
-- $Id: $

-- This code is free software; you can redistribute it and/or modify it.
-- The software provided hereunder is on an "as is" basis, and
-- the author has no obligation to provide maintenance, support, updates,
-- enhancements, or modifications.

-- Declaration class
-- Represents variable, function, or argument declaration.
-- Stores the following fields:
--  mod  = type modifiers
--  type = type
--  ptr  = "*" or "&", if representing a pointer or a reference
--  name = name
--  dim  = dimension, if a vector
--  def  = default value, if any (only for arguments)
--  ret  = "*" or "&", if value is to be returned (only for arguments)
classDeclaration = {
  mod = "",
  type = "",
  ptr = "",
  name = "",
  dim = "",
  ret = "",
  def = ""
}
classDeclaration.__index = classDeclaration
setmetatable(classDeclaration, classFeature)

-- Create an unique variable name
function create_varname()
  if not _varnumber then
    _varnumber = 0
  end
  _varnumber = _varnumber + 1
  return "tolua_var_" .. _varnumber
end

-- Check declaration name
-- It also identifies default values
function classDeclaration:checkname()
  if strsub(self.name, 1, 1) == "[" and not findtype(self.type) then
    self.name = self.type .. self.name
    local m = split(self.mod, "%s%s*")
    self.type = m[m.n]
    self.mod = concat(m, 1, m.n - 1)
  end

  local t = split(self.name, "=")
  if t.n == 2 then
    self.name = t[1]
    self.def = find_enum_var(t[t.n])
  end

  local b, e, d = strfind(self.name, "%[(.-)%]")
  if b then
    self.name = strsub(self.name, 1, b - 1)
    self.dim = find_enum_var(d)
  end

  if self.type ~= "" and self.type ~= "void" and self.name == "" then
    self.name = create_varname()
  elseif self.kind == "var" then
    if self.type == "" and self.name ~= "" then
      self.type = self.type .. self.name
      self.name = create_varname()
    elseif findtype(self.name) then
      if self.type == "" then
        self.type = self.name
      else
        self.type = self.type .. " " .. self.name
      end
      self.name = create_varname()
    end
  end

  -- adjust type of string
  if self.type == "char" and self.dim ~= "" then
    self.type = "char*"
  end

  -- convert "::" to "__"
  if self.kind and self.kind == "var" then
    self.name = strgsub(self.name, "::", "__")
  end

  -- adjust "var name" = type
  if self.type == self.name then
    self.name = "p_" .. strlower(self.name)
    print("varname and type conflict adjust: ", self.type, self.name)
  end
end

-- Check declaration type
-- Substitutes typedef's.
function classDeclaration:checktype()
  -- check if there is a pointer to basic type
  local basic = isbasic(self.type)
  if self.kind == "func" and basic == "number" and strfind(self.ptr, "%*") then
    self.type = "_userdata"
    self.ptr = ""
  end
  if basic and self.ptr ~= "" then
    self.ret = self.ptr
    self.ptr = nil
    if isbasic(self.type) == "number" then
      self.return_userdata = true
    end
  end

  -- check if there is array to be returned
  if self.dim ~= "" and self.ret ~= "" then
    error("#invalid parameter: cannot return an array of values")
  end
  -- restore 'void*' and 'string*'
  if self.type == "_userdata" then
    self.type = "void*"
  elseif self.type == "_cstring" then
    self.type = "char*"
  elseif self.type == "_wcstring" then
    self.type = "wchar_t*"
  elseif self.type == "_lstate" then
    self.type = "lua_State*"
  end

  -- resolve types inside the templates
  if self.type then
    self.type = resolve_template_types(self.type)
  end

  --
  -- -- if returning value, automatically set default value
  -- if self.ret ~= '' and self.def == '' then
  --  self.def = '0'
  -- end
  --
end

function resolve_template_types(type_)
  if isbasic(type_) then
    return type_
  end
  local b, _, m = strfind(type_, "(%b<>)")
  if b then
    m = split_c_tokens(strsub(m, 2, -2), ",")
    for i = 1, #m do
      m[i] = strgsub(m[i], "%s*([%*&])", "%1")
      if not isbasic(m[i]) then
        if not isenum(m[i]) then
          _, m[i] = applytypedef("", m[i])
        end
        m[i] = findtype(m[i]) or m[i]
        m[i] = resolve_template_types(m[i])
      end
    end

    local b, i
    type_, b, i = break_template(type_)
    --print("concat is ",concat(m, 1, m.n))
    local template_part = "<" .. concat(m, 1, m.n, ",") .. ">"
    type_ = rebuild_template(type_, b, template_part)
    type_ = strgsub(type_, ">>", "> >")
  end
  return type_
end

function break_template(s)
  local b, e, timpl = strfind(s, "(%b<>)")
  if timpl then
    s = strgsub(s, "%b<>", "")
    return s, b, timpl
  else
    return s, 0, nil
  end
end

function rebuild_template(s, b, timpl)
  if b == 0 then
    return s
  end

  return strsub(s, 1, b - 1) .. timpl .. strsub(s, b, -1)
end

-- Print method
function classDeclaration:print(ident, close)
  print(ident .. "Declaration{")
  print(ident .. " mod  = '" .. self.mod .. "',")
  print(ident .. " type = '" .. self.type .. "',")
  print(ident .. " ptr  = '" .. self.ptr .. "',")
  print(ident .. " name = '" .. self.name .. "',")
  print(ident .. " dim  = '" .. self.dim .. "',")
  print(ident .. " def  = '" .. self.def .. "',")
  print(ident .. " ret  = '" .. self.ret .. "',")
  print(ident .. "}" .. close)
end

-- check if array of values are returned to Lua
function classDeclaration:requirecollection(t)
  if
    self.mod ~= "const" and self.dim and self.dim ~= "" and not isbasic(self.type) and self.ptr == "" and
      self:check_public_access()
   then
    local type_ = strgsub(self.type, "%s*const%s+", "")
    t[type_] = "tolua_collect_" .. clean_template(type_)
    return true
  end
  return false
end

-- declare tag
function classDeclaration:decltype()
  self.type = get_usertype_hook(self.type)
  if strfind(self.mod, "const") then
    self.type = "const " .. self.type
    self.mod = strgsub(self.mod, "const%s*", "")
  end
end

-- output type checking
function classDeclaration:outchecktype(narg)
  local def
  local t = isbasic(self.type)
  if self.def ~= "" then
    def = 1
  else
    def = 0
  end
  if self.dim ~= "" then
    --end
    --if t=='string' then
    --	return 'tolua_isstringarray(tolua_S,'..narg..','..def..',&tolua_err)'
    --else
    return "!tolua_istable(tolua_S," .. narg .. ",0,&tolua_err)"
  elseif t then
    return "!tolua_is" .. t .. "(tolua_S," .. narg .. "," .. def .. ",&tolua_err)"
  else
    local is_func = get_is_function(self.type)
    if self.ptr == "&" or self.ptr == "" then
      return "(tolua_isvaluenil(tolua_S," ..
        narg ..
          ",&tolua_err) || !" .. is_func .. "(tolua_S," .. narg .. ',"' .. self.type .. '",' .. def .. ",&tolua_err))"
    else
      return "!" .. is_func .. "(tolua_S," .. narg .. ',"' .. self.type .. '",' .. def .. ",&tolua_err)"
    end
  end
end

-- declare argument
function classDeclaration:declarearg(narg)
  if self.dim ~= "" and tonumber(self.dim) == nil then
    -- is array
    output("#ifdef __cplusplus\n")
    array_pull_arg_from_stack_hook(self, narg, true)
    output("#else\n")
    array_pull_arg_from_stack_hook(self, narg, false)
    output("#endif\n")
  else
    -- alloc
    local t = isbasic(self.type)
    if t then
      -- basic type
      local line = ""
      local ptr = ""
      local mod = self.mod
      local type_ = self.type
      local nctype = strgsub(self.type, "const%s+", "")

      line = concatparam(line, " ", self.mod, type_, ptr)
      line = concatparam(line, self.name)
      line = concatparam(line, " = ")

      if t == "state" then
        line = concatparam(line, "tolua_S;")
      else
        --print("t is "..tostring(t)..", ptr is "..tostring(self.ptr))
        if t == "number" and strfind(self.ptr, "%*") then
          t = "userdata"
        end

        line = concatparam(line, "((", self.mod, type_)

        line = concatparam(line, ") ")
        if isenum(nctype) then
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

        line = concatparam(line, "tolua_to" .. t .. " (tolua_S,", narg, ",", def, "));")
      end

      output(line)
    else
      -- non-basic type
       pull_arg_from_stack_hook(self, narg)
    end
  end
end

-- Get parameter value
function classDeclaration:getarray(narg)
  if self.dim ~= "" then
    local type_ = strgsub(self.type, "const ", "")
    output("  {")
    output("#ifndef TOLUA_RELEASE\n")
    local def
    if self.def ~= "" then
      def = 1
    else
      def = 0
    end
    local t = isbasic(type_)
    if (t) then
      output("   if (!tolua_is" .. t .. "array(tolua_S,", narg, ",", self.dim, ",", def, ",&tolua_err))\n")
    else
      output("   if (!tolua_isusertypearray(tolua_S,", narg, ',"', type_, '",', self.dim, ",", def, ",&tolua_err))\n")
    end
    output("    goto tolua_lerror;")
    output("   else\n")
    output("#endif\n")
    output("   {")
    output("    int i;")
    output("    for(i=0; i<" .. self.dim .. ";i++)")
    local t = isbasic(type_)
    local ptr = ""
    if self.ptr ~= "" then
      ptr = "*"
    end
    output("   ", self.name .. "[i] = ")
    if not t and ptr == "" then
      output("*")
    end
    output("((", type_)
    if not t then
      output("*")
    end
    output(") ")
    local def = 0
    if self.def ~= "" then
      def = self.def
    end
    if t then
      output("tolua_tofield" .. t .. "(tolua_S,", narg, ",i+1,", def, "));")
    else
      output("tolua_tofieldusertype(tolua_S,", narg, ",i+1,", def, "));")
    end
    output("   }")
    output("  }")
  end
end

-- Get parameter value
function classDeclaration:setarray(narg)
  if not strfind(self.type, "const%s+") and self.dim ~= "" then
    local type_ = strgsub(self.type, "const ", "")
    output("  {")
    output("   int i;")
    output("   for(i=0; i<" .. self.dim .. ";i++)")
    local t, ct = isbasic(type_)
    if t then
      output("    tolua_pushfield" .. t .. "(tolua_S,", narg, ",i+1,(", ct, ")", self.name, "[i]);")
    else
      if self.ptr == "" then
        output("   {")
        output("#ifdef __cplusplus\n")
        output("    " .. tolua_obj_copy_constructor_hook(type_, self.name .. "[i])") .. ";")
        output("    tolua_pushfieldusertype_and_takeownership(tolua_S,", narg, ',i+1,tolua_obj,"', type_, '");')
        output("#else\n")
        output("    void* tolua_obj = tolua_copy(tolua_S,(void*)&", self.name, "[i],sizeof(", type_, "));")
        output("    tolua_pushfieldusertype(tolua_S,", narg, ',i+1,tolua_obj,"', type_, '");')
        output("#endif\n")
        output("   }")
      else
        output("   tolua_pushfieldusertype(tolua_S,", narg, ",i+1,(void*)", self.name, '[i],"', type_, '");')
      end
    end
    output("  }")
  end
end

-- Free dynamically allocated array
function classDeclaration:freearray()
  if self.dim ~= "" and tonumber(self.dim) == nil then
    output("#ifdef __cplusplus\n")
    output("  Mtolua_delete_dim(", self.name, ");")
    output("#else\n")
    output("  free(", self.name, ");")
    output("#endif\n")
  end
end

-- Pass parameter
function classDeclaration:passpar()
  if self.ptr == "&" and not isbasic(self.type) then
    output("*" .. self.name)
  elseif self.ret == "*" then
    output("&" .. self.name)
  else
    output(self.name)
  end
end

-- Return parameter value
function classDeclaration:retvalue()
  if self.ret ~= "" then
    local t, ct = isbasic(self.type)
    if t and t ~= "" then
      output("   tolua_push" .. t .. "(tolua_S,(", ct, ")" .. self.name .. ");")
    else
      local push_func = get_push_function(self.type)
      output("   ", push_func, "(tolua_S,(void*)" .. self.name .. ',"', self.type, '");')
    end
    return 1
  end
  return 0
end

-- Internal constructor
function _Declaration(t)
  setmetatable(t, classDeclaration)
  t:buildnames()
  t:checkname()
  t:checktype()
  local ft = findtype(t.type) or t.type
  if not isenum(ft) then
    t.mod, t.type = applytypedef(t.mod, ft)
  end

  if t.kind == "var" and (strfind(t.mod, "tolua_property%s") or strfind(t.mod, "tolua_property$")) then
    t.mod = strgsub(t.mod, "tolua_property", "tolua_property__" .. get_property_type())
  end

  return t
end

-- Constructor
-- Expects the string declaration.
-- The kind of declaration can be "var" or "func".
function Declaration(s, kind, is_parameter)
  -- eliminate spaces if default value is provided
  s = strgsub(s, "%s*=%s*", "=")
  s = strgsub(s, "%s*<", "<")

  local defb, tmpdef
  defb, _, tmpdef = strfind(s, "(=.*)$")
  if defb then
    s = strgsub(s, "=.*$", "")
  else
    tmpdef = ""
  end
  if kind == "var" then
    -- check the form: void
    if s == "" or s == "void" then
      return _Declaration {type = "void", kind = kind, is_parameter = is_parameter}
    end
  end

  -- check the form: mod type*& name
  local t = split_c_tokens(s, "%*%s*&")
  if t.n == 2 then
    if kind == "func" then
      error("#invalid function return type: " .. s)
    end
    --local m = split(t[1],'%s%s*')
    local m = split_c_tokens(t[1], "%s+")
    return _Declaration {
      name = t[2] .. tmpdef,
      ptr = "*",
      ret = "&",
      --type = rebuild_template(m[m.n], tb, timpl),
      type = m[m.n],
      mod = concat(m, 1, m.n - 1),
      is_parameter = is_parameter,
      kind = kind
    }
  end

  -- check the form: mod type** name
  t = split_c_tokens(s, "%*%s*%*")
  if t.n == 2 then
    if kind == "func" then
      error("#invalid function return type: " .. s)
    end
    --local m = split(t[1],'%s%s*')
    local m = split_c_tokens(t[1], "%s+")
    return _Declaration {
      name = t[2] .. tmpdef,
      ptr = "*",
      ret = "*",
      --type = rebuild_template(m[m.n], tb, timpl),
      type = m[m.n],
      mod = concat(m, 1, m.n - 1),
      is_parameter = is_parameter,
      kind = kind
    }
  end

  -- check the form: mod type& name
  t = split_c_tokens(s, "&")
  if t.n == 2 then
    --local m = split(t[1],'%s%s*')
    local m = split_c_tokens(t[1], "%s+")
    return _Declaration {
      name = t[2] .. tmpdef,
      ptr = "&",
      --type = rebuild_template(m[m.n], tb, timpl),
      type = m[m.n],
      mod = concat(m, 1, m.n - 1),
      is_parameter = is_parameter,
      kind = kind
    }
  end

  -- check the form: mod type* name
  local s1 =
    strgsub(
    s,
    "(%b%[%])",
    function(n)
      return strgsub(n, "%*", "\1")
    end
  )
  t = split_c_tokens(s1, "%*")
  if t.n == 2 then
    t[2] = strgsub(t[2], "\1", "%*") -- restore * in dimension expression
    --local m = split(t[1],'%s%s*')
    local m = split_c_tokens(t[1], "%s+")
    return _Declaration {
      name = t[2] .. tmpdef,
      ptr = "*",
      type = m[m.n],
      --type = rebuild_template(m[m.n], tb, timpl),
      mod = concat(m, 1, m.n - 1),
      is_parameter = is_parameter,
      kind = kind
    }
  end

  if kind == "var" then
    -- check the form: mod type name
    --t = split(s,'%s%s*')
    t = split_c_tokens(s, "%s+")

    local var_, type_, mode_

    -- var name
    var_ = t[t.n]
    if findtype(var_) then
      var_ = create_varname()
    end
    t.n = t.n - 1

    -- type_
    type_ = t[t.n]
    t.n = t.n - 1

    -- mod_
    mod_ = concat(t, 1, t.n)
    t.n = t.n - 1

    -- skip "const" for "dec_type const var;" style code, it leads to "const const"
    if type_ == "const" then
      local s2 = mod_
      type_ = ""
      mod_ = ""

      t = split_c_tokens(s2, "%s+")
      if t.n >= 2 then
        -- type_
        type_ = t[t.n]
        t.n = t.n - 1

        -- mod_
        mod_ = concat(t, 1, t.n)
        t.n = t.n - 1
      end

      -- ensure "const" in mod_
      local b, e, d = strfind(mod_, "const")
      if not b then
        mod_ = mod_ .. " const"
      end
    end

    return _Declaration {
      name = var_ .. tmpdef,
      --type = rebuild_template(type_, tb, timpl),
      type = type_,
      mod = mod_,
      is_parameter = is_parameter,
      kind = kind
    }
  else -- kind == "func"
    -- check the form: mod type name
    --t = split(s,'%s%s*')
    t = split_c_tokens(s, "%s+")
    local v = t[t.n] -- last word is the function name
    local tp, md
    if t.n > 1 then
      tp = t[t.n - 1]
      md = concat(t, 1, t.n - 2)
    end
    --if tp then tp = rebuild_template(tp, tb, timpl) end
    return _Declaration {
      name = v,
      type = tp,
      mod = md,
      is_parameter = is_parameter,
      kind = kind
    }
  end
end
