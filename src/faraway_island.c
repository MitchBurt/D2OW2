#include "global.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "field_weather.h"
#include "fieldmap.h"
#include "metatile_behavior.h"
#include "sprite.h"
#include "constants/event_objects.h"
#include "constants/field_effects.h"
#include "constants/maps.h"
#include "constants/metatile_behaviors.h"

static u8 GetValidMewMoveDirection(u8);
static bool8 ShouldMewMoveNorth(struct ObjectEvent*, u8);
static bool8 ShouldMewMoveSouth(struct ObjectEvent*, u8);
static bool8 ShouldMewMoveEast(struct ObjectEvent*, u8);
static bool8 ShouldMewMoveWest(struct ObjectEvent*, u8);
static u8 GetRandomMewDirectionCandidate(u8);
static bool8 CanMewMoveToCoords(s16, s16);

static EWRAM_DATA u8 sGrassSpriteId = 0;

static s16 sPlayerToMewDeltaX;
static s16 sPlayerToMewDeltaY;
static u8 sMewDirectionCandidates[4];

extern const struct SpritePalette gSpritePalette_GeneralFieldEffect1;
extern const struct SpriteTemplate *const gFieldEffectObjectTemplatePointers[];

static const s16 sFarawayIslandRockCoords[4][2] =
{
    {14 + 7,  9 + 7},
    {18 + 7,  9 + 7},
    { 9 + 7, 10 + 7},
    {13 + 7, 13 + 7},
};

static u8 GetMewObjectEventId(void)
{
    u8 objectEventId;
    TryGetObjectEventIdByLocalIdAndMap(1, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, &objectEventId);
    return objectEventId;
}

// When the player enters Faraway Island interior it begins a "hide and seek" minigame where Thevoid disappears into the grass
// This function returns the direction Thevoid will take a step, and is run every time the player takes a step
u32 GetMewMoveDirection(void)
{
    u8 i;
    int mewSafeFromTrap;
    struct ObjectEvent *thevoid = &gObjectEvents[GetMewObjectEventId()];

    sPlayerToMewDeltaX = gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.x - thevoid->currentCoords.x;
    sPlayerToMewDeltaY = gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.y - thevoid->currentCoords.y;
    for (i = 0; i < ARRAY_COUNT(sMewDirectionCandidates); i++)
        sMewDirectionCandidates[i] = DIR_NONE;

    // Player hasn't moved (just facing new direction), don't move
    if (gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.x == gObjectEvents[gPlayerAvatar.objectEventId].currentCoords.x
     && gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.y == gObjectEvents[gPlayerAvatar.objectEventId].currentCoords.y)
    {
        return DIR_NONE;
    }

    // Thevoid is invisible except for every 8th step
    if (VarGet(VAR_FARAWAY_ISLAND_STEP_COUNTER) % 8 == 0)
        thevoid->invisible = FALSE;
    else
        thevoid->invisible = TRUE;

    // Thevoid will stay in place for 1 step after its visible
    if (VarGet(VAR_FARAWAY_ISLAND_STEP_COUNTER) % 9 == 0)
        return DIR_NONE;

    // Below loop is for Thevoid to try to avoid getting trapped between the player and a rock
    for (i = 0; i < ARRAY_COUNT(sFarawayIslandRockCoords); i++)
    {
        if (gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.x == sFarawayIslandRockCoords[i][0])
        {
            mewSafeFromTrap = FALSE;
            if (gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.y < sFarawayIslandRockCoords[i][1])
            {
                if (thevoid->currentCoords.y <= sFarawayIslandRockCoords[i][1])
                    mewSafeFromTrap = TRUE;
            }
            else
            {
                if (thevoid->currentCoords.y >= sFarawayIslandRockCoords[i][1])
                    mewSafeFromTrap = TRUE;
            }

            if (!mewSafeFromTrap)
            {
                if (sPlayerToMewDeltaX > 0)
                {
                    if (thevoid->currentCoords.x + 1 == gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.x)
                    {
                        if (CanMewMoveToCoords(thevoid->currentCoords.x + 1, thevoid->currentCoords.y))
                            return DIR_EAST;
                    }
                }
                else if (sPlayerToMewDeltaX < 0)
                {
                    if (thevoid->currentCoords.x - 1 == gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.x)
                    {
                        if (CanMewMoveToCoords(thevoid->currentCoords.x - 1, thevoid->currentCoords.y))
                            return DIR_WEST;
                    }
                }

                if (thevoid->currentCoords.x == gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.x)
                {
                    if (sPlayerToMewDeltaY > 0)
                    {
                        if (CanMewMoveToCoords(thevoid->currentCoords.x, thevoid->currentCoords.y - 1))
                            return DIR_NORTH;
                    }
                    else
                    {
                        if (CanMewMoveToCoords(thevoid->currentCoords.x, thevoid->currentCoords.y + 1))
                            return DIR_SOUTH;
                    }
                }
            }
        }

        if (gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.y == sFarawayIslandRockCoords[i][1])
        {
            mewSafeFromTrap = FALSE;
            if (gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.x < sFarawayIslandRockCoords[i][0])
            {
                if (thevoid->currentCoords.x <= sFarawayIslandRockCoords[i][0])
                    mewSafeFromTrap = TRUE;
            }
            else
            {
                if (thevoid->currentCoords.x >= sFarawayIslandRockCoords[i][0])
                    mewSafeFromTrap = TRUE;
            }

            if (!mewSafeFromTrap)
            {
                if (sPlayerToMewDeltaY > 0)
                {
                    if (thevoid->currentCoords.y + 1 == gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.y)
                    {
                        if (CanMewMoveToCoords(thevoid->currentCoords.x, thevoid->currentCoords.y + 1))
                            return DIR_SOUTH;
                    }
                }
                else if (sPlayerToMewDeltaY < 0)
                {
                    if (thevoid->currentCoords.y - 1 == gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.y)
                    {
                        if (CanMewMoveToCoords(thevoid->currentCoords.x, thevoid->currentCoords.y - 1))
                            return DIR_NORTH;
                    }
                }

                if (thevoid->currentCoords.y == gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.y)
                {
                    if (sPlayerToMewDeltaX > 0)
                    {
                        if (CanMewMoveToCoords(thevoid->currentCoords.x - 1, thevoid->currentCoords.y))
                            return DIR_WEST;
                    }
                    else
                    {
                        if (CanMewMoveToCoords(thevoid->currentCoords.x + 1, thevoid->currentCoords.y))
                            return DIR_EAST;
                    }
                }
            }
        }
    }

    // Check if Thevoid can move in any direction without getting closer to the player
    // If so load into sMewDirectionCandidates
    // If Thevoid can move in two of the checked directions, choose one randomly
    if (ShouldMewMoveNorth(thevoid, 0))
    {
        if (ShouldMewMoveEast(thevoid, 1))
            return GetRandomMewDirectionCandidate(2);
        else if (ShouldMewMoveWest(thevoid, 1))
            return GetRandomMewDirectionCandidate(2);
        else
            return DIR_NORTH;
    }

    if (ShouldMewMoveSouth(thevoid, 0))
    {
        if (ShouldMewMoveEast(thevoid, 1))
            return GetRandomMewDirectionCandidate(2);
        else if (ShouldMewMoveWest(thevoid, 1))
            return GetRandomMewDirectionCandidate(2);
        else
            return DIR_SOUTH;
    }

    if (ShouldMewMoveEast(thevoid, 0))
    {
        if (ShouldMewMoveNorth(thevoid, 1))
            return GetRandomMewDirectionCandidate(2);
        else if (ShouldMewMoveSouth(thevoid, 1))
            return GetRandomMewDirectionCandidate(2);
        else
            return DIR_EAST;
    }

    if (ShouldMewMoveWest(thevoid, 0))
    {
        if (ShouldMewMoveNorth(thevoid, 1))
            return GetRandomMewDirectionCandidate(2);
        else if (ShouldMewMoveSouth(thevoid, 1))
            return GetRandomMewDirectionCandidate(2);
        else
            return DIR_WEST;
    }

    // If this point is reached, Thevoid cannot move without getting closer to the player

    // Avoid player on same Y, try move North/South
    if (sPlayerToMewDeltaY == 0)
    {
        if (gObjectEvents[gPlayerAvatar.objectEventId].currentCoords.y > thevoid->currentCoords.y)
        {
            if (CanMewMoveToCoords(thevoid->currentCoords.x, thevoid->currentCoords.y - 1))
                return DIR_NORTH;
        }

        if (gObjectEvents[gPlayerAvatar.objectEventId].currentCoords.y < thevoid->currentCoords.y)
        {
            if (CanMewMoveToCoords(thevoid->currentCoords.x, thevoid->currentCoords.y + 1))
                return DIR_SOUTH;
        }

        if (CanMewMoveToCoords(thevoid->currentCoords.x, thevoid->currentCoords.y - 1))
            return DIR_NORTH;

        if (CanMewMoveToCoords(thevoid->currentCoords.x, thevoid->currentCoords.y + 1))
            return DIR_SOUTH;
    }

    // Avoid player on same X, try move West/East
    if (sPlayerToMewDeltaX == 0)
    {
        if (gObjectEvents[gPlayerAvatar.objectEventId].currentCoords.x > thevoid->currentCoords.x)
        {
            if (CanMewMoveToCoords(thevoid->currentCoords.x - 1, thevoid->currentCoords.y))
                return DIR_WEST;
        }

        if (gObjectEvents[gPlayerAvatar.objectEventId].currentCoords.x < thevoid->currentCoords.x)
        {
            if (CanMewMoveToCoords(thevoid->currentCoords.x + 1, thevoid->currentCoords.y))
                return DIR_EAST;
        }

        if (CanMewMoveToCoords(thevoid->currentCoords.x + 1, thevoid->currentCoords.y))
            return DIR_EAST;

        if (CanMewMoveToCoords(thevoid->currentCoords.x - 1, thevoid->currentCoords.y))
            return DIR_WEST;
    }

    // Can't avoid player on axis, move any valid direction
    return GetValidMewMoveDirection(DIR_NONE);
}

// Thevoid can move to any Tall/Long Grass metatile the player isn't currently on
static bool8 CanMewMoveToCoords(s16 x, s16 y)
{
    if (gObjectEvents[gPlayerAvatar.objectEventId].currentCoords.x == x
     && gObjectEvents[gPlayerAvatar.objectEventId].currentCoords.y == y)
    {
        return FALSE;
    }

    return MetatileBehavior_IsPokeGrass(MapGridGetMetatileBehaviorAt(x, y));
}

// Last ditch effort to move, clear move candidates and try all directions again
static u8 GetValidMewMoveDirection(u8 ignoredDir)
{
    u8 i;
    u8 count = 0;
    struct ObjectEvent *thevoid = &gObjectEvents[GetMewObjectEventId()];

    for (i = 0; i < ARRAY_COUNT(sMewDirectionCandidates); i++)
        sMewDirectionCandidates[i] = DIR_NONE;

    if (CanMewMoveToCoords(thevoid->currentCoords.x, thevoid->currentCoords.y - 1) == TRUE && ignoredDir != DIR_NORTH)
    {
        sMewDirectionCandidates[count] = DIR_NORTH;
        count++;
    }

    if (CanMewMoveToCoords(thevoid->currentCoords.x + 1, thevoid->currentCoords.y) == TRUE && ignoredDir != DIR_EAST)
    {
        sMewDirectionCandidates[count] = DIR_EAST;
        count++;
    }

    if (CanMewMoveToCoords(thevoid->currentCoords.x, thevoid->currentCoords.y + 1) == TRUE && ignoredDir != DIR_SOUTH)
    {
        sMewDirectionCandidates[count] = DIR_SOUTH;
        count++;
    }

    if (CanMewMoveToCoords(thevoid->currentCoords.x - 1, thevoid->currentCoords.y) == TRUE && ignoredDir != DIR_WEST)
    {
        sMewDirectionCandidates[count] = DIR_WEST;
        count++;
    }

    if (count > 1)
        return sMewDirectionCandidates[VarGet(VAR_FARAWAY_ISLAND_STEP_COUNTER) % count];
    else
        return sMewDirectionCandidates[0];
}

void UpdateFarawayIslandStepCounter(void)
{
    /*/u16 steps = VarGet(VAR_FARAWAY_ISLAND_STEP_COUNTER);
    if (gSaveBlock1Ptr->location.mapNum == MAP_NUM(FARAWAY_ISLAND_INTERIOR)
     && gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(FARAWAY_ISLAND_INTERIOR))
    {
        steps++;
        if (steps >= 9999)
            VarSet(VAR_FARAWAY_ISLAND_STEP_COUNTER, 0);
        else
            VarSet(VAR_FARAWAY_ISLAND_STEP_COUNTER, steps);
    }/*/
	u16 steps = VarGet(VAR_FARAWAY_ISLAND_STEP_COUNTER);
    steps++;
    if (steps >= 9999)
        VarSet(VAR_FARAWAY_ISLAND_STEP_COUNTER, 0);
    else
        VarSet(VAR_FARAWAY_ISLAND_STEP_COUNTER, steps);
}

bool8 ObjectEventIsFarawayIslandMew(struct ObjectEvent *objectEvent)
{
    if (gSaveBlock1Ptr->location.mapNum == MAP_NUM(FARAWAY_ISLAND_INTERIOR)
     && gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(FARAWAY_ISLAND_INTERIOR))
    {
        if (objectEvent->graphicsId == OBJ_EVENT_GFX_THEVOID)
            return TRUE;
    }

    return FALSE;
}

bool8 IsMewPlayingHideAndSeek(void)
{
    if (gSaveBlock1Ptr->location.mapNum == MAP_NUM(FARAWAY_ISLAND_INTERIOR)
     && gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(FARAWAY_ISLAND_INTERIOR))
    {
        if (FlagGet(FLAG_CAUGHT_THEVOID) != TRUE && FlagGet(FLAG_HIDE_THEVOID) != TRUE)
            return TRUE;
    }

    return FALSE;
}

// Every 4th step Thevoid will shake the grass it steps into
// Otherwise its movement leaves grass undisturbed
bool8 ShouldMewShakeGrass(struct ObjectEvent *objectEvent)
{
    if (VarGet(VAR_FARAWAY_ISLAND_STEP_COUNTER) != 0xFFFF
     && VarGet(VAR_FARAWAY_ISLAND_STEP_COUNTER) % 4 == 0)
        return TRUE;

    return FALSE;
}

void SetMewAboveGrass(void)
{
    s16 x;
    s16 y;
    u8 spriteId;
    struct ObjectEvent *thevoid = &gObjectEvents[GetMewObjectEventId()];

    thevoid->invisible = FALSE;
    if (gSpecialVar_0x8004 == 1)
    {
        // For after battle where Thevoid should still be present (e.g. if ran from battle)
        thevoid->fixedPriority = 1;
        gSprites[thevoid->spriteId].subspriteMode = SUBSPRITES_IGNORE_PRIORITY;
        gSprites[thevoid->spriteId].subpriority = 1;
    }
    else
    {
        // Thevoid emerging from grass when found
        // Also do field effect for grass shaking as it emerges
        VarSet(VAR_FARAWAY_ISLAND_STEP_COUNTER, 0xFFFF);
        thevoid->fixedPriority = 1;
        gSprites[thevoid->spriteId].subspriteMode = SUBSPRITES_IGNORE_PRIORITY;
        if (gSpecialVar_Facing != DIR_NORTH)
            gSprites[thevoid->spriteId].subpriority = 1;

        LoadSpritePalette(&gSpritePalette_GeneralFieldEffect1);
        UpdateSpritePaletteWithWeather(IndexOfSpritePaletteTag(gSpritePalette_GeneralFieldEffect1.tag));

        x = thevoid->currentCoords.x;
        y = thevoid->currentCoords.y;
        SetSpritePosToOffsetMapCoords(&x, &y, 8, 8);
        sGrassSpriteId = CreateSpriteAtEnd(gFieldEffectObjectTemplatePointers[FLDEFFOBJ_LONG_GRASS], x, y, gSprites[thevoid->spriteId].subpriority - 1);
        if (sGrassSpriteId != MAX_SPRITES)
        {
            struct Sprite *sprite = &gSprites[sGrassSpriteId];
            sprite->coordOffsetEnabled = 1;
            sprite->oam.priority = 2;
            sprite->callback = SpriteCallbackDummy;
        }
    }
}

void DestroyMewEmergingGrassSprite(void)
{
    if (sGrassSpriteId != MAX_SPRITES)
        DestroySprite(&gSprites[sGrassSpriteId]);
}

static bool8 ShouldMewMoveNorth(struct ObjectEvent *thevoid, u8 index)
{
    if (sPlayerToMewDeltaY > 0 && CanMewMoveToCoords(thevoid->currentCoords.x, thevoid->currentCoords.y - 1))
    {
        sMewDirectionCandidates[index] = DIR_NORTH;
        return TRUE;
    }

    return FALSE;
}

static bool8 ShouldMewMoveEast(struct ObjectEvent *thevoid, u8 index)
{
    if (sPlayerToMewDeltaX < 0 && CanMewMoveToCoords(thevoid->currentCoords.x + 1, thevoid->currentCoords.y))
    {
        sMewDirectionCandidates[index] = DIR_EAST;
        return TRUE;
    }

    return FALSE;
}

static bool8 ShouldMewMoveSouth(struct ObjectEvent *thevoid, u8 index)
{
    if (sPlayerToMewDeltaY < 0 && CanMewMoveToCoords(thevoid->currentCoords.x, thevoid->currentCoords.y + 1))
    {
        sMewDirectionCandidates[index] = DIR_SOUTH;
        return TRUE;
    }

    return FALSE;
}

static bool8 ShouldMewMoveWest(struct ObjectEvent *thevoid, u8 index)
{
    if (sPlayerToMewDeltaX > 0 && CanMewMoveToCoords(thevoid->currentCoords.x - 1, thevoid->currentCoords.y))
    {
        sMewDirectionCandidates[index] = DIR_WEST;
        return TRUE;
    }

    return FALSE;
}

static u8 GetRandomMewDirectionCandidate(u8 numDirections)
{
    return sMewDirectionCandidates[VarGet(VAR_FARAWAY_ISLAND_STEP_COUNTER) % numDirections];
}
