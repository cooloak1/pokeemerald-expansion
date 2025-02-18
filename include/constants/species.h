#ifndef GUARD_CONSTANTS_SPECIES_H
#define GUARD_CONSTANTS_SPECIES_H

// NOTE: The defines here are named in order to match Pokémon Showdown's naming conventions. This is done to avoid issues with trainerproc parsing species names. If a Pokémon does not have an entry on Showdown, use your best judgement.
// Additionally, we have tried to reduce down to as few defines as possible, because programs like porymap does not always properly handle having multiple defines.
// Discussion: https://github.com/rh-hideout/pokeemerald-expansion/pull/5075#issuecomment-2384088602
// Showdown: https://github.com/smogon/Pokemon-Showdown/blob/master/data/pokedex.ts

#define SPECIES_NONE                                    0
#define SPECIES_BULBASAUR                               1
#define SPECIES_IVYSAUR                                 2
#define SPECIES_VENUSAUR                                3
#define SPECIES_CHARMANDER                              4
#define SPECIES_CHARMELEON                              5
#define SPECIES_CHARIZARD                               6
#define SPECIES_SQUIRTLE                                7
#define SPECIES_WARTORTLE                               8
#define SPECIES_BLASTOISE                               9
#define SPECIES_CATERPIE                                10
#define SPECIES_METAPOD                                 11
#define SPECIES_BUTTERFREE                              12
#define SPECIES_WEEDLE                                  13
#define SPECIES_KAKUNA                                  14
#define SPECIES_BEEDRILL                                15
#define SPECIES_PIDGEY                                  16
#define SPECIES_PIDGEOTTO                               17
#define SPECIES_PIDGEOT                                 18
#define SPECIES_RATTATA                                 19
#define SPECIES_RATICATE                                20
#define SPECIES_SPEAROW                                 21
#define SPECIES_FEAROW                                  22
#define SPECIES_EKANS                                   23
#define SPECIES_ARBOK                                   24
#define SPECIES_PIKACHU                                 25
#define SPECIES_RAICHU                                  26
#define SPECIES_SANDSHREW                               27
#define SPECIES_SANDSLASH                               28
#define SPECIES_NIDORAN_F                               29
#define SPECIES_NIDORINA                                30
#define SPECIES_NIDOQUEEN                               31
#define SPECIES_NIDORAN_M                               32
#define SPECIES_NIDORINO                                33
#define SPECIES_NIDOKING                                34
#define SPECIES_CLEFAIRY                                35
#define SPECIES_CLEFABLE                                36
#define SPECIES_VULPIX                                  37
#define SPECIES_NINETALES                               38
#define SPECIES_JIGGLYPUFF                              39
#define SPECIES_WIGGLYTUFF                              40
#define SPECIES_ZUBAT                                   41
#define SPECIES_GOLBAT                                  42
#define SPECIES_ODDISH                                  43
#define SPECIES_GLOOM                                   44
#define SPECIES_VILEPLUME                               45
#define SPECIES_PARAS                                   46
#define SPECIES_PARASECT                                47
#define SPECIES_VENONAT                                 48
#define SPECIES_VENOMOTH                                49
#define SPECIES_DIGLETT                                 50
#define SPECIES_DUGTRIO                                 51
#define SPECIES_MEOWTH                                  52
#define SPECIES_PERSIAN                                 53
#define SPECIES_PSYDUCK                                 54
#define SPECIES_GOLDUCK                                 55
#define SPECIES_MANKEY                                  56
#define SPECIES_PRIMEAPE                                57
#define SPECIES_GROWLITHE                               58
#define SPECIES_ARCANINE                                59
#define SPECIES_POLIWAG                                 60
#define SPECIES_POLIWHIRL                               61
#define SPECIES_POLIWRATH                               62
#define SPECIES_ABRA                                    63
#define SPECIES_KADABRA                                 64
#define SPECIES_ALAKAZAM                                65
#define SPECIES_MACHOP                                  66
#define SPECIES_MACHOKE                                 67
#define SPECIES_MACHAMP                                 68
#define SPECIES_BELLSPROUT                              69
#define SPECIES_WEEPINBELL                              70
#define SPECIES_VICTREEBEL                              71
#define SPECIES_TENTACOOL                               72
#define SPECIES_TENTACRUEL                              73
#define SPECIES_GEODUDE                                 74
#define SPECIES_GRAVELER                                75
#define SPECIES_GOLEM                                   76
#define SPECIES_PONYTA                                  77
#define SPECIES_RAPIDASH                                78
#define SPECIES_SLOWPOKE                                79
#define SPECIES_SLOWBRO                                 80
#define SPECIES_MAGNEMITE                               81
#define SPECIES_MAGNETON                                82
#define SPECIES_FARFETCHD                               83
#define SPECIES_DODUO                                   84
#define SPECIES_DODRIO                                  85
#define SPECIES_SEEL                                    86
#define SPECIES_DEWGONG                                 87
#define SPECIES_GRIMER                                  88
#define SPECIES_MUK                                     89
#define SPECIES_SHELLDER                                90
#define SPECIES_CLOYSTER                                91
#define SPECIES_GASTLY                                  92
#define SPECIES_HAUNTER                                 93
#define SPECIES_GENGAR                                  94
#define SPECIES_ONIX                                    95
#define SPECIES_DROWZEE                                 96
#define SPECIES_HYPNO                                   97
#define SPECIES_KRABBY                                  98
#define SPECIES_KINGLER                                 99
#define SPECIES_VOLTORB                                 100
#define SPECIES_ELECTRODE                               101
#define SPECIES_EXEGGCUTE                               102
#define SPECIES_EXEGGUTOR                               103
#define SPECIES_CUBONE                                  104
#define SPECIES_MAROWAK                                 105
#define SPECIES_HITMONLEE                               106
#define SPECIES_HITMONCHAN                              107
#define SPECIES_LICKITUNG                               108
#define SPECIES_KOFFING                                 109
#define SPECIES_WEEZING                                 110
#define SPECIES_RHYHORN                                 111
#define SPECIES_RHYDON                                  112
#define SPECIES_CHANSEY                                 113
#define SPECIES_TANGELA                                 114
#define SPECIES_KANGASKHAN                              115
#define SPECIES_HORSEA                                  116
#define SPECIES_SEADRA                                  117
#define SPECIES_GOLDEEN                                 118
#define SPECIES_SEAKING                                 119
#define SPECIES_STARYU                                  120
#define SPECIES_STARMIE                                 121
#define SPECIES_MR_MIME                                 122
#define SPECIES_SCYTHER                                 123
#define SPECIES_JYNX                                    124
#define SPECIES_ELECTABUZZ                              125
#define SPECIES_MAGMAR                                  126
#define SPECIES_PINSIR                                  127
#define SPECIES_TAUROS                                  128
#define SPECIES_MAGIKARP                                129
#define SPECIES_GYARADOS                                130
#define SPECIES_LAPRAS                                  131
#define SPECIES_DITTO                                   132
#define SPECIES_EEVEE                                   133
#define SPECIES_VAPOREON                                134
#define SPECIES_JOLTEON                                 135
#define SPECIES_FLAREON                                 136
#define SPECIES_PORYGON                                 137
#define SPECIES_OMANYTE                                 138
#define SPECIES_OMASTAR                                 139
#define SPECIES_KABUTO                                  140
#define SPECIES_KABUTOPS                                141
#define SPECIES_AERODACTYL                              142
#define SPECIES_SNORLAX                                 143
#define SPECIES_ARTICUNO                                144
#define SPECIES_ZAPDOS                                  145
#define SPECIES_MOLTRES                                 146
#define SPECIES_DRATINI                                 147
#define SPECIES_DRAGONAIR                               148
#define SPECIES_DRAGONITE                               149
#define SPECIES_MEWTWO                                  150
#define SPECIES_MEW                                     151
#define SPECIES_CHIKORITA                               152
#define SPECIES_BAYLEEF                                 153
#define SPECIES_MEGANIUM                                154
#define SPECIES_CYNDAQUIL                               155
#define SPECIES_QUILAVA                                 156
#define SPECIES_TYPHLOSION                              157
#define SPECIES_TOTODILE                                158
#define SPECIES_CROCONAW                                159
#define SPECIES_FERALIGATR                              160
#define SPECIES_SENTRET                                 161
#define SPECIES_FURRET                                  162
#define SPECIES_HOOTHOOT                                163
#define SPECIES_NOCTOWL                                 164
#define SPECIES_LEDYBA                                  165
#define SPECIES_LEDIAN                                  166
#define SPECIES_SPINARAK                                167
#define SPECIES_ARIADOS                                 168
#define SPECIES_CROBAT                                  169
#define SPECIES_CHINCHOU                                170
#define SPECIES_LANTURN                                 171
#define SPECIES_PICHU                                   172
#define SPECIES_CLEFFA                                  173
#define SPECIES_IGGLYBUFF                               174
#define SPECIES_TOGEPI                                  175
#define SPECIES_TOGETIC                                 176
#define SPECIES_NATU                                    177
#define SPECIES_XATU                                    178
#define SPECIES_MAREEP                                  179
#define SPECIES_FLAAFFY                                 180
#define SPECIES_AMPHAROS                                181
#define SPECIES_BELLOSSOM                               182
#define SPECIES_MARILL                                  183
#define SPECIES_AZUMARILL                               184
#define SPECIES_SUDOWOODO                               185
#define SPECIES_POLITOED                                186
#define SPECIES_HOPPIP                                  187
#define SPECIES_SKIPLOOM                                188
#define SPECIES_JUMPLUFF                                189
#define SPECIES_AIPOM                                   190
#define SPECIES_SUNKERN                                 191
#define SPECIES_SUNFLORA                                192
#define SPECIES_YANMA                                   193
#define SPECIES_WOOPER                                  194
#define SPECIES_QUAGSIRE                                195
#define SPECIES_ESPEON                                  196
#define SPECIES_UMBREON                                 197
#define SPECIES_MURKROW                                 198
#define SPECIES_SLOWKING                                199
#define SPECIES_MISDREAVUS                              200
#define SPECIES_UNOWN                                   201
#define SPECIES_WOBBUFFET                               202
#define SPECIES_GIRAFARIG                               203
#define SPECIES_PINECO                                  204
#define SPECIES_FORRETRESS                              205
#define SPECIES_DUNSPARCE                               206
#define SPECIES_GLIGAR                                  207
#define SPECIES_STEELIX                                 208
#define SPECIES_SNUBBULL                                209
#define SPECIES_GRANBULL                                210
#define SPECIES_QWILFISH                                211
#define SPECIES_SCIZOR                                  212
#define SPECIES_SHUCKLE                                 213
#define SPECIES_HERACROSS                               214
#define SPECIES_SNEASEL                                 215
#define SPECIES_TEDDIURSA                               216
#define SPECIES_URSARING                                217
#define SPECIES_SLUGMA                                  218
#define SPECIES_MAGCARGO                                219
#define SPECIES_SWINUB                                  220
#define SPECIES_PILOSWINE                               221
#define SPECIES_CORSOLA                                 222
#define SPECIES_REMORAID                                223
#define SPECIES_OCTILLERY                               224
#define SPECIES_DELIBIRD                                225
#define SPECIES_MANTINE                                 226
#define SPECIES_SKARMORY                                227
#define SPECIES_HOUNDOUR                                228
#define SPECIES_HOUNDOOM                                229
#define SPECIES_KINGDRA                                 230
#define SPECIES_PHANPY                                  231
#define SPECIES_DONPHAN                                 232
#define SPECIES_PORYGON2                                233
#define SPECIES_STANTLER                                234
#define SPECIES_SMEARGLE                                235
#define SPECIES_TYROGUE                                 236
#define SPECIES_HITMONTOP                               237
#define SPECIES_SMOOCHUM                                238
#define SPECIES_ELEKID                                  239
#define SPECIES_MAGBY                                   240
#define SPECIES_MILTANK                                 241
#define SPECIES_BLISSEY                                 242
#define SPECIES_RAIKOU                                  243
#define SPECIES_ENTEI                                   244
#define SPECIES_SUICUNE                                 245
#define SPECIES_LARVITAR                                246
#define SPECIES_PUPITAR                                 247
#define SPECIES_TYRANITAR                               248
#define SPECIES_LUGIA                                   249
#define SPECIES_HO_OH                                   250
#define SPECIES_CELEBI                                  251
#define SPECIES_TREECKO                                 252
#define SPECIES_GROVYLE                                 253
#define SPECIES_SCEPTILE                                254
#define SPECIES_TORCHIC                                 255
#define SPECIES_COMBUSKEN                               256
#define SPECIES_BLAZIKEN                                257
#define SPECIES_MUDKIP                                  258
#define SPECIES_MARSHTOMP                               259
#define SPECIES_SWAMPERT                                260
#define SPECIES_POOCHYENA                               261
#define SPECIES_MIGHTYENA                               262
#define SPECIES_ZIGZAGOON                               263
#define SPECIES_LINOONE                                 264
#define SPECIES_WURMPLE                                 265
#define SPECIES_SILCOON                                 266
#define SPECIES_BEAUTIFLY                               267
#define SPECIES_CASCOON                                 268
#define SPECIES_DUSTOX                                  269
#define SPECIES_LOTAD                                   270
#define SPECIES_LOMBRE                                  271
#define SPECIES_LUDICOLO                                272
#define SPECIES_SEEDOT                                  273
#define SPECIES_NUZLEAF                                 274
#define SPECIES_SHIFTRY                                 275
#define SPECIES_TAILLOW                                 276
#define SPECIES_SWELLOW                                 277
#define SPECIES_WINGULL                                 278
#define SPECIES_PELIPPER                                279
#define SPECIES_RALTS                                   280
#define SPECIES_KIRLIA                                  281
#define SPECIES_GARDEVOIR                               282
#define SPECIES_SURSKIT                                 283
#define SPECIES_MASQUERAIN                              284
#define SPECIES_SHROOMISH                               285
#define SPECIES_BRELOOM                                 286
#define SPECIES_SLAKOTH                                 287
#define SPECIES_VIGOROTH                                288
#define SPECIES_SLAKING                                 289
#define SPECIES_NINCADA                                 290
#define SPECIES_NINJASK                                 291
#define SPECIES_SHEDINJA                                292
#define SPECIES_WHISMUR                                 293
#define SPECIES_LOUDRED                                 294
#define SPECIES_EXPLOUD                                 295
#define SPECIES_MAKUHITA                                296
#define SPECIES_HARIYAMA                                297
#define SPECIES_AZURILL                                 298
#define SPECIES_NOSEPASS                                299
#define SPECIES_SKITTY                                  300
#define SPECIES_DELCATTY                                301
#define SPECIES_SABLEYE                                 302
#define SPECIES_MAWILE                                  303
#define SPECIES_ARON                                    304
#define SPECIES_LAIRON                                  305
#define SPECIES_AGGRON                                  306
#define SPECIES_MEDITITE                                307
#define SPECIES_MEDICHAM                                308
#define SPECIES_ELECTRIKE                               309
#define SPECIES_MANECTRIC                               310
#define SPECIES_PLUSLE                                  311
#define SPECIES_MINUN                                   312
#define SPECIES_VOLBEAT                                 313
#define SPECIES_ILLUMISE                                314
#define SPECIES_ROSELIA                                 315
#define SPECIES_GULPIN                                  316
#define SPECIES_SWALOT                                  317
#define SPECIES_CARVANHA                                318
#define SPECIES_SHARPEDO                                319
#define SPECIES_WAILMER                                 320
#define SPECIES_WAILORD                                 321
#define SPECIES_NUMEL                                   322
#define SPECIES_CAMERUPT                                323
#define SPECIES_TORKOAL                                 324
#define SPECIES_SPOINK                                  325
#define SPECIES_GRUMPIG                                 326
#define SPECIES_SPINDA                                  327
#define SPECIES_TRAPINCH                                328
#define SPECIES_VIBRAVA                                 329
#define SPECIES_FLYGON                                  330
#define SPECIES_CACNEA                                  331
#define SPECIES_CACTURNE                                332
#define SPECIES_SWABLU                                  333
#define SPECIES_ALTARIA                                 334
#define SPECIES_ZANGOOSE                                335
#define SPECIES_SEVIPER                                 336
#define SPECIES_LUNATONE                                337
#define SPECIES_SOLROCK                                 338
#define SPECIES_BARBOACH                                339
#define SPECIES_WHISCASH                                340
#define SPECIES_CORPHISH                                341
#define SPECIES_CRAWDAUNT                               342
#define SPECIES_BALTOY                                  343
#define SPECIES_CLAYDOL                                 344
#define SPECIES_LILEEP                                  345
#define SPECIES_CRADILY                                 346
#define SPECIES_ANORITH                                 347
#define SPECIES_ARMALDO                                 348
#define SPECIES_FEEBAS                                  349
#define SPECIES_MILOTIC                                 350
#define SPECIES_CASTFORM                                SPECIES_CASTFORM_NORMAL
#define SPECIES_CASTFORM_NORMAL                         351
#define SPECIES_KECLEON                                 352
#define SPECIES_SHUPPET                                 353
#define SPECIES_BANETTE                                 354
#define SPECIES_DUSKULL                                 355
#define SPECIES_DUSCLOPS                                356
#define SPECIES_TROPIUS                                 357
#define SPECIES_CHIMECHO                                358
#define SPECIES_ABSOL                                   359
#define SPECIES_WYNAUT                                  360
#define SPECIES_SNORUNT                                 361
#define SPECIES_GLALIE                                  362
#define SPECIES_SPHEAL                                  363
#define SPECIES_SEALEO                                  364
#define SPECIES_WALREIN                                 365
#define SPECIES_CLAMPERL                                366
#define SPECIES_HUNTAIL                                 367
#define SPECIES_GOREBYSS                                368
#define SPECIES_RELICANTH                               369
#define SPECIES_LUVDISC                                 370
#define SPECIES_BAGON                                   371
#define SPECIES_SHELGON                                 372
#define SPECIES_SALAMENCE                               373
#define SPECIES_BELDUM                                  374
#define SPECIES_METANG                                  375
#define SPECIES_METAGROSS                               376
#define SPECIES_REGIROCK                                377
#define SPECIES_REGICE                                  378
#define SPECIES_REGISTEEL                               379
#define SPECIES_LATIAS                                  380
#define SPECIES_LATIOS                                  381
#define SPECIES_KYOGRE                                  382
#define SPECIES_GROUDON                                 383
#define SPECIES_RAYQUAZA                                384
#define SPECIES_JIRACHI                                 385
#define SPECIES_DEOXYS                                  SPECIES_DEOXYS_NORMAL
#define SPECIES_DEOXYS_NORMAL                           386
#define SPECIES_TURTWIG                                 387
#define SPECIES_GROTLE                                  388
#define SPECIES_TORTERRA                                389
#define SPECIES_CHIMCHAR                                390
#define SPECIES_MONFERNO                                391
#define SPECIES_INFERNAPE                               392
#define SPECIES_PIPLUP                                  393
#define SPECIES_PRINPLUP                                394
#define SPECIES_EMPOLEON                                395
#define SPECIES_STARLY                                  396
#define SPECIES_STARAVIA                                397
#define SPECIES_STARAPTOR                               398
#define SPECIES_BIDOOF                                  399
#define SPECIES_BIBAREL                                 400
#define SPECIES_KRICKETOT                               401
#define SPECIES_KRICKETUNE                              402
#define SPECIES_SHINX                                   403
#define SPECIES_LUXIO                                   404
#define SPECIES_LUXRAY                                  405
#define SPECIES_BUDEW                                   406
#define SPECIES_ROSERADE                                407
#define SPECIES_CRANIDOS                                408
#define SPECIES_RAMPARDOS                               409
#define SPECIES_SHIELDON                                410
#define SPECIES_BASTIODON                               411
#define SPECIES_BURMY_PLANT                             412
#define SPECIES_BURMY                                   SPECIES_BURMY_PLANT
#define SPECIES_WORMADAM_PLANT                          413
#define SPECIES_WORMADAM                                SPECIES_WORMADAM_PLANT
#define SPECIES_MOTHIM_PLANT                            414
#define SPECIES_MOTHIM                                  SPECIES_MOTHIM_PLANT
#define SPECIES_COMBEE                                  415
#define SPECIES_VESPIQUEN                               416
#define SPECIES_PACHIRISU                               417
#define SPECIES_BUIZEL                                  418
#define SPECIES_FLOATZEL                                419
#define SPECIES_CHERUBI                                 420
#define SPECIES_CHERRIM                                 SPECIES_CHERRIM_OVERCAST
#define SPECIES_CHERRIM_OVERCAST                        421
#define SPECIES_SHELLOS_WEST                            422
#define SPECIES_SHELLOS                                 SPECIES_SHELLOS_WEST
#define SPECIES_GASTRODON_WEST                          423
#define SPECIES_GASTRODON                               SPECIES_GASTRODON_WEST
#define SPECIES_AMBIPOM                                 424
#define SPECIES_DRIFLOON                                425
#define SPECIES_DRIFBLIM                                426
#define SPECIES_BUNEARY                                 427
#define SPECIES_LOPUNNY                                 428
#define SPECIES_MISMAGIUS                               429
#define SPECIES_HONCHKROW                               430
#define SPECIES_GLAMEOW                                 431
#define SPECIES_PURUGLY                                 432
#define SPECIES_CHINGLING                               433
#define SPECIES_STUNKY                                  434
#define SPECIES_SKUNTANK                                435
#define SPECIES_BRONZOR                                 436
#define SPECIES_BRONZONG                                437
#define SPECIES_BONSLY                                  438
#define SPECIES_MIME_JR                                 439
#define SPECIES_HAPPINY                                 440
#define SPECIES_CHATOT                                  441
#define SPECIES_SPIRITOMB                               442
#define SPECIES_GIBLE                                   443
#define SPECIES_GABITE                                  444
#define SPECIES_GARCHOMP                                445
#define SPECIES_MUNCHLAX                                446
#define SPECIES_RIOLU                                   447
#define SPECIES_LUCARIO                                 448
#define SPECIES_HIPPOPOTAS                              449
#define SPECIES_HIPPOWDON                               450
#define SPECIES_SKORUPI                                 451
#define SPECIES_DRAPION                                 452
#define SPECIES_CROAGUNK                                453
#define SPECIES_TOXICROAK                               454
#define SPECIES_CARNIVINE                               455
#define SPECIES_FINNEON                                 456
#define SPECIES_LUMINEON                                457
#define SPECIES_MANTYKE                                 458
#define SPECIES_SNOVER                                  459
#define SPECIES_ABOMASNOW                               460
#define SPECIES_WEAVILE                                 461
#define SPECIES_MAGNEZONE                               462
#define SPECIES_LICKILICKY                              463
#define SPECIES_RHYPERIOR                               464
#define SPECIES_TANGROWTH                               465
#define SPECIES_ELECTIVIRE                              466
#define SPECIES_MAGMORTAR                               467
#define SPECIES_TOGEKISS                                468
#define SPECIES_YANMEGA                                 469
#define SPECIES_LEAFEON                                 470
#define SPECIES_GLACEON                                 471
#define SPECIES_GLISCOR                                 472
#define SPECIES_MAMOSWINE                               473
#define SPECIES_PORYGON_Z                               474
#define SPECIES_GALLADE                                 475
#define SPECIES_PROBOPASS                               476
#define SPECIES_DUSKNOIR                                477
#define SPECIES_FROSLASS                                478
#define SPECIES_ROTOM                                   479
#define SPECIES_UXIE                                    480
#define SPECIES_MESPRIT                                 481
#define SPECIES_AZELF                                   482
#define SPECIES_DIALGA                                  483
#define SPECIES_PALKIA                                  484
#define SPECIES_HEATRAN                                 485
#define SPECIES_REGIGIGAS                               486
#define SPECIES_GIRATINA                                SPECIES_GIRATINA_ALTERED
#define SPECIES_GIRATINA_ALTERED                        487
#define SPECIES_CRESSELIA                               488
#define SPECIES_PHIONE                                  489
#define SPECIES_MANAPHY                                 490
#define SPECIES_DARKRAI                                 491
#define SPECIES_SHAYMIN                                 SPECIES_SHAYMIN_LAND
#define SPECIES_SHAYMIN_LAND                            492
#define SPECIES_ARCEUS                                  SPECIES_ARCEUS_NORMAL
#define SPECIES_ARCEUS_NORMAL                           493
#define SPECIES_VICTINI                                 SPECIES_NONE
#define SPECIES_SNIVY                                   SPECIES_NONE
#define SPECIES_SERVINE                                 SPECIES_NONE
#define SPECIES_SERPERIOR                               SPECIES_NONE
#define SPECIES_TEPIG                                   SPECIES_NONE
#define SPECIES_PIGNITE                                 SPECIES_NONE
#define SPECIES_EMBOAR                                  SPECIES_NONE
#define SPECIES_OSHAWOTT                                SPECIES_ARCEUS_NORMAL + 1
#define SPECIES_DEWOTT                                  SPECIES_ARCEUS_NORMAL + 2
#define SPECIES_SAMUROTT                                SPECIES_ARCEUS_NORMAL + 3
#define SPECIES_PATRAT                                  SPECIES_NONE
#define SPECIES_WATCHOG                                 SPECIES_NONE
#define SPECIES_LILLIPUP                                SPECIES_NONE
#define SPECIES_HERDIER                                 SPECIES_NONE
#define SPECIES_STOUTLAND                               SPECIES_NONE
#define SPECIES_PURRLOIN                                SPECIES_NONE
#define SPECIES_LIEPARD                                 SPECIES_NONE
#define SPECIES_PANSAGE                                 SPECIES_NONE
#define SPECIES_SIMISAGE                                SPECIES_NONE
#define SPECIES_PANSEAR                                 SPECIES_NONE
#define SPECIES_SIMISEAR                                SPECIES_NONE
#define SPECIES_PANPOUR                                 SPECIES_NONE
#define SPECIES_SIMIPOUR                                SPECIES_NONE
#define SPECIES_MUNNA                                   SPECIES_NONE
#define SPECIES_MUSHARNA                                SPECIES_NONE
#define SPECIES_PIDOVE                                  SPECIES_NONE
#define SPECIES_TRANQUILL                               SPECIES_NONE
#define SPECIES_UNFEZANT                                SPECIES_NONE
#define SPECIES_BLITZLE                                 SPECIES_NONE
#define SPECIES_ZEBSTRIKA                               SPECIES_NONE
#define SPECIES_ROGGENROLA                              SPECIES_NONE
#define SPECIES_BOLDORE                                 SPECIES_NONE
#define SPECIES_GIGALITH                                SPECIES_NONE
#define SPECIES_WOOBAT                                  SPECIES_NONE
#define SPECIES_SWOOBAT                                 SPECIES_NONE
#define SPECIES_DRILBUR                                 SPECIES_NONE
#define SPECIES_EXCADRILL                               SPECIES_NONE
#define SPECIES_AUDINO                                  SPECIES_NONE
#define SPECIES_TIMBURR                                 SPECIES_NONE
#define SPECIES_GURDURR                                 SPECIES_NONE
#define SPECIES_CONKELDURR                              SPECIES_NONE
#define SPECIES_TYMPOLE                                 SPECIES_NONE
#define SPECIES_PALPITOAD                               SPECIES_NONE
#define SPECIES_SEISMITOAD                              SPECIES_NONE
#define SPECIES_THROH                                   SPECIES_NONE
#define SPECIES_SAWK                                    SPECIES_NONE
#define SPECIES_SEWADDLE                                SPECIES_NONE
#define SPECIES_SWADLOON                                SPECIES_NONE
#define SPECIES_LEAVANNY                                SPECIES_NONE
#define SPECIES_VENIPEDE                                SPECIES_NONE
#define SPECIES_WHIRLIPEDE                              SPECIES_NONE
#define SPECIES_SCOLIPEDE                               SPECIES_NONE
#define SPECIES_COTTONEE                                SPECIES_NONE
#define SPECIES_WHIMSICOTT                              SPECIES_NONE
#define SPECIES_PETILIL                                 SPECIES_ARCEUS_NORMAL + 4
#define SPECIES_LILLIGANT                               SPECIES_ARCEUS_NORMAL + 5
#define SPECIES_BASCULIN                                SPECIES_BASCULIN_RED_STRIPED
#define SPECIES_BASCULIN_RED_STRIPED                    SPECIES_ARCEUS_NORMAL + 6
#define SPECIES_SANDILE                                 SPECIES_NONE
#define SPECIES_KROKOROK                                SPECIES_NONE
#define SPECIES_KROOKODILE                              SPECIES_NONE
#define SPECIES_DARUMAKA                                SPECIES_NONE
#define SPECIES_DARMANITAN                              SPECIES_DARMANITAN_STANDARD
#define SPECIES_DARMANITAN_STANDARD                     SPECIES_NONE
#define SPECIES_MARACTUS                                SPECIES_NONE
#define SPECIES_DWEBBLE                                 SPECIES_NONE
#define SPECIES_CRUSTLE                                 SPECIES_NONE
#define SPECIES_SCRAGGY                                 SPECIES_NONE
#define SPECIES_SCRAFTY                                 SPECIES_NONE
#define SPECIES_SIGILYPH                                SPECIES_NONE
#define SPECIES_YAMASK                                  SPECIES_NONE
#define SPECIES_COFAGRIGUS                              SPECIES_NONE
#define SPECIES_TIRTOUGA                                SPECIES_NONE
#define SPECIES_CARRACOSTA                              SPECIES_NONE
#define SPECIES_ARCHEN                                  SPECIES_NONE
#define SPECIES_ARCHEOPS                                SPECIES_NONE
#define SPECIES_TRUBBISH                                SPECIES_NONE
#define SPECIES_GARBODOR                                SPECIES_NONE
#define SPECIES_ZORUA                                   SPECIES_ARCEUS_NORMAL + 7
#define SPECIES_ZOROARK                                 SPECIES_ARCEUS_NORMAL + 8
#define SPECIES_MINCCINO                                SPECIES_NONE
#define SPECIES_CINCCINO                                SPECIES_NONE
#define SPECIES_GOTHITA                                 SPECIES_NONE
#define SPECIES_GOTHORITA                               SPECIES_NONE
#define SPECIES_GOTHITELLE                              SPECIES_NONE
#define SPECIES_SOLOSIS                                 SPECIES_NONE
#define SPECIES_DUOSION                                 SPECIES_NONE
#define SPECIES_REUNICLUS                               SPECIES_NONE
#define SPECIES_DUCKLETT                                SPECIES_NONE
#define SPECIES_SWANNA                                  SPECIES_NONE
#define SPECIES_VANILLITE                               SPECIES_NONE
#define SPECIES_VANILLISH                               SPECIES_NONE
#define SPECIES_VANILLUXE                               SPECIES_NONE
#define SPECIES_DEERLING                                SPECIES_DEERLING_SPRING
#define SPECIES_DEERLING_SPRING                         SPECIES_NONE
#define SPECIES_SAWSBUCK                                SPECIES_SAWSBUCK_SPRING
#define SPECIES_SAWSBUCK_SPRING                         SPECIES_NONE
#define SPECIES_EMOLGA                                  SPECIES_NONE
#define SPECIES_KARRABLAST                              SPECIES_NONE
#define SPECIES_ESCAVALIER                              SPECIES_NONE
#define SPECIES_FOONGUS                                 SPECIES_NONE
#define SPECIES_AMOONGUSS                               SPECIES_NONE
#define SPECIES_FRILLISH                                SPECIES_NONE
#define SPECIES_JELLICENT                               SPECIES_NONE
#define SPECIES_ALOMOMOLA                               SPECIES_NONE
#define SPECIES_JOLTIK                                  SPECIES_NONE
#define SPECIES_GALVANTULA                              SPECIES_NONE
#define SPECIES_FERROSEED                               SPECIES_NONE
#define SPECIES_FERROTHORN                              SPECIES_NONE
#define SPECIES_KLINK                                   SPECIES_NONE
#define SPECIES_KLANG                                   SPECIES_NONE
#define SPECIES_KLINKLANG                               SPECIES_NONE
#define SPECIES_TYNAMO                                  SPECIES_NONE
#define SPECIES_EELEKTRIK                               SPECIES_NONE
#define SPECIES_EELEKTROSS                              SPECIES_NONE
#define SPECIES_ELGYEM                                  SPECIES_NONE
#define SPECIES_BEHEEYEM                                SPECIES_NONE
#define SPECIES_LITWICK                                 SPECIES_NONE
#define SPECIES_LAMPENT                                 SPECIES_NONE
#define SPECIES_CHANDELURE                              SPECIES_NONE
#define SPECIES_AXEW                                    SPECIES_NONE
#define SPECIES_FRAXURE                                 SPECIES_NONE
#define SPECIES_HAXORUS                                 SPECIES_NONE
#define SPECIES_CUBCHOO                                 SPECIES_NONE
#define SPECIES_BEARTIC                                 SPECIES_NONE
#define SPECIES_CRYOGONAL                               SPECIES_NONE
#define SPECIES_SHELMET                                 SPECIES_NONE
#define SPECIES_ACCELGOR                                SPECIES_NONE
#define SPECIES_STUNFISK                                SPECIES_NONE
#define SPECIES_MIENFOO                                 SPECIES_NONE
#define SPECIES_MIENSHAO                                SPECIES_NONE
#define SPECIES_DRUDDIGON                               SPECIES_NONE
#define SPECIES_GOLETT                                  SPECIES_NONE
#define SPECIES_GOLURK                                  SPECIES_NONE
#define SPECIES_PAWNIARD                                SPECIES_NONE
#define SPECIES_BISHARP                                 SPECIES_NONE
#define SPECIES_BOUFFALANT                              SPECIES_NONE
#define SPECIES_RUFFLET                                 SPECIES_ARCEUS_NORMAL + 9
#define SPECIES_BRAVIARY                                SPECIES_ARCEUS_NORMAL + 10
#define SPECIES_VULLABY                                 SPECIES_NONE
#define SPECIES_MANDIBUZZ                               SPECIES_NONE
#define SPECIES_HEATMOR                                 SPECIES_NONE
#define SPECIES_DURANT                                  SPECIES_NONE
#define SPECIES_DEINO                                   SPECIES_NONE
#define SPECIES_ZWEILOUS                                SPECIES_NONE
#define SPECIES_HYDREIGON                               SPECIES_NONE
#define SPECIES_LARVESTA                                SPECIES_NONE
#define SPECIES_VOLCARONA                               SPECIES_NONE
#define SPECIES_COBALION                                SPECIES_NONE
#define SPECIES_TERRAKION                               SPECIES_NONE
#define SPECIES_VIRIZION                                SPECIES_NONE
#define SPECIES_TORNADUS                                SPECIES_TORNADUS_INCARNATE
#define SPECIES_TORNADUS_INCARNATE                      SPECIES_ARCEUS_NORMAL + 11
#define SPECIES_THUNDURUS                               SPECIES_THUNDURUS_INCARNATE
#define SPECIES_THUNDURUS_INCARNATE                     SPECIES_ARCEUS_NORMAL + 12
#define SPECIES_RESHIRAM                                SPECIES_NONE
#define SPECIES_ZEKROM                                  SPECIES_NONE
#define SPECIES_LANDORUS                                SPECIES_LANDORUS_INCARNATE
#define SPECIES_LANDORUS_INCARNATE                      SPECIES_ARCEUS_NORMAL + 13
#define SPECIES_KYUREM                                  SPECIES_NONE
#define SPECIES_KELDEO                                  SPECIES_KELDEO_ORDINARY
#define SPECIES_KELDEO_ORDINARY                         SPECIES_NONE
#define SPECIES_MELOETTA                                SPECIES_MELOETTA_ARIA
#define SPECIES_MELOETTA_ARIA                           SPECIES_NONE
#define SPECIES_GENESECT                                SPECIES_NONE
#define SPECIES_CHESPIN                                 SPECIES_NONE
#define SPECIES_QUILLADIN                               SPECIES_NONE
#define SPECIES_CHESNAUGHT                              SPECIES_NONE
#define SPECIES_FENNEKIN                                SPECIES_NONE
#define SPECIES_BRAIXEN                                 SPECIES_NONE
#define SPECIES_DELPHOX                                 SPECIES_NONE
#define SPECIES_FROAKIE                                 SPECIES_NONE
#define SPECIES_FROGADIER                               SPECIES_NONE
#define SPECIES_GRENINJA                                SPECIES_NONE
#define SPECIES_BUNNELBY                                SPECIES_NONE
#define SPECIES_DIGGERSBY                               SPECIES_NONE
#define SPECIES_FLETCHLING                              SPECIES_NONE
#define SPECIES_FLETCHINDER                             SPECIES_NONE
#define SPECIES_TALONFLAME                              SPECIES_NONE
#define SPECIES_SCATTERBUG                              SPECIES_SCATTERBUG_ICY_SNOW
#define SPECIES_SCATTERBUG_ICY_SNOW                     SPECIES_NONE
#define SPECIES_SPEWPA                                  SPECIES_SPEWPA_ICY_SNOW
#define SPECIES_SPEWPA_ICY_SNOW                         SPECIES_NONE
#define SPECIES_VIVILLON                                SPECIES_VIVILLON_ICY_SNOW
#define SPECIES_VIVILLON_ICY_SNOW                       SPECIES_NONE
#define SPECIES_LITLEO                                  SPECIES_NONE
#define SPECIES_PYROAR                                  SPECIES_NONE
#define SPECIES_FLABEBE                                 SPECIES_FLABEBE_RED
#define SPECIES_FLABEBE_RED                             SPECIES_NONE
#define SPECIES_FLOETTE                                 SPECIES_FLOETTE_RED
#define SPECIES_FLOETTE_RED                             SPECIES_NONE
#define SPECIES_FLORGES                                 SPECIES_FLORGES_RED
#define SPECIES_FLORGES_RED                             SPECIES_NONE
#define SPECIES_SKIDDO                                  SPECIES_NONE
#define SPECIES_GOGOAT                                  SPECIES_NONE
#define SPECIES_PANCHAM                                 SPECIES_NONE
#define SPECIES_PANGORO                                 SPECIES_NONE
#define SPECIES_FURFROU                                 SPECIES_FURFROU_NATURAL
#define SPECIES_FURFROU_NATURAL                         SPECIES_NONE
#define SPECIES_ESPURR                                  SPECIES_NONE
#define SPECIES_MEOWSTIC                                SPECIES_MEOWSTIC_M
#define SPECIES_MEOWSTIC_M                              SPECIES_NONE
#define SPECIES_HONEDGE                                 SPECIES_NONE
#define SPECIES_DOUBLADE                                SPECIES_NONE
#define SPECIES_AEGISLASH                               SPECIES_AEGISLASH_SHIELD
#define SPECIES_AEGISLASH_SHIELD                        SPECIES_NONE
#define SPECIES_SPRITZEE                                SPECIES_NONE
#define SPECIES_AROMATISSE                              SPECIES_NONE
#define SPECIES_SWIRLIX                                 SPECIES_NONE
#define SPECIES_SLURPUFF                                SPECIES_NONE
#define SPECIES_INKAY                                   SPECIES_NONE
#define SPECIES_MALAMAR                                 SPECIES_NONE
#define SPECIES_BINACLE                                 SPECIES_NONE
#define SPECIES_BARBARACLE                              SPECIES_NONE
#define SPECIES_SKRELP                                  SPECIES_NONE
#define SPECIES_DRAGALGE                                SPECIES_NONE
#define SPECIES_CLAUNCHER                               SPECIES_NONE
#define SPECIES_CLAWITZER                               SPECIES_NONE
#define SPECIES_HELIOPTILE                              SPECIES_NONE
#define SPECIES_HELIOLISK                               SPECIES_NONE
#define SPECIES_TYRUNT                                  SPECIES_NONE
#define SPECIES_TYRANTRUM                               SPECIES_NONE
#define SPECIES_AMAURA                                  SPECIES_NONE
#define SPECIES_AURORUS                                 SPECIES_NONE
#define SPECIES_SYLVEON                                 SPECIES_ARCEUS_NORMAL + 14
#define SPECIES_HAWLUCHA                                SPECIES_NONE
#define SPECIES_DEDENNE                                 SPECIES_NONE
#define SPECIES_CARBINK                                 SPECIES_NONE
#define SPECIES_GOOMY                                   SPECIES_ARCEUS_NORMAL + 15
#define SPECIES_SLIGGOO                                 SPECIES_ARCEUS_NORMAL + 16
#define SPECIES_GOODRA                                  SPECIES_ARCEUS_NORMAL + 17
#define SPECIES_KLEFKI                                  SPECIES_NONE
#define SPECIES_PHANTUMP                                SPECIES_NONE
#define SPECIES_TREVENANT                               SPECIES_NONE
#define SPECIES_PUMPKABOO                               SPECIES_PUMPKABOO_AVERAGE
#define SPECIES_PUMPKABOO_AVERAGE                       SPECIES_NONE
#define SPECIES_GOURGEIST                               SPECIES_GOURGEIST_AVERAGE
#define SPECIES_GOURGEIST_AVERAGE                       SPECIES_NONE
#define SPECIES_BERGMITE                                SPECIES_ARCEUS_NORMAL + 18
#define SPECIES_AVALUGG                                 SPECIES_ARCEUS_NORMAL + 19
#define SPECIES_NOIBAT                                  SPECIES_NONE
#define SPECIES_NOIVERN                                 SPECIES_NONE
#define SPECIES_XERNEAS                                 SPECIES_XERNEAS_NEUTRAL
#define SPECIES_XERNEAS_NEUTRAL                         SPECIES_NONE
#define SPECIES_YVELTAL                                 SPECIES_NONE
#define SPECIES_ZYGARDE                                 SPECIES_ZYGARDE_50
#define SPECIES_ZYGARDE_50                              SPECIES_NONE
#define SPECIES_DIANCIE                                 SPECIES_NONE
#define SPECIES_HOOPA                                   SPECIES_HOOPA_CONFINED
#define SPECIES_HOOPA_CONFINED                          SPECIES_NONE
#define SPECIES_VOLCANION                               SPECIES_NONE
#define SPECIES_ROWLET                                  SPECIES_ARCEUS_NORMAL + 20
#define SPECIES_DARTRIX                                 SPECIES_ARCEUS_NORMAL + 21
#define SPECIES_DECIDUEYE                               SPECIES_ARCEUS_NORMAL + 22
#define SPECIES_LITTEN                                  SPECIES_NONE
#define SPECIES_TORRACAT                                SPECIES_NONE
#define SPECIES_INCINEROAR                              SPECIES_NONE
#define SPECIES_POPPLIO                                 SPECIES_NONE
#define SPECIES_BRIONNE                                 SPECIES_NONE
#define SPECIES_PRIMARINA                               SPECIES_NONE
#define SPECIES_PIKIPEK                                 SPECIES_NONE
#define SPECIES_TRUMBEAK                                SPECIES_NONE
#define SPECIES_TOUCANNON                               SPECIES_NONE
#define SPECIES_YUNGOOS                                 SPECIES_NONE
#define SPECIES_GUMSHOOS                                SPECIES_NONE
#define SPECIES_GRUBBIN                                 SPECIES_NONE
#define SPECIES_CHARJABUG                               SPECIES_NONE
#define SPECIES_VIKAVOLT                                SPECIES_NONE
#define SPECIES_CRABRAWLER                              SPECIES_NONE
#define SPECIES_CRABOMINABLE                            SPECIES_NONE
#define SPECIES_ORICORIO                                SPECIES_ORICORIO_BAILE
#define SPECIES_ORICORIO_BAILE                          SPECIES_NONE
#define SPECIES_CUTIEFLY                                SPECIES_NONE
#define SPECIES_RIBOMBEE                                SPECIES_NONE
#define SPECIES_ROCKRUFF                                SPECIES_NONE
#define SPECIES_LYCANROC                                SPECIES_LYCANROC_MIDDAY
#define SPECIES_LYCANROC_MIDDAY                         SPECIES_NONE
#define SPECIES_WISHIWASHI                              SPECIES_WISHIWASHI_SOLO
#define SPECIES_WISHIWASHI_SOLO                         SPECIES_NONE
#define SPECIES_MAREANIE                                SPECIES_NONE
#define SPECIES_TOXAPEX                                 SPECIES_NONE
#define SPECIES_MUDBRAY                                 SPECIES_NONE
#define SPECIES_MUDSDALE                                SPECIES_NONE
#define SPECIES_DEWPIDER                                SPECIES_NONE
#define SPECIES_ARAQUANID                               SPECIES_NONE
#define SPECIES_FOMANTIS                                SPECIES_NONE
#define SPECIES_LURANTIS                                SPECIES_NONE
#define SPECIES_MORELULL                                SPECIES_NONE
#define SPECIES_SHIINOTIC                               SPECIES_NONE
#define SPECIES_SALANDIT                                SPECIES_NONE
#define SPECIES_SALAZZLE                                SPECIES_NONE
#define SPECIES_STUFFUL                                 SPECIES_NONE
#define SPECIES_BEWEAR                                  SPECIES_NONE
#define SPECIES_BOUNSWEET                               SPECIES_NONE
#define SPECIES_STEENEE                                 SPECIES_NONE
#define SPECIES_TSAREENA                                SPECIES_NONE
#define SPECIES_COMFEY                                  SPECIES_NONE
#define SPECIES_ORANGURU                                SPECIES_NONE
#define SPECIES_PASSIMIAN                               SPECIES_NONE
#define SPECIES_WIMPOD                                  SPECIES_NONE
#define SPECIES_GOLISOPOD                               SPECIES_NONE
#define SPECIES_SANDYGAST                               SPECIES_NONE
#define SPECIES_PALOSSAND                               SPECIES_NONE
#define SPECIES_PYUKUMUKU                               SPECIES_NONE
#define SPECIES_TYPE_NULL                               SPECIES_NONE
#define SPECIES_SILVALLY                                SPECIES_SILVALLY_NORMAL
#define SPECIES_SILVALLY_NORMAL                         SPECIES_NONE
#define SPECIES_MINIOR                                  SPECIES_MINIOR_METEOR
#define SPECIES_MINIOR_METEOR                           SPECIES_MINIOR_METEOR_RED
#define SPECIES_MINIOR_RED                              SPECIES_MINIOR_METEOR_RED
#define SPECIES_MINIOR_METEOR_RED                       SPECIES_NONE
#define SPECIES_KOMALA                                  SPECIES_NONE
#define SPECIES_TURTONATOR                              SPECIES_NONE
#define SPECIES_TOGEDEMARU                              SPECIES_NONE
#define SPECIES_MIMIKYU                                 SPECIES_MIMIKYU_DISGUISED
#define SPECIES_MIMIKYU_DISGUISED                       SPECIES_NONE
#define SPECIES_BRUXISH                                 SPECIES_NONE
#define SPECIES_DRAMPA                                  SPECIES_NONE
#define SPECIES_DHELMISE                                SPECIES_NONE
#define SPECIES_JANGMO_O                                SPECIES_NONE
#define SPECIES_HAKAMO_O                                SPECIES_NONE
#define SPECIES_KOMMO_O                                 SPECIES_NONE
#define SPECIES_TAPU_KOKO                               SPECIES_NONE
#define SPECIES_TAPU_LELE                               SPECIES_NONE
#define SPECIES_TAPU_BULU                               SPECIES_NONE
#define SPECIES_TAPU_FINI                               SPECIES_NONE
#define SPECIES_COSMOG                                  SPECIES_NONE
#define SPECIES_COSMOEM                                 SPECIES_NONE
#define SPECIES_SOLGALEO                                SPECIES_NONE
#define SPECIES_LUNALA                                  SPECIES_NONE
#define SPECIES_NIHILEGO                                SPECIES_NONE
#define SPECIES_BUZZWOLE                                SPECIES_NONE
#define SPECIES_PHEROMOSA                               SPECIES_NONE
#define SPECIES_XURKITREE                               SPECIES_NONE
#define SPECIES_CELESTEELA                              SPECIES_NONE
#define SPECIES_KARTANA                                 SPECIES_NONE
#define SPECIES_GUZZLORD                                SPECIES_NONE
#define SPECIES_NECROZMA                                SPECIES_NONE
#define SPECIES_MAGEARNA                                SPECIES_NONE
#define SPECIES_MARSHADOW                               SPECIES_NONE
#define SPECIES_POIPOLE                                 SPECIES_NONE
#define SPECIES_NAGANADEL                               SPECIES_NONE
#define SPECIES_STAKATAKA                               SPECIES_NONE
#define SPECIES_BLACEPHALON                             SPECIES_NONE
#define SPECIES_ZERAORA                                 SPECIES_NONE
#define SPECIES_MELTAN                                  SPECIES_NONE
#define SPECIES_MELMETAL                                SPECIES_NONE
#define SPECIES_GROOKEY                                 SPECIES_NONE
#define SPECIES_THWACKEY                                SPECIES_NONE
#define SPECIES_RILLABOOM                               SPECIES_NONE
#define SPECIES_SCORBUNNY                               SPECIES_NONE
#define SPECIES_RABOOT                                  SPECIES_NONE
#define SPECIES_CINDERACE                               SPECIES_NONE
#define SPECIES_SOBBLE                                  SPECIES_NONE
#define SPECIES_DRIZZILE                                SPECIES_NONE
#define SPECIES_INTELEON                                SPECIES_NONE
#define SPECIES_SKWOVET                                 SPECIES_NONE
#define SPECIES_GREEDENT                                SPECIES_NONE
#define SPECIES_ROOKIDEE                                SPECIES_NONE
#define SPECIES_CORVISQUIRE                             SPECIES_NONE
#define SPECIES_CORVIKNIGHT                             SPECIES_NONE
#define SPECIES_BLIPBUG                                 SPECIES_NONE
#define SPECIES_DOTTLER                                 SPECIES_NONE
#define SPECIES_ORBEETLE                                SPECIES_NONE
#define SPECIES_NICKIT                                  SPECIES_NONE
#define SPECIES_THIEVUL                                 SPECIES_NONE
#define SPECIES_GOSSIFLEUR                              SPECIES_NONE
#define SPECIES_ELDEGOSS                                SPECIES_NONE
#define SPECIES_WOOLOO                                  SPECIES_NONE
#define SPECIES_DUBWOOL                                 SPECIES_NONE
#define SPECIES_CHEWTLE                                 SPECIES_NONE
#define SPECIES_DREDNAW                                 SPECIES_NONE
#define SPECIES_YAMPER                                  SPECIES_NONE
#define SPECIES_BOLTUND                                 SPECIES_NONE
#define SPECIES_ROLYCOLY                                SPECIES_NONE
#define SPECIES_CARKOL                                  SPECIES_NONE
#define SPECIES_COALOSSAL                               SPECIES_NONE
#define SPECIES_APPLIN                                  SPECIES_NONE
#define SPECIES_FLAPPLE                                 SPECIES_NONE
#define SPECIES_APPLETUN                                SPECIES_NONE
#define SPECIES_SILICOBRA                               SPECIES_NONE
#define SPECIES_SANDACONDA                              SPECIES_NONE
#define SPECIES_CRAMORANT                               SPECIES_NONE
#define SPECIES_ARROKUDA                                SPECIES_NONE
#define SPECIES_BARRASKEWDA                             SPECIES_NONE
#define SPECIES_TOXEL                                   SPECIES_NONE
#define SPECIES_TOXTRICITY                              SPECIES_TOXTRICITY_AMPED
#define SPECIES_TOXTRICITY_AMPED                        SPECIES_NONE
#define SPECIES_SIZZLIPEDE                              SPECIES_NONE
#define SPECIES_CENTISKORCH                             SPECIES_NONE
#define SPECIES_CLOBBOPUS                               SPECIES_NONE
#define SPECIES_GRAPPLOCT                               SPECIES_NONE
#define SPECIES_SINISTEA                                SPECIES_SINISTEA_PHONY
#define SPECIES_SINISTEA_PHONY                          SPECIES_NONE
#define SPECIES_POLTEAGEIST                             SPECIES_POLTEAGEIST_PHONY
#define SPECIES_POLTEAGEIST_PHONY                       SPECIES_NONE
#define SPECIES_HATENNA                                 SPECIES_NONE
#define SPECIES_HATTREM                                 SPECIES_NONE
#define SPECIES_HATTERENE                               SPECIES_NONE
#define SPECIES_IMPIDIMP                                SPECIES_NONE
#define SPECIES_MORGREM                                 SPECIES_NONE
#define SPECIES_GRIMMSNARL                              SPECIES_NONE
#define SPECIES_OBSTAGOON                               SPECIES_NONE
#define SPECIES_PERRSERKER                              SPECIES_NONE
#define SPECIES_CURSOLA                                 SPECIES_NONE
#define SPECIES_SIRFETCHD                               SPECIES_NONE
#define SPECIES_MR_RIME                                 SPECIES_NONE
#define SPECIES_RUNERIGUS                               SPECIES_NONE
#define SPECIES_MILCERY                                 SPECIES_NONE
#define SPECIES_ALCREMIE                                SPECIES_ALCREMIE_STRAWBERRY
#define SPECIES_ALCREMIE_STRAWBERRY                     SPECIES_ALCREMIE_STRAWBERRY_VANILLA_CREAM
#define SPECIES_ALCREMIE_VANILLA_CREAM                  SPECIES_ALCREMIE_STRAWBERRY_VANILLA_CREAM
#define SPECIES_ALCREMIE_STRAWBERRY_VANILLA_CREAM       SPECIES_NONE
#define SPECIES_FALINKS                                 SPECIES_NONE
#define SPECIES_PINCURCHIN                              SPECIES_NONE
#define SPECIES_SNOM                                    SPECIES_NONE
#define SPECIES_FROSMOTH                                SPECIES_NONE
#define SPECIES_STONJOURNER                             SPECIES_NONE
#define SPECIES_EISCUE                                  SPECIES_EISCUE_ICE
#define SPECIES_EISCUE_ICE                              SPECIES_NONE
#define SPECIES_INDEEDEE                                SPECIES_INDEEDEE_M
#define SPECIES_INDEEDEE_M                              SPECIES_NONE
#define SPECIES_MORPEKO                                 SPECIES_MORPEKO_FULL_BELLY
#define SPECIES_MORPEKO_FULL_BELLY                      SPECIES_NONE
#define SPECIES_CUFANT                                  SPECIES_NONE
#define SPECIES_COPPERAJAH                              SPECIES_NONE
#define SPECIES_DRACOZOLT                               SPECIES_NONE
#define SPECIES_ARCTOZOLT                               SPECIES_NONE
#define SPECIES_DRACOVISH                               SPECIES_NONE
#define SPECIES_ARCTOVISH                               SPECIES_NONE
#define SPECIES_DURALUDON                               SPECIES_NONE
#define SPECIES_DREEPY                                  SPECIES_NONE
#define SPECIES_DRAKLOAK                                SPECIES_NONE
#define SPECIES_DRAGAPULT                               SPECIES_NONE
#define SPECIES_ZACIAN                                  SPECIES_ZACIAN_HERO
#define SPECIES_ZACIAN_HERO                             SPECIES_NONE
#define SPECIES_ZAMAZENTA                               SPECIES_ZAMAZENTA_HERO
#define SPECIES_ZAMAZENTA_HERO                          SPECIES_NONE
#define SPECIES_ETERNATUS                               SPECIES_NONE
#define SPECIES_KUBFU                                   SPECIES_NONE
#define SPECIES_URSHIFU                                 SPECIES_URSHIFU_SINGLE_STRIKE
#define SPECIES_URSHIFU_SINGLE_STRIKE                   SPECIES_NONE
#define SPECIES_ZARUDE                                  SPECIES_NONE
#define SPECIES_REGIELEKI                               SPECIES_ARCEUS_NORMAL + 23
#define SPECIES_REGIDRAGO                               SPECIES_ARCEUS_NORMAL + 24
#define SPECIES_GLASTRIER                               SPECIES_NONE
#define SPECIES_SPECTRIER                               SPECIES_NONE
#define SPECIES_CALYREX                                 SPECIES_NONE
#define SPECIES_WYRDEER                                 SPECIES_ARCEUS_NORMAL + 25
#define SPECIES_KLEAVOR                                 SPECIES_ARCEUS_NORMAL + 26
#define SPECIES_URSALUNA                                SPECIES_ARCEUS_NORMAL + 27
#define SPECIES_BASCULEGION                             SPECIES_BASCULEGION_M
#define SPECIES_BASCULEGION_M                           SPECIES_ARCEUS_NORMAL + 28
#define SPECIES_SNEASLER                                SPECIES_ARCEUS_NORMAL + 29
#define SPECIES_OVERQWIL                                SPECIES_ARCEUS_NORMAL + 30
#define SPECIES_ENAMORUS                                SPECIES_ENAMORUS_INCARNATE
#define SPECIES_ENAMORUS_INCARNATE                      SPECIES_ARCEUS_NORMAL + 31
#define SPECIES_VENUSAUR_MEGA                           SPECIES_ARCEUS_NORMAL + 32
#define SPECIES_CHARIZARD_MEGA_X                        SPECIES_ARCEUS_NORMAL + 33
#define SPECIES_CHARIZARD_MEGA_Y                        SPECIES_ARCEUS_NORMAL + 34
#define SPECIES_BLASTOISE_MEGA                          SPECIES_ARCEUS_NORMAL + 35
#define SPECIES_BEEDRILL_MEGA                           SPECIES_ARCEUS_NORMAL + 36
#define SPECIES_PIDGEOT_MEGA                            SPECIES_ARCEUS_NORMAL + 37
#define SPECIES_ALAKAZAM_MEGA                           SPECIES_ARCEUS_NORMAL + 38
#define SPECIES_SLOWBRO_MEGA                            SPECIES_ARCEUS_NORMAL + 39
#define SPECIES_GENGAR_MEGA                             SPECIES_ARCEUS_NORMAL + 40
#define SPECIES_KANGASKHAN_MEGA                         SPECIES_ARCEUS_NORMAL + 41
#define SPECIES_PINSIR_MEGA                             SPECIES_ARCEUS_NORMAL + 42
#define SPECIES_GYARADOS_MEGA                           SPECIES_ARCEUS_NORMAL + 43
#define SPECIES_AERODACTYL_MEGA                         SPECIES_ARCEUS_NORMAL + 44
#define SPECIES_MEWTWO_MEGA_X                           SPECIES_ARCEUS_NORMAL + 45
#define SPECIES_MEWTWO_MEGA_Y                           SPECIES_ARCEUS_NORMAL + 46
#define SPECIES_AMPHAROS_MEGA                           SPECIES_ARCEUS_NORMAL + 47
#define SPECIES_STEELIX_MEGA                            SPECIES_ARCEUS_NORMAL + 48
#define SPECIES_SCIZOR_MEGA                             SPECIES_ARCEUS_NORMAL + 49
#define SPECIES_HERACROSS_MEGA                          SPECIES_ARCEUS_NORMAL + 50
#define SPECIES_HOUNDOOM_MEGA                           SPECIES_ARCEUS_NORMAL + 51
#define SPECIES_TYRANITAR_MEGA                          SPECIES_ARCEUS_NORMAL + 52
#define SPECIES_SCEPTILE_MEGA                           SPECIES_ARCEUS_NORMAL + 53
#define SPECIES_BLAZIKEN_MEGA                           SPECIES_ARCEUS_NORMAL + 54
#define SPECIES_SWAMPERT_MEGA                           SPECIES_ARCEUS_NORMAL + 55
#define SPECIES_GARDEVOIR_MEGA                          SPECIES_ARCEUS_NORMAL + 56
#define SPECIES_SABLEYE_MEGA                            SPECIES_ARCEUS_NORMAL + 57
#define SPECIES_MAWILE_MEGA                             SPECIES_ARCEUS_NORMAL + 58
#define SPECIES_AGGRON_MEGA                             SPECIES_ARCEUS_NORMAL + 59
#define SPECIES_MEDICHAM_MEGA                           SPECIES_ARCEUS_NORMAL + 60
#define SPECIES_MANECTRIC_MEGA                          SPECIES_ARCEUS_NORMAL + 61
#define SPECIES_SHARPEDO_MEGA                           SPECIES_ARCEUS_NORMAL + 62
#define SPECIES_CAMERUPT_MEGA                           SPECIES_ARCEUS_NORMAL + 63
#define SPECIES_ALTARIA_MEGA                            SPECIES_ARCEUS_NORMAL + 64
#define SPECIES_BANETTE_MEGA                            SPECIES_ARCEUS_NORMAL + 65
#define SPECIES_ABSOL_MEGA                              SPECIES_ARCEUS_NORMAL + 66
#define SPECIES_GLALIE_MEGA                             SPECIES_ARCEUS_NORMAL + 67
#define SPECIES_SALAMENCE_MEGA                          SPECIES_ARCEUS_NORMAL + 68
#define SPECIES_METAGROSS_MEGA                          SPECIES_ARCEUS_NORMAL + 69
#define SPECIES_LATIAS_MEGA                             SPECIES_ARCEUS_NORMAL + 70
#define SPECIES_LATIOS_MEGA                             SPECIES_ARCEUS_NORMAL + 71
#define SPECIES_LOPUNNY_MEGA                            SPECIES_ARCEUS_NORMAL + 72
#define SPECIES_GARCHOMP_MEGA                           SPECIES_ARCEUS_NORMAL + 73
#define SPECIES_LUCARIO_MEGA                            SPECIES_ARCEUS_NORMAL + 74
#define SPECIES_ABOMASNOW_MEGA                          SPECIES_ARCEUS_NORMAL + 75
#define SPECIES_GALLADE_MEGA                            SPECIES_ARCEUS_NORMAL + 76
#define SPECIES_AUDINO_MEGA                             SPECIES_NONE
#define SPECIES_DIANCIE_MEGA                            SPECIES_NONE
#define SPECIES_RAYQUAZA_MEGA                           SPECIES_ARCEUS_NORMAL + 77
#define SPECIES_KYOGRE_PRIMAL                           SPECIES_ARCEUS_NORMAL + 78
#define SPECIES_GROUDON_PRIMAL                          SPECIES_ARCEUS_NORMAL + 79
#define SPECIES_RATTATA_ALOLA                           SPECIES_NONE
#define SPECIES_RATICATE_ALOLA                          SPECIES_NONE
#define SPECIES_RAICHU_ALOLA                            SPECIES_NONE
#define SPECIES_SANDSHREW_ALOLA                         SPECIES_NONE
#define SPECIES_SANDSLASH_ALOLA                         SPECIES_NONE
#define SPECIES_VULPIX_ALOLA                            SPECIES_NONE
#define SPECIES_NINETALES_ALOLA                         SPECIES_NONE
#define SPECIES_DIGLETT_ALOLA                           SPECIES_NONE
#define SPECIES_DUGTRIO_ALOLA                           SPECIES_NONE
#define SPECIES_MEOWTH_ALOLA                            SPECIES_NONE
#define SPECIES_PERSIAN_ALOLA                           SPECIES_NONE
#define SPECIES_GEODUDE_ALOLA                           SPECIES_NONE
#define SPECIES_GRAVELER_ALOLA                          SPECIES_NONE
#define SPECIES_GOLEM_ALOLA                             SPECIES_NONE
#define SPECIES_GRIMER_ALOLA                            SPECIES_NONE
#define SPECIES_MUK_ALOLA                               SPECIES_NONE
#define SPECIES_EXEGGUTOR_ALOLA                         SPECIES_NONE
#define SPECIES_MAROWAK_ALOLA                           SPECIES_NONE
#define SPECIES_MEOWTH_GALAR                            SPECIES_NONE
#define SPECIES_PONYTA_GALAR                            SPECIES_NONE
#define SPECIES_RAPIDASH_GALAR                          SPECIES_NONE
#define SPECIES_SLOWPOKE_GALAR                          SPECIES_NONE
#define SPECIES_SLOWBRO_GALAR                           SPECIES_NONE
#define SPECIES_FARFETCHD_GALAR                         SPECIES_NONE
#define SPECIES_WEEZING_GALAR                           SPECIES_NONE
#define SPECIES_MR_MIME_GALAR                           SPECIES_NONE
#define SPECIES_ARTICUNO_GALAR                          SPECIES_NONE
#define SPECIES_ZAPDOS_GALAR                            SPECIES_NONE
#define SPECIES_MOLTRES_GALAR                           SPECIES_NONE
#define SPECIES_SLOWKING_GALAR                          SPECIES_NONE
#define SPECIES_CORSOLA_GALAR                           SPECIES_NONE
#define SPECIES_ZIGZAGOON_GALAR                         SPECIES_NONE
#define SPECIES_LINOONE_GALAR                           SPECIES_NONE
#define SPECIES_DARUMAKA_GALAR                          SPECIES_NONE
#define SPECIES_DARMANITAN_GALAR_STANDARD               SPECIES_NONE
#define SPECIES_DARMANITAN_GALAR                        SPECIES_DARMANITAN_GALAR_STANDARD
#define SPECIES_YAMASK_GALAR                            SPECIES_NONE
#define SPECIES_STUNFISK_GALAR                          SPECIES_NONE

//Hisuian Forms
#define SPECIES_GROWLITHE_HISUI                         SPECIES_ARCEUS_NORMAL + 80
#define SPECIES_ARCANINE_HISUI                          SPECIES_ARCEUS_NORMAL + 81
#define SPECIES_VOLTORB_HISUI                           SPECIES_ARCEUS_NORMAL + 82
#define SPECIES_ELECTRODE_HISUI                         SPECIES_ARCEUS_NORMAL + 83
#define SPECIES_TYPHLOSION_HISUI                        SPECIES_ARCEUS_NORMAL + 84
#define SPECIES_QWILFISH_HISUI                          SPECIES_ARCEUS_NORMAL + 85
#define SPECIES_SNEASEL_HISUI                           SPECIES_ARCEUS_NORMAL + 86
#define SPECIES_SAMUROTT_HISUI                          SPECIES_ARCEUS_NORMAL + 87
#define SPECIES_LILLIGANT_HISUI                         SPECIES_ARCEUS_NORMAL + 88
#define SPECIES_ZORUA_HISUI                             SPECIES_ARCEUS_NORMAL + 89
#define SPECIES_ZOROARK_HISUI                           SPECIES_ARCEUS_NORMAL + 90
#define SPECIES_BRAVIARY_HISUI                          SPECIES_ARCEUS_NORMAL + 91
#define SPECIES_SLIGGOO_HISUI                           SPECIES_ARCEUS_NORMAL + 92
#define SPECIES_GOODRA_HISUI                            SPECIES_ARCEUS_NORMAL + 93
#define SPECIES_AVALUGG_HISUI                           SPECIES_ARCEUS_NORMAL + 94
#define SPECIES_DECIDUEYE_HISUI                         SPECIES_ARCEUS_NORMAL + 95

// Misc Forms
#define SPECIES_PIKACHU_COSPLAY                         SPECIES_NONE
#define SPECIES_PIKACHU_ROCK_STAR                       SPECIES_NONE
#define SPECIES_PIKACHU_BELLE                           SPECIES_NONE
#define SPECIES_PIKACHU_POP_STAR                        SPECIES_NONE
#define SPECIES_PIKACHU_PHD                             SPECIES_NONE
#define SPECIES_PIKACHU_LIBRE                           SPECIES_NONE
#define SPECIES_PIKACHU_ORIGINAL                        SPECIES_NONE
#define SPECIES_PIKACHU_HOENN                           SPECIES_NONE
#define SPECIES_PIKACHU_SINNOH                          SPECIES_NONE
#define SPECIES_PIKACHU_UNOVA                           SPECIES_NONE
#define SPECIES_PIKACHU_KALOS                           SPECIES_NONE
#define SPECIES_PIKACHU_ALOLA                           SPECIES_NONE
#define SPECIES_PIKACHU_PARTNER                         SPECIES_NONE
#define SPECIES_PIKACHU_WORLD                           SPECIES_NONE
#define SPECIES_PICHU_SPIKY_EARED                       SPECIES_NONE
#define SPECIES_UNOWN_B                                 SPECIES_ARCEUS_NORMAL + 96
#define SPECIES_UNOWN_C                                 SPECIES_ARCEUS_NORMAL + 97
#define SPECIES_UNOWN_D                                 SPECIES_ARCEUS_NORMAL + 98
#define SPECIES_UNOWN_E                                 SPECIES_ARCEUS_NORMAL + 99
#define SPECIES_UNOWN_F                                 SPECIES_ARCEUS_NORMAL + 100
#define SPECIES_UNOWN_G                                 SPECIES_ARCEUS_NORMAL + 101
#define SPECIES_UNOWN_H                                 SPECIES_ARCEUS_NORMAL + 102
#define SPECIES_UNOWN_I                                 SPECIES_ARCEUS_NORMAL + 103
#define SPECIES_UNOWN_J                                 SPECIES_ARCEUS_NORMAL + 104
#define SPECIES_UNOWN_K                                 SPECIES_ARCEUS_NORMAL + 105
#define SPECIES_UNOWN_L                                 SPECIES_ARCEUS_NORMAL + 106
#define SPECIES_UNOWN_M                                 SPECIES_ARCEUS_NORMAL + 107
#define SPECIES_UNOWN_N                                 SPECIES_ARCEUS_NORMAL + 108
#define SPECIES_UNOWN_O                                 SPECIES_ARCEUS_NORMAL + 109
#define SPECIES_UNOWN_P                                 SPECIES_ARCEUS_NORMAL + 110
#define SPECIES_UNOWN_Q                                 SPECIES_ARCEUS_NORMAL + 111
#define SPECIES_UNOWN_R                                 SPECIES_ARCEUS_NORMAL + 112
#define SPECIES_UNOWN_S                                 SPECIES_ARCEUS_NORMAL + 113
#define SPECIES_UNOWN_T                                 SPECIES_ARCEUS_NORMAL + 114
#define SPECIES_UNOWN_U                                 SPECIES_ARCEUS_NORMAL + 115
#define SPECIES_UNOWN_V                                 SPECIES_ARCEUS_NORMAL + 116
#define SPECIES_UNOWN_W                                 SPECIES_ARCEUS_NORMAL + 117
#define SPECIES_UNOWN_X                                 SPECIES_ARCEUS_NORMAL + 118
#define SPECIES_UNOWN_Y                                 SPECIES_ARCEUS_NORMAL + 119
#define SPECIES_UNOWN_Z                                 SPECIES_ARCEUS_NORMAL + 120
#define SPECIES_UNOWN_EXCLAMATION                       SPECIES_ARCEUS_NORMAL + 121
#define SPECIES_UNOWN_QUESTION                          SPECIES_ARCEUS_NORMAL + 122
#define SPECIES_CASTFORM_SUNNY                          SPECIES_ARCEUS_NORMAL + 123
#define SPECIES_CASTFORM_RAINY                          SPECIES_ARCEUS_NORMAL + 124
#define SPECIES_CASTFORM_SNOWY                          SPECIES_ARCEUS_NORMAL + 125
#define SPECIES_DEOXYS_ATTACK                           SPECIES_ARCEUS_NORMAL + 126
#define SPECIES_DEOXYS_DEFENSE                          SPECIES_ARCEUS_NORMAL + 127
#define SPECIES_DEOXYS_SPEED                            SPECIES_ARCEUS_NORMAL + 128
#define SPECIES_BURMY_SANDY                             SPECIES_ARCEUS_NORMAL + 129
#define SPECIES_BURMY_TRASH                             SPECIES_ARCEUS_NORMAL + 130
#define SPECIES_WORMADAM_SANDY                          SPECIES_ARCEUS_NORMAL + 131
#define SPECIES_WORMADAM_TRASH                          SPECIES_ARCEUS_NORMAL + 132
#define SPECIES_CHERRIM_SUNSHINE                        SPECIES_ARCEUS_NORMAL + 133
#define SPECIES_SHELLOS_EAST                            SPECIES_ARCEUS_NORMAL + 134
#define SPECIES_GASTRODON_EAST                          SPECIES_ARCEUS_NORMAL + 135
#define SPECIES_ROTOM_HEAT                              SPECIES_ARCEUS_NORMAL + 136
#define SPECIES_ROTOM_WASH                              SPECIES_ARCEUS_NORMAL + 137
#define SPECIES_ROTOM_FROST                             SPECIES_ARCEUS_NORMAL + 138
#define SPECIES_ROTOM_FAN                               SPECIES_ARCEUS_NORMAL + 139
#define SPECIES_ROTOM_MOW                               SPECIES_ARCEUS_NORMAL + 140
#define SPECIES_DIALGA_ORIGIN                           SPECIES_ARCEUS_NORMAL + 141
#define SPECIES_PALKIA_ORIGIN                           SPECIES_ARCEUS_NORMAL + 142
#define SPECIES_GIRATINA_ORIGIN                         SPECIES_ARCEUS_NORMAL + 143
#define SPECIES_SHAYMIN_SKY                             SPECIES_ARCEUS_NORMAL + 144
#define SPECIES_ARCEUS_FIGHTING                         SPECIES_ARCEUS_NORMAL + 145
#define SPECIES_ARCEUS_FLYING                           SPECIES_ARCEUS_NORMAL + 146
#define SPECIES_ARCEUS_POISON                           SPECIES_ARCEUS_NORMAL + 147
#define SPECIES_ARCEUS_GROUND                           SPECIES_ARCEUS_NORMAL + 148
#define SPECIES_ARCEUS_ROCK                             SPECIES_ARCEUS_NORMAL + 149
#define SPECIES_ARCEUS_BUG                              SPECIES_ARCEUS_NORMAL + 150
#define SPECIES_ARCEUS_GHOST                            SPECIES_ARCEUS_NORMAL + 151
#define SPECIES_ARCEUS_STEEL                            SPECIES_ARCEUS_NORMAL + 152
#define SPECIES_ARCEUS_FIRE                             SPECIES_ARCEUS_NORMAL + 153
#define SPECIES_ARCEUS_WATER                            SPECIES_ARCEUS_NORMAL + 154
#define SPECIES_ARCEUS_GRASS                            SPECIES_ARCEUS_NORMAL + 155
#define SPECIES_ARCEUS_ELECTRIC                         SPECIES_ARCEUS_NORMAL + 156
#define SPECIES_ARCEUS_PSYCHIC                          SPECIES_ARCEUS_NORMAL + 157
#define SPECIES_ARCEUS_ICE                              SPECIES_ARCEUS_NORMAL + 158
#define SPECIES_ARCEUS_DRAGON                           SPECIES_ARCEUS_NORMAL + 159
#define SPECIES_ARCEUS_DARK                             SPECIES_ARCEUS_NORMAL + 160
#define SPECIES_ARCEUS_FAIRY                            SPECIES_ARCEUS_NORMAL + 161
#define SPECIES_BASCULIN_BLUE_STRIPED                   SPECIES_ARCEUS_NORMAL + 162
#define SPECIES_BASCULIN_WHITE_STRIPED                  SPECIES_ARCEUS_NORMAL + 163
#define SPECIES_DARMANITAN_ZEN                          SPECIES_NONE
#define SPECIES_DARMANITAN_GALAR_ZEN                    SPECIES_NONE
#define SPECIES_DEERLING_SUMMER                         SPECIES_NONE
#define SPECIES_DEERLING_AUTUMN                         SPECIES_NONE
#define SPECIES_DEERLING_WINTER                         SPECIES_NONE
#define SPECIES_SAWSBUCK_SUMMER                         SPECIES_NONE
#define SPECIES_SAWSBUCK_AUTUMN                         SPECIES_NONE
#define SPECIES_SAWSBUCK_WINTER                         SPECIES_NONE
#define SPECIES_TORNADUS_THERIAN                        SPECIES_ARCEUS_NORMAL + 164
#define SPECIES_THUNDURUS_THERIAN                       SPECIES_ARCEUS_NORMAL + 165
#define SPECIES_LANDORUS_THERIAN                        SPECIES_ARCEUS_NORMAL + 166
#define SPECIES_ENAMORUS_THERIAN                        SPECIES_ARCEUS_NORMAL + 167
#define SPECIES_KYUREM_WHITE                            SPECIES_NONE
#define SPECIES_KYUREM_BLACK                            SPECIES_NONE
#define SPECIES_KELDEO_RESOLUTE                         SPECIES_NONE
#define SPECIES_MELOETTA_PIROUETTE                      SPECIES_NONE
#define SPECIES_GENESECT_DOUSE                          SPECIES_NONE
#define SPECIES_GENESECT_SHOCK                          SPECIES_NONE
#define SPECIES_GENESECT_BURN                           SPECIES_NONE
#define SPECIES_GENESECT_CHILL                          SPECIES_NONE
#define SPECIES_GRENINJA_BOND                           SPECIES_NONE
#define SPECIES_GRENINJA_BATTLE_BOND                    SPECIES_GRENINJA_BOND
#define SPECIES_GRENINJA_ASH                            SPECIES_NONE
#define SPECIES_VIVILLON_POLAR                          SPECIES_NONE
#define SPECIES_VIVILLON_TUNDRA                         SPECIES_NONE
#define SPECIES_VIVILLON_CONTINENTAL                    SPECIES_NONE
#define SPECIES_VIVILLON_GARDEN                         SPECIES_NONE
#define SPECIES_VIVILLON_ELEGANT                        SPECIES_NONE
#define SPECIES_VIVILLON_MEADOW                         SPECIES_NONE
#define SPECIES_VIVILLON_MODERN                         SPECIES_NONE
#define SPECIES_VIVILLON_MARINE                         SPECIES_NONE
#define SPECIES_VIVILLON_ARCHIPELAGO                    SPECIES_NONE
#define SPECIES_VIVILLON_HIGH_PLAINS                    SPECIES_NONE
#define SPECIES_VIVILLON_SANDSTORM                      SPECIES_NONE
#define SPECIES_VIVILLON_RIVER                          SPECIES_NONE
#define SPECIES_VIVILLON_MONSOON                        SPECIES_NONE
#define SPECIES_VIVILLON_SAVANNA                        SPECIES_NONE
#define SPECIES_VIVILLON_SUN                            SPECIES_NONE
#define SPECIES_VIVILLON_OCEAN                          SPECIES_NONE
#define SPECIES_VIVILLON_JUNGLE                         SPECIES_NONE
#define SPECIES_VIVILLON_FANCY                          SPECIES_NONE
#define SPECIES_VIVILLON_POKEBALL                       SPECIES_NONE
#define SPECIES_FLABEBE_YELLOW                          SPECIES_NONE
#define SPECIES_FLABEBE_ORANGE                          SPECIES_NONE
#define SPECIES_FLABEBE_BLUE                            SPECIES_NONE
#define SPECIES_FLABEBE_WHITE                           SPECIES_NONE
#define SPECIES_FLOETTE_YELLOW                          SPECIES_NONE
#define SPECIES_FLOETTE_ORANGE                          SPECIES_NONE
#define SPECIES_FLOETTE_BLUE                            SPECIES_NONE
#define SPECIES_FLOETTE_WHITE                           SPECIES_NONE
#define SPECIES_FLOETTE_ETERNAL                         SPECIES_NONE
#define SPECIES_FLORGES_YELLOW                          SPECIES_NONE
#define SPECIES_FLORGES_ORANGE                          SPECIES_NONE
#define SPECIES_FLORGES_BLUE                            SPECIES_NONE
#define SPECIES_FLORGES_WHITE                           SPECIES_NONE
#define SPECIES_FURFROU_HEART_TRIM                      SPECIES_NONE
#define SPECIES_FURFROU_STAR_TRIM                       SPECIES_NONE
#define SPECIES_FURFROU_DIAMOND_TRIM                    SPECIES_NONE
#define SPECIES_FURFROU_DEBUTANTE_TRIM                  SPECIES_NONE
#define SPECIES_FURFROU_MATRON_TRIM                     SPECIES_NONE
#define SPECIES_FURFROU_DANDY_TRIM                      SPECIES_NONE
#define SPECIES_FURFROU_LA_REINE_TRIM                   SPECIES_NONE
#define SPECIES_FURFROU_KABUKI_TRIM                     SPECIES_NONE
#define SPECIES_FURFROU_PHARAOH_TRIM                    SPECIES_NONE
#define SPECIES_MEOWSTIC_F                              SPECIES_NONE
#define SPECIES_AEGISLASH_BLADE                         SPECIES_NONE
#define SPECIES_PUMPKABOO_SMALL                         SPECIES_NONE
#define SPECIES_PUMPKABOO_LARGE                         SPECIES_NONE
#define SPECIES_PUMPKABOO_SUPER                         SPECIES_NONE
#define SPECIES_GOURGEIST_SMALL                         SPECIES_NONE
#define SPECIES_GOURGEIST_LARGE                         SPECIES_NONE
#define SPECIES_GOURGEIST_SUPER                         SPECIES_NONE
#define SPECIES_XERNEAS_ACTIVE                          SPECIES_NONE
#define SPECIES_ZYGARDE_10                              SPECIES_ZYGARDE_10_AURA_BREAK
#define SPECIES_ZYGARDE_10_AURA_BREAK                   SPECIES_NONE
#define SPECIES_ZYGARDE_10_POWER_CONSTRUCT              SPECIES_NONE
#define SPECIES_ZYGARDE_50_POWER_CONSTRUCT              SPECIES_NONE
#define SPECIES_ZYGARDE_COMPLETE                        SPECIES_NONE
#define SPECIES_HOOPA_UNBOUND                           SPECIES_NONE
#define SPECIES_ORICORIO_POM_POM                        SPECIES_NONE
#define SPECIES_ORICORIO_PAU                            SPECIES_NONE
#define SPECIES_ORICORIO_SENSU                          SPECIES_NONE
#define SPECIES_ROCKRUFF_OWN_TEMPO                      SPECIES_NONE
#define SPECIES_LYCANROC_MIDNIGHT                       SPECIES_NONE
#define SPECIES_LYCANROC_DUSK                           SPECIES_NONE
#define SPECIES_WISHIWASHI_SCHOOL                       SPECIES_NONE
#define SPECIES_SILVALLY_FIGHTING                       SPECIES_NONE
#define SPECIES_SILVALLY_FLYING                         SPECIES_NONE
#define SPECIES_SILVALLY_POISON                         SPECIES_NONE
#define SPECIES_SILVALLY_GROUND                         SPECIES_NONE
#define SPECIES_SILVALLY_ROCK                           SPECIES_NONE
#define SPECIES_SILVALLY_BUG                            SPECIES_NONE
#define SPECIES_SILVALLY_GHOST                          SPECIES_NONE
#define SPECIES_SILVALLY_STEEL                          SPECIES_NONE
#define SPECIES_SILVALLY_FIRE                           SPECIES_NONE
#define SPECIES_SILVALLY_WATER                          SPECIES_NONE
#define SPECIES_SILVALLY_GRASS                          SPECIES_NONE
#define SPECIES_SILVALLY_ELECTRIC                       SPECIES_NONE
#define SPECIES_SILVALLY_PSYCHIC                        SPECIES_NONE
#define SPECIES_SILVALLY_ICE                            SPECIES_NONE
#define SPECIES_SILVALLY_DRAGON                         SPECIES_NONE
#define SPECIES_SILVALLY_DARK                           SPECIES_NONE
#define SPECIES_SILVALLY_FAIRY                          SPECIES_NONE
#define SPECIES_MINIOR_ORANGE                           SPECIES_MINIOR_METEOR_ORANGE
#define SPECIES_MINIOR_YELLOW                           SPECIES_MINIOR_METEOR_YELLOW
#define SPECIES_MINIOR_GREEN                            SPECIES_MINIOR_METEOR_GREEN
#define SPECIES_MINIOR_BLUE                             SPECIES_MINIOR_METEOR_BLUE
#define SPECIES_MINIOR_INDIGO                           SPECIES_MINIOR_METEOR_INDIGO
#define SPECIES_MINIOR_VIOLET                           SPECIES_MINIOR_METEOR_VIOLET
#define SPECIES_MINIOR_METEOR_ORANGE                    SPECIES_NONE
#define SPECIES_MINIOR_METEOR_YELLOW                    SPECIES_NONE
#define SPECIES_MINIOR_METEOR_GREEN                     SPECIES_NONE
#define SPECIES_MINIOR_METEOR_BLUE                      SPECIES_NONE
#define SPECIES_MINIOR_METEOR_INDIGO                    SPECIES_NONE
#define SPECIES_MINIOR_METEOR_VIOLET                    SPECIES_NONE
#define SPECIES_MINIOR_CORE                             SPECIES_MINIOR_CORE_RED
#define SPECIES_MINIOR_CORE_RED                         SPECIES_NONE
#define SPECIES_MINIOR_CORE_ORANGE                      SPECIES_NONE
#define SPECIES_MINIOR_CORE_YELLOW                      SPECIES_NONE
#define SPECIES_MINIOR_CORE_GREEN                       SPECIES_NONE
#define SPECIES_MINIOR_CORE_BLUE                        SPECIES_NONE
#define SPECIES_MINIOR_CORE_INDIGO                      SPECIES_NONE
#define SPECIES_MINIOR_CORE_VIOLET                      SPECIES_NONE
#define SPECIES_MIMIKYU_BUSTED                          SPECIES_NONE
#define SPECIES_NECROZMA_DUSK_MANE                      SPECIES_NONE
#define SPECIES_NECROZMA_DAWN_WINGS                     SPECIES_NONE
#define SPECIES_NECROZMA_ULTRA                          SPECIES_NONE
#define SPECIES_MAGEARNA_ORIGINAL                       SPECIES_NONE
#define SPECIES_CRAMORANT_GULPING                       SPECIES_MOTHIM_TRASH + 14
#define SPECIES_CRAMORANT_GORGING                       SPECIES_MOTHIM_TRASH + 15
#define SPECIES_TOXTRICITY_LOW_KEY                      SPECIES_NONE
#define SPECIES_SINISTEA_ANTIQUE                        SPECIES_NONE
#define SPECIES_POLTEAGEIST_ANTIQUE                     SPECIES_NONE
#define SPECIES_ALCREMIE_RUBY_CREAM                     SPECIES_ALCREMIE_STRAWBERRY_RUBY_CREAM
#define SPECIES_ALCREMIE_MATCHA_CREAM                   SPECIES_ALCREMIE_STRAWBERRY_MATCHA_CREAM
#define SPECIES_ALCREMIE_MINT_CREAM                     SPECIES_ALCREMIE_STRAWBERRY_MINT_CREAM
#define SPECIES_ALCREMIE_LEMON_CREAM                    SPECIES_ALCREMIE_STRAWBERRY_LEMON_CREAM
#define SPECIES_ALCREMIE_SALTED_CREAM                   SPECIES_ALCREMIE_STRAWBERRY_SALTED_CREAM
#define SPECIES_ALCREMIE_RUBY_SWIRL                     SPECIES_ALCREMIE_STRAWBERRY_RUBY_SWIRL
#define SPECIES_ALCREMIE_CARAMEL_SWIRL                  SPECIES_ALCREMIE_STRAWBERRY_CARAMEL_SWIRL
#define SPECIES_ALCREMIE_RAINBOW_SWIRL                  SPECIES_ALCREMIE_STRAWBERRY_RAINBOW_SWIRL
#define SPECIES_ALCREMIE_STRAWBERRY_RUBY_CREAM          SPECIES_NONE
#define SPECIES_ALCREMIE_STRAWBERRY_MATCHA_CREAM        SPECIES_NONE
#define SPECIES_ALCREMIE_STRAWBERRY_MINT_CREAM          SPECIES_NONE
#define SPECIES_ALCREMIE_STRAWBERRY_LEMON_CREAM         SPECIES_NONE
#define SPECIES_ALCREMIE_STRAWBERRY_SALTED_CREAM        SPECIES_NONE
#define SPECIES_ALCREMIE_STRAWBERRY_RUBY_SWIRL          SPECIES_NONE
#define SPECIES_ALCREMIE_STRAWBERRY_CARAMEL_SWIRL       SPECIES_NONE
#define SPECIES_ALCREMIE_STRAWBERRY_RAINBOW_SWIRL       SPECIES_NONE
#define SPECIES_EISCUE_NOICE                            SPECIES_NONE
#define SPECIES_INDEEDEE_F                              SPECIES_NONE
#define SPECIES_MORPEKO_HANGRY                          SPECIES_NONE
#define SPECIES_ZACIAN_CROWNED                          SPECIES_NONE
#define SPECIES_ZAMAZENTA_CROWNED                       SPECIES_NONE
#define SPECIES_ETERNATUS_ETERNAMAX                     SPECIES_NONE
#define SPECIES_URSHIFU_RAPID_STRIKE                    SPECIES_NONE
#define SPECIES_ZARUDE_DADA                             SPECIES_NONE
#define SPECIES_CALYREX_ICE                             SPECIES_NONE
#define SPECIES_CALYREX_SHADOW                          SPECIES_NONE
#define SPECIES_BASCULEGION_F                           SPECIES_ARCEUS_NORMAL + 168
#define SPECIES_ALCREMIE_BERRY                          SPECIES_ALCREMIE_BERRY_VANILLA_CREAM
#define SPECIES_ALCREMIE_BERRY_VANILLA_CREAM            SPECIES_NONE
#define SPECIES_ALCREMIE_BERRY_RUBY_CREAM               SPECIES_NONE
#define SPECIES_ALCREMIE_BERRY_MATCHA_CREAM             SPECIES_NONE
#define SPECIES_ALCREMIE_BERRY_MINT_CREAM               SPECIES_NONE
#define SPECIES_ALCREMIE_BERRY_LEMON_CREAM              SPECIES_NONE
#define SPECIES_ALCREMIE_BERRY_SALTED_CREAM             SPECIES_NONE
#define SPECIES_ALCREMIE_BERRY_RUBY_SWIRL               SPECIES_NONE
#define SPECIES_ALCREMIE_BERRY_CARAMEL_SWIRL            SPECIES_NONE
#define SPECIES_ALCREMIE_BERRY_RAINBOW_SWIRL            SPECIES_NONE
#define SPECIES_ALCREMIE_LOVE                           SPECIES_ALCREMIE_LOVE_VANILLA_CREAM
#define SPECIES_ALCREMIE_LOVE_VANILLA_CREAM             SPECIES_NONE
#define SPECIES_ALCREMIE_LOVE_RUBY_CREAM                SPECIES_NONE
#define SPECIES_ALCREMIE_LOVE_MATCHA_CREAM              SPECIES_NONE
#define SPECIES_ALCREMIE_LOVE_MINT_CREAM                SPECIES_NONE
#define SPECIES_ALCREMIE_LOVE_LEMON_CREAM               SPECIES_NONE
#define SPECIES_ALCREMIE_LOVE_SALTED_CREAM              SPECIES_NONE
#define SPECIES_ALCREMIE_LOVE_RUBY_SWIRL                SPECIES_NONE
#define SPECIES_ALCREMIE_LOVE_CARAMEL_SWIRL             SPECIES_NONE
#define SPECIES_ALCREMIE_LOVE_RAINBOW_SWIRL             SPECIES_NONE
#define SPECIES_ALCREMIE_STAR                           SPECIES_ALCREMIE_STAR_VANILLA_CREAM
#define SPECIES_ALCREMIE_STAR_VANILLA_CREAM             SPECIES_NONE
#define SPECIES_ALCREMIE_STAR_RUBY_CREAM                SPECIES_NONE
#define SPECIES_ALCREMIE_STAR_MATCHA_CREAM              SPECIES_NONE
#define SPECIES_ALCREMIE_STAR_MINT_CREAM                SPECIES_NONE
#define SPECIES_ALCREMIE_STAR_LEMON_CREAM               SPECIES_NONE
#define SPECIES_ALCREMIE_STAR_SALTED_CREAM              SPECIES_NONE
#define SPECIES_ALCREMIE_STAR_RUBY_SWIRL                SPECIES_NONE
#define SPECIES_ALCREMIE_STAR_CARAMEL_SWIRL             SPECIES_NONE
#define SPECIES_ALCREMIE_STAR_RAINBOW_SWIRL             SPECIES_NONE
#define SPECIES_ALCREMIE_CLOVER                         SPECIES_ALCREMIE_CLOVER_VANILLA_CREAM
#define SPECIES_ALCREMIE_CLOVER_VANILLA_CREAM           SPECIES_NONE
#define SPECIES_ALCREMIE_CLOVER_RUBY_CREAM              SPECIES_NONE
#define SPECIES_ALCREMIE_CLOVER_MATCHA_CREAM            SPECIES_NONE
#define SPECIES_ALCREMIE_CLOVER_MINT_CREAM              SPECIES_NONE
#define SPECIES_ALCREMIE_CLOVER_LEMON_CREAM             SPECIES_NONE
#define SPECIES_ALCREMIE_CLOVER_SALTED_CREAM            SPECIES_NONE
#define SPECIES_ALCREMIE_CLOVER_RUBY_SWIRL              SPECIES_NONE
#define SPECIES_ALCREMIE_CLOVER_CARAMEL_SWIRL           SPECIES_NONE
#define SPECIES_ALCREMIE_CLOVER_RAINBOW_SWIRL           SPECIES_NONE
#define SPECIES_ALCREMIE_FLOWER                         SPECIES_ALCREMIE_FLOWER_VANILLA_CREAM
#define SPECIES_ALCREMIE_FLOWER_VANILLA_CREAM           SPECIES_NONE
#define SPECIES_ALCREMIE_FLOWER_RUBY_CREAM              SPECIES_NONE
#define SPECIES_ALCREMIE_FLOWER_MATCHA_CREAM            SPECIES_NONE
#define SPECIES_ALCREMIE_FLOWER_MINT_CREAM              SPECIES_NONE
#define SPECIES_ALCREMIE_FLOWER_LEMON_CREAM             SPECIES_NONE
#define SPECIES_ALCREMIE_FLOWER_SALTED_CREAM            SPECIES_NONE
#define SPECIES_ALCREMIE_FLOWER_RUBY_SWIRL              SPECIES_NONE
#define SPECIES_ALCREMIE_FLOWER_CARAMEL_SWIRL           SPECIES_NONE
#define SPECIES_ALCREMIE_FLOWER_RAINBOW_SWIRL           SPECIES_NONE
#define SPECIES_ALCREMIE_RIBBON                         SPECIES_ALCREMIE_RIBBON_VANILLA_CREAM
#define SPECIES_ALCREMIE_RIBBON_VANILLA_CREAM           SPECIES_NONE
#define SPECIES_ALCREMIE_RIBBON_RUBY_CREAM              SPECIES_NONE
#define SPECIES_ALCREMIE_RIBBON_MATCHA_CREAM            SPECIES_NONE
#define SPECIES_ALCREMIE_RIBBON_MINT_CREAM              SPECIES_NONE
#define SPECIES_ALCREMIE_RIBBON_LEMON_CREAM             SPECIES_NONE
#define SPECIES_ALCREMIE_RIBBON_SALTED_CREAM            SPECIES_NONE
#define SPECIES_ALCREMIE_RIBBON_RUBY_SWIRL              SPECIES_NONE
#define SPECIES_ALCREMIE_RIBBON_CARAMEL_SWIRL           SPECIES_NONE
#define SPECIES_ALCREMIE_RIBBON_RAINBOW_SWIRL           SPECIES_NONE

#define GEN9_START                                      SPECIES_ALCREMIE_RIBBON_RAINBOW_SWIRL

#define SPECIES_SPRIGATITO                              SPECIES_NONE
#define SPECIES_FLORAGATO                               SPECIES_NONE
#define SPECIES_MEOWSCARADA                             SPECIES_NONE
#define SPECIES_FUECOCO                                 SPECIES_NONE
#define SPECIES_CROCALOR                                SPECIES_NONE
#define SPECIES_SKELEDIRGE                              SPECIES_NONE
#define SPECIES_QUAXLY                                  SPECIES_NONE
#define SPECIES_QUAXWELL                                SPECIES_NONE
#define SPECIES_QUAQUAVAL                               SPECIES_NONE
#define SPECIES_LECHONK                                 SPECIES_NONE
#define SPECIES_OINKOLOGNE                              SPECIES_OINKOLOGNE_M
#define SPECIES_OINKOLOGNE_M                            SPECIES_NONE
#define SPECIES_OINKOLOGNE_F                            SPECIES_NONE
#define SPECIES_TAROUNTULA                              SPECIES_NONE
#define SPECIES_SPIDOPS                                 SPECIES_NONE
#define SPECIES_NYMBLE                                  SPECIES_NONE
#define SPECIES_LOKIX                                   SPECIES_NONE
#define SPECIES_PAWMI                                   SPECIES_NONE
#define SPECIES_PAWMO                                   SPECIES_NONE
#define SPECIES_PAWMOT                                  SPECIES_NONE
#define SPECIES_TANDEMAUS                               SPECIES_NONE
#define SPECIES_MAUSHOLD                                SPECIES_MAUSHOLD_THREE
#define SPECIES_MAUSHOLD_THREE                          SPECIES_NONE
#define SPECIES_MAUSHOLD_FOUR                           SPECIES_NONE
#define SPECIES_FIDOUGH                                 SPECIES_NONE
#define SPECIES_DACHSBUN                                SPECIES_NONE
#define SPECIES_SMOLIV                                  SPECIES_NONE
#define SPECIES_DOLLIV                                  SPECIES_NONE
#define SPECIES_ARBOLIVA                                SPECIES_NONE
#define SPECIES_SQUAWKABILLY                            SPECIES_SQUAWKABILLY_GREEN
#define SPECIES_SQUAWKABILLY_GREEN                      SPECIES_NONE
#define SPECIES_SQUAWKABILLY_BLUE                       SPECIES_NONE
#define SPECIES_SQUAWKABILLY_YELLOW                     SPECIES_NONE
#define SPECIES_SQUAWKABILLY_WHITE                      SPECIES_NONE
#define SPECIES_NACLI                                   SPECIES_NONE
#define SPECIES_NACLSTACK                               SPECIES_NONE
#define SPECIES_GARGANACL                               SPECIES_NONE
#define SPECIES_CHARCADET                               SPECIES_NONE
#define SPECIES_ARMAROUGE                               SPECIES_NONE
#define SPECIES_CERULEDGE                               SPECIES_NONE
#define SPECIES_TADBULB                                 SPECIES_NONE
#define SPECIES_BELLIBOLT                               SPECIES_NONE
#define SPECIES_WATTREL                                 SPECIES_NONE
#define SPECIES_KILOWATTREL                             SPECIES_NONE
#define SPECIES_MASCHIFF                                SPECIES_NONE
#define SPECIES_MABOSSTIFF                              SPECIES_NONE
#define SPECIES_SHROODLE                                SPECIES_NONE
#define SPECIES_GRAFAIAI                                SPECIES_NONE
#define SPECIES_BRAMBLIN                                SPECIES_NONE
#define SPECIES_BRAMBLEGHAST                            SPECIES_NONE
#define SPECIES_TOEDSCOOL                               SPECIES_NONE
#define SPECIES_TOEDSCRUEL                              SPECIES_NONE
#define SPECIES_KLAWF                                   SPECIES_NONE
#define SPECIES_CAPSAKID                                SPECIES_NONE
#define SPECIES_SCOVILLAIN                              SPECIES_NONE
#define SPECIES_RELLOR                                  SPECIES_NONE
#define SPECIES_RABSCA                                  SPECIES_NONE
#define SPECIES_FLITTLE                                 SPECIES_NONE
#define SPECIES_ESPATHRA                                SPECIES_NONE
#define SPECIES_TINKATINK                               SPECIES_NONE
#define SPECIES_TINKATUFF                               SPECIES_NONE
#define SPECIES_TINKATON                                SPECIES_NONE
#define SPECIES_WIGLETT                                 SPECIES_NONE
#define SPECIES_WUGTRIO                                 SPECIES_NONE
#define SPECIES_BOMBIRDIER                              SPECIES_NONE
#define SPECIES_FINIZEN                                 SPECIES_NONE
#define SPECIES_PALAFIN                                 SPECIES_PALAFIN_ZERO
#define SPECIES_PALAFIN_ZERO                            SPECIES_NONE
#define SPECIES_PALAFIN_HERO                            SPECIES_NONE
#define SPECIES_VAROOM                                  SPECIES_NONE
#define SPECIES_REVAVROOM                               SPECIES_NONE
#define SPECIES_CYCLIZAR                                SPECIES_NONE
#define SPECIES_ORTHWORM                                SPECIES_NONE
#define SPECIES_GLIMMET                                 SPECIES_NONE
#define SPECIES_GLIMMORA                                SPECIES_NONE
#define SPECIES_GREAVARD                                SPECIES_NONE
#define SPECIES_HOUNDSTONE                              SPECIES_NONE
#define SPECIES_FLAMIGO                                 SPECIES_NONE
#define SPECIES_CETODDLE                                SPECIES_NONE
#define SPECIES_CETITAN                                 SPECIES_NONE
#define SPECIES_VELUZA                                  SPECIES_NONE
#define SPECIES_DONDOZO                                 SPECIES_NONE
#define SPECIES_TATSUGIRI                               SPECIES_TATSUGIRI_CURLY
#define SPECIES_TATSUGIRI_CURLY                         SPECIES_MOTHIM_TRASH + 11
#define SPECIES_TATSUGIRI_DROOPY                        SPECIES_MOTHIM_TRASH + 12
#define SPECIES_TATSUGIRI_STRETCHY                      SPECIES_MOTHIM_TRASH + 13
#define SPECIES_ANNIHILAPE                              SPECIES_ARCEUS_NORMAL + 169
#define SPECIES_CLODSIRE                                SPECIES_NONE
#define SPECIES_FARIGIRAF                               SPECIES_ARCEUS_NORMAL + 170
#define SPECIES_DUDUNSPARCE                             SPECIES_DUDUNSPARCE_TWO_SEGMENT
#define SPECIES_DUDUNSPARCE_TWO_SEGMENT                 SPECIES_ARCEUS_NORMAL + 171
#define SPECIES_DUDUNSPARCE_THREE_SEGMENT               SPECIES_ARCEUS_NORMAL + 172
#define SPECIES_KINGAMBIT                               SPECIES_NONE
#define SPECIES_GREAT_TUSK                              SPECIES_NONE
#define SPECIES_SCREAM_TAIL                             SPECIES_NONE
#define SPECIES_BRUTE_BONNET                            SPECIES_NONE
#define SPECIES_FLUTTER_MANE                            SPECIES_NONE
#define SPECIES_SLITHER_WING                            SPECIES_NONE
#define SPECIES_SANDY_SHOCKS                            SPECIES_NONE
#define SPECIES_IRON_TREADS                             SPECIES_NONE
#define SPECIES_IRON_BUNDLE                             SPECIES_NONE
#define SPECIES_IRON_HANDS                              SPECIES_NONE
#define SPECIES_IRON_JUGULIS                            SPECIES_NONE
#define SPECIES_IRON_MOTH                               SPECIES_NONE
#define SPECIES_IRON_THORNS                             SPECIES_NONE
#define SPECIES_FRIGIBAX                                SPECIES_NONE
#define SPECIES_ARCTIBAX                                SPECIES_NONE
#define SPECIES_BAXCALIBUR                              SPECIES_NONE
#define SPECIES_GIMMIGHOUL                              SPECIES_GIMMIGHOUL_CHEST
#define SPECIES_GIMMIGHOUL_CHEST                        SPECIES_NONE
#define SPECIES_GIMMIGHOUL_ROAMING                      SPECIES_NONE
#define SPECIES_GHOLDENGO                               SPECIES_NONE
#define SPECIES_WO_CHIEN                                SPECIES_NONE
#define SPECIES_CHIEN_PAO                               SPECIES_NONE
#define SPECIES_TING_LU                                 SPECIES_NONE
#define SPECIES_CHI_YU                                  SPECIES_NONE
#define SPECIES_ROARING_MOON                            SPECIES_NONE
#define SPECIES_IRON_VALIANT                            SPECIES_NONE
#define SPECIES_KORAIDON                                SPECIES_NONE
#define SPECIES_MIRAIDON                                SPECIES_NONE
// Paldean Forms
#define SPECIES_TAUROS_PALDEA_COMBAT                    SPECIES_MOTHIM_TRASH + 1
#define SPECIES_TAUROS_PALDEA_BLAZE                     SPECIES_MOTHIM_TRASH + 2
#define SPECIES_TAUROS_PALDEA_AQUA                      SPECIES_MOTHIM_TRASH + 3
#define SPECIES_WOOPER_PALDEA                           SPECIES_NONE
// Scarlet and Violet 1.2.0
#define SPECIES_WALKING_WAKE                            SPECIES_NONE
#define SPECIES_IRON_LEAVES                             SPECIES_NONE
// Teal Mask
#define SPECIES_DIPPLIN                                 SPECIES_NONE
#define SPECIES_POLTCHAGEIST                            SPECIES_POLTCHAGEIST_COUNTERFEIT
#define SPECIES_POLTCHAGEIST_COUNTERFEIT                SPECIES_NONE
#define SPECIES_POLTCHAGEIST_ARTISAN                    SPECIES_NONE
#define SPECIES_SINISTCHA                               SPECIES_SINISTCHA_UNREMARKABLE
#define SPECIES_SINISTCHA_UNREMARKABLE                  SPECIES_NONE
#define SPECIES_SINISTCHA_MASTERPIECE                   SPECIES_NONE
#define SPECIES_OKIDOGI                                 SPECIES_NONE
#define SPECIES_MUNKIDORI                               SPECIES_NONE
#define SPECIES_FEZANDIPITI                             SPECIES_NONE
#define SPECIES_OGERPON                                 SPECIES_OGERPON_TEAL
#define SPECIES_OGERPON_TEAL                            SPECIES_NONE
#define SPECIES_OGERPON_WELLSPRING                      SPECIES_MOTHIM_TRASH + 4
#define SPECIES_OGERPON_HEARTHFLAME                     SPECIES_MOTHIM_TRASH + 5
#define SPECIES_OGERPON_CORNERSTONE                     SPECIES_MOTHIM_TRASH + 6
#define SPECIES_OGERPON_TEAL_TERA                       SPECIES_MOTHIM_TRASH + 7
#define SPECIES_OGERPON_WELLSPRING_TERA                 SPECIES_MOTHIM_TRASH + 8
#define SPECIES_OGERPON_HEARTHFLAME_TERA                SPECIES_MOTHIM_TRASH + 9
#define SPECIES_OGERPON_CORNERSTONE_TERA                SPECIES_MOTHIM_TRASH + 10
#define SPECIES_URSALUNA_BLOODMOON                      SPECIES_ARCEUS_NORMAL + 173
// Indigo Disk
#define SPECIES_ARCHALUDON                              SPECIES_NONE
#define SPECIES_HYDRAPPLE                               SPECIES_NONE
#define SPECIES_GOUGING_FIRE                            SPECIES_NONE
#define SPECIES_RAGING_BOLT                             SPECIES_NONE
#define SPECIES_IRON_BOULDER                            SPECIES_NONE
#define SPECIES_IRON_CROWN                              SPECIES_NONE
#define SPECIES_TERAPAGOS                               SPECIES_TERAPAGOS_NORMAL
#define SPECIES_TERAPAGOS_NORMAL                        SPECIES_NONE
#define SPECIES_TERAPAGOS_TERASTAL                      SPECIES_NONE
#define SPECIES_TERAPAGOS_STELLAR                       SPECIES_NONE
#define SPECIES_PECHARUNT                               SPECIES_NONE
#define SPECIES_LUGIA_SHADOW                            SPECIES_ARCEUS_NORMAL + 174
#define SPECIES_MOTHIM_SANDY                            SPECIES_ARCEUS_NORMAL + 175
#define SPECIES_MOTHIM_TRASH                            SPECIES_ARCEUS_NORMAL + 176
#define SPECIES_SCATTERBUG_POLAR                        SPECIES_NONE
#define SPECIES_SCATTERBUG_TUNDRA                       SPECIES_NONE
#define SPECIES_SCATTERBUG_CONTINENTAL                  SPECIES_NONE
#define SPECIES_SCATTERBUG_GARDEN                       SPECIES_NONE
#define SPECIES_SCATTERBUG_ELEGANT                      SPECIES_NONE
#define SPECIES_SCATTERBUG_MEADOW                       SPECIES_NONE
#define SPECIES_SCATTERBUG_MODERN                       SPECIES_NONE
#define SPECIES_SCATTERBUG_MARINE                       SPECIES_NONE
#define SPECIES_SCATTERBUG_ARCHIPELAGO                  SPECIES_NONE
#define SPECIES_SCATTERBUG_HIGH_PLAINS                  SPECIES_NONE
#define SPECIES_SCATTERBUG_SANDSTORM                    SPECIES_NONE
#define SPECIES_SCATTERBUG_RIVER                        SPECIES_NONE
#define SPECIES_SCATTERBUG_MONSOON                      SPECIES_NONE
#define SPECIES_SCATTERBUG_SAVANNA                      SPECIES_NONE
#define SPECIES_SCATTERBUG_SUN                          SPECIES_NONE
#define SPECIES_SCATTERBUG_OCEAN                        SPECIES_NONE
#define SPECIES_SCATTERBUG_JUNGLE                       SPECIES_NONE
#define SPECIES_SCATTERBUG_FANCY                        SPECIES_NONE
#define SPECIES_SCATTERBUG_POKEBALL                     SPECIES_NONE
#define SPECIES_SPEWPA_POLAR                            SPECIES_NONE
#define SPECIES_SPEWPA_TUNDRA                           SPECIES_NONE
#define SPECIES_SPEWPA_CONTINENTAL                      SPECIES_NONE
#define SPECIES_SPEWPA_GARDEN                           SPECIES_NONE
#define SPECIES_SPEWPA_ELEGANT                          SPECIES_NONE
#define SPECIES_SPEWPA_MEADOW                           SPECIES_NONE
#define SPECIES_SPEWPA_MODERN                           SPECIES_NONE
#define SPECIES_SPEWPA_MARINE                           SPECIES_NONE
#define SPECIES_SPEWPA_ARCHIPELAGO                      SPECIES_NONE
#define SPECIES_SPEWPA_HIGH_PLAINS                      SPECIES_NONE
#define SPECIES_SPEWPA_SANDSTORM                        SPECIES_NONE
#define SPECIES_SPEWPA_RIVER                            SPECIES_NONE
#define SPECIES_SPEWPA_MONSOON                          SPECIES_NONE
#define SPECIES_SPEWPA_SAVANNA                          SPECIES_NONE
#define SPECIES_SPEWPA_SUN                              SPECIES_NONE
#define SPECIES_SPEWPA_OCEAN                            SPECIES_NONE
#define SPECIES_SPEWPA_JUNGLE                           SPECIES_NONE
#define SPECIES_SPEWPA_FANCY                            SPECIES_NONE
#define SPECIES_SPEWPA_POKEBALL                         SPECIES_NONE
#define SPECIES_RATICATE_ALOLA_TOTEM                    SPECIES_NONE
#define SPECIES_GUMSHOOS_TOTEM                          SPECIES_NONE
#define SPECIES_VIKAVOLT_TOTEM                          SPECIES_NONE
#define SPECIES_LURANTIS_TOTEM                          SPECIES_NONE
#define SPECIES_SALAZZLE_TOTEM                          SPECIES_NONE
#define SPECIES_MIMIKYU_TOTEM                           SPECIES_MIMIKYU_TOTEM_DISGUISED
#define SPECIES_MIMIKYU_TOTEM_DISGUISED                 SPECIES_NONE
#define SPECIES_KOMMO_O_TOTEM                           SPECIES_NONE
#define SPECIES_MAROWAK_ALOLA_TOTEM                     SPECIES_NONE
#define SPECIES_RIBOMBEE_TOTEM                          SPECIES_NONE
#define SPECIES_ARAQUANID_TOTEM                         SPECIES_NONE
#define SPECIES_TOGEDEMARU_TOTEM                        SPECIES_NONE
#define SPECIES_PIKACHU_STARTER                         SPECIES_NONE
#define SPECIES_EEVEE_STARTER                           SPECIES_NONE
#define SPECIES_VENUSAUR_GMAX                           SPECIES_NONE
#define SPECIES_BLASTOISE_GMAX                          SPECIES_NONE
#define SPECIES_CHARIZARD_GMAX                          SPECIES_NONE
#define SPECIES_BUTTERFREE_GMAX                         SPECIES_NONE
#define SPECIES_PIKACHU_GMAX                            SPECIES_NONE
#define SPECIES_MEOWTH_GMAX                             SPECIES_NONE
#define SPECIES_MACHAMP_GMAX                            SPECIES_NONE
#define SPECIES_GENGAR_GMAX                             SPECIES_NONE
#define SPECIES_KINGLER_GMAX                            SPECIES_NONE
#define SPECIES_LAPRAS_GMAX                             SPECIES_NONE
#define SPECIES_EEVEE_GMAX                              SPECIES_NONE
#define SPECIES_SNORLAX_GMAX                            SPECIES_NONE
#define SPECIES_GARBODOR_GMAX                           SPECIES_NONE
#define SPECIES_MELMETAL_GMAX                           SPECIES_NONE
#define SPECIES_RILLABOOM_GMAX                          SPECIES_NONE
#define SPECIES_CINDERACE_GMAX                          SPECIES_NONE
#define SPECIES_INTELEON_GMAX                           SPECIES_NONE
#define SPECIES_CORVIKNIGHT_GMAX                        SPECIES_NONE
#define SPECIES_ORBEETLE_GMAX                           SPECIES_NONE
#define SPECIES_DREDNAW_GMAX                            SPECIES_NONE
#define SPECIES_COALOSSAL_GMAX                          SPECIES_NONE
#define SPECIES_FLAPPLE_GMAX                            SPECIES_NONE
#define SPECIES_APPLETUN_GMAX                           SPECIES_NONE
#define SPECIES_SANDACONDA_GMAX                         SPECIES_NONE
#define SPECIES_TOXTRICITY_AMPED_GMAX                   SPECIES_NONE
#define SPECIES_TOXTRICITY_LOW_KEY_GMAX                 SPECIES_NONE
#define SPECIES_CENTISKORCH_GMAX                        SPECIES_NONE
#define SPECIES_HATTERENE_GMAX                          SPECIES_NONE
#define SPECIES_GRIMMSNARL_GMAX                         SPECIES_NONE
#define SPECIES_ALCREMIE_GMAX                           SPECIES_NONE
#define SPECIES_COPPERAJAH_GMAX                         SPECIES_NONE
#define SPECIES_DURALUDON_GMAX                          SPECIES_NONE
#define SPECIES_URSHIFU_SINGLE_STRIKE_GMAX              SPECIES_NONE
#define SPECIES_URSHIFU_GMAX                            SPECIES_URSHIFU_SINGLE_STRIKE_GMAX
#define SPECIES_URSHIFU_SINGLE_STRIKE_STYLE_GMAX        SPECIES_URSHIFU_SINGLE_STRIKE_GMAX
#define SPECIES_URSHIFU_RAPID_STRIKE_GMAX               SPECIES_NONE
#define SPECIES_URSHIFU_RAPID_STRIKE_STYLE_GMAX         SPECIES_URSHIFU_RAPID_STRIKE_GMAX
#define SPECIES_MIMIKYU_BUSTED_TOTEM                    SPECIES_NONE
#define SPECIES_MIMIKYU_TOTEM_BUSTED                    SPECIES_MIMIKYU_BUSTED_TOTEM

#define SPECIES_EGG                                     (SPECIES_MOTHIM_TRASH + 16)

#define NUM_SPECIES SPECIES_EGG

#define SPECIES_SHINY_TAG 5000

#endif  // GUARD_CONSTANTS_SPECIES_H
