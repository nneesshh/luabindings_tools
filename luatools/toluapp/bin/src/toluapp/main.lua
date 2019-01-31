local dofile = dofile
--local print = print
--local debug = debug
--local tostring = tostring
--local xpcall = xpcall

--local function _main()
	path = path or "src/toluapp/"
	dofile(path .. "all.lua")	
--end

--[[
local function __TRACKBACK__(errmsg)
	local track_text = debug.traceback(tostring(errmsg), 6)
	local exception_text = "\n"
 .. "---------------------------------------- TRACKBACK ----------------------------------------\nLUA EXCEPTION:\n\n"
 .. track_text.. "\n\n"
 .. "---------------------------------------- TRACKBACK ----------------------------------------\n\n"
	return exception_text
end

local status, text = xpcall(_main, __TRACKBACK__)
if not status then
    print(text)
end
]]