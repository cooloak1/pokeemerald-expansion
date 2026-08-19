SandgemTown_PokemonCenter_MapScripts::
# 3 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SandgemTown_PokemonCenter_MapScript_OnTransition
	.byte 0


SandgemTown_PokemonCenter_MapScript_OnTransition::
# 7 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_SANDGEM_TOWN
	return


SandgemTown_PokemonCenter_EventScript_Nurse::
# 11 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 12 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	waitmessage
# 14 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	waitbuttonpress
# 15 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	release
	end


SandgemTown_PokemonCenter_EventScript_NPC1::
# 20 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	faceplayer
# 21 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	msgbox SandgemTown_PokemonCenter_Text_NPC1, MSGBOX_NPC
# 22 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	release
	end


SandgemTown_PokemonCenter_EventScript_NPC2::
# 27 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	faceplayer
# 28 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	msgbox SandgemTown_PokemonCenter_Text_NPC2, MSGBOX_NPC
# 29 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	release
	end


SandgemTown_PokemonCenter_Text_NPC1::
# 33 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	.string "Talk to that nice lady at the counter\n"
	.string "and hand her your Pokemon.\p"
	.string "She'll heal your Pokemon to perfect\n"
	.string "health in no time at all!$"

SandgemTown_PokemonCenter_Text_NPC2::
# 37 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	.string "Do you see that PC over there?\n"
	.string "If you've got Pokemon with you,\l"
	.string "it's free to use.$"
