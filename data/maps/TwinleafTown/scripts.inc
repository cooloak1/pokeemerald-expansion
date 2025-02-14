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


text1a::
# 11 "data/maps/TwinleafTown/scripts.pory"
	.string "Technology just blows me away!\p"
	.string "I mean, now you can play with people\n"
	.string "around the world...wirelessly!$"

text2a::
# 15 "data/maps/TwinleafTown/scripts.pory"
	.string "It's true that wild Pokemon do attack\n"
	.string "people sometimes...\p"
	.string "But, Pokemon also open their hearts to\n"
	.string "you, so you can become friends.$"

text3a::
# 19 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "Barry was looking for you.\p"
	.string "I think he's home now.\n"
	.string "Why don't you go check it out?$"

TwinleafTown_Text_TownSign::
# 23 "data/maps/TwinleafTown/scripts.pory"
	.string "Twinleaf Town\n"
	.string "Fresh and Free!$"
