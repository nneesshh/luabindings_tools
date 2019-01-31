classDefineConst = {}
classDefineConst.__index = classDefineConst
setmetatable(classDefineConst, classFeature)

-- register enumeration
function classDefineConst:register(pre)
	if not self:check_public_access() then
		return
	end

	--
	local nspace = getnamespace(classContainer.curr)
	nspace = strsub(nspace, 1, -3)
	constant_register_hook(pre or "", self.lname, self.name, nspace)
end

-- Print method
function classDefineConst:print(ident, close)
	print(ident .. "DefineConst{")
	print(ident .. " name = " .. self.name)
	local i = 1
	while self[i] do
		print(ident .. " '" .. self[i] .. "'(" .. self.lnames[i] .. "),")
		i = i + 1
	end
	print(ident .. "}" .. close)
end

-- Internal constructor
function _DefineConst(t)
	setmetatable(t, classDefineConst)
	append(t)
	appendenum(t)
	local parent = classContainer.curr
	if parent then
		t.access = parent.curr_member_access
		t.global_access = t:check_public_access()
	end
	return t
end

-- Constructor
-- Expects a string representing vartype and varname
function DefineConst(vartype, varname)
	local ns = getcurrnamespace()
	_global_enum_typenames[ns .. varname] = true

	-- set lua names
	local t = {}
	t.name = varname
	t.lname = varname -- lua name
	if varname ~= "" then
		if vartype then
			Typedef(vartype .. " " .. varname)
		else
			Typedef("int " .. varname)
		end
	end
	return _DefineConst(t)
end
