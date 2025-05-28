SandgemTown_Mart_MapScripts::
	.byte 0


SandgemTown_Mart_Shop::
# 4 "data/maps/SandgemTown_Mart/scripts.pory"
	lock
# 5 "data/maps/SandgemTown_Mart/scripts.pory"
	message SandgemTown_Mart_Shop_Text_0
# 6 "data/maps/SandgemTown_Mart/scripts.pory"
	waitmessage
# 7 "data/maps/SandgemTown_Mart/scripts.pory"
	pokemart 0
# 8 "data/maps/SandgemTown_Mart/scripts.pory"
	msgbox SandgemTown_Mart_Shop_Text_1
# 9 "data/maps/SandgemTown_Mart/scripts.pory"
	release
	return


SandgemTown_Mart_NPC_PokeBall::
# 13 "data/maps/SandgemTown_Mart/scripts.pory"
	msgbox SandgemTown_Mart_Text_PokeBall, MSGBOX_NPC
	return


SandgemTown_Mart_NPC_Potion::
# 17 "data/maps/SandgemTown_Mart/scripts.pory"
	msgbox SandgemTown_Mart_Text_Potion, MSGBOX_NPC
	return


SandgemTown_Mart_Shop_Text_0:
# 5 "data/maps/SandgemTown_Mart/scripts.pory"
	.string "Welcome!\n"
	.string "What do you need?$"

SandgemTown_Mart_Shop_Text_1:
# 8 "data/maps/SandgemTown_Mart/scripts.pory"
	.string "Please come again soon!$"

SandgemTown_Mart_Text_PokeBall::
# 20 "data/maps/SandgemTown_Mart/scripts.pory"
	.string "If you come across a Pokemon you've\n"
	.string "just gotta have, toss a Poke Ball!\p"
	.string "Never leave home without one!$"

SandgemTown_Mart_Text_Potion::
# 24 "data/maps/SandgemTown_Mart/scripts.pory"
	.string "If a Pokemon loses all its HP,\n"
	.string "it can't battle anymore.\p"
	.string "I'm buying lots of Potions to avoid\n"
	.string "having that happen!$"
