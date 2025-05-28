Route201_MapScripts::
# 7 "data/maps/Route201/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route201_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route201_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/Route201/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


Route201_EventScript_BarryTrigger_1::
# 13 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_4, 0
# 14 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_ChooseBarryDialogue
	return


Route201_EventScript_BarryTrigger_2::
# 18 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_4, 1
# 19 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_ChooseBarryDialogue
	return


Route201_EventScript_BarryTrigger_3::
# 23 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_4, 2
# 24 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_ChooseBarryDialogue
	return


Route201_EventScript_BarryTrigger_4::
# 28 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_4, 3
# 29 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_ChooseBarryDialogue
	return


Route201_EventScript_ChooseBarryDialogue::
# 33 "data/maps/Route201/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Route201_EventScript_ChooseBarryDialogue_1
# 37 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BarryGoingToSandgem
	return

Route201_EventScript_ChooseBarryDialogue_1:
# 34 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BarryGoingToLakeVerity
	return


Route201_EventScript_BarryGoingToLakeVerity::
	return


Route201_EventScript_BarryGoingToSandgem::
# 46 "data/maps/Route201/scripts.pory"
	lock
# 47 "data/maps/Route201/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 48 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route201/scripts.pory"
	delay 48
# 50 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_TooSlow
# 51 "data/maps/Route201/scripts.pory"
	closemessage
# 52 "data/maps/Route201/scripts.pory"
	call Route201_EventScript_BarryMoveToPlayer
# 53 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_LetsGoToRowansLab
# 54 "data/maps/Route201/scripts.pory"
	closemessage
# 55 "data/maps/Route201/scripts.pory"
	call Route201_EventScript_BarryMovePlayerToTallGrass
# 56 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_DontWorryTallGrass
# 57 "data/maps/Route201/scripts.pory"
	closemessage
# 58 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_0
# 62 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryGoingToSandgem_Movement_1
# 63 "data/maps/Route201/scripts.pory"
	waitmovement 5
# 64 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_RushTallGrass
# 65 "data/maps/Route201/scripts.pory"
	closemessage
# 66 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryGoingToSandgem_Movement_2
# 67 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_3
# 71 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_HereGoes
# 73 "data/maps/Route201/scripts.pory"
	closemessage
# 74 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryGoingToSandgem_Movement_4
# 79 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_5
# 83 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 84 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_HoldIt
# 85 "data/maps/Route201/scripts.pory"
	closemessage
# 86 "data/maps/Route201/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 87 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 88 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 89 "data/maps/Route201/scripts.pory"
	delay 48
# 90 "data/maps/Route201/scripts.pory"
	clearflag FLAG_HIDE_PROF_ROWAN_ROUTE_201
# 91 "data/maps/Route201/scripts.pory"
	addobject 6
# 92 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryGoingToSandgem_Movement_2
# 93 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_2
# 94 "data/maps/Route201/scripts.pory"
	applymovement 6, Route201_EventScript_BarryGoingToSandgem_Movement_6
# 95 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_YouDontHavePokemon
# 97 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_Silence
# 98 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_Silence
# 99 "data/maps/Route201/scripts.pory"
	closemessage
# 100 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_7
# 101 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 102 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_ThisIsProfRowan
# 103 "data/maps/Route201/scripts.pory"
	closemessage
# 104 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_2
# 105 "data/maps/Route201/scripts.pory"
	applymovement 6, Route201_EventScript_BarryGoingToSandgem_Movement_8
# 108 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 109 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_TheyWantedPokemonHmm
# 110 "data/maps/Route201/scripts.pory"
	closemessage
# 111 "data/maps/Route201/scripts.pory"
	delay 48
# 112 "data/maps/Route201/scripts.pory"
	applymovement 6, Route201_EventScript_BarryGoingToSandgem_Movement_9
# 115 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 116 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_YouTwoLovePokemon, MSGBOX_YESNO
# 117 "data/maps/Route201/scripts.pory"
	closemessage
Route201_EventScript_BarryGoingToSandgem_2:
# 118 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route201_EventScript_BarryGoingToSandgem_3
# 128 "data/maps/Route201/scripts.pory"
	closemessage
# 129 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_2
# 130 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 131 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_ILovePokemonToo
# 132 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_IWillAskAgain
# 133 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_2
# 134 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 135 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_AskAHundredTimes
# 136 "data/maps/Route201/scripts.pory"
	closemessage
# 137 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_7
# 138 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryGoingToSandgem_Movement_10
# 142 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 143 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_RightPlayer, MSGBOX_YESNO
Route201_EventScript_BarryGoingToSandgem_6:
# 144 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route201_EventScript_BarryGoingToSandgem_7
# 156 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_ItWorriesMe
# 157 "data/maps/Route201/scripts.pory"
	closemessage
# 158 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryGoingToSandgem_Movement_2
# 159 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_2
# 160 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 161 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_GivePlayerPokemonInstead
# 162 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_VeryWellThen
# 163 "data/maps/Route201/scripts.pory"
	closemessage
# 164 "data/maps/Route201/scripts.pory"
	applymovement 6, Route201_EventScript_BarryGoingToSandgem_Movement_11
# 169 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 170 "data/maps/Route201/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_ROUTE_201
# 171 "data/maps/Route201/scripts.pory"
	addobject 8
# 172 "data/maps/Route201/scripts.pory"
	applymovement 8, Route201_EventScript_BarryGoingToSandgem_Movement_12
# 176 "data/maps/Route201/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route201_EventScript_BarryGoingToSandgem_10
# 180 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Lucas_ForgotBriefcase
Route201_EventScript_BarryGoingToSandgem_9:
# 182 "data/maps/Route201/scripts.pory"
	closemessage
# 183 "data/maps/Route201/scripts.pory"
	applymovement 6, Route201_EventScript_BarryGoingToSandgem_Movement_2
# 184 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 185 "data/maps/Route201/scripts.pory"
	clearflag FLAG_HIDE_ROWANS_BAG_ROUTE_201
# 186 "data/maps/Route201/scripts.pory"
	addobject 7
	checkplayergender
# 0 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route201_EventScript_BarryGoingToSandgem_14
# 190 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Lucas_IsSomethingWrong
Route201_EventScript_BarryGoingToSandgem_13:
# 192 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_ThereItIs_EntrustPokemon
# 193 "data/maps/Route201/scripts.pory"
	closemessage
# 194 "data/maps/Route201/scripts.pory"
	applymovement 8, Route201_EventScript_BarryGoingToSandgem_Movement_13
# 195 "data/maps/Route201/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route201_EventScript_BarryGoingToSandgem_18
# 199 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Lucas_AreYouSureThosePokemon
Route201_EventScript_BarryGoingToSandgem_17:
# 201 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_WeExistSideBySide
# 202 "data/maps/Route201/scripts.pory"
	closemessage
# 203 "data/maps/Route201/scripts.pory"
	applymovement 6, Route201_EventScript_BarryGoingToSandgem_Movement_13
# 204 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 205 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_GoOnChooseAPokemon
# 206 "data/maps/Route201/scripts.pory"
	closemessage
# 207 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_2
# 208 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 209 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_ICantBelieveIt
# 210 "data/maps/Route201/scripts.pory"
	closemessage
# 211 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_7
# 212 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 213 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_YouShouldPickFirst
# 214 "data/maps/Route201/scripts.pory"
	closemessage
# 215 "data/maps/Route201/scripts.pory"
	release
	end

Route201_EventScript_BarryGoingToSandgem_3:
# 119 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_7
# 120 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 121 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_WhoaHoldUp
# 122 "data/maps/Route201/scripts.pory"
	closemessage
# 123 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_2
# 124 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 125 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_IWillAskAgain, MSGBOX_YESNO
# 126 "data/maps/Route201/scripts.pory"
	closemessage
	goto Route201_EventScript_BarryGoingToSandgem_2

Route201_EventScript_BarryGoingToSandgem_7:
# 146 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_ThatJokesGettingOld
# 147 "data/maps/Route201/scripts.pory"
	closemessage
# 148 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_2
# 149 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 150 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_AskAHundredTimes
# 151 "data/maps/Route201/scripts.pory"
	closemessage
# 152 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_7
# 153 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 154 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_RightPlayer, MSGBOX_YESNO
	goto Route201_EventScript_BarryGoingToSandgem_6

Route201_EventScript_BarryGoingToSandgem_10:
# 178 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Dawn_ForgotBriefcase
	goto Route201_EventScript_BarryGoingToSandgem_9

Route201_EventScript_BarryGoingToSandgem_14:
# 188 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Dawn_IsSomethingWrong
	goto Route201_EventScript_BarryGoingToSandgem_13

Route201_EventScript_BarryGoingToSandgem_18:
# 197 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Dawn_AreYouSureThosePokemon
	goto Route201_EventScript_BarryGoingToSandgem_17


Route201_EventScript_BarryWaiting::
# 220 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_TalkedTo_YouShouldPickFirst, MSGBOX_NPC
	return


Route201_EventScript_ProfRowanWaiting::
# 224 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_TalkedTo_GoOnChooseAPokemon, MSGBOX_NPC
	return


Route201_EventScript_ProfRowansBriefcase::
# 228 "data/maps/Route201/scripts.pory"
	lock
# 229 "data/maps/Route201/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 230 "data/maps/Route201/scripts.pory"
	fadescreen FADE_TO_BLACK
# 231 "data/maps/Route201/scripts.pory"
	removeobject 7
# 232 "data/maps/Route201/scripts.pory"
	special ChooseStarter
# 233 "data/maps/Route201/scripts.pory"
	waitstate
# 234 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryGoingToSandgem_Movement_1
# 235 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_ProfRowansBriefcase_Movement_0
# 236 "data/maps/Route201/scripts.pory"
	applymovement 6, Route201_EventScript_BarryGoingToSandgem_Movement_7
# 237 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 238 "data/maps/Route201/scripts.pory"
	switch VAR_STARTER_MON
# 239 "data/maps/Route201/scripts.pory"
	case 0, Route201_EventScript_ProfRowansBriefcase_3
# 241 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_ProfRowansBriefcase_4
# 243 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_ProfRowansBriefcase_5
Route201_EventScript_ProfRowansBriefcase_1:
# 246 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_IChooseYou
# 247 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_ChosenGoodPokemon
# 248 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_ProfRowansBriefcase_Movement_1
# 254 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_ProfRowansBriefcase_Movement_2
# 258 "data/maps/Route201/scripts.pory"
	applymovement 6, Route201_EventScript_ProfRowansBriefcase_Movement_3
# 262 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 263 "data/maps/Route201/scripts.pory"
	removeobject 6
# 264 "data/maps/Route201/scripts.pory"
	setflag FLAG_HIDE_PROF_ROWAN_ROUTE_201
	checkplayergender
# 0 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route201_EventScript_ProfRowansBriefcase_7
# 268 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Lucas_WaitForMe
Route201_EventScript_ProfRowansBriefcase_6:
# 270 "data/maps/Route201/scripts.pory"
	closemessage
# 271 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryGoingToSandgem_Movement_1
# 272 "data/maps/Route201/scripts.pory"
	applymovement 8, Route201_EventScript_ProfRowansBriefcase_Movement_4
# 273 "data/maps/Route201/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route201_EventScript_ProfRowansBriefcase_11
# 277 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Lucas_Sorry
Route201_EventScript_ProfRowansBriefcase_10:
# 279 "data/maps/Route201/scripts.pory"
	closemessage
# 280 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_ProfRowansBriefcase_Movement_5
# 284 "data/maps/Route201/scripts.pory"
	applymovement 8, Route201_EventScript_ProfRowansBriefcase_Movement_6
# 287 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 288 "data/maps/Route201/scripts.pory"
	removeobject 8
# 289 "data/maps/Route201/scripts.pory"
	setflag FLAG_HIDE_RIVAL_ROUTE_201
# 290 "data/maps/Route201/scripts.pory"
	delay 64
# 291 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_ProfRowansBriefcase_Movement_7
# 295 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_ProfRowansBriefcase_Movement_8
# 302 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 303 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_WeBothHavePokemon, MSGBOX_YESNO
Route201_EventScript_ProfRowansBriefcase_15:
# 304 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route201_EventScript_ProfRowansBriefcase_16
# 308 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_Challenge
# 309 "data/maps/Route201/scripts.pory"
	closemessage
# 310 "data/maps/Route201/scripts.pory"
	switch VAR_STARTER_MON
# 311 "data/maps/Route201/scripts.pory"
	case 0, Route201_EventScript_ProfRowansBriefcase_20
Route201_EventScript_ProfRowansBriefcase_18:
# 314 "data/maps/Route201/scripts.pory"
	release
	end

Route201_EventScript_ProfRowansBriefcase_3:
# 240 "data/maps/Route201/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIMCHAR
	goto Route201_EventScript_ProfRowansBriefcase_1

Route201_EventScript_ProfRowansBriefcase_4:
# 242 "data/maps/Route201/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PIPLUP
	goto Route201_EventScript_ProfRowansBriefcase_1

Route201_EventScript_ProfRowansBriefcase_5:
# 244 "data/maps/Route201/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TURTWIG
	goto Route201_EventScript_ProfRowansBriefcase_1

Route201_EventScript_ProfRowansBriefcase_7:
# 266 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Dawn_WaitForMe
	goto Route201_EventScript_ProfRowansBriefcase_6

Route201_EventScript_ProfRowansBriefcase_11:
# 275 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Dawn_Sorry
	goto Route201_EventScript_ProfRowansBriefcase_10

Route201_EventScript_ProfRowansBriefcase_16:
# 305 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_DontBeThatWay
# 306 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_WeBothHavePokemon, MSGBOX_YESNO
	goto Route201_EventScript_ProfRowansBriefcase_15

Route201_EventScript_ProfRowansBriefcase_20:
# 312 "data/maps/Route201/scripts.pory"
	trainerbattle_no_intro TRAINER_BARRY_ROUTE_201_TREECKO, Route201_Text_Barry_LetsGoHome
	goto Route201_EventScript_ProfRowansBriefcase_18


Route201_EventScript_BarryMoveToPlayer::
# 319 "data/maps/Route201/scripts.pory"
	switch VAR_TEMP_4
# 320 "data/maps/Route201/scripts.pory"
	case 0, Route201_EventScript_BarryMoveToPlayer_3
# 327 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_BarryMoveToPlayer_4
# 334 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_BarryMoveToPlayer_5
# 339 "data/maps/Route201/scripts.pory"
	case 3, Route201_EventScript_BarryMoveToPlayer_6
Route201_EventScript_BarryMoveToPlayer_1:
	return

Route201_EventScript_BarryMoveToPlayer_3:
# 321 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryMoveToPlayer_Movement_0
# 326 "data/maps/Route201/scripts.pory"
	waitmovement 0
	goto Route201_EventScript_BarryMoveToPlayer_1

Route201_EventScript_BarryMoveToPlayer_4:
# 328 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryMoveToPlayer_Movement_1
# 333 "data/maps/Route201/scripts.pory"
	waitmovement 0
	goto Route201_EventScript_BarryMoveToPlayer_1

Route201_EventScript_BarryMoveToPlayer_5:
# 335 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryMoveToPlayer_Movement_2
# 338 "data/maps/Route201/scripts.pory"
	waitmovement 0
	goto Route201_EventScript_BarryMoveToPlayer_1

Route201_EventScript_BarryMoveToPlayer_6:
# 340 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryMoveToPlayer_Movement_3
# 346 "data/maps/Route201/scripts.pory"
	waitmovement 0
	goto Route201_EventScript_BarryMoveToPlayer_1


Route201_EventScript_BarryMovePlayerToTallGrass::
# 352 "data/maps/Route201/scripts.pory"
	switch VAR_TEMP_4
# 353 "data/maps/Route201/scripts.pory"
	case 0, Route201_EventScript_BarryMovePlayerToTallGrass_3
# 367 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_BarryMovePlayerToTallGrass_4
# 381 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_BarryMovePlayerToTallGrass_5
# 395 "data/maps/Route201/scripts.pory"
	case 3, Route201_EventScript_BarryMovePlayerToTallGrass_6
Route201_EventScript_BarryMovePlayerToTallGrass_1:
	return

Route201_EventScript_BarryMovePlayerToTallGrass_3:
# 354 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryMovePlayerToTallGrass_Movement_0
# 360 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryMovePlayerToTallGrass_Movement_1
# 366 "data/maps/Route201/scripts.pory"
	waitmovement 0
	goto Route201_EventScript_BarryMovePlayerToTallGrass_1

Route201_EventScript_BarryMovePlayerToTallGrass_4:
# 368 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryMovePlayerToTallGrass_Movement_2
# 374 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryMovePlayerToTallGrass_Movement_3
# 380 "data/maps/Route201/scripts.pory"
	waitmovement 0
	goto Route201_EventScript_BarryMovePlayerToTallGrass_1

Route201_EventScript_BarryMovePlayerToTallGrass_5:
# 382 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryMovePlayerToTallGrass_Movement_4
# 388 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryMovePlayerToTallGrass_Movement_5
# 394 "data/maps/Route201/scripts.pory"
	waitmovement 0
	goto Route201_EventScript_BarryMovePlayerToTallGrass_1

Route201_EventScript_BarryMovePlayerToTallGrass_6:
# 396 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryMovePlayerToTallGrass_Movement_6
# 402 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryMovePlayerToTallGrass_Movement_7
# 408 "data/maps/Route201/scripts.pory"
	waitmovement 0
	goto Route201_EventScript_BarryMovePlayerToTallGrass_1


Route201_EventScript_NPC1::
# 414 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_NPC1, MSGBOX_NPC
	end


Route201_EventScript_NPC2::
# 419 "data/maps/Route201/scripts.pory"
	faceplayer
# 420 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_NPC2, MSGBOX_NPC
	end


Route201_EventScript_NPC3::
# 425 "data/maps/Route201/scripts.pory"
	faceplayer
# 426 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_NPC3, MSGBOX_NPC
	end


Route201_EventScript_PokemartLady::
# 431 "data/maps/Route201/scripts.pory"
	lock
# 432 "data/maps/Route201/scripts.pory"
	faceplayer
# 433 "data/maps/Route201/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POTION_ROUTE_201, Route201_EventScript_PokemartLady_2
# 444 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_PokemartLady_AlreadyGaveItem, MSGBOX_NPC
Route201_EventScript_PokemartLady_1:
# 446 "data/maps/Route201/scripts.pory"
	release
	end

Route201_EventScript_PokemartLady_2:
# 434 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_PokemartLady, MSGBOX_NPC
# 435 "data/maps/Route201/scripts.pory"
	giveitem ITEM_POTION
# 436 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route201_EventScript_PokemartLady_5
# 440 "data/maps/Route201/scripts.pory"
	setflag FLAG_RECEIVED_POTION_ROUTE_201
	goto Route201_EventScript_PokemartLady_1

Route201_EventScript_PokemartLady_5:
# 437 "data/maps/Route201/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route201_EventScript_PokemartLady_1


Route201_EventScript_RouteSignTwinleaf::
# 451 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_RouteSignTwinleaf, MSGBOX_SIGN
	return


Route201_EventScript_RouteSignSandgem::
# 455 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_RouteSignSandgem, MSGBOX_SIGN
	return


Route201_EventScript_TrainerTipsSign::
# 459 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_TrainerTipsSign, MSGBOX_SIGN
	return


Route201_EventScript_BriefcaseTrigger_1::
# 463 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_4, 0
# 464 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BriefcasePushback
	return


Route201_EventScript_BriefcaseTrigger_2::
# 468 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_4, 1
# 469 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BriefcasePushback
	return


Route201_EventScript_BriefcasePushback::
# 473 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_7
# 474 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 475 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_OpenTheBriefcase
# 476 "data/maps/Route201/scripts.pory"
	closemessage
# 477 "data/maps/Route201/scripts.pory"
	compare VAR_TEMP_4, 1
	goto_if_eq Route201_EventScript_BriefcasePushback_2
# 481 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BriefcasePushback_Movement_1
Route201_EventScript_BriefcasePushback_1:
# 483 "data/maps/Route201/scripts.pory"
	waitmovement 0
	return

Route201_EventScript_BriefcasePushback_2:
# 478 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BriefcasePushback_Movement_0
	goto Route201_EventScript_BriefcasePushback_1


# 58 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_0:
# 59 "data/maps/Route201/scripts.pory"
	walk_left
# 60 "data/maps/Route201/scripts.pory"
	walk_in_place_down
	step_end

# 62 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_1:
# 62 "data/maps/Route201/scripts.pory"
	walk_in_place_up
	step_end

# 66 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_2:
# 66 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 67 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_3:
# 68 "data/maps/Route201/scripts.pory"
	walk_left
# 68 "data/maps/Route201/scripts.pory"
	walk_left
# 68 "data/maps/Route201/scripts.pory"
	walk_left
# 69 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 74 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_4:
# 75 "data/maps/Route201/scripts.pory"
	delay_16
# 76 "data/maps/Route201/scripts.pory"
	delay_8
# 77 "data/maps/Route201/scripts.pory"
	walk_in_place_up
	step_end

# 79 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_5:
# 80 "data/maps/Route201/scripts.pory"
	delay_16
# 81 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 81 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 81 "data/maps/Route201/scripts.pory"
	walk_fast_right
	step_end

# 94 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_6:
# 94 "data/maps/Route201/scripts.pory"
	walk_right
# 94 "data/maps/Route201/scripts.pory"
	walk_right
# 94 "data/maps/Route201/scripts.pory"
	walk_right
# 94 "data/maps/Route201/scripts.pory"
	walk_right
# 94 "data/maps/Route201/scripts.pory"
	walk_right
# 94 "data/maps/Route201/scripts.pory"
	walk_right
# 94 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 100 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_7:
# 100 "data/maps/Route201/scripts.pory"
	walk_in_place_down
	step_end

# 105 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_8:
# 106 "data/maps/Route201/scripts.pory"
	walk_left
# 106 "data/maps/Route201/scripts.pory"
	walk_left
# 106 "data/maps/Route201/scripts.pory"
	walk_left
	step_end

# 112 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_9:
# 113 "data/maps/Route201/scripts.pory"
	walk_right
# 113 "data/maps/Route201/scripts.pory"
	walk_right
# 113 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 138 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_10:
# 139 "data/maps/Route201/scripts.pory"
	delay_4
# 140 "data/maps/Route201/scripts.pory"
	walk_in_place_up
	step_end

# 164 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_11:
# 165 "data/maps/Route201/scripts.pory"
	walk_in_place_left
# 166 "data/maps/Route201/scripts.pory"
	delay_16
# 166 "data/maps/Route201/scripts.pory"
	delay_16
# 166 "data/maps/Route201/scripts.pory"
	delay_16
# 167 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 172 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_12:
# 173 "data/maps/Route201/scripts.pory"
	delay_16
# 174 "data/maps/Route201/scripts.pory"
	walk_right
# 174 "data/maps/Route201/scripts.pory"
	walk_right
# 174 "data/maps/Route201/scripts.pory"
	walk_right
# 174 "data/maps/Route201/scripts.pory"
	walk_right
# 174 "data/maps/Route201/scripts.pory"
	walk_right
# 174 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 194 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_13:
# 194 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 235 "data/maps/Route201/scripts.pory"
Route201_EventScript_ProfRowansBriefcase_Movement_0:
# 235 "data/maps/Route201/scripts.pory"
	face_left
	step_end

# 248 "data/maps/Route201/scripts.pory"
Route201_EventScript_ProfRowansBriefcase_Movement_1:
# 249 "data/maps/Route201/scripts.pory"
	walk_up
# 250 "data/maps/Route201/scripts.pory"
	walk_in_place_down
# 251 "data/maps/Route201/scripts.pory"
	delay_16
# 251 "data/maps/Route201/scripts.pory"
	delay_16
# 252 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 254 "data/maps/Route201/scripts.pory"
Route201_EventScript_ProfRowansBriefcase_Movement_2:
# 255 "data/maps/Route201/scripts.pory"
	delay_16
# 255 "data/maps/Route201/scripts.pory"
	delay_16
# 256 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 258 "data/maps/Route201/scripts.pory"
Route201_EventScript_ProfRowansBriefcase_Movement_3:
# 259 "data/maps/Route201/scripts.pory"
	delay_16
# 259 "data/maps/Route201/scripts.pory"
	delay_16
# 260 "data/maps/Route201/scripts.pory"
	walk_right
# 260 "data/maps/Route201/scripts.pory"
	walk_right
# 260 "data/maps/Route201/scripts.pory"
	walk_right
# 260 "data/maps/Route201/scripts.pory"
	walk_right
# 260 "data/maps/Route201/scripts.pory"
	walk_right
# 260 "data/maps/Route201/scripts.pory"
	walk_right
# 260 "data/maps/Route201/scripts.pory"
	walk_right
# 260 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 272 "data/maps/Route201/scripts.pory"
Route201_EventScript_ProfRowansBriefcase_Movement_4:
# 272 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 280 "data/maps/Route201/scripts.pory"
Route201_EventScript_ProfRowansBriefcase_Movement_5:
# 281 "data/maps/Route201/scripts.pory"
	delay_16
# 282 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 284 "data/maps/Route201/scripts.pory"
Route201_EventScript_ProfRowansBriefcase_Movement_6:
# 285 "data/maps/Route201/scripts.pory"
	walk_right
# 285 "data/maps/Route201/scripts.pory"
	walk_right
# 285 "data/maps/Route201/scripts.pory"
	walk_right
# 285 "data/maps/Route201/scripts.pory"
	walk_right
# 285 "data/maps/Route201/scripts.pory"
	walk_right
# 285 "data/maps/Route201/scripts.pory"
	walk_right
# 285 "data/maps/Route201/scripts.pory"
	walk_right
# 285 "data/maps/Route201/scripts.pory"
	walk_right
# 285 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 291 "data/maps/Route201/scripts.pory"
Route201_EventScript_ProfRowansBriefcase_Movement_7:
# 292 "data/maps/Route201/scripts.pory"
	delay_16
# 293 "data/maps/Route201/scripts.pory"
	walk_in_place_up
	step_end

# 295 "data/maps/Route201/scripts.pory"
Route201_EventScript_ProfRowansBriefcase_Movement_8:
# 296 "data/maps/Route201/scripts.pory"
	walk_in_place_down
# 297 "data/maps/Route201/scripts.pory"
	delay_16
# 297 "data/maps/Route201/scripts.pory"
	delay_16
# 297 "data/maps/Route201/scripts.pory"
	delay_16
# 298 "data/maps/Route201/scripts.pory"
	walk_in_place_fast_down
# 298 "data/maps/Route201/scripts.pory"
	walk_in_place_fast_down
# 298 "data/maps/Route201/scripts.pory"
	walk_in_place_fast_down
# 298 "data/maps/Route201/scripts.pory"
	walk_in_place_fast_down
# 298 "data/maps/Route201/scripts.pory"
	walk_in_place_fast_down
# 298 "data/maps/Route201/scripts.pory"
	walk_in_place_fast_down
# 298 "data/maps/Route201/scripts.pory"
	walk_in_place_fast_down
# 298 "data/maps/Route201/scripts.pory"
	walk_in_place_fast_down
# 299 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 300 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 321 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMoveToPlayer_Movement_0:
# 322 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 323 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 323 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 324 "data/maps/Route201/scripts.pory"
	walk_in_place_down
	step_end

# 328 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMoveToPlayer_Movement_1:
# 329 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 330 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 331 "data/maps/Route201/scripts.pory"
	walk_in_place_down
	step_end

# 335 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMoveToPlayer_Movement_2:
# 336 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 340 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMoveToPlayer_Movement_3:
# 341 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 342 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 343 "data/maps/Route201/scripts.pory"
	walk_in_place_down
	step_end

# 354 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMovePlayerToTallGrass_Movement_0:
# 355 "data/maps/Route201/scripts.pory"
	walk_up
# 355 "data/maps/Route201/scripts.pory"
	walk_up
# 356 "data/maps/Route201/scripts.pory"
	walk_right
# 356 "data/maps/Route201/scripts.pory"
	walk_right
# 356 "data/maps/Route201/scripts.pory"
	walk_right
# 356 "data/maps/Route201/scripts.pory"
	walk_right
# 357 "data/maps/Route201/scripts.pory"
	walk_up
# 358 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 360 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMovePlayerToTallGrass_Movement_1:
# 361 "data/maps/Route201/scripts.pory"
	walk_up
# 362 "data/maps/Route201/scripts.pory"
	walk_right
# 362 "data/maps/Route201/scripts.pory"
	walk_right
# 362 "data/maps/Route201/scripts.pory"
	walk_right
# 362 "data/maps/Route201/scripts.pory"
	walk_right
# 363 "data/maps/Route201/scripts.pory"
	walk_up
# 363 "data/maps/Route201/scripts.pory"
	walk_up
# 364 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 368 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMovePlayerToTallGrass_Movement_2:
# 369 "data/maps/Route201/scripts.pory"
	walk_up
# 369 "data/maps/Route201/scripts.pory"
	walk_up
# 370 "data/maps/Route201/scripts.pory"
	walk_right
# 370 "data/maps/Route201/scripts.pory"
	walk_right
# 370 "data/maps/Route201/scripts.pory"
	walk_right
# 371 "data/maps/Route201/scripts.pory"
	walk_up
# 372 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 374 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMovePlayerToTallGrass_Movement_3:
# 375 "data/maps/Route201/scripts.pory"
	walk_up
# 376 "data/maps/Route201/scripts.pory"
	walk_right
# 376 "data/maps/Route201/scripts.pory"
	walk_right
# 376 "data/maps/Route201/scripts.pory"
	walk_right
# 377 "data/maps/Route201/scripts.pory"
	walk_up
# 377 "data/maps/Route201/scripts.pory"
	walk_up
# 378 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 382 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMovePlayerToTallGrass_Movement_4:
# 383 "data/maps/Route201/scripts.pory"
	walk_up
# 383 "data/maps/Route201/scripts.pory"
	walk_up
# 384 "data/maps/Route201/scripts.pory"
	walk_right
# 384 "data/maps/Route201/scripts.pory"
	walk_right
# 385 "data/maps/Route201/scripts.pory"
	walk_up
# 386 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 388 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMovePlayerToTallGrass_Movement_5:
# 389 "data/maps/Route201/scripts.pory"
	walk_up
# 390 "data/maps/Route201/scripts.pory"
	walk_right
# 390 "data/maps/Route201/scripts.pory"
	walk_right
# 391 "data/maps/Route201/scripts.pory"
	walk_up
# 391 "data/maps/Route201/scripts.pory"
	walk_up
# 392 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 396 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMovePlayerToTallGrass_Movement_6:
# 397 "data/maps/Route201/scripts.pory"
	walk_up
# 397 "data/maps/Route201/scripts.pory"
	walk_up
# 398 "data/maps/Route201/scripts.pory"
	walk_right
# 399 "data/maps/Route201/scripts.pory"
	walk_up
# 400 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 402 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMovePlayerToTallGrass_Movement_7:
# 403 "data/maps/Route201/scripts.pory"
	walk_up
# 404 "data/maps/Route201/scripts.pory"
	walk_right
# 405 "data/maps/Route201/scripts.pory"
	walk_up
# 405 "data/maps/Route201/scripts.pory"
	walk_up
# 406 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 478 "data/maps/Route201/scripts.pory"
Route201_EventScript_BriefcasePushback_Movement_0:
# 478 "data/maps/Route201/scripts.pory"
	walk_left
	step_end

# 481 "data/maps/Route201/scripts.pory"
Route201_EventScript_BriefcasePushback_Movement_1:
# 481 "data/maps/Route201/scripts.pory"
	walk_up
	step_end

Route201_Text_NPC1::
# 486 "data/maps/Route201/scripts.pory"
	.string "Wild Pokemon lurk in tall grass. They can\n"
	.string "come bursting out at any time.\p"
	.string "So, if you're wanting to battle wild\n"
	.string "Pokemon, just walk in tall grass.\p"
	.string "If you want to avoid wild Pokemon, then\n"
	.string "stay out of the tall grass.$"

Route201_Text_NPC2::
# 490 "data/maps/Route201/scripts.pory"
	.string "If your Pokemon's health--that's its\n"
	.string "HP--is getting low, you should go to a\l"
	.string "Pokemon Center!$"

Route201_Text_PokemartLady::
# 494 "data/maps/Route201/scripts.pory"
	.string "Hi!\n"
	.string "I work at a Pokemon Mart.\p"
	.string "Did you know that a Pokemon's health is\n"
	.string "measured by Hit Points (HP)?\p"
	.string "If a Pokemon runs out of HP, it faints\n"
	.string "and can't battle anymore.\p"
	.string "If a Pokemon's HP gets low, you should\n"
	.string "heal it with a Potion.\p"
	.string "Here, let me give you a Potion as a free\n"
	.string "sample. First one's free!\p"
	.string "It will automatically go in the Items\n"
	.string "Pocket of your bag.$"

Route201_Text_PokemartLady_OutOfSpace::
# 498 "data/maps/Route201/scripts.pory"
	.string "Oops! You don't have enough space in\n"
	.string "your bag!$"

Route201_Text_TrainerTipsSign::
# 502 "data/maps/Route201/scripts.pory"
	.string "Trainer Tips!\p"
	.string "Don't be shy! Talk to anyone and\n"
	.string "everyone you happen to see.\p"
	.string "By talking to people, you will get\n"
	.string "invaluable information and advice.$"

Route201_Text_RouteSignSandgem::
# 506 "data/maps/Route201/scripts.pory"
	.string "Route 201\n"
	.string "{RIGHT_ARROW} Sandgem Town$"

Route201_Text_NPC3::
# 510 "data/maps/Route201/scripts.pory"
	.string "That ledge is one way. Jump down for a\n"
	.string "shortcut to Twinleaf Town!$"

Route201_Text_RouteSignTwinleaf::
# 514 "data/maps/Route201/scripts.pory"
	.string "Route 201\n"
	.string "{DOWN_ARROW} Twinleaf Town$"

Route201_Text_PokemartLady_AlreadyGaveItem::
# 518 "data/maps/Route201/scripts.pory"
	.string "You can find a Pokemon Mart in cities\n"
	.string "and most major towns.$"

Route201_Text_Barry_TooSlow::
# 522 "data/maps/Route201/scripts.pory"
	.string "Too slow!$"

Route201_Text_Barry_LetsGoToRowansLab::
# 526 "data/maps/Route201/scripts.pory"
	.string "Barry: All right!\n"
	.string "Let's get moving to Prof. Rowan's lab.$"

Route201_Text_Barry_DontWorryTallGrass::
# 530 "data/maps/Route201/scripts.pory"
	.string "Barry: ...\n"
	.string "...\p"
	.string "What?\n"
	.string "Don't go into the grass, right?\l"
	.string "No worries! No problem!\p"
	.string "It doesn't matter that we don't have\n"
	.string "any Pokemon!\p"
	.string "Trust me on this one.\n"
	.string "I've got an idea!\p"
	.string "Now listen. You know how wild Pokemon\n"
	.string "jump out when you go into tall grass?$"

Route201_Text_Barry_RushTallGrass::
# 534 "data/maps/Route201/scripts.pory"
	.string "So what you do is, you scoot over to the\n"
	.string "next piece of grass before any wild\l"
	.string "Pokemon can appear!\p"
	.string "If we just keep dashing, we can get to\n"
	.string "Sandgem Town without running into wild\l"
	.string "Pokemon!\p"
	.string "OK, stick with me!$"

Route201_Text_Barry_HereGoes::
# 538 "data/maps/Route201/scripts.pory"
	.string "OK, here goes!\p"
	.string "On your marks...$"

Route201_Text_ProfRowan_HoldIt::
# 542 "data/maps/Route201/scripts.pory"
	.string "HOLD IT!$"

Route201_Text_ProfRowan_YouDontHavePokemon::
# 546 "data/maps/Route201/scripts.pory"
	.string "Professor: You two don't seem to have\n"
	.string "any Pokemon between you?\p"
	.string "Then, what is the meaning of going into\n"
	.string "the tall grass?$"

Route201_Text_Barry_Silence::
# 550 "data/maps/Route201/scripts.pory"
	.string "Barry: ...\n...$"

Route201_Text_ProfRowan_Silence::
# 554 "data/maps/Route201/scripts.pory"
	.string "Professor: ...\n...\p...\n...$"

Route201_Text_Barry_ThisIsProfRowan::
# 558 "data/maps/Route201/scripts.pory"
	.string "Barry: Hey, {PLAYER}.\n"
	.string "This old guy...\p"
	.string "It's Prof. Rowan, isn't it?\n"
	.string "What's he doing here...?$"

Route201_Text_ProfRowan_TheyWantedPokemonHmm::
# 562 "data/maps/Route201/scripts.pory"
	.string "Professor: ...\n"
	.string "...\p"
	.string "They tried to go into the tall grass\n"
	.string "because they wanted Pokemon...\p"
	.string "Hmm...\n"
	.string "What to do...?\p"
	.string "Their world would surely change if they\n"
	.string "were to meet Pokemon...\p"
	.string "Is it right for me to put them on that\n"
	.string "path...?\p"
	.string "...\n"
	.string "...$"

Route201_Text_ProfRowan_YouTwoLovePokemon::
# 566 "data/maps/Route201/scripts.pory"
	.string "You two.\n"
	.string "You truly love Pokemon, do you?$"

Route201_Text_Barry_WhoaHoldUp::
# 570 "data/maps/Route201/scripts.pory"
	.string "Barry: Whoa, hold up!\n"
	.string "You're not making any sense here!$"

Route201_Text_ProfRown_IDidntQuiteCatchThat::
# 574 "data/maps/Route201/scripts.pory"
	.string "Professor: Er-hem!\p"
	.string "I didn't quite catch that, so I will ask\n"
	.string "you again.\p"
	.string "You two.\n"
	.string "You truly love Pokemon, do you?$"

Route201_Text_Barry_ILovePokemonToo::
# 578 "data/maps/Route201/scripts.pory"
	.string "Barry: Me too!\n"
	.string "I love Pokemon, too!$"

Route201_Text_ProfRowan_IWillAskAgain::
# 582 "data/maps/Route201/scripts.pory"
	.string "Professor: I will ask you once again.\p"
	.string "You two.\n"
	.string "You truly love Pokemon, do you?$"

Route201_Text_Barry_AskAHundredTimes::
# 586 "data/maps/Route201/scripts.pory"
	.string "Barry: What?!\n"
	.string "You can ask a hundred times!\l"
	.string "The answer will never change!\p"
	.string "We'll both answer a hundred times, we\n"
	.string "love Pokemon!$"

Route201_Text_Barry_RightPlayer::
# 590 "data/maps/Route201/scripts.pory"
	.string "Right, {PLAYER}?$"

Route201_Text_Barry_ThatJokesGettingOld::
# 594 "data/maps/Route201/scripts.pory"
	.string "Barry:...\n"
	.string "That joke's getting old!$"

Route201_Text_ProfRowan_ItWorriesMe::
# 598 "data/maps/Route201/scripts.pory"
	.string "Professor: ...A pair of reckless kids who\n"
	.string "foolishly try to enter tall grass\l"
	.string "without Pokemon of their own...?\p"
	.string "It worries me what people like that\n"
	.string "would do with Pokemon.$"

Route201_Text_Barry_GivePlayerPokemonInstead::
# 602 "data/maps/Route201/scripts.pory"
	.string "Barry: ...Uh...\n"
	.string "Well, I, uh...\p"
	.string "...\n"
	.string "...\p"
	.string "Well, then forget about me, but give a\n"
	.string "Pokemon to my friend here!\p"
	.string "I mean, it was me who tried to go into\n"
	.string "the tall grass and all...$"

Route201_Text_ProfRowan_VeryWellThen::
# 606 "data/maps/Route201/scripts.pory"
	.string "Professor: !\p"
	.string "How big of you!\p"
	.string "Very well, then!\n"
	.string "I will entrust you two with Pokemon!\p"
	.string "I apologize for putting you through\n"
	.string "that exercise.\p"
	.string "However!\p"
	.string "You must promise me that you will never\n"
	.string "recklessly endanger yourselves again.\p"
	.string "Now, then...\p"
	.string "Hm?\n"
	.string "Now, where...?$"

Route201_Text_Dawn_ForgotBriefcase::
# 610 "data/maps/Route201/scripts.pory"
	.string "Dawn: Professor Rowan.\p"
	.string "You left your briefcase at the lake!$"

Route201_Text_Dawn_IsSomethingWrong::
# 614 "data/maps/Route201/scripts.pory"
	.string "Oh?\n"
	.string "Is something wrong here?$"

Route201_Text_Lucas_ForgotBriefcase::
# 618 "data/maps/Route201/scripts.pory"
	.string "Lucas: Professor Rowan!\p"
	.string "You left your briefcase behind at the\n"
	.string "lake.$"

Route201_Text_Lucas_IsSomethingWrong::
# 622 "data/maps/Route201/scripts.pory"
	.string "Is something wrong here?$"

Route201_Text_ProfRowan_ThereItIs_EntrustPokemon::
# 626 "data/maps/Route201/scripts.pory"
	.string "Rowan: Ah, there it is!\n"
	.string "{RIVAL}, nice work.\p"
	.string "What I was about to do was to entrust\n"
	.string "these two with their own Pokemon.$"

Route201_Text_Dawn_AreYouSureThosePokemon::
# 630 "data/maps/Route201/scripts.pory"
	.string "Dawn: Pardon?\p"
	.string "Those Pokemon are hard to replace. Are\n"
	.string "you sure about giving them away?$"

Route201_Text_Lucas_AreYouSureThosePokemon::
# 634 "data/maps/Route201/scripts.pory"
	.string "Lucas: Wha...?\p"
	.string "Those Pokemon are crucial. You're giving\n"
	.string "them away?$"

Route201_Text_ProfRowan_WeExistSideBySide::
# 638 "data/maps/Route201/scripts.pory"
	.string "Rowan: Hm!\p"
	.string "We exist side by side with Pokemon.\p"
	.string "There comes a time when people should\n"
	.string "meet Pokemon.\p"
	.string "There is a world that should be explored\n"
	.string "together.\p"
	.string "For them, today is that time.\n"
	.string "The place, right here.$"

Route201_Text_ProfRowan_GoOnChooseAPokemon::
# 642 "data/maps/Route201/scripts.pory"
	.string "Go on! Open the briefcase and choose a\n"
	.string "Pokemon!$"

Route201_Text_Barry_ICantBelieveIt::
# 646 "data/maps/Route201/scripts.pory"
	.string "Barry: Really?!\n"
	.string "Prof. Rowan!\p"
	.string "I can't believe it! I'm so happy now that\n"
	.string "I can't keep a straight face!$"

Route201_Text_Barry_YouShouldPickFirst::
# 650 "data/maps/Route201/scripts.pory"
	.string "Hey, {PLAYER}.\n"
	.string "You can choose first.\p"
	.string "Hey, I'm practically a grown-up.\n"
	.string "I have to show some class here.$"

Route201_Text_ProfRowan_TalkedTo_GoOnChooseAPokemon::
# 654 "data/maps/Route201/scripts.pory"
	.string "Rowan: Go on! Open the briefcase and\n"
	.string "choose a Pokemon!$"

Route201_Text_Barry_TalkedTo_YouShouldPickFirst::
# 658 "data/maps/Route201/scripts.pory"
	.string "Hey, {PLAYER}.\n"
	.string "You can choose first. Go ahead.\p"
	.string "You know, like, I'm gonna be such a man\n"
	.string "about it. Yeah, I'm slick.$"

Route201_Text_Barry_OpenTheBriefcase::
# 662 "data/maps/Route201/scripts.pory"
	.string "Barry: What's up with you?\n"
	.string "Open the briefcase and pick a Pokemon!$"

Route201_Text_Barry_IChooseYou::
# 666 "data/maps/Route201/scripts.pory"
	.string "Barry: Then, I choose you!\n"
	.string "I'm picking this {STR_VAR_1}!$"

Route201_Text_ProfRowan_ChosenGoodPokemon::
# 670 "data/maps/Route201/scripts.pory"
	.string "Rowan: Very well! Both of you have\n"
	.string "chosen a good Pokemon, it seems.\p"
	.string "Now, listen well!\p"
	.string "The Pokemon you have been entrusted\n"
	.string "with are unfamiliar with the world.\p"
	.string "In that regard, they're much like you.\p"
	.string "As fellow newcomers to the world, I hope\n"
	.string "you'll do well together.\p"
	.string "If you have any trouble, come see me at\n"
	.string "my lab in Sandgem Town.\p"
	.string "And now, we'll be on our way.$"

Route201_Text_Dawn_WaitForMe::
# 674 "data/maps/Route201/scripts.pory"
	.string "Dawn: Professor!\nWait for me, please!$"

Route201_Text_Dawn_Sorry::
# 678 "data/maps/Route201/scripts.pory"
	.string "I'm sorry...\nPlease let me pass.$"

Route201_Text_Lucas_WaitForMe::
# 682 "data/maps/Route201/scripts.pory"
	.string "Lucas: Professor!\nWait for me!$"

Route201_Text_Lucas_Sorry::
# 686 "data/maps/Route201/scripts.pory"
	.string "Uh, sorry, folks.$"

Route201_Text_Barry_RowansReallyNice::
# 690 "data/maps/Route201/scripts.pory"
	.string "Barry: How do you like that?\n"
	.string "Prof. Rowan's really nice\p"
	.string "On TV he seems so stern and scary.$"

Route201_Text_Barry_WeBothHavePokemon::
# 694 "data/maps/Route201/scripts.pory"
	.string "Heheh, {PLAYER}!\n"
	.string "We've both got Pokemon now!\p"
	.string "There's only one thing to do, right?\n"
	.string "Are you up for this?$"

Route201_Text_Barry_DontBeThatWay::
# 698 "data/maps/Route201/scripts.pory"
	.string "Barry: What's with that attitude? Don't\n"
	.string "be that way.$"

Route201_Text_Barry_Challenge::
# 702 "data/maps/Route201/scripts.pory"
	.string "Barry: I've always wanted to say this...\p"
	.string "The time has finally come!\p"
	.string "{PLAYER}!\n"
	.string "I challenge you to a battle!$"

Route201_Text_Barry_LetsGoHome::
# 706 "data/maps/Route201/scripts.pory"
	.string "Barry: Whew!\n"
	.string "Let's go home.\p"
	.string "I'm beat after that battle.\n"
	.string "My Pokemon needs rest, too.\p"
	.string "See ya, {PLAYER}!$"
