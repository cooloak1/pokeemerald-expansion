TwinleafTown_MapScripts::
# 2 "data/maps/TwinleafTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TwinleafTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

TwinleafTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/TwinleafTown/scripts.pory"
	setflag FLAG_VISITED_TWINLEAF_TOWN
# 4 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_PLAYERS_MOM_STATE, 3
	goto_if_lt TwinleafTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 7 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_PLAYERS_MOM_STATE, 5
	goto_if_eq TwinleafTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

TwinleafTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_PLAYERS_MOM_STATE, 3
	return

TwinleafTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 8 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_PLAYERS_MOM_STATE, 6
	return


TwinleafTown_EventScript_TownSign::
# 14 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_TownSign, MSGBOX_SIGN
	return


TwinleafTown_EventScript_PlayersMailbox::
# 18 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_PlayersMailbox, MSGBOX_SIGN
	return


TwinleafTown_EventScript_BarrysMailbox::
# 22 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_BarrysMailbox, MSGBOX_SIGN
	return


TwinleafTown_EventScript_TechnologyGuy::
# 26 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_TechnologyGuy, MSGBOX_NPC
	return


TwinleafTown_EventScript_Woman::
# 30 "data/maps/TwinleafTown/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, TwinleafTown_EventScript_Woman_1
# 33 "data/maps/TwinleafTown/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, TwinleafTown_EventScript_Woman_2
# 37 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Woman_WildPokemon, MSGBOX_NPC
	return

TwinleafTown_EventScript_Woman_1:
# 31 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Woman_Pokedex, MSGBOX_NPC
	return

TwinleafTown_EventScript_Woman_2:
# 34 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Woman_OhAPokemon, MSGBOX_NPC
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger1::
# 42 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_4, 0
# 43 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger2::
# 47 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_4, 1
# 48 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger3::
# 52 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_4, 2
# 53 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger4::
# 57 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_4, 3
# 58 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger5::
# 62 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_4, 4
# 63 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger6::
# 67 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_4, 5
# 68 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger7::
# 72 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_4, 6
# 73 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger8::
# 77 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_4, 7
# 78 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement::
# 82 "data/maps/TwinleafTown/scripts.pory"
	lock
# 83 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 84 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 85 "data/maps/TwinleafTown/scripts.pory"
	delay 48
# 86 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_TEMP_4
# 87 "data/maps/TwinleafTown/scripts.pory"
	case 0, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_3
# 89 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_4
# 91 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_5
# 93 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_6
# 95 "data/maps/TwinleafTown/scripts.pory"
	case 4, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_7
# 97 "data/maps/TwinleafTown/scripts.pory"
	case 5, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_8
# 99 "data/maps/TwinleafTown/scripts.pory"
	case 6, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_9
# 101 "data/maps/TwinleafTown/scripts.pory"
	case 7, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_10
TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1:
# 104 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 3
# 105 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_PushPlayerSouth
# 106 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_Movement_PlayerPushedSouth
# 107 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 108 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Man_BarryLookingForYou, MSGBOX_DEFAULT
# 109 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 110 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_TEMP_4
# 111 "data/maps/TwinleafTown/scripts.pory"
	case 0, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_13
# 113 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_14
# 115 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_15
# 117 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_16
# 119 "data/maps/TwinleafTown/scripts.pory"
	case 4, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_17
# 121 "data/maps/TwinleafTown/scripts.pory"
	case 5, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_18
# 123 "data/maps/TwinleafTown/scripts.pory"
	case 6, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_19
# 125 "data/maps/TwinleafTown/scripts.pory"
	case 7, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_20
TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11:
# 128 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 129 "data/maps/TwinleafTown/scripts.pory"
	release
	end

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_3:
# 88 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_MoveToPlayer_1
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_4:
# 90 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_MoveToPlayer_2
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_5:
# 92 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_MoveToPlayer_3
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_6:
# 94 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_MoveToPlayer_4
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_7:
# 96 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_MoveToPlayer_5
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_8:
# 98 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_MoveToPlayer_6
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_9:
# 100 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_MoveToPlayer_7
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_10:
# 102 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_MoveToPlayer_8
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_13:
# 112 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_ReturnToPosition_1
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_14:
# 114 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_ReturnToPosition_2
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_15:
# 116 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_ReturnToPosition_3
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_16:
# 118 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_ReturnToPosition_4
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_17:
# 120 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_ReturnToPosition_5
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_18:
# 122 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_ReturnToPosition_6
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_19:
# 124 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_ReturnToPosition_7
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_20:
# 126 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_ReturnToPosition_8
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11


TwinleafTown_EventScript_Man::
# 134 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_BARRY_STATE, 1
	goto_if_eq TwinleafTown_EventScript_Man_1
# 137 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_BARRY_STATE, 2
	goto_if_eq TwinleafTown_EventScript_Man_2
# 140 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_BARRY_STATE, 3
	goto_if_eq TwinleafTown_EventScript_Man_3
# 144 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Man_Adventure, MSGBOX_NPC
	return

TwinleafTown_EventScript_Man_1:
# 135 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Man_BarryLookingForYou, MSGBOX_NPC
	return

TwinleafTown_EventScript_Man_2:
# 138 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Man_BarryRanOff1, MSGBOX_NPC
	return

TwinleafTown_EventScript_Man_3:
# 141 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Man_BarryRanOff2, MSGBOX_NPC
	return


TwinleafTown_EventScript_BarryExitHouse::
# 149 "data/maps/TwinleafTown/scripts.pory"
	lock
# 150 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 151 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 154 "data/maps/TwinleafTown/scripts.pory"
	clearflag FLAG_HIDE_BARRY_TWINLEAF_TOWN
# 155 "data/maps/TwinleafTown/scripts.pory"
	addobject 4
# 156 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_Movement_PlayerPushedSouth
# 157 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_Movement_PushPlayerSouth
# 158 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 161 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Barry_Thud, MSGBOX_DEFAULT
# 162 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 163 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 164 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 165 "data/maps/TwinleafTown/scripts.pory"
	delay 48
# 166 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Barry_GoingToSeeRowan
# 167 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 168 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_EventScript_BarryExitHouse_Movement_0
# 169 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 170 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_BarryExitHouse_Movement_1
# 171 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 172 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 173 "data/maps/TwinleafTown/scripts.pory"
	delay 48
# 174 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_BarryExitHouse_Movement_2
# 175 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_EventScript_BarryExitHouse_Movement_3
# 176 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 177 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Barry_ForgotSomething
# 178 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 181 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_EventScript_BarryExitHouse_Movement_4
# 182 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 183 "data/maps/TwinleafTown/scripts.pory"
	removeobject 4
# 186 "data/maps/TwinleafTown/scripts.pory"
	setflag FLAG_BARRY_FORGOT_SOMETHING
# 187 "data/maps/TwinleafTown/scripts.pory"
	setflag FLAG_HIDE_BARRY_TWINLEAF_TOWN
# 188 "data/maps/TwinleafTown/scripts.pory"
	release
	end


# 193 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_1:
# 194 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 195 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 196 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 196 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 197 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
	step_end

# 200 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_2:
# 201 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 201 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 201 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 202 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 205 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_3:
# 206 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 206 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 206 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 207 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 207 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 210 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_4:
# 211 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 211 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 211 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 212 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 212 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 212 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 215 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_5:
# 216 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 216 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 216 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 217 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 217 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 217 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 217 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 220 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_6:
# 221 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 221 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 221 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 222 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 222 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 222 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 222 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 222 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 225 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_7:
# 226 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 226 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 226 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 227 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 227 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 227 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 227 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 227 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 227 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 230 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_8:
# 231 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 231 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 231 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 235 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_PushPlayerSouth:
# 236 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_down
	step_end

# 239 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_PlayerPushedSouth:
# 240 "data/maps/TwinleafTown/scripts.pory"
	lock_facing_direction
# 241 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 242 "data/maps/TwinleafTown/scripts.pory"
	face_up
# 243 "data/maps/TwinleafTown/scripts.pory"
	unlock_facing_direction
	step_end

# 246 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_1:
# 247 "data/maps/TwinleafTown/scripts.pory"
	walk_right
# 248 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 248 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 249 "data/maps/TwinleafTown/scripts.pory"
	walk_left
	step_end

# 251 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_2:
# 252 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 253 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 253 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 255 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_3:
# 256 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 256 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 257 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 257 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 259 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_4:
# 260 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 260 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 260 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 261 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 261 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 263 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_5:
# 264 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 264 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 264 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 264 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 265 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 265 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 267 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_6:
# 268 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 268 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 268 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 268 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 268 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 269 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 269 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 271 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_7:
# 272 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 272 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 272 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 272 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 272 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 272 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 273 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 273 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 275 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_8:
# 276 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 276 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 276 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 276 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 276 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 276 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 276 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 277 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 277 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 168 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_BarryExitHouse_Movement_0:
# 168 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 168 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 168 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 168 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 170 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_BarryExitHouse_Movement_1:
# 170 "data/maps/TwinleafTown/scripts.pory"
	walk_in_place_faster_right
	step_end

# 174 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_BarryExitHouse_Movement_2:
# 174 "data/maps/TwinleafTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 175 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_BarryExitHouse_Movement_3:
# 175 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 175 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 175 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 175 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 175 "data/maps/TwinleafTown/scripts.pory"
	walk_in_place_faster_down
	step_end

# 181 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_BarryExitHouse_Movement_4:
# 181 "data/maps/TwinleafTown/scripts.pory"
	walk_up
	step_end

TwinleafTown_Text_TechnologyGuy::
# 280 "data/maps/TwinleafTown/scripts.pory"
	.string "Technology just blows me away!\p"
	.string "I mean, now you can play with people\n"
	.string "around the world...wirelessly!$"

TwinleafTown_Text_Woman_WildPokemon::
# 284 "data/maps/TwinleafTown/scripts.pory"
	.string "It's true that wild Pokemon do attack\n"
	.string "people sometimes...\p"
	.string "But, Pokemon also open their hearts to\n"
	.string "you, so you can become friends.$"

TwinleafTown_Text_Woman_OhAPokemon::
# 288 "data/maps/TwinleafTown/scripts.pory"
	.string "Oh! A Pokemon!\n"
	.string "You look good together!$"

TwinleafTown_Text_Woman_Pokedex::
# 292 "data/maps/TwinleafTown/scripts.pory"
	.string "Oh, you're helping put together a\n"
	.string "Pokedex?\p"
	.string "That means you're going to travel all\n"
	.string "over the place with Pokemon!\p"
	.string "That sounds like a lot of fun!\n"
	.string "I'm a little envious, to be honest!$"

TwinleafTown_Text_Man_BarryLookingForYou::
# 296 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "Barry was looking for you.\p"
	.string "I think he's home now.\n"
	.string "Why don't you go check it out?$"

TwinleafTown_Text_Man_BarryRanOff1::
# 300 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "You're looking for Barry?\n"
	.string "He just went tearing off a little while\l"
	.string "ago.\n"
	.string "He's probably not gone too far.\n"
	.string "Why don't you go chase after him?$"

TwinleafTown_Text_Man_BarryRanOff2::
# 304 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry? He went tearing off in a huge\n"
	.string "rush a while ago.\p"
	.string "...Ouch. He ran right into me earlier. It's\n"
	.string "still hurting.\p"
	.string "That kid's growing up tough.$"

TwinleafTown_Text_Man_Adventure::
# 308 "data/maps/TwinleafTown/scripts.pory"
	.string "Everyone goes on adventures, and then\n"
	.string "they gradually grow up...$"

TwinleafTown_Text_TownSign::
# 312 "data/maps/TwinleafTown/scripts.pory"
	.string "Twinleaf Town\n"
	.string "Fresh and Free!$"

TwinleafTown_Text_PlayersMailbox::
# 316 "data/maps/TwinleafTown/scripts.pory"
	.string "{PLAYER}'s House$"

TwinleafTown_Text_BarrysMailbox::
# 320 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry's House$"

TwinleafTown_Text_Barry_Thud::
# 324 "data/maps/TwinleafTown/scripts.pory"
	.string "THUD!$"

TwinleafTown_Text_Barry_GoingToSeeRowan::
# 328 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry: What was that about?!\p"
	.string "Oh, hey, {PLAYER}! Hey, I'm going to see\n"
	.string "Prof. Rowan!\p"
	.string "You should come, too! And quickly!$"

TwinleafTown_Text_Barry_ForgotSomething::
# 332 "data/maps/TwinleafTown/scripts.pory"
	.string "Oh jeez!\n"
	.string "Forgot something!$"
