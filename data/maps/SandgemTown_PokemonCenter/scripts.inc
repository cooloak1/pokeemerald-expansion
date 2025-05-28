SandgemTown_PokemonCenter_MapScripts::
	.byte 0


SandgemTown_PokemonCenter_EventScript_Nurse::
# 5 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 6 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 7 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	waitmessage
# 8 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	waitbuttonpress
# 9 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	release
	end


SandgemTown_PokemonCenter_EventScript_NPC1::
# 14 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	faceplayer
# 15 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	msgbox SandgemTown_PokemonCenter_Text_NPC1, MSGBOX_NPC
# 16 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	release
	end


SandgemTown_PokemonCenter_EventScript_NPC2::
# 21 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	faceplayer
# 22 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	msgbox SandgemTown_PokemonCenter_Text_NPC2, MSGBOX_NPC
# 23 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	release
	end


SandgemTown_PokemonCenter_Text_NPC1::
# 27 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	.string "Talk to that nice lady at the counter\n"
	.string "and hand her your Pokemon.\p"
	.string "She'll heal your Pokemon to perfect\n"
	.string "health in no time at all!$"

SandgemTown_PokemonCenter_Text_NPC2::
# 31 "data/maps/SandgemTown_PokemonCenter/scripts.pory"
	.string "Do you see that PC over there?\n"
	.string "If you've got Pokemon with you,\l"
	.string "it's free to use.$"
