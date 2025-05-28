LakeVerity_MapScripts::
# 2 "data/maps/LakeVerity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LakeVerity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LakeVerity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LakeVerity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 4 "data/maps/LakeVerity/scripts.pory"
	call LakeVerity_EventScript_SetMapLayout
	return


LakeVerity_EventScript_SetMapLayout::
# 9 "data/maps/LakeVerity/scripts.pory"
	goto_if_set FLAG_LAKE_VALOR_BOMBED, LakeVerity_EventScript_SetMapLayout_1
# 13 "data/maps/LakeVerity/scripts.pory"
	setmaplayoutindex LAYOUT_LAKE_VERITY_LOW_WATER
	return

LakeVerity_EventScript_SetMapLayout_1:
# 10 "data/maps/LakeVerity/scripts.pory"
	setmaplayoutindex LAYOUT_LAKE_VERITY
	return


LakeVerity_EventScript_Sign::
# 18 "data/maps/LakeVerity/scripts.pory"
	msgbox LakeVerity_Text_Sign, MSGBOX_SIGN
	end


LakeVerity_Text_Sign::
# 22 "data/maps/LakeVerity/scripts.pory"
	.string "Lake Verity Ahead\p"
	.string "According to legend, this lake is home\n"
	.string "to the Pokemon said to be “The Being of\l"
	.string "Emotion.”\p"
	.string "It is because of this Pokemon that\n"
	.string "people can experience sorrow and joy.$"
