# 1 "data/maps/TwinleafTown_House1/scripts.pory"

# 2 "data/maps/TwinleafTown_House1/scripts.pory"
TwinleafTown_House1_MapScripts::
# 3 "data/maps/TwinleafTown_House1/scripts.pory"
	.byte 0

TwinleafTown_House1_Man_Text::
# 6 "data/maps/TwinleafTown_House1/scripts.pory"
	lockall
# 7 "data/maps/TwinleafTown_House1/scripts.pory"
	faceplayer
# 8 "data/maps/TwinleafTown_House1/scripts.pory"
	msgbox TwinleafTown_House1_Man_Text_Text_0
# 9 "data/maps/TwinleafTown_House1/scripts.pory"
	msgbox TwinleafTown_House1_Man_Text_Text_1
# 10 "data/maps/TwinleafTown_House1/scripts.pory"
	releaseall
	return


TwinleafTown_House1_Man_Text_Text_0:
# 8 "data/maps/TwinleafTown_House1/scripts.pory"
	.string "I went on an adventure with some\n"
	.string "Pokemon a long time ago.\p"
	.string "$"

TwinleafTown_House1_Man_Text_Text_1:
# 9 "data/maps/TwinleafTown_House1/scripts.pory"
	.string "It was only to Sandgem, the next town\n"
	.string "over, though. Yeah, good times...$"
