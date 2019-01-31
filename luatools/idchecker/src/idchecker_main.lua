local iconv = require("iconv")
require "stringsplit"
local rule = require "idchecker_rule"
require "idchecker_config"

_g_subtype_cache = {}

local function _split2d(str, sep1, sep2)
    local t1, t2
    t1 = str:split(sep1)
    for i, v in ipairs(t1) do
        t2 = v:split(sep2)
        t1[i] = t2
    end
    return t1
end

local function _trim(s)
    local n = s:find"%S"
    return n and s:match(".*%S", n) or ""
 end

local function _get_meta_by_subtype(meta, subtype_key)
    return meta[subtype_key]
end

local function _create_selfid_list(self_dict, selfid_name)
    local selfid_list = {}

    for key, record in pairs(self_dict) do
        --
        if type(selfid_name) == "string" then
            local eval = record[selfid_name]
            table.insert(selfid_list, _trim(tostring(eval)))
        else 
            table.insert(selfid_list, _trim(tostring(key)))
        end
    end
    return selfid_list
end

local function _create_sourceid_list(record, fragment, check_rule, subtype)
    local sourceid_list = {}
    if fragment then
        local srcid = nil
        local idpos = tonumber(check_rule.idpos)
        if idpos and idpos > 0 then
            -- use idpos first
            srcid = _trim(tostring(fragment[idpos]))
            if srcid then
                -- skip nil and zero
                local num = tonumber(srcid)
                if num and num ~= 0 then
                    table.insert(sourceid_list, srcid)
                end
            end
        else
            -- use subtype first
            local subtype_key = _trim(tostring(subtype))
            local meta_ = _get_meta_by_subtype(check_rule.meta, subtype_key)
            if meta_ then
                local sourceid_detail = meta_["sourceid"]
                if sourceid_detail then
                    local start_pos = sourceid_detail.start_pos
                    local end_pos = sourceid_detail.end_pos
                    local source_field = sourceid_detail.source_field

                    if not start_pos then
                        -- no start_pos means no sourceid to collect
                    else
                        start_pos = (start_pos >= 1) and start_pos or 1

                        if end_pos and type(end_pos) == "number" and (-1 == end_pos) then
                            end_pos = #fragment
                        else
                            end_pos = end_pos and (end_pos >= start_pos) and end_pos or start_pos
                        end

                        if not source_field then
                            -- use fragment as sourceid table
                            local stbl = fragment
                            for i=start_pos, end_pos do
                                srcid = _trim(tostring(stbl[i]))
                                if srcid then
                                    -- skip nil and zero
                                    local num = tonumber(srcid)
                                    if num and num ~= 0 then
                                        table.insert(sourceid_list, srcid)
                                    end
                                end
                            end
                        else
                            -- need to parse source id again
                            local sval = record[source_field]
                            local stbl = _split2d(tostring(sval), '|', ':')
                            for _, v in ipairs(stbl) do
                                for i=start_pos, end_pos do
                                    srcid = _trim(tostring(v[i]))
                                    if srcid then
                                        -- skip nil and zero
                                        local num = tonumber(srcid)
                                        if num and num ~= 0 then
                                            table.insert(sourceid_list, srcid)
                                        end
                                    end
                                end
                            end
                        end
                    end
                else
                    --
                    local output = string.format("\n\tCHECK_ERROR: soureid detail missing: subtype(\"%d\")!!!\n", subtype)
                    print(output)
                    error("abort")   
                end
            else
                 --
                 local output = string.format("\n\tCHECK_ERROR: type meta not exist: subtype(\"%d\")!!!\n", subtype)
                 print(output)
                 error("abort")
            end
        end
    end
    return sourceid_list
end

local function _create_targetid_list(check_rule, subtype, selfid_list)
    -- 
    if 0 > subtype then
        return selfid_list
    else
        -- exist in cache?
        local subtype_key = _trim(tostring(subtype))
        local targetid_list = _g_subtype_cache[subtype_key]
        if not targetid_list then
            -- create new list
            targetid_list = {}

            local meta_ = _get_meta_by_subtype(check_rule.meta, subtype_key)
            if meta_ then
                local target_dict_name = meta_["dict"]
                --require("data." .. target_dict_name)
                local target_dict = _G[target_dict_name]
                if not target_dict then
                    -- skip
                else
                    -- collect targetid list
                    local targetid_name = meta_["id"]
                    local found = false
                    for k, v in pairs(target_dict) do
                        local dstid = v[targetid_name]
                        if dstid then
                            local dst = _trim(tostring(dstid))
                            table.insert(targetid_list, dst)
                        end
                    end
                end
            else
                --
                local output = string.format("\n\tCHECK_ERROR: type meta not exist: subtype(\"%d\")!!!\n", subtype)
                print(output)
                error("abort")
            end

            -- store into cache
            _g_subtype_cache[subtype_key] = targetid_list
        end
        return targetid_list
    end
end

-- fragment table is the base check unit of parsed result, just like "10001:1" among " 10001:1|10002:1|10003:1"
local function _check_record_entry_fragment(record, fragment, check_rule, subtype, selfid_list)
    local bfound = false

    local sourceid_list = _create_sourceid_list(record, fragment, check_rule, subtype)
    local targetid_list = _create_targetid_list(check_rule, subtype, selfid_list)

    if 0 == #sourceid_list then
        print("\t\tSkip, subtype: ", subtype)
    else
        print("\t\tSource id list:", table.concat(sourceid_list, ','))
        for _1, sourceid in ipairs(sourceid_list) do
            for _2, targetid in ipairs(targetid_list) do
                if sourceid == targetid then
                    bfound = true
                    break
                end
            end

            if not bfound then
                local output = string.format("\n\tCHECK_ERROR: sourceid=%s match failed!!!\n", sourceid)
                print(output)
                error("abort")
                return false
            end
        end
    end
    return true
end

-- eval is the entry string include " : | ", such as " 10001:1|10002:1|10003:1"
local function _check_record_entry(record, eval, check_rule, selfid_list)
    -- t is the full parsed result of eval
    local t = _split2d(tostring(eval), '|', ':')
    for i, v in ipairs(t) do
        assert(check_rule.idpos <= #v)

        -- default subutype value is 0, means no subtype occur in entry
        local subtype = 0
        local subtypepos = tonumber(check_rule.subtypepos)

        if subtypepos < 0 then
            subtype = -1
        elseif subtypepos > 0 and v[subtypepos] then
            subtype = tonumber(v[subtypepos])
        end

        --
        _check_record_entry_fragment(record, v, check_rule, subtype, selfid_list)
    end
end

local function _do_check()

    for key, cfg in pairs(idchecker_config) do
        local source_dict_name = cfg.source
        --require("data." .. source_dict_name)
        local source_dict = _G[source_dict_name]
        if nil == source_dict then
            print("Source dict does not exist: ", source_dict_name)
            return false
        end

        local sourceid_name = cfg["sourceid"]

        print("[" .. key .. "] Start checking source dict: ", source_dict_name, ", sourceid_name:", sourceid_name)
        _g_subtype_cache = {}

        local check_field_name = cfg["check_field"]
        local check_type_name = cfg["check_type"]

        local cd = iconv.new("gb2312", "utf-8")
        local check_type_name936, err = cd:iconv(check_type_name)

        print("\t check_field_name -->", check_field_name)
        print("\t check_type_name  -->", check_type_name, "--", check_type_name936)

        local selfid_list = _create_selfid_list(source_dict, sourceid_name)
        local check_rule = rule[check_type_name]

        local count = 0
        for rkey, record in pairs(source_dict) do
            --
            local eval = record[check_field_name]
            if not eval then
                local output = string.format("\n\tCHECK_ERROR: check_field(%s) does not exist!!!\n", check_field_name)
                print(output)
                error("abort")
            else
                count = count + 1
                print("\n\t<" .. tostring(count) .. ">[" .. rkey .. "] checking: \"" .. eval .. "\"")

                --
                _check_record_entry(record, eval, check_rule, selfid_list)
            end
        end
    end
end

--
_do_check()