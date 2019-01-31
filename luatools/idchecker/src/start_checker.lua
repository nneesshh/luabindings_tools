package.path = package.path .. ";./?.lua;./lua/?.lua;./lua/?/init.lua;./src/?.lua;./src/?/init.lua;./lua/protobuf/?.lua;./lua/proto_pb/?.lua"
package.cpath = package.cpath .. ";./?.dll;./clibs/?.dll"

package.path = package.path .. ";./config/?.lua;./config/?/init.lua;./data/?.lua;./data/?/init.lua;"

require "config_all"
require "config_fight"

require "idchecker_main"
print("\n================================ check success. ================================")