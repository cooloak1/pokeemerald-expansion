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
	lock
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
	release
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


TwinleafTown_EventScript_BarryExitHouse::
# 143 "data/maps/TwinleafTown/scripts.pory"
	lock
# 144 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 145 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 148 "data/maps/TwinleafTown/scripts.pory"
	clearflag FLAG_HIDE_BARRY_TWINLEAF_TOWN
# 149 "data/maps/TwinleafTown/scripts.pory"
	addobject 4
# 150 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_Movement_PlayerPushedSouth
# 151 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_Movement_PushPlayerSouth
# 152 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 155 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Barry_Thud, MSGBOX_DEFAULT
# 156 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 157 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 158 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 159 "data/maps/TwinleafTown/scripts.pory"
	delay 48
# 160 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Barry_GoingToSeeRowan
# 161 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 162 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_EventScript_BarryExitHouse_Movement_0
# 163 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 164 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_BarryExitHouse_Movement_1
# 165 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 166 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 167 "data/maps/TwinleafTown/scripts.pory"
	delay 48
# 168 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_BarryExitHouse_Movement_2
# 169 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_EventScript_BarryExitHouse_Movement_3
# 170 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 171 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Barry_ForgotSomething
# 172 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 175 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_EventScript_BarryExitHouse_Movement_4
# 176 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 177 "data/maps/TwinleafTown/scripts.pory"
	removeobject 4
# 180 "data/maps/TwinleafTown/scripts.pory"
	setflag FLAG_BARRY_FORGOT_SOMETHING
# 181 "data/maps/TwinleafTown/scripts.pory"
	setflag FLAG_HIDE_BARRY_TWINLEAF_TOWN
# 182 "data/maps/TwinleafTown/scripts.pory"
	release
	end


# 187 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_1:
# 188 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 189 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 190 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 190 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 191 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
	step_end

# 194 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_2:
# 195 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 195 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 195 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 196 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 199 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_3:
# 200 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 200 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 200 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 201 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 201 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 204 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_4:
# 205 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 205 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 205 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 206 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 206 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 206 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 209 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_5:
# 210 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 210 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 210 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 211 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 211 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 211 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 211 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 214 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_6:
# 215 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 215 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 215 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 216 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 216 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 216 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 216 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 216 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 219 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_7:
# 220 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 220 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 220 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 221 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 221 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 221 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 221 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 221 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 221 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 224 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_8:
# 225 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 225 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 225 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 226 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 226 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 226 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 226 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 226 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 226 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 226 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 229 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_PushPlayerSouth:
# 230 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_down
	step_end

# 233 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_PlayerPushedSouth:
# 234 "data/maps/TwinleafTown/scripts.pory"
	lock_facing_direction
# 235 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 236 "data/maps/TwinleafTown/scripts.pory"
	face_up
# 237 "data/maps/TwinleafTown/scripts.pory"
	unlock_facing_direction
	step_end

# 240 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_1:
# 241 "data/maps/TwinleafTown/scripts.pory"
	walk_right
# 242 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 242 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 243 "data/maps/TwinleafTown/scripts.pory"
	walk_left
	step_end

# 245 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_2:
# 246 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 247 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 247 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 249 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_3:
# 250 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 250 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 251 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 251 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 253 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_4:
# 254 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 254 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 254 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 255 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 255 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 257 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_5:
# 258 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 258 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 258 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 258 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 259 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 259 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 261 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_6:
# 262 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 262 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 262 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 262 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 262 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 263 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 263 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 265 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_7:
# 266 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 266 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 266 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 266 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 266 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 266 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 267 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 267 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 269 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_8:
# 270 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 270 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 270 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 270 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 270 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 270 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 270 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 271 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 271 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 162 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_BarryExitHouse_Movement_0:
# 162 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 162 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 162 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 162 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 164 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_BarryExitHouse_Movement_1:
# 164 "data/maps/TwinleafTown/scripts.pory"
	walk_in_place_faster_right
	step_end

# 168 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_BarryExitHouse_Movement_2:
# 168 "data/maps/TwinleafTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 169 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_BarryExitHouse_Movement_3:
# 169 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 169 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 169 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 169 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 169 "data/maps/TwinleafTown/scripts.pory"
	walk_in_place_faster_down
	step_end

# 175 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_BarryExitHouse_Movement_4:
# 175 "data/maps/TwinleafTown/scripts.pory"
	walk_up
	step_end

TwinleafTown_Text_TechnologyGuy::
# 274 "data/maps/TwinleafTown/scripts.pory"
	.string "Technology just blows me away!\p"
	.string "I mean, now you can play with people\n"
	.string "around the world...wirelessly!$"

TwinleafTown_Text_Woman_WildPokemon::
# 278 "data/maps/TwinleafTown/scripts.pory"
	.string "It's true that wild Pokemon do attack\n"
	.string "people sometimes...\p"
	.string "But, Pokemon also open their hearts to\n"
	.string "you, so you can become friends.$"

TwinleafTown_Text_Woman_OhAPokemon::
# 282 "data/maps/TwinleafTown/scripts.pory"
	.string "Oh! A Pokemon!\n"
	.string "You look good together!$"

TwinleafTown_Text_Woman_Pokedex::
# 286 "data/maps/TwinleafTown/scripts.pory"
	.string "Oh, you're helping put together a\n"
	.string "Pokedex?\p"
	.string "That means you're going to travel all\n"
	.string "over the place with Pokemon!\p"
	.string "That sounds like a lot of fun!\n"
	.string "I'm a little envious, to be honest!$"

TwinleafTown_Text_Man_BarryLookingForYou::
# 290 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "Barry was looking for you.\p"
	.string "I think he's home now.\n"
	.string "Why don't you go check it out?$"

TwinleafTown_Text_Man_BarryRanOff1::
# 294 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "You're looking for Barry?\n"
	.string "He just went tearing off a little while\l"
	.string "ago.\n"
	.string "He's probably not gone too far.\n"
	.string "Why don't you go chase after him?$"

TwinleafTown_Text_Man_BarryRanOff2::
# 298 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry? He went tearing off in a huge\n"
	.string "rush a while ago.\p"
	.string "...Ouch. He ran right into me earlier. It's\n"
	.string "still hurting.\p"
	.string "That kid's growing up tough.$"

TwinleafTown_Text_Man_Adventure::
# 302 "data/maps/TwinleafTown/scripts.pory"
	.string "Everyone goes on adventures, and then\n"
	.string "they gradually grow up...$"

TwinleafTown_Text_TownSign::
# 306 "data/maps/TwinleafTown/scripts.pory"
	.string "Twinleaf Town\n"
	.string "Fresh and Free!$"

TwinleafTown_Text_PlayersMailbox::
# 310 "data/maps/TwinleafTown/scripts.pory"
	.string "{PLAYER}'s House$"

TwinleafTown_Text_BarrysMailbox::
# 314 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry's House$"

TwinleafTown_Text_Barry_Thud::
# 318 "data/maps/TwinleafTown/scripts.pory"
	.string "THUD!$"

TwinleafTown_Text_Barry_GoingToSeeRowan::
# 322 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry: What was that about?!\p"
	.string "Oh, hey, {PLAYER}! Hey, I'm going to\n"
	.string "see Prof. Rowan!\p"
	.string "You should come, too! And quickly!$"

TwinleafTown_Text_Barry_ForgotSomething::
# 326 "data/maps/TwinleafTown/scripts.pory"
	.string "Oh jeez!\n"
	.string "Forgot something!$"
