-- subtypepos = -1: means search self dict,
-- subtypepos =  0: means default, subtype value is "0"
-- subtypepos >  0: means parse subtype value from subtypepos first, then
--                  search matched meta by subtype value
-- if idpos = 0, we will use "subtypepos" first(it must be positive), then we will search "sourceid" in meta
-- end_pos = -1 means the full length of source element

local _M = {
    ["道具奖励"] = {
        idpos = 1,
        subtypepos = 2,
        meta = {
                ["0"] = { dict = "ItemDic", id = "id" },
                ["1"] = { dict = "ItemDic", id = "id" },
                ["2"] = { dict = "CardDic", id = "id" },
                ["3"] = { dict = "ModelDic", id = "id" }, 
                ["4"] = { dict = "FacilityDic", id = "id" },
                ["5"] = { dict = "FormulaDic", id = "id" }, 
                ["6"] = { dict = "MonthGiftDic", id = "id" }, -- 月卡
        },
    },
    ["日常任务条件"] = {
        idpos = 0, -- sourceid pos， 0 means the position rely on subtype meta
        subtypepos = 1,
        meta = {
                ["1"] = { dict = "CustomerDic", id = "id", sourceid = { start_pos = 1, source_field = "condition" } },
                ["2"] = { dict = "EquipDic", id = "id", sourceid = { start_pos = 1, source_field = "condition" } },
                ["3"] = { dict = "FacilityDic", id = "id", sourceid = { start_pos = 1, source_field = "condition" } },
                ["11"] = { dict = "", id = "", sourceid = { --[[ skip ]] } },
                ["12"] = { dict = "FormulaDic", id = "id", sourceid = { start_pos = 2, source_field = "condition" } },
                ["13"] = { dict = "", id = "", sourceid = { --[[ skip ]] } },
                ["14"] = { dict = "SceneDic", id = "sceneid", sourceid = { start_pos = 2, source_field = "condition" } },                
                ["15"] = { dict = "", id = "", sourceid = { --[[ skip ]] } },
                ["16"] = { dict = "", id = "", sourceid = { --[[ skip ]] } },
                ["17"] = { dict = "", id = "", sourceid = { --[[ skip ]] } },
                ["18"] = { dict = "", id = "", sourceid = { --[[ skip ]] } },
                ["19"] = { dict = "", id = "", sourceid = { --[[ skip ]] } },
                ["20"] = { dict = "", id = "", sourceid = { --[[ skip ]] } },
                ["21"] = { dict = "", id = "", sourceid = { --[[ skip ]] } },
                ["22"] = { dict = "", id = "", sourceid = { --[[ skip ]] } },
                ["23"] = { dict = "", id = "", sourceid = { --[[ skip ]] } },
                ["24"] = { dict = "", id = "", sourceid = { --[[ skip ]] } },
                ["31"] = { dict = "", id = "", sourceid = { --[[ skip ]] } },
                ["32"] = { dict = "", id = "", sourceid = { --[[ skip ]] } },
                ["33"] = { dict = "", id = "", sourceid = { --[[ skip ]] } },
                ["34"] = { dict = "", id = "", sourceid = { --[[ skip ]] } },
                ["35"] = { dict = "", id = "", sourceid = { --[[ skip ]] } },
                ["36"] = { dict = "", id = "", sourceid = { --[[ skip ]] } },
                ["37"] = { dict = "", id = "", sourceid = { --[[ skip ]] } },
        },
    },
}
return _M