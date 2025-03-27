#ifndef GUARD_CONSTANTS_FLAGS_H
#define GUARD_CONSTANTS_FLAGS_H

#include "constants/opponents.h"
#include "constants/rematches.h"

// Temporary Flags
// These temporary flags are are cleared every time a map is loaded. They are used
// for things like shortening an NPCs introduction text if the player already spoke
// to them once.
#define TEMP_FLAGS_START 0x0
#define FLAG_TEMP_1      (TEMP_FLAGS_START + 0x1)
#define FLAG_TEMP_2      (TEMP_FLAGS_START + 0x2)
#define FLAG_TEMP_3      (TEMP_FLAGS_START + 0x3)
#define FLAG_TEMP_4      (TEMP_FLAGS_START + 0x4)
#define FLAG_TEMP_5      (TEMP_FLAGS_START + 0x5)  // Unused Flag
#define FLAG_TEMP_6      (TEMP_FLAGS_START + 0x6)  // Unused Flag
#define FLAG_TEMP_7      (TEMP_FLAGS_START + 0x7)  // Unused Flag
#define FLAG_TEMP_8      (TEMP_FLAGS_START + 0x8)  // Unused Flag
#define FLAG_TEMP_9      (TEMP_FLAGS_START + 0x9)  // Unused Flag
#define FLAG_TEMP_A      (TEMP_FLAGS_START + 0xA)  // Unused Flag
#define FLAG_TEMP_B      (TEMP_FLAGS_START + 0xB)  // Unused Flag
#define FLAG_TEMP_C      (TEMP_FLAGS_START + 0xC)  // Unused Flag
#define FLAG_TEMP_D      (TEMP_FLAGS_START + 0xD)  // Unused Flag
#define FLAG_TEMP_E      (TEMP_FLAGS_START + 0xE)  // When set, follower pokemon won't be spawned
#define FLAG_TEMP_F      (TEMP_FLAGS_START + 0xF)  // Unused Flag
#define FLAG_TEMP_10     (TEMP_FLAGS_START + 0x10) // Unused Flag
#define FLAG_TEMP_11     (TEMP_FLAGS_START + 0x11)
#define FLAG_TEMP_12     (TEMP_FLAGS_START + 0x12)
#define FLAG_TEMP_13     (TEMP_FLAGS_START + 0x13)
#define FLAG_TEMP_14     (TEMP_FLAGS_START + 0x14)
#define FLAG_TEMP_15     (TEMP_FLAGS_START + 0x15)
#define FLAG_TEMP_16     (TEMP_FLAGS_START + 0x16)
#define FLAG_TEMP_17     (TEMP_FLAGS_START + 0x17)
#define FLAG_TEMP_18     (TEMP_FLAGS_START + 0x18)
#define FLAG_TEMP_19     (TEMP_FLAGS_START + 0x19)
#define FLAG_TEMP_1A     (TEMP_FLAGS_START + 0x1A)
#define FLAG_TEMP_1B     (TEMP_FLAGS_START + 0x1B)
#define FLAG_TEMP_1C     (TEMP_FLAGS_START + 0x1C)
#define FLAG_TEMP_1D     (TEMP_FLAGS_START + 0x1D)
#define FLAG_TEMP_1E     (TEMP_FLAGS_START + 0x1E)
#define FLAG_TEMP_1F     (TEMP_FLAGS_START + 0x1F)
#define TEMP_FLAGS_END   FLAG_TEMP_1F
#define NUM_TEMP_FLAGS   (TEMP_FLAGS_END - TEMP_FLAGS_START + 1)

#define FLAG_MET_CYRUS_LAKE_VERITY    0x20
#define FLAG_UNUSED_0x021    0x21 // Unused Flag
#define FLAG_UNUSED_0x022    0x22 // Unused Flag
#define FLAG_UNUSED_0x023    0x23 // Unused Flag
#define FLAG_UNUSED_0x024    0x24 // Unused Flag
#define FLAG_UNUSED_0x025    0x25 // Unused Flag
#define FLAG_UNUSED_0x026    0x26 // Unused Flag
#define FLAG_UNUSED_0x027    0x27 // Unused Flag
#define FLAG_UNUSED_0x028    0x28 // Unused Flag
#define FLAG_UNUSED_0x029    0x29 // Unused Flag
#define FLAG_UNUSED_0x02A    0x2A // Unused Flag
#define FLAG_UNUSED_0x02B    0x2B // Unused Flag
#define FLAG_UNUSED_0x02C    0x2C // Unused Flag
#define FLAG_UNUSED_0x02D    0x2D // Unused Flag
#define FLAG_UNUSED_0x02E    0x2E // Unused Flag
#define FLAG_UNUSED_0x02F    0x2F // Unused Flag
#define FLAG_UNUSED_0x030    0x30 // Unused Flag
#define FLAG_UNUSED_0x031    0x31 // Unused Flag
#define FLAG_UNUSED_0x032    0x32 // Unused Flag
#define FLAG_UNUSED_0x033    0x33 // Unused Flag
#define FLAG_UNUSED_0x034    0x34 // Unused Flag
#define FLAG_UNUSED_0x035    0x35 // Unused Flag
#define FLAG_UNUSED_0x036    0x36 // Unused Flag
#define FLAG_UNUSED_0x037    0x37 // Unused Flag
#define FLAG_UNUSED_0x038    0x38 // Unused Flag
#define FLAG_UNUSED_0x039    0x39 // Unused Flag
#define FLAG_UNUSED_0x03A    0x3A // Unused Flag
#define FLAG_UNUSED_0x03B    0x3B // Unused Flag
#define FLAG_UNUSED_0x03C    0x3C // Unused Flag
#define FLAG_UNUSED_0x03D    0x3D // Unused Flag
#define FLAG_UNUSED_0x03E    0x3E // Unused Flag
#define FLAG_UNUSED_0x03F    0x3F // Unused Flag
#define FLAG_UNUSED_0x040    0x40 // Unused Flag
#define FLAG_UNUSED_0x041    0x41 // Unused Flag
#define FLAG_UNUSED_0x042    0x42 // Unused Flag
#define FLAG_UNUSED_0x043    0x43 // Unused Flag
#define FLAG_UNUSED_0x044    0x44 // Unused Flag
#define FLAG_UNUSED_0x045    0x45 // Unused Flag
#define FLAG_UNUSED_0x046    0x46 // Unused Flag
#define FLAG_UNUSED_0x047    0x47 // Unused Flag
#define FLAG_UNUSED_0x048    0x48 // Unused Flag
#define FLAG_UNUSED_0x049    0x49 // Unused Flag
#define FLAG_UNUSED_0x04A    0x4A // Unused Flag
#define FLAG_UNUSED_0x04B    0x4B // Unused Flag
#define FLAG_UNUSED_0x04C    0x4C // Unused Flag
#define FLAG_UNUSED_0x04D    0x4D // Unused Flag
#define FLAG_UNUSED_0x04E    0x4E // Unused Flag
#define FLAG_UNUSED_0x04F    0x4F // Unused Flag
#define FLAG_UNUSED_0x050    0x50 // hoenn only flag

// Scripts
#define FLAG_SET_WALL_CLOCK                      0x51
#define FLAG_RESCUED_BIRCH                       0x52 // hoenn only flag
#define FLAG_LEGENDARIES_IN_SOOTOPOLIS           0x53 // hoenn only flag

#define FLAG_UNUSED_0x054                    0x54  // Unused Flag
#define FLAG_UNUSED_0x055                    0x55  // Unused Flag

#define FLAG_HIDE_CONTEST_POKE_BALL          0x56  // Always set after new game, object it hides is added directly
#define FLAG_MET_RIVAL_MOM                   0x57 // hoenn only flag
#define FLAG_BIRCH_AIDE_MET                  0x58 // hoenn only flag
#define FLAG_DECLINED_BIKE                   0x59 // hoenn only flag
#define FLAG_RECEIVED_BIKE                   0x5A // hoenn only flag
#define FLAG_WATTSON_REMATCH_AVAILABLE       0x5B // hoenn only flag
#define FLAG_COLLECTED_ALL_SILVER_SYMBOLS    0x5C
#define FLAG_GOOD_LUCK_SAFARI_ZONE           0x5D // Set after talking to NPC blocking Safari Zone entrance/exit once.
#define FLAG_RECEIVED_WAILMER_PAIL           0x5E // hoenn only flag
#define FLAG_RECEIVED_POKEBLOCK_CASE         0x5F // hoenn only flag
#define FLAG_RECEIVED_SECRET_POWER           0x60 // hoenn only flag
#define FLAG_MET_TEAM_AQUA_HARBOR            0x61 // hoenn only flag
#define FLAG_TV_EXPLAINED                    0x62 // hoenn only flag
#define FLAG_MAUVILLE_GYM_BARRIERS_STATE     0x63 // hoenn only flag
#define FLAG_MOSSDEEP_GYM_SWITCH_1           0x64 // Leftover from the RS version of Mossdeep Gym, functionally unused
#define FLAG_MOSSDEEP_GYM_SWITCH_2           0x65 //
#define FLAG_MOSSDEEP_GYM_SWITCH_3           0x66 //
#define FLAG_MOSSDEEP_GYM_SWITCH_4           0x67 //

#define FLAG_UNUSED_0x068                    0x68  // Unused Flag

#define FLAG_OCEANIC_MUSEUM_MET_REPORTER     0x69 // hoenn only flag
#define FLAG_RECEIVED_HM_STRENGTH            0x6A
#define FLAG_RECEIVED_HM_ROCK_SMASH          0x6B
#define FLAG_WHITEOUT_TO_LAVARIDGE           0x6C // Set after defeating Flannery, so the player cant white out from poison before receiving Go Goggles
#define FLAG_RECEIVED_HM_FLASH               0x6D
#define FLAG_RECEIVED_HM_FLY                 0x6E
#define FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT  0x6F // hoenn only flag
#define FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE  0x70 // hoenn only flag
#define FLAG_UNUSED_RS_LEGENDARY_BATTLE_DONE 0x71 // Unused Flag. Used in R/S to indicate whether player defeated or caught Groudon/Kyogre in Cave of Origin.
#define FLAG_SCOTT_CALL_BATTLE_FRONTIER      0x72 // Used in order to activate a phone call from Scott, inviting the player to the SS Tidal.
#define FLAG_RECEIVED_METEORITE              0x73 // hoenn only flag
#define FLAG_ADVENTURE_STARTED               0x74 // RECEIVED Pokédex.
#define FLAG_DEFEATED_MAGMA_SPACE_CENTER     0x75 // Set when Team Magma is defeated at Mossdeep's Space Center.
#define FLAG_MET_HIDDEN_POWER_GIVER          0x76

#define FLAG_CANCEL_BATTLE_ROOM_CHALLENGE    0x77

#define FLAG_LANDMARK_MIRAGE_TOWER           0x78 // hoenn only flag
#define FLAG_RECEIVED_TM_BRICK_BREAK         0x79
#define FLAG_RECEIVED_HM_SURF                0x7A
#define FLAG_RECEIVED_HM_DIVE                0x7B
#define FLAG_REGISTER_RIVAL_POKENAV          0x7C // hoenn only flag
#define FLAG_DEFEATED_RIVAL_ROUTE_104        0x7D // hoenn only flag
#define FLAG_DEFEATED_WALLY_VICTORY_ROAD     0x7E // hoenn only flag
#define FLAG_MET_PRETTY_PETAL_SHOP_OWNER     0x7F // hoenn only flag
#define FLAG_ENABLE_ROXANNE_FIRST_CALL       0x80 // Set after defeating Brawly. This will activate a call with Roxanne in order to register her.
#define FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN  0x81 // hoenn only flag
#define FLAG_DEFEATED_RIVAL_ROUTE103         0x82 // hoenn only flag
#define FLAG_RECEIVED_DOLL_LANETTE           0x83 // hoenn only flag
#define FLAG_RECEIVED_POTION_ROUTE_201       0x84 // repurposed for route 201 mart employee instead of oldale
#define FLAG_RECEIVED_AMULET_COIN            0x85
#define FLAG_PENDING_DAYCARE_EGG             0x86
#define FLAG_THANKED_FOR_PLAYING_WITH_WALLY  0x87 // hoenn only flag
#define FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL 0x88 // Set after defeating Wally outside Mauville Gym. Will activate a call later to register Wally.
#define FLAG_RECEIVED_HM_CUT                 0x89
#define FLAG_SCOTT_CALL_FORTREE_GYM          0x8A // Triggers call from Scott after defeating Winona
#define FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY   0x8B // hoenn only flag
#define FLAG_RECEIVED_6_SODA_POP             0x8C // hoenn only flag
#define FLAG_DEFEATED_SEASHORE_HOUSE         0x8D // hoenn only flag
#define FLAG_DEVON_GOODS_STOLEN              0x8E // hoenn only flag
#define FLAG_RECOVERED_DEVON_GOODS           0x8F // hoenn only flag
#define FLAG_RETURNED_DEVON_GOODS            0x90 // hoenn only flag
#define FLAG_CAUGHT_LUGIA                    0x91
#define FLAG_CAUGHT_HO_OH                    0x92
#define FLAG_MR_BRINEY_SAILING_INTRO         0x93 // hoenn only flag
#define FLAG_DOCK_REJECTED_DEVON_GOODS       0x94 // hoenn only flag
#define FLAG_DELIVERED_DEVON_GOODS           0x95 // hoenn only flag
#define FLAG_RECEIVED_CONTEST_PASS           0x96 // Unused, leftover from R/S
#define FLAG_RECEIVED_CASTFORM               0x97
#define FLAG_RECEIVED_SUPER_ROD              0x98
#define FLAG_RUSTBORO_NPC_TRADE_COMPLETED    0x99 // hoenn only flag
#define FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED  0x9A // hoenn only flag
#define FLAG_FORTREE_NPC_TRADE_COMPLETED     0x9B // hoenn only flag
#define FLAG_BATTLE_FRONTIER_TRADE_DONE      0x9C
#define FLAG_FORCE_MIRAGE_TOWER_VISIBLE      0x9D // hoenn only flag
#define FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE   0x9E // hoenn only flag
#define FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN 0x9F // hoenn only flag
#define FLAG_COOL_PAINTING_MADE              0xA0 // hoenn only flag
#define FLAG_BEAUTY_PAINTING_MADE            0xA1 // hoenn only flag
#define FLAG_CUTE_PAINTING_MADE              0xA2 // hoenn only flag
#define FLAG_SMART_PAINTING_MADE             0xA3 // hoenn only flag
#define FLAG_TOUGH_PAINTING_MADE             0xA4 // hoenn only flag
#define FLAG_RECEIVED_TM_ROCK_TOMB           0xA5
#define FLAG_RECEIVED_TM_BULK_UP             0xA6
#define FLAG_RECEIVED_TM_SHOCK_WAVE          0xA7
#define FLAG_RECEIVED_TM_OVERHEAT            0xA8
#define FLAG_RECEIVED_TM_FACADE              0xA9
#define FLAG_RECEIVED_TM_AERIAL_ACE          0xAA
#define FLAG_RECEIVED_TM_CALM_MIND           0xAB
#define FLAG_RECEIVED_TM_WATER_PULSE         0xAC
#define FLAG_HIDE_SECRET_BASE_TRAINER        0xAD
#define FLAG_DECORATION_1                    0xAE
#define FLAG_DECORATION_2                    0xAF
#define FLAG_DECORATION_3                    0xB0
#define FLAG_DECORATION_4                    0xB1
#define FLAG_DECORATION_5                    0xB2
#define FLAG_DECORATION_6                    0xB3
#define FLAG_DECORATION_7                    0xB4
#define FLAG_DECORATION_8                    0xB5
#define FLAG_DECORATION_9                    0xB6
#define FLAG_DECORATION_10                   0xB7
#define FLAG_DECORATION_11                   0xB8
#define FLAG_DECORATION_12                   0xB9
#define FLAG_DECORATION_13                   0xBA
#define FLAG_DECORATION_14                   0xBB
#define FLAG_RECEIVED_POKENAV                0xBC
#define FLAG_DELIVERED_STEVEN_LETTER         0xBD // hoenn only flag
#define FLAG_DEFEATED_WALLY_MAUVILLE         0xBE // hoenn only flag
#define FLAG_DEFEATED_GRUNT_SPACE_CENTER_1F  0xBF // hoenn only flag
#define FLAG_RECEIVED_SUN_STONE_MOSSDEEP     0xC0 // hoenn only flag
#define FLAG_WALLY_SPEECH                    0xC1 // hoenn only flag
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1   0xC2 // Leftover from the RS version of Puzzle Room 7, functionally unused
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2   0xC3 //
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3   0xC4 //
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4   0xC5 //
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5   0xC6 //
#define FLAG_RUSTURF_TUNNEL_OPENED           0xC7 // hoenn only flag
#define FLAG_RECEIVED_RED_SCARF              0xC8
#define FLAG_RECEIVED_BLUE_SCARF             0xC9
#define FLAG_RECEIVED_PINK_SCARF             0xCA
#define FLAG_RECEIVED_GREEN_SCARF            0xCB
#define FLAG_RECEIVED_YELLOW_SCARF           0xCC
#define FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER    0xCD // hoenn only flag
#define FLAG_ENCOUNTERED_LATIAS_OR_LATIOS    0xCE
#define FLAG_MET_ARCHIE_METEOR_FALLS         0xCF // hoenn only flag
#define FLAG_GOT_BASEMENT_KEY_FROM_WATTSON   0xD0 // hoenn only flag
#define FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON 0xD1 // hoenn only flag
#define FLAG_FAN_CLUB_STRENGTH_SHARED        0xD2 // Set when you rate the strength of another trainer in Lilycove's Trainer Fan Club.
#define FLAG_DEFEATED_RIVAL_RUSTBORO         0xD3 // hoenn only flag
#define FLAG_RECEIVED_RED_OR_BLUE_ORB        0xD4 // hoenn only flag
#define FLAG_RECEIVED_PREMIER_BALL_RUSTBORO  0xD5 // hoenn only flag
#define FLAG_ENABLE_WALLY_MATCH_CALL         0xD6 // hoenn only flag
#define FLAG_ENABLE_SCOTT_MATCH_CALL         0xD7 // hoenn only flag
#define FLAG_ENABLE_MOM_MATCH_CALL           0xD8 // hoenn only flag
#define FLAG_MET_DIVING_TREASURE_HUNTER      0xD9 // hoenn only flag
#define FLAG_MET_WAILMER_TRAINER             0xDA // hoenn only flag
#define FLAG_EVIL_LEADER_PLEASE_STOP         0xDB // hoenn only flag

#define FLAG_NEVER_SET_0x0DC                 0xDC // This flag is read, but never written to

#define FLAG_RECEIVED_GO_GOGGLES             0xDD // hoenn only flag
#define FLAG_WINGULL_SENT_ON_ERRAND          0xDE // hoenn only flag
#define FLAG_RECEIVED_MENTAL_HERB            0xDF // hoenn only flag
#define FLAG_WINGULL_DELIVERED_MAIL          0xE0 // hoenn only flag
#define FLAG_RECEIVED_20_COINS               0xE1 // hoenn only flag
#define FLAG_RECEIVED_STARTER_DOLL           0xE2 // hoenn only flag
#define FLAG_RECEIVED_GOOD_ROD               0xE3
#define FLAG_REGI_DOORS_OPENED               0xE4
#define FLAG_RECEIVED_TM_RETURN              0xE5
#define FLAG_RECEIVED_TM_SLUDGE_BOMB         0xE6
#define FLAG_RECEIVED_TM_ROAR                0xE7
#define FLAG_RECEIVED_TM_GIGA_DRAIN          0xE8

#define FLAG_UNUSED_0x0E9                    0xE9 // Unused Flag

#define FLAG_RECEIVED_TM_REST                0xEA
#define FLAG_RECEIVED_TM_ATTRACT             0xEB
#define FLAG_RECEIVED_GLASS_ORNAMENT         0xEC
#define FLAG_RECEIVED_SILVER_SHIELD          0xED
#define FLAG_RECEIVED_GOLD_SHIELD            0xEE
#define FLAG_USED_STORAGE_KEY                0xEF // hoenn only flag
#define FLAG_USED_ROOM_1_KEY                 0xF0 // hoenn only flag
#define FLAG_USED_ROOM_2_KEY                 0xF1 // hoenn only flag
#define FLAG_USED_ROOM_4_KEY                 0xF2 // hoenn only flag
#define FLAG_USED_ROOM_6_KEY                 0xF3 // hoenn only flag
#define FLAG_MET_PROF_COZMO                  0xF4 // hoenn only flag
#define FLAG_RECEIVED_WAILMER_DOLL           0xF5 // hoenn only flag
#define FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104 0xF6 // hoenn only flag
#define FLAG_DEFEATED_SS_TIDAL_TRAINERS      0xF7 // hoenn only flag
#define FLAG_RECEIVED_SPELON_BERRY           0xF8
#define FLAG_RECEIVED_PAMTRE_BERRY           0xF9
#define FLAG_RECEIVED_WATMEL_BERRY           0xFA
#define FLAG_RECEIVED_DURIN_BERRY            0xFB
#define FLAG_RECEIVED_BELUE_BERRY            0xFC
#define FLAG_ENABLE_RIVAL_MATCH_CALL         0xFD
#define FLAG_RECEIVED_CHARCOAL               0xFE
#define FLAG_LATIOS_OR_LATIAS_ROAMING        0xFF
#define FLAG_RECEIVED_REPEAT_BALL            0x100
#define FLAG_RECEIVED_OLD_ROD                0x101
#define FLAG_RECEIVED_COIN_CASE              0x102
#define FLAG_RETURNED_RED_OR_BLUE_ORB        0x103
#define FLAG_RECEIVED_TM_SNATCH              0x104
#define FLAG_RECEIVED_TM_DIG                 0x105
#define FLAG_RECEIVED_TM_BULLET_SEED         0x106
#define FLAG_ENTERED_ELITE_FOUR              0x107
#define FLAG_RECEIVED_TM_HIDDEN_POWER        0x108
#define FLAG_RECEIVED_TM_TORMENT             0x109
#define FLAG_RECEIVED_LAVARIDGE_EGG          0x10A // hoenn only flag
#define FLAG_RECEIVED_REVIVED_FOSSIL_MON     0x10B
#define FLAG_SECRET_BASE_REGISTRY_ENABLED    0x10C
#define FLAG_RECEIVED_TM_THIEF               0x10D
#define FLAG_CONTEST_SKETCH_CREATED          0x10E  // Set but never read
#define FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE   0x10F
#define FLAG_RECEIVED_EXP_SHARE              0x110
#define FLAG_POKERUS_EXPLAINED               0x111
#define FLAG_RECEIVED_RUNNING_SHOES          0x112
#define FLAG_RECEIVED_QUICK_CLAW             0x113
#define FLAG_RECEIVED_KINGS_ROCK             0x114
#define FLAG_RECEIVED_MACHO_BRACE            0x115
#define FLAG_RECEIVED_SOOTHE_BELL            0x116
#define FLAG_RECEIVED_WHITE_HERB             0x117
#define FLAG_RECEIVED_SOFT_SAND              0x118
#define FLAG_ENABLE_PROF_BIRCH_MATCH_CALL    0x119 // hoenn only flag
#define FLAG_RECEIVED_CLEANSE_TAG            0x11A
#define FLAG_RECEIVED_FOCUS_BAND             0x11B
#define FLAG_DECLINED_WALLY_BATTLE_MAUVILLE  0x11C // hoenn only flag
#define FLAG_RECEIVED_DEVON_SCOPE            0x11D // hoenn only flag
#define FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE  0x11E // hoenn only flag
#define FLAG_MET_DEVON_EMPLOYEE              0x11F // hoenn only flag
#define FLAG_MET_RIVAL_RUSTBORO              0x120 // hoenn only flag
#define FLAG_RECEIVED_SILK_SCARF             0x121 // hoenn only flag
#define FLAG_NOT_READY_FOR_BATTLE_ROUTE_120  0x122 // hoenn only flag
#define FLAG_RECEIVED_SS_TICKET              0x123 // hoenn only flag
#define FLAG_MET_RIVAL_LILYCOVE              0x124 // hoenn only flag
#define FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE 0x125 // hoenn only flag
#define FLAG_EXCHANGED_SCANNER               0x126 // hoenn only flag
#define FLAG_KECLEON_FLED_FORTREE            0x127 // hoenn only flag
#define FLAG_PETALBURG_MART_EXPANDED_ITEMS   0x128 // hoenn only flag
#define FLAG_RECEIVED_MIRACLE_SEED           0x129
#define FLAG_RECEIVED_BELDUM                 0x12A
#define FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK   0x12B
#define FLAG_MET_FANCLUB_YOUNGER_BROTHER     0x12C // hoenn only flag
#define FLAG_RIVAL_LEFT_FOR_ROUTE103         0x12D // hoenn only flag
#define FLAG_OMIT_DIVE_FROM_STEVEN_LETTER    0x12E // hoenn only flag
#define FLAG_HAS_MATCH_CALL                  0x12F
#define FLAG_ADDED_MATCH_CALL_TO_POKENAV     0x130
#define FLAG_REGISTERED_STEVEN_POKENAV       0x131
#define FLAG_ENABLE_NORMAN_MATCH_CALL        0x132
#define FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN 0x133 // Set after you follow Steven to the entrance of the Cave of Origin.
#define FLAG_MET_ARCHIE_SOOTOPOLIS           0x134 // hoenn only flag
#define FLAG_MET_MAXIE_SOOTOPOLIS            0x135 // hoenn only flag
#define FLAG_MET_SCOTT_RUSTBORO              0x136 // hoenn only flag
#define FLAG_WALLACE_GOES_TO_SKY_PILLAR      0x137 // Set after speaking to Wallace within the Cave of Origin.
#define FLAG_RECEIVED_HM_WATERFALL           0x138
#define FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS    0x139 // hoenn only flag
#define FLAG_RECEIVED_AURORA_TICKET          0x13A
#define FLAG_RECEIVED_MYSTIC_TICKET          0x13B
#define FLAG_RECEIVED_OLD_SEA_MAP            0x13C
#define FLAG_WONDER_CARD_UNUSED_1            0x13D // These Wonder Card flags are referenced but never set
#define FLAG_WONDER_CARD_UNUSED_2            0x13E
#define FLAG_WONDER_CARD_UNUSED_3            0x13F
#define FLAG_WONDER_CARD_UNUSED_4            0x140
#define FLAG_WONDER_CARD_UNUSED_5            0x141
#define FLAG_WONDER_CARD_UNUSED_6            0x142
#define FLAG_WONDER_CARD_UNUSED_7            0x143
#define FLAG_WONDER_CARD_UNUSED_8            0x144
#define FLAG_WONDER_CARD_UNUSED_9            0x145
#define FLAG_WONDER_CARD_UNUSED_10           0x146
#define FLAG_WONDER_CARD_UNUSED_11           0x147
#define FLAG_WONDER_CARD_UNUSED_12           0x148
#define FLAG_WONDER_CARD_UNUSED_13           0x149
#define FLAG_WONDER_CARD_UNUSED_14           0x14A
#define FLAG_WONDER_CARD_UNUSED_15           0x14B
#define FLAG_WONDER_CARD_UNUSED_16           0x14C
#define FLAG_WONDER_CARD_UNUSED_17           0x14D
#define NUM_WONDER_CARD_FLAGS                (1 + FLAG_WONDER_CARD_UNUSED_17 - FLAG_RECEIVED_AURORA_TICKET)

#define FLAG_MIRAGE_TOWER_VISIBLE            0x14E
#define FLAG_CHOSE_ROOT_FOSSIL               0x14F
#define FLAG_CHOSE_CLAW_FOSSIL               0x150
#define FLAG_RECEIVED_POWDER_JAR             0x151

#define FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER 0x152

#define FLAG_MET_BATTLE_FRONTIER_BREEDER     0x153
#define FLAG_MET_BATTLE_FRONTIER_MANIAC      0x154
#define FLAG_ENTERED_CONTEST                 0x155
#define FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN  0x156
#define FLAG_MET_BATTLE_FRONTIER_GAMBLER     0x157
#define FLAG_ENABLE_MR_STONE_POKENAV         0x158
#define FLAG_NURSE_MENTIONS_GOLD_CARD        0x159
#define FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR  0x15A
#define FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR 0x15B

// Flags for whether a rematchable trainer has been registered in the player's Match Call.
// Most are used implicitly by adding their REMATCH_* id to TRAINER_REGISTERED_FLAGS_START.
// Some Match Call entries (like those for gym leaders, Wally, and all non-trainer NPCs like Prof. Birch)
// have their own separate flag that needs to be set to be enabled; see src/pokenav_match_call_data.c
#define TRAINER_REGISTERED_FLAGS_START       0x15C
#define FLAG_REGISTERED_ROSE                 (TRAINER_REGISTERED_FLAGS_START + REMATCH_ROSE)
#define FLAG_REGISTERED_ANDRES               (TRAINER_REGISTERED_FLAGS_START + REMATCH_ANDRES)
#define FLAG_REGISTERED_DUSTY                (TRAINER_REGISTERED_FLAGS_START + REMATCH_DUSTY)
#define FLAG_REGISTERED_LOLA                 (TRAINER_REGISTERED_FLAGS_START + REMATCH_LOLA)
#define FLAG_REGISTERED_RICKY                (TRAINER_REGISTERED_FLAGS_START + REMATCH_RICKY)
#define FLAG_REGISTERED_LILA_AND_ROY         (TRAINER_REGISTERED_FLAGS_START + REMATCH_LILA_AND_ROY)
#define FLAG_REGISTERED_CRISTIN              (TRAINER_REGISTERED_FLAGS_START + REMATCH_CRISTIN)
#define FLAG_REGISTERED_BROOKE               (TRAINER_REGISTERED_FLAGS_START + REMATCH_BROOKE)
#define FLAG_REGISTERED_WILTON               (TRAINER_REGISTERED_FLAGS_START + REMATCH_WILTON)
#define FLAG_REGISTERED_VALERIE              (TRAINER_REGISTERED_FLAGS_START + REMATCH_VALERIE)
#define FLAG_REGISTERED_CINDY                (TRAINER_REGISTERED_FLAGS_START + REMATCH_CINDY)
#define FLAG_REGISTERED_THALIA               (TRAINER_REGISTERED_FLAGS_START + REMATCH_THALIA)
#define FLAG_REGISTERED_JESSICA              (TRAINER_REGISTERED_FLAGS_START + REMATCH_JESSICA)
#define FLAG_REGISTERED_WINSTON              (TRAINER_REGISTERED_FLAGS_START + REMATCH_WINSTON)
#define FLAG_REGISTERED_STEVE                (TRAINER_REGISTERED_FLAGS_START + REMATCH_STEVE)
#define FLAG_REGISTERED_TONY                 (TRAINER_REGISTERED_FLAGS_START + REMATCH_TONY)
#define FLAG_REGISTERED_NOB                  (TRAINER_REGISTERED_FLAGS_START + REMATCH_NOB)
#define FLAG_REGISTERED_KOJI                 (TRAINER_REGISTERED_FLAGS_START + REMATCH_KOJI)
#define FLAG_REGISTERED_FERNANDO             (TRAINER_REGISTERED_FLAGS_START + REMATCH_FERNANDO)
#define FLAG_REGISTERED_DALTON               (TRAINER_REGISTERED_FLAGS_START + REMATCH_DALTON)
#define FLAG_REGISTERED_BERNIE               (TRAINER_REGISTERED_FLAGS_START + REMATCH_BERNIE)
#define FLAG_REGISTERED_ETHAN                (TRAINER_REGISTERED_FLAGS_START + REMATCH_ETHAN)
#define FLAG_REGISTERED_JOHN_AND_JAY         (TRAINER_REGISTERED_FLAGS_START + REMATCH_JOHN_AND_JAY)
#define FLAG_REGISTERED_JEFFREY              (TRAINER_REGISTERED_FLAGS_START + REMATCH_JEFFREY)
#define FLAG_REGISTERED_CAMERON              (TRAINER_REGISTERED_FLAGS_START + REMATCH_CAMERON)
#define FLAG_REGISTERED_JACKI                (TRAINER_REGISTERED_FLAGS_START + REMATCH_JACKI)
#define FLAG_REGISTERED_WALTER               (TRAINER_REGISTERED_FLAGS_START + REMATCH_WALTER)
#define FLAG_REGISTERED_KAREN                (TRAINER_REGISTERED_FLAGS_START + REMATCH_KAREN)
#define FLAG_REGISTERED_JERRY                (TRAINER_REGISTERED_FLAGS_START + REMATCH_JERRY)
#define FLAG_REGISTERED_ANNA_AND_MEG         (TRAINER_REGISTERED_FLAGS_START + REMATCH_ANNA_AND_MEG)
#define FLAG_REGISTERED_ISABEL               (TRAINER_REGISTERED_FLAGS_START + REMATCH_ISABEL)
#define FLAG_REGISTERED_MIGUEL               (TRAINER_REGISTERED_FLAGS_START + REMATCH_MIGUEL)
#define FLAG_REGISTERED_TIMOTHY              (TRAINER_REGISTERED_FLAGS_START + REMATCH_TIMOTHY)
#define FLAG_REGISTERED_SHELBY               (TRAINER_REGISTERED_FLAGS_START + REMATCH_SHELBY)
#define FLAG_REGISTERED_CALVIN               (TRAINER_REGISTERED_FLAGS_START + REMATCH_CALVIN)
#define FLAG_REGISTERED_ELLIOT               (TRAINER_REGISTERED_FLAGS_START + REMATCH_ELLIOT)
#define FLAG_REGISTERED_ISAIAH               (TRAINER_REGISTERED_FLAGS_START + REMATCH_ISAIAH)
#define FLAG_REGISTERED_MARIA                (TRAINER_REGISTERED_FLAGS_START + REMATCH_MARIA)
#define FLAG_REGISTERED_ABIGAIL              (TRAINER_REGISTERED_FLAGS_START + REMATCH_ABIGAIL)
#define FLAG_REGISTERED_DYLAN                (TRAINER_REGISTERED_FLAGS_START + REMATCH_DYLAN)
#define FLAG_REGISTERED_KATELYN              (TRAINER_REGISTERED_FLAGS_START + REMATCH_KATELYN)
#define FLAG_REGISTERED_BENJAMIN             (TRAINER_REGISTERED_FLAGS_START + REMATCH_BENJAMIN)
#define FLAG_REGISTERED_PABLO                (TRAINER_REGISTERED_FLAGS_START + REMATCH_PABLO)
#define FLAG_REGISTERED_NICOLAS              (TRAINER_REGISTERED_FLAGS_START + REMATCH_NICOLAS)
#define FLAG_REGISTERED_ROBERT               (TRAINER_REGISTERED_FLAGS_START + REMATCH_ROBERT)
#define FLAG_REGISTERED_LAO                  (TRAINER_REGISTERED_FLAGS_START + REMATCH_LAO)
#define FLAG_REGISTERED_CYNDY                (TRAINER_REGISTERED_FLAGS_START + REMATCH_CYNDY)
#define FLAG_REGISTERED_MADELINE             (TRAINER_REGISTERED_FLAGS_START + REMATCH_MADELINE)
#define FLAG_REGISTERED_JENNY                (TRAINER_REGISTERED_FLAGS_START + REMATCH_JENNY)
#define FLAG_REGISTERED_DIANA                (TRAINER_REGISTERED_FLAGS_START + REMATCH_DIANA)
#define FLAG_REGISTERED_AMY_AND_LIV          (TRAINER_REGISTERED_FLAGS_START + REMATCH_AMY_AND_LIV)
#define FLAG_REGISTERED_ERNEST               (TRAINER_REGISTERED_FLAGS_START + REMATCH_ERNEST)
#define FLAG_REGISTERED_CORY                 (TRAINER_REGISTERED_FLAGS_START + REMATCH_CORY)
#define FLAG_REGISTERED_EDWIN                (TRAINER_REGISTERED_FLAGS_START + REMATCH_EDWIN)
#define FLAG_REGISTERED_LYDIA                (TRAINER_REGISTERED_FLAGS_START + REMATCH_LYDIA)
#define FLAG_REGISTERED_ISAAC                (TRAINER_REGISTERED_FLAGS_START + REMATCH_ISAAC)
#define FLAG_REGISTERED_GABRIELLE            (TRAINER_REGISTERED_FLAGS_START + REMATCH_GABRIELLE)
#define FLAG_REGISTERED_CATHERINE            (TRAINER_REGISTERED_FLAGS_START + REMATCH_CATHERINE)
#define FLAG_REGISTERED_JACKSON              (TRAINER_REGISTERED_FLAGS_START + REMATCH_JACKSON)
#define FLAG_REGISTERED_HALEY                (TRAINER_REGISTERED_FLAGS_START + REMATCH_HALEY)
#define FLAG_REGISTERED_JAMES                (TRAINER_REGISTERED_FLAGS_START + REMATCH_JAMES)
#define FLAG_REGISTERED_TRENT                (TRAINER_REGISTERED_FLAGS_START + REMATCH_TRENT)
#define FLAG_REGISTERED_SAWYER               (TRAINER_REGISTERED_FLAGS_START + REMATCH_SAWYER)
#define FLAG_REGISTERED_KIRA_AND_DAN         (TRAINER_REGISTERED_FLAGS_START + REMATCH_KIRA_AND_DAN)
#define FLAG_REGISTERED_WALLY                (TRAINER_REGISTERED_FLAGS_START + REMATCH_WALLY)
#define FLAG_REGISTERED_ROXANNE              (TRAINER_REGISTERED_FLAGS_START + REMATCH_ROXANNE)
#define FLAG_REGISTERED_BRAWLY               (TRAINER_REGISTERED_FLAGS_START + REMATCH_BRAWLY)
#define FLAG_REGISTERED_WATTSON              (TRAINER_REGISTERED_FLAGS_START + REMATCH_WATTSON)
#define FLAG_REGISTERED_FLANNERY             (TRAINER_REGISTERED_FLAGS_START + REMATCH_FLANNERY)
#define FLAG_REGISTERED_NORMAN               (TRAINER_REGISTERED_FLAGS_START + REMATCH_NORMAN)
#define FLAG_REGISTERED_WINONA               (TRAINER_REGISTERED_FLAGS_START + REMATCH_WINONA)
#define FLAG_REGISTERED_TATE_AND_LIZA        (TRAINER_REGISTERED_FLAGS_START + REMATCH_TATE_AND_LIZA)
#define FLAG_REGISTERED_JUAN                 (TRAINER_REGISTERED_FLAGS_START + REMATCH_JUAN)
#define FLAG_REGISTERED_SIDNEY               (TRAINER_REGISTERED_FLAGS_START + REMATCH_SIDNEY)
#define FLAG_REGISTERED_PHOEBE               (TRAINER_REGISTERED_FLAGS_START + REMATCH_PHOEBE)
#define FLAG_REGISTERED_GLACIA               (TRAINER_REGISTERED_FLAGS_START + REMATCH_GLACIA)
#define FLAG_REGISTERED_DRAKE                (TRAINER_REGISTERED_FLAGS_START + REMATCH_DRAKE)
#define FLAG_REGISTERED_WALLACE              (TRAINER_REGISTERED_FLAGS_START + REMATCH_WALLACE)

#define FLAG_UNUSED_0x1AA                    0x1AA // Unused Flag
#define FLAG_UNUSED_0x1AB                    0x1AB // Unused Flag

#define FLAG_DEFEATED_DEOXYS                 0x1AC
#define FLAG_BATTLED_DEOXYS                  0x1AD
#define FLAG_SHOWN_EON_TICKET                0x1AE
#define FLAG_SHOWN_AURORA_TICKET             0x1AF
#define FLAG_SHOWN_OLD_SEA_MAP               0x1B0
#define FLAG_MOVE_TUTOR_TAUGHT_SWAGGER       0x1B1
#define FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT       0x1B2
#define FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER   0x1B3
#define FLAG_MOVE_TUTOR_TAUGHT_MIMIC         0x1B4
#define FLAG_MOVE_TUTOR_TAUGHT_METRONOME     0x1B5
#define FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK    0x1B6
#define FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE    0x1B7
#define FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH  0x1B8
#define FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE   0x1B9
#define FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION     0x1BA
#define FLAG_DEFEATED_REGIROCK               0x1BB
#define FLAG_DEFEATED_REGICE                 0x1BC
#define FLAG_DEFEATED_REGISTEEL              0x1BD
#define FLAG_DEFEATED_KYOGRE                 0x1BE
#define FLAG_DEFEATED_GROUDON                0x1BF
#define FLAG_DEFEATED_RAYQUAZA               0x1C0
#define FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE 0x1C1 // hoenn only flag
#define FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE 0x1C2 // hoenn only flag
#define FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE 0x1C3 // hoenn only flag
#define FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT 0x1C4 // hoenn only flag
#define FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT 0x1C5 // hoenn only flag
#define FLAG_DEFEATED_SUDOWOODO              0x1C6
#define FLAG_DEFEATED_MEW                    0x1C7
#define FLAG_DEFEATED_LATIAS_OR_LATIOS       0x1C8
#define FLAG_CAUGHT_LATIAS_OR_LATIOS         0x1C9
#define FLAG_CAUGHT_MEW                      0x1CA
#define FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE 0x1CB
#define FLAG_MET_SCOTT_IN_VERDANTURF         0x1CC // hoenn only flag
#define FLAG_MET_SCOTT_IN_FALLARBOR          0x1CD // hoenn only flag
#define FLAG_MET_SCOTT_IN_LILYCOVE           0x1CE // hoenn only flag
#define FLAG_MET_SCOTT_IN_EVERGRANDE         0x1CF // hoenn only flag
#define FLAG_MET_SCOTT_ON_SS_TIDAL           0x1D0 // hoenn only flag
#define FLAG_SCOTT_GIVES_BATTLE_POINTS       0x1D1
#define FLAG_COLLECTED_ALL_GOLD_SYMBOLS      0x1D2
#define FLAG_ENABLE_ROXANNE_MATCH_CALL       0x1D3 // hoenn only flag
#define FLAG_ENABLE_BRAWLY_MATCH_CALL        0x1D4 // hoenn only flag
#define FLAG_ENABLE_WATTSON_MATCH_CALL       0x1D5 // hoenn only flag
#define FLAG_ENABLE_FLANNERY_MATCH_CALL      0x1D6 // hoenn only flag
#define FLAG_ENABLE_WINONA_MATCH_CALL        0x1D7 // hoenn only flag
#define FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL 0x1D8 // hoenn only flag
#define FLAG_ENABLE_JUAN_MATCH_CALL          0x1D9 // hoenn only flag

#define FLAG_UNUSED_0x1DA                    0x1DA // Unused Flag

#define FLAG_SHOWN_MYSTIC_TICKET             0x1DB
#define FLAG_DEFEATED_HO_OH                  0x1DC
#define FLAG_DEFEATED_LUGIA                  0x1DD

#define FLAG_DEBUG_PAUSE_TIME                    0x1DE 
#define FLAG_DEBUG_NO_ENCOUNTER              0x1DF 
#define FLAG_DEBUG_NO_TRAINER_SEE            0x1E0 
#define FLAG_DEBUG_NO_COLLISION              0x1E1 
#define FLAG_DEBUG_FORCE_SHINY               0x1E2 
#define FLAG_UNUSED_0x1E3                    0x1E3 // Unused Flag

// Mystery Gift Flags (Unknown)
#define FLAG_MYSTERY_GIFT_DONE               0x1E4
#define FLAG_MYSTERY_GIFT_1                  0x1E5
#define FLAG_MYSTERY_GIFT_2                  0x1E6
#define FLAG_MYSTERY_GIFT_3                  0x1E7
#define FLAG_MYSTERY_GIFT_4                  0x1E8
#define FLAG_MYSTERY_GIFT_5                  0x1E9
#define FLAG_MYSTERY_GIFT_6                  0x1EA
#define FLAG_MYSTERY_GIFT_7                  0x1EB
#define FLAG_MYSTERY_GIFT_8                  0x1EC
#define FLAG_MYSTERY_GIFT_9                  0x1ED
#define FLAG_MYSTERY_GIFT_10                 0x1EE
#define FLAG_MYSTERY_GIFT_11                 0x1EF
#define FLAG_MYSTERY_GIFT_12                 0x1F0
#define FLAG_MYSTERY_GIFT_13                 0x1F1
#define FLAG_MYSTERY_GIFT_14                 0x1F2
#define FLAG_MYSTERY_GIFT_15                 0x1F3

// Hidden Items
#define FLAG_HIDDEN_ITEMS_START                                                         0x1F4
#define FLAG_HIDDEN_ITEM_LAKE_VERITY_TINY_MUSHROOM           (FLAG_HIDDEN_ITEMS_START + 0x00) 
#define FLAG_HIDDEN_ITEM_TRICK_HOUSE_NUGGET                  (FLAG_HIDDEN_ITEMS_START + 0x01) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_111_STARDUST                  (FLAG_HIDDEN_ITEMS_START + 0x02) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_113_ETHER                     (FLAG_HIDDEN_ITEMS_START + 0x03) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_114_CARBOS                    (FLAG_HIDDEN_ITEMS_START + 0x04) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_119_CALCIUM                   (FLAG_HIDDEN_ITEMS_START + 0x05) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_119_ULTRA_BALL                (FLAG_HIDDEN_ITEMS_START + 0x06) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_123_SUPER_REPEL               (FLAG_HIDDEN_ITEMS_START + 0x07) //hoenn only flag
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_CARBOS               (FLAG_HIDDEN_ITEMS_START + 0x08) //hoenn only flag
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_GREEN_SHARD          (FLAG_HIDDEN_ITEMS_START + 0x09) //hoenn only flag
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_PEARL                (FLAG_HIDDEN_ITEMS_START + 0x0A) //hoenn only flag
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_BIG_PEARL            (FLAG_HIDDEN_ITEMS_START + 0x0B) //hoenn only flag
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_BLUE_SHARD           (FLAG_HIDDEN_ITEMS_START + 0x0C) //hoenn only flag
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_HEART_SCALE_1        (FLAG_HIDDEN_ITEMS_START + 0x0D) //hoenn only flag
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_HEART_SCALE          (FLAG_HIDDEN_ITEMS_START + 0x0E) //hoenn only flag
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_ULTRA_BALL           (FLAG_HIDDEN_ITEMS_START + 0x0F) //hoenn only flag
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_STARDUST             (FLAG_HIDDEN_ITEMS_START + 0x10) //hoenn only flag
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_PEARL                (FLAG_HIDDEN_ITEMS_START + 0x11) //hoenn only flag
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_YELLOW_SHARD         (FLAG_HIDDEN_ITEMS_START + 0x12) //hoenn only flag
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_IRON                 (FLAG_HIDDEN_ITEMS_START + 0x13) //hoenn only flag
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_BIG_PEARL            (FLAG_HIDDEN_ITEMS_START + 0x14) //hoenn only flag
#define FLAG_HIDDEN_ITEM_UNDERWATER_127_STAR_PIECE           (FLAG_HIDDEN_ITEMS_START + 0x15) //hoenn only flag
#define FLAG_HIDDEN_ITEM_UNDERWATER_127_HP_UP                (FLAG_HIDDEN_ITEMS_START + 0x16) //hoenn only flag
#define FLAG_HIDDEN_ITEM_UNDERWATER_127_HEART_SCALE          (FLAG_HIDDEN_ITEMS_START + 0x17) //hoenn only flag
#define FLAG_HIDDEN_ITEM_UNDERWATER_127_RED_SHARD            (FLAG_HIDDEN_ITEMS_START + 0x18) //hoenn only flag
#define FLAG_HIDDEN_ITEM_UNDERWATER_128_PROTEIN              (FLAG_HIDDEN_ITEMS_START + 0x19) //hoenn only flag
#define FLAG_HIDDEN_ITEM_UNDERWATER_128_PEARL                (FLAG_HIDDEN_ITEMS_START + 0x1A) //hoenn only flag
#define FLAG_HIDDEN_ITEM_LILYCOVE_CITY_HEART_SCALE           (FLAG_HIDDEN_ITEMS_START + 0x1B) //hoenn only flag
#define FLAG_HIDDEN_ITEM_FALLARBOR_TOWN_NUGGET               (FLAG_HIDDEN_ITEMS_START + 0x1C) //hoenn only flag
#define FLAG_HIDDEN_ITEM_MT_PYRE_EXTERIOR_ULTRA_BALL         (FLAG_HIDDEN_ITEMS_START + 0x1D) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_113_TM_DOUBLE_TEAM            (FLAG_HIDDEN_ITEMS_START + 0x1E) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_1_KEY             (FLAG_HIDDEN_ITEMS_START + 0x1F) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_2_KEY             (FLAG_HIDDEN_ITEMS_START + 0x20) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_4_KEY             (FLAG_HIDDEN_ITEMS_START + 0x21) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_6_KEY             (FLAG_HIDDEN_ITEMS_START + 0x22) //hoenn only flag
#define FLAG_HIDDEN_ITEM_SS_TIDAL_LOWER_DECK_LEFTOVERS       (FLAG_HIDDEN_ITEMS_START + 0x23) //hoenn only flag
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_CALCIUM              (FLAG_HIDDEN_ITEMS_START + 0x24) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_104_POTION                    (FLAG_HIDDEN_ITEMS_START + 0x25) //hoenn only flag
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_HEART_SCALE_2        (FLAG_HIDDEN_ITEMS_START + 0x26) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_121_HP_UP                     (FLAG_HIDDEN_ITEMS_START + 0x27) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_121_NUGGET                    (FLAG_HIDDEN_ITEMS_START + 0x28) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_123_REVIVE                    (FLAG_HIDDEN_ITEMS_START + 0x29) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_114_REVIVE                    (FLAG_HIDDEN_ITEMS_START + 0x2A) //hoenn only flag
#define FLAG_HIDDEN_ITEM_LILYCOVE_CITY_PP_UP                 (FLAG_HIDDEN_ITEMS_START + 0x2B) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_104_SUPER_POTION              (FLAG_HIDDEN_ITEMS_START + 0x2C) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_116_SUPER_POTION              (FLAG_HIDDEN_ITEMS_START + 0x2D) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_106_STARDUST                  (FLAG_HIDDEN_ITEMS_START + 0x2E) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_106_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x2F) //hoenn only flag
#define FLAG_HIDDEN_ITEM_GRANITE_CAVE_B2F_EVERSTONE_1        (FLAG_HIDDEN_ITEMS_START + 0x30) //hoenn only flag
#define FLAG_HIDDEN_ITEM_GRANITE_CAVE_B2F_EVERSTONE_2        (FLAG_HIDDEN_ITEMS_START + 0x31) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_109_REVIVE                    (FLAG_HIDDEN_ITEMS_START + 0x32) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_109_GREAT_BALL                (FLAG_HIDDEN_ITEMS_START + 0x33) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_1             (FLAG_HIDDEN_ITEMS_START + 0x34) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_110_GREAT_BALL                (FLAG_HIDDEN_ITEMS_START + 0x35) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_110_REVIVE                    (FLAG_HIDDEN_ITEMS_START + 0x36) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_110_FULL_HEAL                 (FLAG_HIDDEN_ITEMS_START + 0x37) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_111_PROTEIN                   (FLAG_HIDDEN_ITEMS_START + 0x38) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_111_RARE_CANDY                (FLAG_HIDDEN_ITEMS_START + 0x39) //hoenn only flag
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_POTION              (FLAG_HIDDEN_ITEMS_START + 0x3A) //hoenn only flag
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_TINY_MUSHROOM_1     (FLAG_HIDDEN_ITEMS_START + 0x3B) //hoenn only flag
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_TINY_MUSHROOM_2     (FLAG_HIDDEN_ITEMS_START + 0x3C) //hoenn only flag
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_POKE_BALL           (FLAG_HIDDEN_ITEMS_START + 0x3D) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_104_POKE_BALL                 (FLAG_HIDDEN_ITEMS_START + 0x3E) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_106_POKE_BALL                 (FLAG_HIDDEN_ITEMS_START + 0x3F) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_109_ETHER                     (FLAG_HIDDEN_ITEMS_START + 0x40) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_110_POKE_BALL                 (FLAG_HIDDEN_ITEMS_START + 0x41) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_118_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x42) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_118_IRON                      (FLAG_HIDDEN_ITEMS_START + 0x43) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_119_FULL_HEAL                 (FLAG_HIDDEN_ITEMS_START + 0x44) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_2              (FLAG_HIDDEN_ITEMS_START + 0x45) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_120_ZINC                      (FLAG_HIDDEN_ITEMS_START + 0x46) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_1              (FLAG_HIDDEN_ITEMS_START + 0x47) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_117_REPEL                     (FLAG_HIDDEN_ITEMS_START + 0x48) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_121_FULL_HEAL                 (FLAG_HIDDEN_ITEMS_START + 0x49) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_123_HYPER_POTION              (FLAG_HIDDEN_ITEMS_START + 0x4A) //hoenn only flag
#define FLAG_HIDDEN_ITEM_LILYCOVE_CITY_POKE_BALL             (FLAG_HIDDEN_ITEMS_START + 0x4B) //hoenn only flag
#define FLAG_HIDDEN_ITEM_JAGGED_PASS_GREAT_BALL              (FLAG_HIDDEN_ITEMS_START + 0x4C) //hoenn only flag
#define FLAG_HIDDEN_ITEM_JAGGED_PASS_FULL_HEAL               (FLAG_HIDDEN_ITEMS_START + 0x4D) //hoenn only flag
#define FLAG_HIDDEN_ITEM_MT_PYRE_EXTERIOR_MAX_ETHER          (FLAG_HIDDEN_ITEMS_START + 0x4E) //hoenn only flag
#define FLAG_HIDDEN_ITEM_MT_PYRE_SUMMIT_ZINC                 (FLAG_HIDDEN_ITEMS_START + 0x4F) //hoenn only flag
#define FLAG_HIDDEN_ITEM_MT_PYRE_SUMMIT_RARE_CANDY           (FLAG_HIDDEN_ITEMS_START + 0x50) //hoenn only flag
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_1F_ULTRA_BALL          (FLAG_HIDDEN_ITEMS_START + 0x51) //hoenn only flag
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_B2F_ELIXIR             (FLAG_HIDDEN_ITEMS_START + 0x52) //hoenn only flag
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_B2F_MAX_REPEL          (FLAG_HIDDEN_ITEMS_START + 0x53) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_120_REVIVE                    (FLAG_HIDDEN_ITEMS_START + 0x54) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_104_ANTIDOTE                  (FLAG_HIDDEN_ITEMS_START + 0x55) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_108_RARE_CANDY                (FLAG_HIDDEN_ITEMS_START + 0x56) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_119_MAX_ETHER                 (FLAG_HIDDEN_ITEMS_START + 0x57) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_104_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x58) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_105_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x59) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_2             (FLAG_HIDDEN_ITEMS_START + 0x5A) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_3             (FLAG_HIDDEN_ITEMS_START + 0x5B) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_1             (FLAG_HIDDEN_ITEMS_START + 0x5C) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_2             (FLAG_HIDDEN_ITEMS_START + 0x5D) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_3             (FLAG_HIDDEN_ITEMS_START + 0x5E) //hoenn only flag
#define FLAG_HIDDEN_ITEM_PETALBURG_CITY_RARE_CANDY           (FLAG_HIDDEN_ITEMS_START + 0x5F) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_116_BLACK_GLASSES             (FLAG_HIDDEN_ITEMS_START + 0x60) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_115_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x61) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_113_NUGGET                    (FLAG_HIDDEN_ITEMS_START + 0x62) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_123_PP_UP                     (FLAG_HIDDEN_ITEMS_START + 0x63) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_121_MAX_REVIVE                (FLAG_HIDDEN_ITEMS_START + 0x64) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_CALCIUM            (FLAG_HIDDEN_ITEMS_START + 0x65) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_ZINC               (FLAG_HIDDEN_ITEMS_START + 0x66) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_PROTEIN            (FLAG_HIDDEN_ITEMS_START + 0x67) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_IRON               (FLAG_HIDDEN_ITEMS_START + 0x68) //hoenn only flag
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_FULL_RESTORE (FLAG_HIDDEN_ITEMS_START + 0x69) //hoenn only flag
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_RARE_CANDY   (FLAG_HIDDEN_ITEMS_START + 0x6A) //hoenn only flag
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_ZINC         (FLAG_HIDDEN_ITEMS_START + 0x6B) //hoenn only flag
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_PP_UP        (FLAG_HIDDEN_ITEMS_START + 0x6C) //hoenn only flag
#define FLAG_HIDDEN_ITEM_NAVEL_ROCK_TOP_SACRED_ASH           (FLAG_HIDDEN_ITEMS_START + 0x6D) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_123_RARE_CANDY                (FLAG_HIDDEN_ITEMS_START + 0x6E) //hoenn only flag
#define FLAG_HIDDEN_ITEM_ROUTE_105_BIG_PEARL                 (FLAG_HIDDEN_ITEMS_START + 0x6F) //hoenn only flag

#define FLAG_HIDDEN_ITEM_TWINLEAF_TOWN_ODD_KEYSTONE          0x264
#define FLAG_HIDDEN_ITEM_ROUTE_219_ZINC                      0x265
#define FLAG_HIDDEN_ITEM_ROUTE_220_BIG_PEARL                 0x266
#define FLAG_HIDDEN_ITEM_ROUTE_221_BIG_MUSHROOM              0x267
#define FLAG_HIDDEN_ITEM_ROUTE_221_HYPER_POTION              0x268
#define FLAG_HIDDEN_ITEM_ROUTE_221_MAX_REVIVE                0x269
#define FLAG_HIDDEN_ITEM_ROUTE_221_ULTRA_BALL                0x26A
#define FLAG_HIDDEN_ITEM_ROUTE_221_CARBOS                    0x26B
#define FLAG_HIDDEN_ITEM_JUBILIFE_CITY_STARDUST              0x26C
#define FLAG_HIDDEN_ITEM_CANALAVE_CITY_BIG_PEARL             0x26D
#define FLAG_HIDDEN_ITEM_IRON_ISLAND_OUTSIDE_STAR_PIECE      0x26E
#define FLAG_HIDDEN_ITEM_OREBURGH_CITY_PEARL                 0x26F
#define FLAG_HIDDEN_ITEM_OREBURGH_CITY_HEART_SCALE           0x270
#define FLAG_HIDDEN_ITEM_VALLEY_WINDWORKS_MAX_ELIXIR         0x271
#define FLAG_HIDDEN_ITEM_ROUTE_205_STARDUST                  0x272
#define FLAG_HIDDEN_ITEM_FUEGO_IRONWORKS_ULTRA_BALL          0x273
#define FLAG_HIDDEN_ITEM_FUEGO_IRONWORKS_BIG_MUSHROOM        0x274
#define FLAG_HIDDEN_ITEM_FLOAROMA_TOWN_REVIVE                0x275
#define FLAG_HIDDEN_ITEM_FLOAROMA_TOWN_PP_UP                 0x276
#define FLAG_HIDDEN_ITEM_FLOAROMA_TOWN_HYPER_POTION          0x277
#define FLAG_HIDDEN_ITEM_FLOAROMA_TOWN_MAX_REVIVE            0x278
#define FLAG_HIDDEN_ITEM_FLOAROMA_TOWN_FULL_HEAL             0x279
#define FLAG_HIDDEN_ITEM_FLOAROMA_TOWN_HONEY_1               0x27A
#define FLAG_HIDDEN_ITEM_FLOAROMA_TOWN_HONEY_2               0x27B
#define FLAG_HIDDEN_ITEM_FLOAROMA_TOWN_HONEY_3               0x27C
#define FLAG_HIDDEN_ITEM_FLOAROMA_TOWN_HONEY_4               0x27D
#define FLAG_HIDDEN_ITEM_FLOAROMA_TOWN_HONEY_5               0x27E
#define FLAG_HIDDEN_ITEM_FLOAROMA_TOWN_HONEY_6               0x27F
#define FLAG_HIDDEN_ITEM_ROUTE_205_SUPER_POTION              0x280
#define FLAG_HIDDEN_ITEM_ETERNA_FOREST_POTION                0x281
#define FLAG_HIDDEN_ITEM_OLD_CHATEAU_HONEY                   0x282
#define FLAG_HIDDEN_ITEM_ETERNA_CITY_MOON_STONE              0x283
#define FLAG_HIDDEN_ITEM_ROUTE_211_GREAT_BALL                0x284
#define FLAG_HIDDEN_ITEM_ROUTE_207_POKE_BALL                 0x285
#define FLAG_HIDDEN_ITEM_ROUTE_207_RARE_CANDY                0x286
#define FLAG_HIDDEN_ITEM_ROUTE_207_GREAT_BALL                0x287
#define FLAG_HIDDEN_ITEM_ROUTE_207_REVIVE                    0x288
#define FLAG_HIDDEN_ITEM_ROUTE_206_PP_UP                     0x289
#define FLAG_HIDDEN_ITEM_ROUTE_206_ETHER                     0x28A
#define FLAG_HIDDEN_ITEM_ROUTE_206_TINY_MUSHROOM             0x28B
#define FLAG_HIDDEN_ITEM_WAYWARD_CAVE_RED_SHARD              0x28C
#define FLAG_HIDDEN_ITEM_WAYWARD_CAVE_BLUE_SHARD             0x28D
#define FLAG_HIDDEN_ITEM_WAYWARD_CAVE_GREEN_SHARD            0x28E
#define FLAG_HIDDEN_ITEM_WAYWARD_CAVE_YELLOW_SHARD           0x28F
#define FLAG_HIDDEN_ITEM_WAYWARD_CAVE_SUPER_POTION           0x290
#define FLAG_HIDDEN_ITEM_WAYWARD_CAVE_GREAT_BALL             0x291
#define FLAG_HIDDEN_ITEM_WAYWARD_SECRET_DUSK_STONE           0x292
#define FLAG_HIDDEN_ITEM_WAYWARD_SECRET_STARDUST             0x293
#define FLAG_HIDDEN_ITEM_FUEGO_IRONWORKS_STAR_PIECE          0x294
#define FLAG_HIDDEN_ITEM_FUEGO_IRONWORKS_PROTEIN             0x295
#define FLAG_UNUSED_0x296  0x296 // Unused Flag
#define FLAG_UNUSED_0x297  0x297 // Unused Flag
#define FLAG_UNUSED_0x298  0x298 // Unused Flag
#define FLAG_UNUSED_0x299  0x299 // Unused Flag
#define FLAG_UNUSED_0x29A  0x29A // Unused Flag
#define FLAG_UNUSED_0x29B  0x29B // Unused Flag
#define FLAG_UNUSED_0x29C  0x29C // Unused Flag
#define FLAG_UNUSED_0x29D  0x29D // Unused Flag
#define FLAG_UNUSED_0x29E  0x29E // Unused Flag
#define FLAG_UNUSED_0x29F  0x29F // Unused Flag
#define FLAG_UNUSED_0x2A0  0x2A0 // Unused Flag
#define FLAG_UNUSED_0x2A1  0x2A1 // Unused Flag
#define FLAG_UNUSED_0x2A2  0x2A2 // Unused Flag
#define FLAG_UNUSED_0x2A3  0x2A3 // Unused Flag
#define FLAG_UNUSED_0x2A4  0x2A4 // Unused Flag
#define FLAG_UNUSED_0x2A5  0x2A5 // Unused Flag
#define FLAG_UNUSED_0x2A6  0x2A6 // Unused Flag
#define FLAG_UNUSED_0x2A7  0x2A7 // Unused Flag
#define FLAG_UNUSED_0x2A8  0x2A8 // Unused Flag
#define FLAG_UNUSED_0x2A9  0x2A9 // Unused Flag
#define FLAG_UNUSED_0x2AA  0x2AA // Unused Flag
#define FLAG_UNUSED_0x2AB  0x2AB // Unused Flag
#define FLAG_UNUSED_0x2AC  0x2AC // Unused Flag
#define FLAG_UNUSED_0x2AD  0x2AD // Unused Flag
#define FLAG_UNUSED_0x2AE  0x2AE // Unused Flag
#define FLAG_UNUSED_0x2AF  0x2AF // Unused Flag
#define FLAG_UNUSED_0x2B0  0x2B0 // Unused Flag
#define FLAG_UNUSED_0x2B1  0x2B1 // Unused Flag
#define FLAG_UNUSED_0x2B2  0x2B2 // Unused Flag
#define FLAG_UNUSED_0x2B3  0x2B3 // Unused Flag
#define FLAG_UNUSED_0x2B4  0x2B4 // Unused Flag
#define FLAG_UNUSED_0x2B5  0x2B5 // Unused Flag
#define FLAG_UNUSED_0x2B6  0x2B6 // Unused Flag
#define FLAG_UNUSED_0x2B7  0x2B7 // Unused Flag
#define FLAG_HIDDEN_ITEM_ETERNA_FOREST_INSECT_PLATE  0x2B8 
#define FLAG_HIDDEN_ITEM_ETERNA_CITY_DRACO_PLATE  0x2B9 
#define FLAG_UNUSED_0x2BA  0x2BA // Unused Flag
#define FLAG_UNUSED_0x2BB  0x2BB // Unused Flag

// Event Flags
#define FLAG_HOENN_1                                                0x2BC
#define FLAG_HOENN_2                                                0x2BD
#define FLAG_HOENN_3                                                0x2BE
#define FLAG_HOENN_4                                                0x2BF
#define FLAG_HOENN_5                                                0x2C0
#define FLAG_HOENN_6                                                0x2C1
#define FLAG_HOENN_7                                                0x2C2
#define FLAG_HOENN_8                                                0x2C3
#define FLAG_UNUSED_0x2C4                                           0x2C4
#define FLAG_UNUSED_0x2C5                                           0x2C5
#define FLAG_UNUSED_0x2C6                                           0x2C6
#define FLAG_UNUSED_0x2C7                                           0x2C7
#define FLAG_UNUSED_0x2C8                                           0x2C8
#define FLAG_UNUSED_0x2C9                                           0x2C9
#define FLAG_UNUSED_0x2CA                                           0x2CA
#define FLAG_UNUSED_0x2CB                                           0x2CB
#define FLAG_UNUSED_0x2CC                                           0x2CC
#define FLAG_UNUSED_0x2CD                                           0x2CD
#define FLAG_HIDE_MEW                                               0x2CE
#define FLAG_UNUSED_0x2CF                                           0x2CF
#define FLAG_HIDE_BARRY_TWINLEAF_TOWN                               0x2D0
#define FLAG_UNUSED_0x2D1                                           0x2D1
#define FLAG_UNUSED_0x2D2                                           0x2D2
#define FLAG_UNUSED_0x2D3                                           0x2D3
#define FLAG_UNUSED_0x2D4                                           0x2D4
#define FLAG_UNUSED_0x2D5                                           0x2D5
#define FLAG_UNUSED_0x2D6                                           0x2D6
#define FLAG_UNUSED_0x2D7                                           0x2D7
#define FLAG_UNUSED_0x2D8                                           0x2D8
#define FLAG_UNUSED_0x2D9                                           0x2D9
#define FLAG_UNUSED_0x2DA                                           0x2DA
#define FLAG_UNUSED_0x2DB                                           0x2DB
#define FLAG_UNUSED_0x2DC                                           0x2DC
#define FLAG_UNUSED_0x2DD                                           0x2DD
#define FLAG_UNUSED_0x2DE                                           0x2DE
#define FLAG_UNUSED_0x2DF                                           0x2DF
#define FLAG_UNUSED_0x2E0                                           0x2E0
#define FLAG_UNUSED_0x2E1                                           0x2E1
#define FLAG_UNUSED_0x2E2                                           0x2E2
#define FLAG_UNUSED_0x2E3                                           0x2E3
#define FLAG_UNUSED_0x2E4                                           0x2E4
#define FLAG_UNUSED_0x2E5                                           0x2E5
#define FLAG_UNUSED_0x2E6                                           0x2E6
#define FLAG_UNUSED_0x2E7                                           0x2E7
#define FLAG_UNUSED_0x2E8                                           0x2E8
#define FLAG_UNUSED_0x2E9                                           0x2E9
#define FLAG_UNUSED_0x2EA                                           0x2EA
#define FLAG_UNUSED_0x2EB                                           0x2EB
#define FLAG_UNUSED_0x2EC                                           0x2EC
#define FLAG_UNUSED_0x2ED                                           0x2ED
#define FLAG_UNUSED_0x2EE                                           0x2EE
#define FLAG_UNUSED_0x2EF                                           0x2EF
#define FLAG_UNUSED_0x2F0                                           0x2F0
#define FLAG_UNUSED_0x2F1                                           0x2F1
#define FLAG_UNUSED_0x2F2                                           0x2F2
#define FLAG_UNUSED_0x2F3                                           0x2F3
#define FLAG_UNUSED_0x2F4                                           0x2F4
#define FLAG_UNUSED_0x2F5                                           0x2F5
#define FLAG_UNUSED_0x2F6                                           0x2F6
#define FLAG_UNUSED_0x2F7                                           0x2F7
#define FLAG_UNUSED_0x2F8                                           0x2F8
#define FLAG_UNUSED_0x2F9                                           0x2F9
#define FLAG_UNUSED_0x2FA                                           0x2FA
#define FLAG_HIDE_DEOXYS                                            0x2FB
#define FLAG_HIDE_BIRTH_ISLAND_DEOXYS_TRIANGLE                      0x2FC
#define FLAG_UNUSED_0x2FD                                           0x2FD
#define FLAG_UNUSED_0x2FE                                           0x2FE
#define FLAG_UNUSED_0x2FF                                           0x2FF
#define FLAG_UNUSED_0x300                                           0x300
#define FLAG_UNUSED_0x301                                           0x301
#define FLAG_UNUSED_0x302                                           0x302
#define FLAG_UNUSED_0x303                                           0x303
#define FLAG_UNUSED_0x304                                           0x304
#define FLAG_UNUSED_0x305                                           0x305
#define FLAG_UNUSED_0x306                                           0x306
#define FLAG_UNUSED_0x307                                           0x307
#define FLAG_UNUSED_0x308                                           0x308
#define FLAG_UNUSED_0x309                                           0x309
#define FLAG_UNUSED_0x30A                                           0x30A
#define FLAG_UNUSED_0x30B                                           0x30B
#define FLAG_UNUSED_0x30C                                           0x30C
#define FLAG_UNUSED_0x30D                                           0x30D
#define FLAG_UNUSED_0x30E                                           0x30E
#define FLAG_UNUSED_0x30F                                           0x30F
#define FLAG_UNUSED_0x310                                           0x310
#define FLAG_UNUSED_0x311                                           0x311
#define FLAG_UNUSED_0x312                                           0x312
#define FLAG_UNUSED_0x313                                           0x313
#define FLAG_UNUSED_0x314                                           0x314
#define FLAG_UNUSED_0x315                                           0x315
#define FLAG_UNUSED_0x316                                           0x316
#define FLAG_UNUSED_0x317                                           0x317
#define FLAG_UNUSED_0x318                                           0x318
#define FLAG_UNUSED_0x319                                           0x319
#define FLAG_UNUSED_0x31A                                           0x31A
#define FLAG_UNUSED_0x31B                                           0x31B
#define FLAG_UNUSED_0x31C                                           0x31C
#define FLAG_UNUSED_0x31D                                           0x31D
#define FLAG_UNUSED_0x31E                                           0x31E
#define FLAG_UNUSED_0x31F                                           0x31F
#define FLAG_HIDE_LUGIA                                             0x320
#define FLAG_HIDE_HO_OH                                             0x321
#define FLAG_UNUSED_0x322                                           0x322
#define FLAG_UNUSED_0x323                                           0x323
#define FLAG_UNUSED_0x324                                           0x324
#define FLAG_UNUSED_0x325                                           0x325
#define FLAG_UNUSED_0x326                                           0x326
#define FLAG_UNUSED_0x327                                           0x327
#define FLAG_UNUSED_0x328                                           0x328
#define FLAG_UNUSED_0x329                                           0x329
#define FLAG_UNUSED_0x32A                                           0x32A
#define FLAG_UNUSED_0x32B                                           0x32B
#define FLAG_UNUSED_0x32C                                           0x32C
#define FLAG_UNUSED_0x32D                                           0x32D
#define FLAG_UNUSED_0x32E                                           0x32E
#define FLAG_UNUSED_0x32F                                           0x32F
#define FLAG_UNUSED_0x330                                           0x330
#define FLAG_UNUSED_0x331                                           0x331
#define FLAG_UNUSED_0x332                                           0x332
#define FLAG_UNUSED_0x333                                           0x333
#define FLAG_UNUSED_0x334                                           0x334
#define FLAG_UNUSED_0x335                                           0x335
#define FLAG_UNUSED_0x336                                           0x336
#define FLAG_UNUSED_0x337                                           0x337
#define FLAG_UNUSED_0x338                                           0x338
#define FLAG_UNUSED_0x339                                           0x339
#define FLAG_UNUSED_0x33A                                           0x33A
#define FLAG_UNUSED_0x33B                                           0x33B
#define FLAG_UNUSED_0x33C                                           0x33C
#define FLAG_UNUSED_0x33D                                           0x33D
#define FLAG_UNUSED_0x33E                                           0x33E
#define FLAG_UNUSED_0x33F                                           0x33F
#define FLAG_UNUSED_0x340                                           0x340
#define FLAG_UNUSED_0x341                                           0x341
#define FLAG_UNUSED_0x342                                           0x342
#define FLAG_UNUSED_0x343                                           0x343
#define FLAG_UNUSED_0x344                                           0x344
#define FLAG_UNUSED_0x345                                           0x345
#define FLAG_UNUSED_0x346                                           0x346
#define FLAG_UNUSED_0x347                                           0x347
#define FLAG_UNUSED_0x348                                           0x348
#define FLAG_UNUSED_0x349                                           0x349
#define FLAG_UNUSED_0x34A                                           0x34A
#define FLAG_UNUSED_0x34B                                           0x34B
#define FLAG_UNUSED_0x34C                                           0x34C
#define FLAG_UNUSED_0x34D                                           0x34D
#define FLAG_UNUSED_0x34E                                           0x34E
#define FLAG_UNUSED_0x34F                                           0x34F
#define FLAG_UNUSED_0x350                                           0x350
#define FLAG_UNUSED_0x351                                           0x351
#define FLAG_UNUSED_0x352                                           0x352
#define FLAG_UNUSED_0x353                                           0x353
#define FLAG_UNUSED_0x354                                           0x354
#define FLAG_UNUSED_0x355                                           0x355
#define FLAG_UNUSED_0x356                                           0x356
#define FLAG_UNUSED_0x357                                           0x357
#define FLAG_UNUSED_0x358                                           0x358
#define FLAG_UNUSED_0x359                                           0x359
#define FLAG_UNUSED_0x35A                                           0x35A
#define FLAG_UNUSED_0x35B                                           0x35B
#define FLAG_UNUSED_0x35C                                           0x35C
#define FLAG_UNUSED_0x35D                                           0x35D
#define FLAG_UNUSED_0x35E                                           0x35E
#define FLAG_UNUSED_0x35F                                           0x35F
#define FLAG_UNUSED_0x360                                           0x360
#define FLAG_UNUSED_0x361                                           0x361
#define FLAG_UNUSED_0x362                                           0x362
#define FLAG_UNUSED_0x363                                           0x363
#define FLAG_UNUSED_0x364                                           0x364
#define FLAG_UNUSED_0x365                                           0x365
#define FLAG_UNUSED_0x366                                           0x366
#define FLAG_UNUSED_0x367                                           0x367
#define FLAG_UNUSED_0x368                                           0x368
#define FLAG_UNUSED_0x369                                           0x369
#define FLAG_UNUSED_0x36A                                           0x36A
#define FLAG_UNUSED_0x36B                          0x36B //hoenn only flag
#define FLAG_UNUSED_0x36C                           0x36C //hoenn only flag
#define FLAG_UNUSED_0x36D                               0x36D //hoenn only flag
#define FLAG_UNUSED_0x36E                         0x36E //hoenn only flag
#define FLAG_UNUSED_0x36F                             0x36F //hoenn only flag
#define FLAG_UNUSED_0x370                              0x370 //hoenn only flag
#define FLAG_UNUSED_0x371                               0x371 //hoenn only flag
#define FLAG_UNUSED_0x372                          0x372 //hoenn only flag
#define FLAG_UNUSED_0x373         0x373 //hoenn only flag
#define FLAG_UNUSED_0x374     0x374 //hoenn only flag
#define FLAG_UNUSED_0x375     0x375 //hoenn only flag
#define FLAG_UNUSED_0x376           0x376 //hoenn only flag
#define FLAG_UNUSED_0x377    0x377 //hoenn only flag
#define FLAG_UNUSED_0x378                             0x378 //hoenn only flag
#define FLAG_UNUSED_0x379                  0x379 //hoenn only flag
#define FLAG_UNUSED_0x37A                               0x37A //hoenn only flag
#define FLAG_UNUSED_0x37B                               0x37B //hoenn only flag
#define FLAG_UNUSED_0x37C                      0x37C //hoenn only flag
#define FLAG_UNUSED_0x37D                      0x37D //hoenn only flag
#define FLAG_UNUSED_0x37E                        0x37E //hoenn only flag
#define FLAG_UNUSED_0x37F         0x37F //hoenn only flag
#define FLAG_UNUSED_0x380          0x380 //hoenn only flag
#define FLAG_UNUSED_0x381                                   0x381 //hoenn only flag
#define FLAG_UNUSED_0x382                                   0x382 //hoenn only flag
#define FLAG_UNUSED_0x383                               0x383 //hoenn only flag
#define FLAG_UNUSED_0x384                               0x384 //hoenn only flag
#define FLAG_UNUSED_0x385                          0x385 //hoenn only flag
#define FLAG_UNUSED_0x386                          0x386 //hoenn only flag
#define FLAG_UNUSED_0x387                          0x387 //hoenn only flag
#define FLAG_UNUSED_0x388                          0x388 //hoenn only flag
#define FLAG_UNUSED_0x389                     0x389 //hoenn only flag
#define FLAG_UNUSED_0x38A                      0x38A //hoenn only flag
#define FLAG_UNUSED_0x38B                                 0x38B //hoenn only flag
#define FLAG_UNUSED_0x38C                   0x38C //hoenn only flag
#define FLAG_UNUSED_0x38D                      0x38D //hoenn only flag
#define FLAG_HIDE_SOUTHERN_ISLAND_EON_STONE                         0x38E 
#define FLAG_HIDE_SOUTHERN_ISLAND_UNCHOSEN_EON_DUO_MON              0x38F 
#define FLAG_UNUSED_0x390                             0x390 //hoenn only flag
#define FLAG_UNUSED_0x391                              0x391 //hoenn only flag
#define FLAG_UNUSED_0x392                        0x392 //hoenn only flag
#define FLAG_UNUSED_0x393                                          0x393 // Set, however has no purpose.
#define FLAG_UNUSED_0x394                             0x394 //hoenn only flag
#define FLAG_UNUSED_0x395                          0x395 //hoenn only flag
#define FLAG_UNUSED_0x396                             0x396 //hoenn only flag
#define FLAG_UNUSED_0x397                                   0x397 //hoenn only flag
#define FLAG_UNUSED_0x398                              0x398
#define FLAG_UNUSED_0x399                              0x399
#define FLAG_UNUSED_0x39A                           0x39A //hoenn only flag
#define FLAG_UNUSED_0x39B                           0x39B //hoenn only flag
#define FLAG_UNUSED_0x39C                               0x39C //hoenn only flag
#define FLAG_UNUSED_0x39D                     0x39D //hoenn only flag
#define FLAG_UNUSED_0x39E                              0x39E //hoenn only flag
#define FLAG_UNUSED_0x39F                             0x39F //hoenn only flag
#define FLAG_UNUSED_0x3A0                        0x3A0 //hoenn only flag
#define FLAG_UNUSED_0x3A1                              0x3A1 //hoenn only flag
#define FLAG_UNUSED_0x3A2                      0x3A2 //hoenn only flag
#define FLAG_UNUSED_0x3A3                             0x3A3 //hoenn only flag
#define FLAG_UNUSED_0x3A4                             0x3A4 //hoenn only flag
#define FLAG_UNUSED_0x3A5                      0x3A5 //hoenn only flag
#define FLAG_UNUSED_0x3A6                     0x3A6 //hoenn only flag
#define FLAG_HIDE_REGIROCK                                          0x3A7
#define FLAG_HIDE_REGICE                                            0x3A8
#define FLAG_HIDE_REGISTEEL                                         0x3A9
#define FLAG_UNUSED_0x3AA                            0x3AA //hoenn only flag
#define FLAG_UNUSED_0x3AB                           0x3AB //hoenn only flag
#define FLAG_UNUSED_0x3AC                      0x3AC //hoenn only flag
#define FLAG_UNUSED_0x3AD               0x3AD //hoenn only flag
#define FLAG_UNUSED_0x3AE                          0x3AE //hoenn only flag
#define FLAG_UNUSED_0x3AF                 0x3AF //hoenn only flag
#define FLAG_UNUSED_0x3B0                                  0x3B0 //hoenn only flag
#define FLAG_UNUSED_0x3B1                                   0x3B1 //hoenn only flag
#define FLAG_UNUSED_0x3B2                       0x3B2 //hoenn only flag
#define FLAG_UNUSED_0x3B3                          0x3B3 //hoenn only flag
#define FLAG_UNUSED_0x3B4                        0x3B4 //hoenn only flag
#define FLAG_UNUSED_0x3B5              0x3B5 //hoenn only flag
#define FLAG_UNUSED_0x3B6                       0x3B6 //hoenn only flag
#define FLAG_UNUSED_0x3B7                       0x3B7 //hoenn only flag
#define FLAG_UNUSED_0x3B8                                  0x3B8
#define FLAG_UNUSED_0x3B9                                  0x3B9
#define FLAG_UNUSED_0x3BA                                  0x3BA
#define FLAG_UNUSED_0x3BB                                  0x3BB
#define FLAG_UNUSED_0x3BC                                 0x3BC
#define FLAG_UNUSED_0x3BD                                 0x3BD
#define FLAG_UNUSED_0x3BE                                 0x3BE
#define FLAG_UNUSED_0x3BF                                 0x3BF
#define FLAG_UNUSED_0x3C0                        0x3C0 //hoenn only flag
#define FLAG_UNUSED_0x3C1                       0x3C1 //hoenn only flag
#define FLAG_UNUSED_0x3C2      0x3C2 //hoenn only flag
#define FLAG_UNUSED_0x3C3                          0x3C3 //hoenn only flag
#define FLAG_UNUSED_0x3C4                          0x3C4 //hoenn only flag
#define FLAG_UNUSED_0x3C5 0x3C5 //hoenn only flag
#define FLAG_UNUSED_0x3C6                                  0x3C6 //hoenn only flag
#define FLAG_UNUSED_0x3C7                0x3C7 //hoenn only flag
#define FLAG_UNUSED_0x3C8       0x3C8 //hoenn only flag
#define FLAG_UNUSED_0x3C9                              0x3C9 //hoenn only flag
#define FLAG_UNUSED_0x3CA                          0x3CA
#define FLAG_UNUSED_0x3CB                               0x3CB //hoenn only flag
#define FLAG_UNUSED_0x3CC                                  0x3CC //hoenn only flag
#define FLAG_UNUSED_0x3CD                            0x3CD //hoenn only flag
#define FLAG_UNUSED_0x3CE                            0x3CE //hoenn only flag
#define FLAG_UNUSED_0x3CF                            0x3CF //hoenn only flag
#define FLAG_UNUSED_0x3D0                            0x3D0 //hoenn only flag
#define FLAG_UNUSED_0x3D1                      0x3D1 //hoenn only flag
#define FLAG_UNUSED_0x3D2                      0x3D2 //hoenn only flag
#define FLAG_UNUSED_0x3D3                                 0x3D3 //hoenn only flag
#define FLAG_UNUSED_0x3D4      0x3D4 //hoenn only flag
#define FLAG_UNUSED_0x3D5                   0x3D5 //hoenn only flag
#define FLAG_UNUSED_0x3D6                               0x3D6 //hoenn only flag
#define FLAG_UNUSED_0x3D7                              0x3D7 //hoenn only flag
#define FLAG_UNUSED_0x3D8                0x3D8 //hoenn only flag
#define FLAG_UNUSED_0x3D9                               0x3D9 //hoenn only flag
#define FLAG_UNUSED_0x3DA                               0x3DA //hoenn only flag
#define FLAG_UNUSED_0x3DB                               0x3DB //hoenn only flag
#define FLAG_UNUSED_0x3DC                               0x3DC //hoenn only flag
#define FLAG_UNUSED_0x3DD                               0x3DD //hoenn only flag
#define FLAG_UNUSED_0x3DE                               0x3DE //hoenn only flag
#define FLAG_UNUSED_0x3DF                                     0x3DF //hoenn only flag
#define FLAG_UNUSED_0x3E0                 0x3E0 //hoenn only flag
#define FLAG_UNUSED_0x3E1          0x3E1 //hoenn only flag
#define FLAG_UNUSED_0x3E2                       0x3E2 //hoenn only flag
#define FLAG_UNUSED_0x3E3                              0x3E3 //hoenn only flag
#define FLAG_UNUSED_0x3E4                          0x3E4 //hoenn only flag
#define FLAG_UNUSED_0x3E5                            0x3E5 //hoenn only flag
#define FLAG_UNUSED_0x3E6                           0x3E6 //hoenn only flag
#define FLAG_UNUSED_0x3E7                0x3E7 //hoenn only flag

// Item Ball Flags
#define FLAG_ITEM_LAKE_VERITY_TM38                                  0x3E8 // "FLAG_ITEM_ROUTE_102_POTION"
#define FLAG_ITEM_ROUTE_116_X_SPECIAL                               0x3E9 //hoenn only flag
#define FLAG_ITEM_ROUTE_104_PP_UP                                   0x3EA //hoenn only flag
#define FLAG_ITEM_ROUTE_105_IRON                                    0x3EB //hoenn only flag
#define FLAG_ITEM_ROUTE_106_PROTEIN                                 0x3EC //hoenn only flag
#define FLAG_ITEM_ROUTE_109_PP_UP                                   0x3ED //hoenn only flag
#define FLAG_ITEM_ROUTE_110_RARE_CANDY                              0x3EE //hoenn only flag
#define FLAG_ITEM_ROUTE_110_DIRE_HIT                                0x3EF //hoenn only flag
#define FLAG_ITEM_ROUTE_111_TM_SANDSTORM                            0x3F0 //hoenn only flag
#define FLAG_ITEM_ROUTE_111_STARDUST                                0x3F1 //hoenn only flag
#define FLAG_ITEM_ROUTE_111_HP_UP                                   0x3F2 //hoenn only flag
#define FLAG_ITEM_ROUTE_112_NUGGET                                  0x3F3 //hoenn only flag
#define FLAG_ITEM_ROUTE_113_MAX_ETHER                               0x3F4 //hoenn only flag
#define FLAG_ITEM_ROUTE_113_SUPER_REPEL                             0x3F5 //hoenn only flag
#define FLAG_ITEM_ROUTE_114_RARE_CANDY                              0x3F6 //hoenn only flag
#define FLAG_ITEM_ROUTE_114_PROTEIN                                 0x3F7 //hoenn only flag
#define FLAG_ITEM_ROUTE_115_SUPER_POTION                            0x3F8 //hoenn only flag
#define FLAG_ITEM_ROUTE_115_TM_FOCUS_PUNCH                          0x3F9 //hoenn only flag
#define FLAG_ITEM_ROUTE_115_IRON                                    0x3FA //hoenn only flag
#define FLAG_ITEM_ROUTE_116_ETHER                                   0x3FB //hoenn only flag
#define FLAG_ITEM_ROUTE_116_REPEL                                   0x3FC //hoenn only flag
#define FLAG_ITEM_ROUTE_116_HP_UP                                   0x3FD //hoenn only flag
#define FLAG_ITEM_ROUTE_117_GREAT_BALL                              0x3FE //hoenn only flag
#define FLAG_ITEM_ROUTE_117_REVIVE                                  0x3FF //hoenn only flag
#define FLAG_ITEM_ROUTE_119_SUPER_REPEL                             0x400 //hoenn only flag
#define FLAG_ITEM_ROUTE_119_ZINC                                    0x401 //hoenn only flag
#define FLAG_ITEM_ROUTE_119_ELIXIR_1                                0x402 //hoenn only flag
#define FLAG_ITEM_ROUTE_119_LEAF_STONE                              0x403 //hoenn only flag
#define FLAG_ITEM_ROUTE_119_RARE_CANDY                              0x404 //hoenn only flag
#define FLAG_ITEM_ROUTE_119_HYPER_POTION_1                          0x405 //hoenn only flag
#define FLAG_ITEM_ROUTE_120_NUGGET                                  0x406 //hoenn only flag
#define FLAG_ITEM_ROUTE_120_FULL_HEAL                               0x407 //hoenn only flag
#define FLAG_ITEM_ROUTE_123_CALCIUM                                 0x408 //hoenn only flag
#define FLAG_ITEM_ROUTE_123_RARE_CANDY                              0x409 // Unused Flag, leftover from R/S. In Emerald this is a hidden item and uses a different flag
#define FLAG_ITEM_ROUTE_127_ZINC                                    0x40A //hoenn only flag
#define FLAG_ITEM_ROUTE_127_CARBOS                                  0x40B //hoenn only flag
#define FLAG_ITEM_ROUTE_132_RARE_CANDY                              0x40C //hoenn only flag
#define FLAG_ITEM_ROUTE_133_BIG_PEARL                               0x40D //hoenn only flag
#define FLAG_ITEM_ROUTE_133_STAR_PIECE                              0x40E //hoenn only flag
#define FLAG_ITEM_PETALBURG_CITY_MAX_REVIVE                         0x40F //hoenn only flag
#define FLAG_ITEM_PETALBURG_CITY_ETHER                              0x410 //hoenn only flag
#define FLAG_ITEM_RUSTBORO_CITY_X_DEFEND                            0x411 //hoenn only flag
#define FLAG_ITEM_LILYCOVE_CITY_MAX_REPEL                           0x412 //hoenn only flag
#define FLAG_ITEM_MOSSDEEP_CITY_NET_BALL                            0x413 //hoenn only flag
#define FLAG_ITEM_METEOR_FALLS_1F_1R_TM_IRON_TAIL                   0x414 //hoenn only flag
#define FLAG_ITEM_METEOR_FALLS_1F_1R_FULL_HEAL                      0x415 //hoenn only flag
#define FLAG_ITEM_METEOR_FALLS_1F_1R_MOON_STONE                     0x416 //hoenn only flag
#define FLAG_ITEM_METEOR_FALLS_1F_1R_PP_UP                          0x417 //hoenn only flag
#define FLAG_ITEM_RUSTURF_TUNNEL_POKE_BALL                          0x418 //hoenn only flag
#define FLAG_ITEM_RUSTURF_TUNNEL_MAX_ETHER                          0x419 //hoenn only flag
#define FLAG_ITEM_GRANITE_CAVE_1F_ESCAPE_ROPE                       0x41A //hoenn only flag
#define FLAG_ITEM_GRANITE_CAVE_B1F_POKE_BALL                        0x41B //hoenn only flag
#define FLAG_ITEM_MT_PYRE_5F_LAX_INCENSE                            0x41C //hoenn only flag
#define FLAG_ITEM_GRANITE_CAVE_B2F_REPEL                            0x41D //hoenn only flag
#define FLAG_ITEM_GRANITE_CAVE_B2F_RARE_CANDY                       0x41E //hoenn only flag
#define FLAG_ITEM_PETALBURG_WOODS_X_ATTACK                          0x41F //hoenn only flag
#define FLAG_ITEM_PETALBURG_WOODS_GREAT_BALL                        0x420 //hoenn only flag
#define FLAG_ITEM_ROUTE_104_POKE_BALL                               0x421 //hoenn only flag
#define FLAG_ITEM_PETALBURG_WOODS_ETHER                             0x422 //hoenn only flag
#define FLAG_ITEM_MAGMA_HIDEOUT_3F_3R_ECAPE_ROPE                    0x423 //hoenn only flag
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_1_ORANGE_MAIL                  0x424 //hoenn only flag
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_2_HARBOR_MAIL                  0x425 //hoenn only flag
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_2_WAVE_MAIL                    0x426 //hoenn only flag
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_3_SHADOW_MAIL                  0x427 //hoenn only flag
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_3_WOOD_MAIL                    0x428 //hoenn only flag
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_4_MECH_MAIL                    0x429 //hoenn only flag
#define FLAG_ITEM_ROUTE_124_YELLOW_SHARD                            0x42A //hoenn only flag
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_6_GLITTER_MAIL                 0x42B //hoenn only flag
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_7_TROPIC_MAIL                  0x42C //hoenn only flag
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_8_BEAD_MAIL                    0x42D //hoenn only flag
#define FLAG_ITEM_JAGGED_PASS_BURN_HEAL                             0x42E //hoenn only flag
#define FLAG_ITEM_AQUA_HIDEOUT_B1F_MAX_ELIXIR                       0x42F //hoenn only flag
#define FLAG_ITEM_AQUA_HIDEOUT_B2F_NEST_BALL                        0x430 //hoenn only flag
#define FLAG_ITEM_MT_PYRE_EXTERIOR_MAX_POTION                       0x431 //hoenn only flag
#define FLAG_ITEM_MT_PYRE_EXTERIOR_TM_SKILL_SWAP                    0x432 //hoenn only flag
#define FLAG_ITEM_NEW_MAUVILLE_ULTRA_BALL                           0x433 //hoenn only flag
#define FLAG_ITEM_NEW_MAUVILLE_ESCAPE_ROPE                          0x434 //hoenn only flag
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_6_LUXURY_BALL    0x435 //hoenn only flag
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_2_SCANNER        0x436 //hoenn only flag
#define FLAG_ITEM_SCORCHED_SLAB_TM_SUNNY_DAY                        0x437 //hoenn only flag
#define FLAG_ITEM_METEOR_FALLS_B1F_2R_TM_DRAGON_CLAW                0x438 //hoenn only flag
#define FLAG_ITEM_SHOAL_CAVE_ENTRANCE_BIG_PEARL                     0x439 //hoenn only flag
#define FLAG_ITEM_SHOAL_CAVE_INNER_ROOM_RARE_CANDY                  0x43A //hoenn only flag
#define FLAG_ITEM_SHOAL_CAVE_STAIRS_ROOM_ICE_HEAL                   0x43B //hoenn only flag
#define FLAG_ITEM_VICTORY_ROAD_1F_MAX_ELIXIR                        0x43C //hoenn only flag
#define FLAG_ITEM_VICTORY_ROAD_1F_PP_UP                             0x43D //hoenn only flag
#define FLAG_ITEM_VICTORY_ROAD_B1F_TM_PSYCHIC                       0x43E //hoenn only flag
#define FLAG_ITEM_VICTORY_ROAD_B1F_FULL_RESTORE                     0x43F //hoenn only flag
#define FLAG_ITEM_VICTORY_ROAD_B2F_FULL_HEAL                        0x440 //hoenn only flag
#define FLAG_ITEM_MT_PYRE_6F_TM_SHADOW_BALL                         0x441 //hoenn only flag
#define FLAG_ITEM_SEAFLOOR_CAVERN_ROOM_9_TM_EARTHQUAKE              0x442 //hoenn only flag
#define FLAG_ITEM_FIERY_PATH_TM_TOXIC                               0x443 //hoenn only flag
#define FLAG_ITEM_ROUTE_124_RED_SHARD                               0x444 //hoenn only flag
#define FLAG_ITEM_ROUTE_124_BLUE_SHARD                              0x445 //hoenn only flag
#define FLAG_ITEM_SAFARI_ZONE_NORTH_WEST_TM_SOLAR_BEAM              0x446 //hoenn only flag
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_1F_HARBOR_MAIL               0x447 //hoenn only flag
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_B1F_ESCAPE_ROPE              0x448 //hoenn only flag
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_2_B1F_DIVE_BALL              0x449 //hoenn only flag
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_B1F_TM_ICE_BEAM              0x44A //hoenn only flag
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_2_1F_REVIVE                  0x44B //hoenn only flag
#define FLAG_ITEM_ABANDONED_SHIP_CAPTAINS_OFFICE_STORAGE_KEY        0x44C //hoenn only flag
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_3_WATER_STONE    0x44D //hoenn only flag
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_1_TM_RAIN_DANCE  0x44E //hoenn only flag
#define FLAG_ITEM_ROUTE_121_CARBOS                                  0x44F //hoenn only flag
#define FLAG_ITEM_ROUTE_123_ULTRA_BALL                              0x450 //hoenn only flag
#define FLAG_ITEM_ROUTE_126_GREEN_SHARD                             0x451 //hoenn only flag
#define FLAG_ITEM_ROUTE_119_HYPER_POTION_2                          0x452 //hoenn only flag
#define FLAG_ITEM_ROUTE_120_HYPER_POTION                            0x453 //hoenn only flag
#define FLAG_ITEM_ROUTE_120_NEST_BALL                               0x454 //hoenn only flag
#define FLAG_ITEM_ROUTE_123_ELIXIR                                  0x455 //hoenn only flag
#define FLAG_ITEM_NEW_MAUVILLE_THUNDER_STONE                        0x456 //hoenn only flag
#define FLAG_ITEM_FIERY_PATH_FIRE_STONE                             0x457 //hoenn only flag
#define FLAG_ITEM_SHOAL_CAVE_ICE_ROOM_TM_HAIL                       0x458 //hoenn only flag
#define FLAG_ITEM_SHOAL_CAVE_ICE_ROOM_NEVER_MELT_ICE                0x459 //hoenn only flag
#define FLAG_ITEM_ROUTE_103_GUARD_SPEC                              0x45A //hoenn only flag
#define FLAG_ITEM_ROUTE_104_X_ACCURACY                              0x45B //hoenn only flag
#define FLAG_ITEM_MAUVILLE_CITY_X_SPEED                             0x45C //hoenn only flag
#define FLAG_ITEM_PETALBURG_WOODS_PARALYZE_HEAL                     0x45D //hoenn only flag
#define FLAG_ITEM_ROUTE_115_GREAT_BALL                              0x45E //hoenn only flag
#define FLAG_ITEM_SAFARI_ZONE_NORTH_CALCIUM                         0x45F //hoenn only flag
#define FLAG_ITEM_MT_PYRE_3F_SUPER_REPEL                            0x460 //hoenn only flag
#define FLAG_ITEM_ROUTE_118_HYPER_POTION                            0x461 //hoenn only flag
#define FLAG_ITEM_NEW_MAUVILLE_FULL_HEAL                            0x462 //hoenn only flag
#define FLAG_ITEM_NEW_MAUVILLE_PARALYZE_HEAL                        0x463 //hoenn only flag
#define FLAG_ITEM_AQUA_HIDEOUT_B1F_MASTER_BALL                      0x464 //hoenn only flag
#define FLAG_ITEM_OLD_MAGMA_HIDEOUT_B1F_MASTER_BALL                 0x465 // Unused Flag, leftover from the Ruby Magma hideout
#define FLAG_ITEM_OLD_MAGMA_HIDEOUT_B1F_MAX_ELIXIR                  0x466 // Unused Flag, leftover from the Ruby Magma hideout
#define FLAG_ITEM_OLD_MAGMA_HIDEOUT_B2F_NEST_BALL                   0x467 // Unused Flag, leftover from the Ruby Magma hideout
#define FLAG_UNUSED_0x468                                           0x468 // Unused Flag
#define FLAG_ITEM_MT_PYRE_2F_ULTRA_BALL                             0x469 //hoenn only flag
#define FLAG_ITEM_MT_PYRE_4F_SEA_INCENSE                            0x46A //hoenn only flag
#define FLAG_ITEM_SAFARI_ZONE_SOUTH_WEST_MAX_REVIVE                 0x46B //hoenn only flag
#define FLAG_ITEM_AQUA_HIDEOUT_B1F_NUGGET                           0x46C //hoenn only flag
#define FLAG_ITEM_MOSSDEEP_STEVENS_HOUSE_HM08                       0x46D // Unused Flag, leftover from R/S. HM08 is given to the player directly in Emerald
#define FLAG_ITEM_ROUTE_119_NUGGET                                  0x46E //hoenn only flag
#define FLAG_ITEM_ROUTE_104_POTION                                  0x46F //hoenn only flag
#define FLAG_UNUSED_0x470                                           0x470 // Unused Flag
#define FLAG_ITEM_ROUTE_103_PP_UP                                   0x471 //hoenn only flag
#define FLAG_UNUSED_0x472                                           0x472 // Unused Flag
#define FLAG_ITEM_ROUTE_108_STAR_PIECE                              0x473 //hoenn only flag
#define FLAG_ITEM_ROUTE_109_POTION                                  0x474 //hoenn only flag
#define FLAG_ITEM_ROUTE_110_ELIXIR                                  0x475 //hoenn only flag
#define FLAG_ITEM_ROUTE_111_ELIXIR                                  0x476 //hoenn only flag
#define FLAG_ITEM_ROUTE_113_HYPER_POTION                            0x477 //hoenn only flag
#define FLAG_ITEM_ROUTE_115_HEAL_POWDER                             0x478 //hoenn only flag
#define FLAG_UNUSED_0x479                                           0x479 // Unused Flag
#define FLAG_ITEM_ROUTE_116_POTION                                  0x47A //hoenn only flag
#define FLAG_ITEM_ROUTE_119_ELIXIR_2                                0x47B //hoenn only flag
#define FLAG_ITEM_ROUTE_120_REVIVE                                  0x47C //hoenn only flag
#define FLAG_ITEM_ROUTE_121_REVIVE                                  0x47D //hoenn only flag
#define FLAG_ITEM_ROUTE_121_ZINC                                    0x47E //hoenn only flag
#define FLAG_ITEM_MAGMA_HIDEOUT_1F_RARE_CANDY                       0x47F //hoenn only flag
#define FLAG_ITEM_ROUTE_123_PP_UP                                   0x480 //hoenn only flag
#define FLAG_ITEM_ROUTE_123_REVIVAL_HERB                            0x481 //hoenn only flag
#define FLAG_ITEM_ROUTE_125_BIG_PEARL                               0x482 //hoenn only flag
#define FLAG_ITEM_ROUTE_127_RARE_CANDY                              0x483 //hoenn only flag
#define FLAG_ITEM_ROUTE_132_PROTEIN                                 0x484 //hoenn only flag
#define FLAG_ITEM_ROUTE_133_MAX_REVIVE                              0x485 //hoenn only flag
#define FLAG_ITEM_ROUTE_134_CARBOS                                  0x486 //hoenn only flag
#define FLAG_ITEM_ROUTE_134_STAR_PIECE                              0x487 //hoenn only flag
#define FLAG_ITEM_ROUTE_114_ENERGY_POWDER                           0x488 //hoenn only flag
#define FLAG_ITEM_ROUTE_115_PP_UP                                   0x489 //hoenn only flag
#define FLAG_ITEM_ARTISAN_CAVE_B1F_HP_UP                            0x48A //hoenn only flag
#define FLAG_ITEM_ARTISAN_CAVE_1F_CARBOS                            0x48B //hoenn only flag
#define FLAG_ITEM_MAGMA_HIDEOUT_2F_2R_MAX_ELIXIR                    0x48C //hoenn only flag
#define FLAG_ITEM_MAGMA_HIDEOUT_2F_2R_FULL_RESTORE                  0x48D //hoenn only flag
#define FLAG_ITEM_MAGMA_HIDEOUT_3F_1R_NUGGET                        0x48E //hoenn only flag
#define FLAG_ITEM_MAGMA_HIDEOUT_3F_2R_PP_MAX                        0x48F //hoenn only flag
#define FLAG_ITEM_MAGMA_HIDEOUT_4F_MAX_REVIVE                       0x490 //hoenn only flag
#define FLAG_ITEM_SAFARI_ZONE_NORTH_EAST_NUGGET                     0x491 //hoenn only flag
#define FLAG_ITEM_SAFARI_ZONE_SOUTH_EAST_BIG_PEARL                  0x492 //hoenn only flag

#define FLAG_ITEM_ROUTE_219_ANTIDOTE                                0x493
#define FLAG_ITEM_ROUTE_220_MAX_REPEL                               0x494
#define FLAG_ITEM_ROUTE_220_CARBOS                                  0x495
#define FLAG_ITEM_ROUTE_220_PROTEIN                                 0x496
#define FLAG_ITEM_ROUTE_221_PURE_INCENSE                            0x497
#define FLAG_ITEM_ROUTE_221_ULTRA_BALL                              0x498
#define FLAG_ITEM_ROUTE_221_TM81                                    0x499
#define FLAG_ITEM_ROUTE_202_POTION                                  0x49A
#define FLAG_ITEM_JUBILIFE_CITY_POTION                              0x49B
#define FLAG_ITEM_ROUTE_218_RARE_CANDY                              0x49C
#define FLAG_ITEM_ROUTE_218_X_ACCURACY                              0x49D
#define FLAG_ITEM_ROUTE_218_HYPER_POTION                            0x49E
#define FLAG_ITEM_CANALAVE_CITY_TM89                                0x49F
#define FLAG_ITEM_ROUTE_204_SEA_INCENSE                             0x4A0
#define FLAG_ITEM_ROUTE_204_PARALYZE_HEAL                           0x4A1
#define FLAG_ITEM_ROUTE_204_HP_UP                                   0x4A2
#define FLAG_ITEM_ROUTE_204_AWAKENING                               0x4A3
#define FLAG_ITEM_ROUTE_204_TM09                                    0x4A4
#define FLAG_ITEM_RAVAGED_PATH_POTION                               0x4A5
#define FLAG_ITEM_RAVAGED_PATH_LUCK_INCENSE                         0x4A6
#define FLAG_ITEM_RAVAGED_PATH_TM39                                 0x4A7
#define FLAG_ITEM_RAVAGED_PATH_TM03                                 0x4A8
#define FLAG_ITEM_ROUTE_203_POKE_BALL                               0x4A9
#define FLAG_ITEM_ROUTE_203_REPEL                                   0x4AA
#define FLAG_ITEM_ROUTE_203_X_DEFENSE                               0x4AB
#define FLAG_ITEM_VALLEY_WINDWORKS_POTION                           0x4AC
#define FLAG_ITEM_VALLEY_WINDWORKS_ELECTIRIZER                      0x4AD
#define FLAG_ITEM_VALLEY_WINDWORKS_TM24                             0x4AE
#define FLAG_ITEM_ROUTE_205_X_SP_DEF                                0x4AF
#define FLAG_ITEM_ROUTE_205_HEAL_BALL                               0x4B0
#define FLAG_ITEM_ROUTE_205_SUPER_POTION                            0x4B1
#define FLAG_ITEM_ROUTE_205_REPEL                                   0x4B2
#define FLAG_ITEM_FLOAROMA_TOWN_LEAF_STONE                          0x4B3
#define FLAG_ITEM_FLOAROMA_TOWN_RARE_CANDY                          0x4B4
#define FLAG_ITEM_FLOAROMA_TOWN_ULTRA_BALL                          0x4B5
#define FLAG_ITEM_FLOAROMA_TOWN_MIRACLE_SEED                        0x4B6
#define FLAG_ITEM_ROUTE_205_SILVER_POWDER                           0x4B7
#define FLAG_ITEM_ROUTE_205_TM82                                    0x4B8
#define FLAG_ITEM_ROUTE_205_GUARD_SPEC                              0x4B9
#define FLAG_ITEM_ETERNA_FOREST_ANTIDOTE                                           0x4BA // Unused Flag
#define FLAG_ITEM_ETERNA_FOREST_PARALYZE_HEAL                                           0x4BB // Unused Flag
#define FLAG_ITEM_ETERNA_FOREST_NET_BALL                                           0x4BC // Unused Flag
#define FLAG_ITEM_ETERNA_FOREST_GREEN_SHARD                                           0x4BD // Unused Flag
#define FLAG_ITEM_ETERNA_FOREST_ETHER                                           0x4BE // Unused Flag
#define FLAG_ITEM_ETERNA_CITY_SUPER_POTION                                           0x4BF // Unused Flag
#define FLAG_ITEM_ETERNA_CITY_TM46                                           0x4C0 // Unused Flag
#define FLAG_ITEM_OLD_CHATEAU_OLD_GATEAU                                           0x4C1 // Unused Flag
#define FLAG_ITEM_OLD_CHATEAU_BIG_PEARL                                           0x4C2 // Unused Flag
#define FLAG_ITEM_OLD_CHATEAU_RARE_CANDY                                           0x4C3 // Unused Flag
#define FLAG_ITEM_OLD_CHATEAU_TM90                                           0x4C4 // Unused Flag
#define FLAG_ITEM_ROUTE_211_TM12                                           0x4C5 // Unused Flag
#define FLAG_ITEM_ROUTE_206_BURN_HEAL                                           0x4C6 // Unused Flag
#define FLAG_ITEM_ROUTE_206_SUPER_REPEL                                           0x4C7 // Unused Flag
#define FLAG_ITEM_ROUTE_206_POISON_BARB                                           0x4C8 // Unused Flag
#define FLAG_ITEM_ROUTE_207_POKE_BALL                                           0x4C9 // Unused Flag
#define FLAG_ITEM_ROUTE_207_REVIVE                                           0x4CA // Unused Flag
#define FLAG_ITEM_ROUTE_207_SUPER_POTION                                           0x4CB // Unused Flag
#define FLAG_ITEM_ROUTE_207_IRON                                           0x4CC // Unused Flag
#define FLAG_ITEM_ROUTE_207_TIMER_BALL                                           0x4CD // Unused Flag
#define FLAG_ITEM_WAYWARD_CAVE_TM32                                           0x4CE // Unused Flag
#define FLAG_ITEM_WAYWARD_CAVE_REVIVE                                           0x4CF // Unused Flag
#define FLAG_ITEM_WAYWARD_CAVE_ESCAPE_ROPE                                           0x4D0 // Unused Flag
#define FLAG_ITEM_WAYWARD_CAVE_GRIP_CLAW                                           0x4D1 // Unused Flag
#define FLAG_ITEM_WAYWARD_CAVE_RARE_CANDY                                           0x4D2 // Unused Flag
#define FLAG_ITEM_WAYWARD_CAVE_MAX_ETHER                                           0x4D3 // Unused Flag
#define FLAG_ITEM_WAYWARD_CAVE_TM26                                           0x4D4 // Unused Flag
#define FLAG_ITEM_OREBURGH_CITY_YELLOW_SHARD                                           0x4D5 // Unused Flag
#define FLAG_ITEM_OREBURGH_CITY_DIRE_HIT                                           0x4D6 // Unused Flag
#define FLAG_ITEM_OREBURGH_MINE_POKE_BALL                                           0x4D7 // Unused Flag
#define FLAG_ITEM_OREBURGH_MINE_ESCAPE_ROPE                                           0x4D8 // Unused Flag
#define FLAG_ITEM_OREBURGH_MINE_POTION                                           0x4D9 // Unused Flag
#define FLAG_UNUSED_0x4DA                                           0x4DA // Unused Flag
#define FLAG_UNUSED_0x4DB                                           0x4DB // Unused Flag
#define FLAG_UNUSED_0x4DC                                           0x4DC // Unused Flag
#define FLAG_UNUSED_0x4DD                                           0x4DD // Unused Flag
#define FLAG_UNUSED_0x4DE                                           0x4DE // blank plate
#define FLAG_UNUSED_0x4DF                                           0x4DF // fist plate
#define FLAG_UNUSED_0x4E0                                           0x4E0 // sky plate
#define FLAG_UNUSED_0x4E1                                           0x4E1 // toxic plate
#define FLAG_UNUSED_0x4E2                                           0x4E2 // earth plate
#define FLAG_UNUSED_0x4E3                                           0x4E3 // stone plate
#define FLAG_UNUSED_0x4E4                                           0x4E4
#define FLAG_UNUSED_0x4E5                                           0x4E5 // spooky plate
#define FLAG_UNUSED_0x4E6                                           0x4E6 // iron plate
#define FLAG_UNUSED_0x4E7                                           0x4E7 // flame plate
#define FLAG_ITEM_ROUTE_220_SPLASH_PLATE                            0x4E8 // splash plate
#define FLAG_UNUSED_0x4E9                                           0x4E9 // meadow plate
#define FLAG_UNUSED_0x4EA                                           0x4EA // zap plate
#define FLAG_UNUSED_0x4EB                                           0x4EB // mind plate
#define FLAG_UNUSED_0x4EC                                           0x4EC // icicle plate
#define FLAG_UNUSED_0x4ED                                           0x4ED
#define FLAG_UNUSED_0x4EE                                           0x4EE // dread plate (move to hallowed tower)
#define FLAG_UNUSED_0x4EF                                           0x4EF // pixie plate

#define FLAG_DEFEATED_RUSTBORO_GYM                                  0x4F0 // hoenn only flag
#define FLAG_DEFEATED_DEWFORD_GYM                                   0x4F1 // hoenn only flag
#define FLAG_DEFEATED_MAUVILLE_GYM                                  0x4F2 // hoenn only flag
#define FLAG_DEFEATED_LAVARIDGE_GYM                                 0x4F3 // hoenn only flag
#define FLAG_DEFEATED_PETALBURG_GYM                                 0x4F4 // hoenn only flag
#define FLAG_DEFEATED_FORTREE_GYM                                   0x4F5 // hoenn only flag
#define FLAG_DEFEATED_MOSSDEEP_GYM                                  0x4F6 // hoenn only flag
#define FLAG_DEFEATED_SOOTOPOLIS_GYM                                0x4F7 // hoenn only flag
#define FLAG_DEFEATED_METEOR_FALLS_STEVEN                           0x4F8 // hoenn only flag

#define FLAG_UNUSED_0x4F9                                           0x4F9 // Unused Flag
#define FLAG_UNUSED_0x4FA                                           0x4FA // Unused Flag

#define FLAG_DEFEATED_ELITE_4_SIDNEY                                0x4FB // hoenn only flag
#define FLAG_DEFEATED_ELITE_4_PHOEBE                                0x4FC // hoenn only flag
#define FLAG_DEFEATED_ELITE_4_GLACIA                                0x4FD // hoenn only flag
#define FLAG_DEFEATED_ELITE_4_DRAKE                                 0x4FE // hoenn only flag

#define FLAG_UNUSED_0x4FF                                           0x4FF // Unused Flag

// Trainer Flags
// Trainer flags occupy 0x500 - 0x85F, the last 9 of which are unused
// See constants/opponents.h. The values there + FLAG_TRAINER_FLAG_START are the flag IDs

#define TRAINER_FLAGS_START                                         0x500
#define TRAINER_FLAGS_END                                           (TRAINER_FLAGS_START + MAX_TRAINERS_COUNT - 1) // 0x85F

// System Flags

#define SYSTEM_FLAGS                                   (TRAINER_FLAGS_END + 1) // 0x860

#define FLAG_SYS_POKEMON_GET                         (SYSTEM_FLAGS + 0x0) // FLAG_0x860
#define FLAG_SYS_POKEDEX_GET                         (SYSTEM_FLAGS + 0x1)
#define FLAG_SYS_POKENAV_GET                         (SYSTEM_FLAGS + 0x2)
#define FLAG_UNUSED_0x863                            (SYSTEM_FLAGS + 0x3) // Unused Flag
#define FLAG_SYS_GAME_CLEAR                          (SYSTEM_FLAGS + 0x4)
#define FLAG_SYS_CHAT_USED                           (SYSTEM_FLAGS + 0x5)
#define FLAG_UNLOCKED_TRENDY_SAYINGS                 (SYSTEM_FLAGS + 0x6)

// Badges
#define FLAG_BADGE01_GET                             (SYSTEM_FLAGS + 0x7)
#define FLAG_BADGE02_GET                             (SYSTEM_FLAGS + 0x8)
#define FLAG_BADGE03_GET                             (SYSTEM_FLAGS + 0x9)
#define FLAG_BADGE04_GET                             (SYSTEM_FLAGS + 0xA)
#define FLAG_BADGE05_GET                             (SYSTEM_FLAGS + 0xB)
#define FLAG_BADGE06_GET                             (SYSTEM_FLAGS + 0xC)
#define FLAG_BADGE07_GET                             (SYSTEM_FLAGS + 0xD)
#define FLAG_BADGE08_GET                             (SYSTEM_FLAGS + 0xE)
#define NUM_BADGES                                   (1 + FLAG_BADGE08_GET - FLAG_BADGE01_GET)

// Towns and Cities
#define FLAG_VISITED_LITTLEROOT_TOWN                (SYSTEM_FLAGS + 0xF)  // hoenn only flag
#define FLAG_VISITED_OLDALE_TOWN                    (SYSTEM_FLAGS + 0x10) // hoenn only flag
#define FLAG_VISITED_DEWFORD_TOWN                   (SYSTEM_FLAGS + 0x11) // hoenn only flag
#define FLAG_VISITED_LAVARIDGE_TOWN                 (SYSTEM_FLAGS + 0x12) // hoenn only flag
#define FLAG_VISITED_FALLARBOR_TOWN                 (SYSTEM_FLAGS + 0x13) // hoenn only flag
#define FLAG_VISITED_VERDANTURF_TOWN                (SYSTEM_FLAGS + 0x14) // hoenn only flag
#define FLAG_VISITED_PACIFIDLOG_TOWN                (SYSTEM_FLAGS + 0x15) // hoenn only flag
#define FLAG_VISITED_PETALBURG_CITY                 (SYSTEM_FLAGS + 0x16) // hoenn only flag
#define FLAG_VISITED_SLATEPORT_CITY                 (SYSTEM_FLAGS + 0x17) // hoenn only flag
#define FLAG_VISITED_MAUVILLE_CITY                  (SYSTEM_FLAGS + 0x18) // hoenn only flag
#define FLAG_VISITED_RUSTBORO_CITY                  (SYSTEM_FLAGS + 0x19) // hoenn only flag
#define FLAG_VISITED_FORTREE_CITY                   (SYSTEM_FLAGS + 0x1A) // hoenn only flag
#define FLAG_VISITED_LILYCOVE_CITY                  (SYSTEM_FLAGS + 0x1B) // hoenn only flag
#define FLAG_VISITED_MOSSDEEP_CITY                  (SYSTEM_FLAGS + 0x1C) // hoenn only flag
#define FLAG_VISITED_SOOTOPOLIS_CITY                (SYSTEM_FLAGS + 0x1D) // hoenn only flag
#define FLAG_VISITED_EVER_GRANDE_CITY               (SYSTEM_FLAGS + 0x1E) // hoenn only flag

#define FLAG_IS_CHAMPION                            (SYSTEM_FLAGS + 0x1F) // Seems to be related to linking.
#define FLAG_NURSE_UNION_ROOM_REMINDER              (SYSTEM_FLAGS + 0x20)

#define FLAG_VISITED_TWINLEAF_TOWN                  (SYSTEM_FLAGS + 0x21)
#define FLAG_VISITED_SANDGEM_TOWN                   (SYSTEM_FLAGS + 0x22)
#define FLAG_VISITED_JUBILIFE_CITY                  (SYSTEM_FLAGS + 0x23) // Unused Flag
#define FLAG_UNUSED_0x884                           (SYSTEM_FLAGS + 0x24) // Unused Flag
#define FLAG_UNUSED_0x885                           (SYSTEM_FLAGS + 0x25) // Unused Flag
#define FLAG_UNUSED_0x886                           (SYSTEM_FLAGS + 0x26) // Unused Flag
#define FLAG_UNUSED_0x887                           (SYSTEM_FLAGS + 0x27) // Unused Flag

#define FLAG_SYS_USE_FLASH                          (SYSTEM_FLAGS + 0x28)
#define FLAG_SYS_USE_STRENGTH                       (SYSTEM_FLAGS + 0x29)
#define FLAG_SYS_WEATHER_CTRL                       (SYSTEM_FLAGS + 0x2A)
#define FLAG_SYS_CYCLING_ROAD                       (SYSTEM_FLAGS + 0x2B)
#define FLAG_SYS_SAFARI_MODE                        (SYSTEM_FLAGS + 0x2C)
#define FLAG_SYS_CRUISE_MODE                        (SYSTEM_FLAGS + 0x2D)

#define FLAG_UNUSED_0x88E                           (SYSTEM_FLAGS + 0x2E) // Unused Flag
#define FLAG_UNUSED_0x88F                           (SYSTEM_FLAGS + 0x2F) // Unused Flag

#define FLAG_SYS_TV_HOME                            (SYSTEM_FLAGS + 0x30)
#define FLAG_SYS_TV_WATCH                           (SYSTEM_FLAGS + 0x31)
#define FLAG_SYS_TV_START                           (SYSTEM_FLAGS + 0x32)
#define FLAG_SYS_CHANGED_DEWFORD_TREND              (SYSTEM_FLAGS + 0x33)
#define FLAG_SYS_MIX_RECORD                         (SYSTEM_FLAGS + 0x34)
#define FLAG_SYS_CLOCK_SET                          (SYSTEM_FLAGS + 0x35)
#define FLAG_SYS_NATIONAL_DEX                       (SYSTEM_FLAGS + 0x36)
#define FLAG_SYS_CAVE_SHIP                          (SYSTEM_FLAGS + 0x37) // Unused Flag, leftover from R/S debug, presumably used by Emerald's debug too
#define FLAG_SYS_CAVE_WONDER                        (SYSTEM_FLAGS + 0x38) // Unused Flag, same as above
#define FLAG_SYS_CAVE_BATTLE                        (SYSTEM_FLAGS + 0x39) // Unused Flag, same as above
#define FLAG_SYS_SHOAL_TIDE                         (SYSTEM_FLAGS + 0x3A)
#define FLAG_SYS_RIBBON_GET                         (SYSTEM_FLAGS + 0x3B)

#define FLAG_LANDMARK_FLOWER_SHOP                   (SYSTEM_FLAGS + 0x3C) // hoenn only flag
#define FLAG_LANDMARK_MR_BRINEY_HOUSE               (SYSTEM_FLAGS + 0x3D) // hoenn only flag
#define FLAG_LANDMARK_ABANDONED_SHIP                (SYSTEM_FLAGS + 0x3E) // hoenn only flag
#define FLAG_LANDMARK_SEASHORE_HOUSE                (SYSTEM_FLAGS + 0x3F) // hoenn only flag
#define FLAG_LANDMARK_NEW_MAUVILLE                  (SYSTEM_FLAGS + 0x40) // hoenn only flag
#define FLAG_LANDMARK_OLD_LADY_REST_SHOP            (SYSTEM_FLAGS + 0x41) // hoenn only flag
#define FLAG_LANDMARK_TRICK_HOUSE                   (SYSTEM_FLAGS + 0x42) // hoenn only flag
#define FLAG_LANDMARK_WINSTRATE_FAMILY              (SYSTEM_FLAGS + 0x43) // hoenn only flag
#define FLAG_LANDMARK_GLASS_WORKSHOP                (SYSTEM_FLAGS + 0x44) // hoenn only flag
#define FLAG_LANDMARK_LANETTES_HOUSE                (SYSTEM_FLAGS + 0x45) // hoenn only flag
#define FLAG_LANDMARK_POKEMON_DAYCARE               (SYSTEM_FLAGS + 0x46) // hoenn only flag
#define FLAG_LANDMARK_SEAFLOOR_CAVERN               (SYSTEM_FLAGS + 0x47) // hoenn only flag
#define FLAG_LANDMARK_BATTLE_FRONTIER               (SYSTEM_FLAGS + 0x48) // hoenn only flag
#define FLAG_LANDMARK_SOUTHERN_ISLAND               (SYSTEM_FLAGS + 0x49) // hoenn only flag
#define FLAG_LANDMARK_FIERY_PATH                    (SYSTEM_FLAGS + 0x4A) // hoenn only flag

#define FLAG_SYS_PC_LANETTE                         (SYSTEM_FLAGS + 0x4B) // hoenn only flag
#define FLAG_SYS_MYSTERY_EVENT_ENABLE               (SYSTEM_FLAGS + 0x4C)
#define FLAG_SYS_ENC_UP_ITEM                        (SYSTEM_FLAGS + 0x4D)
#define FLAG_SYS_ENC_DOWN_ITEM                      (SYSTEM_FLAGS + 0x4E)
#define FLAG_SYS_BRAILLE_DIG                        (SYSTEM_FLAGS + 0x4F)
#define FLAG_SYS_REGIROCK_PUZZLE_COMPLETED          (SYSTEM_FLAGS + 0x50)
#define FLAG_SYS_BRAILLE_REGICE_COMPLETED           (SYSTEM_FLAGS + 0x51)
#define FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED         (SYSTEM_FLAGS + 0x52)
#define FLAG_ENABLE_SHIP_SOUTHERN_ISLAND            (SYSTEM_FLAGS + 0x53)

#define FLAG_LANDMARK_POKEMON_LEAGUE                (SYSTEM_FLAGS + 0x54) // hoenn only flag
#define FLAG_LANDMARK_ISLAND_CAVE                   (SYSTEM_FLAGS + 0x55) // hoenn only flag
#define FLAG_LANDMARK_DESERT_RUINS                  (SYSTEM_FLAGS + 0x56) // hoenn only flag
#define FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE          (SYSTEM_FLAGS + 0x57) // hoenn only flag
#define FLAG_LANDMARK_SCORCHED_SLAB                 (SYSTEM_FLAGS + 0x58) // hoenn only flag
#define FLAG_LANDMARK_ANCIENT_TOMB                  (SYSTEM_FLAGS + 0x59) // hoenn only flag
#define FLAG_LANDMARK_TUNNELERS_REST_HOUSE          (SYSTEM_FLAGS + 0x5A) // hoenn only flag
#define FLAG_LANDMARK_HUNTERS_HOUSE                 (SYSTEM_FLAGS + 0x5B) // hoenn only flag
#define FLAG_LANDMARK_SEALED_CHAMBER                (SYSTEM_FLAGS + 0x5C) // hoenn only flag

#define FLAG_SYS_TV_LATIAS_LATIOS                   (SYSTEM_FLAGS + 0x5D)

#define FLAG_LANDMARK_SKY_PILLAR                    (SYSTEM_FLAGS + 0x5E) // hoenn only flag

#define FLAG_SYS_SHOAL_ITEM                         (SYSTEM_FLAGS + 0x5F)
#define FLAG_SYS_B_DASH                             (SYSTEM_FLAGS + 0x60) // RECEIVED Running Shoes
#define FLAG_SYS_CTRL_OBJ_DELETE                    (SYSTEM_FLAGS + 0x61)
#define FLAG_SYS_RESET_RTC_ENABLE                   (SYSTEM_FLAGS + 0x62)

#define FLAG_LANDMARK_BERRY_MASTERS_HOUSE           (SYSTEM_FLAGS + 0x63) // hoenn only flag

#define FLAG_SYS_TOWER_SILVER                       (SYSTEM_FLAGS + 0x64)
#define FLAG_SYS_TOWER_GOLD                         (SYSTEM_FLAGS + 0x65)
#define FLAG_SYS_DOME_SILVER                        (SYSTEM_FLAGS + 0x66)
#define FLAG_SYS_DOME_GOLD                          (SYSTEM_FLAGS + 0x67)
#define FLAG_SYS_PALACE_SILVER                      (SYSTEM_FLAGS + 0x68)
#define FLAG_SYS_PALACE_GOLD                        (SYSTEM_FLAGS + 0x69)
#define FLAG_SYS_ARENA_SILVER                       (SYSTEM_FLAGS + 0x6A)
#define FLAG_SYS_ARENA_GOLD                         (SYSTEM_FLAGS + 0x6B)
#define FLAG_SYS_FACTORY_SILVER                     (SYSTEM_FLAGS + 0x6C)
#define FLAG_SYS_FACTORY_GOLD                       (SYSTEM_FLAGS + 0x6D)
#define FLAG_SYS_PIKE_SILVER                        (SYSTEM_FLAGS + 0x6E)
#define FLAG_SYS_PIKE_GOLD                          (SYSTEM_FLAGS + 0x6F)
#define FLAG_SYS_PYRAMID_SILVER                     (SYSTEM_FLAGS + 0x70)
#define FLAG_SYS_PYRAMID_GOLD                       (SYSTEM_FLAGS + 0x71)
#define FLAG_SYS_FRONTIER_PASS                      (SYSTEM_FLAGS + 0x72)

#define FLAG_MAP_SCRIPT_CHECKED_DEOXYS              (SYSTEM_FLAGS + 0x73)
#define FLAG_DEOXYS_ROCK_COMPLETE                   (SYSTEM_FLAGS + 0x74)
#define FLAG_ENABLE_SHIP_BIRTH_ISLAND               (SYSTEM_FLAGS + 0x75)
#define FLAG_ENABLE_SHIP_FARAWAY_ISLAND             (SYSTEM_FLAGS + 0x76)

#define FLAG_SHOWN_BOX_WAS_FULL_MESSAGE             (SYSTEM_FLAGS + 0x77)

#define FLAG_ARRIVED_ON_FARAWAY_ISLAND              (SYSTEM_FLAGS + 0x78)
#define FLAG_ARRIVED_AT_MARINE_CAVE_EMERGE_SPOT     (SYSTEM_FLAGS + 0x79)
#define FLAG_ARRIVED_AT_TERRA_CAVE_ENTRANCE         (SYSTEM_FLAGS + 0x7A)

#define FLAG_SYS_MYSTERY_GIFT_ENABLE                (SYSTEM_FLAGS + 0x7B)

#define FLAG_ENTERED_MIRAGE_TOWER                   (SYSTEM_FLAGS + 0x7C)
#define FLAG_LANDMARK_ALTERING_CAVE                 (SYSTEM_FLAGS + 0x7D)
#define FLAG_LANDMARK_DESERT_UNDERPASS              (SYSTEM_FLAGS + 0x7E)
#define FLAG_LANDMARK_ARTISAN_CAVE                  (SYSTEM_FLAGS + 0x7F)
#define FLAG_ENABLE_SHIP_NAVEL_ROCK                 (SYSTEM_FLAGS + 0x80)
#define FLAG_ARRIVED_AT_NAVEL_ROCK                  (SYSTEM_FLAGS + 0x81)
#define FLAG_LANDMARK_TRAINER_HILL                  (SYSTEM_FLAGS + 0x82)

#define FLAG_UNUSED_0x8E3                           (SYSTEM_FLAGS + 0x83) // Unused Flag

#define FLAG_RECEIVED_POKEDEX_FROM_BIRCH            (SYSTEM_FLAGS + 0x84)

#define FLAG_UNUSED_0x8E5                           (SYSTEM_FLAGS + 0x85) // Unused Flag
#define FLAG_UNUSED_0x8E6                           (SYSTEM_FLAGS + 0x86) // Unused Flag
#define FLAG_UNUSED_0x8E7                           (SYSTEM_FLAGS + 0x87) // Unused Flag
#define FLAG_UNUSED_0x8E8                           (SYSTEM_FLAGS + 0x88) // Unused Flag
#define FLAG_UNUSED_0x8E9                           (SYSTEM_FLAGS + 0x89) // Unused Flag
#define FLAG_UNUSED_0x8EA                           (SYSTEM_FLAGS + 0x8A) // Unused Flag
#define FLAG_UNUSED_0x8EB                           (SYSTEM_FLAGS + 0x8B) // Unused Flag
#define FLAG_UNUSED_0x8EC                           (SYSTEM_FLAGS + 0x8C) // Unused Flag
#define FLAG_UNUSED_0x8ED                           (SYSTEM_FLAGS + 0x8D) // Unused Flag
#define FLAG_UNUSED_0x8EE                           (SYSTEM_FLAGS + 0x8E) // Unused Flag
#define FLAG_UNUSED_0x8EF                           (SYSTEM_FLAGS + 0x8F) // Unused Flag
#define FLAG_UNUSED_0x8F0                           (SYSTEM_FLAGS + 0x90) // Unused Flag
#define FLAG_UNUSED_0x8F1                           (SYSTEM_FLAGS + 0x91) // Unused Flag
#define FLAG_UNUSED_0x8F2                           (SYSTEM_FLAGS + 0x92) // Unused Flag
#define FLAG_UNUSED_0x8F3                           (SYSTEM_FLAGS + 0x93) // Unused Flag
#define FLAG_UNUSED_0x8F4                           (SYSTEM_FLAGS + 0x94) // Unused Flag
#define FLAG_UNUSED_0x8F5                           (SYSTEM_FLAGS + 0x95) // Unused Flag
#define FLAG_UNUSED_0x8F6                           (SYSTEM_FLAGS + 0x96) // Unused Flag
#define FLAG_UNUSED_0x8F7                           (SYSTEM_FLAGS + 0x97) // Unused Flag
#define FLAG_UNUSED_0x8F8                           (SYSTEM_FLAGS + 0x98) // Unused Flag
#define FLAG_UNUSED_0x8F9                           (SYSTEM_FLAGS + 0x99) // Unused Flag
#define FLAG_UNUSED_0x8FA                           (SYSTEM_FLAGS + 0x9A) // Unused Flag
#define FLAG_UNUSED_0x8FB                           (SYSTEM_FLAGS + 0x9B) // Unused Flag
#define FLAG_UNUSED_0x8FC                           (SYSTEM_FLAGS + 0x9C) // Unused Flag
#define FLAG_UNUSED_0x8FD                           (SYSTEM_FLAGS + 0x9D) // Unused Flag
#define FLAG_UNUSED_0x8FE                           (SYSTEM_FLAGS + 0x9E) // Unused Flag
#define FLAG_UNUSED_0x8FF                           (SYSTEM_FLAGS + 0x9F) // Unused Flag
#define FLAG_UNUSED_0x900                           (SYSTEM_FLAGS + 0xA0) // Unused Flag
#define FLAG_UNUSED_0x901                           (SYSTEM_FLAGS + 0xA1) // Unused Flag
#define FLAG_UNUSED_0x902                           (SYSTEM_FLAGS + 0xA2) // Unused Flag
#define FLAG_UNUSED_0x903                           (SYSTEM_FLAGS + 0xA3) // Unused Flag
#define FLAG_UNUSED_0x904                           (SYSTEM_FLAGS + 0xA4) // Unused Flag
#define FLAG_UNUSED_0x905                           (SYSTEM_FLAGS + 0xA5) // Unused Flag
#define FLAG_UNUSED_0x906                           (SYSTEM_FLAGS + 0xA6) // Unused Flag
#define FLAG_UNUSED_0x907                           (SYSTEM_FLAGS + 0xA7) // Unused Flag
#define FLAG_UNUSED_0x908                           (SYSTEM_FLAGS + 0xA8) // Unused Flag
#define FLAG_UNUSED_0x909                           (SYSTEM_FLAGS + 0xA9) // Unused Flag
#define FLAG_UNUSED_0x90A                           (SYSTEM_FLAGS + 0xAA) // Unused Flag
#define FLAG_UNUSED_0x90B                           (SYSTEM_FLAGS + 0xAB) // Unused Flag
#define FLAG_UNUSED_0x90C                           (SYSTEM_FLAGS + 0xAC) // Unused Flag
#define FLAG_UNUSED_0x90D                           (SYSTEM_FLAGS + 0xAD) // Unused Flag
#define FLAG_UNUSED_0x90E                           (SYSTEM_FLAGS + 0xAE) // Unused Flag
#define FLAG_UNUSED_0x90F                           (SYSTEM_FLAGS + 0xAF) // Unused Flag
#define FLAG_UNUSED_0x910                           (SYSTEM_FLAGS + 0xB0) // Unused Flag
#define FLAG_UNUSED_0x911                           (SYSTEM_FLAGS + 0xB1) // Unused Flag
#define FLAG_UNUSED_0x912                           (SYSTEM_FLAGS + 0xB2) // Unused Flag
#define FLAG_UNUSED_0x913                           (SYSTEM_FLAGS + 0xB3) // Unused Flag
#define FLAG_UNUSED_0x914                           (SYSTEM_FLAGS + 0xB4) // Unused Flag
#define FLAG_UNUSED_0x915                           (SYSTEM_FLAGS + 0xB5) // Unused Flag
#define FLAG_UNUSED_0x916                           (SYSTEM_FLAGS + 0xB6) // Unused Flag
#define FLAG_UNUSED_0x917                           (SYSTEM_FLAGS + 0xB7) // Unused Flag
#define FLAG_UNUSED_0x918                           (SYSTEM_FLAGS + 0xB8) // Unused Flag
#define FLAG_UNUSED_0x919                           (SYSTEM_FLAGS + 0xB9) // Unused Flag
#define FLAG_UNUSED_0x91A                           (SYSTEM_FLAGS + 0xBA) // Unused Flag
#define FLAG_UNUSED_0x91B                           (SYSTEM_FLAGS + 0xBB) // Unused Flag
#define FLAG_UNUSED_0x91C                           (SYSTEM_FLAGS + 0xBC) // Unused Flag
#define FLAG_UNUSED_0x91D                           (SYSTEM_FLAGS + 0xBD) // Unused Flag
#define FLAG_UNUSED_0x91E                           (SYSTEM_FLAGS + 0xBE) // Unused Flag
#define FLAG_UNUSED_0x91F                           (SYSTEM_FLAGS + 0xBF) // Unused Flag

// Daily Flags
// These flags are cleared once per day
// The start and end are byte-aligned because the flags are cleared in byte increments
#define DAILY_FLAGS_START                           (FLAG_UNUSED_0x91F + (8 - FLAG_UNUSED_0x91F % 8))
#define FLAG_UNUSED_0x920                           (DAILY_FLAGS_START + 0x0)  // Unused Flag
#define FLAG_DAILY_CONTEST_LOBBY_RECEIVED_BERRY     (DAILY_FLAGS_START + 0x1)
#define FLAG_DAILY_SECRET_BASE                      (DAILY_FLAGS_START + 0x2)
#define FLAG_DAILY_ROUTE_221_LEVEL_SET              (DAILY_FLAGS_START + 0x3)  // Unused Flag
#define FLAG_DAILY_ROUTE_221_LEVEL_RECEIVED_ITEM    (DAILY_FLAGS_START + 0x4)  // Unused Flag
#define FLAG_UNUSED_0x925                           (DAILY_FLAGS_START + 0x5)  // Unused Flag
#define FLAG_UNUSED_0x926                           (DAILY_FLAGS_START + 0x6)  // Unused Flag
#define FLAG_UNUSED_0x927                           (DAILY_FLAGS_START + 0x7)  // Unused Flag
#define FLAG_UNUSED_0x928                           (DAILY_FLAGS_START + 0x8)  // Unused Flag
#define FLAG_UNUSED_0x929                           (DAILY_FLAGS_START + 0x9)  // Unused Flag
#define FLAG_DAILY_PICKED_LOTO_TICKET               (DAILY_FLAGS_START + 0xA)
#define FLAG_DAILY_ROUTE_114_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xB)
#define FLAG_DAILY_ROUTE_111_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xC)
#define FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY      (DAILY_FLAGS_START + 0xD)
#define FLAG_DAILY_ROUTE_120_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xE)
#define FLAG_DAILY_LILYCOVE_RECEIVED_BERRY          (DAILY_FLAGS_START + 0xF)
#define FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY       (DAILY_FLAGS_START + 0x10)
#define FLAG_DAILY_BERRY_MASTERS_WIFE               (DAILY_FLAGS_START + 0x11)
#define FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY        (DAILY_FLAGS_START + 0x12)
#define FLAG_UNUSED_0x933                           (DAILY_FLAGS_START + 0x13) // Unused Flag
#define FLAG_DAILY_APPRENTICE_LEAVES                (DAILY_FLAGS_START + 0x14)

#define FLAG_UNUSED_0x935                           (DAILY_FLAGS_START + 0x15) // Unused Flag
#define FLAG_UNUSED_0x936                           (DAILY_FLAGS_START + 0x16) // Unused Flag
#define FLAG_UNUSED_0x937                           (DAILY_FLAGS_START + 0x17) // Unused Flag
#define FLAG_UNUSED_0x938                           (DAILY_FLAGS_START + 0x18) // Unused Flag
#define FLAG_UNUSED_0x939                           (DAILY_FLAGS_START + 0x19) // Unused Flag
#define FLAG_UNUSED_0x93A                           (DAILY_FLAGS_START + 0x1A) // Unused Flag
#define FLAG_UNUSED_0x93B                           (DAILY_FLAGS_START + 0x1B) // Unused Flag
#define FLAG_UNUSED_0x93C                           (DAILY_FLAGS_START + 0x1C) // Unused Flag
#define FLAG_UNUSED_0x93D                           (DAILY_FLAGS_START + 0x1D) // Unused Flag
#define FLAG_UNUSED_0x93E                           (DAILY_FLAGS_START + 0x1E) // Unused Flag
#define FLAG_UNUSED_0x93F                           (DAILY_FLAGS_START + 0x1F) // Unused Flag
#define FLAG_UNUSED_0x940                           (DAILY_FLAGS_START + 0x20) // Unused Flag
#define FLAG_UNUSED_0x941                           (DAILY_FLAGS_START + 0x21) // Unused Flag
#define FLAG_UNUSED_0x942                           (DAILY_FLAGS_START + 0x22) // Unused Flag
#define FLAG_UNUSED_0x943                           (DAILY_FLAGS_START + 0x23) // Unused Flag
#define FLAG_UNUSED_0x944                           (DAILY_FLAGS_START + 0x24) // Unused Flag
#define FLAG_UNUSED_0x945                           (DAILY_FLAGS_START + 0x25) // Unused Flag
#define FLAG_UNUSED_0x946                           (DAILY_FLAGS_START + 0x26) // Unused Flag
#define FLAG_UNUSED_0x947                           (DAILY_FLAGS_START + 0x27) // Unused Flag
#define FLAG_UNUSED_0x948                           (DAILY_FLAGS_START + 0x28) // Unused Flag
#define FLAG_UNUSED_0x949                           (DAILY_FLAGS_START + 0x29) // Unused Flag
#define FLAG_UNUSED_0x94A                           (DAILY_FLAGS_START + 0x2A) // Unused Flag
#define FLAG_UNUSED_0x94B                           (DAILY_FLAGS_START + 0x2B) // Unused Flag
#define FLAG_UNUSED_0x94C                           (DAILY_FLAGS_START + 0x2C) // Unused Flag
#define FLAG_UNUSED_0x94D                           (DAILY_FLAGS_START + 0x2D) // Unused Flag
#define FLAG_UNUSED_0x94E                           (DAILY_FLAGS_START + 0x2E) // Unused Flag
#define FLAG_UNUSED_0x94F                           (DAILY_FLAGS_START + 0x2F) // Unused Flag
#define FLAG_UNUSED_0x950                           (DAILY_FLAGS_START + 0x30) // Unused Flag
#define FLAG_UNUSED_0x951                           (DAILY_FLAGS_START + 0x31) // Unused Flag
#define FLAG_UNUSED_0x952                           (DAILY_FLAGS_START + 0x32) // Unused Flag
#define FLAG_UNUSED_0x953                           (DAILY_FLAGS_START + 0x33) // Unused Flag
#define FLAG_UNUSED_0x954                           (DAILY_FLAGS_START + 0x34) // Unused Flag
#define FLAG_UNUSED_0x955                           (DAILY_FLAGS_START + 0x35) // Unused Flag
#define FLAG_UNUSED_0x956                           (DAILY_FLAGS_START + 0x36) // Unused Flag
#define FLAG_UNUSED_0x957                           (DAILY_FLAGS_START + 0x37) // Unused Flag
#define FLAG_UNUSED_0x958                           (DAILY_FLAGS_START + 0x38) // Unused Flag
#define FLAG_UNUSED_0x959                           (DAILY_FLAGS_START + 0x39) // Unused Flag
#define FLAG_UNUSED_0x95A                           (DAILY_FLAGS_START + 0x3A) // Unused Flag
#define FLAG_UNUSED_0x95B                           (DAILY_FLAGS_START + 0x3B) // Unused Flag
#define FLAG_UNUSED_0x95C                           (DAILY_FLAGS_START + 0x3C) // Unused Flag
#define FLAG_UNUSED_0x95D                           (DAILY_FLAGS_START + 0x3D) // Unused Flag
#define FLAG_UNUSED_0x95E                           (DAILY_FLAGS_START + 0x3E) // Unused Flag
#define FLAG_UNUSED_0x95F                           (DAILY_FLAGS_START + 0x3F) // Unused Flag
#define DAILY_FLAGS_END                             (FLAG_UNUSED_0x95F + (7 - FLAG_UNUSED_0x95F % 8))
#define NUM_DAILY_FLAGS                             (DAILY_FLAGS_END - DAILY_FLAGS_START + 1)

#define FLAGS_COUNT (DAILY_FLAGS_END + 1)

// Special Flags (Stored in EWRAM (sSpecialFlags), not in the SaveBlock)
#define SPECIAL_FLAGS_START                     0x4000
#define FLAG_HIDE_MAP_NAME_POPUP                (SPECIAL_FLAGS_START + 0x0)
#define FLAG_DONT_TRANSITION_MUSIC              (SPECIAL_FLAGS_START + 0x1)
#define FLAG_ENABLE_MULTI_CORRIDOR_DOOR         (SPECIAL_FLAGS_START + 0x2)
#define FLAG_SPECIAL_FLAG_UNUSED_0x4003         (SPECIAL_FLAGS_START + 0x3) // Unused Flag
#define FLAG_STORING_ITEMS_IN_PYRAMID_BAG       (SPECIAL_FLAGS_START + 0x4)
#define FLAG_SAFE_FOLLOWER_MOVEMENT             (SPECIAL_FLAGS_START + 0x5) // When set, applymovement does not put the follower inside a pokeball
                                                                            // Also, scripted movements on the player will move follower(s), too
// FLAG_SPECIAL_FLAG_0x4005 - 0x407F also exist and are unused
#define SPECIAL_FLAGS_END                       (SPECIAL_FLAGS_START + 0x7F)
#define NUM_SPECIAL_FLAGS                       (SPECIAL_FLAGS_END - SPECIAL_FLAGS_START + 1)

// Temp flag aliases
#define FLAG_TEMP_SKIP_GABBY_INTERVIEW          FLAG_TEMP_1
#define FLAG_TEMP_REGICE_PUZZLE_STARTED         FLAG_TEMP_2
#define FLAG_TEMP_REGICE_PUZZLE_FAILED          FLAG_TEMP_3
#define FLAG_TEMP_HIDE_FOLLOWER                 FLAG_TEMP_E
#define FLAG_TEMP_HIDE_MIRAGE_ISLAND_BERRY_TREE FLAG_TEMP_11

#if TESTING
#define TESTING_FLAGS_START                     0x5000
#define TESTING_FLAG_SLEEP_CLAUSE               (TESTING_FLAGS_START + 0x0)
#define TESTING_FLAG_UNUSED_1                   (TESTING_FLAGS_START + 0x1)
#define TESTING_FLAG_UNUSED_2                   (TESTING_FLAGS_START + 0x2)
#define TESTING_FLAG_UNUSED_3                   (TESTING_FLAGS_START + 0x3)
#define TESTING_FLAG_UNUSED_4                   (TESTING_FLAGS_START + 0x4)
#define TESTING_FLAG_UNUSED_5                   (TESTING_FLAGS_START + 0x5)
#define TESTING_FLAG_UNUSED_6                   (TESTING_FLAGS_START + 0x6)
#define TESTING_FLAG_UNUSED_7                   (TESTING_FLAGS_START + 0x7)
#endif // TESTING

#endif // GUARD_CONSTANTS_FLAGS_H
