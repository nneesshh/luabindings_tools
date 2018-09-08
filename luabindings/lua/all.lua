package.path = package.path .. ";./lua/?.lua;./lua/?/init.lua;./lua/protobuf/?.lua;./lua/proto_pb/?.lua"
package.cpath = package.cpath .. ";./?.dll;./clibs/?.dll"

package.path = package.path ..";D:/www/_nneesshh_git/ZeroBraneStudio53/lualibs/?/?.lua;D:/www/_nneesshh_git/ZeroBraneStudio53/lualibs/?.lua"
package.cpath = package.cpath .. ";D:/www/_nneesshh_git/ZeroBraneStudio53/bin/?.dll;D:/www/_nneesshh_git/ZeroBraneStudio53/bin/clibs/?.dll"

--require('mobdebug').start('192.168.1.110') --<-- only insert this line

print("\ntolua++: all.lua\n")

dofile(path.."compat.lua")
dofile(path.."basic.lua")
dofile(path.."feature.lua")
dofile(path.."verbatim.lua")
dofile(path.."code.lua")
dofile(path.."typedef.lua")
dofile(path.."container.lua")
dofile(path.."package.lua")
dofile(path.."module.lua")
dofile(path.."namespace.lua")
dofile(path.."define.lua")
dofile(path.."enumerate.lua")
dofile(path.."declaration.lua")
dofile(path.."variable.lua")
dofile(path.."array.lua")
dofile(path.."function.lua")
dofile(path.."operator.lua")
dofile(path.."template_class.lua")
dofile(path.."class.lua")
dofile(path.."clean.lua")
--dofile(path.."custom.lua")
dofile(path.."doit.lua")

local err,msg = xpcall(doit, debug.traceback)
if not err then
--print("**** msg is "..tostring(msg))
 local _,_,label,msg = strfind(msg,"(.-:.-:%s*)(.*)")
 tolua_error(msg,label)
end
