# 1 "data/maps/TwinleafTown_House1/scripts.pory"

# 2 "data/maps/TwinleafTown_House1/scripts.pory"
TwinleafTown_House1_MapScripts::
# 3 "data/maps/TwinleafTown_House1/scripts.pory"
	.byte 0

TwinleafTown_House1_Man_Text::
# 6 "data/maps/TwinleafTown_House1/scripts.pory"
	lock
# 7 "data/maps/TwinleafTown_House1/scripts.pory"
	faceplayer
# 8 "data/maps/TwinleafTown_House1/scripts.pory"
	msgbox TwinleafTown_House1_Text_Man_Adventure, MSGBOX_NPC
	return


TwinleafTown_House1_Text_Man_Intro::
# 11 "data/maps/TwinleafTown_House1/scripts.pory"
	.string "You're off to hang with Barry again,\n"
	.string "right? You two sure are tight!$"

TwinleafTown_House1_Text_Man_Adventure::
# 15 "data/maps/TwinleafTown_House1/scripts.pory"
	.string "I went on an adventure with some\n"
	.string "Pokemon a long time ago.\p"
	.string "It was only to Sandgem, the next town\n"
	.string "over, though. Yeah, good times...$"
