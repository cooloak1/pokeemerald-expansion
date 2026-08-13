TwinleafTown_BarrysHouse_1F_MapScripts::
	.byte 0


TwinleafTown_BarrysHouse_1F_EventScript_RivalsMom::
# 6 "data/maps/TwinleafTown_BarrysHouse_1F/scripts.pory"
	switch VAR_BARRY_STATE
# 7 "data/maps/TwinleafTown_BarrysHouse_1F/scripts.pory"
	case 1, TwinleafTown_BarrysHouse_1F_EventScript_RivalsMom_2
# 9 "data/maps/TwinleafTown_BarrysHouse_1F/scripts.pory"
	case 2, TwinleafTown_BarrysHouse_1F_EventScript_RivalsMom_3
# 10 "data/maps/TwinleafTown_BarrysHouse_1F/scripts.pory"
	case 3, TwinleafTown_BarrysHouse_1F_EventScript_RivalsMom_3
# 17 "data/maps/TwinleafTown_BarrysHouse_1F/scripts.pory"
	case 4, TwinleafTown_BarrysHouse_1F_EventScript_RivalsMom_4
# 20 "data/maps/TwinleafTown_BarrysHouse_1F/scripts.pory"
	msgbox TwinleafTown_BarrysHouse_1F_Text_GreatestTrainer, MSGBOX_NPC
	return

TwinleafTown_BarrysHouse_1F_EventScript_RivalsMom_2:
# 8 "data/maps/TwinleafTown_BarrysHouse_1F/scripts.pory"
	msgbox TwinleafTown_BarrysHouse_1F_Text_LookingForRival, MSGBOX_NPC
	return

TwinleafTown_BarrysHouse_1F_EventScript_RivalsMom_3:
# 11 "data/maps/TwinleafTown_BarrysHouse_1F/scripts.pory"
	goto_if_set FLAG_TALKED_TO_RIVALS_MOM, TwinleafTown_BarrysHouse_1F_EventScript_RivalsMom_6
# 14 "data/maps/TwinleafTown_BarrysHouse_1F/scripts.pory"
	msgbox TwinleafTown_BarrysHouse_1F_Text_RocketedOff, MSGBOX_NPC
# 15 "data/maps/TwinleafTown_BarrysHouse_1F/scripts.pory"
	setflag FLAG_TALKED_TO_RIVALS_MOM
	return

TwinleafTown_BarrysHouse_1F_EventScript_RivalsMom_4:
# 18 "data/maps/TwinleafTown_BarrysHouse_1F/scripts.pory"
	msgbox TwinleafTown_BarrysHouse_1F_Text_FriendsWithPokemon, MSGBOX_NPC
	return

TwinleafTown_BarrysHouse_1F_EventScript_RivalsMom_6:
# 12 "data/maps/TwinleafTown_BarrysHouse_1F/scripts.pory"
	msgbox TwinleafTown_BarrysHouse_1F_Text_BarryRoute201, MSGBOX_NPC
	return


TwinleafTown_BarrysHouse_1F_Text_LookingForRival::
# 25 "data/maps/TwinleafTown_BarrysHouse_1F/scripts.pory"
	.string "Barry’s mom: Oh, hi, {PLAYER}.\p"
	.string "Are you looking for Barry?\p"
	.string "He was gone for a second, but then he\n"
	.string "came running right back home.\p"
	.string "He just can’t sit still, that boy.\n"
	.string "I wonder who he takes after?$"

TwinleafTown_BarrysHouse_1F_Text_RocketedOff::
# 28 "data/maps/TwinleafTown_BarrysHouse_1F/scripts.pory"
	.string "Barry's mom: That kid rocketed off\n"
	.string "again like usual.\p"
	.string "I’d guess he would be out on Route 201\n"
	.string "by now?\p"
	.string "He just can’t sit still, that boy.\n"
	.string "I wonder who he takes after?$"

TwinleafTown_BarrysHouse_1F_Text_BarryRoute201::
# 32 "data/maps/TwinleafTown_BarrysHouse_1F/scripts.pory"
	.string "Barry’s mom: My Barry should be out on\n"
	.string "Route 201 by now.\p"
	.string "He just can’t sit still, that boy.\n"
	.string "I wonder who he takes after?$"

TwinleafTown_BarrysHouse_1F_Text_FriendsWithPokemon::
# 36 "data/maps/TwinleafTown_BarrysHouse_1F/scripts.pory"
	.string "Barry's mom: Oh, you’ve become friends\n"
	.string "with a Pokémon, too.$"

TwinleafTown_BarrysHouse_1F_Text_GreatestTrainer::
# 40 "data/maps/TwinleafTown_BarrysHouse_1F/scripts.pory"
	.string "Barry's Mom: My Barry took off like a\n"
	.string "rocket as usual.\p"
	.string "He was shouting something about\n"
	.string "becoming the greatest Trainer ever...\p"
	.string "He just can’t sit still, that boy.\n"
	.string "I wonder who he takes after?$"
