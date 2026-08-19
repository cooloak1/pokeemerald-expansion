LakeVerity_MapScripts::
# 2 "data/maps/LakeVerity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LakeVerity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LakeVerity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LakeVerity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 4 "data/maps/LakeVerity/scripts.pory"
	call LakeVerity_EventScript_SetMapLayout
	return


LakeVerity_EventScript_SetMapLayout::
# 9 "data/maps/LakeVerity/scripts.pory"
	goto_if_set FLAG_LAKE_VALOR_BOMBED, LakeVerity_EventScript_SetMapLayout_1
# 13 "data/maps/LakeVerity/scripts.pory"
	setmaplayoutindex LAYOUT_LAKE_VERITY_LOW_WATER
	return

LakeVerity_EventScript_SetMapLayout_1:
# 10 "data/maps/LakeVerity/scripts.pory"
	setmaplayoutindex LAYOUT_LAKE_VERITY
	return


Lake_Verity_EventScript_CyrusTrigger1::
# 18 "data/maps/LakeVerity/scripts.pory"
	setvar VAR_TEMP_4, 0
# 19 "data/maps/LakeVerity/scripts.pory"
	goto LakeVerity_EventScript_CyrusScene
	return


Lake_Verity_EventScript_CyrusTrigger2::
# 23 "data/maps/LakeVerity/scripts.pory"
	setvar VAR_TEMP_4, 1
# 24 "data/maps/LakeVerity/scripts.pory"
	goto LakeVerity_EventScript_CyrusScene
	return


LakeVerity_EventScript_Sign::
# 28 "data/maps/LakeVerity/scripts.pory"
	msgbox LakeVerity_Text_Sign, MSGBOX_SIGN
	end


LakeVerity_EventScript_CyrusScene::
# 33 "data/maps/LakeVerity/scripts.pory"
	lock
# 34 "data/maps/LakeVerity/scripts.pory"
	setvar VAR_BARRY_STATE, 4
# 35 "data/maps/LakeVerity/scripts.pory"
	switch VAR_TEMP_4
# 36 "data/maps/LakeVerity/scripts.pory"
	case 0, LakeVerity_EventScript_CyrusScene_3
# 39 "data/maps/LakeVerity/scripts.pory"
	case 1, LakeVerity_EventScript_CyrusScene_4
LakeVerity_EventScript_CyrusScene_1:
# 47 "data/maps/LakeVerity/scripts.pory"
	msgbox LakeVerity_Text_Barry_WereHere
# 48 "data/maps/LakeVerity/scripts.pory"
	closemessage
# 49 "data/maps/LakeVerity/scripts.pory"
	compare VAR_TEMP_4, 0
	goto_if_eq LakeVerity_EventScript_CyrusScene_6
LakeVerity_EventScript_CyrusScene_5:
# 56 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, LakeVerity_EventScript_CyrusScene_Movement_3
# 57 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeVerity_EventScript_CyrusScene_Movement_3
# 58 "data/maps/LakeVerity/scripts.pory"
	waitmovement 0
# 59 "data/maps/LakeVerity/scripts.pory"
	msgbox LakeVerity_Text_BarryWhatsGoingOn
# 60 "data/maps/LakeVerity/scripts.pory"
	closemessage
# 61 "data/maps/LakeVerity/scripts.pory"
	special SpawnCameraObject
# 62 "data/maps/LakeVerity/scripts.pory"
	applymovement LOCALID_CAMERA, LakeVerity_EventScript_CyrusScene_Movement_4
# 63 "data/maps/LakeVerity/scripts.pory"
	waitmovement 0
# 64 "data/maps/LakeVerity/scripts.pory"
	msgbox LakeVerity_Text_CyrusOminous
# 65 "data/maps/LakeVerity/scripts.pory"
	closemessage
# 66 "data/maps/LakeVerity/scripts.pory"
	applymovement LOCALID_CAMERA, LakeVerity_EventScript_CyrusScene_Movement_5
# 67 "data/maps/LakeVerity/scripts.pory"
	applymovement LOCALID_CYRUS, LakeVerity_EventScript_CyrusScene_Movement_6
# 72 "data/maps/LakeVerity/scripts.pory"
	waitmovement 0
# 73 "data/maps/LakeVerity/scripts.pory"
	special RemoveCameraObject
# 74 "data/maps/LakeVerity/scripts.pory"
	msgbox LakeVerity_Text_Cyrus_StepAside
# 75 "data/maps/LakeVerity/scripts.pory"
	closemessage
# 76 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeVerity_EventScript_CyrusScene_Movement_7
# 77 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, LakeVerity_EventScript_CyrusScene_Movement_8
# 78 "data/maps/LakeVerity/scripts.pory"
	waitmovement 0
# 79 "data/maps/LakeVerity/scripts.pory"
	applymovement LOCALID_CYRUS, LakeVerity_EventScript_CyrusScene_Movement_5
# 80 "data/maps/LakeVerity/scripts.pory"
	waitmovement 0
# 81 "data/maps/LakeVerity/scripts.pory"
	removeobject LOCALID_CYRUS
# 82 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeVerity_EventScript_CyrusScene_Movement_0
# 83 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, LakeVerity_EventScript_CyrusScene_Movement_9
# 84 "data/maps/LakeVerity/scripts.pory"
	waitmovement 0
# 85 "data/maps/LakeVerity/scripts.pory"
	msgbox LakeVerity_Text_Barry_WeirdGuy
# 86 "data/maps/LakeVerity/scripts.pory"
	closemessage
# 87 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeVerity_EventScript_CyrusScene_Movement_7
# 88 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, LakeVerity_EventScript_CyrusScene_Movement_10
# 89 "data/maps/LakeVerity/scripts.pory"
	waitmovement 0
# 90 "data/maps/LakeVerity/scripts.pory"
	msgbox LakeVerity_Text_Barry_LetsCatch
# 91 "data/maps/LakeVerity/scripts.pory"
	closemessage
# 92 "data/maps/LakeVerity/scripts.pory"
	playmoncry SPECIES_MESPRIT, CRY_MODE_NORMAL
# 93 "data/maps/LakeVerity/scripts.pory"
	waitmoncry
# 94 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 95 "data/maps/LakeVerity/scripts.pory"
	playse SE_PIN
# 96 "data/maps/LakeVerity/scripts.pory"
	waitmovement 0
# 97 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeVerity_EventScript_CyrusScene_Movement_11
# 111 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, LakeVerity_EventScript_CyrusScene_Movement_12
# 124 "data/maps/LakeVerity/scripts.pory"
	waitmovement 0
# 125 "data/maps/LakeVerity/scripts.pory"
	msgbox LakeVerity_Text_Barry_DidYouHearThat
# 126 "data/maps/LakeVerity/scripts.pory"
	closemessage
# 127 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 128 "data/maps/LakeVerity/scripts.pory"
	waitmovement 0
# 129 "data/maps/LakeVerity/scripts.pory"
	msgbox LakeVerity_Text_Barry_PokeBalls
# 130 "data/maps/LakeVerity/scripts.pory"
	closemessage
# 131 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeVerity_EventScript_CyrusScene_Movement_0
# 132 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, LakeVerity_EventScript_CyrusScene_Movement_13
# 133 "data/maps/LakeVerity/scripts.pory"
	waitmovement 0
# 134 "data/maps/LakeVerity/scripts.pory"
	destroyfollowernpc
# 135 "data/maps/LakeVerity/scripts.pory"
	setflag FLAG_HIDE_BARRY_ROUTE_201
# 137 "data/maps/LakeVerity/scripts.pory"
	release
	return

LakeVerity_EventScript_CyrusScene_3:
# 37 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeVerity_EventScript_CyrusScene_Movement_0
# 38 "data/maps/LakeVerity/scripts.pory"
	waitmovement 0
	goto LakeVerity_EventScript_CyrusScene_1

LakeVerity_EventScript_CyrusScene_4:
# 40 "data/maps/LakeVerity/scripts.pory"
	release
# 41 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeVerity_EventScript_CyrusScene_Movement_1
# 44 "data/maps/LakeVerity/scripts.pory"
	waitmovement 0
# 45 "data/maps/LakeVerity/scripts.pory"
	lock
	goto LakeVerity_EventScript_CyrusScene_1

LakeVerity_EventScript_CyrusScene_6:
# 50 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, LakeVerity_EventScript_CyrusScene_Movement_2
# 54 "data/maps/LakeVerity/scripts.pory"
	waitmovement 0
	goto LakeVerity_EventScript_CyrusScene_5


# 37 "data/maps/LakeVerity/scripts.pory"
LakeVerity_EventScript_CyrusScene_Movement_0:
# 37 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_down
	step_end

# 41 "data/maps/LakeVerity/scripts.pory"
LakeVerity_EventScript_CyrusScene_Movement_1:
# 42 "data/maps/LakeVerity/scripts.pory"
	walk_left
# 43 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_right
	step_end

# 50 "data/maps/LakeVerity/scripts.pory"
LakeVerity_EventScript_CyrusScene_Movement_2:
# 51 "data/maps/LakeVerity/scripts.pory"
	walk_fast_right
# 52 "data/maps/LakeVerity/scripts.pory"
	walk_fast_up
	step_end

# 56 "data/maps/LakeVerity/scripts.pory"
LakeVerity_EventScript_CyrusScene_Movement_3:
# 56 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 56 "data/maps/LakeVerity/scripts.pory"
	walk_up
	step_end

# 62 "data/maps/LakeVerity/scripts.pory"
LakeVerity_EventScript_CyrusScene_Movement_4:
# 62 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 62 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 62 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 62 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 62 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 62 "data/maps/LakeVerity/scripts.pory"
	walk_up
	step_end

# 66 "data/maps/LakeVerity/scripts.pory"
LakeVerity_EventScript_CyrusScene_Movement_5:
# 66 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 66 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 66 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 66 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 66 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 66 "data/maps/LakeVerity/scripts.pory"
	walk_down
	step_end

# 67 "data/maps/LakeVerity/scripts.pory"
LakeVerity_EventScript_CyrusScene_Movement_6:
# 68 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 68 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 68 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 69 "data/maps/LakeVerity/scripts.pory"
	walk_left
# 70 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 70 "data/maps/LakeVerity/scripts.pory"
	walk_down
	step_end

# 76 "data/maps/LakeVerity/scripts.pory"
LakeVerity_EventScript_CyrusScene_Movement_7:
# 76 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_right
	step_end

# 77 "data/maps/LakeVerity/scripts.pory"
LakeVerity_EventScript_CyrusScene_Movement_8:
# 77 "data/maps/LakeVerity/scripts.pory"
	walk_right
# 77 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_left
	step_end

# 83 "data/maps/LakeVerity/scripts.pory"
LakeVerity_EventScript_CyrusScene_Movement_9:
# 83 "data/maps/LakeVerity/scripts.pory"
	walk_left
# 83 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_down
	step_end

# 88 "data/maps/LakeVerity/scripts.pory"
LakeVerity_EventScript_CyrusScene_Movement_10:
# 88 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_left
	step_end

# 97 "data/maps/LakeVerity/scripts.pory"
LakeVerity_EventScript_CyrusScene_Movement_11:
# 98 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_up
# 99 "data/maps/LakeVerity/scripts.pory"
	delay_8
# 100 "data/maps/LakeVerity/scripts.pory"
	delay_16
# 101 "data/maps/LakeVerity/scripts.pory"
	delay_16
# 102 "data/maps/LakeVerity/scripts.pory"
	delay_16
# 103 "data/maps/LakeVerity/scripts.pory"
	delay_8
# 104 "data/maps/LakeVerity/scripts.pory"
	delay_16
# 105 "data/maps/LakeVerity/scripts.pory"
	delay_8
# 106 "data/maps/LakeVerity/scripts.pory"
	delay_16
# 107 "data/maps/LakeVerity/scripts.pory"
	delay_16
# 108 "data/maps/LakeVerity/scripts.pory"
	delay_16
# 109 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_right
	step_end

# 111 "data/maps/LakeVerity/scripts.pory"
LakeVerity_EventScript_CyrusScene_Movement_12:
# 112 "data/maps/LakeVerity/scripts.pory"
	walk_fast_up
# 112 "data/maps/LakeVerity/scripts.pory"
	walk_fast_up
# 112 "data/maps/LakeVerity/scripts.pory"
	walk_fast_up
# 113 "data/maps/LakeVerity/scripts.pory"
	delay_16
# 114 "data/maps/LakeVerity/scripts.pory"
	delay_16
# 115 "data/maps/LakeVerity/scripts.pory"
	delay_16
# 116 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_fast_left
# 117 "data/maps/LakeVerity/scripts.pory"
	delay_16
# 118 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_fast_up
# 119 "data/maps/LakeVerity/scripts.pory"
	delay_16
# 120 "data/maps/LakeVerity/scripts.pory"
	delay_8
# 121 "data/maps/LakeVerity/scripts.pory"
	walk_fast_down
# 121 "data/maps/LakeVerity/scripts.pory"
	walk_fast_down
# 121 "data/maps/LakeVerity/scripts.pory"
	walk_fast_down
# 122 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_left
	step_end

# 132 "data/maps/LakeVerity/scripts.pory"
LakeVerity_EventScript_CyrusScene_Movement_13:
# 132 "data/maps/LakeVerity/scripts.pory"
	walk_fast_down
# 132 "data/maps/LakeVerity/scripts.pory"
	walk_fast_down
# 132 "data/maps/LakeVerity/scripts.pory"
	walk_fast_down
# 132 "data/maps/LakeVerity/scripts.pory"
	walk_fast_down
# 132 "data/maps/LakeVerity/scripts.pory"
	walk_fast_down
# 132 "data/maps/LakeVerity/scripts.pory"
	walk_fast_down
	step_end

LakeVerity_Text_Sign::
# 154 "data/maps/LakeVerity/scripts.pory"
	.string "Lake Verity Ahead\p"
	.string "According to legend, this lake is home\n"
	.string "to the Pokemon said to be “The Being of\l"
	.string "Emotion.”\p"
	.string "It is because of this Pokemon that\n"
	.string "people can experience sorrow and joy.$"

LakeVerity_Text_Barry_WereHere::
# 158 "data/maps/LakeVerity/scripts.pory"
	.string "Barry: All right!\n"
	.string "We’re at the lake!\p"
	.string "Get ready, because we’re capturing that\n"
	.string "legendary Pokémon.\p"
	.string "Trust me on this one. It’s here.\n"
	.string "It even says so on the sign!$"

LakeVerity_Text_BarryWhatsGoingOn::
# 162 "data/maps/LakeVerity/scripts.pory"
	.string "Barry: What’s going on...?$"

LakeVerity_Text_CyrusOminous::
# 166 "data/maps/LakeVerity/scripts.pory"
	.string "...The flowing time...\n"
	.string "...The expanding space...\p"
	.string "I will make it all mine one day...\n"
	.string "Cyrus is my name. Remember it...\p"
	.string "Until then, sleep while you can,\n"
	.string "legendary Pokémon of the lake bed...$"

LakeVerity_Text_Cyrus_StepAside::
# 170 "data/maps/LakeVerity/scripts.pory"
	.string "Allow me to pass.\n"
	.string "Step aside.$"

LakeVerity_Text_Barry_WeirdGuy::
# 174 "data/maps/LakeVerity/scripts.pory"
	.string "Barry: What was that about?\n"
	.string "Weird guy...$"

LakeVerity_Text_Barry_LetsCatch::
# 178 "data/maps/LakeVerity/scripts.pory"
	.string "OK, {PLAYER}\n"
	.string "Let’s catch that legendary Pokémon!$"

LakeVerity_Text_Mesprit_Cry::
# 182 "data/maps/LakeVerity/scripts.pory"
	.string "Kyauuun!$"

LakeVerity_Text_Barry_DidYouHearThat::
# 186 "data/maps/LakeVerity/scripts.pory"
	.string "Barry: !\n"
	.string "Did you hear that, {PLAYER}?!\p"
	.string "That was the legendary Pokémon crying!\n"
	.string "That had to be it!\p"
	.string "OK! This is our chance!\n"
	.string "Let’s catch it!$"

LakeVerity_Text_Barry_PokeBalls::
# 190 "data/maps/LakeVerity/scripts.pory"
	.string "...Wait!\n"
	.string "What...?!\p"
	.string "We don’t have anything on us!\p"
	.string "You know, Poké Balls!\n"
	.string "P-O-K-accent-E Balls!\p"
	.string "If we don’t have those, we can’t catch\n"
	.string "Pokémon or take them around with us!\p"
	.string "...Do you think Prof. Rowan’d give us some\n"
	.string "if we asked him?\p"
	.string "You know, you remember what he said,\n"
	.string "don’t you?\p"
	.string "He said to visit him at his lab if we\n"
	.string "needed anything.\p"
	.string "OK, {PLAYER}!\n"
	.string "I’ll race you!\p"
	.string "First one to the professor’s lab in\n"
	.string "Sandgem Town rules!$"
