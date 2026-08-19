VeilstoneCity_PokemonCenter_MapScripts::
# 2 "data/maps/VeilstoneCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VeilstoneCity_PokemonCenter_MapScript_OnTransition
	.byte 0


VeilstoneCity_PokemonCenter_MapScript_OnTransition::
# 6 "data/maps/VeilstoneCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_VEILSTONE_CITY
	return


VeilstoneCity_PokemonCenter_EventScript_Nurse::
# 10 "data/maps/VeilstoneCity_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_VEILSTONE_NURSE
# 11 "data/maps/VeilstoneCity_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 12 "data/maps/VeilstoneCity_PokemonCenter/scripts.pory"
	waitmessage
# 13 "data/maps/VeilstoneCity_PokemonCenter/scripts.pory"
	waitbuttonpress
# 14 "data/maps/VeilstoneCity_PokemonCenter/scripts.pory"
	release
	end

