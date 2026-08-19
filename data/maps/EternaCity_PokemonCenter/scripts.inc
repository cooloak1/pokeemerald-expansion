EternaCity_PokemonCenter_MapScripts::
# 2 "data/maps/EternaCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EternaCity_PokemonCenter_MapScript_OnTransition
	.byte 0


EternaCity_PokemonCenter_MapScript_OnTransition::
# 6 "data/maps/EternaCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_ETERNA_CITY
	return


EternaCity_PokemonCenter_EventScript_Nurse::
# 10 "data/maps/EternaCity_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_ETERNA_NURSE
# 11 "data/maps/EternaCity_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 12 "data/maps/EternaCity_PokemonCenter/scripts.pory"
	waitmessage
# 13 "data/maps/EternaCity_PokemonCenter/scripts.pory"
	waitbuttonpress
# 14 "data/maps/EternaCity_PokemonCenter/scripts.pory"
	release
	end

