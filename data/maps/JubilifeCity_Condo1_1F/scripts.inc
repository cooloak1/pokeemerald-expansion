JubilifeCity_Condo1_1F_MapScripts::
	.byte 0


JubilifeCity_Condo1_1F_EventScript_TalkToEveryone::
# 4 "data/maps/JubilifeCity_Condo1_1F/scripts.pory"
	msgbox JubilifeCity_Condo1_1F_Text_TalkToEveryone, MSGBOX_NPC
	end


JubilifeCity_Condo1_1F_EventScript_PokemonAreMysterious::
# 9 "data/maps/JubilifeCity_Condo1_1F/scripts.pory"
	msgbox JubilifeCity_Condo1_1F_Text_PokemonAreMysterious, MSGBOX_NPC
	end


JubilifeCity_Condo1_1F_EventScript_Pachirisu::
# 14 "data/maps/JubilifeCity_Condo1_1F/scripts.pory"
	lock
# 15 "data/maps/JubilifeCity_Condo1_1F/scripts.pory"
	faceplayer
# 16 "data/maps/JubilifeCity_Condo1_1F/scripts.pory"
	playmoncry SPECIES_PACHIRISU, CRY_MODE_NORMAL
# 17 "data/maps/JubilifeCity_Condo1_1F/scripts.pory"
	msgbox JubilifeCity_Condo1_1F_Text_Pachirisu, MSGBOX_DEFAULT
# 18 "data/maps/JubilifeCity_Condo1_1F/scripts.pory"
	waitmoncry
# 19 "data/maps/JubilifeCity_Condo1_1F/scripts.pory"
	release
	end


JubilifeCity_Condo1_1F_Text_TalkToEveryone::
# 23 "data/maps/JubilifeCity_Condo1_1F/scripts.pory"
	.string "Hello there, Trainer!\p"
	.string "If you get stumped and don't know what\n"
	.string "to do...\p"
	.string "Talk to people!\n"
	.string "Talk to everyone you see!\p"
	.string "Go places!\n"
	.string "Go wherever you can!\p"
	.string "You'll find many new places by doing\n"
	.string "just that.$"

JubilifeCity_Condo1_1F_Text_PokemonAreMysterious::
# 27 "data/maps/JubilifeCity_Condo1_1F/scripts.pory"
	.string "Pokemon are wonderful, deeply\n"
	.string "mysterious creatures.\p"
	.string "But to Trainers, the key thing is to do\n"
	.string "battle with their Pokemon.\p"
	.string "That's what it boils down to.$"

JubilifeCity_Condo1_1F_Text_Pachirisu::
# 31 "data/maps/JubilifeCity_Condo1_1F/scripts.pory"
	.string "PACHIRISU: Kukkuuh!$"
