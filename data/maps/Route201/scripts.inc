Route201_MapScripts::
# 8 "data/maps/Route201/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route201_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route201_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/Route201/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


Route201_EventScript_BarryTrigger_1::
# 14 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_4, 0
# 15 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_ChooseBarryDialogue
	return


Route201_EventScript_BarryTrigger_2::
# 19 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_4, 1
# 20 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_ChooseBarryDialogue
	return


Route201_EventScript_BarryTrigger_3::
# 24 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_4, 2
# 25 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_ChooseBarryDialogue
	return


Route201_EventScript_BarryTrigger_4::
# 29 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_4, 3
# 30 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_ChooseBarryDialogue
	return


Route201_EventScript_ChooseBarryDialogue::
# 34 "data/maps/Route201/scripts.pory"
	goto_if_set FLAG_BATTLED_BARRY_ROUTE_201, Route201_EventScript_ChooseBarryDialogue_1
# 38 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BarryGoingToSandgem
	return

Route201_EventScript_ChooseBarryDialogue_1:
# 35 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BarryGoingToLakeVerity
	return


Route201_EventScript_BarryGoingToSandgem::
# 45 "data/maps/Route201/scripts.pory"
	lock
# 46 "data/maps/Route201/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 47 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route201/scripts.pory"
	delay 48
# 49 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_TooSlow
# 50 "data/maps/Route201/scripts.pory"
	closemessage
# 51 "data/maps/Route201/scripts.pory"
	call Route201_EventScript_BarryMoveToPlayer
# 52 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_LetsGoToRowansLab
# 53 "data/maps/Route201/scripts.pory"
	closemessage
# 54 "data/maps/Route201/scripts.pory"
	call Route201_EventScript_BarryMovePlayerToTallGrass
# 55 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_DontWorryTallGrass
# 56 "data/maps/Route201/scripts.pory"
	closemessage
# 57 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_0
# 61 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryGoingToSandgem_Movement_1
# 62 "data/maps/Route201/scripts.pory"
	waitmovement 5
# 63 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_RushTallGrass
# 64 "data/maps/Route201/scripts.pory"
	closemessage
# 65 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryGoingToSandgem_Movement_2
# 66 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_3
# 70 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_HereGoes
# 72 "data/maps/Route201/scripts.pory"
	closemessage
# 73 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryGoingToSandgem_Movement_4
# 78 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_5
# 82 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 83 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_HoldIt
# 84 "data/maps/Route201/scripts.pory"
	closemessage
# 85 "data/maps/Route201/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 86 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 87 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 88 "data/maps/Route201/scripts.pory"
	delay 48
# 89 "data/maps/Route201/scripts.pory"
	clearflag FLAG_HIDE_PROF_ROWAN_ROUTE_201
# 90 "data/maps/Route201/scripts.pory"
	addobject 6
# 91 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryGoingToSandgem_Movement_2
# 92 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_2
# 93 "data/maps/Route201/scripts.pory"
	applymovement 6, Route201_EventScript_BarryGoingToSandgem_Movement_6
# 94 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_YouDontHavePokemon
# 96 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_Silence
# 97 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_Silence
# 98 "data/maps/Route201/scripts.pory"
	closemessage
# 99 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_7
# 100 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 101 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_ThisIsProfRowan
# 102 "data/maps/Route201/scripts.pory"
	closemessage
# 103 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_2
# 104 "data/maps/Route201/scripts.pory"
	applymovement 6, Route201_EventScript_BarryGoingToSandgem_Movement_8
# 107 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 108 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_TheyWantedPokemonHmm
# 109 "data/maps/Route201/scripts.pory"
	closemessage
# 110 "data/maps/Route201/scripts.pory"
	delay 48
# 111 "data/maps/Route201/scripts.pory"
	applymovement 6, Route201_EventScript_BarryGoingToSandgem_Movement_9
# 114 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 115 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_YouTwoLovePokemon, MSGBOX_YESNO
# 116 "data/maps/Route201/scripts.pory"
	closemessage
Route201_EventScript_BarryGoingToSandgem_2:
# 117 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route201_EventScript_BarryGoingToSandgem_3
# 127 "data/maps/Route201/scripts.pory"
	closemessage
# 128 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_2
# 129 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 130 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_ILovePokemonToo
# 131 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_IWillAskAgain
# 132 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_2
# 133 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 134 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_AskAHundredTimes
# 135 "data/maps/Route201/scripts.pory"
	closemessage
# 136 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_7
# 137 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryGoingToSandgem_Movement_10
# 141 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 142 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_RightPlayer, MSGBOX_YESNO
Route201_EventScript_BarryGoingToSandgem_6:
# 143 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route201_EventScript_BarryGoingToSandgem_7
# 155 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_ItWorriesMe
# 156 "data/maps/Route201/scripts.pory"
	closemessage
# 157 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryGoingToSandgem_Movement_2
# 158 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_2
# 159 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 160 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_GivePlayerPokemonInstead
# 161 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_VeryWellThen
# 162 "data/maps/Route201/scripts.pory"
	closemessage
# 163 "data/maps/Route201/scripts.pory"
	applymovement 6, Route201_EventScript_BarryGoingToSandgem_Movement_11
# 168 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 169 "data/maps/Route201/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_ROUTE_201
# 170 "data/maps/Route201/scripts.pory"
	addobject 8
# 171 "data/maps/Route201/scripts.pory"
	applymovement 8, Route201_EventScript_BarryGoingToSandgem_Movement_12
# 175 "data/maps/Route201/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route201_EventScript_BarryGoingToSandgem_10
# 179 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Lucas_ForgotBriefcase
Route201_EventScript_BarryGoingToSandgem_9:
# 181 "data/maps/Route201/scripts.pory"
	closemessage
# 182 "data/maps/Route201/scripts.pory"
	applymovement 6, Route201_EventScript_BarryGoingToSandgem_Movement_2
# 183 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 184 "data/maps/Route201/scripts.pory"
	clearflag FLAG_HIDE_ROWANS_BAG_ROUTE_201
# 185 "data/maps/Route201/scripts.pory"
	addobject 7
	checkplayergender
# 0 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route201_EventScript_BarryGoingToSandgem_14
# 189 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Lucas_IsSomethingWrong
Route201_EventScript_BarryGoingToSandgem_13:
# 191 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_ThereItIs_EntrustPokemon
# 192 "data/maps/Route201/scripts.pory"
	closemessage
# 193 "data/maps/Route201/scripts.pory"
	applymovement 8, Route201_EventScript_BarryGoingToSandgem_Movement_13
# 194 "data/maps/Route201/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route201_EventScript_BarryGoingToSandgem_18
# 198 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Lucas_AreYouSureThosePokemon
Route201_EventScript_BarryGoingToSandgem_17:
# 200 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_WeExistSideBySide
# 201 "data/maps/Route201/scripts.pory"
	closemessage
# 202 "data/maps/Route201/scripts.pory"
	applymovement 6, Route201_EventScript_BarryGoingToSandgem_Movement_13
# 203 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 204 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_GoOnChooseAPokemon
# 205 "data/maps/Route201/scripts.pory"
	closemessage
# 206 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_2
# 207 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 208 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_ICantBelieveIt
# 209 "data/maps/Route201/scripts.pory"
	closemessage
# 210 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_7
# 211 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 212 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_YouShouldPickFirst
# 213 "data/maps/Route201/scripts.pory"
	closemessage
# 214 "data/maps/Route201/scripts.pory"
	release
	end

Route201_EventScript_BarryGoingToSandgem_3:
# 118 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_7
# 119 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 120 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_WhoaHoldUp
# 121 "data/maps/Route201/scripts.pory"
	closemessage
# 122 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_2
# 123 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 124 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_IWillAskAgain, MSGBOX_YESNO
# 125 "data/maps/Route201/scripts.pory"
	closemessage
	goto Route201_EventScript_BarryGoingToSandgem_2

Route201_EventScript_BarryGoingToSandgem_7:
# 145 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_ThatJokesGettingOld
# 146 "data/maps/Route201/scripts.pory"
	closemessage
# 147 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_2
# 148 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 149 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_AskAHundredTimes
# 150 "data/maps/Route201/scripts.pory"
	closemessage
# 151 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_7
# 152 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 153 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_RightPlayer, MSGBOX_YESNO
	goto Route201_EventScript_BarryGoingToSandgem_6

Route201_EventScript_BarryGoingToSandgem_10:
# 177 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Dawn_ForgotBriefcase
	goto Route201_EventScript_BarryGoingToSandgem_9

Route201_EventScript_BarryGoingToSandgem_14:
# 187 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Dawn_IsSomethingWrong
	goto Route201_EventScript_BarryGoingToSandgem_13

Route201_EventScript_BarryGoingToSandgem_18:
# 196 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Dawn_AreYouSureThosePokemon
	goto Route201_EventScript_BarryGoingToSandgem_17


Route201_EventScript_BarryWaiting::
# 219 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_TalkedTo_YouShouldPickFirst, MSGBOX_NPC
	return


Route201_EventScript_ProfRowanWaiting::
# 223 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_TalkedTo_GoOnChooseAPokemon, MSGBOX_NPC
	return


Route201_EventScript_ProfRowansBriefcase::
# 227 "data/maps/Route201/scripts.pory"
	lock
# 228 "data/maps/Route201/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 229 "data/maps/Route201/scripts.pory"
	fadescreen FADE_TO_BLACK
# 230 "data/maps/Route201/scripts.pory"
	removeobject 7
# 231 "data/maps/Route201/scripts.pory"
	special ChooseStarter
# 232 "data/maps/Route201/scripts.pory"
	waitstate
# 233 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryGoingToSandgem_Movement_1
# 234 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_ProfRowansBriefcase_Movement_0
# 235 "data/maps/Route201/scripts.pory"
	applymovement 6, Route201_EventScript_BarryGoingToSandgem_Movement_7
# 236 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 237 "data/maps/Route201/scripts.pory"
	switch VAR_STARTER_MON
# 238 "data/maps/Route201/scripts.pory"
	case 0, Route201_EventScript_ProfRowansBriefcase_3
# 240 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_ProfRowansBriefcase_4
# 242 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_ProfRowansBriefcase_5
Route201_EventScript_ProfRowansBriefcase_1:
# 245 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_IChooseYou
# 246 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_ProfRowan_ChosenGoodPokemon
# 247 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_ProfRowansBriefcase_Movement_1
# 253 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_ProfRowansBriefcase_Movement_2
# 257 "data/maps/Route201/scripts.pory"
	applymovement 6, Route201_EventScript_ProfRowansBriefcase_Movement_3
# 261 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 262 "data/maps/Route201/scripts.pory"
	removeobject 6
# 263 "data/maps/Route201/scripts.pory"
	setflag FLAG_HIDE_PROF_ROWAN_ROUTE_201
	checkplayergender
# 0 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route201_EventScript_ProfRowansBriefcase_7
# 267 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Lucas_WaitForMe
Route201_EventScript_ProfRowansBriefcase_6:
# 269 "data/maps/Route201/scripts.pory"
	closemessage
# 270 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryGoingToSandgem_Movement_1
# 271 "data/maps/Route201/scripts.pory"
	applymovement 8, Route201_EventScript_ProfRowansBriefcase_Movement_4
# 272 "data/maps/Route201/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route201_EventScript_ProfRowansBriefcase_11
# 276 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Lucas_Sorry
Route201_EventScript_ProfRowansBriefcase_10:
# 278 "data/maps/Route201/scripts.pory"
	closemessage
# 279 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_ProfRowansBriefcase_Movement_5
# 283 "data/maps/Route201/scripts.pory"
	applymovement 8, Route201_EventScript_ProfRowansBriefcase_Movement_6
# 286 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 287 "data/maps/Route201/scripts.pory"
	removeobject 8
# 288 "data/maps/Route201/scripts.pory"
	setflag FLAG_HIDE_RIVAL_ROUTE_201
# 289 "data/maps/Route201/scripts.pory"
	delay 64
# 290 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_ProfRowansBriefcase_Movement_7
# 294 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_ProfRowansBriefcase_Movement_8
# 301 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 302 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_WeBothHavePokemon, MSGBOX_YESNO
Route201_EventScript_ProfRowansBriefcase_15:
# 303 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route201_EventScript_ProfRowansBriefcase_16
# 307 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_Challenge
# 308 "data/maps/Route201/scripts.pory"
	closemessage
# 309 "data/maps/Route201/scripts.pory"
	switch VAR_STARTER_MON
# 310 "data/maps/Route201/scripts.pory"
	case STARTER_TURTWIG, Route201_EventScript_ProfRowansBriefcase_20
# 312 "data/maps/Route201/scripts.pory"
	case STARTER_CHIMCHAR, Route201_EventScript_ProfRowansBriefcase_21
# 314 "data/maps/Route201/scripts.pory"
	case STARTER_PIPLUP, Route201_EventScript_ProfRowansBriefcase_22
Route201_EventScript_ProfRowansBriefcase_18:
# 317 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_LetsGoHome
# 318 "data/maps/Route201/scripts.pory"
	closemessage
# 320 "data/maps/Route201/scripts.pory"
	setflag FLAG_BATTLED_BARRY_ROUTE_201
# 321 "data/maps/Route201/scripts.pory"
	setvar VAR_PLAYERS_MOM_STATE, 4
# 322 "data/maps/Route201/scripts.pory"
	warpsilent MAP_TWINLEAF_TOWN_PLAYERS_HOUSE_1F, 1, 5
# 323 "data/maps/Route201/scripts.pory"
	waitstate
# 324 "data/maps/Route201/scripts.pory"
	release
	end

Route201_EventScript_ProfRowansBriefcase_3:
# 239 "data/maps/Route201/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIMCHAR
	goto Route201_EventScript_ProfRowansBriefcase_1

Route201_EventScript_ProfRowansBriefcase_4:
# 241 "data/maps/Route201/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PIPLUP
	goto Route201_EventScript_ProfRowansBriefcase_1

Route201_EventScript_ProfRowansBriefcase_5:
# 243 "data/maps/Route201/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TURTWIG
	goto Route201_EventScript_ProfRowansBriefcase_1

Route201_EventScript_ProfRowansBriefcase_7:
# 265 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Dawn_WaitForMe
	goto Route201_EventScript_ProfRowansBriefcase_6

Route201_EventScript_ProfRowansBriefcase_11:
# 274 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Dawn_Sorry
	goto Route201_EventScript_ProfRowansBriefcase_10

Route201_EventScript_ProfRowansBriefcase_16:
# 304 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_DontBeThatWay
# 305 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_WeBothHavePokemon, MSGBOX_YESNO
	goto Route201_EventScript_ProfRowansBriefcase_15

Route201_EventScript_ProfRowansBriefcase_20:
# 311 "data/maps/Route201/scripts.pory"
	trainerbattle_no_intro TRAINER_BARRY_ROUTE_201_TURTWIG, Route201_Text_Barry_BattleWin
	goto Route201_EventScript_ProfRowansBriefcase_18

Route201_EventScript_ProfRowansBriefcase_21:
# 313 "data/maps/Route201/scripts.pory"
	trainerbattle_no_intro TRAINER_BARRY_ROUTE_201_CHIMCHAR, Route201_Text_Barry_BattleWin
	goto Route201_EventScript_ProfRowansBriefcase_18

Route201_EventScript_ProfRowansBriefcase_22:
# 315 "data/maps/Route201/scripts.pory"
	trainerbattle_no_intro TRAINER_BARRY_ROUTE_201_PIPLUP, Route201_Text_Barry_BattleWin
	goto Route201_EventScript_ProfRowansBriefcase_18


Route201_EventScript_BarryMoveToPlayer::
# 329 "data/maps/Route201/scripts.pory"
	switch VAR_TEMP_4
# 330 "data/maps/Route201/scripts.pory"
	case 0, Route201_EventScript_BarryMoveToPlayer_3
# 337 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_BarryMoveToPlayer_4
# 344 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_BarryMoveToPlayer_5
# 349 "data/maps/Route201/scripts.pory"
	case 3, Route201_EventScript_BarryMoveToPlayer_6
Route201_EventScript_BarryMoveToPlayer_1:
	return

Route201_EventScript_BarryMoveToPlayer_3:
# 331 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryMoveToPlayer_Movement_0
# 336 "data/maps/Route201/scripts.pory"
	waitmovement 0
	goto Route201_EventScript_BarryMoveToPlayer_1

Route201_EventScript_BarryMoveToPlayer_4:
# 338 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryMoveToPlayer_Movement_1
# 343 "data/maps/Route201/scripts.pory"
	waitmovement 0
	goto Route201_EventScript_BarryMoveToPlayer_1

Route201_EventScript_BarryMoveToPlayer_5:
# 345 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryMoveToPlayer_Movement_2
# 348 "data/maps/Route201/scripts.pory"
	waitmovement 0
	goto Route201_EventScript_BarryMoveToPlayer_1

Route201_EventScript_BarryMoveToPlayer_6:
# 350 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryMoveToPlayer_Movement_3
# 356 "data/maps/Route201/scripts.pory"
	waitmovement 0
	goto Route201_EventScript_BarryMoveToPlayer_1


Route201_EventScript_BarryMovePlayerToTallGrass::
# 362 "data/maps/Route201/scripts.pory"
	switch VAR_TEMP_4
# 363 "data/maps/Route201/scripts.pory"
	case 0, Route201_EventScript_BarryMovePlayerToTallGrass_3
# 377 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_BarryMovePlayerToTallGrass_4
# 391 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_BarryMovePlayerToTallGrass_5
# 405 "data/maps/Route201/scripts.pory"
	case 3, Route201_EventScript_BarryMovePlayerToTallGrass_6
Route201_EventScript_BarryMovePlayerToTallGrass_1:
	return

Route201_EventScript_BarryMovePlayerToTallGrass_3:
# 364 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryMovePlayerToTallGrass_Movement_0
# 370 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryMovePlayerToTallGrass_Movement_1
# 376 "data/maps/Route201/scripts.pory"
	waitmovement 0
	goto Route201_EventScript_BarryMovePlayerToTallGrass_1

Route201_EventScript_BarryMovePlayerToTallGrass_4:
# 378 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryMovePlayerToTallGrass_Movement_2
# 384 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryMovePlayerToTallGrass_Movement_3
# 390 "data/maps/Route201/scripts.pory"
	waitmovement 0
	goto Route201_EventScript_BarryMovePlayerToTallGrass_1

Route201_EventScript_BarryMovePlayerToTallGrass_5:
# 392 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryMovePlayerToTallGrass_Movement_4
# 398 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryMovePlayerToTallGrass_Movement_5
# 404 "data/maps/Route201/scripts.pory"
	waitmovement 0
	goto Route201_EventScript_BarryMovePlayerToTallGrass_1

Route201_EventScript_BarryMovePlayerToTallGrass_6:
# 406 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryMovePlayerToTallGrass_Movement_6
# 412 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryMovePlayerToTallGrass_Movement_7
# 418 "data/maps/Route201/scripts.pory"
	waitmovement 0
	goto Route201_EventScript_BarryMovePlayerToTallGrass_1


Route201_EventScript_BarryGoingToLakeVerity::
# 424 "data/maps/Route201/scripts.pory"
	lock
# 425 "data/maps/Route201/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 426 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 427 "data/maps/Route201/scripts.pory"
	delay 48
# 428 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_Lake
# 429 "data/maps/Route201/scripts.pory"
	closemessage
# 430 "data/maps/Route201/scripts.pory"
	call Route201_EventScript_BarryMoveToPlayer
# 431 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_YouAndMe
# 432 "data/maps/Route201/scripts.pory"
	closemessage
# 433 "data/maps/Route201/scripts.pory"
	setvar VAR_BARRY_STATE, 3
# 434 "data/maps/Route201/scripts.pory"
	setfollowernpc 5, 0, Route201_EventScript_BarryFollowerDialogue
# 435 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_BarryFollowerDialogue::
# 439 "data/maps/Route201/scripts.pory"
	switch VAR_BARRY_FOLLOW_INTERACTIONS
# 440 "data/maps/Route201/scripts.pory"
	case 0, Route201_EventScript_BarryFollowerDialogue_3
# 442 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_BarryFollowerDialogue_4
# 444 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_BarryFollowerDialogue_5
# 454 "data/maps/Route201/scripts.pory"
	case 3, Route201_EventScript_BarryFollowerDialogue_6
# 456 "data/maps/Route201/scripts.pory"
	case 4, Route201_EventScript_BarryFollowerDialogue_7
# 458 "data/maps/Route201/scripts.pory"
	case 5, Route201_EventScript_BarryFollowerDialogue_8
# 461 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_BarryFollow7, MSGBOX_NPC
Route201_EventScript_BarryFollowerDialogue_1:
# 463 "data/maps/Route201/scripts.pory"
	compare VAR_BARRY_FOLLOW_INTERACTIONS < 6, 0
	goto_if_ne Route201_EventScript_BarryFollowerDialogue_10
	return

Route201_EventScript_BarryFollowerDialogue_3:
# 441 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_BarryFollow1, MSGBOX_NPC
	goto Route201_EventScript_BarryFollowerDialogue_1

Route201_EventScript_BarryFollowerDialogue_4:
# 443 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_BarryFollow2, MSGBOX_NPC
	goto Route201_EventScript_BarryFollowerDialogue_1

Route201_EventScript_BarryFollowerDialogue_5:
# 445 "data/maps/Route201/scripts.pory"
	switch VAR_STARTER_MON
# 446 "data/maps/Route201/scripts.pory"
	case 0, Route201_EventScript_BarryFollowerDialogue_14
# 448 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_BarryFollowerDialogue_15
# 450 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_BarryFollowerDialogue_16
Route201_EventScript_BarryFollowerDialogue_12:
# 453 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_BarryFollow3, MSGBOX_NPC
	goto Route201_EventScript_BarryFollowerDialogue_1

Route201_EventScript_BarryFollowerDialogue_6:
# 455 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_BarryFollow4, MSGBOX_NPC
	goto Route201_EventScript_BarryFollowerDialogue_1

Route201_EventScript_BarryFollowerDialogue_7:
# 457 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_BarryFollow5, MSGBOX_NPC
	goto Route201_EventScript_BarryFollowerDialogue_1

Route201_EventScript_BarryFollowerDialogue_8:
# 459 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_BarryFollow6, MSGBOX_NPC
	goto Route201_EventScript_BarryFollowerDialogue_1

Route201_EventScript_BarryFollowerDialogue_10:
# 464 "data/maps/Route201/scripts.pory"
	addvar VAR_BARRY_FOLLOW_INTERACTIONS, 1
	return

Route201_EventScript_BarryFollowerDialogue_14:
# 447 "data/maps/Route201/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIMCHAR
	goto Route201_EventScript_BarryFollowerDialogue_12

Route201_EventScript_BarryFollowerDialogue_15:
# 449 "data/maps/Route201/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PIPLUP
	goto Route201_EventScript_BarryFollowerDialogue_12

Route201_EventScript_BarryFollowerDialogue_16:
# 451 "data/maps/Route201/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TURTWIG
	goto Route201_EventScript_BarryFollowerDialogue_12


Route201_EventScript_NotThatWay_South::
# 469 "data/maps/Route201/scripts.pory"
	lock
# 470 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryGoingToSandgem_Movement_1
# 473 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_WrongWay, MSGBOX_NPC
# 474 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_NotThatWay_South_Movement_0
# 475 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route201_EventScript_NotThatWay_South_Movement_0
# 476 "data/maps/Route201/scripts.pory"
	waitmovementall
# 477 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_NotThatWay_East::
# 481 "data/maps/Route201/scripts.pory"
	lock
# 482 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryGoingToSandgem_Movement_2
# 485 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_WrongWay2, MSGBOX_NPC
# 486 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_NotThatWay_East_Movement_0
# 487 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route201_EventScript_NotThatWay_East_Movement_0
# 488 "data/maps/Route201/scripts.pory"
	waitmovementall
# 489 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_NPC1::
# 493 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_NPC1, MSGBOX_NPC
	end


Route201_EventScript_NPC2::
# 498 "data/maps/Route201/scripts.pory"
	faceplayer
# 499 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_NPC2, MSGBOX_NPC
	end


Route201_EventScript_NPC3::
# 504 "data/maps/Route201/scripts.pory"
	faceplayer
# 505 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_NPC3, MSGBOX_NPC
	end


Route201_EventScript_PokemartLady::
# 510 "data/maps/Route201/scripts.pory"
	lock
# 511 "data/maps/Route201/scripts.pory"
	faceplayer
# 512 "data/maps/Route201/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POTION_ROUTE_201, Route201_EventScript_PokemartLady_2
# 523 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_PokemartLady_AlreadyGaveItem, MSGBOX_NPC
Route201_EventScript_PokemartLady_1:
# 525 "data/maps/Route201/scripts.pory"
	release
	end

Route201_EventScript_PokemartLady_2:
# 513 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_PokemartLady, MSGBOX_NPC
# 514 "data/maps/Route201/scripts.pory"
	giveitem ITEM_POTION
# 515 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route201_EventScript_PokemartLady_5
# 519 "data/maps/Route201/scripts.pory"
	setflag FLAG_RECEIVED_POTION_ROUTE_201
	goto Route201_EventScript_PokemartLady_1

Route201_EventScript_PokemartLady_5:
# 516 "data/maps/Route201/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route201_EventScript_PokemartLady_1


Route201_EventScript_RouteSignTwinleaf::
# 530 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_RouteSignTwinleaf, MSGBOX_SIGN
	return


Route201_EventScript_RouteSignSandgem::
# 534 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_RouteSignSandgem, MSGBOX_SIGN
	return


Route201_EventScript_TrainerTipsSign::
# 538 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_TrainerTipsSign, MSGBOX_SIGN
	return


Route201_EventScript_BriefcaseTrigger_1::
# 542 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_4, 0
# 543 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BriefcasePushback
	return


Route201_EventScript_BriefcaseTrigger_2::
# 547 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_4, 1
# 548 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BriefcasePushback
	return


Route201_EventScript_BriefcasePushback::
# 552 "data/maps/Route201/scripts.pory"
	applymovement 5, Route201_EventScript_BarryGoingToSandgem_Movement_7
# 553 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 554 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_Barry_OpenTheBriefcase
# 555 "data/maps/Route201/scripts.pory"
	closemessage
# 556 "data/maps/Route201/scripts.pory"
	compare VAR_TEMP_4, 1
	goto_if_eq Route201_EventScript_BriefcasePushback_2
# 560 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_NotThatWay_South_Movement_0
Route201_EventScript_BriefcasePushback_1:
# 562 "data/maps/Route201/scripts.pory"
	waitmovement 0
	return

Route201_EventScript_BriefcasePushback_2:
# 557 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_NotThatWay_East_Movement_0
	goto Route201_EventScript_BriefcasePushback_1


# 57 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_0:
# 58 "data/maps/Route201/scripts.pory"
	walk_left
# 59 "data/maps/Route201/scripts.pory"
	walk_in_place_down
	step_end

# 61 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_1:
# 61 "data/maps/Route201/scripts.pory"
	walk_in_place_up
	step_end

# 65 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_2:
# 65 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 66 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_3:
# 67 "data/maps/Route201/scripts.pory"
	walk_left
# 67 "data/maps/Route201/scripts.pory"
	walk_left
# 67 "data/maps/Route201/scripts.pory"
	walk_left
# 68 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 73 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_4:
# 74 "data/maps/Route201/scripts.pory"
	delay_16
# 75 "data/maps/Route201/scripts.pory"
	delay_8
# 76 "data/maps/Route201/scripts.pory"
	walk_in_place_up
	step_end

# 78 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_5:
# 79 "data/maps/Route201/scripts.pory"
	delay_16
# 80 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 80 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 80 "data/maps/Route201/scripts.pory"
	walk_fast_right
	step_end

# 93 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_6:
# 93 "data/maps/Route201/scripts.pory"
	walk_right
# 93 "data/maps/Route201/scripts.pory"
	walk_right
# 93 "data/maps/Route201/scripts.pory"
	walk_right
# 93 "data/maps/Route201/scripts.pory"
	walk_right
# 93 "data/maps/Route201/scripts.pory"
	walk_right
# 93 "data/maps/Route201/scripts.pory"
	walk_right
# 93 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 99 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_7:
# 99 "data/maps/Route201/scripts.pory"
	walk_in_place_down
	step_end

# 104 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_8:
# 105 "data/maps/Route201/scripts.pory"
	walk_left
# 105 "data/maps/Route201/scripts.pory"
	walk_left
# 105 "data/maps/Route201/scripts.pory"
	walk_left
	step_end

# 111 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_9:
# 112 "data/maps/Route201/scripts.pory"
	walk_right
# 112 "data/maps/Route201/scripts.pory"
	walk_right
# 112 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 137 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_10:
# 138 "data/maps/Route201/scripts.pory"
	delay_4
# 139 "data/maps/Route201/scripts.pory"
	walk_in_place_up
	step_end

# 163 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_11:
# 164 "data/maps/Route201/scripts.pory"
	walk_in_place_left
# 165 "data/maps/Route201/scripts.pory"
	delay_16
# 165 "data/maps/Route201/scripts.pory"
	delay_16
# 165 "data/maps/Route201/scripts.pory"
	delay_16
# 166 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 171 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_12:
# 172 "data/maps/Route201/scripts.pory"
	delay_16
# 173 "data/maps/Route201/scripts.pory"
	walk_right
# 173 "data/maps/Route201/scripts.pory"
	walk_right
# 173 "data/maps/Route201/scripts.pory"
	walk_right
# 173 "data/maps/Route201/scripts.pory"
	walk_right
# 173 "data/maps/Route201/scripts.pory"
	walk_right
# 173 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 193 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryGoingToSandgem_Movement_13:
# 193 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 234 "data/maps/Route201/scripts.pory"
Route201_EventScript_ProfRowansBriefcase_Movement_0:
# 234 "data/maps/Route201/scripts.pory"
	face_left
	step_end

# 247 "data/maps/Route201/scripts.pory"
Route201_EventScript_ProfRowansBriefcase_Movement_1:
# 248 "data/maps/Route201/scripts.pory"
	walk_up
# 249 "data/maps/Route201/scripts.pory"
	walk_in_place_down
# 250 "data/maps/Route201/scripts.pory"
	delay_16
# 250 "data/maps/Route201/scripts.pory"
	delay_16
# 251 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 253 "data/maps/Route201/scripts.pory"
Route201_EventScript_ProfRowansBriefcase_Movement_2:
# 254 "data/maps/Route201/scripts.pory"
	delay_16
# 254 "data/maps/Route201/scripts.pory"
	delay_16
# 255 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 257 "data/maps/Route201/scripts.pory"
Route201_EventScript_ProfRowansBriefcase_Movement_3:
# 258 "data/maps/Route201/scripts.pory"
	delay_16
# 258 "data/maps/Route201/scripts.pory"
	delay_16
# 259 "data/maps/Route201/scripts.pory"
	walk_right
# 259 "data/maps/Route201/scripts.pory"
	walk_right
# 259 "data/maps/Route201/scripts.pory"
	walk_right
# 259 "data/maps/Route201/scripts.pory"
	walk_right
# 259 "data/maps/Route201/scripts.pory"
	walk_right
# 259 "data/maps/Route201/scripts.pory"
	walk_right
# 259 "data/maps/Route201/scripts.pory"
	walk_right
# 259 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 271 "data/maps/Route201/scripts.pory"
Route201_EventScript_ProfRowansBriefcase_Movement_4:
# 271 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 279 "data/maps/Route201/scripts.pory"
Route201_EventScript_ProfRowansBriefcase_Movement_5:
# 280 "data/maps/Route201/scripts.pory"
	delay_16
# 281 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 283 "data/maps/Route201/scripts.pory"
Route201_EventScript_ProfRowansBriefcase_Movement_6:
# 284 "data/maps/Route201/scripts.pory"
	walk_right
# 284 "data/maps/Route201/scripts.pory"
	walk_right
# 284 "data/maps/Route201/scripts.pory"
	walk_right
# 284 "data/maps/Route201/scripts.pory"
	walk_right
# 284 "data/maps/Route201/scripts.pory"
	walk_right
# 284 "data/maps/Route201/scripts.pory"
	walk_right
# 284 "data/maps/Route201/scripts.pory"
	walk_right
# 284 "data/maps/Route201/scripts.pory"
	walk_right
# 284 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 290 "data/maps/Route201/scripts.pory"
Route201_EventScript_ProfRowansBriefcase_Movement_7:
# 291 "data/maps/Route201/scripts.pory"
	delay_16
# 292 "data/maps/Route201/scripts.pory"
	walk_in_place_up
	step_end

# 294 "data/maps/Route201/scripts.pory"
Route201_EventScript_ProfRowansBriefcase_Movement_8:
# 295 "data/maps/Route201/scripts.pory"
	walk_in_place_down
# 296 "data/maps/Route201/scripts.pory"
	delay_16
# 296 "data/maps/Route201/scripts.pory"
	delay_16
# 296 "data/maps/Route201/scripts.pory"
	delay_16
# 297 "data/maps/Route201/scripts.pory"
	walk_in_place_fast_down
# 297 "data/maps/Route201/scripts.pory"
	walk_in_place_fast_down
# 297 "data/maps/Route201/scripts.pory"
	walk_in_place_fast_down
# 297 "data/maps/Route201/scripts.pory"
	walk_in_place_fast_down
# 297 "data/maps/Route201/scripts.pory"
	walk_in_place_fast_down
# 297 "data/maps/Route201/scripts.pory"
	walk_in_place_fast_down
# 297 "data/maps/Route201/scripts.pory"
	walk_in_place_fast_down
# 297 "data/maps/Route201/scripts.pory"
	walk_in_place_fast_down
# 298 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 299 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 331 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMoveToPlayer_Movement_0:
# 332 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 333 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 333 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 334 "data/maps/Route201/scripts.pory"
	walk_in_place_down
	step_end

# 338 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMoveToPlayer_Movement_1:
# 339 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 340 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 341 "data/maps/Route201/scripts.pory"
	walk_in_place_down
	step_end

# 345 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMoveToPlayer_Movement_2:
# 346 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 350 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMoveToPlayer_Movement_3:
# 351 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 352 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 353 "data/maps/Route201/scripts.pory"
	walk_in_place_down
	step_end

# 364 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMovePlayerToTallGrass_Movement_0:
# 365 "data/maps/Route201/scripts.pory"
	walk_up
# 365 "data/maps/Route201/scripts.pory"
	walk_up
# 366 "data/maps/Route201/scripts.pory"
	walk_right
# 366 "data/maps/Route201/scripts.pory"
	walk_right
# 366 "data/maps/Route201/scripts.pory"
	walk_right
# 366 "data/maps/Route201/scripts.pory"
	walk_right
# 367 "data/maps/Route201/scripts.pory"
	walk_up
# 368 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 370 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMovePlayerToTallGrass_Movement_1:
# 371 "data/maps/Route201/scripts.pory"
	walk_up
# 372 "data/maps/Route201/scripts.pory"
	walk_right
# 372 "data/maps/Route201/scripts.pory"
	walk_right
# 372 "data/maps/Route201/scripts.pory"
	walk_right
# 372 "data/maps/Route201/scripts.pory"
	walk_right
# 373 "data/maps/Route201/scripts.pory"
	walk_up
# 373 "data/maps/Route201/scripts.pory"
	walk_up
# 374 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 378 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMovePlayerToTallGrass_Movement_2:
# 379 "data/maps/Route201/scripts.pory"
	walk_up
# 379 "data/maps/Route201/scripts.pory"
	walk_up
# 380 "data/maps/Route201/scripts.pory"
	walk_right
# 380 "data/maps/Route201/scripts.pory"
	walk_right
# 380 "data/maps/Route201/scripts.pory"
	walk_right
# 381 "data/maps/Route201/scripts.pory"
	walk_up
# 382 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 384 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMovePlayerToTallGrass_Movement_3:
# 385 "data/maps/Route201/scripts.pory"
	walk_up
# 386 "data/maps/Route201/scripts.pory"
	walk_right
# 386 "data/maps/Route201/scripts.pory"
	walk_right
# 386 "data/maps/Route201/scripts.pory"
	walk_right
# 387 "data/maps/Route201/scripts.pory"
	walk_up
# 387 "data/maps/Route201/scripts.pory"
	walk_up
# 388 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 392 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMovePlayerToTallGrass_Movement_4:
# 393 "data/maps/Route201/scripts.pory"
	walk_up
# 393 "data/maps/Route201/scripts.pory"
	walk_up
# 394 "data/maps/Route201/scripts.pory"
	walk_right
# 394 "data/maps/Route201/scripts.pory"
	walk_right
# 395 "data/maps/Route201/scripts.pory"
	walk_up
# 396 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 398 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMovePlayerToTallGrass_Movement_5:
# 399 "data/maps/Route201/scripts.pory"
	walk_up
# 400 "data/maps/Route201/scripts.pory"
	walk_right
# 400 "data/maps/Route201/scripts.pory"
	walk_right
# 401 "data/maps/Route201/scripts.pory"
	walk_up
# 401 "data/maps/Route201/scripts.pory"
	walk_up
# 402 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 406 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMovePlayerToTallGrass_Movement_6:
# 407 "data/maps/Route201/scripts.pory"
	walk_up
# 407 "data/maps/Route201/scripts.pory"
	walk_up
# 408 "data/maps/Route201/scripts.pory"
	walk_right
# 409 "data/maps/Route201/scripts.pory"
	walk_up
# 410 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 412 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryMovePlayerToTallGrass_Movement_7:
# 413 "data/maps/Route201/scripts.pory"
	walk_up
# 414 "data/maps/Route201/scripts.pory"
	walk_right
# 415 "data/maps/Route201/scripts.pory"
	walk_up
# 415 "data/maps/Route201/scripts.pory"
	walk_up
# 416 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 474 "data/maps/Route201/scripts.pory"
Route201_EventScript_NotThatWay_South_Movement_0:
# 474 "data/maps/Route201/scripts.pory"
	walk_up
	step_end

# 486 "data/maps/Route201/scripts.pory"
Route201_EventScript_NotThatWay_East_Movement_0:
# 486 "data/maps/Route201/scripts.pory"
	walk_left
	step_end

Route201_Text_NPC1::
# 565 "data/maps/Route201/scripts.pory"
	.string "Wild Pokemon lurk in tall grass. They can\n"
	.string "come bursting out at any time.\p"
	.string "So, if you're wanting to battle wild\n"
	.string "Pokemon, just walk in tall grass.\p"
	.string "If you want to avoid wild Pokemon, then\n"
	.string "stay out of the tall grass.$"

Route201_Text_NPC2::
# 569 "data/maps/Route201/scripts.pory"
	.string "If your Pokemon's health--that's its\n"
	.string "HP--is getting low, you should go to a\l"
	.string "Pokemon Center!$"

Route201_Text_PokemartLady::
# 573 "data/maps/Route201/scripts.pory"
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
# 577 "data/maps/Route201/scripts.pory"
	.string "Oops! You don't have enough space in\n"
	.string "your bag!$"

Route201_Text_TrainerTipsSign::
# 581 "data/maps/Route201/scripts.pory"
	.string "Trainer Tips!\p"
	.string "Don't be shy! Talk to anyone and\n"
	.string "everyone you happen to see.\p"
	.string "By talking to people, you will get\n"
	.string "invaluable information and advice.$"

Route201_Text_RouteSignSandgem::
# 585 "data/maps/Route201/scripts.pory"
	.string "Route 201\n"
	.string "{RIGHT_ARROW} Sandgem Town$"

Route201_Text_NPC3::
# 589 "data/maps/Route201/scripts.pory"
	.string "That ledge is one way. Jump down for a\n"
	.string "shortcut to Twinleaf Town!$"

Route201_Text_RouteSignTwinleaf::
# 593 "data/maps/Route201/scripts.pory"
	.string "Route 201\n"
	.string "{DOWN_ARROW} Twinleaf Town$"

Route201_Text_PokemartLady_AlreadyGaveItem::
# 597 "data/maps/Route201/scripts.pory"
	.string "You can find a Pokemon Mart in cities\n"
	.string "and most major towns.$"

Route201_Text_Barry_TooSlow::
# 601 "data/maps/Route201/scripts.pory"
	.string "Too slow!$"

Route201_Text_Barry_LetsGoToRowansLab::
# 605 "data/maps/Route201/scripts.pory"
	.string "Barry: All right!\n"
	.string "Let's get moving to Prof. Rowan's lab.$"

Route201_Text_Barry_DontWorryTallGrass::
# 609 "data/maps/Route201/scripts.pory"
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
# 613 "data/maps/Route201/scripts.pory"
	.string "So what you do is, you scoot over to the\n"
	.string "next piece of grass before any wild\l"
	.string "Pokemon can appear!\p"
	.string "If we just keep dashing, we can get to\n"
	.string "Sandgem Town without running into wild\l"
	.string "Pokemon!\p"
	.string "OK, stick with me!$"

Route201_Text_Barry_HereGoes::
# 617 "data/maps/Route201/scripts.pory"
	.string "OK, here goes!\p"
	.string "On your marks...$"

Route201_Text_ProfRowan_HoldIt::
# 621 "data/maps/Route201/scripts.pory"
	.string "HOLD IT!$"

Route201_Text_ProfRowan_YouDontHavePokemon::
# 625 "data/maps/Route201/scripts.pory"
	.string "Professor: You two don't seem to have\n"
	.string "any Pokemon between you?\p"
	.string "Then, what is the meaning of going into\n"
	.string "the tall grass?$"

Route201_Text_Barry_Silence::
# 629 "data/maps/Route201/scripts.pory"
	.string "Barry: ...\n...$"

Route201_Text_ProfRowan_Silence::
# 633 "data/maps/Route201/scripts.pory"
	.string "Professor: ...\n...\p...\n...$"

Route201_Text_Barry_ThisIsProfRowan::
# 637 "data/maps/Route201/scripts.pory"
	.string "Barry: Hey, {PLAYER}.\n"
	.string "This old guy...\p"
	.string "It's Prof. Rowan, isn't it?\n"
	.string "What's he doing here...?$"

Route201_Text_ProfRowan_TheyWantedPokemonHmm::
# 641 "data/maps/Route201/scripts.pory"
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
# 645 "data/maps/Route201/scripts.pory"
	.string "You two.\n"
	.string "You truly love Pokemon, do you?$"

Route201_Text_Barry_WhoaHoldUp::
# 649 "data/maps/Route201/scripts.pory"
	.string "Barry: Whoa, hold up!\n"
	.string "You're not making any sense here!$"

Route201_Text_ProfRown_IDidntQuiteCatchThat::
# 653 "data/maps/Route201/scripts.pory"
	.string "Professor: Er-hem!\p"
	.string "I didn't quite catch that, so I will ask\n"
	.string "you again.\p"
	.string "You two.\n"
	.string "You truly love Pokemon, do you?$"

Route201_Text_Barry_ILovePokemonToo::
# 657 "data/maps/Route201/scripts.pory"
	.string "Barry: Me too!\n"
	.string "I love Pokemon, too!$"

Route201_Text_ProfRowan_IWillAskAgain::
# 661 "data/maps/Route201/scripts.pory"
	.string "Professor: I will ask you once again.\p"
	.string "You two.\n"
	.string "You truly love Pokemon, do you?$"

Route201_Text_Barry_AskAHundredTimes::
# 665 "data/maps/Route201/scripts.pory"
	.string "Barry: What?!\n"
	.string "You can ask a hundred times!\l"
	.string "The answer will never change!\p"
	.string "We'll both answer a hundred times, we\n"
	.string "love Pokemon!$"

Route201_Text_Barry_RightPlayer::
# 669 "data/maps/Route201/scripts.pory"
	.string "Right, {PLAYER}?$"

Route201_Text_Barry_ThatJokesGettingOld::
# 673 "data/maps/Route201/scripts.pory"
	.string "Barry:...\n"
	.string "That joke's getting old!$"

Route201_Text_ProfRowan_ItWorriesMe::
# 677 "data/maps/Route201/scripts.pory"
	.string "Professor: ...A pair of reckless kids who\n"
	.string "foolishly try to enter tall grass\l"
	.string "without Pokemon of their own...?\p"
	.string "It worries me what people like that\n"
	.string "would do with Pokemon.$"

Route201_Text_Barry_GivePlayerPokemonInstead::
# 681 "data/maps/Route201/scripts.pory"
	.string "Barry: ...Uh...\n"
	.string "Well, I, uh...\p"
	.string "...\n"
	.string "...\p"
	.string "Well, then forget about me, but give a\n"
	.string "Pokemon to my friend here!\p"
	.string "I mean, it was me who tried to go into\n"
	.string "the tall grass and all...$"

Route201_Text_ProfRowan_VeryWellThen::
# 685 "data/maps/Route201/scripts.pory"
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
# 689 "data/maps/Route201/scripts.pory"
	.string "Dawn: Professor Rowan.\p"
	.string "You left your briefcase at the lake!$"

Route201_Text_Dawn_IsSomethingWrong::
# 693 "data/maps/Route201/scripts.pory"
	.string "Oh?\n"
	.string "Is something wrong here?$"

Route201_Text_Lucas_ForgotBriefcase::
# 697 "data/maps/Route201/scripts.pory"
	.string "Lucas: Professor Rowan!\p"
	.string "You left your briefcase behind at the\n"
	.string "lake.$"

Route201_Text_Lucas_IsSomethingWrong::
# 701 "data/maps/Route201/scripts.pory"
	.string "Is something wrong here?$"

Route201_Text_ProfRowan_ThereItIs_EntrustPokemon::
# 705 "data/maps/Route201/scripts.pory"
	.string "Rowan: Ah, there it is!\n"
	.string "{RIVAL}, nice work.\p"
	.string "What I was about to do was to entrust\n"
	.string "these two with their own Pokemon.$"

Route201_Text_Dawn_AreYouSureThosePokemon::
# 709 "data/maps/Route201/scripts.pory"
	.string "Dawn: Pardon?\p"
	.string "Those Pokemon are hard to replace. Are\n"
	.string "you sure about giving them away?$"

Route201_Text_Lucas_AreYouSureThosePokemon::
# 713 "data/maps/Route201/scripts.pory"
	.string "Lucas: Wha...?\p"
	.string "Those Pokemon are crucial. You're giving\n"
	.string "them away?$"

Route201_Text_ProfRowan_WeExistSideBySide::
# 717 "data/maps/Route201/scripts.pory"
	.string "Rowan: Hm!\p"
	.string "We exist side by side with Pokemon.\p"
	.string "There comes a time when people should\n"
	.string "meet Pokemon.\p"
	.string "There is a world that should be explored\n"
	.string "together.\p"
	.string "For them, today is that time.\n"
	.string "The place, right here.$"

Route201_Text_ProfRowan_GoOnChooseAPokemon::
# 721 "data/maps/Route201/scripts.pory"
	.string "Go on! Open the briefcase and choose a\n"
	.string "Pokemon!$"

Route201_Text_Barry_ICantBelieveIt::
# 725 "data/maps/Route201/scripts.pory"
	.string "Barry: Really?!\n"
	.string "Prof. Rowan!\p"
	.string "I can't believe it! I'm so happy now that\n"
	.string "I can't keep a straight face!$"

Route201_Text_Barry_YouShouldPickFirst::
# 729 "data/maps/Route201/scripts.pory"
	.string "Hey, {PLAYER}.\n"
	.string "You can choose first.\p"
	.string "Hey, I'm practically a grown-up.\n"
	.string "I have to show some class here.$"

Route201_Text_ProfRowan_TalkedTo_GoOnChooseAPokemon::
# 733 "data/maps/Route201/scripts.pory"
	.string "Rowan: Go on! Open the briefcase and\n"
	.string "choose a Pokemon!$"

Route201_Text_Barry_TalkedTo_YouShouldPickFirst::
# 737 "data/maps/Route201/scripts.pory"
	.string "Hey, {PLAYER}.\n"
	.string "You can choose first. Go ahead.\p"
	.string "You know, like, I'm gonna be such a man\n"
	.string "about it. Yeah, I'm slick.$"

Route201_Text_Barry_OpenTheBriefcase::
# 741 "data/maps/Route201/scripts.pory"
	.string "Barry: What's up with you?\n"
	.string "Open the briefcase and pick a Pokemon!$"

Route201_Text_Barry_IChooseYou::
# 745 "data/maps/Route201/scripts.pory"
	.string "Barry: Then, I choose you!\n"
	.string "I'm picking this {STR_VAR_1}!$"

Route201_Text_ProfRowan_ChosenGoodPokemon::
# 749 "data/maps/Route201/scripts.pory"
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
# 753 "data/maps/Route201/scripts.pory"
	.string "Dawn: Professor!\nWait for me, please!$"

Route201_Text_Dawn_Sorry::
# 757 "data/maps/Route201/scripts.pory"
	.string "I'm sorry...\nPlease let me pass.$"

Route201_Text_Lucas_WaitForMe::
# 761 "data/maps/Route201/scripts.pory"
	.string "Lucas: Professor!\nWait for me!$"

Route201_Text_Lucas_Sorry::
# 765 "data/maps/Route201/scripts.pory"
	.string "Uh, sorry, folks.$"

Route201_Text_Barry_RowansReallyNice::
# 769 "data/maps/Route201/scripts.pory"
	.string "Barry: How do you like that?\n"
	.string "Prof. Rowan's really nice\p"
	.string "On TV he seems so stern and scary.$"

Route201_Text_Barry_WeBothHavePokemon::
# 773 "data/maps/Route201/scripts.pory"
	.string "Heheh, {PLAYER}!\n"
	.string "We've both got Pokemon now!\p"
	.string "There's only one thing to do, right?\n"
	.string "Are you up for this?$"

Route201_Text_Barry_DontBeThatWay::
# 777 "data/maps/Route201/scripts.pory"
	.string "Barry: What's with that attitude? Don't\n"
	.string "be that way.$"

Route201_Text_Barry_Challenge::
# 781 "data/maps/Route201/scripts.pory"
	.string "Barry: I've always wanted to say this...\p"
	.string "The time has finally come!\p"
	.string "{PLAYER}!\n"
	.string "I challenge you to a battle!$"

Route201_Text_Barry_LetsGoHome::
# 785 "data/maps/Route201/scripts.pory"
	.string "Barry: Whew!\n"
	.string "Let's go home.\p"
	.string "I'm beat after that battle.\n"
	.string "My Pokemon needs rest, too.\p"
	.string "See ya, {PLAYER}!$"

Route201_Text_Barry_IWon::
# 789 "data/maps/Route201/scripts.pory"
	.string "Barry: Aha...\n"
	.string "Ahaha... I won? I won!\p"
	.string "But that battle, it could've gone either\n"
	.string "way. It was that close!\p"
	.string "I can tell you one thing: battling is\n"
	.string "awesomely fun!\p"
	.string "OK, let's go home\p"
	.string "I'm beat after that battle.\p"
	.string "My Pokémon needs rest, too.\p"
	.string "See ya, {PLAYER}!$"

Route201_Text_Barry_BattleWin::
# 793 "data/maps/Route201/scripts.pory"
	.string "What are you saying?!\n"
	.string "We ended up losing?!$"

Route201_Text_Barry_Lake::
# 797 "data/maps/Route201/scripts.pory"
	.string "Barry: Too slow!\n"
	.string "{PLAYER}, I’m sick of waiting!\p"
	.string "I’m going to go see Prof. Rowan, so I can\n"
	.string "thank him properly.\p"
	.string "So, I had this great idea.\n"
	.string "Listen up, OK?\p"
	.string "You know that lake where we always play\n"
	.string "at?\p"
	.string "You know how they say a legendary\n"
	.string "Pokémon lives there?\p"
	.string "You guessed it!\n"
	.string "Let’s catch that Pokémon.\p"
	.string "That’ll make Prof. Rowan happy.\n"
	.string "I’m sure of that!$"

Route201_Text_Barry_YouAndMe::
# 801 "data/maps/Route201/scripts.pory"
	.string "Barry: Me and you together, we’ve got\n"
	.string "nothing to fear!$"

Route201_Text_Barry_WrongWay::
# 805 "data/maps/Route201/scripts.pory"
	.string "Barry: Heheh, {PLAYER}.\n"
	.string "The lake’s not that way!$"

Route201_Text_Barry_WrongWay2::
# 809 "data/maps/Route201/scripts.pory"
	.string "Barry: Hey, {PLAYER}!\n"
	.string "I said, the lake's not that way!$"

Route201_Text_BarryFollow1::
# 813 "data/maps/Route201/scripts.pory"
	.string "Barry: That Pokémon battle...\n"
	.string "Wasn’t that wickedly fun or what?\p"
	.string "I mean, I’d pick the moves, and my\n"
	.string "Pokémon would use them!\p"
	.string "Yeah, I’m going to battle tons and get\n"
	.string "real close with Pokémon.$"

Route201_Text_BarryFollow2::
# 817 "data/maps/Route201/scripts.pory"
	.string "Barry: Pokémon all have different\n"
	.string "moves, huh?\p"
	.string "A Trainer makes his Pokémon battle by\n"
	.string "ordering them to use moves.\p"
	.string "That’s so awesomely cool.$"

Route201_Text_BarryFollow3::
# 821 "data/maps/Route201/scripts.pory"
	.string "Barry: Do you believe it?\n"
	.string "I can hardly believe it.\p"
	.string "You and me, we’re Pokémon Trainers all of\n"
	.string "a sudden.\p"
	.string "Man, we’ve got tons to learn about being\n"
	.string "a Trainer.\p"
	.string "But seeing this Poké Ball with this\n"
	.string "{STR_VAR_1} inside...\p"
	.string "It makes me feel like I can do anything!\n"
	.string "Nothing’s impossible!$"

Route201_Text_BarryFollow4::
# 825 "data/maps/Route201/scripts.pory"
	.string "Barry: That lake has a mirage Pokémon\n"
	.string "living in it.\p"
	.string "Everyone says it’s just a legend, but I\n"
	.string "know I’m right.$"

Route201_Text_BarryFollow5::
# 829 "data/maps/Route201/scripts.pory"
	.string "Barry: Hey, do you know about the\n"
	.string "Champion?\p"
	.string "There’s this out-of-this-world tough\n"
	.string "Trainer who gets called that.\p"
	.string "Well, I’m gonna get so tough, the Champ\n"
	.string "has to battle me. You watch!\p"
	.string "With this little guy here, I’m sure I can\n"
	.string "get that tough.$"

Route201_Text_BarryFollow6::
# 833 "data/maps/Route201/scripts.pory"
	.string "Barry: Hey, that’s enough talking\n"
	.string "already.\p"
	.string "I’m itching to get going to the lake.\n"
	.string "Come on, come on!$"

Route201_Text_BarryFollow7::
# 837 "data/maps/Route201/scripts.pory"
	.string "Barry: All right!\n"
	.string "Let’s move out! Hustle up!$"
