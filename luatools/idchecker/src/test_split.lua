require "stringsplit"

local function test(s,sep,expect)
    local t={} for c in s:gsplit(sep) do table.insert(t,c) end
    assert(#t == #expect)

    print("test:", s, sep)
    for i=1,#t do
        assert(t[i] == expect[i])
        print(t[i])
    end
--    test(t, expect)
 end
 test('','',{''})
 test('','asdf',{''})
 test('asdf','',{'asdf'})
 test('', ',', {''})
 test(',', ',', {'',''})
 test('a', ',', {'a'})
 test('a,b', ',', {'a','b'})
 test('a,b,', ',', {'a','b',''})
 test(',a,b', ',', {'','a','b'})
 test(',a,b,', ',', {'','a','b',''})
 test(',a,,b,', ',', {'','a','','b',''})
 test('a,,b', ',', {'a','','b'})
 test('asd  ,   fgh  ,;  qwe, rty.   ,jkl', '%s*[,.;]%s*', {'asd','fgh','','qwe','rty','','jkl'})
 test('Spam eggs spam spam and ham', 'spam', {'Spam eggs ',' ',' and ham'})