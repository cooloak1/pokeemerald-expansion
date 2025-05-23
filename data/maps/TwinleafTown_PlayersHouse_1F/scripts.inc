TwinleafTown_PlayersHouse_1F_MapScripts::
# 2 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TwinleafTown_PlayersHouse_1F_MapScript_OnTransition
# 5 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TwinleafTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft
	.2byte 0


TwinleafTown_PlayersHouse_1F_MapScript_OnTransition::
# 11 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	goto_if_unset FLAG_MOM_BARRY_LEFT, TwinleafTown_PlayersHouse_1F_MapScript_OnTransition_1
	return

TwinleafTown_PlayersHouse_1F_MapScript_OnTransition_1:
# 12 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 13 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return


TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft::
# 19 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	lock
# 20 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, walk_in_place_fast_up
# 21 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 22 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 23 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	delay 48
# 24 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft_Movement_0
# 29 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 30 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	release
	return


# 24 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse_1F_EventScript_Mom_BarryLeft_Movement_0:
# 25 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 25 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 26 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 26 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 26 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 27 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 27 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	walk_up
	step_end

text1::
# 33 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: {PLAYER}!\p"
	.string "Barry already left.\p"
	.string "I don't know what it was about, but he\n"
	.string "sure was in a hurry!$"

text2::
# 37 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: You know how impatient Barry is.\p"
	.string "He took off before I could even ask\n"
	.string "what it was about.$"

text3::
# 41 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: Oh, yes!\n"
	.string "{PLAYER}!\p"
	.string "Don't go into the tall grass. Wild\n"
	.string "Pokemon might attack you.\p"
	.string "It would be OK if you had your own\n"
	.string "Pokemon, but you don't, so...\p"
	.string "Well, take care, sweetie!$"

text4::
# 45 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: Bye-bye {PLAYER}!\n"
	.string "You take care now!$"

text5::
# 49 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: What is it, dear?\n"
	.string "Isn't Barry waiting for you?$"

text6::
# 53 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: Welcome home, {PLAYER}.\n"
	.string "Are you and your Pokemon healthy?\n"
	.string "Take a quick rest, dear.$"

text7::
# 57 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: {PLAYER}.\p"
	.string "Listen. Always treat your Pokemon with\n"
	.string "kindness.\p"
	.string "Your Pokemon work hard, not for\n"
	.string "themselves, but for you!$"

text8::
# 61 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "This is where Mom does all her delicious\n"
	.string "cooking.$"

text9::
# 65 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom's favorite dessert is in the\n"
	.string "refrigerator$"

text10::
# 69 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "Mom's kitchen is spotless!\n"
	.string "You can see your face on the floor!$"

text11::
# 73 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "$"

text12::
# 77 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "$"

text13::
# 81 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "$"

text14::
# 85 "data/maps/TwinleafTown_PlayersHouse_1F/scripts.pory"
	.string "$"
