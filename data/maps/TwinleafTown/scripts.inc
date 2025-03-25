TwinleafTown_MapScripts::
# 2 "data/maps/TwinleafTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TwinleafTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

TwinleafTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/TwinleafTown/scripts.pory"
	setflag FLAG_VISITED_TWINLEAF_TOWN
	return


TwinleafTown_EventScript_TownSign::
# 8 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Text_TownSign, MSGBOX_SIGN
	return


TwinleafTown_Text_Technology::
# 11 "data/maps/TwinleafTown/scripts.pory"
	.string "Technology just blows me away!\p"
	.string "I mean, now you can play with people\n"
	.string "around the world...wirelessly!$"

TwinleafTown_Text_Woman_WildPokemon::
# 15 "data/maps/TwinleafTown/scripts.pory"
	.string "It's true that wild Pokemon do attack\n"
	.string "people sometimes...\p"
	.string "But, Pokemon also open their hearts to\n"
	.string "you, so you can become friends.$"

TwinleafTown_Text_Woman_OhAPokemon::
# 19 "data/maps/TwinleafTown/scripts.pory"
	.string "Oh! A Pokemon!\n"
	.string "You look good together!$"

TwinleafTown_Text_Woman_Pokedex::
# 23 "data/maps/TwinleafTown/scripts.pory"
	.string "Oh, you're helping put together a\n"
	.string "Pokedex?\p"
	.string "That means you're going to travel all\n"
	.string "over the place with Pokemon!\p"
	.string "That sounds like a lot of fun!\n"
	.string "I'm a little envious, to be honest!$"

TwinleafTown_Text_Man_BarryLookingForYou::
# 27 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "Barry was looking for you.\p"
	.string "I think he's home now.\n"
	.string "Why don't you go check it out?$"

TwinleafTown_Text_Man_BarryRanOff1::
# 31 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "You're looking for Barry?\n"
	.string "He just went tearing off a little while\l"
	.string "ago.\n"
	.string "He's probably not gone too far.\n"
	.string "Why don't you go chase after him?$"

TwinleafTown_Text_Man_BarryRanOff2::
# 35 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry? He went tearing off in a huge\n"
	.string "rush a while ago.\p"
	.string "...Ouch. He ran right into me earlier. It's\n"
	.string "still hurting.\p"
	.string "That kid's growing up tough.$"

TwinleafTown_Text_TownSign::
# 39 "data/maps/TwinleafTown/scripts.pory"
	.string "Twinleaf Town\n"
	.string "Fresh and Free!$"

TwinleafTown_Text_PlayersMailbox::
# 43 "data/maps/TwinleafTown/scripts.pory"
	.string "{PLAYER}'s House$"

TwinleafTown_Text_BarrysMailbox::
# 47 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry's House$"
