HearthomeCity_PokemonCenter_MapScripts::
# 2 "data/maps/HearthomeCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HearthomeCity_PokemonCenter_MapScript_OnTransition
	.byte 0


HearthomeCity_PokemonCenter_MapScript_OnTransition::
# 6 "data/maps/HearthomeCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_HEARTHOME_CITY
	return


HearthomeCity_PokemonCenter_EventScript_Nurse::
# 10 "data/maps/HearthomeCity_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_HEARTHOME_NURSE
# 11 "data/maps/HearthomeCity_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 12 "data/maps/HearthomeCity_PokemonCenter/scripts.pory"
	waitmessage
# 13 "data/maps/HearthomeCity_PokemonCenter/scripts.pory"
	waitbuttonpress
# 14 "data/maps/HearthomeCity_PokemonCenter/scripts.pory"
	release
	end

