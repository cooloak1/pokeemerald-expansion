SunyshoreCity_PokemonCenter_MapScripts::
# 2 "data/maps/SunyshoreCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunyshoreCity_PokemonCenter_MapScript_OnTransition
	.byte 0


SunyshoreCity_PokemonCenter_MapScript_OnTransition::
# 6 "data/maps/SunyshoreCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_SUNYSHORE_CITY
	return


SunyshoreCity_PokemonCenter_EventScript_Nurse::
# 10 "data/maps/SunyshoreCity_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_SUNYSHORE_NURSE
# 11 "data/maps/SunyshoreCity_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 12 "data/maps/SunyshoreCity_PokemonCenter/scripts.pory"
	waitmessage
# 13 "data/maps/SunyshoreCity_PokemonCenter/scripts.pory"
	waitbuttonpress
# 14 "data/maps/SunyshoreCity_PokemonCenter/scripts.pory"
	release
	end

