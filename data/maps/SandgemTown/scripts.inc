SandgemTown_MapScripts::
# 2 "data/maps/SandgemTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SandgemTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SandgemTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_VISITED_SANDGEM_TOWN
	return


SandgemTown_EventScript_RivalsHouseSign::
# 8 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_RivalsHouseSign, MSGBOX_SIGN
	return


SandgemTown_EventScript_LabSign::
# 11 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_LabSign, MSGBOX_SIGN
	return


SandgemTown_EventScript_PokemonCenterSign::
# 14 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_PokemonCenterSign, MSGBOX_SIGN
	return


SandgemTown_EventScript_MartSign::
# 17 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_MartSign, MSGBOX_SIGN
	return


SandgemTown_EventScript_TownSign::
# 20 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_TownSign, MSGBOX_SIGN
	return


SandgemTown_Text_RivalsHouseSign::
# 23 "data/maps/SandgemTown/scripts.pory"
	.string "{RIVAL}'s House$"

SandgemTown_Text_LabSign::
# 27 "data/maps/SandgemTown/scripts.pory"
	.string "Pokemon Research Lab$"

SandgemTown_Text_PokemonCenterSign::
# 31 "data/maps/SandgemTown/scripts.pory"
	.string "Heal your Pokemon!\n"
	.string "Pokemon Center$"

SandgemTown_Text_MartSign::
# 35 "data/maps/SandgemTown/scripts.pory"
	.string "All Your Item Needs Fulfilled!\n"
	.string "Pokemon Mart$"

SandgemTown_Text_TownSign::
# 39 "data/maps/SandgemTown/scripts.pory"
	.string "Sandgem Town\n"
	.string "Town of Sand!$"
