tolua++.exe -L "src/basic_patch.lua" -H "out/core/LuaTransform.hpp" -o "out/core/LuaTransform.cpp" pkg/core/Transform.pkg
tolua++.exe -L "src/basic_patch.lua" -H "out/core/LuaTransform2D.hpp" -o "out/core/LuaTransform2D.cpp" pkg/core/Transform2D.pkg
tolua++.exe -L "src/basic_patch.lua" -H "out/core/LuaVariant.hpp" -o "out/core/LuaVariant.cpp" pkg/core/Variant.pkg
tolua++.exe -L "src/basic_patch.lua" -H "out/core/LuaVector2.hpp" -o "out/core/LuaVector2.cpp" pkg/core/Vector2.pkg
tolua++.exe -L "src/basic_patch.lua" -H "out/core/LuaVector3.hpp" -o "out/core/LuaVector3.cpp" pkg/core/Vector3.pkg
