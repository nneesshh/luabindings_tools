_global_templates = {}

classTemplateClass = {
	name = "",
	body = "",
	parents = {},
	args = {} -- the template arguments
}

classTemplateClass.__index = classTemplateClass

function classTemplateClass:throw(types, local_scope)
	--if #types ~= #self.args then
	--	error("#invalid parameter count")
	--end

	-- replace
	for i = 1, types.n do
		local Il = split_c_tokens(types[i], " ")
		if #Il ~= #self.args then
			error("#invalid parameter count for " .. types[i])
		end
		local bI = self.body
		local pI = {}
		for j = 1, self.args.n do
			--Tl[j] = findtype(Tl[j]) or Tl[j]
			bI = strgsub(bI, "([^_%w])" .. self.args[j] .. "([^_%w])", "%1" .. Il[j] .. "%2")
			if self.parents then
				for i = 1, #self.parents do
					pI[i] = strgsub(self.parents[i], "([^_%w]?)" .. self.args[j] .. "([^_%w]?)", "%1" .. Il[j] .. "%2")
				end
			end
		end
		--local append = "<"..strgsub(types[i], "%s+", ",")..">"
		local append = "<" .. concat(Il, 1, #Il, ",") .. ">"
		append = strgsub(append, "%s*,%s*", ",")
		append = strgsub(append, ">>", "> >")
		for i = 1, #pI do
			--pI[i] = strgsub(pI[i], ">>", "> >")
			pI[i] = resolve_template_types(pI[i])
		end
		bI = strgsub(bI, ">>", "> >")
		local n = self.name
		if local_scope then
			n = self.local_name
		end

		Class(n .. append, pI, bI)
	end
end

function TemplateClass(name, parents, body, parameters)
	local o = {
		parents = parents,
		body = body,
		args = parameters
	}

	local oname = strgsub(name, "@.*$", "")
	oname = getnamespace(classContainer.curr) .. oname
	o.name = oname

	o.local_name = name

	setmetatable(o, classTemplateClass)

	if _global_templates[oname] then
		warning("Duplicate declaration of template " .. oname)
	else
		_global_templates[oname] = o
	end

	return o
end
