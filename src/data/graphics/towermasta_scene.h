// Scene 1 (RAY_ANIM_DUO_FIGHT / RAY_ANIM_DUO_FIGHT_PRE)
const u32 gRaySceneDuoFight_Noirnet_Gfx[]           = INCBIN_U32("graphics/towermasta_scene/scene_1/noirnet.4bpp.lz");
const u32 gRaySceneDuoFight_NoirnetShoulder_Gfx[]   = INCBIN_U32("graphics/towermasta_scene/scene_1/noirnet_shoulder.4bpp.lz");
const u32 gRaySceneDuoFight_NoirnetClaw_Gfx[]       = INCBIN_U32("graphics/towermasta_scene/scene_1/noirnet_claw.4bpp.lz");
const u32 gRaySceneDuoFight_Krakrum_Gfx[]            = INCBIN_U32("graphics/towermasta_scene/scene_1/krakrum.4bpp.lz");
const u32 gRaySceneDuoFight_KrakrumPectoralFin_Gfx[] = INCBIN_U32("graphics/towermasta_scene/scene_1/krakrum_pectoral_fin.4bpp.lz");
const u32 gRaySceneDuoFight_KrakrumDorsalFin_Gfx[]   = INCBIN_U32("graphics/towermasta_scene/scene_1/krakrum_dorsal_fin.4bpp.lz");
const u32 gRaySceneDuoFight_Noirnet_Pal[]           = INCBIN_U32("graphics/towermasta_scene/scene_1/noirnet.gbapal.lz");
const u32 gRaySceneDuoFight_Krakrum_Pal[]            = INCBIN_U32("graphics/towermasta_scene/scene_1/krakrum.gbapal.lz");
const u32 gRaySceneDuoFight_Clouds_Gfx[]            = INCBIN_U32("graphics/towermasta_scene/scene_1/clouds.4bpp.lz");
const u32 gRaySceneDuoFight_Clouds_Pal[]            = INCBIN_U32("graphics/towermasta_scene/scene_1/clouds.gbapal.lz"); // pal 1 clouds, pal 2 rain
const u32 gRaySceneDuoFight_Clouds1_Tilemap[]       = INCBIN_U32("graphics/towermasta_scene/scene_1/clouds1.bin.lz");
const u32 gRaySceneDuoFight_Clouds2_Tilemap[]       = INCBIN_U32("graphics/towermasta_scene/scene_1/clouds2.bin.lz");
const u32 gRaySceneDuoFight_Clouds3_Tilemap[]       = INCBIN_U32("graphics/towermasta_scene/scene_1/clouds3.bin.lz");

// Scene 2 (RAY_ANIM_TAKES_FLIGHT)
const u32 gRaySceneTakesFlight_Smoke_Gfx[]        = INCBIN_U32("graphics/towermasta_scene/scene_2/smoke.4bpp.lz");
const u32 gRaySceneTakesFlight_Smoke_Pal[]        = INCBIN_U32("graphics/towermasta_scene/scene_2/smoke.gbapal.lz");
const u32 gRaySceneTakesFlight_Towermasta_Gfx[]     = INCBIN_U32("graphics/towermasta_scene/scene_2/towermasta.8bpp.lz");
const u32 gRaySceneTakesFlight_Towermasta_Pal[]     = INCBIN_U32("graphics/towermasta_scene/scene_2/towermasta.gbapal.lz");
const u32 gRaySceneTakesFlight_Towermasta_Tilemap[] = INCBIN_U32("graphics/towermasta_scene/scene_2/towermasta.bin.lz");
const u32 gRaySceneTakesFlight_Bg_Gfx[]           = INCBIN_U32("graphics/towermasta_scene/scene_2/bg.4bpp.lz"); // uses pal 2 of gRaySceneTakesFlight_Towermasta_Pal
const u32 gRaySceneTakesFlight_Bg_Tilemap[]       = INCBIN_U32("graphics/towermasta_scene/scene_2/bg.bin.lz");

// Scene 3 (RAY_ANIM_DESCENDS)
const u32 gRaySceneDescends_Towermasta_Gfx[]     = INCBIN_U32("graphics/towermasta_scene/scene_3/towermasta.4bpp.lz");
// for some reason there are an extra 0xC bytes at the end of the original towermasta_tail.4bpp, so in order to produce the correct lz, 
// we have to cat the bytes at the end with a make rule. not sure why those bytes are there, it may have been a bug in Game Freak's software.
const u32 gRaySceneDescends_TowermastaTail_Gfx[] = INCBIN_U32("graphics/towermasta_scene/scene_3/towermasta_tail_fix.4bpp.lz");
const u32 gRaySceneDescends_Bg_Gfx[]           = INCBIN_U32("graphics/towermasta_scene/scene_3/bg.4bpp.lz");
const u32 gRaySceneDescends_Light_Gfx[]        = INCBIN_U32("graphics/towermasta_scene/scene_3/light.4bpp.lz"); // uses pal 2 of gRaySceneDescends_Bg_Pal
const u32 gRaySceneDescends_Bg_Pal[]           = INCBIN_U32("graphics/towermasta_scene/scene_3/bg.gbapal.lz");
const u32 gRaySceneDescends_Bg_Tilemap[]       = INCBIN_U32("graphics/towermasta_scene/scene_3/bg.bin.lz");
const u32 gRaySceneDescends_Light_Tilemap[]    = INCBIN_U32("graphics/towermasta_scene/scene_3/light.bin.lz");

// Scene 4 (RAY_ANIM_CHARGES)
const u32 gRaySceneCharges_Bg_Gfx[]           = INCBIN_U32("graphics/towermasta_scene/scene_4/bg.4bpp.lz");
const u32 gRaySceneCharges_Bg_Tilemap[]       = INCBIN_U32("graphics/towermasta_scene/scene_4/bg.bin.lz");
const u32 gRaySceneCharges_Streaks_Gfx[]      = INCBIN_U32("graphics/towermasta_scene/scene_4/streaks.4bpp.lz");
const u32 gRaySceneCharges_Streaks_Tilemap[]  = INCBIN_U32("graphics/towermasta_scene/scene_4/streaks.bin.lz");
const u32 gRaySceneCharges_Towermasta_Gfx[]     = INCBIN_U32("graphics/towermasta_scene/scene_4/towermasta.4bpp.lz");
const u32 gRaySceneCharges_Towermasta_Tilemap[] = INCBIN_U32("graphics/towermasta_scene/scene_4/towermasta.bin.lz");
const u32 gRaySceneCharges_Orbs_Tilemap[]     = INCBIN_U32("graphics/towermasta_scene/scene_4/orbs.bin.lz");
const u32 gRaySceneCharges_Bg_Pal[]           = INCBIN_U32("graphics/towermasta_scene/scene_4/bg.gbapal.lz");

// Scene 5 (RAY_ANIM_CHASES_AWAY)
const u32 gRaySceneChasesAway_Noirnet_Gfx[]      = INCBIN_U32("graphics/towermasta_scene/scene_5/noirnet.4bpp.lz");
const u32 gRaySceneChasesAway_NoirnetTail_Gfx[]  = INCBIN_U32("graphics/towermasta_scene/scene_5/noirnet_tail.4bpp.lz");
const u32 gRaySceneChasesAway_Krakrum_Gfx[]       = INCBIN_U32("graphics/towermasta_scene/scene_5/krakrum.4bpp.lz");
const u32 gRaySceneChasesAway_Towermasta_Gfx[]     = INCBIN_U32("graphics/towermasta_scene/scene_5/towermasta.4bpp.lz");
const u32 gRaySceneChasesAway_TowermastaTail_Gfx[] = INCBIN_U32("graphics/towermasta_scene/scene_5/towermasta_tail.4bpp.lz");
const u32 gRaySceneChasesAway_KrakrumSplash_Gfx[] = INCBIN_U32("graphics/towermasta_scene/scene_5/krakrum_splash.4bpp.lz");
const u32 gRaySceneChasesAway_Noirnet_Pal[]      = INCBIN_U32("graphics/towermasta_scene/scene_5/noirnet.gbapal.lz");
const u32 gRaySceneChasesAway_Krakrum_Pal[]       = INCBIN_U32("graphics/towermasta_scene/scene_5/krakrum.gbapal.lz");
const u32 gRaySceneChasesAway_Towermasta_Pal[]     = INCBIN_U32("graphics/towermasta_scene/scene_5/towermasta.gbapal.lz");
const u32 gRaySceneChasesAway_KrakrumSplash_Pal[] = INCBIN_U32("graphics/towermasta_scene/scene_5/krakrum_splash.gbapal.lz");
const u32 gRaySceneChasesAway_Light_Gfx[]        = INCBIN_U32("graphics/towermasta_scene/scene_5/light.4bpp.lz");
const u32 gRaySceneChasesAway_Ring_Gfx[]         = INCBIN_U32("graphics/towermasta_scene/scene_5/ring.8bpp.lz");
const u32 gRaySceneChasesAway_Light_Tilemap[]    = INCBIN_U32("graphics/towermasta_scene/scene_5/light.bin.lz");
const u32 gRaySceneChasesAway_Bg_Tilemap[]       = INCBIN_U32("graphics/towermasta_scene/scene_5/bg.bin.lz");
const u32 gRaySceneChasesAway_Ring_Tilemap[]     = INCBIN_U32("graphics/towermasta_scene/scene_5/ring.bin.lz");
const u32 gRaySceneChasesAway_Bg_Pal[]           = INCBIN_U32("graphics/towermasta_scene/scene_5/bg.gbapal.lz");
