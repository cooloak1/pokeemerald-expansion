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
	return

TwinleafTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_PLAYERS_MOM_STATE, 3
	return


TwinleafTown_EventScript_TownSign::
# 11 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_TownSign, MSGBOX_SIGN
	return


TwinleafTown_EventScript_PlayersMailbox::
# 15 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_PlayersMailbox, MSGBOX_SIGN
	return


TwinleafTown_EventScript_BarrysMailbox::
# 19 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_BarrysMailbox, MSGBOX_SIGN
	return


TwinleafTown_EventScript_TechnologyGuy::
# 23 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_TechnologyGuy, MSGBOX_NPC
	return


TwinleafTown_EventScript_Woman::
# 27 "data/maps/TwinleafTown/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, TwinleafTown_EventScript_Woman_1
# 30 "data/maps/TwinleafTown/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, TwinleafTown_EventScript_Woman_2
# 34 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Woman_WildPokemon, MSGBOX_NPC
	return

TwinleafTown_EventScript_Woman_1:
# 28 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Woman_Pokedex, MSGBOX_NPC
	return

TwinleafTown_EventScript_Woman_2:
# 31 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Woman_OhAPokemon, MSGBOX_NPC
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger1::
# 39 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_4, 0
# 40 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger2::
# 44 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_4, 1
# 45 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger3::
# 49 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_4, 2
# 50 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger4::
# 54 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_4, 3
# 55 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger5::
# 59 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_4, 4
# 60 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger6::
# 64 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_4, 5
# 65 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger7::
# 69 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_4, 6
# 70 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger8::
# 74 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_4, 7
# 75 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement
	return


TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement::
# 79 "data/maps/TwinleafTown/scripts.pory"
	lock
# 80 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 81 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 82 "data/maps/TwinleafTown/scripts.pory"
	delay 48
# 83 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_TEMP_4
# 84 "data/maps/TwinleafTown/scripts.pory"
	case 0, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_3
# 86 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_4
# 88 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_5
# 90 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_6
# 92 "data/maps/TwinleafTown/scripts.pory"
	case 4, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_7
# 94 "data/maps/TwinleafTown/scripts.pory"
	case 5, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_8
# 96 "data/maps/TwinleafTown/scripts.pory"
	case 6, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_9
# 98 "data/maps/TwinleafTown/scripts.pory"
	case 7, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_10
TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1:
# 101 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 3
# 102 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_PushPlayerSouth
# 103 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_Movement_PlayerPushedSouth
# 104 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 105 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Man_BarryLookingForYou, MSGBOX_DEFAULT
# 106 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 107 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_TEMP_4
# 108 "data/maps/TwinleafTown/scripts.pory"
	case 0, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_13
# 110 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_14
# 112 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_15
# 114 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_16
# 116 "data/maps/TwinleafTown/scripts.pory"
	case 4, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_17
# 118 "data/maps/TwinleafTown/scripts.pory"
	case 5, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_18
# 120 "data/maps/TwinleafTown/scripts.pory"
	case 6, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_19
# 122 "data/maps/TwinleafTown/scripts.pory"
	case 7, TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_20
TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11:
# 125 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 126 "data/maps/TwinleafTown/scripts.pory"
	release
	end

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_3:
# 85 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_MoveToPlayer_1
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_4:
# 87 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_MoveToPlayer_2
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_5:
# 89 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_MoveToPlayer_3
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_6:
# 91 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_MoveToPlayer_4
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_7:
# 93 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_MoveToPlayer_5
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_8:
# 95 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_MoveToPlayer_6
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_9:
# 97 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_MoveToPlayer_7
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_10:
# 99 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_MoveToPlayer_8
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_1

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_13:
# 109 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_ReturnToPosition_1
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_14:
# 111 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_ReturnToPosition_2
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_15:
# 113 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_ReturnToPosition_3
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_16:
# 115 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_ReturnToPosition_4
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_17:
# 117 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_ReturnToPosition_5
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_18:
# 119 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_ReturnToPosition_6
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_19:
# 121 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_ReturnToPosition_7
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11

TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_20:
# 123 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_Movement_ReturnToPosition_8
	goto TwinleafTown_EventScript_BarryLookingForYouTrigger_Movement_11


TwinleafTown_EventScript_Man::
# 131 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_BARRY_STATE, 1
	goto_if_eq TwinleafTown_EventScript_Man_1
# 134 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_BARRY_STATE, 2
	goto_if_eq TwinleafTown_EventScript_Man_2
# 137 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_BARRY_STATE, 3
	goto_if_eq TwinleafTown_EventScript_Man_3
# 141 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Man_Adventure, MSGBOX_NPC
	return

TwinleafTown_EventScript_Man_1:
# 132 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Man_BarryLookingForYou, MSGBOX_NPC
	return

TwinleafTown_EventScript_Man_2:
# 135 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Man_BarryRanOff1, MSGBOX_NPC
	return

TwinleafTown_EventScript_Man_3:
# 138 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Man_BarryRanOff2, MSGBOX_NPC
	return


TwinleafTown_EventScript_BarryExitHouse::
# 146 "data/maps/TwinleafTown/scripts.pory"
	lock
# 147 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 148 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 151 "data/maps/TwinleafTown/scripts.pory"
	clearflag FLAG_HIDE_BARRY_TWINLEAF_TOWN
# 152 "data/maps/TwinleafTown/scripts.pory"
	addobject 4
# 153 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_Movement_PlayerPushedSouth
# 154 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_Movement_PushPlayerSouth
# 155 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 158 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Barry_Thud, MSGBOX_DEFAULT
# 159 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 160 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 161 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 162 "data/maps/TwinleafTown/scripts.pory"
	delay 48
# 163 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Barry_GoingToSeeRowan
# 164 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 165 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_EventScript_BarryExitHouse_Movement_0
# 166 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 167 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_BarryExitHouse_Movement_1
# 168 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 169 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 170 "data/maps/TwinleafTown/scripts.pory"
	delay 48
# 171 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_BarryExitHouse_Movement_2
# 172 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_EventScript_BarryExitHouse_Movement_3
# 173 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 174 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_Barry_ForgotSomething
# 175 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 178 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_EventScript_BarryExitHouse_Movement_4
# 179 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 180 "data/maps/TwinleafTown/scripts.pory"
	removeobject 4
# 183 "data/maps/TwinleafTown/scripts.pory"
	setflag FLAG_BARRY_FORGOT_SOMETHING
# 184 "data/maps/TwinleafTown/scripts.pory"
	setflag FLAG_HIDE_BARRY_TWINLEAF_TOWN
# 185 "data/maps/TwinleafTown/scripts.pory"
	release
	end


# 190 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_1:
# 191 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 192 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 193 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 193 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 194 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
	step_end

# 197 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_2:
# 198 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 198 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 198 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 199 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 202 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_3:
# 203 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 203 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 203 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 204 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 204 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 207 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_4:
# 208 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 208 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 208 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 209 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 209 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 209 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 212 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_5:
# 213 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 213 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 213 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 214 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 214 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 214 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 214 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 217 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_6:
# 218 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 218 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 218 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 219 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 219 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 219 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 219 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 219 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 222 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_7:
# 223 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 223 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 223 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 224 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 224 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 224 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 224 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 224 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 224 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 227 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_MoveToPlayer_8:
# 228 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 228 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 228 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 229 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 229 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 229 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 229 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 229 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 229 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 229 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 232 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_PushPlayerSouth:
# 233 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_down
	step_end

# 236 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_PlayerPushedSouth:
# 237 "data/maps/TwinleafTown/scripts.pory"
	lock_facing_direction
# 238 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 239 "data/maps/TwinleafTown/scripts.pory"
	face_up
# 240 "data/maps/TwinleafTown/scripts.pory"
	unlock_facing_direction
	step_end

# 243 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_1:
# 244 "data/maps/TwinleafTown/scripts.pory"
	walk_right
# 245 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 245 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 246 "data/maps/TwinleafTown/scripts.pory"
	walk_left
	step_end

# 248 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_2:
# 249 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 250 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 250 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 252 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_3:
# 253 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 253 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 254 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 254 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 256 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_4:
# 257 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 257 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 257 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 258 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 258 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 260 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_5:
# 261 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 261 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 261 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 261 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 262 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 262 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 264 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_6:
# 265 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 265 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 265 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 265 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 265 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 266 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 266 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 268 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_7:
# 269 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 269 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 269 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 269 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 269 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 269 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 270 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 270 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 272 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_Movement_ReturnToPosition_8:
# 273 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 273 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 273 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 273 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 273 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 273 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 273 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 274 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 274 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 165 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_BarryExitHouse_Movement_0:
# 165 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 165 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 165 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 165 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 167 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_BarryExitHouse_Movement_1:
# 167 "data/maps/TwinleafTown/scripts.pory"
	walk_in_place_faster_right
	step_end

# 171 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_BarryExitHouse_Movement_2:
# 171 "data/maps/TwinleafTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 172 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_BarryExitHouse_Movement_3:
# 172 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 172 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 172 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 172 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 172 "data/maps/TwinleafTown/scripts.pory"
	walk_in_place_faster_down
	step_end

# 178 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_BarryExitHouse_Movement_4:
# 178 "data/maps/TwinleafTown/scripts.pory"
	walk_up
	step_end

TwinleafTown_Text_TechnologyGuy::
# 277 "data/maps/TwinleafTown/scripts.pory"
	.string "Technology just blows me away!\p"
	.string "I mean, now you can play with people\n"
	.string "around the world...wirelessly!$"

TwinleafTown_Text_Woman_WildPokemon::
# 281 "data/maps/TwinleafTown/scripts.pory"
	.string "It's true that wild Pokemon do attack\n"
	.string "people sometimes...\p"
	.string "But, Pokemon also open their hearts to\n"
	.string "you, so you can become friends.$"

TwinleafTown_Text_Woman_OhAPokemon::
# 285 "data/maps/TwinleafTown/scripts.pory"
	.string "Oh! A Pokemon!\n"
	.string "You look good together!$"

TwinleafTown_Text_Woman_Pokedex::
# 289 "data/maps/TwinleafTown/scripts.pory"
	.string "Oh, you're helping put together a\n"
	.string "Pokedex?\p"
	.string "That means you're going to travel all\n"
	.string "over the place with Pokemon!\p"
	.string "That sounds like a lot of fun!\n"
	.string "I'm a little envious, to be honest!$"

TwinleafTown_Text_Man_BarryLookingForYou::
# 293 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "Barry was looking for you.\p"
	.string "I think he's home now.\n"
	.string "Why don't you go check it out?$"

TwinleafTown_Text_Man_BarryRanOff1::
# 297 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "You're looking for Barry?\n"
	.string "He just went tearing off a little while\l"
	.string "ago.\n"
	.string "He's probably not gone too far.\n"
	.string "Why don't you go chase after him?$"

TwinleafTown_Text_Man_BarryRanOff2::
# 301 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry? He went tearing off in a huge\n"
	.string "rush a while ago.\p"
	.string "...Ouch. He ran right into me earlier. It's\n"
	.string "still hurting.\p"
	.string "That kid's growing up tough.$"

TwinleafTown_Text_Man_Adventure::
# 305 "data/maps/TwinleafTown/scripts.pory"
	.string "Everyone goes on adventures, and then\n"
	.string "they gradually grow up...$"

TwinleafTown_Text_TownSign::
# 309 "data/maps/TwinleafTown/scripts.pory"
	.string "Twinleaf Town\n"
	.string "Fresh and Free!$"

TwinleafTown_Text_PlayersMailbox::
# 313 "data/maps/TwinleafTown/scripts.pory"
	.string "{PLAYER}'s House$"

TwinleafTown_Text_BarrysMailbox::
# 317 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry's House$"

TwinleafTown_Text_Barry_Thud::
# 321 "data/maps/TwinleafTown/scripts.pory"
	.string "THUD!$"

TwinleafTown_Text_Barry_GoingToSeeRowan::
# 325 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry: What was that about?!\p"
	.string "Oh, hey, {PLAYER}! Hey, I'm going to\n"
	.string "see Prof. Rowan!\p"
	.string "You should come, too! And quickly!$"

TwinleafTown_Text_Barry_ForgotSomething::
# 329 "data/maps/TwinleafTown/scripts.pory"
	.string "Oh jeez!\n"
	.string "Forgot something!$"
