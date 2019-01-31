local sep1 = "\003"
local sep2 = "%[%["
local sep3 = "[["
local s = "--[[xyz123456789]]"

s = string.gsub(s, sep2, sep1)
print("gsub1:", s, sep1, sep2)
s = string.gsub(s, sep1, sep3)
print("gsub2:", s, sep1, sep2)

print("over")