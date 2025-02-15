Route221_House_MapScripts::
# 2 "data/maps/Route221_House/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route221_House_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route221_House_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Route221_House/scripts.pory"
	switch VAR_ROUTE_221_HOUSE_ITEM
# 4 "data/maps/Route221_House/scripts.pory"
	case 0, Route221_House_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 6 "data/maps/Route221_House/scripts.pory"
	case 1, Route221_House_MapScripts_MAP_SCRIPT_ON_LOAD_4
# 8 "data/maps/Route221_House/scripts.pory"
	case 2, Route221_House_MapScripts_MAP_SCRIPT_ON_LOAD_5
Route221_House_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 11 "data/maps/Route221_House/scripts.pory"
	goto_if_unset FLAG_DAILY_ROUTE_221_LEVEL_SET, Route221_House_MapScripts_MAP_SCRIPT_ON_LOAD_7
Route221_House_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 17 "data/maps/Route221_House/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_ROUTE_221_HOUSE_LEVEL
# 18 "data/maps/Route221_House/scripts.pory"
	bufferitemname STR_VAR_2, VAR_ITEM_ID
	return

Route221_House_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 5 "data/maps/Route221_House/scripts.pory"
	setvar VAR_ITEM_ID, ITEM_BLACK_BELT
	goto Route221_House_MapScripts_MAP_SCRIPT_ON_LOAD_1

Route221_House_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 7 "data/maps/Route221_House/scripts.pory"
	setvar VAR_ITEM_ID, ITEM_EXPERT_BELT
	goto Route221_House_MapScripts_MAP_SCRIPT_ON_LOAD_1

Route221_House_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 9 "data/maps/Route221_House/scripts.pory"
	setvar VAR_ITEM_ID, ITEM_FOCUS_SASH
	goto Route221_House_MapScripts_MAP_SCRIPT_ON_LOAD_1

Route221_House_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 12 "data/maps/Route221_House/scripts.pory"
	random 100
# 13 "data/maps/Route221_House/scripts.pory"
	copyvar VAR_ROUTE_221_HOUSE_LEVEL, VAR_RESULT
# 14 "data/maps/Route221_House/scripts.pory"
	addvar VAR_ROUTE_221_HOUSE_LEVEL, 1
# 15 "data/maps/Route221_House/scripts.pory"
	setflag FLAG_DAILY_ROUTE_221_LEVEL_SET
	goto Route221_House_MapScripts_MAP_SCRIPT_ON_LOAD_6


Route221_House_EventScript_LevelMan::
# 23 "data/maps/Route221_House/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_221_LEVEL_RECEIVED_ITEM, Route221_House_EventScript_LevelMan_2
# 27 "data/maps/Route221_House/scripts.pory"
	msgbox Route221_House_Text_SayTodaysLevel, MSGBOX_NPC
# 28 "data/maps/Route221_House/scripts.pory"
	call Route221_House_CheckPartyMonsForLevel
# 29 "data/maps/Route221_House/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route221_House_EventScript_LevelMan_5
Route221_House_EventScript_LevelMan_1:
	end

Route221_House_EventScript_LevelMan_2:
# 24 "data/maps/Route221_House/scripts.pory"
	msgbox Route221_House_Text_AlreadyReceivedItemToday, MSGBOX_NPC
	goto Route221_House_EventScript_LevelMan_1

Route221_House_EventScript_LevelMan_5:
# 30 "data/maps/Route221_House/scripts.pory"
	msgbox Route221_House_Text_PlayerHasTodaysLevel, MSGBOX_NPC
# 31 "data/maps/Route221_House/scripts.pory"
	giveitem var ( VAR_ITEM_ID )
# 32 "data/maps/Route221_House/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route221_House_EventScript_LevelMan_8
# 37 "data/maps/Route221_House/scripts.pory"
	addvar var ( VAR_ROUTE_221_HOUSE_ITEM ), 1
# 38 "data/maps/Route221_House/scripts.pory"
	compare VAR_ROUTE_221_HOUSE_ITEM > 2, 0
	goto_if_ne Route221_House_EventScript_LevelMan_11
Route221_House_EventScript_LevelMan_10:
# 41 "data/maps/Route221_House/scripts.pory"
	setflag flag ( FLAG_DAILY_ROUTE_221_LEVEL_RECEIVED_ITEM )
	goto Route221_House_EventScript_LevelMan_1

Route221_House_EventScript_LevelMan_8:
# 33 "data/maps/Route221_House/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 34 "data/maps/Route221_House/scripts.pory"
	release
	end

Route221_House_EventScript_LevelMan_11:
# 39 "data/maps/Route221_House/scripts.pory"
	setvar var ( VAR_ROUTE_221_HOUSE_ITEM ), 0
	goto Route221_House_EventScript_LevelMan_10


Route221_House_CheckPartyMonsForLevel::
# 48 "data/maps/Route221_House/scripts.pory"
	specialvar var ( VAR_ROUTE_221_HOUSE_LEVEL ), CheckForLevelInParty
# 49 "data/maps/Route221_House/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_ne Route221_House_CheckPartyMonsForLevel_2
Route221_House_CheckPartyMonsForLevel_1:
	return

Route221_House_CheckPartyMonsForLevel_2:
# 50 "data/maps/Route221_House/scripts.pory"
	bufferpartymonnick var ( STR_VAR_3, var ( VAR_RESULT ) )
# 51 "data/maps/Route221_House/scripts.pory"
	setvar var ( VAR_RESULT ), TRUE
	goto Route221_House_CheckPartyMonsForLevel_1


Route221_House_Text_SayTodaysLevel::
# 56 "data/maps/Route221_House/scripts.pory"
	.string "...I saw it!\n"
	.string "Today's number is {STR_VAR_1}!\p"
	.string "Show me a Pokemon that's Level\n"
	.string "{STR_VAR_1}.\n"
	.string "If you can, I'll reward you.$"

Route221_House_Text_PlayerHasTodaysLevel::
# 60 "data/maps/Route221_House/scripts.pory"
	.string "...Oh, now, hunh?!\p"
	.string "Your {STR_VAR_3} is Level\n"
	.string "{STR_VAR_1}.\n"
	.string "Well, I'll be! How remarkable!\p"
	.string "I'll thank you for that visual treat\n"
	.string "with this {STR_VAR_2}.$"

Route221_House_Text_AlreadyReceivedItemToday::
# 64 "data/maps/Route221_House/scripts.pory"
	.string "High-level Pokemon were once of low\n"
	.string "level\p"
	.string "Low-level Pokemon will not remain so,\n"
	.string "for they can only grow.\p"
	.string "That's how it goes, youngster.\n"
	.string "Come again tomorrow.$"
