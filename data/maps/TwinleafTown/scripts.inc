TwinleafTown_MapScripts::
# 2 "data/maps/TwinleafTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TwinleafTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

TwinleafTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/TwinleafTown/scripts.pory"
	setflag FLAG_VISITED_TWINLEAF_TOWN
	return


TwinleafTown_EventScript_TownSign::
# 8 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_TownSign, MSGBOX_SIGN
	return


TwinleafTown_EventScript_PlayersMailbox::
# 12 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_PlayersMailbox, MSGBOX_SIGN
	return


TwinleafTown_EventScript_BarrysMailbox::
# 16 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_BarrysMailbox, MSGBOX_SIGN
	return


TwinleafTown_EventScript_TechnologyGuy::
# 20 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_TechnologyGuy, MSGBOX_NPC
	return


TwinleafTown_EventScript_Woman::
# 24 "data/maps/TwinleafTown/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, TwinleafTown_EventScript_Woman_1
# 27 "data/maps/TwinleafTown/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, TwinleafTown_EventScript_Woman_2
# 31 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Woman_WildPokemon, MSGBOX_NPC
	return

TwinleafTown_EventScript_Woman_1:
# 25 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Woman_Pokedex, MSGBOX_NPC
	return

TwinleafTown_EventScript_Woman_2:
# 28 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Woman_OhAPokemon, MSGBOX_NPC
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger1::
# 36 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_4, 0
# 37 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger2::
# 41 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_4, 1
# 42 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger3::
# 46 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_4, 2
# 47 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger4::
# 51 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_4, 3
# 52 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger5::
# 56 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_4, 4
# 57 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger6::
# 61 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_4, 5
# 62 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger7::
# 66 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_4, 6
# 67 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger8::
# 71 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_4, 7
# 72 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement::
# 76 "data/maps/TwinleafTown/scripts.pory"
	lockall
# 77 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 78 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 79 "data/maps/TwinleafTown/scripts.pory"
	delay 48
# 80 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_TEMP_4
# 81 "data/maps/TwinleafTown/scripts.pory"
	case 0, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_3
# 83 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_4
# 85 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_5
# 87 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_6
# 89 "data/maps/TwinleafTown/scripts.pory"
	case 4, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_7
# 91 "data/maps/TwinleafTown/scripts.pory"
	case 5, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_8
# 93 "data/maps/TwinleafTown/scripts.pory"
	case 6, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_9
# 95 "data/maps/TwinleafTown/scripts.pory"
	case 7, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_10
TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1:
# 98 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 3
# 99 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_PushPlayerSouth
# 100 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_Movement_PlayerPushedSouth
# 101 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 102 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Man_BarryLookingForYou, MSGBOX_DEFAULT
# 103 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 104 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_TEMP_4
# 105 "data/maps/TwinleafTown/scripts.pory"
	case 0, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_13
# 107 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_14
# 109 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_15
# 111 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_16
# 113 "data/maps/TwinleafTown/scripts.pory"
	case 4, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_17
# 115 "data/maps/TwinleafTown/scripts.pory"
	case 5, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_18
# 117 "data/maps/TwinleafTown/scripts.pory"
	case 6, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_19
# 119 "data/maps/TwinleafTown/scripts.pory"
	case 7, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_20
TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11:
# 122 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 123 "data/maps/TwinleafTown/scripts.pory"
	releaseall
	end

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_3:
# 82 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_MoveToPlayer_1
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_4:
# 84 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_MoveToPlayer_2
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_5:
# 86 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_MoveToPlayer_3
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_6:
# 88 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_MoveToPlayer_4
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_7:
# 90 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_MoveToPlayer_5
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_8:
# 92 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_MoveToPlayer_6
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_9:
# 94 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_MoveToPlayer_7
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_10:
# 96 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_MoveToPlayer_8
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_13:
# 106 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_ReturnToPosition_1
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_14:
# 108 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_ReturnToPosition_2
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_15:
# 110 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_ReturnToPosition_3
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_16:
# 112 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_ReturnToPosition_4
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_17:
# 114 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_ReturnToPosition_5
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_18:
# 116 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_ReturnToPosition_6
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_19:
# 118 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_ReturnToPosition_7
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_20:
# 120 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_ReturnToPosition_8
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11


TwinleafTown_EventScript_Man::
# 128 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_BARRY_STATE, 1
	goto_if_eq TwinleafTown_EventScript_Man_1
# 131 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_BARRY_STATE, 2
	goto_if_eq TwinleafTown_EventScript_Man_2
# 134 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_BARRY_STATE, 3
	goto_if_eq TwinleafTown_EventScript_Man_3
# 138 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Man_Adventure, MSGBOX_NPC
	return

TwinleafTown_EventScript_Man_1:
# 129 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Man_BarryLookingForYou, MSGBOX_NPC
	return

TwinleafTown_EventScript_Man_2:
# 132 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Man_BarryRanOff1, MSGBOX_NPC
	return

TwinleafTown_EventScript_Man_3:
# 135 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Man_BarryRanOff2, MSGBOX_NPC
	return


TwinleafTown_EventScript_BarryExitsHouse::
# 143 "data/maps/TwinleafTown/scripts.pory"
	lockall
# 144 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 145 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 148 "data/maps/TwinleafTown/scripts.pory"
	addobject 4
# 149 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_Movement_PlayerPushedSouth
# 150 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_Movement_PushPlayerSouth
# 151 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 154 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Barry_Thud, MSGBOX_DEFAULT
# 155 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 156 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 157 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 158 "data/maps/TwinleafTown/scripts.pory"
	delay 48
# 159 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Barry_GoingToSeeRowan
# 160 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 161 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_EventScript_BarryExitsHouse_Movement_0
# 162 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 163 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_BarryExitsHouse_Movement_1
# 164 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 165 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 166 "data/maps/TwinleafTown/scripts.pory"
	delay 48
# 167 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_BarryExitsHouse_Movement_2
# 168 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_EventScript_BarryExitsHouse_Movement_3
# 169 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 170 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Barry_ForgotSomething
# 171 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 174 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_EventScript_BarryExitsHouse_Movement_4
# 175 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 176 "data/maps/TwinleafTown/scripts.pory"
	removeobject 4
# 179 "data/maps/TwinleafTown/scripts.pory"
	releaseall
	end


# 184 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_1:
# 185 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 186 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 187 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 187 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 188 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
	step_end

# 191 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_2:
# 192 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 192 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 192 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 193 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 196 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_3:
# 197 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 197 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 197 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 198 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 198 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 201 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_4:
# 202 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 202 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 202 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 203 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 203 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 203 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 206 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_5:
# 207 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 207 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 207 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 208 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 208 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 208 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 208 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 211 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_6:
# 212 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 212 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 212 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 213 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 213 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 213 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 213 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 213 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 216 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_7:
# 217 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 217 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 217 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 218 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 218 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 218 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 218 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 218 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 218 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 221 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_8:
# 222 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 222 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 222 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 223 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 223 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 223 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 223 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 223 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 223 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 223 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 226 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_PushPlayerSouth:
# 227 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_down
	step_end

# 230 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_PlayerPushedSouth:
# 231 "data/maps/TwinleafTown/scripts.pory"
	lock_facing_direction
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 233 "data/maps/TwinleafTown/scripts.pory"
	face_up
# 234 "data/maps/TwinleafTown/scripts.pory"
	unlock_facing_direction
	step_end

# 237 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_1:
# 238 "data/maps/TwinleafTown/scripts.pory"
	walk_right
# 239 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 239 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 240 "data/maps/TwinleafTown/scripts.pory"
	walk_left
	step_end

# 242 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_2:
# 243 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 244 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 244 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 246 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_3:
# 247 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 247 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 248 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 248 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 250 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_4:
# 251 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 251 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 251 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 252 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 252 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 254 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_5:
# 255 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 255 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 255 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 255 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 256 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 256 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 258 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_6:
# 259 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 259 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 259 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 259 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 259 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 260 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 260 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 262 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_7:
# 263 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 263 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 263 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 263 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 263 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 263 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 264 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 264 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 266 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_8:
# 267 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 267 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 267 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 267 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 267 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 267 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 267 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 268 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 268 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 161 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_BarryExitsHouse_Movement_0:
# 161 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 161 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 161 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 161 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 163 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_BarryExitsHouse_Movement_1:
# 163 "data/maps/TwinleafTown/scripts.pory"
	walk_in_place_faster_right
	step_end

# 167 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_BarryExitsHouse_Movement_2:
# 167 "data/maps/TwinleafTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 168 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_BarryExitsHouse_Movement_3:
# 168 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 168 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 168 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 168 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 168 "data/maps/TwinleafTown/scripts.pory"
	walk_in_place_faster_down
	step_end

# 174 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_BarryExitsHouse_Movement_4:
# 174 "data/maps/TwinleafTown/scripts.pory"
	walk_up
	step_end

TwinleafTown_Text_TechnologyGuy::
# 271 "data/maps/TwinleafTown/scripts.pory"
	.string "Technology just blows me away!\p"
	.string "I mean, now you can play with people\n"
	.string "around the world...wirelessly!$"

TwinleafTown_Text_Woman_WildPokemon::
# 275 "data/maps/TwinleafTown/scripts.pory"
	.string "It's true that wild Pokemon do attack\n"
	.string "people sometimes...\p"
	.string "But, Pokemon also open their hearts to\n"
	.string "you, so you can become friends.$"

TwinleafTown_Text_Woman_OhAPokemon::
# 279 "data/maps/TwinleafTown/scripts.pory"
	.string "Oh! A Pokemon!\n"
	.string "You look good together!$"

TwinleafTown_Text_Woman_Pokedex::
# 283 "data/maps/TwinleafTown/scripts.pory"
	.string "Oh, you're helping put together a\n"
	.string "Pokedex?\p"
	.string "That means you're going to travel all\n"
	.string "over the place with Pokemon!\p"
	.string "That sounds like a lot of fun!\n"
	.string "I'm a little envious, to be honest!$"

TwinleafTown_Text_Man_BarryLookingForYou::
# 287 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "Barry was looking for you.\p"
	.string "I think he's home now.\n"
	.string "Why don't you go check it out?$"

TwinleafTown_Text_Man_BarryRanOff1::
# 291 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "You're looking for Barry?\n"
	.string "He just went tearing off a little while\l"
	.string "ago.\n"
	.string "He's probably not gone too far.\n"
	.string "Why don't you go chase after him?$"

TwinleafTown_Text_Man_BarryRanOff2::
# 295 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry? He went tearing off in a huge\n"
	.string "rush a while ago.\p"
	.string "...Ouch. He ran right into me earlier. It's\n"
	.string "still hurting.\p"
	.string "That kid's growing up tough.$"

TwinleafTown_Text_Man_Adventure::
# 299 "data/maps/TwinleafTown/scripts.pory"
	.string "Everyone goes on adventures, and then\n"
	.string "they gradually grow up...$"

TwinleafTown_Text_TownSign::
# 303 "data/maps/TwinleafTown/scripts.pory"
	.string "Twinleaf Town\n"
	.string "Fresh and Free!$"

TwinleafTown_Text_PlayersMailbox::
# 307 "data/maps/TwinleafTown/scripts.pory"
	.string "{PLAYER}'s House$"

TwinleafTown_Text_BarrysMailbox::
# 311 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry's House$"

TwinleafTown_Text_Barry_Thud::
# 315 "data/maps/TwinleafTown/scripts.pory"
	.string "THUD!$"

TwinleafTown_Text_Barry_GoingToSeeRowan::
# 319 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry: What was that about?!\p"
	.string "Oh, hey, {PLAYER}! Hey, I'm going to\n"
	.string "see Prof. Rowan!\p"
	.string "You should come, too! And quickly!$"

TwinleafTown_Text_Barry_ForgotSomething::
# 323 "data/maps/TwinleafTown/scripts.pory"
	.string "Oh jeez!\n"
	.string "Forgot something!$"
