TwinleafTown_PlayersHouse_2F_MapScripts::
	.byte 0


TwinleafTown_PlayersHouse_2F_BarryEnter_Right::
# 4 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_4, 0
# 5 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	goto TwinleafTown_PlayersHouse_2F_BarryEnter_Main
	return


TwinleafTown_PlayersHouse_2F_BarryEnter_Down::
# 9 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_4, 1
# 10 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	goto TwinleafTown_PlayersHouse_2F_BarryEnter_Main
	return


TwinleafTown_PlayersHouse_2F_BarryEnter_Left::
# 14 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_4, 2
# 15 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	goto TwinleafTown_PlayersHouse_2F_BarryEnter_Main
	return


TwinleafTown_PlayersHouse_2F_BarryEnter_Main::
# 19 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	lock
# 20 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_BARRY_PLAYERS_HOUSE_2F
# 21 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	addobject 1
# 22 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 23 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 24 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	delay 48
# 25 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse_2F_Barry_1
# 26 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 27 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_0
# 31 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 32 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_4
# 33 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	case 0, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_3
# 37 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	case 1, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_4
# 42 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	case 2, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_5
TwinleafTown_PlayersHouse_2F_BarryEnter_Main_1:
# 47 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_4
# 48 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	waitmovement 1
# 49 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse_2F_Barry_2
# 50 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 51 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 52 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 53 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	delay 48
# 54 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_4
# 55 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	case 0, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_8
# 60 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	case 1, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_9
# 66 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	case 2, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_10
TwinleafTown_PlayersHouse_2F_BarryEnter_Main_6:
# 72 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 73 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_8
# 74 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_9
# 75 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 76 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse_2F_Barry_3
# 77 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 78 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_4
# 79 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 80 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse_2F_Barry_4
# 81 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 82 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_4
# 83 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	case 0, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_13
# 87 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	case 1, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_14
# 93 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	case 2, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_15
TwinleafTown_PlayersHouse_2F_BarryEnter_Main_11:
# 96 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 97 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse_2F_Barry_5
# 98 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 99 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_4
# 100 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	case 0, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_18
# 106 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	case 1, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_19
# 111 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	case 2, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_20
TwinleafTown_PlayersHouse_2F_BarryEnter_Main_16:
# 118 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 119 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_4
# 120 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_16
# 124 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 125 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	removeobject 1
# 126 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_HIDE_BARRY_PLAYERS_HOUSE_2F
# 127 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_BARRY_STATE, 1
# 128 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	release
	end

TwinleafTown_PlayersHouse_2F_BarryEnter_Main_3:
# 34 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_1
	goto TwinleafTown_PlayersHouse_2F_BarryEnter_Main_1

TwinleafTown_PlayersHouse_2F_BarryEnter_Main_4:
# 38 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_2
	goto TwinleafTown_PlayersHouse_2F_BarryEnter_Main_1

TwinleafTown_PlayersHouse_2F_BarryEnter_Main_5:
# 43 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_3
	goto TwinleafTown_PlayersHouse_2F_BarryEnter_Main_1

TwinleafTown_PlayersHouse_2F_BarryEnter_Main_8:
# 56 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_5
	goto TwinleafTown_PlayersHouse_2F_BarryEnter_Main_6

TwinleafTown_PlayersHouse_2F_BarryEnter_Main_9:
# 61 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_6
	goto TwinleafTown_PlayersHouse_2F_BarryEnter_Main_6

TwinleafTown_PlayersHouse_2F_BarryEnter_Main_10:
# 67 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_7
	goto TwinleafTown_PlayersHouse_2F_BarryEnter_Main_6

TwinleafTown_PlayersHouse_2F_BarryEnter_Main_13:
# 84 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_10
	goto TwinleafTown_PlayersHouse_2F_BarryEnter_Main_11

TwinleafTown_PlayersHouse_2F_BarryEnter_Main_14:
# 88 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_11
	goto TwinleafTown_PlayersHouse_2F_BarryEnter_Main_11

TwinleafTown_PlayersHouse_2F_BarryEnter_Main_15:
# 94 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_12
	goto TwinleafTown_PlayersHouse_2F_BarryEnter_Main_11

TwinleafTown_PlayersHouse_2F_BarryEnter_Main_18:
# 101 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_13
	goto TwinleafTown_PlayersHouse_2F_BarryEnter_Main_16

TwinleafTown_PlayersHouse_2F_BarryEnter_Main_19:
# 107 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_14
	goto TwinleafTown_PlayersHouse_2F_BarryEnter_Main_16

TwinleafTown_PlayersHouse_2F_BarryEnter_Main_20:
# 112 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_15
	goto TwinleafTown_PlayersHouse_2F_BarryEnter_Main_16


# 27 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_0:
# 28 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_left
# 29 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_down
	step_end

# 34 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_1:
# 35 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_left
	step_end

# 38 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_2:
# 39 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_down
# 40 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_left
# 40 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_left
	step_end

# 43 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_3:
# 44 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_left
# 44 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_left
# 44 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_left
	step_end

# 47 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_4:
# 47 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	face_right
	step_end

# 56 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_5:
# 57 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_down
# 58 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_left
# 58 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_left
# 58 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_left
# 58 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_left
# 58 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_left
	step_end

# 61 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_6:
# 62 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_down
# 63 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_left
# 63 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_left
# 63 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_left
# 63 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_left
# 64 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_up
	step_end

# 67 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_7:
# 68 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_down
# 69 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_left
# 69 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_left
# 69 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_left
	step_end

# 73 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_8:
# 73 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	face_left
	step_end

# 74 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_9:
# 74 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_up
	step_end

# 84 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_10:
# 85 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_right
# 85 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_right
# 85 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_right
	step_end

# 88 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_11:
# 89 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_right
# 90 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_down
# 91 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_right
	step_end

# 94 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_12:
# 94 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_right
	step_end

# 101 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_13:
# 102 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_down
# 103 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_right
# 103 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_right
# 104 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_up
	step_end

# 107 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_14:
# 108 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_up
# 109 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_right
# 109 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_right
# 109 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_right
	step_end

# 112 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_15:
# 113 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_down
# 114 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_right
# 114 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_right
# 114 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_right
# 114 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_right
# 115 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_up
	step_end

# 120 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
TwinleafTown_PlayersHouse_2F_BarryEnter_Main_Movement_16:
# 121 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_up
# 122 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_right
# 122 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	walk_fast_right
	step_end

TwinleafTown_PlayersHouse_2F_Barry_1::
# 132 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	.string "Barry: There you are!$"

TwinleafTown_PlayersHouse_2F_Barry_2::
# 136 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "Did you just see the TV? Sure you did!\p"
	.string "Prof. Rowan's that really important guy\n"
	.string "who studies Pokemon, right?\p"
	.string "That means he must have lots and lots\n"
	.string "of Pokemon.\p"
	.string "So, if we ask him, I bet he'd give us some\n"
	.string "Pokemon!$"

TwinleafTown_PlayersHouse_2F_Barry_3::
# 140 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	.string "Oh, hey!\n"
	.string "Is this a new PC?!$"

TwinleafTown_PlayersHouse_2F_Barry_4::
# 144 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	.string "Barry: Uh...\n"
	.string "Where was I?$"

TwinleafTown_PlayersHouse_2F_Barry_5::
# 148 "data/maps/TwinleafTown_PlayersHouse_2F/scripts.pory"
	.string "Oh, right, right! We're going to go see\n"
	.string "Prof. Rowan and get some Pokemon.\p"
	.string "I'll be waiting outside.\p"
	.string "OK, {PLAYER}? If you're late, I'm\n"
	.string "fining you ¥10 million!$"
