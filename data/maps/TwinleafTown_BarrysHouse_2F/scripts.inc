TwinleafTown_BarrysHouse_2F_MapScripts::
# 2 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTown_BarrysHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TwinleafTown_BarrysHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	map_script_2 VAR_BARRY_STATE, 1, TwinleafTown_BarrysHouse_2F_EventScript_Barry
	.2byte 0


TwinleafTown_BarrysHouse_2F_EventScript_Barry::
# 8 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	lock
# 9 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	msgbox TwinleafTown_BarrysHouse_2F_Text_Barry1
# 10 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	closemessage
# 11 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	applymovement 1, TwinleafTown_BarrysHouse_2F_EventScript_Barry_Movement_0
# 12 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 13 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	waitmovement 0
# 14 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	delay 48
# 15 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	msgbox TwinleafTown_BarrysHouse_2F_Text_Barry2
# 16 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	closemessage
# 17 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	applymovement 1, TwinleafTown_BarrysHouse_2F_EventScript_Barry_Movement_1
# 21 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	waitmovement 0
# 22 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_BarrysHouse_2F_EventScript_Barry_Movement_2
# 26 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	applymovement 1, TwinleafTown_BarrysHouse_2F_EventScript_Barry_Movement_3
# 29 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	waitmovement 0
# 30 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	removeobject 1
# 31 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	setflag FLAG_HIDE_BARRY_BARRYS_HOUSE_2F
# 32 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_BARRY_ROUTE_201
# 33 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	setvar VAR_BARRY_STATE, 2
	return


# 11 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
TwinleafTown_BarrysHouse_2F_EventScript_Barry_Movement_0:
# 11 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	walk_in_place_faster_left
	step_end

# 17 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
TwinleafTown_BarrysHouse_2F_EventScript_Barry_Movement_1:
# 18 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	walk_fast_left
# 18 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	walk_fast_left
# 18 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	walk_fast_left
# 18 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	walk_fast_left
# 19 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	walk_fast_up
	step_end

# 22 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
TwinleafTown_BarrysHouse_2F_EventScript_Barry_Movement_2:
# 23 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	walk_down
# 24 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	walk_in_place_up
	step_end

# 26 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
TwinleafTown_BarrysHouse_2F_EventScript_Barry_Movement_3:
# 27 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	walk_fast_left
# 27 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	walk_fast_left
	step_end

TwinleafTown_BarrysHouse_2F_Text_Barry1::
# 36 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	.string "Barry: ...I'd better take my Bag and\n"
	.string "Journal, too...$"

TwinleafTown_BarrysHouse_2F_Text_Barry2::
# 40 "data/maps/TwinleafTown_BarrysHouse_2F/scripts.pory"
	.string "Oh, hey, {PLAYER}!\p"
	.string "I'll be waiting on the road!\n"
	.string "It's a ¥10 million fine if you're late!$"
