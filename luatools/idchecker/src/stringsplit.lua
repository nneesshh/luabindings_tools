function string:split(sep, max, regexp)
    assert(sep ~= '')
    assert(max == nil or max >= 1)
 
    local record = {}
 
    if self:len() > 0 then
       local plain = not regexp
       max = max or -1
 
       local field, start = 1, 1
       local first, last = self:find(sep, start, plain)
       while first and max ~= 0 do
          record[field] = self:sub(start, first - 1)
          field = field + 1
          start = last + 1
          first,last = self:find(sep, start, plain)
          max = max-1
       end
       record[field] = self:sub(start)
    end
     return record
 end

function string.gsplit(s, sep, plain)
    local start = 1
    local done = false
    local function pass(i, j, ...)
       if i then
          local seg = s:sub(start, i - 1)
          start = j + 1
          return seg, ...
       else
          done = true
          return s:sub(start)
       end
    end
    return function()
       if done then
          return
        end
       if sep == '' then
          done = true
          return s
       end
       return pass(s:find(sep, start, plain))
    end
 end