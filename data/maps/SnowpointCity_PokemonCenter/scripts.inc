SnowpointCity_PokemonCenter_MapScripts::
# 2 "data/maps/SnowpointCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SnowpointCity_PokemonCenter_MapScript_OnTransition
	.byte 0


SnowpointCity_PokemonCenter_MapScript_OnTransition::
# 6 "data/maps/SnowpointCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_SNOWPOINT_CITY
	return


SnowpointCity_PokemonCenter_EventScript_Nurse::
# 10 "data/maps/SnowpointCity_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_SNOWPOINT_NURSE
# 11 "data/maps/SnowpointCity_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 12 "data/maps/SnowpointCity_PokemonCenter/scripts.pory"
	waitmessage
# 13 "data/maps/SnowpointCity_PokemonCenter/scripts.pory"
	waitbuttonpress
# 14 "data/maps/SnowpointCity_PokemonCenter/scripts.pory"
	release
	end

