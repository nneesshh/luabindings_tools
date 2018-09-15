local _M = {
	
}

function _M:append(str)
    if str then
        table.insert(self, str)
    end
end

function _M:appendline(str)
    if str then
        table.insert(self, str..'\n')
    else
        table.insert(self, '\n')
    end
end

function _M:tostr()
    return table.concat(self)
end

function _M.new() 
    return setmetatable({}, 
                        {
                            __index = _M,
                            __newindex = function(t, k, v)
                                _M.appendline(t, v)
                            end,
                            __tostring = _M.tostr
                        })
end

return _M