@echo "---------------- start debugging ----------------"
SET ZBS=D:\www\_nneesshh_git\ZeroBraneStudio53
SET LUA_PATH=./?.lua;./lua/?.lua;./lua/?/init.lua;./src/?.lua;./src/?/init.lua;%ZBS%/lualibs/?/?.lua;%ZBS%/lualibs/?.lua
SET LUA_CPATH=./?.dll;%ZBS%/bin/?.dll;%ZBS%/bin/clibs/?.dll
tolua++ -L "src/basic_patch.lua" -H "out/LuaPressTest.h" -o "out/LuaPressTest.cpp" -n "press_test" "pkg/PressTest.pkg"