# 1 "data/maps/Route201/scripts.pory"

# 2 "data/maps/Route201/scripts.pory"
Route201_MapScripts::
# 3 "data/maps/Route201/scripts.pory"
	.byte 0

Route201_EventScript_NPC1::
# 6 "data/maps/Route201/scripts.pory"
	lock
# 7 "data/maps/Route201/scripts.pory"
	faceplayer
# 8 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_NPC1, MSGBOX_NPC
# 9 "data/maps/Route201/scripts.pory"
	release
	end


Route201_EventScript_NPC2::
# 14 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_NPC2, MSGBOX_NPC
	end


Route201_EventScript_NPC3::
# 19 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_NPC3, MSGBOX_NPC
	return


Route201_EventScript_PokemartLady::
# 23 "data/maps/Route201/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POTION_ROUTE_201, Route201_EventScript_PokemartLady_2
# 34 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_PokemartLady_AlreadyGaveItem, MSGBOX_NPC
Route201_EventScript_PokemartLady_1:
# 36 "data/maps/Route201/scripts.pory"
	release
	end

Route201_EventScript_PokemartLady_2:
# 24 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_PokemartLady, MSGBOX_NPC
# 25 "data/maps/Route201/scripts.pory"
	giveitem ITEM_POTION
# 26 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route201_EventScript_PokemartLady_5
# 30 "data/maps/Route201/scripts.pory"
	setflag FLAG_RECEIVED_POTION_ROUTE_201
	goto Route201_EventScript_PokemartLady_1

Route201_EventScript_PokemartLady_5:
# 27 "data/maps/Route201/scripts.pory"
	goto Common_EventScript_BagIsFull
	goto Route201_EventScript_PokemartLady_1


Route201_EventScript_RouteSignTwinleaf::
# 41 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_RouteSignTwinleaf, MSGBOX_SIGN
	return


Route201_EventScript_RouteSignSandgem::
# 45 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_RouteSignSandgem, MSGBOX_SIGN
	return


Route201_EventScript_TrainerTipsSign::
# 49 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_TrainerTipsSign, MSGBOX_SIGN
	return


Route201_Text_NPC1::
# 52 "data/maps/Route201/scripts.pory"
	.string "Wild Pokemon lurk in tall grass. They can\n"
	.string "come bursting out at any time.\p"
	.string "So, if you're wanting to battle wild\n"
	.string "Pokemon, just walk in tall grass.\p"
	.string "If you want to avoid wild Pokemon, then\n"
	.string "stay out of the tall grass.$"

Route201_Text_NPC2::
# 56 "data/maps/Route201/scripts.pory"
	.string "If your Pokemon's health--that's its\n"
	.string "HP--is getting low, you should go to a\l"
	.string "Pokemon Center!$"

Route201_Text_PokemartLady::
# 60 "data/maps/Route201/scripts.pory"
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
# 64 "data/maps/Route201/scripts.pory"
	.string "Oops! You don't have enough space in\n"
	.string "your bag!$"

Route201_Text_TrainerTipsSign::
# 68 "data/maps/Route201/scripts.pory"
	.string "Trainer Tips!\p"
	.string "Don't be shy! Talk to anyone and\n"
	.string "everyone you happen to see.\p"
	.string "By talking to people, you will get\n"
	.string "invaluable information and advice.$"

Route201_Text_RouteSignSandgem::
# 72 "data/maps/Route201/scripts.pory"
	.string "Route 201\n"
	.string "{RIGHT_ARROW} Sandgem Town$"

Route201_Text_NPC3::
# 76 "data/maps/Route201/scripts.pory"
	.string "That ledge is one way. Jump down for a\n"
	.string "shortcut to Twinleaf Town!$"

Route201_Text_RouteSignTwinleaf::
# 80 "data/maps/Route201/scripts.pory"
	.string "Route 201\n"
	.string "{DOWN_ARROW} Twinleaf Town$"

Route201_Text_PokemartLady_AlreadyGaveItem::
# 84 "data/maps/Route201/scripts.pory"
	.string "You can find a Pokemon Mart in cities\n"
	.string "and most major towns.$"
