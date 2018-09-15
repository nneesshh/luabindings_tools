package.path = package.path .. ";./lua/?.lua;./lua/?/init.lua;./lua/protobuf/?.lua;./lua/proto_pb/?.lua"
package.cpath = package.cpath .. ";./?.dll;./clibs/?.dll"

package.path = package.path ..";D:/www/_nneesshh_git/ZeroBraneStudio53/lualibs/?/?.lua;D:/www/_nneesshh_git/ZeroBraneStudio53/lualibs/?.lua"
package.cpath = package.cpath .. ";D:/www/_nneesshh_git/ZeroBraneStudio53/bin/?.dll;D:/www/_nneesshh_git/ZeroBraneStudio53/bin/clibs/?.dll"

require('mobdebug').start('192.168.1.110') --<-- only insert this line

local lib_json = require("json")

local function __load_file_content(filepath)
	local f, err = io.open(filepath, "r")
	if f then
		local contents = f:read("*a")
		io.close(f)
		f = nil
		return contents
	end
end

local function __load_json(path)
	local content = __load_file_content(path)
	if content then
		local data, _, msg = lib_json:decode(content) -- Ignore the second value - it's the character the issue was found on
		return data
	end
end

--
local helper = require("godot_api_helper")

local function __generate_pkg(json_path, pkg_path_base)
    
    local classes = __load_json(json_path)
    
    local icalls = {}
    
    for i, c in ipairs(classes) do
        -- # print c['name']
        local used_classes = helper.get_used_classes(c)
        
        local header = helper.generate_class_header(icalls, used_classes, classes, c)
		
        local pkg_path = pkg_path_base .. "/" .. helper.strip_name(c["name"]) .. ".pkg"
        local pkg_file, err = io.open(pkg_path, "w")
        
        print(i, "generating: " .. pkg_path)
        if not pkg_file then
            print("open file error: ", err)
        else
            pkg_file:write(header)
            pkg_file:close()
        end
	end
    
    --[[
    icall_header_file = open("src/__icalls.hpp", "w+")
    icall_header_file.write(generate_icall_header(icalls))
	]]
end

-- generate
local src = "godot_api.json"
local dst = "pkg"

__generate_pkg(src, dst)