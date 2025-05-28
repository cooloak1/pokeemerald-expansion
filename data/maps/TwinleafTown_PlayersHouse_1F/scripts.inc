TwinleafTown_PlayersHouse_1F_MapScripts::
# 2 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TwinleafTown_PlayersHouse_1F_MapScript_OnTransition
# 5 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TwinleafTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	map_script_2 VAR_PLAYERS_MOM_STATE, 0, TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft
	.2byte 0


TwinleafTown_PlayersHouse_1F_MapScript_OnTransition::
	return


TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft::
# 14 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	lock
# 15 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 16 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft_Movement_0
# 17 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft_Movement_1
# 18 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 19 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	delay 48
# 20 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft_Movement_2
# 25 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 26 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse_1F_Text_BarryAlreadyLeft
# 27 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 28 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft_Movement_3
# 34 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 35 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_PLAYERS_MOM_STATE, 1
# 36 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	release
	end


TwinleafTown_PlayersHouse_1F_EventScript_ExitTrigger::
# 41 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	lock
# 42 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft_Movement_0
# 43 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 44 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	delay 48
# 45 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft_Movement_1
# 46 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 47 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse_1F_Text_DontGoInTallGrass
# 48 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 49 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_PLAYERS_MOM_STATE, 2
	return


TwinleafTown_PlayersHouse_1F_Mom_TalkedTo::
# 53 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	switch VAR_PLAYERS_MOM_STATE
# 54 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	case 0, TwinleafTown_PlayersHouse_1F_Mom_TalkedTo_2
# 55 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	case 1, TwinleafTown_PlayersHouse_1F_Mom_TalkedTo_2
# 57 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	case 2, TwinleafTown_PlayersHouse_1F_Mom_TalkedTo_3
	return

TwinleafTown_PlayersHouse_1F_Mom_TalkedTo_2:
# 56 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse_1F_Text_YouKnowBarry, MSGBOX_NPC
	return

TwinleafTown_PlayersHouse_1F_Mom_TalkedTo_3:
# 58 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse_1F_Text_TakeCare, MSGBOX_NPC
	return


TwinleafTown_PlayersHouse_1F_EventScript_Counter::
# 63 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse_1F_Text_Counter, MSGBOX_SIGN
	return


TwinleafTown_PlayersHouse_1F_EventScript_Fridge::
# 67 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse_1F_Text_Fridge, MSGBOX_SIGN
	return


TwinleafTown_PlayersHouse_1F_EventScript_Sink::
# 71 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse_1F_Text_Sink, MSGBOX_SIGN
	return


# 16 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft_Movement_0:
# 16 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_down
	step_end

# 17 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft_Movement_1:
# 17 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_up
	step_end

# 20 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft_Movement_2:
# 21 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 22 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 22 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 22 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 23 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 23 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 23 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_up
	step_end

# 28 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft_Movement_3:
# 29 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 29 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 29 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 30 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 30 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 30 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 31 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 32 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_up
	step_end

TwinleafTown_PlayersHouse_1F_Text_BarryAlreadyLeft::
# 74 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: {PLAYER}!\p"
	.string "Barry already left.\p"
	.string "I don't know what it was about, but he\n"
	.string "sure was in a hurry!$"

TwinleafTown_PlayersHouse_1F_Text_YouKnowBarry::
# 78 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: You know how impatient Barry is.\p"
	.string "He took off before I could even ask\n"
	.string "what it was about.$"

TwinleafTown_PlayersHouse_1F_Text_DontGoInTallGrass::
# 82 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: Oh, yes!\n"
	.string "{PLAYER}!\p"
	.string "Don't go into the tall grass. Wild\n"
	.string "Pokemon might attack you.\p"
	.string "It would be OK if you had your own\n"
	.string "Pokemon, but you don't, so...\p"
	.string "Well, take care, sweetie!$"

TwinleafTown_PlayersHouse_1F_Text_TakeCare::
# 86 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: Bye-bye {PLAYER}!\n"
	.string "You take care now!$"

TwinleafTown_PlayersHouse_1F_Text_IsntBarryWaitingForYou::
# 90 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: What is it, dear?\n"
	.string "Isn't Barry waiting for you?$"

TwinleafTown_PlayersHouse_1F_Text_QuickRest::
# 94 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: Welcome home, {PLAYER}.\n"
	.string "Are you and your Pokemon healthy?\n"
	.string "Take a quick rest, dear.$"

TwinleafTown_PlayersHouse_1F_Text_TreatPokemonWithKindness::
# 98 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: {PLAYER}.\p"
	.string "Listen. Always treat your Pokemon with\n"
	.string "kindness.\p"
	.string "Your Pokemon work hard, not for\n"
	.string "themselves, but for you!$"

TwinleafTown_PlayersHouse_1F_Text_Counter::
# 102 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "This is where Mom does all her delicious\n"
	.string "cooking.$"

TwinleafTown_PlayersHouse_1F_Text_Fridge::
# 106 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom's favorite dessert is in the\n"
	.string "refrigerator$"

TwinleafTown_PlayersHouse_1F_Text_Sink::
# 110 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom's kitchen is spotless!\n"
	.string "You can see your face on the floor!$"

text11::
# 114 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "$"

text12::
# 118 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "$"

text13::
# 122 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "$"

text14::
# 126 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "$"
