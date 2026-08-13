TwinleafTown_PlayersHouse_1F_MapScripts::
# 2 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TwinleafTown_PlayersHouse_1F_MapScript_OnTransition
# 5 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TwinleafTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	map_script_2 VAR_PLAYERS_MOM_STATE, 0, TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft
# 7 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	map_script_2 VAR_PLAYERS_MOM_STATE, 4, TwinleafTown_PlayersHouse_1F_Mom_AfterBattle
	.2byte 0


TwinleafTown_PlayersHouse_1F_MapScript_OnTransition::
# 13 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	setrespawn HEAL_LOCATION_TWINLEAF_TOWN
# 14 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	compare VAR_PLAYERS_MOM_STATE, 4
	goto_if_eq TwinleafTown_PlayersHouse_1F_MapScript_OnTransition_1
	return

TwinleafTown_PlayersHouse_1F_MapScript_OnTransition_1:
# 15 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 1, 3
# 16 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse_1F_MapScript_OnTransition_Movement_0
	return


TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft::
# 21 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	lock
# 22 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 23 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft_Movement_0
# 24 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft_Movement_1
# 25 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 26 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	delay 48
# 27 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft_Movement_2
# 32 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 33 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse_1F_Text_BarryAlreadyLeft
# 34 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 35 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft_Movement_3
# 41 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 42 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_PLAYERS_MOM_STATE, 1
# 43 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	release
	end


TwinleafTown_PlayersHouse_1F_EventScript_ExitTrigger::
# 48 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	lock
# 49 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft_Movement_0
# 50 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 51 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	delay 48
# 52 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft_Movement_1
# 53 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 54 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse_1F_Text_DontGoInTallGrass
# 55 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 56 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_PLAYERS_MOM_STATE, 2
	return


TwinleafTown_PlayersHouse_1F_Mom_TalkedTo::
# 60 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	switch VAR_PLAYERS_MOM_STATE
# 61 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	case 0, TwinleafTown_PlayersHouse_1F_Mom_TalkedTo_2
# 62 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	case 1, TwinleafTown_PlayersHouse_1F_Mom_TalkedTo_2
# 64 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	case 2, TwinleafTown_PlayersHouse_1F_Mom_TalkedTo_3
# 66 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	case 3, TwinleafTown_PlayersHouse_1F_Mom_TalkedTo_4
# 68 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	case 4, TwinleafTown_PlayersHouse_1F_Mom_TalkedTo_5
# 69 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	case 5, TwinleafTown_PlayersHouse_1F_Mom_TalkedTo_5
# 71 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	case 6, TwinleafTown_PlayersHouse_1F_Mom_TalkedTo_6
	return

TwinleafTown_PlayersHouse_1F_Mom_TalkedTo_2:
# 63 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse_1F_Text_YouKnowBarry, MSGBOX_NPC
	return

TwinleafTown_PlayersHouse_1F_Mom_TalkedTo_3:
# 65 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse_1F_Text_TakeCare, MSGBOX_NPC
	return

TwinleafTown_PlayersHouse_1F_Mom_TalkedTo_4:
# 67 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse_1F_Text_IsntBarryWaitingForYou, MSGBOX_NPC
	return

TwinleafTown_PlayersHouse_1F_Mom_TalkedTo_5:
# 70 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse_1F_Text_RunningShoes, MSGBOX_NPC
	return

TwinleafTown_PlayersHouse_1F_Mom_TalkedTo_6:
# 72 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse_1F_Text_TakeARest, MSGBOX_NPC
	return


TwinleafTown_PlayersHouse_1F_Mom_AfterBattle::
# 77 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	lock
# 78 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	delay 24
# 79 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_MOM, TwinleafTown_PlayersHouse_1F_Mom_AfterBattle_Movement_0
# 83 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 84 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	delay 24
# 85 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_MOM, TwinleafTown_PlayersHouse_1F_Mom_AfterBattle_Movement_1
# 92 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	delay 48
# 93 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse_1F_Mom_AfterBattle_Movement_2
# 96 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	delay 48
# 97 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse_1F_Mom_AfterBattle_Movement_3
# 102 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	waitmovementall
# 103 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse_1F_Text_AfterBattle
# 105 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	delay 24
# 106 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse_1F_Text_PutTheseOn
# 107 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 108 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 109 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_PLAYERS_MOM_STATE, 5
# 110 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	release
	end


TwinleafTown_PlayersHouse_1F_EventScript_Counter::
# 116 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse_1F_Text_Counter, MSGBOX_SIGN
	return


TwinleafTown_PlayersHouse_1F_EventScript_Fridge::
# 120 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse_1F_Text_Fridge, MSGBOX_SIGN
	return


TwinleafTown_PlayersHouse_1F_EventScript_Sink::
# 124 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse_1F_Text_Sink, MSGBOX_SIGN
	return


# 16 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse_1F_MapScript_OnTransition_Movement_0:
# 16 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	face_up
	step_end

# 23 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft_Movement_0:
# 23 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_down
	step_end

# 24 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft_Movement_1:
# 24 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_up
	step_end

# 27 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft_Movement_2:
# 28 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 29 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 29 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 29 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 30 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 30 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 30 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_up
	step_end

# 35 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft_Movement_3:
# 36 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 36 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 36 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 37 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 37 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 37 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 38 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 39 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_up
	step_end

# 79 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse_1F_Mom_AfterBattle_Movement_0:
# 80 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 81 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	face_up
	step_end

# 85 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse_1F_Mom_AfterBattle_Movement_1:
# 86 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 86 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 86 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 87 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 87 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 88 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 88 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 88 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 89 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 89 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 90 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_left
	step_end

# 93 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse_1F_Mom_AfterBattle_Movement_2:
# 94 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_right
	step_end

# 97 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse_1F_Mom_AfterBattle_Movement_3:
# 98 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 98 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 98 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 99 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 99 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 100 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_right
	step_end

TwinleafTown_PlayersHouse_1F_Text_BarryAlreadyLeft::
# 127 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: {PLAYER}!\p"
	.string "Barry already left.\p"
	.string "I don't know what it was about, but he\n"
	.string "sure was in a hurry!$"

TwinleafTown_PlayersHouse_1F_Text_YouKnowBarry::
# 131 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: You know how impatient Barry is.\p"
	.string "He took off before I could even ask\n"
	.string "what it was about.$"

TwinleafTown_PlayersHouse_1F_Text_DontGoInTallGrass::
# 135 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: Oh, yes!\n"
	.string "{PLAYER}!\p"
	.string "Don't go into the tall grass. Wild\n"
	.string "Pokemon might attack you.\p"
	.string "It would be OK if you had your own\n"
	.string "Pokemon, but you don't, so...\p"
	.string "Well, take care, sweetie!$"

TwinleafTown_PlayersHouse_1F_Text_TakeCare::
# 139 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: Bye-bye {PLAYER}!\n"
	.string "You take care now!$"

TwinleafTown_PlayersHouse_1F_Text_IsntBarryWaitingForYou::
# 143 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: What is it, dear?\n"
	.string "Isn't Barry waiting for you?$"

TwinleafTown_PlayersHouse_1F_Text_QuickRest::
# 147 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: Welcome home, {PLAYER}.\n"
	.string "Are you and your Pokemon healthy?\n"
	.string "Take a quick rest, dear.$"

TwinleafTown_PlayersHouse_1F_Text_TreatPokemonWithKindness::
# 151 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: {PLAYER}.\p"
	.string "Listen. Always treat your Pokemon with\n"
	.string "kindness.\p"
	.string "Your Pokemon work hard, not for\n"
	.string "themselves, but for you!$"

TwinleafTown_PlayersHouse_1F_Text_Counter::
# 155 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "This is where Mom does all her delicious\n"
	.string "cooking.$"

TwinleafTown_PlayersHouse_1F_Text_Fridge::
# 159 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom's favorite dessert is in the\n"
	.string "refrigerator$"

TwinleafTown_PlayersHouse_1F_Text_Sink::
# 163 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom's kitchen is spotless!\n"
	.string "You can see your face on the floor!$"

TwinleafTown_PlayersHouse_1F_Text_AfterBattle::
# 167 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: What’s the matter, dear?\p"
	.string "...\p"
	.string "Wow.\n"
	.string "That’s what happened to you?\p"
	.string "You and Barry are lucky to have met\n"
	.string "Prof. Rowan.\p"
	.string "Imagine if you didn’t...\p"
	.string "I wouldn’t like to think what the wild\n"
	.string "Pokémon might have done to you two.\p"
	.string "{PLAYER}, go see Prof. Rowan, and thank\n"
	.string "him properly for your Pokémon.\p"
	.string "His lab is in Sandgem Town, isn’t it?\p"
	.string "Now that you have your own Pokémon,\n"
	.string "the tall grass won’t be so threatening.$"

TwinleafTown_PlayersHouse_1F_Text_PutTheseOn::
# 171 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Oh, I know!\n"
	.string "{PLAYER}, put these on.\p"
	.string "{PLAY_SE MUS_OBTAIN_ITEM}{PLAYER} recieved a pair of {COLOR RED}Running\n"
	.string "Shoes{COLOR DARK_GRAY}!{WAIT_SE}\p"
	.string "Going to Sandgem Town is like an\n"
	.string "adventure in itself, right?\p"
	.string "With those Running Shoes, you can get\n"
	.string "to faraway places much faster.\p"
	.string "OK...\n"
	.string "Let me read the instructions...\p"
	.string "“Press the B Button and dash about\n"
	.string "faster than ever before!\p"
	.string "“Put on the Running Shoes and blaze\n"
	.string "new trails of adventure!”\p"
	.string "Well, isn’t that just nifty!$"

TwinleafTown_PlayersHouse_1F_Text_RunningShoes::
# 175 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: I’ll read you the instructions for\n"
	.string "the Running Shoes...\p"
	.string "“Press the B Button and dash about\n"
	.string "faster than ever before!\p"
	.string "“Put on the Running Shoes and blaze\n"
	.string "new trails of adventure!”\p"
	.string "Well, isn’t that just nifty!$"

TwinleafTown_PlayersHouse_1F_Text_TakeARest::
# 179 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: Welcome home, {PLAYER}.\n"
	.string "Are you and your Pokémon healthy?\p"
	.string "Take a quick rest, dear.\p"
	.string "$"
