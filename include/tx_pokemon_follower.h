#ifndef GUARD_TX_POKEMON_FOLLOWER
#define GUARD_TX_POKEMON_FOLLOWER

#include "constants/tx_pokemon_follower.h"

#define DEFAULT_FOLLOWER_LOCAL_ID 0xFE
#define MOVEMENT_INVALID 0xFE

enum FollowerSpriteTypes
{
    FOLLOWER_SPRITE_INDEX_NORMAL,
    FOLLOWER_SPRITE_INDEX_MACH_BIKE,
    FOLLOWER_SPRITE_INDEX_ACRO_BIKE,
    FOLLOWER_SPRITE_INDEX_SURF,
    FOLLOWER_SPRITE_INDEX_UNDERWATER,
};

// Exported Functions
void POF_DestroyFollower(void);
bool8 POF_FollowerComingThroughDoor(void);

u8 POF_GetFollowerObjectId(void);
const u8* POF_GetFollowerScriptPointer(void);
void POF_FollowerHide(void);
void POF_IsFollowerStoppingRockClimb(void);
void POF_FollowMe_SetIndicatorToComeOutDoor(void);
void POF_FollowMe_TryRemoveFollowerOnWhiteOut(void);
void POF_FollowMe(struct ObjectEvent* npc, u8 state, bool8 ignoreScriptActive);
void POF_FollowMe_Ledges(struct ObjectEvent* npc, struct Sprite* obj, u16* ledgeFramesTbl);
bool8 POF_FollowMe_IsCollisionExempt(struct ObjectEvent* obstacle, struct ObjectEvent* collider);
void POF_FollowMe_FollowerToWater(void);
void POF_StairsMoveFollower(void);
void POF_FollowMe_HandleBike(void);
void POF_FollowMe_HandleSprite(void);
void POF_FollowMe_WarpSetEnd(void);
void POF_CreateFollowerAvatar(void);
void POF_EscalatorMoveFollower(u8 movementType);
void POF_EscalatorMoveFollowerFinish(void);
bool8 POF_CheckFollowerFlag(u16 flag);
void POF_FollowerPositionFix(u8 offset);
void POF_SetFollowerSprite(u8 spriteIndex);
bool8 POF_PlayerHasFollower(void);
void POF_CreateMonFromPartySlotId(void);
void POF_FollowerUnhide(void);
u8 POF_GetFollowerSlotId(void);
void POF_SetFollowerSlotId(u8 slotId);
bool8 POF_IsFollowerSlotId(u8 slotId);
bool8 POF_IsFollowerAlive(void);
bool8 POF_IsFollowerAliveAndWell(void);
// moved from field_screen_effect.c
void POF_Task_DoDoorWarp(u8 taskId);
bool8 POF_IsPlayerOnFoot(void);
void POF_ForceToggleFollower(void);
bool8 CanMonFollow(u16 species);
u8 POF_ChoseAutomaticFollower(void);

static u8 POF_GetFollowerMapObjId(void);
struct ObjectEvent * GetFollowerObject(void);

void POF_ToggleFollower(void);
void POF_MoveFollowerToPlayer(void);
void POF_SetAutomaticFollow(void);

static const u16 gSpeciesLookUpTable[] = 
{
    [SPECIES_BERRYALEN] = 252,
    [SPECIES_VERYBERRY] = 253,
    [SPECIES_INCREDALEN] = 254,
    [SPECIES_COOKLET] = 255,
    [SPECIES_CHEFURE] = 256,
    [SPECIES_GOURMASTER] = 257,
    [SPECIES_BAITORD] = 258,
    [SPECIES_BAITERROR] = 259,
    [SPECIES_BAITANK] = 260,
    [SPECIES_DUPLICAT] = 261,
    [SPECIES_FURRLEAD] = 262,
    [SPECIES_MEOWRRIOR] = 263,
    [SPECIES_ZEPPUR] = 264,
    [SPECIES_ZEPURRINE] = 265,
    [SPECIES_NYANKITTY] = 266,
    [SPECIES_NYANTIGER] = 267,
    [SPECIES_MECHDUCK] = 268,
    [SPECIES_DUCKERTRON] = 269,
    [SPECIES_SCUBITE] = 270,
    [SPECIES_QUACKSHOT] = 271,
    [SPECIES_QUACKNATOR] = 272,
    [SPECIES_SOBBLEAF] = 273,
    [SPECIES_HEROKKU] = 274,
    [SPECIES_SHADEKU] = 275,
    [SPECIES_TAILLOW] = 276,
    [SPECIES_XAPP] = 277,
    [SPECIES_BATCARDI] = 278,
    [SPECIES_NOCTRUM] = 279,
    [SPECIES_NOTAFURRY] = 280,
    [SPECIES_SORTAFURRY] = 281,
    [SPECIES_THATSFURRY] = 282,
    [SPECIES_SURSKIT] = 283,
    [SPECIES_MASQUERAIN] = 284,
    [SPECIES_BLINKY] = 285,
    [SPECIES_DOUBLINKER] = 286,
    [SPECIES_DOOBOB] = 287,
    [SPECIES_DOODOOBOB] = 288,
    [SPECIES_UGADOOBA] = 289,
    [SPECIES_NINCADA] = 290,
    [SPECIES_NINJASK] = 291,
    [SPECIES_SHEDINJA] = 292,
    [SPECIES_COWERLIN] = 293,
    [SPECIES_BRAVOGOR] = 294,
    [SPECIES_GIGALPHA] = 295,
    [SPECIES_ANGBEAST] = 296,
    [SPECIES_GANGBEATS] = 297,
    [SPECIES_AZURILL] = 298,
    [SPECIES_NOSEPASS] = 299,
    [SPECIES_SKITTY] = 300,
    [SPECIES_NYANCAT] = 301,
    [SPECIES_SABLEYE] = 302,
    [SPECIES_MINITRON] = 303,
    [SPECIES_ARON] = 304,
    [SPECIES_GALVATRON] = 305,
    [SPECIES_MURPHIRE] = 306,
    [SPECIES_LONK] = 307,
    [SPECIES_LONKEST] = 308,
    [SPECIES_CORDRA] = 309,
    [SPECIES_AUXILISK] = 310,
    [SPECIES_PLUSLE] = 311,
    [SPECIES_MINUN] = 312,
    [SPECIES_VOLBEAT] = 313,
    [SPECIES_ILLUMISE] = 314,
    [SPECIES_ROSELIA] = 315,
    [SPECIES_SYMBITE] = 316,
    [SPECIES_CARNIGORE] = 317,
    [SPECIES_CARVANHA] = 318,
    [SPECIES_SHARPEDO] = 319,
    [SPECIES_WAILMER] = 320,
    [SPECIES_WAILORD] = 321,
    [SPECIES_VULPOINTER] = 322,
    [SPECIES_ERRORINE] = 323,
    [SPECIES_HELLAPHANT] = 324,
    [SPECIES_FIZZCUB] = 325,
    [SPECIES_SELTCLAW] = 326,
    [SPECIES_SPINDA] = 327,
    [SPECIES_TRAPINCH] = 328,
    [SPECIES_VIBRAVA] = 329,
    [SPECIES_FLYGON] = 330,
    [SPECIES_YOLKANNER] = 331,
    [SPECIES_ACONEGGS] = 332,
    [SPECIES_ARMYDRONE] = 333,
    [SPECIES_UNSC] = 334,
    [SPECIES_ZANGOOSE] = 335,
    [SPECIES_SEVIPER] = 336,
    [SPECIES_LUNATONE] = 337,
    [SPECIES_SOLROCK] = 338,
    [SPECIES_BARBOACH] = 339,
    [SPECIES_WHISCASH] = 340,
    [SPECIES_CORPHISH] = 341,
    [SPECIES_CRAWDAUNT] = 342,
    [SPECIES_BALTOY] = 343,
    [SPECIES_CLAYDOL] = 344,
    [SPECIES_LILEEP] = 345,
    [SPECIES_CRADILY] = 346,
    [SPECIES_ANORITH] = 347,
    [SPECIES_ARMALDO] = 348,
    [SPECIES_FEEBAS] = 349,
    [SPECIES_MILOTIC] = 350,
    [SPECIES_CASTFORM] = 351,
    [SPECIES_KECLEON] = 352,
    [SPECIES_SHUPPET] = 353,
    [SPECIES_BANETTE] = 354,
    [SPECIES_RATMAN] = 355,
    [SPECIES_HUGEMAN] = 356,
    [SPECIES_TROPIUS] = 357,
    [SPECIES_CHIMECHO] = 358,
    [SPECIES_ABSOL] = 359,
    [SPECIES_WYNAUT] = 360,
    [SPECIES_SNORUNT] = 361,
    [SPECIES_GLALIE] = 362,
    [SPECIES_SPHEAL] = 363,
    [SPECIES_SEALEO] = 364,
    [SPECIES_WALREIN] = 365,
    [SPECIES_CLAMPERL] = 366,
    [SPECIES_HUNTAIL] = 367,
    [SPECIES_GOREBYSS] = 368,
    [SPECIES_RELICANTH] = 369,
    [SPECIES_LUVDISC] = 370,
    [SPECIES_BAGON] = 371,
    [SPECIES_SHELGON] = 372,
    [SPECIES_SALAMENCE] = 373,
    [SPECIES_BELDUM] = 374,
    [SPECIES_METANG] = 375,
    [SPECIES_METAGROSS] = 376,
    [SPECIES_REGIROCK] = 377,
    [SPECIES_REGICE] = 378,
    [SPECIES_REGISTEEL] = 379,
    [SPECIES_LATIAS] = 380,
    [SPECIES_LATIOS] = 381,
    [SPECIES_KYOGRE] = 382,
    [SPECIES_GROUDON] = 383,
    [SPECIES_RAYQUAZA] = 384,
    [SPECIES_JIRACHI] = 385,
    [SPECIES_DEOXYS] = 386,
};

#endif
