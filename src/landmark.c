#include "global.h"
#include "event_data.h"
#include "constants/region_map_sections.h"

struct Landmark
{
    const u8 *name;
    u16 flag;
};

struct LandmarkList
{
    mapsec_u8_t mapSection;
    u8 id;
    const struct Landmark *const *landmarks;
};

static const u8 LandmarkName_MagmaHideout[] = _("MAGMA HIDEOUT"); //Unused

static const struct Landmark Landmark_FlowerShop = {COMPOUND_STRING("FLOWER SHOP"), FLAG_LANDMARK_FLOWER_SHOP};
static const struct Landmark Landmark_PetalburgWoods = {COMPOUND_STRING("PETALBURG WOODS"), -1};
static const struct Landmark Landmark_MrBrineysCottage = {COMPOUND_STRING("MR. BRINEY'S COTTAGE"), FLAG_LANDMARK_MR_BRINEY_HOUSE};
static const struct Landmark Landmark_AbandonedShip = {COMPOUND_STRING("ABANDONED SHIP"), FLAG_LANDMARK_ABANDONED_SHIP};
static const struct Landmark Landmark_SeashoreHouse = {COMPOUND_STRING("SEASHORE HOUSE"), FLAG_LANDMARK_SEASHORE_HOUSE};
static const struct Landmark Landmark_SlateportBeach = {COMPOUND_STRING("SLATEPORT BEACH"), -1};
static const struct Landmark Landmark_CyclingRoad = {COMPOUND_STRING("CYCLING ROAD"), -1};
static const struct Landmark Landmark_NewMauville = {COMPOUND_STRING("NEW MAUVILLE"), FLAG_LANDMARK_NEW_MAUVILLE};
static const struct Landmark Landmark_TrickHouse = {COMPOUND_STRING("TRICK HOUSE"), FLAG_LANDMARK_TRICK_HOUSE};
static const struct Landmark Landmark_OldLadysRestShop = {COMPOUND_STRING("OLD LADY'S REST STOP"), FLAG_LANDMARK_OLD_LADY_REST_SHOP};
static const struct Landmark Landmark_Desert = {COMPOUND_STRING("DESERT"), -1};
static const struct Landmark Landmark_WinstrateFamily = {COMPOUND_STRING("THE WINSTRATE FAMILY"), FLAG_LANDMARK_WINSTRATE_FAMILY};
static const struct Landmark Landmark_CableCar = {COMPOUND_STRING("CABLE CAR"), -1};
static const struct Landmark Landmark_GlassWorkshop = {COMPOUND_STRING("GLASS WORKSHOP"), FLAG_LANDMARK_GLASS_WORKSHOP};
static const struct Landmark Landmark_WeatherInstitute = {COMPOUND_STRING("WEATHER INSTITUTE"), -1};
static const struct Landmark Landmark_MeteorFalls = {COMPOUND_STRING("METEOR FALLS"), -1};
static const struct Landmark Landmark_TunnelersRestHouse = {COMPOUND_STRING("TUNNELER'S RESTHOUSE"), FLAG_LANDMARK_TUNNELERS_REST_HOUSE};
static const struct Landmark Landmark_RusturfTunnel = {COMPOUND_STRING("RUSTURF TUNNEL"), -1};
static const struct Landmark Landmark_PokemonDayCare = {COMPOUND_STRING("POKéMON DAY CARE"), FLAG_LANDMARK_POKEMON_DAYCARE};
static const struct Landmark Landmark_SafariZoneEntrance = {COMPOUND_STRING("SAFARI ZONE ENTRANCE"), -1};
static const struct Landmark Landmark_MtPyre = {COMPOUND_STRING("MT. PYRE"), -1};
static const struct Landmark Landmark_ShoalCave = {COMPOUND_STRING("SHOAL CAVE"), -1};
static const struct Landmark Landmark_SeafloorCavern = {COMPOUND_STRING("SEAFLOOR CAVERN"), FLAG_LANDMARK_SEAFLOOR_CAVERN};
static const struct Landmark Landmark_GraniteCave = {COMPOUND_STRING("GRANITE CAVE"), -1};
static const struct Landmark Landmark_OceanCurrent = {COMPOUND_STRING("OCEAN CURRENT"), -1};
static const struct Landmark Landmark_LanettesHouse = {COMPOUND_STRING("LANETTE'S HOUSE"), FLAG_LANDMARK_LANETTES_HOUSE};
static const struct Landmark Landmark_FieryPath = {COMPOUND_STRING("FIERY PATH"), FLAG_LANDMARK_FIERY_PATH};
static const struct Landmark Landmark_JaggedPass = {COMPOUND_STRING("JAGGED PASS"), -1};
static const struct Landmark Landmark_BerryMastersHouse = {COMPOUND_STRING("BERRY MASTER'S HOUSE"), FLAG_LANDMARK_BERRY_MASTERS_HOUSE};
static const struct Landmark Landmark_IslandCave = {COMPOUND_STRING("ISLAND CAVE"), FLAG_LANDMARK_ISLAND_CAVE};
static const struct Landmark Landmark_DesertRuins = {COMPOUND_STRING("DESERT RUINS"), FLAG_LANDMARK_DESERT_RUINS};
static const struct Landmark Landmark_ScorchedSlab = {COMPOUND_STRING("SCORCHED SLAB"), FLAG_LANDMARK_SCORCHED_SLAB};
static const struct Landmark Landmark_AncientTomb = {COMPOUND_STRING("ANCIENT TOMB"), FLAG_LANDMARK_ANCIENT_TOMB};
static const struct Landmark Landmark_SealedChamber = {COMPOUND_STRING("SEALED CHAMBER"), FLAG_LANDMARK_SEALED_CHAMBER};
static const struct Landmark Landmark_FossilManiacsHouse = {COMPOUND_STRING("FOSSIL MANIAC'S HOUSE"), FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE};
static const struct Landmark Landmark_HuntersHouse = {COMPOUND_STRING("HUNTER'S HOUSE"), FLAG_LANDMARK_HUNTERS_HOUSE};
static const struct Landmark Landmark_SkyPillar = {COMPOUND_STRING("SKY PILLAR"), FLAG_LANDMARK_SKY_PILLAR};
static const struct Landmark Landmark_MirageTower = {COMPOUND_STRING("MIRAGE TOWER"), FLAG_LANDMARK_MIRAGE_TOWER};
static const struct Landmark Landmark_AlteringCave = {COMPOUND_STRING("ALTERING CAVE"), FLAG_LANDMARK_ALTERING_CAVE};
static const struct Landmark Landmark_DesertUnderpass = {COMPOUND_STRING("DESERT UNDERPASS"), FLAG_LANDMARK_DESERT_UNDERPASS};
static const struct Landmark Landmark_TrainerHill = {COMPOUND_STRING("TRAINER HILL"), FLAG_LANDMARK_TRAINER_HILL};

static const struct Landmark *const Landmarks_Route103_2[]  =
{
    &Landmark_AlteringCave,
    &Landmark_FlowerShop,
    &Landmark_PetalburgWoods,
    &Landmark_MrBrineysCottage,
    &Landmark_IslandCave,
    &Landmark_GraniteCave,
    &Landmark_AbandonedShip,
    &Landmark_SeashoreHouse,
    &Landmark_SlateportBeach,
    &Landmark_CyclingRoad,
    &Landmark_NewMauville,
    &Landmark_TrickHouse,
    &Landmark_OldLadysRestShop,
    &Landmark_MirageTower,
    &Landmark_Desert,
    &Landmark_DesertRuins,
    &Landmark_TrainerHill,
    &Landmark_WinstrateFamily,
    &Landmark_FieryPath,
    &Landmark_JaggedPass,
    &Landmark_CableCar,
    &Landmark_GlassWorkshop,
    &Landmark_DesertUnderpass,
    &Landmark_FossilManiacsHouse,
    &Landmark_LanettesHouse,
    &Landmark_MeteorFalls,
    &Landmark_TunnelersRestHouse,
    &Landmark_RusturfTunnel,
    &Landmark_PokemonDayCare,
    &Landmark_WeatherInstitute,
    &Landmark_ScorchedSlab,
    &Landmark_AncientTomb,
    &Landmark_SafariZoneEntrance,
    &Landmark_MtPyre,
    &Landmark_BerryMastersHouse,
    &Landmark_HuntersHouse,
    &Landmark_ShoalCave,
    &Landmark_SeafloorCavern,
    &Landmark_SkyPillar,
    &Landmark_OceanCurrent,
    &Landmark_SealedChamber,
    
    NULL,
};




static const struct LandmarkList sLandmarkLists[] =
{
    {MAPSEC_HOENN, 2, Landmarks_Route103_2},
    {MAPSEC_NONE, 0, NULL},
};

static const struct Landmark *const *GetLandmarks(mapsec_u8_t mapSection, u8 id);

const u8 *GetLandmarkName(mapsec_u8_t mapSection, u8 id, u8 count)
{
    const struct Landmark *const *landmarks = GetLandmarks(mapSection, id);

    if (!landmarks)
        return NULL;

    while (1)
    {
        const struct Landmark *landmark = *landmarks;

        if (landmark->flag == 0xFFFF || FlagGet(landmark->flag) == TRUE)
        {
            if (count == 0)
                break;
            else
                count--;
        }

        landmarks++;
        if (!*landmarks)
            return NULL;
    }

    return (*landmarks)->name;
}

static const struct Landmark *const *GetLandmarks(mapsec_u8_t mapSection, u8 id)
{
    u16 i = 0;

    for (; sLandmarkLists[i].mapSection != MAPSEC_NONE; i++)
    {
        if (sLandmarkLists[i].mapSection > mapSection)
            return NULL;
        if (sLandmarkLists[i].mapSection == mapSection)
            break;
    }

    if (sLandmarkLists[i].mapSection == MAPSEC_NONE)
        return NULL;

    for (; sLandmarkLists[i].mapSection == mapSection; i++)
    {
        if (sLandmarkLists[i].id == id)
            return sLandmarkLists[i].landmarks;
    }

    return NULL;
}
