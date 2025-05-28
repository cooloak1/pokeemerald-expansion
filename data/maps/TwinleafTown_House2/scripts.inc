TwinleafTown_House2_MapScripts::
	.byte 0


TwinleafTown_House2_EventScript_Woman::
# 4 "data/maps/TwinleafTown_House2/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, TwinleafTown_House2_EventScript_Woman_1
# 8 "data/maps/TwinleafTown_House2/scripts.pory"
	msgbox TwinleafTown_House2_Text_Woman_ProfRowan, MSGBOX_NPC
	return

TwinleafTown_House2_EventScript_Woman_1:
# 5 "data/maps/TwinleafTown_House2/scripts.pory"
	msgbox TwinleafTown_House2_Text_Woman_Pokedex, MSGBOX_NPC
	return


TwinleafTown_House2_EventScript_Girl::
# 13 "data/maps/TwinleafTown_House2/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, TwinleafTown_House2_EventScript_Girl_1
# 17 "data/maps/TwinleafTown_House2/scripts.pory"
	msgbox TwinleafTown_House2_Text_Girl_WantCutePokemon, MSGBOX_NPC
	return

TwinleafTown_House2_EventScript_Girl_1:
# 14 "data/maps/TwinleafTown_House2/scripts.pory"
	msgbox TwinleafTown_House2_Text_Girl_FriendsWithPokemon, MSGBOX_NPC
	return


TwinleafTown_House2_Text_Woman_ProfRowan::
# 20 "data/maps/TwinleafTown_House2/scripts.pory"
	.string "Did you hear?\p"
	.string "The Pokemon Professor returned to the\n"
	.string "next town over.\p"
	.string "They say he was gone for four long\n"
	.string "years.\p"
	.string "I wonder if he found some amazing\n"
	.string "Pokemon while he was gone?$"

TwinleafTown_House2_Text_Woman_Pokedex::
# 24 "data/maps/TwinleafTown_House2/scripts.pory"
	.string "Well! Professor Rowan gave you a\n"
	.string "Pokedex, did he?$"

TwinleafTown_House2_Text_Girl_WantCutePokemon::
# 27 "data/maps/TwinleafTown_House2/scripts.pory"
	.string "Listen, listen, {PLAYER}.\p"
	.string "I want a cute Pokemon!$"

TwinleafTown_House2_Text_Girl_FriendsWithPokemon::
# 31 "data/maps/TwinleafTown_House2/scripts.pory"
	.string "Listen, listen, {PLAYER}.\p"
	.string "Do you think I can be friends with\n"
	.string "Pokemon like you are?$"
