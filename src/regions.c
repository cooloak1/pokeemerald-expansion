#include "global.h"
#include "regions.h"


static const u16 sKantoSubregionMapsecs[KANTO_SUBREGION_COUNT][30] = {
    [KANTO_SUBREGION_KANTO] =
    {
        MAPSEC_NONE
    },
    [KANTO_SUBREGION_SEVII123] =
    {
        MAPSEC_ONE_ISLAND,
        MAPSEC_TWO_ISLAND,
        MAPSEC_THREE_ISLAND,
        MAPSEC_NONE
    },
    [KANTO_SUBREGION_SEVII45] =
    {
        MAPSEC_FOUR_ISLAND,
        MAPSEC_FIVE_ISLAND,
        MAPSEC_NAVEL_ROCK_FRLG,
        MAPSEC_LOST_CAVE,
        MAPSEC_NONE
    },
    [KANTO_SUBREGION_SEVII67] =
    {
        MAPSEC_SEVEN_ISLAND,
        MAPSEC_SIX_ISLAND,
        MAPSEC_WATER_PATH,
        MAPSEC_TRAINER_TOWER_2,
        MAPSEC_BIRTH_ISLAND_FRLG,
        MAPSEC_NONE
    }
};

enum KantoSubRegion GetKantoSubregion(u32 mapSecId)
{
    for (u32 i = KANTO_SUBREGION_KANTO; i <= KANTO_SUBREGION_SEVII67; i++)
    {
        for (u32 j = 0; sKantoSubregionMapsecs[i][j] != MAPSEC_NONE; j++)
        {
            if (mapSecId == sKantoSubregionMapsecs[i][j])
                return i;
        }
    }
    return KANTO_SUBREGION_KANTO;
}
