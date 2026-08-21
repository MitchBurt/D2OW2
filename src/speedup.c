// speedup.c
#include "global.h"
#include "main.h"
#include "battle.h"
#include "speedup.h"

#define SPEEDUP_BUTTON R_BUTTON
#define SPEEDUP_SCALE  4   // how many extra passes per frame while held

bool8 Speedup_IsHeld(void)
{
    return (gMain.heldKeys & SPEEDUP_BUTTON) != 0;
}

u8 Speedup_GetBattleSpeedScale(bool8 forHealthbar)
{
    if (!Speedup_IsHeld())
        return 1;

    return SPEEDUP_SCALE;
}

s16 Speedup_ModifyBattleSlideAnim(s16 rate)
{
    if (Speedup_IsHeld())
        return (rate < 0) ? (rate * 2 - 1) : (rate * 2 + 1);

    return rate;
}