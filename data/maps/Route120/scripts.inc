# 1 "data/maps/Route120/scripts.pory"

# 2 "data/maps/Route120/scripts.pory"
.set LOCALID_STEVEN, 31
# 3 "data/maps/Route120/scripts.pory"

# 4 "data/maps/Route120/scripts.pory"
Route120_MapScripts::
# 5 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route120_OnResume
# 6 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route120_OnTransition
# 7 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route120_OnLoad
# 8 "data/maps/Route120/scripts.pory"
	.byte 0
# 9 "data/maps/Route120/scripts.pory"

# 10 "data/maps/Route120/scripts.pory"
Route120_OnResume:
# 11 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route120_EventScript_RemoveKecleonObject
# 12 "data/maps/Route120/scripts.pory"
	end
# 13 "data/maps/Route120/scripts.pory"

# 14 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject::
# 15 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 0, Route120_EventScript_RemoveBridgeKecleon
# 16 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 1, Route120_EventScript_RemoveKecleon
# 17 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 2, Route120_EventScript_RemoveKecleon
# 18 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 3, Route120_EventScript_RemoveKecleon
# 19 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 4, Route120_EventScript_RemoveKecleon
# 20 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 5, Route120_EventScript_RemoveKecleon
# 21 "data/maps/Route120/scripts.pory"
	return
# 22 "data/maps/Route120/scripts.pory"

# 23 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleon::
# 24 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 25 "data/maps/Route120/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 26 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 27 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 28 "data/maps/Route120/scripts.pory"
	return
# 29 "data/maps/Route120/scripts.pory"

# 30 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleon::
# 31 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 32 "data/maps/Route120/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 33 "data/maps/Route120/scripts.pory"
	removeobject VAR_LAST_TALKED
# 34 "data/maps/Route120/scripts.pory"
	return
# 35 "data/maps/Route120/scripts.pory"

# 36 "data/maps/Route120/scripts.pory"
Route120_OnLoad:
# 37 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route120_EventScript_CloseAncientTomb
# 38 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeClearMetatiles
# 39 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeKecleonMovement
# 40 "data/maps/Route120/scripts.pory"
	end
# 41 "data/maps/Route120/scripts.pory"

# 42 "data/maps/Route120/scripts.pory"
Route120_EventScript_CloseAncientTomb::
# 43 "data/maps/Route120/scripts.pory"
	setmetatile 7, 54, METATILE_General_RockWall_RockBase, TRUE
# 44 "data/maps/Route120/scripts.pory"
	setmetatile 7, 55, METATILE_General_RockWall_SandBase, TRUE
# 45 "data/maps/Route120/scripts.pory"
	return
# 46 "data/maps/Route120/scripts.pory"

# 47 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeClearMetatiles::
# 48 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 49 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 50 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 51 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 52 "data/maps/Route120/scripts.pory"
	return
# 53 "data/maps/Route120/scripts.pory"

# 54 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeKecleonMovement::
# 55 "data/maps/Route120/scripts.pory"
	setobjectmovementtype LOCALID_BRIDGE_KECLEON_SHADOW, MOVEMENT_TYPE_FACE_RIGHT
# 56 "data/maps/Route120/scripts.pory"
	return
# 57 "data/maps/Route120/scripts.pory"

# 58 "data/maps/Route120/scripts.pory"
Route120_OnTransition:
# 59 "data/maps/Route120/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 60 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_SetWeather
# 61 "data/maps/Route120/scripts.pory"
	end
# 62 "data/maps/Route120/scripts.pory"

# 63 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetWeather::
# 64 "data/maps/Route120/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 65 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 14, Route120_EventScript_SetSunnyWeather
# 66 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 60, Route120_EventScript_TrySetRainyWeather
# 67 "data/maps/Route120/scripts.pory"
	goto_if_ge VAR_TEMP_1, 61, Route120_EventScript_SetCloudyWeather
# 68 "data/maps/Route120/scripts.pory"
	return
# 69 "data/maps/Route120/scripts.pory"

# 70 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetCloudyWeather::
# 71 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY_CLOUDS
# 72 "data/maps/Route120/scripts.pory"
	return
# 73 "data/maps/Route120/scripts.pory"

# 74 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetSunnyWeather::
# 75 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY
# 76 "data/maps/Route120/scripts.pory"
	return
# 77 "data/maps/Route120/scripts.pory"

# 78 "data/maps/Route120/scripts.pory"
Route120_EventScript_TrySetRainyWeather::
# 79 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 7, Route120_EventScript_SetRainyWeather
# 80 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 19, Route120_EventScript_SetSunnyWeather
# 81 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_SetRainyWeather
# 82 "data/maps/Route120/scripts.pory"
	end
# 83 "data/maps/Route120/scripts.pory"

# 84 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetRainyWeather::
# 85 "data/maps/Route120/scripts.pory"
	setweather WEATHER_RAIN
# 86 "data/maps/Route120/scripts.pory"
	return
# 87 "data/maps/Route120/scripts.pory"

# 88 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty::
# 89 "data/maps/Route120/scripts.pory"
	lock
# 90 "data/maps/Route120/scripts.pory"
	faceplayer
# 91 "data/maps/Route120/scripts.pory"
	dotimebasedevents
# 92 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_120_RECEIVED_BERRY, Route120_EventScript_ReceivedBerry
# 93 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerriesExpressionOfLoveIsntIt, MSGBOX_YESNO
# 94 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route120_EventScript_BerryLove
# 95 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, NO, Route120_EventScript_BerryNotLove
# 96 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetPlayerTrainerIdOnesDigit
# 97 "data/maps/Route120/scripts.pory"
	switch VAR_RESULT
# 98 "data/maps/Route120/scripts.pory"
	case 0, Route120_EventScript_GiveFigyBerry
# 99 "data/maps/Route120/scripts.pory"
	case 5, Route120_EventScript_GiveFigyBerry
# 100 "data/maps/Route120/scripts.pory"
	case 1, Route120_EventScript_GiveWikiBerry
# 101 "data/maps/Route120/scripts.pory"
	case 6, Route120_EventScript_GiveWikiBerry
# 102 "data/maps/Route120/scripts.pory"
	case 2, Route120_EventScript_GiveMagoBerry
# 103 "data/maps/Route120/scripts.pory"
	case 7, Route120_EventScript_GiveMagoBerry
# 104 "data/maps/Route120/scripts.pory"
	case 3, Route120_EventScript_GiveAguavBerry
# 105 "data/maps/Route120/scripts.pory"
	case 8, Route120_EventScript_GiveAguavBerry
# 106 "data/maps/Route120/scripts.pory"
	case 4, Route120_EventScript_GiveIapapaBerry
# 107 "data/maps/Route120/scripts.pory"
	case 9, Route120_EventScript_GiveIapapaBerry
# 108 "data/maps/Route120/scripts.pory"
	end
# 109 "data/maps/Route120/scripts.pory"

# 110 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveFigyBerry::
# 111 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_FIGY_BERRY
# 112 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 113 "data/maps/Route120/scripts.pory"
	end
# 114 "data/maps/Route120/scripts.pory"

# 115 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveWikiBerry::
# 116 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_WIKI_BERRY
# 117 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 118 "data/maps/Route120/scripts.pory"
	end
# 119 "data/maps/Route120/scripts.pory"

# 120 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveMagoBerry::
# 121 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_MAGO_BERRY
# 122 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 123 "data/maps/Route120/scripts.pory"
	end
# 124 "data/maps/Route120/scripts.pory"

# 125 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveAguavBerry::
# 126 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_AGUAV_BERRY
# 127 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 128 "data/maps/Route120/scripts.pory"
	end
# 129 "data/maps/Route120/scripts.pory"

# 130 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveIapapaBerry::
# 131 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_IAPAPA_BERRY
# 132 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 133 "data/maps/Route120/scripts.pory"
	end
# 134 "data/maps/Route120/scripts.pory"

# 135 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveBerry::
# 136 "data/maps/Route120/scripts.pory"
	giveitem VAR_0x8004
# 137 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 138 "data/maps/Route120/scripts.pory"
	setflag FLAG_DAILY_ROUTE_120_RECEIVED_BERRY
# 139 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerryIsRareRaiseItWithCare, MSGBOX_DEFAULT
# 140 "data/maps/Route120/scripts.pory"
	release
# 141 "data/maps/Route120/scripts.pory"
	end
# 142 "data/maps/Route120/scripts.pory"

# 143 "data/maps/Route120/scripts.pory"
Route120_EventScript_ReceivedBerry::
# 144 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_IllGetMoreBerriesFromBerryMaster, MSGBOX_DEFAULT
# 145 "data/maps/Route120/scripts.pory"
	release
# 146 "data/maps/Route120/scripts.pory"
	end
# 147 "data/maps/Route120/scripts.pory"

# 148 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryLove::
# 149 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_YesYouUnderstand, MSGBOX_DEFAULT
# 150 "data/maps/Route120/scripts.pory"
	return
# 151 "data/maps/Route120/scripts.pory"

# 152 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryNotLove::
# 153 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_MakeYourOwnImpressions, MSGBOX_DEFAULT
# 154 "data/maps/Route120/scripts.pory"
	return
# 155 "data/maps/Route120/scripts.pory"

# 156 "data/maps/Route120/scripts.pory"
Route120_EventScript_Steven::
# 157 "data/maps/Route120/scripts.pory"
	lock
# 158 "data/maps/Route120/scripts.pory"
	faceplayer
# 159 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_NOT_READY_FOR_BATTLE_ROUTE_120, Route120_EventScript_StevenAskReadyForBattle
# 160 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGreeting, MSGBOX_YESNO
# 161 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 162 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 163 "data/maps/Route120/scripts.pory"
	end
# 164 "data/maps/Route120/scripts.pory"

# 165 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenNotReady::
# 166 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenIllWaitHere, MSGBOX_DEFAULT
# 167 "data/maps/Route120/scripts.pory"
	setflag FLAG_NOT_READY_FOR_BATTLE_ROUTE_120
# 168 "data/maps/Route120/scripts.pory"
	release
# 169 "data/maps/Route120/scripts.pory"
	end
# 170 "data/maps/Route120/scripts.pory"

# 171 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenAskReadyForBattle::
# 172 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenReadyForBattle, MSGBOX_YESNO
# 173 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 174 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 175 "data/maps/Route120/scripts.pory"
	end
# 176 "data/maps/Route120/scripts.pory"

# 177 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon::
# 178 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenShowMeYourPower, MSGBOX_DEFAULT
# 179 "data/maps/Route120/scripts.pory"
	closemessage
# 180 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route120_EventScript_PlayerApproachKecleonNorth
# 181 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route120_EventScript_PlayerApproachKecleonWest
# 182 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 183 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 184 "data/maps/Route120/scripts.pory"
	delay 20
# 185 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenUsedDevonScope, MSGBOX_DEFAULT
# 186 "data/maps/Route120/scripts.pory"
	closemessage
# 187 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Common_Movement_WalkInPlaceFasterRight
# 188 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 189 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Movement_KecleonAppears
# 190 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 191 "data/maps/Route120/scripts.pory"
	waitse
# 192 "data/maps/Route120/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 193 "data/maps/Route120/scripts.pory"
	delay 40
# 194 "data/maps/Route120/scripts.pory"
	waitmoncry
# 195 "data/maps/Route120/scripts.pory"
	setwildbattle SPECIES_KECLEON, 30
# 196 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8009, 0
# 197 "data/maps/Route120/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 198 "data/maps/Route120/scripts.pory"
	dowildbattle
# 199 "data/maps/Route120/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 200 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 201 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 202 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 203 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 204 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 205 "data/maps/Route120/scripts.pory"
	end
# 206 "data/maps/Route120/scripts.pory"

# 207 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleonPostBattle::
# 208 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 209 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 210 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 211 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 212 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 213 "data/maps/Route120/scripts.pory"
	end
# 214 "data/maps/Route120/scripts.pory"

# 215 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenGiveDeconScope::
# 216 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 217 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 218 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 219 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGiveDevonScope, MSGBOX_DEFAULT
# 220 "data/maps/Route120/scripts.pory"
	giveitem ITEM_DEVON_SCOPE
# 221 "data/maps/Route120/scripts.pory"
	setflag FLAG_RECEIVED_DEVON_SCOPE
# 222 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGoodbye, MSGBOX_DEFAULT
# 223 "data/maps/Route120/scripts.pory"
	closemessage
# 224 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 225 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 226 "data/maps/Route120/scripts.pory"
	delay 50
# 227 "data/maps/Route120/scripts.pory"
	setfieldeffectargument 0, 1
# 228 "data/maps/Route120/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 229 "data/maps/Route120/scripts.pory"
	delay 15
# 230 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_STEVEN
# 231 "data/maps/Route120/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 232 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 233 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 234 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 235 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 236 "data/maps/Route120/scripts.pory"
	special DrawWholeMapView
# 237 "data/maps/Route120/scripts.pory"
	release
# 238 "data/maps/Route120/scripts.pory"
	end
# 239 "data/maps/Route120/scripts.pory"

# 240 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonNorth::
# 241 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 242 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 243 "data/maps/Route120/scripts.pory"
	return
# 244 "data/maps/Route120/scripts.pory"

# 245 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonWest::
# 246 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route120_Movement_ApproachKecleonWest
# 247 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 248 "data/maps/Route120/scripts.pory"
	return
# 249 "data/maps/Route120/scripts.pory"

# 250 "data/maps/Route120/scripts.pory"
Route120_Movement_ApproachKecleonWest:
# 251 "data/maps/Route120/scripts.pory"
	walk_down
# 252 "data/maps/Route120/scripts.pory"
	walk_left
# 253 "data/maps/Route120/scripts.pory"
	step_end
# 254 "data/maps/Route120/scripts.pory"

# 255 "data/maps/Route120/scripts.pory"
Route120_EventScript_BridgeKecleon::
# 256 "data/maps/Route120/scripts.pory"
	msgbox Kecleon_Text_SomethingUnseeable, MSGBOX_NPC
# 257 "data/maps/Route120/scripts.pory"
	end
# 258 "data/maps/Route120/scripts.pory"

# 259 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSignFortree::
# 260 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSignFortree, MSGBOX_SIGN
# 261 "data/maps/Route120/scripts.pory"
	end
# 262 "data/maps/Route120/scripts.pory"

# 263 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSign121::
# 264 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSign121, MSGBOX_SIGN
# 265 "data/maps/Route120/scripts.pory"
	end
# 266 "data/maps/Route120/scripts.pory"

# 267 "data/maps/Route120/scripts.pory"
Route120_EventScript_Colin::
# 268 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_COLIN, Route120_Text_ColinIntro, Route120_Text_ColinDefeat
# 269 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ColinPostBattle, MSGBOX_AUTOCLOSE
# 270 "data/maps/Route120/scripts.pory"
	end
# 271 "data/maps/Route120/scripts.pory"

# 272 "data/maps/Route120/scripts.pory"
Route120_EventScript_Robert::
# 273 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ROBERT_1, Route120_Text_RobertIntro, Route120_Text_RobertDefeat, Route120_EventScript_RegisterRobert
# 274 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 275 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchRobert
# 276 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostBattle, MSGBOX_DEFAULT
# 277 "data/maps/Route120/scripts.pory"
	release
# 278 "data/maps/Route120/scripts.pory"
	end
# 279 "data/maps/Route120/scripts.pory"

# 280 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterRobert::
# 281 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 282 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 283 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertRegister, MSGBOX_DEFAULT
# 284 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_ROBERT_1
# 285 "data/maps/Route120/scripts.pory"
	release
# 286 "data/maps/Route120/scripts.pory"
	end
# 287 "data/maps/Route120/scripts.pory"

# 288 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchRobert::
# 289 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_ROBERT_1, Route120_Text_RobertRematchIntro, Route120_Text_RobertRematchDefeat
# 290 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostRematch, MSGBOX_AUTOCLOSE
# 291 "data/maps/Route120/scripts.pory"
	end
# 292 "data/maps/Route120/scripts.pory"

# 293 "data/maps/Route120/scripts.pory"
Route120_EventScript_Lorenzo::
# 294 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LORENZO, Route120_Text_LorenzoIntro, Route120_Text_LorenzoDefeat
# 295 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LorenzoPostBattle, MSGBOX_AUTOCLOSE
# 296 "data/maps/Route120/scripts.pory"
	end
# 297 "data/maps/Route120/scripts.pory"

# 298 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jenna::
# 299 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNA, Route120_Text_JennaIntro, Route120_Text_JennaDefeat
# 300 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JennaPostBattle, MSGBOX_AUTOCLOSE
# 301 "data/maps/Route120/scripts.pory"
	end
# 302 "data/maps/Route120/scripts.pory"

# 303 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jeffrey::
# 304 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JEFFREY_1, Route120_Text_JeffreyIntro, Route120_Text_JeffreyDefeat, Route120_EventScript_RegisterJeffrey
# 305 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 306 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchJeffrey
# 307 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostBattle, MSGBOX_DEFAULT
# 308 "data/maps/Route120/scripts.pory"
	release
# 309 "data/maps/Route120/scripts.pory"
	end
# 310 "data/maps/Route120/scripts.pory"

# 311 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterJeffrey::
# 312 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 313 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 314 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyRegister, MSGBOX_DEFAULT
# 315 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_JEFFREY_1
# 316 "data/maps/Route120/scripts.pory"
	release
# 317 "data/maps/Route120/scripts.pory"
	end
# 318 "data/maps/Route120/scripts.pory"

# 319 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchJeffrey::
# 320 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_JEFFREY_1, Route120_Text_JeffreyRematchIntro, Route120_Text_JeffreyRematchDefeat
# 321 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostRematch, MSGBOX_AUTOCLOSE
# 322 "data/maps/Route120/scripts.pory"
	end
# 323 "data/maps/Route120/scripts.pory"

# 324 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jennifer::
# 325 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNIFER, Route120_Text_JenniferIntro, Route120_Text_JenniferDefeat
# 326 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
# 327 "data/maps/Route120/scripts.pory"
	end
# 328 "data/maps/Route120/scripts.pory"

# 329 "data/maps/Route120/scripts.pory"
Route120_EventScript_Chip::
# 330 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CHIP, Route120_Text_ChipIntro, Route120_Text_ChipDefeat
# 331 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
# 332 "data/maps/Route120/scripts.pory"
	end
# 333 "data/maps/Route120/scripts.pory"

# 334 "data/maps/Route120/scripts.pory"
Route120_EventScript_Clarissa::
# 335 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CLARISSA, Route120_Text_ClarissaIntro, Route120_Text_ClarissaDefeat
# 336 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ClarissaPostBattle, MSGBOX_AUTOCLOSE
# 337 "data/maps/Route120/scripts.pory"
	end
# 338 "data/maps/Route120/scripts.pory"

# 339 "data/maps/Route120/scripts.pory"
Route120_EventScript_Angelica::
# 340 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ANGELICA, Route120_Text_AngelicaIntro, Route120_Text_AngelicaDefeat
# 341 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
# 342 "data/maps/Route120/scripts.pory"
	end
# 343 "data/maps/Route120/scripts.pory"

# 344 "data/maps/Route120/scripts.pory"
Route120_EventScript_Keigo::
# 345 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_KEIGO, Route120_Text_KeigoIntro, Route120_Text_KeigoDefeat
# 346 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
# 347 "data/maps/Route120/scripts.pory"
	end
# 348 "data/maps/Route120/scripts.pory"

# 349 "data/maps/Route120/scripts.pory"
Route120_EventScript_Riley::
# 350 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_RILEY, Route120_Text_RileyIntro, Route120_Text_RileyDefeat
# 351 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 352 "data/maps/Route120/scripts.pory"
	end
# 353 "data/maps/Route120/scripts.pory"

# 354 "data/maps/Route120/scripts.pory"
Route120_EventScript_Leonel::
# 355 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LEONEL, Route120_Text_LeonelIntro, Route120_Text_LeonelDefeat
# 356 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LeonelPostBattle, MSGBOX_AUTOCLOSE
# 357 "data/maps/Route120/scripts.pory"
	end
# 358 "data/maps/Route120/scripts.pory"

# 359 "data/maps/Route120/scripts.pory"
Route120_EventScript_Callie::
# 360 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CALLIE, Route120_Text_CallieIntro, Route120_Text_CallieDefeat
# 361 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_CalliePostBattle, MSGBOX_AUTOCLOSE
# 362 "data/maps/Route120/scripts.pory"
	end
# 363 "data/maps/Route120/scripts.pory"

# 364 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGreeting:
# 365 "data/maps/Route120/scripts.pory"
	.string "STEVEN: Hm? {PLAYER}{KUN}, hi.\n"
# 366 "data/maps/Route120/scripts.pory"
	.string "It's been a while.\p"
# 367 "data/maps/Route120/scripts.pory"
	.string "There's something here that you can't\n"
# 368 "data/maps/Route120/scripts.pory"
	.string "see, right?\p"
# 369 "data/maps/Route120/scripts.pory"
	.string "Now, if I were to use this device on\n"
# 370 "data/maps/Route120/scripts.pory"
	.string "the invisible obstacle…\p"
# 371 "data/maps/Route120/scripts.pory"
	.string "No, no. Rather than describing it,\n"
# 372 "data/maps/Route120/scripts.pory"
	.string "I should just show you.\l"
# 373 "data/maps/Route120/scripts.pory"
	.string "That would be more fun.\p"
# 374 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, are your POKéMON ready for\n"
# 375 "data/maps/Route120/scripts.pory"
	.string "battle?$"
# 376 "data/maps/Route120/scripts.pory"

# 377 "data/maps/Route120/scripts.pory"
Route120_Text_StevenIllWaitHere:
# 378 "data/maps/Route120/scripts.pory"
	.string "STEVEN: No?\p"
# 379 "data/maps/Route120/scripts.pory"
	.string "I'll wait here, so you can get ready.$"
# 380 "data/maps/Route120/scripts.pory"

# 381 "data/maps/Route120/scripts.pory"
Route120_Text_StevenReadyForBattle:
# 382 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, are your POKéMON\n"
# 383 "data/maps/Route120/scripts.pory"
	.string "ready for battle?$"
# 384 "data/maps/Route120/scripts.pory"

# 385 "data/maps/Route120/scripts.pory"
Route120_Text_StevenShowMeYourPower:
# 386 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, show me your true\n"
# 387 "data/maps/Route120/scripts.pory"
	.string "power as a TRAINER!$"
# 388 "data/maps/Route120/scripts.pory"

# 389 "data/maps/Route120/scripts.pory"
Route120_Text_StevenUsedDevonScope:
# 390 "data/maps/Route120/scripts.pory"
	.string "STEVEN used the DEVON SCOPE.\p"
# 391 "data/maps/Route120/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 392 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 393 "data/maps/Route120/scripts.pory"
	.string "The startled POKéMON attacked!$"
# 394 "data/maps/Route120/scripts.pory"

# 395 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGiveDevonScope:
# 396 "data/maps/Route120/scripts.pory"
	.string "STEVEN: I see…\n"
# 397 "data/maps/Route120/scripts.pory"
	.string "Your battle style is intriguing.\p"
# 398 "data/maps/Route120/scripts.pory"
	.string "Your POKéMON have obviously grown\n"
# 399 "data/maps/Route120/scripts.pory"
	.string "since I first met you in DEWFORD.\p"
# 400 "data/maps/Route120/scripts.pory"
	.string "I'd like you to have this\n"
# 401 "data/maps/Route120/scripts.pory"
	.string "DEVON SCOPE.\p"
# 402 "data/maps/Route120/scripts.pory"
	.string "Who knows, there may be other\n"
# 403 "data/maps/Route120/scripts.pory"
	.string "concealed POKéMON.$"
# 404 "data/maps/Route120/scripts.pory"

# 405 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGoodbye:
# 406 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}.\p"
# 407 "data/maps/Route120/scripts.pory"
	.string "I enjoy seeing POKéMON and TRAINERS\n"
# 408 "data/maps/Route120/scripts.pory"
	.string "who strive together.\p"
# 409 "data/maps/Route120/scripts.pory"
	.string "I think you're doing great.\p"
# 410 "data/maps/Route120/scripts.pory"
	.string "Well, let's meet again somewhere.$"
# 411 "data/maps/Route120/scripts.pory"

# 412 "data/maps/Route120/scripts.pory"
Kecleon_Text_SomethingUnseeable:
# 413 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.$"
# 414 "data/maps/Route120/scripts.pory"

# 415 "data/maps/Route120/scripts.pory"
Kecleon_Text_WantToUseDevonScope:
# 416 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 417 "data/maps/Route120/scripts.pory"
	.string "Want to use the DEVON SCOPE?$"
# 418 "data/maps/Route120/scripts.pory"

# 419 "data/maps/Route120/scripts.pory"
Kecleon_Text_UseDevonScopeMonAttacked:
# 420 "data/maps/Route120/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\p"
# 421 "data/maps/Route120/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 422 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 423 "data/maps/Route120/scripts.pory"
	.string "The startled POKéMON attacked!$"
# 424 "data/maps/Route120/scripts.pory"

# 425 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSignFortree:
# 426 "data/maps/Route120/scripts.pory"
	.string "ROUTE 120\n"
# 427 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} FORTREE CITY$"
# 428 "data/maps/Route120/scripts.pory"

# 429 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSign121:
# 430 "data/maps/Route120/scripts.pory"
	.string "{RIGHT_ARROW} ROUTE 121\n"
# 431 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 120$"
