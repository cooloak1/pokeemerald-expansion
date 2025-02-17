Route202_MapScripts::
	.byte 0


Route202_EventScript_Tristan::
# 4 "data/maps/Route202/scripts.pory"
	trainerbattle_single TRAINER_TRISTAN_1, Route202_Text_TristanIntro, Route202_Text_TristanDefeat
# 5 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_TristanPostBattle, MSGBOX_AUTOCLOSE
	end


Route202_EventScript_Natalie::
# 9 "data/maps/Route202/scripts.pory"
	trainerbattle_single TRAINER_NATALIE, Route202_Text_NatalieIntro, Route202_Text_NatalieDefeat
# 10 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_NataliePostBattle, MSGBOX_AUTOCLOSE
	end


Route202_EventScript_Logan::
# 14 "data/maps/Route202/scripts.pory"
	trainerbattle_single TRAINER_LOGAN, Route202_Text_LoganIntro, Route202_Text_LoganDefeat
# 15 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_LoganPostBattle, MSGBOX_AUTOCLOSE
	end


Route202_EventScript_Youngster::
# 19 "data/maps/Route202/scripts.pory"
	lock
# 20 "data/maps/Route202/scripts.pory"
	faceplayer
# 21 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_Youngster, MSGBOX_NPC
# 22 "data/maps/Route202/scripts.pory"
	release
	return


Route202_EventScript_RouteSign_Sandgem::
# 25 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_RouteSign_Sandgem_Text_0, MSGBOX_SIGN
	return


Route202_EventScript_RouteSign_Jubilife::
# 28 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_RouteSign_Jubilife_Text_0, MSGBOX_SIGN
	return


Route202_EventScript_TrainerTipsSign::
# 31 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_TrainerTipsSign, MSGBOX_SIGN
	return


Route202_EventScript_RouteSign_Sandgem_Text_0:
# 25 "data/maps/Route202/scripts.pory"
	.string "Route 202\n{DOWN_ARROW} Sandgem Town$"

Route202_EventScript_RouteSign_Jubilife_Text_0:
# 28 "data/maps/Route202/scripts.pory"
	.string "Route 202\n{UP_ARROW} Jubilife City$"

Route202_Text_Youngster::
# 33 "data/maps/Route202/scripts.pory"
	.string "Some Pokemon only appear in the\n"
	.string "morning.\p"
	.string "Some only come out at night.\p"
	.string "I'll keep looking till I've seen them all!$"

Route202_Text_TrainerTipsSign::
# 36 "data/maps/Route202/scripts.pory"
	.string "Trainer Tips!\p"
	.string "All Pokemon that are involved in a\n"
	.string "battle earn Exp. Points!\p"
	.string "The more your Pokemon battle, the\n"
	.string "stronger they will become.$"
