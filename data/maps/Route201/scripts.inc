Route201_MapScripts::
# 2 "data/maps/Route201/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route201_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route201_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route201/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


Route201_EventScript_BarryTrigger_1::
# 8 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_4, 0
# 9 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_ChooseBarryDialogue
	return


Route201_EventScript_BarryTrigger_2::
# 13 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_4, 1
# 14 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_ChooseBarryDialogue
	return


Route201_EventScript_BarryTrigger_3::
# 18 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_4, 2
# 19 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_ChooseBarryDialogue
	return


Route201_EventScript_BarryTrigger_4::
# 23 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_4, 3
# 24 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_ChooseBarryDialogue
	return


Route201_EventScript_ChooseBarryDialogue::
# 28 "data/maps/Route201/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Route201_EventScript_ChooseBarryDialogue_1
# 32 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BarryGoingToSandgem
	return

Route201_EventScript_ChooseBarryDialogue_1:
# 29 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BarryGoingToLakeVerity
	return


Route201_EventScript_BarryGoingToLakeVerity::
	return


Route201_EventScript_BarryGoingToSandgem::
# 41 "data/maps/Route201/scripts.pory"
	lock
# 42 "data/maps/Route201/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 43 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route201/scripts.pory"
	delay 48
# 45 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_TooSlow
# 46 "data/maps/Route201/scripts.pory"
	closemessage
# 47 "data/maps/Route201/scripts.pory"
	call Route201_EventScript_BarryMoveToPlayer
# 48 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_LetsGoToRowansLab
# 49 "data/maps/Route201/scripts.pory"
	closemessage
# 50 "data/maps/Route201/scripts.pory"
	call Route201_EventScript_BarryMoveToTallGrass
# 51 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_DontWorryTallGrass
# 52 "data/maps/Route201/scripts.pory"
	closemessage
# 53 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_0
# 57 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryGoingToSandgem_Movement_1
# 58 "data/maps/Route201/scripts.pory"
	waitmovement 5
# 59 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_RushTallGrass
# 60 "data/maps/Route201/scripts.pory"
	closemessage
# 61 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryGoingToSandgem_Movement_2
# 62 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_3
# 66 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_HereGoes
# 68 "data/maps/Route201/scripts.pory"
	closemessage
# 69 "data/maps/Route201/scripts.pory"
	delay_16
# 70 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_4
# 73 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Rowan_HoldIt
# 75 "data/maps/Route201/scripts.pory"
	closemessage
# 76 "data/maps/Route201/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 77 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 78 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route201/scripts.pory"
	delay 48
# 80 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_BarryMoveToPlayer::
# 84 "data/maps/Route201/scripts.pory"
	switch VAR_TEMP_4
# 85 "data/maps/Route201/scripts.pory"
	case 0, Route201_EventScript_BarryMoveToPlayer_3
# 92 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_BarryMoveToPlayer_4
# 99 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_BarryMoveToPlayer_5
# 104 "data/maps/Route201/scripts.pory"
	case 3, Route201_EventScript_BarryMoveToPlayer_6
Route201_EventScript_BarryMoveToPlayer_1:
	return

Route201_EventScript_BarryMoveToPlayer_3:
# 86 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryMoveToPlayer_Movement_0
# 91 "data/maps/Route201/scripts.pory"
	waitmovement 0
	goto Route201_EventScript_BarryMoveToPlayer_1

Route201_EventScript_BarryMoveToPlayer_4:
# 93 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryMoveToPlayer_Movement_1
# 98 "data/maps/Route201/scripts.pory"
	waitmovement 0
	goto Route201_EventScript_BarryMoveToPlayer_1

Route201_EventScript_BarryMoveToPlayer_5:
# 100 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryMoveToPlayer_Movement_2
# 103 "data/maps/Route201/scripts.pory"
	waitmovement 0
	goto Route201_EventScript_BarryMoveToPlayer_1

Route201_EventScript_BarryMoveToPlayer_6:
# 105 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryMoveToPlayer_Movement_3
	goto Route201_EventScript_BarryMoveToPlayer_1


Route201_EventScript_BarryMoveToTallGrass::
# 115 "data/maps/Route201/scripts.pory"
	switch VAR_TEMP_4
# 116 "data/maps/Route201/scripts.pory"
	case 0, Route201_EventScript_BarryMoveToTallGrass_3
# 130 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_BarryMoveToTallGrass_4
# 144 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_BarryMoveToTallGrass_5
# 158 "data/maps/Route201/scripts.pory"
	case 3, Route201_EventScript_BarryMoveToTallGrass_6
Route201_EventScript_BarryMoveToTallGrass_1:
	return

Route201_EventScript_BarryMoveToTallGrass_3:
# 117 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryMoveToTallGrass_Movement_0
# 123 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryMoveToTallGrass_Movement_1
# 129 "data/maps/Route201/scripts.pory"
	waitmovement 0
	goto Route201_EventScript_BarryMoveToTallGrass_1

Route201_EventScript_BarryMoveToTallGrass_4:
# 131 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryMoveToTallGrass_Movement_2
# 137 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryMoveToTallGrass_Movement_3
# 143 "data/maps/Route201/scripts.pory"
	waitmovement 0
	goto Route201_EventScript_BarryMoveToTallGrass_1

Route201_EventScript_BarryMoveToTallGrass_5:
# 145 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryMoveToTallGrass_Movement_4
# 151 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryMoveToTallGrass_Movement_5
# 157 "data/maps/Route201/scripts.pory"
	waitmovement 0
	goto Route201_EventScript_BarryMoveToTallGrass_1

Route201_EventScript_BarryMoveToTallGrass_6:
# 159 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryMoveToTallGrass_Movement_6
# 165 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryMoveToTallGrass_Movement_7
# 171 "data/maps/Route201/scripts.pory"
	waitmovement 0
	goto Route201_EventScript_BarryMoveToTallGrass_1


Route201_EventScript_NPC1::
# 177 "data/maps/Route201/scripts.pory"
	lock
# 178 "data/maps/Route201/scripts.pory"
	faceplayer
# 179 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_NPC1, MSGBOX_NPC
# 180 "data/maps/Route201/scripts.pory"
	release
	end


Route201_EventScript_NPC2::
# 185 "data/maps/Route201/scripts.pory"
	faceplayer
# 186 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_NPC2, MSGBOX_NPC
	end


Route201_EventScript_NPC3::
# 191 "data/maps/Route201/scripts.pory"
	faceplayer
# 192 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_NPC3, MSGBOX_NPC
	end


Route201_EventScript_PokemartLady::
# 197 "data/maps/Route201/scripts.pory"
	lock
# 198 "data/maps/Route201/scripts.pory"
	faceplayer
# 199 "data/maps/Route201/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POTION_ROUTE_201, Route201_EventScript_PokemartLady_2
# 210 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_PokemartLady_AlreadyGaveItem, MSGBOX_NPC
Route201_EventScript_PokemartLady_1:
# 212 "data/maps/Route201/scripts.pory"
	release
	end

Route201_EventScript_PokemartLady_2:
# 200 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_PokemartLady, MSGBOX_NPC
# 201 "data/maps/Route201/scripts.pory"
	giveitem ITEM_POTION
# 202 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route201_EventScript_PokemartLady_5
# 206 "data/maps/Route201/scripts.pory"
	setflag FLAG_RECEIVED_POTION_ROUTE_201
	goto Route201_EventScript_PokemartLady_1

Route201_EventScript_PokemartLady_5:
# 203 "data/maps/Route201/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route201_EventScript_PokemartLady_1


Route201_EventScript_RouteSignTwinleaf::
# 217 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_RouteSignTwinleaf, MSGBOX_SIGN
	return


Route201_EventScript_RouteSignSandgem::
# 221 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_RouteSignSandgem, MSGBOX_SIGN
	return


Route201_EventScript_TrainerTipsSign::
# 225 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_TrainerTipsSign, MSGBOX_SIGN
	return


# 53 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_0:
# 54 "data/maps/Route201/scripts.pory"
	walk_left
# 55 "data/maps/Route201/scripts.pory"
	walk_in_place_down
	step_end

# 57 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_1:
# 57 "data/maps/Route201/scripts.pory"
	walk_in_place_up
	step_end

# 61 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_2:
# 61 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 62 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_3:
# 63 "data/maps/Route201/scripts.pory"
	walk_left
# 63 "data/maps/Route201/scripts.pory"
	walk_left
# 63 "data/maps/Route201/scripts.pory"
	walk_left
# 63 "data/maps/Route201/scripts.pory"
	walk_left
# 64 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 70 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_4:
# 71 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 71 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 71 "data/maps/Route201/scripts.pory"
	walk_fast_right
	step_end

# 86 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMoveToPlayer_Movement_0:
# 87 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 88 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 88 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 89 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
	step_end

# 93 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMoveToPlayer_Movement_1:
# 94 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 95 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 96 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
	step_end

# 100 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMoveToPlayer_Movement_2:
# 101 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 105 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMoveToPlayer_Movement_3:
# 106 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 107 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 108 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
	step_end

# 117 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMoveToTallGrass_Movement_0:
# 118 "data/maps/Route201/scripts.pory"
	walk_up
# 118 "data/maps/Route201/scripts.pory"
	walk_up
# 119 "data/maps/Route201/scripts.pory"
	walk_right
# 119 "data/maps/Route201/scripts.pory"
	walk_right
# 119 "data/maps/Route201/scripts.pory"
	walk_right
# 119 "data/maps/Route201/scripts.pory"
	walk_right
# 120 "data/maps/Route201/scripts.pory"
	walk_up
# 121 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 123 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMoveToTallGrass_Movement_1:
# 124 "data/maps/Route201/scripts.pory"
	walk_up
# 125 "data/maps/Route201/scripts.pory"
	walk_right
# 125 "data/maps/Route201/scripts.pory"
	walk_right
# 125 "data/maps/Route201/scripts.pory"
	walk_right
# 125 "data/maps/Route201/scripts.pory"
	walk_right
# 126 "data/maps/Route201/scripts.pory"
	walk_up
# 126 "data/maps/Route201/scripts.pory"
	walk_up
# 127 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 131 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMoveToTallGrass_Movement_2:
# 132 "data/maps/Route201/scripts.pory"
	walk_up
# 132 "data/maps/Route201/scripts.pory"
	walk_up
# 133 "data/maps/Route201/scripts.pory"
	walk_right
# 133 "data/maps/Route201/scripts.pory"
	walk_right
# 133 "data/maps/Route201/scripts.pory"
	walk_right
# 134 "data/maps/Route201/scripts.pory"
	walk_up
# 135 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 137 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMoveToTallGrass_Movement_3:
# 138 "data/maps/Route201/scripts.pory"
	walk_up
# 139 "data/maps/Route201/scripts.pory"
	walk_right
# 139 "data/maps/Route201/scripts.pory"
	walk_right
# 139 "data/maps/Route201/scripts.pory"
	walk_right
# 140 "data/maps/Route201/scripts.pory"
	walk_up
# 140 "data/maps/Route201/scripts.pory"
	walk_up
# 141 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 145 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMoveToTallGrass_Movement_4:
# 146 "data/maps/Route201/scripts.pory"
	walk_up
# 146 "data/maps/Route201/scripts.pory"
	walk_up
# 147 "data/maps/Route201/scripts.pory"
	walk_right
# 147 "data/maps/Route201/scripts.pory"
	walk_right
# 148 "data/maps/Route201/scripts.pory"
	walk_up
# 149 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 151 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMoveToTallGrass_Movement_5:
# 152 "data/maps/Route201/scripts.pory"
	walk_up
# 153 "data/maps/Route201/scripts.pory"
	walk_right
# 153 "data/maps/Route201/scripts.pory"
	walk_right
# 154 "data/maps/Route201/scripts.pory"
	walk_up
# 154 "data/maps/Route201/scripts.pory"
	walk_up
# 155 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 159 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMoveToTallGrass_Movement_6:
# 160 "data/maps/Route201/scripts.pory"
	walk_up
# 160 "data/maps/Route201/scripts.pory"
	walk_up
# 161 "data/maps/Route201/scripts.pory"
	walk_right
# 162 "data/maps/Route201/scripts.pory"
	walk_up
# 163 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 165 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMoveToTallGrass_Movement_7:
# 166 "data/maps/Route201/scripts.pory"
	walk_up
# 167 "data/maps/Route201/scripts.pory"
	walk_right
# 168 "data/maps/Route201/scripts.pory"
	walk_up
# 168 "data/maps/Route201/scripts.pory"
	walk_up
# 169 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

Route201_Text_NPC1::
# 228 "data/maps/Route201/scripts.pory"
	.string "Wild Pokemon lurk in tall grass. They can\n"
	.string "come bursting out at any time.\p"
	.string "So, if you're wanting to battle wild\n"
	.string "Pokemon, just walk in tall grass.\p"
	.string "If you want to avoid wild Pokemon, then\n"
	.string "stay out of the tall grass.$"

Route201_Text_NPC2::
# 232 "data/maps/Route201/scripts.pory"
	.string "If your Pokemon's health--that's its\n"
	.string "HP--is getting low, you should go to a\l"
	.string "Pokemon Center!$"

Route201_Text_PokemartLady::
# 236 "data/maps/Route201/scripts.pory"
	.string "Hi!\n"
	.string "I work at a Pokemon Mart.\p"
	.string "Did you know that a Pokemon's health is\n"
	.string "measured by Hit Points (HP)?\p"
	.string "If a Pokemon runs out of HP, it faints\n"
	.string "and can't battle anymore.\p"
	.string "If a Pokemon's HP gets low, you should\n"
	.string "heal it with a Potion.\p"
	.string "Here, let me give you a Potion as a free\n"
	.string "sample. First one's free!\p"
	.string "It will automatically go in the Items\n"
	.string "Pocket of your bag.$"

Route201_Text_PokemartLady_OutOfSpace::
# 240 "data/maps/Route201/scripts.pory"
	.string "Oops! You don't have enough space in\n"
	.string "your bag!$"

Route201_Text_TrainerTipsSign::
# 244 "data/maps/Route201/scripts.pory"
	.string "Trainer Tips!\p"
	.string "Don't be shy! Talk to anyone and\n"
	.string "everyone you happen to see.\p"
	.string "By talking to people, you will get\n"
	.string "invaluable information and advice.$"

Route201_Text_RouteSignSandgem::
# 248 "data/maps/Route201/scripts.pory"
	.string "Route 201\n"
	.string "{RIGHT_ARROW} Sandgem Town$"

Route201_Text_NPC3::
# 252 "data/maps/Route201/scripts.pory"
	.string "That ledge is one way. Jump down for a\n"
	.string "shortcut to Twinleaf Town!$"

Route201_Text_RouteSignTwinleaf::
# 256 "data/maps/Route201/scripts.pory"
	.string "Route 201\n"
	.string "{DOWN_ARROW} Twinleaf Town$"

Route201_Text_PokemartLady_AlreadyGaveItem::
# 260 "data/maps/Route201/scripts.pory"
	.string "You can find a Pokemon Mart in cities\n"
	.string "and most major towns.$"

Route201_Text_Barry_TooSlow::
# 264 "data/maps/Route201/scripts.pory"
	.string "Too slow!$"

Route201_Text_Barry_LetsGoToRowansLab::
# 268 "data/maps/Route201/scripts.pory"
	.string "Barry: All right!\n"
	.string "Let's get moving to Prof. Rowan's lab.$"

Route201_Text_Barry_DontWorryTallGrass::
# 272 "data/maps/Route201/scripts.pory"
	.string "Barry: ...\n"
	.string "...\p"
	.string "What?\n"
	.string "Don't go into the grass, right?\l"
	.string "No worries! No problem!\p"
	.string "Itdoesn't matter that we don't have\n"
	.string "any Pokemon!\p"
	.string "Trust me on this one.\n"
	.string "I've got an idea!\p"
	.string "Now listen. You know how wild Pokemon\n"
	.string "jump out when you go into tall grass?$"

Route201_Text_Barry_RushTallGrass::
# 276 "data/maps/Route201/scripts.pory"
	.string "So what you do is, you scoot over to the\n"
	.string "next piece of grass before any wild\l"
	.string "Pokemon can appear!\p"
	.string "If we just keep dashing, we can get to\n"
	.string "Sandgem Town without running into wild\l"
	.string "Pokemon!\p"
	.string "OK, stick with me!$"

Route201_Text_Barry_HereGoes::
# 280 "data/maps/Route201/scripts.pory"
	.string "OK, here goes!\p"
	.string "On your marks...$"

Route201_Text_Rowan_HoldIt::
# 284 "data/maps/Route201/scripts.pory"
	.string "HOLD IT!$"
