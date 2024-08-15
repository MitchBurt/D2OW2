const struct FacilityMon gBattleFrontierMons[NUM_FRONTIER_MONS] =
{
    [FRONTIER_MON_MELARICK] = {
        .species = SPECIES_GUMSHOOS,//
        .moves = {MOVE_U_TURN, MOVE_EARTHQUAKE, MOVE_RETURN, MOVE_PURSUIT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.abilitynum = 2
    },
    [FRONTIER_MON_AZURILL] = {
        .species = SPECIES_MIENSHAO,//
        .moves = {MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_HI_JUMP_KICK, MOVE_POISON_FANG},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.abilitynum = ABILITY_2
    },
    [FRONTIER_MON_BUG] = {
        .species = SPECIES_GOLISOPOD,//
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_LIQUIDATION, MOVE_AQUA_JET, MOVE_LEECH_LIFE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PAINTIC] = {
        .species = SPECIES_VIVILLON,//
        .moves = {MOVE_HURRICANE, MOVE_GIGA_DRAIN, MOVE_BUG_BUZZ, MOVE_QUIVER_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ZEPURRINE] = {
        .species = SPECIES_GOODRA,//
        .moves = {MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SLUDGE_WAVE, MOVE_DRAGON_PULSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM,
		.abilitynum = ABILITY_2
    },
    [FRONTIER_MON_NOTAFURRY] = {
        .species = SPECIES_FLORGES,//
        .moves = {MOVE_AROMATHERAPY, MOVE_MOONBLAST, MOVE_WISH, MOVE_CALM_MIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_NUSHAKE] = {
        .species = SPECIES_BRUXISH,//
        .moves = {MOVE_SWORDS_DANCE, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_AQUA_JET},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PADDLITE] = {
        .species = SPECIES_TOXAPEX,//
        .moves = {MOVE_SCALD, MOVE_RECOVER, MOVE_TOXIC_SPIKES, MOVE_HAZE},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_SLUDGE,
        .evSpread = F_EV_SPREAD_DEFENSE |F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD,
		.abilitynum = 2
    },
    [FRONTIER_MON_LEGOOG] = {
        .species = SPECIES_ACCELGOR,//
        .moves = {MOVE_ENCORE, MOVE_SPIKES, MOVE_SLUDGE_BOMB, MOVE_WATER_SHURIKEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MYRESFT] = {
        .species = SPECIES_COMFEY,//
        .moves = {MOVE_REST, MOVE_CALM_MIND, MOVE_DRAINING_KISS, MOVE_LEECH_SEED},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
		.abilitynum = ABILITY_1
    },
    [FRONTIER_MON_PICHU] = {
        .species = SPECIES_LUXRAY,//
        .moves = {MOVE_ICE_FANG, MOVE_WILD_CHARGE, MOVE_FIRE_FANG, MOVE_SUPERPOWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_FLAME_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.abilitynum = 2
    },
    [FRONTIER_MON_NYANKITTY] = {
        .species = SPECIES_LILLIGANT,//
        .moves = {MOVE_QUIVER_DANCE, MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_EARTH_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MECHDUCK] = {
        .species = SPECIES_YANMEGA,//
        .moves = {MOVE_AIR_SLASH, MOVE_PROTECT, MOVE_ANCIENT_POWER, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.abilitynum = ABILITY_1
    },
    [FRONTIER_MON_VCRBRAIN] = {
        .species = SPECIES_TOGEDEMARU,//
        .moves = {MOVE_ZING_ZAP, MOVE_U_TURN, MOVE_NUZZLE, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.abilitynum = ABILITY_1
    },
    [FRONTIER_MON_MEGALADETH] = {
        .species = SPECIES_JELLICENT,//
        .moves = {MOVE_TAUNT, MOVE_SCALD, MOVE_RECOVER, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
		.abilitynum = ABILITY_1
    },
    [FRONTIER_MON_DRYWEE] = {
        .species = SPECIES_SCRAFTY,//
        .moves = {MOVE_CRUNCH, MOVE_REST, MOVE_HI_JUMP_KICK, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.abilitynum = ABILITY_2
    },
    [FRONTIER_MON_GONCARICIV] = {
        .species = SPECIES_BEWEAR,//
        .moves = {MOVE_HAMMER_ARM, MOVE_ICE_PUNCH, MOVE_RETURN, MOVE_PAYBACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_POOPRAT] = {
        .species = SPECIES_TSAREENA,
        .moves = {MOVE_U_TURN, MOVE_RAPID_SPIN, MOVE_TROP_KICK, MOVE_PLAY_ROUGH},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SOBBLEAF] = {
        .species = SPECIES_STOUTLAND,
        .moves = {MOVE_CRUNCH, MOVE_SUPERPOWER, MOVE_RETURN, MOVE_ICE_FANG},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SCUBITE] = {
        .species = SPECIES_QUACKNATOR,//TO REMOVE
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN, MOVE_SCALD},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DUPLICAT] = {
        .species = SPECIES_LYCANROC,
        .moves = {MOVE_STONE_EDGE, MOVE_STEALTH_ROCK, MOVE_ACCELEROCK, MOVE_FIRE_FANG},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.abilitynum = ABILITY_2
    },
    [FRONTIER_MON_SHEDINJA] = {
        .species = SPECIES_SHEDINJA,//
        .moves = {MOVE_SHADOW_SNEAK, MOVE_LEECH_LIFE, MOVE_SUCKER_PUNCH, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ANGBEAST] = {
        .species = SPECIES_PANGORO,//
        .moves = {MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_GUNK_SHOT, MOVE_BULLET_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_COWERLIN] = {
        .species = SPECIES_CHUXKUSH,
        .moves = {MOVE_WING_ATTACK, MOVE_BUG_BITE, MOVE_ROOST, MOVE_SWORDS_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_EVIOLITE,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_JOLLY,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MEOWRRIOR] = {
        .species = SPECIES_BIBAREL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_AQUA_JET, MOVE_QUICK_ATTACK, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.abilitynum = ABILITY_1
    },
    [FRONTIER_MON_BATANARF] = {
        .species = SPECIES_OBSTAGOON,
        .moves = {MOVE_FIRE_PUNCH, MOVE_FACADE, MOVE_SWITCHEROO, MOVE_NIGHT_SLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_FLAME_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.abilitynum = ABILITY_2
    },
    [FRONTIER_MON_FILMBRAIN] = {
        .species = SPECIES_ABOMASNOW,
        .moves = {MOVE_BLIZZARD, MOVE_GIGA_DRAIN, MOVE_AURORA_VEIL, MOVE_FOCUS_BLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_ABOMASITE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PHRACER] = {
        .species = SPECIES_EMBOAR,//TO MOVE
        .moves = {MOVE_WILD_CHARGE, MOVE_FLARE_BLITZ, MOVE_SUCKER_PUNCH, MOVE_HAMMER_ARM},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.abilitynum = 2
    },
    [FRONTIER_MON_SEAKUSH] = {
        .species = SPECIES_CRYOGONAL,//TO MOVE
        .moves = {MOVE_FREEZE_DRY, MOVE_RECOVER, MOVE_FLASH_CANNON, MOVE_SIGNAL_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DOGEASTER] = {
        .species = SPECIES_CARBINK,//TO MOVE
        .moves = {MOVE_EXPLOSION, MOVE_TRICK, MOVE_STEALTH_ROCK, MOVE_MAGIC_COAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_MENTAL_HERB,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_LAX,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SLUGMA] = {
        .species = SPECIES_MINIMAL,//TO MOVE
        .moves = {MOVE_FIRE_BLAST, MOVE_SUCKER_PUNCH, MOVE_PURSUIT, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ORCALE] = {
        .species = SPECIES_MAMOSWINE,//TO MOVE
        .moves = {MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_ICE_SHARD},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.abilitynum = 2
    },
    [FRONTIER_MON_GAHNOMED] = {
        .species = SPECIES_GAHNOMED,
        .moves = {MOVE_SPORE, MOVE_FAKE_OUT, MOVE_FOUL_PLAY, MOVE_STEALTH_ROCK},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY,
		.abilitynum = 2
    },
    [FRONTIER_MON_EMELGY] = {
        .species = SPECIES_TOUCANNON,//
        .moves = {MOVE_ROCK_BLAST, MOVE_BULLET_SEED, MOVE_U_TURN, MOVE_BRAVE_BIRD},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_HIDDEN
    },
    [FRONTIER_MON_HANGSTER] = {
        .species = SPECIES_DIGGERSBY,//
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_SUCKER_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = 2
    },
    [FRONTIER_MON_WYNAUT] = {
        .species = SPECIES_FIRANT,//TO MOVE
        .moves = {MOVE_ENCORE, MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SKITTY] = {
        .species = SPECIES_SALAZZLE,//TO MOVE
        .moves = {MOVE_FLAMETHROWER, MOVE_NASTY_PLOT, MOVE_DRAGON_PULSE, MOVE_SLUDGE_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BIRDAPP] = {
        .species = SPECIES_GOOBLAN,//TO MOVE
        .moves = {MOVE_SCALD, MOVE_DRAGON_TAIL, MOVE_FLAMETHROWER, MOVE_PSYCHIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_HIDDEN
    },
    [FRONTIER_MON_WORMADAMT] = {
        .species = SPECIES_AROMATISSE,//TO MOVE
        .moves = {MOVE_MOONBLAST, MOVE_TRICK_ROOM, MOVE_WISH, MOVE_CALM_MIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DIGLETT] = {
        .species = SPECIES_BERRORD,
        .moves = {MOVE_DRILL_RUN, MOVE_KNOCK_OFF, MOVE_POISON_JAB, MOVE_X_SCISSOR},
        .itemTableId = BATTLE_FRONTIER_ITEM_BERRORDITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ABOMINATON] = {
        .species = SPECIES_AURORUS,
        .moves = {MOVE_AURORA_VEIL, MOVE_FREEZE_DRY, MOVE_STEALTH_ROCK, MOVE_POWER_GEM},
        .itemTableId = BATTLE_FRONTIER_ITEM_ICY_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_NINCADA] = {
        .species = SPECIES_WISHIWASHI,
        .moves = {MOVE_ICE_BEAM, MOVE_EARTH_POWER, MOVE_U_TURN, MOVE_HYDRO_PUMP},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_CALM,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_WHISKBALL] = {
        .species = SPECIES_COBALION,
        .moves = {MOVE_IRON_HEAD, MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT, MOVE_SACRED_SWORD},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SNEDDIT] = {
        .species = SPECIES_BASTIODON,
        .moves = {MOVE_STEALTH_ROCK, MOVE_METAL_BURST, MOVE_TOXIC, MOVE_MAGIC_COAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_ROCKY_HELMET,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_TAILLOW] = {
        .species = SPECIES_TYRANTRUM,
        .moves = {MOVE_HEAD_SMASH, MOVE_OUTRAGE, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_HIDDEN
    },
    [FRONTIER_MON_BATCARDI] = {
        .species = SPECIES_BEARTIC,
        .moves = {MOVE_SUPERPOWER, MOVE_ICICLE_CRASH, MOVE_STONE_EDGE, MOVE_PLAY_ROUGH},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_UNGA] = {
        .species = SPECIES_TYPE_NULL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_RETURN, MOVE_SHADOW_CLAW, MOVE_IRON_HEAD},
        .itemTableId = BATTLE_FRONTIER_ITEM_EVIOLITE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_NAUSEON] = {
        .species = SPECIES_VOLCANION,
        .moves = {MOVE_LAVA_PLUME, MOVE_STEAM_ERUPTION, MOVE_SCORCHING_SANDS, MOVE_BODY_PRESS},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SORTAFURRY] = {
        .species = SPECIES_REUNICLUS,
        .moves = {MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL, MOVE_RECOVER, MOVE_TRICK_ROOM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
		.abilitynum = ABILITY_2
    },
    [FRONTIER_MON_BADDERY] = {
        .species = SPECIES_BACID,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRAGON_PULSE, MOVE_POWER_GEM, MOVE_COTTON_GUARD},
        .itemTableId = BATTLE_FRONTIER_ITEM_BACIDITE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LONK] = {
        .species = SPECIES_LONKEST,
        .moves = {MOVE_HI_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH, MOVE_SWORDS_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LONKESTITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DOOBOB] = {
        .species = SPECIES_DOODOOBOB,
        .moves = {MOVE_RETURN, MOVE_SUCKER_PUNCH, MOVE_EARTHQUAKE, MOVE_YAWN},
        .itemTableId = BATTLE_FRONTIER_ITEM_EVIOLITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GOOFSHRUM] = {
        .species = SPECIES_MALAMAR,
        .moves = {MOVE_TOPSY_TURVY, MOVE_PSYCHO_BOOST, MOVE_SUPERPOWER, MOVE_NIGHT_SLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ALCOO] = {
        .species = SPECIES_WEAVILE,
        .moves = {MOVE_ICICLE_CRASH, MOVE_NIGHT_SLASH, MOVE_SWORDS_DANCE, MOVE_FOUL_PLAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DITTO] = {
        .species = SPECIES_DITTO,
        .moves = {MOVE_TRANSFORM, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_METAL_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_COOPID] = {
        .species = SPECIES_GRIMMSNARL,
        .moves = {MOVE_TRICK, MOVE_SWAGGER, MOVE_PLAY_ROUGH, MOVE_FOUL_PLAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_IRON_BALL,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GARFEL] = {
        .species = SPECIES_HUGEMAN,
        .moves = {MOVE_WILL_O_WISP, MOVE_CURSE, MOVE_PROTECT, MOVE_PAYBACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_EVIOLITE,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ANTINDER] = {
        .species = SPECIES_UNOWN,
        .moves = {MOVE_COSMIC_POWER, MOVE_STORED_POWER, MOVE_ANCIENT_POWER, MOVE_EARTH_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_METIORE] = {
        .species = SPECIES_AEGISLASH,
        .moves = {MOVE_IRON_HEAD, MOVE_SHADOW_SNEAK, MOVE_SWORDS_DANCE, MOVE_KINGS_SHIELD},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PIRAGHOUL] = {
        .species = SPECIES_TOYUTA_ALOLAN,
        .moves = {MOVE_ICE_BALL, MOVE_HONE_CLAWS, MOVE_IRON_TAIL, MOVE_SPIKY_SHIELD},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_JANK] = {
        .species = SPECIES_PORYGON_Z,
        .moves = {MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_TRI_ATTACK, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_WISE_GLASSES,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BLINKY] = {
        .species = SPECIES_DOUBLINKER,
        .moves = {MOVE_SPORE, MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_SEED_BOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_TICKTOWEL] = {
        .species = SPECIES_DRAPION,
        .moves = {MOVE_WICKED_BLOW, MOVE_CROSS_POISON, MOVE_SWORDS_DANCE, MOVE_LEECH_LIFE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_RATMAN] = {
        .species = SPECIES_CHANDELURE,
        .moves = {MOVE_SHADOW_BALL, MOVE_TRICK, MOVE_MEMENTO, MOVE_FIRE_BLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CORDRA] = {
        .species = SPECIES_CHESNAUGHT,
        .moves = {MOVE_SPIKY_SHIELD, MOVE_DRAIN_PUNCH, MOVE_SHELL_SMASH, MOVE_NEEDLE_ARM},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SAUCIE] = {
        .species = SPECIES_SAWSBAWS,
        .moves = {MOVE_MORNING_SUN, MOVE_SOLAR_BEAM, MOVE_FIRE_BLAST, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAT_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = 2
    },
    [FRONTIER_MON_SKIPPA] = {
        .species = SPECIES_RAMMET,
        .moves = {MOVE_GIGA_DRAIN, MOVE_STRENGTH_SAP, MOVE_DRAINING_KISS, MOVE_TOXIC    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_JAFEET] = {
        .species = SPECIES_FAZEAGLE,
        .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_AIR_SLASH, MOVE_U_TURN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FAZEAGLEITE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_OOTLAW] = {
        .species = SPECIES_RENAGEDE,
        .moves = {MOVE_BULLET_PUNCH, MOVE_AQUA_JET, MOVE_MACH_PUNCH, MOVE_BELLY_DRUM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BONGECKO] = {
        .species = SPECIES_LEAFEON,
        .moves = {MOVE_LEAF_BLADE, MOVE_SWORDS_DANCE, MOVE_DIG, MOVE_BITE   },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ROCK] = {
        .species = SPECIES_MCCHICKY,
        .moves = {MOVE_TOXIC, MOVE_STRENGTH_SAP, MOVE_INFESTATION, MOVE_PROTECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_AMONSUS] = {
        .species = SPECIES_CRABERAVE,
        .moves = {MOVE_TRICK_ROOM, MOVE_RECOVER, MOVE_CHARGE_BEAM, MOVE_ICE_BEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_EVIOLITE,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GRUBDAB] = {
        .species = SPECIES_LEAVE,
        .moves = {MOVE_SWAGGER, MOVE_FOUL_PLAY, MOVE_PROTECT, MOVE_WISH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BANNACONDA] = {
        .species = SPECIES_PRIMARINA,
        .moves = {MOVE_SCALD, MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_ENERGY_BALL    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FROSLING] = {
        .species = SPECIES_CENTISKORCH,
        .moves = {MOVE_COIL, MOVE_IRON_TAIL, MOVE_LUNGE, MOVE_FIRE_LASH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_WIDE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DREIDRILL] = {
        .species = SPECIES_CORVIKNIGHT,
        .moves = {MOVE_BULK_UP, MOVE_ROOST, MOVE_POWER_TRIP, MOVE_BODY_PRESS    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CHAIROLD] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_DRAGON_PULSE, MOVE_MYSTICAL_FIRE, MOVE_PSYSHOCK, MOVE_ROOST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SOUL_DEW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SIPKING] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_DRAGON_PULSE, MOVE_PSYCHIC, MOVE_AIR_SLASH, MOVE_ROOST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SOUL_DEW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_YELLEYE] = {
        .species = SPECIES_HAZETHOTH,
        .moves = {MOVE_METEOR_MASH, MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_HAZETHOTHITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SYMBITE] = {
        .species = SPECIES_KROOKODILE,
        .moves = {MOVE_CRUNCH, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_DRAIN_PUNCH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ARAKETSU] = {
        .species = SPECIES_FROSILISK,
        .moves = {MOVE_SHORE_UP, MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_STONE_EDGE   },
        .itemTableId = BATTLE_FRONTIER_ITEM_FROSILISKITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_AGANDA] = {
        .species = SPECIES_UNJOY,
        .moves = {MOVE_SOFT_BOILED, MOVE_TOXIC, MOVE_ATTRACT, MOVE_SEISMIC_TOSS    },
        .itemTableId = BATTLE_FRONTIER_ITEM_EVIOLITE,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FARBY] = {
        .species = SPECIES_UGADOOBA,
        .moves = {MOVE_GIGA_IMPACT, MOVE_SHADOW_CLAW, MOVE_SLACK_OFF, MOVE_FEINT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_COOLAR] = {
        .species = SPECIES_HONCHKROW,
        .moves = {MOVE_NIGHT_SLASH, MOVE_ROOST, MOVE_AIR_SLASH, MOVE_PSYCHIC    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_SERIOUS,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BURNTONION] = {
        .species = SPECIES_EELEKTROSS,
        .moves = {MOVE_COIL, MOVE_WILD_CHARGE, MOVE_FIRE_PUNCH, MOVE_AQUA_TAIL    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_VULPOINTER] = {
        .species = SPECIES_CHATOT,
        .moves = {MOVE_NASTY_PLOT, MOVE_AIR_SLASH, MOVE_BOOMBURST, MOVE_HEAT_WAVE   },
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BREWFIN] = {
        .species = SPECIES_HAPPYMAUL,
        .moves = {MOVE_PIN_MISSILE, MOVE_ARM_THRUST, MOVE_ROCK_BLAST, MOVE_BULK_UP    },
        .itemTableId = BATTLE_FRONTIER_ITEM_HERACRONITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_NONGETIVE] = {
        .species = SPECIES_GLISCOR,
        .moves = {MOVE_CRABHAMMER, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SKORCHI] = {
        .species = SPECIES_CRESSELIA,
        .moves = {MOVE_COSMIC_POWER, MOVE_RECOVER, MOVE_STORED_POWER, MOVE_ICE_BEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MEGATRON] = {
        .species = SPECIES_XAPP,
        .moves = {MOVE_FACADE, MOVE_U_TURN, MOVE_AERIAL_ACE, MOVE_STEEL_WING    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FLAME_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_KUKLUX] = {
        .species = SPECIES_MURPHIRE,
        .moves = {MOVE_BODY_PRESS, MOVE_FIRE_PUNCH, MOVE_METAL_BURST, MOVE_CURSE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_MURPHIREITE,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DIVINI] = {
        .species = SPECIES_PARANGELIA,
        .moves = {MOVE_JUMP_KICK, MOVE_BRAVE_BIRD, MOVE_DRILL_RUN, MOVE_SWORDS_DANCE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SKELEDOOT] = {
        .species = SPECIES_GOURGEIST,
        .moves = {MOVE_LEECH_SEED, MOVE_SYNTHESIS, MOVE_WILL_O_WISP, MOVE_FOUL_PLAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ARMYDRONE] = {
        .species = SPECIES_SHEMUE,
        .moves = {MOVE_BODY_PRESS, MOVE_SLACK_OFF, MOVE_PSYSHOCK, MOVE_SCALD    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHEMUENITE,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BERRYALEN] = {
        .species = SPECIES_INTELEON,
        .moves = {MOVE_AIR_SLASH, MOVE_DARK_PULSE, MOVE_SCALD, MOVE_ICE_BEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_COOKLET] = {
        .species = SPECIES_LONGIFER,
        .moves = {MOVE_FISSURE, MOVE_DYNAMIC_PUNCH, MOVE_STONE_EDGE, MOVE_BULLET_PUNCH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BAITORD] = {
        .species = SPECIES_DARMANITAN_GALARIAN,
        .moves = {MOVE_FLARE_BLITZ, MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_DRAIN_PUNCH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_JISSM] = {
        .species = SPECIES_POLTEAGEIST,
        .moves = {MOVE_SHELL_SMASH, MOVE_STRENGTH_SAP, MOVE_SHADOW_BALL, MOVE_GIGA_DRAIN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_KORBIE] = {
        .species = SPECIES_REUNICLUS,
        .moves = {MOVE_THUNDERBOLT, MOVE_TRICK_ROOM, MOVE_SHADOW_BALL, MOVE_PSYCHIC    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BASSHOP] = {
        .species = SPECIES_TALONFLAME,
        .moves = {MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_SWORDS_DANCE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MEADOSAUR] = {
        .species = SPECIES_AMAZULK_ALOLAN,
        .moves = {MOVE_FLARE_BLITZ, MOVE_THUNDER_PUNCH, MOVE_SHADOW_BONE, MOVE_EARTHQUAKE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_THICK_CLUB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_TOM] = {
        .species = SPECIES_BLACEPHALON,
        .moves = {MOVE_MIND_BLOWN, MOVE_CALM_MIND, MOVE_SHADOW_BALL, MOVE_PSYCHIC    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_RELAXED,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BONGSTARD] = {
        .species = SPECIES_VIKAVOLT,
        .moves = {MOVE_BUG_BUZZ, MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_AIR_SLASH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DUGGAME] = {
        .species = SPECIES_GOODRA,
        .moves = {MOVE_DRAGON_PULSE, MOVE_SLUDGE_WAVE, MOVE_MUDDY_WATER, MOVE_THUNDERBOLT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SURBSQUACH] = {
        .species = SPECIES_HYDREIGON,
        .moves = {MOVE_DARK_PULSE, MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_FLASH_CANNON    },
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CIGHTED] = {
        .species = SPECIES_TOGEKISS,
        .moves = {MOVE_MOONBLAST, MOVE_AIR_SLASH, MOVE_SILVER_WIND, MOVE_WATER_PULSE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PUCKID] = {
        .species = SPECIES_SKORPYROS,
        .moves = {MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_AIR_SLASH, MOVE_DRAGON_PULSE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SKORPYROSITE_Y,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_EGOIRL] = {
        .species = SPECIES_GOTHOT,
        .moves = {MOVE_COSMIC_POWER, MOVE_MOONBLAST, MOVE_CHARGE_BEAM, MOVE_SOFT_BOILED    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE	| F_EV_SPREAD_HP,
        .nature = NATURE_CALM,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DESQUARED] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_DISCHARGE, MOVE_FLASH_CANNON, MOVE_MIRROR_COAT, MOVE_SIGNAL_BEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_AIR_BALLOON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DABBOI] = {
        .species = SPECIES_PROBOPASS,
        .moves = {MOVE_BODY_PRESS, MOVE_METAL_BURST, MOVE_IRON_DEFENSE, MOVE_TAUNT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GUMMI] = {
        .species = SPECIES_STRAIDIRT,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_RAPID_SPIN, MOVE_U_TURN, MOVE_FORESIGHT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_STROLOKE] = {
        .species = SPECIES_BISHARP,
        .moves = {MOVE_SWORDS_DANCE, MOVE_IRON_HEAD, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BILLOMINAT] = {
        .species = SPECIES_ABSOL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_SUCKER_PUNCH, MOVE_KNOCK_OFF, MOVE_PLAY_ROUGH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_ABSOLITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_EEMOJEE] = {
        .species = SPECIES_ACCELGOR,
        .moves = {MOVE_SPIKES, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_FINAL_GAMBIT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHAPIPIZ] = {
        .species = SPECIES_USARMY,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_ICE_FANG, MOVE_ROOST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_USARMYITE,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_AWMANE] = {
        .species = SPECIES_ENDERMON,
        .moves = {MOVE_ELECTRO_BALL, MOVE_MIRROR_COAT, MOVE_SIGNAL_BEAM, MOVE_LIGHT_SCREEN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LOVLILAD] = {
        .species = SPECIES_OUROBOLET,
        .moves = {MOVE_TAIL_GLOW, MOVE_SCALD, MOVE_THUNDERBOLT, MOVE_SIGNAL_BEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_VIVAPINAUT] = {
        .species = SPECIES_MAURRICE,
        .moves = {MOVE_FACADE, MOVE_SWORDS_DANCE, MOVE_CRUNCH, MOVE_CLOSE_COMBAT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FLAME_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ABSTRATIC] = {
        .species = SPECIES_KUKLOPS,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_RECOVER, MOVE_FOCUS_BLAST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_ALAKAZITE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LEGUESSR] = {
        .species = SPECIES_ALOMOMOLA,
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_TOXIC, MOVE_KNOCK_OFF    },
        .itemTableId = BATTLE_FRONTIER_ITEM_ROCKY_HELMET,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MORTARMALO] = {
        .species = SPECIES_UNSC,
        .moves = {MOVE_DRAGON_DANCE, MOVE_RETURN, MOVE_DEFOG, MOVE_ROOST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_UNSCNITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FIZZCUB] = {
        .species = SPECIES_DURANT,
        .moves = {MOVE_HONE_CLAWS, MOVE_IRON_HEAD, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ARON] = {
        .species = SPECIES_NONONMON,
        .moves = {MOVE_SWORDS_DANCE, MOVE_AQUA_JET, MOVE_CRABHAMMER, MOVE_KNOCK_OFF    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_WARPNAR] = {
        .species = SPECIES_DHELMISE,
        .moves = {MOVE_POWER_WHIP, MOVE_ANCHOR_SHOT, MOVE_RAPID_SPIN, MOVE_SYNTHESIS    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FLOOTEY] = {
        .species = SPECIES_DONT,
        .moves = {MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ZAP_CANNON    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_YOLKANNER] = {
        .species = SPECIES_ORICORIO,
        .moves = {MOVE_QUIVER_DANCE, MOVE_REVELATION_DANCE, MOVE_AIR_SLASH, MOVE_ROOST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_UNOWN] = {
        .species = SPECIES_FRIDEGE,
        .moves = {MOVE_SHELL_SMASH, MOVE_LIQUIDATION, MOVE_ICICLE_CRASH, MOVE_MEGAHORN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FENNAF] = {
        .species = SPECIES_XENOTOPS,
        .moves = {MOVE_RAPID_SPIN, MOVE_STONE_EDGE, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BURIK] = {
        .species = SPECIES_BIGOBEET,
        .moves = {MOVE_RAPID_SPIN, MOVE_SUPERPOWER, MOVE_STONE_EDGE, MOVE_LIQUIDATION    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ANOOBIS] = {
        .species = SPECIES_GASTRODON,
        .moves = {MOVE_SCALD, MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_RECOVER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HEROKKU] = {
        .species = SPECIES_BRONZONG,
        .moves = {MOVE_PSYWAVE, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_PROTECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_QUACKSHOT] = {
        .species = SPECIES_QUACKNATOR,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN, MOVE_SCALD},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_COMETIDE] = {
        .species = SPECIES_DRAMPA,
        .moves = {MOVE_DRACO_METEOR, MOVE_HYPER_VOICE, MOVE_FLAMETHROWER, MOVE_FOCUS_BLAST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_POTOGREED] = {
        .species = SPECIES_RHYPERIOR,//TO REMOVE
        .moves = {MOVE_STEALTH_ROCK, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_BLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
		.abilitynum = ABILITY_2
    },
    [FRONTIER_MON_GOLBNAR] = {
        .species = SPECIES_LILGUY,
        .moves = {MOVE_NASTY_PLOT, MOVE_PSYCHIC, MOVE_LEAF_STORM, MOVE_RECOVER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FEDORHAWK] = {
        .species = SPECIES_CHATOT,
        .moves = {MOVE_BOOMBURST, MOVE_HEAT_WAVE, MOVE_CHATTER, MOVE_NASTY_PLOT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CTHEYE] = {
        .species = SPECIES_AVALUGG,
        .moves = {MOVE_MIRROR_COAT, MOVE_ICE_SHARD, MOVE_EARTHQUAKE, MOVE_TOXIC    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_IMPOSTOWN] = {
        .species = SPECIES_IMPOSTOWN,
        .moves = {MOVE_SLASH, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_LEAF_BLADE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_STICK,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ATTACO] = {
        .species = SPECIES_REMIEL,
        .moves = {MOVE_NASTY_PLOT, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_AIR_SLASH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_POWER_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CORORK] = {
        .species = SPECIES_INFERNAPE,
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_FLARE_BLITZ, MOVE_BULLET_PUNCH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ODOSAUR] = {
        .species = SPECIES_VICTINI,
        .moves = {MOVE_V_CREATE, MOVE_ZEN_HEADBUTT, MOVE_THUNDER_PUNCH, MOVE_BRICK_BREAK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_TRICERAS] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_CHARGE_BEAM, MOVE_ICY_WIND, MOVE_FOCUS_BLAST, MOVE_FLASH_CANNON    },
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CHARLES] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_GYRO_BALL, MOVE_SUBSTITUTE, MOVE_CURSE, MOVE_BODY_PRESS    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PLATERRY] = {
        .species = SPECIES_GALLADE,
        .moves = {MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT, MOVE_ZEN_HEADBUTT, MOVE_KNOCK_OFF    },
        .itemTableId = BATTLE_FRONTIER_ITEM_GALLADITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BRAVOGOR] = {
        .species = SPECIES_GIGALPHA,//TO REMOVE
        .moves = {MOVE_BOOMBURST, MOVE_ICE_BEAM, MOVE_FIRE_BLAST, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_YELTZER] = {
        .species = SPECIES_GOGOAT,
        .moves = {MOVE_WILD_CHARGE, MOVE_MILK_DRINK, MOVE_LEAF_BLADE, MOVE_EARTHQUAKE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HAZMATE] = {
        .species = SPECIES_HEATRAN,
        .moves = {MOVE_LAVA_PLUME, MOVE_PROTECT, MOVE_TOXIC, MOVE_TAUNT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BUNGA] = {
        .species = SPECIES_HELIOLISK,
        .moves = {MOVE_VOLT_SWITCH, MOVE_SURF, MOVE_HYPER_VOICE, MOVE_THUNDERBOLT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DURASHELL] = {
        .species = SPECIES_LOPUNNY,
        .moves = {MOVE_RETURN, MOVE_FAKE_OUT, MOVE_HI_JUMP_KICK, MOVE_ICE_PUNCH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LOPUNNITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_RICKLING] = {
        .species = SPECIES_JIRACHI,
        .moves = {MOVE_FIRE_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_IRON_HEAD, MOVE_DRAIN_PUNCH     },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SCATRUSH] = {
        .species = SPECIES_HELPME,
        .moves = {MOVE_ROOST, MOVE_PSYCHIC, MOVE_TOXIC, MOVE_ICE_BEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SETRONIC] = {
        .species = SPECIES_MANDIBUZZ,
        .moves = {MOVE_FOUL_PLAY, MOVE_ROOST, MOVE_TAUNT, MOVE_DEFOG    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MINITRON] = {
        .species = SPECIES_MINITRON,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE, MOVE_THUNDER_PUNCH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_MAWILITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FIROME] = {
        .species = SPECIES_FIROME,
        .moves = {MOVE_QUIVER_DANCE, MOVE_SLEEP_POWDER, MOVE_HURRICANE, MOVE_BUG_BUZZ    },
        .itemTableId = BATTLE_FRONTIER_ITEM_WIDE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BERRORD] = {
        .species = SPECIES_FIRANT,
        .moves = {MOVE_METAL_BURST, MOVE_DESTINY_BOND, MOVE_STRENGTH_SAP, MOVE_HAZE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_SASSY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHERRIF] = {
        .species = SPECIES_RENAGEDE,
        .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_SLAP, MOVE_ICY_WIND, MOVE_RAIN_DANCE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ESCEEPEE] = {
        .species = SPECIES_HOLOCAST,
        .moves = {MOVE_EARTHQUAKE, MOVE_COIL, MOVE_BODY_PRESS, MOVE_IRON_HEAD    },
        .itemTableId = BATTLE_FRONTIER_ITEM_HOLOCASTITE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_NYANTIGER] = {
        .species = SPECIES_NYANTIGER,
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_ATTRACT, MOVE_QUIVER_DANCE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DUCKERTRON] = {
        .species = SPECIES_GOODRA,
        .moves = {MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SLUDGE_WAVE, MOVE_DRAGON_PULSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_WURM] = {
        .species = SPECIES_OBSTAGOON,
        .moves = {MOVE_OBSTRUCT, MOVE_FACADE, MOVE_SWITCHEROO, MOVE_NIGHT_SLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_FLAME_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.abilitynum = ABILITY_2
    },
    [FRONTIER_MON_GLUERILLA] = {
        .species = SPECIES_GLUERILLA, //
        .moves = {MOVE_SIGNAL_BEAM, MOVE_SPIDER_WEB, MOVE_NIGHT_SHADE, MOVE_TOXIC    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_SERIOUS,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHARCRUSH] = {
        .species = SPECIES_SHARCRUSH,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_DETECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_NYANCAT_1] = {
        .species = SPECIES_NYANCAT,
        .moves = {MOVE_SECRET_POWER, MOVE_FAINT_ATTACK, MOVE_DOUBLE_TEAM, MOVE_HEAL_BELL    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SABLEYE_1] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_FAINT_ATTACK, MOVE_CONFUSE_RAY, MOVE_KNOCK_OFF, MOVE_FAKE_OUT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_GLASSES,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CAPFALCO_1] = {
        .species = SPECIES_CAPFALCO,
        .moves = {MOVE_SLAM, MOVE_BRICK_BREAK, MOVE_LICK, MOVE_MUD_SLAP    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MARIGUANA_1] = {
        .species = SPECIES_MARIGUANA,
        .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_WRAP, MOVE_SWEET_SCENT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_TONCRETE_1] = {
        .species = SPECIES_TONCRETE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_DEFENSE_CURL, MOVE_BRICK_BREAK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SMOGAS_1] = {
        .species = SPECIES_SMOGAS,
        .moves = {MOVE_PETAL_DANCE, MOVE_ACID, MOVE_STUN_SPORE, MOVE_MOONLIGHT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PORYGON_1] = {
        .species = SPECIES_PORYGON_Z,//TO REMOVE
        .moves = {MOVE_TRI_ATTACK, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_1
    },
    [FRONTIER_MON_KUKLAN_1] = {
        .species = SPECIES_KUKLAN,
        .moves = {MOVE_CONFUSION, MOVE_ROLE_PLAY, MOVE_FUTURE_SIGHT, MOVE_DISABLE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_WAILMER_1] = {
        .species = SPECIES_WAILMER,
        .moves = {MOVE_WHIRLPOOL, MOVE_ROAR, MOVE_DEFENSE_CURL, MOVE_ROLLOUT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ALIEON_1] = {
        .species = SPECIES_ROSERADE,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_HIDDEN_POWER, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_HIDDEN
    },
    [FRONTIER_MON_REWINDLE_1] = {
        .species = SPECIES_REWINDLE,
        .moves = {MOVE_SILVER_WIND, MOVE_CONFUSE_RAY, MOVE_QUICK_ATTACK, MOVE_HELPING_HAND    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DNDICE_1] = {
        .species = SPECIES_DNDICE,
        .moves = {MOVE_SILVER_WIND, MOVE_WISH, MOVE_QUICK_ATTACK, MOVE_HELPING_HAND    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GROVINE_1] = {
        .species = SPECIES_GROVINE,
        .moves = {MOVE_PETAL_DANCE, MOVE_GROWTH, MOVE_SWEET_SCENT, MOVE_FURY_CUTTER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_GENTLE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SKOMAD_1] = {
        .species = SPECIES_SKOMAD,
        .moves = {MOVE_SLASH, MOVE_FIRE_SPIN, MOVE_SWORDS_DANCE, MOVE_AERIAL_ACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAUGHTY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SPLOOGER_1] = {
        .species = SPECIES_SPLOOGER,
        .moves = {MOVE_WATER_PULSE, MOVE_BITE, MOVE_MUD_SLAP, MOVE_YAWN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DUSHROOM_1] = {
        .species = SPECIES_DUSHROOM,
        .moves = {MOVE_SLASH, MOVE_PSYBEAM, MOVE_STUN_SPORE, MOVE_FLASH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RASH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FURBOIS_1] = {
        .species = SPECIES_FURBOIS,
        .moves = {MOVE_LOW_KICK, MOVE_ROCK_TOMB, MOVE_FORESIGHT, MOVE_SCARY_FACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BEEGMIKE_1] = {
        .species = SPECIES_BEEGMIKE,
        .moves = {MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_PSYCHIC, MOVE_CURSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_EVIOLITE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ZACTORY_1] = {
        .species = SPECIES_ZACTORY,
        .moves = {MOVE_RAZOR_LEAF, MOVE_TOXIC, MOVE_SAFEGUARD, MOVE_LIGHT_SCREEN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_RIGAMORT_1] = {
        .species = SPECIES_RIGAMORT,
        .moves = {MOVE_FLAME_WHEEL, MOVE_FURY_SWIPES, MOVE_SWIFT, MOVE_SMOKESCREEN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_JEWIS_1] = {
        .species = SPECIES_JEWIS,
        .moves = {MOVE_SLASH, MOVE_WATER_PULSE, MOVE_BITE, MOVE_SCARY_FACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BLURABRAIN_1] = {
        .species = SPECIES_BLURABRAIN,
        .moves = {MOVE_AERIAL_ACE, MOVE_MAGICAL_LEAF, MOVE_WISH, MOVE_FOLLOW_ME    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GAHBLIN_1] = {
        .species = SPECIES_GAHBLIN,
        .moves = {MOVE_FAINT_ATTACK, MOVE_FLY, MOVE_TORMENT, MOVE_TAUNT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FIRANT_1] = {
        .species = SPECIES_FIRANT,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_CHARM, MOVE_SAFEGUARD    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PURRSOUR_1] = {
        .species = SPECIES_PURRSOUR,
        .moves = {MOVE_SPARK, MOVE_FAKE_TEARS, MOVE_QUICK_ATTACK, MOVE_HELPING_HAND    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PURRTANG_1] = {
        .species = SPECIES_PURRTANG,
        .moves = {MOVE_SPARK, MOVE_CHARM, MOVE_ENCORE, MOVE_HELPING_HAND    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_VERYBERRY_1] = {
        .species = SPECIES_VERYBERRY,
        .moves = {MOVE_FURY_CUTTER, MOVE_ENDEAVOR, MOVE_BRICK_BREAK, MOVE_DOUBLE_TEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CHEFURE_1] = {
        .species = SPECIES_CHEFURE,
        .moves = {MOVE_EMBER, MOVE_DOUBLE_KICK, MOVE_QUICK_ATTACK, MOVE_SAND_ATTACK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BAITERROR_1] = {
        .species = SPECIES_BAITERROR,
        .moves = {MOVE_MUD_SHOT, MOVE_WATER_GUN, MOVE_ROCK_TOMB, MOVE_MUD_SLAP    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DEBEGUCK_1] = {
        .species = SPECIES_DEBEGUCK,
        .moves = {MOVE_FIRE_SPIN, MOVE_BOUNCE, MOVE_QUICK_ATTACK, MOVE_TAIL_WHIP    },
        .itemTableId = BATTLE_FRONTIER_ITEM_RAWST_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BARIREEFER_1] = {
        .species = SPECIES_BARIREEFER,
        .moves = {MOVE_LIQUIDATION, MOVE_PLAY_ROUGH, MOVE_ICE_PUNCH, MOVE_AQUA_JET},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
		.abilitynum = ABILITY_2
    },
    [FRONTIER_MON_BREADDIE_1] = {
        .species = SPECIES_BREADDIE,
        .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_WOOD_HAMMER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.abilitynum = ABILITY_2
    },
    [FRONTIER_MON_SUGMABALLS_1] = {
        .species = SPECIES_SUGMABALLS,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EMBER, MOVE_ACID_ARMOR, MOVE_SANDSTORM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_GENTLE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FROSHUND_1] = {
        .species = SPECIES_FROSHUND,
        .moves = {MOVE_DIG, MOVE_BITE, MOVE_SCARY_FACE, MOVE_SANDSTORM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SOFT_SAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MORGHOST_1] = {
        .species = SPECIES_MORGHOST,
        .moves = {MOVE_ICE_BALL, MOVE_HAIL, MOVE_SNORE, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GAWDAMSTER_1] = {
        .species = SPECIES_GAWDAMSTER,
        .moves = {MOVE_SWORDS_DANCE, MOVE_CRUNCH, MOVE_SUPER_FANG, MOVE_RETURN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CINAMANCER_1] = {
        .species = SPECIES_CINAMANCER,
        .moves = {MOVE_SILVER_WIND, MOVE_AERIAL_ACE, MOVE_ICY_WIND, MOVE_STUN_SPORE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_RELAXED,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DEEPFRIEON_1] = {
        .species = SPECIES_DEEPFRIEON,
        .moves = {MOVE_SLAM, MOVE_PROTECT, MOVE_HELPING_HAND, MOVE_FOLLOW_ME    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_SERIOUS,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MOABY_1] = {
        .species = SPECIES_MOABY,
        .moves = {MOVE_HEADBUTT, MOVE_GLARE, MOVE_DEFENSE_CURL, MOVE_ROLLOUT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_WOOPTRET_1] = {
        .species = SPECIES_WOOPTRET,
        .moves = {MOVE_DRAGON_BREATH, MOVE_LEER, MOVE_WRAP, MOVE_SAFEGUARD    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FURRLEAD_1] = {
        .species = SPECIES_FURRLEAD,
        .moves = {MOVE_BITE, MOVE_POISON_FANG, MOVE_TAUNT, MOVE_ROAR    },
        .itemTableId = BATTLE_FRONTIER_ITEM_MENTAL_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ZEPPUR_1] = {
        .species = SPECIES_ZEPPUR,
        .moves = {MOVE_SECRET_POWER, MOVE_SAND_ATTACK, MOVE_COVET, MOVE_TICKLE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CASTFORM_1] = {
        .species = SPECIES_CASTFORM,
        .moves = {MOVE_EMBER, MOVE_WATER_PULSE, MOVE_SHOCK_WAVE, MOVE_ICY_WIND    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HASTY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_TIPSYRAMID_1] = {
        .species = SPECIES_TIPSYRAMID,
        .moves = {MOVE_HEADBUTT, MOVE_DRAGON_BREATH, MOVE_PROTECT, MOVE_SCARY_FACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HARASTUR_1] = {
        .species = SPECIES_HARASTUR,
        .moves = {MOVE_METAL_CLAW, MOVE_CONFUSION, MOVE_PURSUIT, MOVE_SCARY_FACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_COSMIE_1] = {
        .species = SPECIES_COSMIE,
        .moves = {MOVE_SING, MOVE_DISABLE, MOVE_WISH, MOVE_SECRET_POWER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_WRECKFAST_1] = {
        .species = SPECIES_WRECKFAST,
        .moves = {MOVE_PETAL_DANCE, MOVE_INGRAIN, MOVE_LEECH_SEED, MOVE_LIGHT_SCREEN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CHIMECHO_1] = {
        .species = SPECIES_CHIMECHO,
        .moves = {MOVE_PSYWAVE, MOVE_TAKE_DOWN, MOVE_HEAL_BELL, MOVE_SAFEGUARD    },
        .itemTableId = BATTLE_FRONTIER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHAWT_1] = {
        .species = SPECIES_SHAWT,
        .moves = {MOVE_METAL_CLAW, MOVE_DIG, MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HASTY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DABBEATLE_1] = {
        .species = SPECIES_DABBEATLE,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_PIN_MISSILE, MOVE_SPIKES, MOVE_MINIMIZE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PINATI_1] = {
        .species = SPECIES_PINATI,
        .moves = {MOVE_FAINT_ATTACK, MOVE_FAKE_OUT, MOVE_ICY_WIND, MOVE_QUICK_ATTACK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_NOCTRUM_1] = {
        .species = SPECIES_NOCTRUM,
        .moves = {MOVE_WATER_PULSE, MOVE_AERIAL_ACE, MOVE_STOCKPILE, MOVE_SWALLOW    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_XAPP_1] = {
        .species = SPECIES_XAPP,
        .moves = {MOVE_FLY, MOVE_ENDEAVOR, MOVE_FACADE, MOVE_QUICK_ATTACK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GALVATRON_1] = {
        .species = SPECIES_GALVATRON,
        .moves = {MOVE_METAL_CLAW, MOVE_ROCK_TOMB, MOVE_IRON_DEFENSE, MOVE_PROTECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_METAL_COAT,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BANANACE_1] = {
        .species = SPECIES_BANANACE,
        .moves = {MOVE_MEGA_DRAIN, MOVE_SLAM, MOVE_TOXIC, MOVE_BIND    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BEVRAGON_1] = {
        .species = SPECIES_BEVRAGON,
        .moves = {MOVE_POISON_FANG, MOVE_DIG, MOVE_BITE, MOVE_GLARE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GOREFIELD_1] = {
        .species = SPECIES_GOREFIELD,
        .moves = {MOVE_FAKE_OUT, MOVE_SLASH, MOVE_TORMENT, MOVE_SWAGGER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SWAMPOGRE_1] = {
        .species = SPECIES_SWAMPOGRE,
        .moves = {MOVE_AURORA_BEAM, MOVE_SMOKESCREEN, MOVE_WATER_GUN, MOVE_RAIN_DANCE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_KECLEON_1] = {
        .species = SPECIES_KECLEON,
        .moves = {MOVE_SECRET_POWER, MOVE_PSYBEAM, MOVE_MAGIC_COAT, MOVE_SEISMIC_TOSS    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAIVE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DOODOOBOB_1] = {
        .species = SPECIES_DOODOOBOB,
        .moves = {MOVE_SLASH, MOVE_COUNTER, MOVE_ENCORE, MOVE_UPROAR    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SURTYUR_1] = {
        .species = SPECIES_SURTYUR,
        .moves = {MOVE_CONFUSION, MOVE_COSMIC_POWER, MOVE_LIGHT_SCREEN, MOVE_SANDSTORM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GANESH_1] = {
        .species = SPECIES_GANESH,
        .moves = {MOVE_CONFUSION, MOVE_FIRE_SPIN, MOVE_LIGHT_SCREEN, MOVE_SANDSTORM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_JADOUG_1] = {
        .species = SPECIES_DABBEATLE_HUSIAN,
        .moves = {MOVE_CRUNCH, MOVE_POISON_JAB, MOVE_LIQUIDATION, MOVE_TOXIC_SPIKES    },
        .itemTableId = BATTLE_FRONTIER_ITEM_EVIOLITE,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_TOYUTA_1] = {
        .species = SPECIES_TOYUTA,
        .moves = {MOVE_CRUSH_CLAW, MOVE_ROCK_SLIDE, MOVE_SWIFT, MOVE_SANDSTORM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SENKETULA_1] = {
        .species = SPECIES_SENKETULA,
        .moves = {MOVE_SILVER_WIND, MOVE_PSYBEAM, MOVE_SLEEP_POWDER, MOVE_SKILL_SWAP    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_UNJOY_1] = {
        .species = SPECIES_UNJOY,
        .moves = {MOVE_METRONOME, MOVE_REFRESH, MOVE_DEFENSE_CURL, MOVE_MINIMIZE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_EVIOLITE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MONGELORD_1] = {
        .species = SPECIES_MONGELORD,
        .moves = {MOVE_WATER_PULSE, MOVE_PSYBEAM, MOVE_SWIFT, MOVE_AGILITY    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_NIGHTWAVE_1] = {
        .species = SPECIES_NIGHTWAVE,
        .moves = {MOVE_AERIAL_ACE, MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_SYNTHESIS    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SCRAPCHAT_1] = {
        .species = SPECIES_SCRAPCHAT,
        .moves = {MOVE_DIG, MOVE_ANCIENT_POWER, MOVE_HAIL, MOVE_LIGHT_SCREEN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SOFT_SAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ANIVENOM_1] = {
        .species = SPECIES_ANIVENOM,
        .moves = {MOVE_AIR_CUTTER, MOVE_CONFUSE_RAY, MOVE_TOXIC, MOVE_STEEL_WING    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SUGREIVOUS_1] = {
        .species = SPECIES_SUGREIVOUS,
        .moves = {MOVE_KARATE_CHOP, MOVE_COUNTER, MOVE_SWAGGER, MOVE_SCREECH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REPLITOR_1] = {
        .species = SPECIES_REPLITOR,
        .moves = {MOVE_ROLLING_KICK, MOVE_BRICK_BREAK, MOVE_FOCUS_ENERGY, MOVE_FACADE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_BELT,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BIREMIC_1] = {
        .species = SPECIES_BIREMIC,
        .moves = {MOVE_MACH_PUNCH, MOVE_SKY_UPPERCUT, MOVE_DETECT, MOVE_COUNTER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BURNANT_1] = {
        .species = SPECIES_BURNANT,
        .moves = {MOVE_PSYBEAM, MOVE_STOMP, MOVE_WISH, MOVE_SKILL_SWAP    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_STRAIDIRT_1] = {
        .species = SPECIES_STRAIDIRT,
        .moves = {MOVE_TRIPLE_KICK, MOVE_DIG, MOVE_MACH_PUNCH, MOVE_QUICK_ATTACK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_TOCKTOWER_1] = {
        .species = SPECIES_TOCKTOWER,
        .moves = {MOVE_NIGHT_SHADE, MOVE_WILL_O_WISP, MOVE_SPITE, MOVE_KNOCK_OFF    },
        .itemTableId = BATTLE_FRONTIER_ITEM_RAWST_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_NINJASK_1] = {
        .species = SPECIES_NINJASK,
        .moves = {MOVE_BATON_PASS, MOVE_SWORDS_DANCE, MOVE_ENDURE, MOVE_DIG    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MILD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ARACKNE_1] = {
        .species = SPECIES_ARACKNE,
        .moves = {MOVE_POISON_TAIL, MOVE_BITE, MOVE_GLARE, MOVE_SCREECH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SMITNION_1] = {
        .species = SPECIES_SMITNION,
        .moves = {MOVE_SLASH, MOVE_DOUBLE_KICK, MOVE_ROAR, MOVE_QUICK_ATTACK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ERRORINE_1] = {
        .species = SPECIES_ERRORINE,
        .moves = {MOVE_EARTH_POWER, MOVE_FIRE_BLAST, MOVE_SOLAR_BEAM, MOVE_SLACK_OFF    },
        .itemTableId = BATTLE_FRONTIER_ITEM_ERRORINEITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHARKEG_1] = {
        .species = SPECIES_SHARKEG,
        .moves = {MOVE_WATERFALL, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_ICE_FANG    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHARKEGNITE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_TROPIUS_1] = {
        .species = SPECIES_TROPIUS,
        .moves = {MOVE_MAGICAL_LEAF, MOVE_WHIRLWIND, MOVE_AERIAL_ACE, MOVE_STEEL_WING    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DEATHCUBED_1] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_HIDDEN_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_LONELY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FLOOTICORN_1] = {
        .species = SPECIES_FLOOTICORN,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_AERIAL_ACE, MOVE_RAIN_DANCE, MOVE_ICY_WIND    },
        .itemTableId = BATTLE_FRONTIER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GNORB_1] = {
        .species = SPECIES_GNORB,
        .moves = {MOVE_EXTRASENSORY, MOVE_CONFUSE_RAY, MOVE_STOMP, MOVE_SAND_ATTACK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_GENTLE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ABSOL_1] = {
        .species = SPECIES_ABSOL,
        .moves = {MOVE_BITE, MOVE_RAZOR_WIND, MOVE_FUTURE_SIGHT, MOVE_QUICK_ATTACK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CARNIGORE_1] = {
        .species = SPECIES_CARNIGORE,
        .moves = {MOVE_STOCKPILE, MOVE_SWALLOW, MOVE_SPIT_UP, MOVE_SLUDGE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_NONONMON_1] = {
        .species = SPECIES_NONONMON,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_VICE_GRIP, MOVE_KNOCK_OFF, MOVE_PROTECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FAZEAGLE_1] = {
        .species = SPECIES_FAZEAGLE,//MEGA
        .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_ROOST, MOVE_HYPER_VOICE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FAZEAGLEITE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_1
    },
    [FRONTIER_MON_SELTCLAW_1] = {
        .species = SPECIES_SELTCLAW,
        .moves = {MOVE_PSYBEAM, MOVE_CONFUSE_RAY, MOVE_FUTURE_SIGHT, MOVE_MAGIC_COAT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HELLAPHANT_1] = {
        .species = SPECIES_HELLAPHANT,
        .moves = {MOVE_EMBER, MOVE_FIRE_SPIN, MOVE_SMOKESCREEN, MOVE_AMNESIA    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CREEPA_1] = {
        .species = SPECIES_CREEPA,
        .moves = {MOVE_CRABHAMMER, MOVE_METAL_CLAW, MOVE_MUD_SHOT, MOVE_PROTECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ACONEGGS_1] = {
        .species = SPECIES_ACONEGGS,
        .moves = {MOVE_NEEDLE_ARM, MOVE_FAINT_ATTACK, MOVE_ACID, MOVE_MEGA_PUNCH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_HASTY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SEAWEE_1] = {
        .species = SPECIES_SEAWEE,
        .moves = {MOVE_PETAL_DANCE, MOVE_SAFEGUARD, MOVE_SUNNY_DAY, MOVE_SYNTHESIS    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SYSTANIC_1] = {
        .species = SPECIES_SYSTANIC,
        .moves = {MOVE_OCTAZOOKA, MOVE_AURORA_BEAM, MOVE_PSYBEAM, MOVE_ROCK_BLAST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GLOBNAUT_1] = {
        .species = SPECIES_GLOBNAUT,
        .moves = {MOVE_WHIRLPOOL, MOVE_SCARY_FACE, MOVE_MUD_SLAP, MOVE_BITE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_THAUMNAR_1] = {
        .species = SPECIES_THAUMNAR,
        .moves = {MOVE_WHIRLPOOL, MOVE_AMNESIA, MOVE_ICY_WIND, MOVE_CONFUSION    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GALACNAR_1] = {
        .species = SPECIES_GALACNAR,
        .moves = {MOVE_ANCIENT_POWER, MOVE_WATER_PULSE, MOVE_HARDEN, MOVE_AMNESIA    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GAISER_1] = {
        .species = SPECIES_GAISER,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_SPIKE_CANNON, MOVE_TICKLE, MOVE_ANCIENT_POWER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BIGOBEET_1] = {
        .species = SPECIES_BIGOBEET,
        .moves = {MOVE_SLASH, MOVE_DIG, MOVE_FURY_CUTTER, MOVE_KNOCK_OFF    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_RENAGEDE_1] = {
        .species = SPECIES_RENAGEDE,
        .moves = {MOVE_SUBMISSION, MOVE_DIG, MOVE_ROCK_TOMB, MOVE_BUBBLE_BEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_BELT,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CHUXKUSH_1] = {
        .species = SPECIES_CHUXKUSH,
        .moves = {MOVE_SWORDS_DANCE, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK, MOVE_BUG_BITE},
        .itemTableId = BATTLE_FRONTIER_ITEM_EVIOLITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_1
    },
    [FRONTIER_MON_ITRIMID_1] = {
        .species = SPECIES_ITRIMID,
        .moves = {MOVE_SUBMISSION, MOVE_FOCUS_ENERGY, MOVE_SWORDS_DANCE, MOVE_REVENGE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_BELT,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAUGHTY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_TOASTEM_1] = {
        .species = SPECIES_TOASTEM,
        .moves = {MOVE_DIVE, MOVE_DIG, MOVE_HYPNOSIS, MOVE_SWAGGER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FRIDEGE_1] = {
        .species = SPECIES_FRIDEGE,
        .moves = {MOVE_AURORA_BEAM, MOVE_SPIKE_CANNON, MOVE_SUPERSONIC, MOVE_PROTECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_NEVER_MELT_ICE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_NYANCAT_2] = {
        .species = SPECIES_NYANCAT,
        .moves = {MOVE_FAKE_TEARS, MOVE_SING, MOVE_THUNDERBOLT, MOVE_ICE_BEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SABLEYE_2] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_SHADOW_BALL, MOVE_FAINT_ATTACK, MOVE_CONFUSE_RAY, MOVE_RECOVER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CAPFALCO_2] = {
        .species = SPECIES_CAPFALCO,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_SHADOW_BALL, MOVE_ROCK_SLIDE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MARIGUANA_2] = {
        .species = SPECIES_MARIGUANA,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_RAZOR_LEAF, MOVE_SLEEP_POWDER, MOVE_REFLECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_TONCRETE_2] = {
        .species = SPECIES_TONCRETE,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_COUNTER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SMOGAS_2] = {
        .species = SPECIES_SMOGAS,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SLUDGE_BOMB, MOVE_MOONLIGHT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PECHA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PORYGON_2] = {
        .species = SPECIES_PORYGON_Z,//TO REMOVE
        .moves = {MOVE_TRI_ATTACK, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_1
    },
    [FRONTIER_MON_KUKLAN_2] = {
        .species = SPECIES_KUKLAN,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_REFLECT, MOVE_RECOVER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_WAILMER_2] = {
        .species = SPECIES_WAILMER,
        .moves = {MOVE_WATER_SPOUT, MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ALIEON_2] = {
        .species = SPECIES_ALIEON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_GRASS_WHISTLE, MOVE_SYNTHESIS    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REWINDLE_2] = {
        .species = SPECIES_REWINDLE,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_TAIL_GLOW    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DNDICE_2] = {
        .species = SPECIES_DNDICE,
        .moves = {MOVE_SILVER_WIND, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_GIGA_DRAIN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GROVINE_2] = {
        .species = SPECIES_GROVINE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SKOMAD_2] = {
        .species = SPECIES_SKOMAD,
        .moves = {MOVE_FLAMETHROWER, MOVE_SLASH, MOVE_ANCIENT_POWER, MOVE_DRAGON_RAGE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SPLOOGER_2] = {
        .species = SPECIES_SPLOOGER,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAPID_SPIN, MOVE_PROTECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DUSHROOM_2] = {
        .species = SPECIES_DUSHROOM,
        .moves = {MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_DIG, MOVE_DOUBLE_TEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FURBOIS_2] = {
        .species = SPECIES_FURBOIS,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_FORESIGHT, MOVE_SCARY_FACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BEEGMIKE_2] = {
        .species = SPECIES_DOUBLADE,
        .moves = {MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK, MOVE_SACRED_SWORD, MOVE_GYRO_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_EVIOLITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ZACTORY_2] = {
        .species = SPECIES_ZACTORY,
        .moves = {MOVE_GIGA_DRAIN, MOVE_BODY_SLAM, MOVE_GRASS_WHISTLE, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_RIGAMORT_2] = {
        .species = SPECIES_RIGAMORT,
        .moves = {MOVE_FLAMETHROWER, MOVE_CRUSH_CLAW, MOVE_BODY_SLAM, MOVE_SMOKESCREEN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_JEWIS_2] = {
        .species = SPECIES_JEWIS,
        .moves = {MOVE_MEGA_KICK, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE, MOVE_DIG    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BLURABRAIN_2] = {
        .species = SPECIES_BLURABRAIN,
        .moves = {MOVE_RETURN, MOVE_SWEET_KISS, MOVE_AERIAL_ACE, MOVE_YAWN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GAHBLIN_2] = {
        .species = SPECIES_GAHBLIN,
        .moves = {MOVE_PERISH_SONG, MOVE_MEAN_LOOK, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FIRANT_2] = {
        .species = SPECIES_FIRANT,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_CAREFUL,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PURRSOUR_2] = {
        .species = SPECIES_PURRSOUR,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_SEISMIC_TOSS, MOVE_WISH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PURRTANG_2] = {
        .species = SPECIES_PURRTANG,
        .moves = {MOVE_THUNDERBOLT, MOVE_ATTRACT, MOVE_CHARM, MOVE_WISH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_VERYBERRY_2] = {
        .species = SPECIES_VERYBERRY,
        .moves = {MOVE_GIGA_DRAIN, MOVE_CRUSH_CLAW, MOVE_SCREECH, MOVE_ROCK_TOMB    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CHEFURE_2] = {
        .species = SPECIES_CHEFURE,
        .moves = {MOVE_FLAMETHROWER, MOVE_SKY_UPPERCUT, MOVE_SLASH, MOVE_SAND_ATTACK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BAITERROR_2] = {
        .species = SPECIES_BAITERROR,
        .moves = {MOVE_MUDDY_WATER, MOVE_EARTHQUAKE, MOVE_MUD_SLAP, MOVE_PROTECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DEBEGUCK_2] = {
        .species = SPECIES_DEBEGUCK,
        .moves = {MOVE_FLAMETHROWER, MOVE_BODY_SLAM, MOVE_DOUBLE_KICK, MOVE_DOUBLE_TEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BARIREEFER_2] = {
        .species = SPECIES_BARIREEFER,//TO REMOVE
        .moves = {MOVE_LIQUIDATION, MOVE_PLAY_ROUGH, MOVE_ICE_PUNCH, MOVE_AQUA_JET},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
		.abilitynum = ABILITY_2
    },
    [FRONTIER_MON_BREADDIE_2] = {
        .species = SPECIES_BREADDIE,//TO REMOVE
        .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_WOOD_HAMMER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.abilitynum = ABILITY_2
    },
    [FRONTIER_MON_SUGMABALLS_2] = {
        .species = SPECIES_SUGMABALLS,
        .moves = {MOVE_OVERHEAT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BODY_SLAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FROSHUND_2] = {
        .species = SPECIES_FROSHUND,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_SCARY_FACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MORGHOST_2] = {
        .species = SPECIES_MORGHOST,
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_BODY_SLAM, MOVE_HAIL    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GAWDAMSTER_2] = {
        .species = SPECIES_GAWDAMSTER_ALOLAN,
        .moves = {MOVE_SWORDS_DANCE, MOVE_CRUNCH, MOVE_SUCKER_PUNCH, MOVE_FRUSTRATION},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CINAMANCER_2] = {
        .species = SPECIES_CINAMANCER,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN, MOVE_STUN_SPORE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DEEPFRIEON_2] = {
        .species = SPECIES_DEEPFRIEON,
        .moves = {MOVE_TRICK, MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_FOLLOW_ME    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MOABY_2] = {
        .species = SPECIES_MOABY,
        .moves = {MOVE_ICE_BEAM, MOVE_ROCK_TOMB, MOVE_BITE, MOVE_SHADOW_BALL    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_WOOPTRET_2] = {
        .species = SPECIES_WOOPTRET,
        .moves = {MOVE_RETURN, MOVE_REST, MOVE_THUNDER_WAVE, MOVE_DRAGON_DANCE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FURRLEAD_2] = {
        .species = SPECIES_FURRLEAD,
        .moves = {MOVE_CRUNCH, MOVE_SHADOW_BALL, MOVE_FRUSTRATION, MOVE_SCARY_FACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ZEPPUR_2] = {
        .species = SPECIES_ZEPPUR,
        .moves = {MOVE_TRICK, MOVE_FRUSTRATION, MOVE_THUNDER_WAVE, MOVE_SAND_ATTACK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CASTFORM_2] = {
        .species = SPECIES_CASTFORM,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_WATER_PULSE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_TIPSYRAMID_2] = {
        .species = SPECIES_TIPSYRAMID,
        .moves = {MOVE_FRUSTRATION, MOVE_DRAGON_DANCE, MOVE_CRUNCH, MOVE_SCARY_FACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HARASTUR_2] = {
        .species = SPECIES_HARASTUR,
        .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC, MOVE_BODY_SLAM, MOVE_SCARY_FACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_COSMIE_2] = {
        .species = SPECIES_COSMIE,
        .moves = {MOVE_FAKE_TEARS, MOVE_SING, MOVE_DREAM_EATER, MOVE_BRICK_BREAK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_WRECKFAST_2] = {
        .species = SPECIES_WRECKFAST,
        .moves = {MOVE_GIGA_DRAIN, MOVE_GRASS_WHISTLE, MOVE_GROWTH, MOVE_DOUBLE_TEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CHIMECHO_2] = {
        .species = SPECIES_CHIMECHO,
        .moves = {MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEAL_BELL    },
        .itemTableId = BATTLE_FRONTIER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHAWT_2] = {
        .species = SPECIES_SHAWT,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_GUILLOTINE, MOVE_SCREECH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DABBEATLE_2] = {
        .species = SPECIES_DABBEATLE,
        .moves = {MOVE_REVENGE, MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_DESTINY_BOND    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PINATI_2] = {
        .species = SPECIES_PINATI,
        .moves = {MOVE_CRUSH_CLAW, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE, MOVE_SCREECH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_NOCTRUM_2] = {
        .species = SPECIES_NOCTRUM,
        .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_AERIAL_ACE, MOVE_PROTECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_XAPP_2] = {
        .species = SPECIES_XAPP,
        .moves = {MOVE_FACADE, MOVE_AERIAL_ACE, MOVE_PURSUIT, MOVE_DOUBLE_TEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GALVATRON_2] = {
        .species = SPECIES_GALVATRON,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_ROAR, MOVE_PROTECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BANANACE_2] = {
        .species = SPECIES_BANANACE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_STUN_SPORE, MOVE_REST, MOVE_AMNESIA    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BEVRAGON_2] = {
        .species = SPECIES_BEVRAGON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_GLARE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GOREFIELD_2] = {
        .species = SPECIES_GOREFIELD,
        .moves = {MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_ROAR, MOVE_FAKE_OUT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SWAMPOGRE_2] = {
        .species = SPECIES_SWAMPOGRE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FRUSTRATION, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_KECLEON_2] = {
        .species = SPECIES_KECLEON,
        .moves = {MOVE_TRICK, MOVE_BRICK_BREAK, MOVE_SHADOW_BALL, MOVE_SKILL_SWAP    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DOODOOBOB_2] = {
        .species = SPECIES_DOODOOBOB,
        .moves = {MOVE_CRUSH_CLAW, MOVE_REVERSAL, MOVE_ENDURE, MOVE_SHADOW_BALL    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SURTYUR_2] = {
        .species = SPECIES_SURTYUR,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_COSMIC_POWER, MOVE_CALM_MIND    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GANESH_2] = {
        .species = SPECIES_GANESH,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_COSMIC_POWER, MOVE_OVERHEAT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_JADOUG_2] = {
        .species = SPECIES_JADOUG,
        .moves = {MOVE_PSYCHIC, MOVE_FAINT_ATTACK, MOVE_AERIAL_ACE, MOVE_REFLECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_TOYUTA_2] = {
        .species = SPECIES_PALOSSAND,
        .moves = {MOVE_SHORE_UP, MOVE_EARTH_POWER, MOVE_SHADOW_BALL, MOVE_AMNESIA},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SENKETULA_2] = {
        .species = SPECIES_SENKETULA,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_PSYCHIC, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_UNJOY_2] = {
        .species = SPECIES_UNJOY,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_SHADOW_BALL, MOVE_DOUBLE_TEAM, MOVE_SOFT_BOILED    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MONGELORD_2] = {
        .species = SPECIES_MONGELORD,
        .moves = {MOVE_HORN_DRILL, MOVE_MEGAHORN, MOVE_SLEEP_TALK, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_NIGHTWAVE_2] = {
        .species = SPECIES_NIGHTWAVE,
        .moves = {MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN, MOVE_DOUBLE_TEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SCRAPCHAT_2] = {
        .species = SPECIES_SCRAPCHAT,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BODY_SLAM, MOVE_ROAR    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ANIVENOM_2] = {
        .species = SPECIES_ANIVENOM,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_AIR_CUTTER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SUGREIVOUS_2] = {
        .species = SPECIES_SUGREIVOUS,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_TOMB, MOVE_OVERHEAT, MOVE_BULK_UP    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REPLITOR_2] = {
        .species = SPECIES_REPLITOR,
        .moves = {MOVE_MEGA_KICK, MOVE_BRICK_BREAK, MOVE_FORESIGHT, MOVE_ROCK_TOMB    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BIREMIC_2] = {
        .species = SPECIES_BIREMIC,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_MACH_PUNCH, MOVE_DETECT, MOVE_COUNTER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BURNANT_2] = {
        .species = SPECIES_BURNANT,
        .moves = {MOVE_PSYCHIC, MOVE_CRUNCH, MOVE_BATON_PASS, MOVE_AGILITY    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_STRAIDIRT_2] = {
        .species = SPECIES_STRAIDIRT,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SEISMIC_TOSS, MOVE_ROCK_SLIDE, MOVE_COUNTER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_TOCKTOWER_2] = {
        .species = SPECIES_TOCKTOWER,
        .moves = {MOVE_SHADOW_BALL, MOVE_FRUSTRATION, MOVE_SCREECH, MOVE_WILL_O_WISP    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_NINJASK_2] = {
        .species = SPECIES_NINJASK,
        .moves = {MOVE_SLASH, MOVE_SHADOW_BALL, MOVE_SWORDS_DANCE, MOVE_BATON_PASS    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ARACKNE_2] = {
        .species = SPECIES_ARACKNE,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_GIGA_DRAIN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SMITNION_2] = {
        .species = SPECIES_SMITNION,
        .moves = {MOVE_CRUSH_CLAW, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ERRORINE_2] = {
        .species = SPECIES_ERRORINE,
        .moves = {MOVE_EARTHQUAKE, MOVE_ERUPTION, MOVE_BODY_SLAM, MOVE_SCARY_FACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHARKEG_2] = {
        .species = SPECIES_SHARKEG,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_SURF    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_TROPIUS_2] = {
        .species = SPECIES_TROPIUS,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_BODY_SLAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DEATHCUBED_2] = {
        .species = SPECIES_DEATHCUBED,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_THUNDER_WAVE, MOVE_METAL_SOUND    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FLOOTICORN_2] = {
        .species = SPECIES_FLOOTICORN,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_CONFUSE_RAY    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GNORB_2] = {
        .species = SPECIES_GNORB,
        .moves = {MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ABSOL_2] = {
        .species = SPECIES_ABSOL,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_AERIAL_ACE, MOVE_IRON_TAIL    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CARNIGORE_2] = {
        .species = SPECIES_CARNIGORE,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_BODY_SLAM, MOVE_COUNTER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_NONONMON_2] = {
        .species = SPECIES_NONONMON,
        .moves = {MOVE_GUILLOTINE, MOVE_FRUSTRATION, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FAZEAGLE_2] = {
        .species = SPECIES_FAZEAGLE,//NOT MEGA
        .moves = {MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_ROOST, MOVE_TAILWIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_1
    },
    [FRONTIER_MON_SELTCLAW_2] = {
        .species = SPECIES_SELTCLAW,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HELLAPHANT_2] = {
        .species = SPECIES_HELLAPHANT,
        .moves = {MOVE_OVERHEAT, MOVE_BODY_SLAM, MOVE_SMOKESCREEN, MOVE_PROTECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CREEPA_2] = {
        .species = SPECIES_CREEPA,
        .moves = {MOVE_GUILLOTINE, MOVE_ROCK_TOMB, MOVE_FLAIL, MOVE_ENDURE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ACONEGGS_2] = {
        .species = SPECIES_ACONEGGS,
        .moves = {MOVE_MEGA_KICK, MOVE_TEETER_DANCE, MOVE_FAINT_ATTACK, MOVE_SANDSTORM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SEAWEE_2] = {
        .species = SPECIES_SEAWEE,
        .moves = {MOVE_SOLAR_BEAM, MOVE_ATTRACT, MOVE_SUNNY_DAY, MOVE_SYNTHESIS    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SYSTANIC_2] = {
        .species = SPECIES_SYSTANIC,
        .moves = {MOVE_OCTAZOOKA, MOVE_FIRE_BLAST, MOVE_THUNDER_WAVE, MOVE_MUD_SLAP    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GLOBNAUT_2] = {
        .species = SPECIES_GLOBNAUT,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_CRUNCH, MOVE_BODY_SLAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_THAUMNAR_2] = {
        .species = SPECIES_THAUMNAR,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_PSYCHIC, MOVE_BODY_SLAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GALACNAR_2] = {
        .species = SPECIES_GALACNAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_AMNESIA, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GAISER_2] = {
        .species = SPECIES_GAISER,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_ICE_BEAM, MOVE_PROTECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BIGOBEET_2] = {
        .species = SPECIES_BIGOBEET,
        .moves = {MOVE_SLASH, MOVE_ROCK_SLIDE, MOVE_FLAIL, MOVE_ENDURE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_RENAGEDE_2] = {
        .species = SPECIES_RENAGEDE,
        .moves = {MOVE_BRICK_BREAK, MOVE_HYPNOSIS, MOVE_REST, MOVE_BELLY_DRUM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CHUXKUSH_2] = {
        .species = SPECIES_CHUXKUSH,//TO REMOVE
        .moves = {MOVE_SWORDS_DANCE, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK, MOVE_BUG_BITE},
        .itemTableId = BATTLE_FRONTIER_ITEM_EVIOLITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_1
    },
    [FRONTIER_MON_ITRIMID_2] = {
        .species = SPECIES_ITRIMID,
        .moves = {MOVE_GUILLOTINE, MOVE_SWORDS_DANCE, MOVE_FLAIL, MOVE_ENDURE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_TOASTEM_2] = {
        .species = SPECIES_TOASTEM,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_MUD_SLAP, MOVE_SWAGGER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FRIDEGE_2] = {
        .species = SPECIES_FRIDEGE,
        .moves = {MOVE_DIVE, MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_PROTECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GHOMA_1] = {
        .species = SPECIES_GHOMA,
        .moves = {MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_REVERSAL, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LONKEST_1] = {
        .species = SPECIES_LONKEST,
        .moves = {MOVE_PSYCHIC, MOVE_HI_JUMP_KICK, MOVE_CALM_MIND, MOVE_BATON_PASS    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LILREAPER_1] = {
        .species = SPECIES_LILREAPER,
        .moves = {MOVE_PAIN_SPLIT, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CHAPSNAT_1] = {
        .species = SPECIES_CHAPSNAT,
        .moves = {MOVE_DRILL_PECK, MOVE_TRI_ATTACK, MOVE_FACADE, MOVE_MUD_SLAP    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHARP_BEAK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DABBUG_1] = {
        .species = SPECIES_DABBUG,
        .moves = {MOVE_MEGA_KICK, MOVE_SMELLING_SALT, MOVE_THUNDER_WAVE, MOVE_ROAR    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REPSAC_1] = {
        .species = SPECIES_REPSAC,
        .moves = {MOVE_ICE_BEAM, MOVE_FAKE_OUT, MOVE_LOVELY_KISS, MOVE_ATTRACT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HUGEMAN_1] = {
        .species = SPECIES_HUGEMAN,
        .moves = {MOVE_WILL_O_WISP, MOVE_SEISMIC_TOSS, MOVE_PAIN_SPLIT, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_EVIOLITE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PARANGELIA_1] = {
        .species = SPECIES_PARANGELIA,
        .moves = {MOVE_SWORDS_DANCE, MOVE_BRAVE_BIRD, MOVE_JUMP_KICK, MOVE_RETURN},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ALIEN_1] = {
        .species = SPECIES_ALIEN,
        .moves = {MOVE_PSYCHIC, MOVE_MAGICAL_LEAF, MOVE_FAKE_OUT, MOVE_REFLECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_OUROBOLET_1] = {
        .species = SPECIES_OUROBOLET,
        .moves = {MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_ATTRACT, MOVE_THUNDER_WAVE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DOUBLINKER_1] = {
        .species = SPECIES_DOUBLINKER,
        .moves = {MOVE_SKY_UPPERCUT, MOVE_MACH_PUNCH, MOVE_HEADBUTT, MOVE_COUNTER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_WAILE_1] = {
        .species = SPECIES_WAILE,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE, MOVE_LIGHT_SCREEN, MOVE_SPIKES    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SPLASHICOOT_1] = {
        .species = SPECIES_SPLASHICOOT,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_AMNESIA, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GOALEM_1] = {
        .species = SPECIES_GOALEM,
        .moves = {MOVE_DRILL_PECK, MOVE_NIGHT_SHADE, MOVE_WISH, MOVE_FUTURE_SIGHT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHARP_BEAK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LEGEARTH_1] = {
        .species = SPECIES_LEGEARTH,
        .moves = {MOVE_STEEL_WING, MOVE_AIR_CUTTER, MOVE_COUNTER, MOVE_AGILITY    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_AMAZULK_1] = {
        .species = SPECIES_AMAZULK,
        .moves = {MOVE_BONEMERANG, MOVE_ROCK_SLIDE, MOVE_ICY_WIND, MOVE_HEADBUTT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_THICK_CLUB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_AREALGUN_1] = {
        .species = SPECIES_AREALGUN,
        .moves = {MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_COUNTER, MOVE_MUD_SLAP    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GOTHOT_1] = {
        .species = SPECIES_GOTHOT,
        .moves = {MOVE_METRONOME, MOVE_DOUBLE_TEAM, MOVE_REFLECT, MOVE_FOLLOW_ME    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BRAVE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GANGBEATS_1] = {
        .species = SPECIES_GANGBEATS,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_FAKE_OUT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DISHEATS_1] = {
        .species = SPECIES_DISHEATS,
        .moves = {MOVE_THUNDERBOLT, MOVE_SURF, MOVE_GRASS_KNOT, MOVE_NUZZLE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = 2
    },
    [FRONTIER_MON_TITENIC_1] = {
        .species = SPECIES_TITENIC,
        .moves = {MOVE_ICE_BEAM, MOVE_ICY_WIND, MOVE_HEADBUTT, MOVE_FAKE_OUT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_NEVER_MELT_ICE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_AUXILISK_1] = {
        .species = SPECIES_AUXILISK,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH, MOVE_QUICK_ATTACK, MOVE_ROAR    },
        .itemTableId = BATTLE_FRONTIER_ITEM_MAGNET,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GANJAZE_1] = {
        .species = SPECIES_GANJAZE,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_PETAL_DANCE, MOVE_MOONLIGHT, MOVE_AROMATHERAPY    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MARLEYZARD_1] = {
        .species = SPECIES_MARLEYZARD,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_SWEET_SCENT, MOVE_SYNTHESIS    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ENDERMON_1] = {
        .species = SPECIES_ENDERMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_SWIFT, MOVE_LIGHT_SCREEN, MOVE_PROTECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GIGALPHA_1] = {
        .species = SPECIES_GIGALPHA,
        .moves = {MOVE_BOOMBURST, MOVE_ICE_BEAM, MOVE_FIRE_BLAST, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHADEKU_1] = {
        .species = SPECIES_SHADEKU,
        .moves = {MOVE_GIGA_DRAIN, MOVE_FAINT_ATTACK, MOVE_QUICK_ATTACK, MOVE_FAKE_OUT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_MIRACLE_SEED,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ELECHAIR_1] = {
        .species = SPECIES_ELECHAIR,
        .moves = {MOVE_ICE_BEAM, MOVE_CRUNCH, MOVE_HAIL, MOVE_PROTECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_QUACKNATOR_1] = {
        .species = SPECIES_QUACKNATOR,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN, MOVE_SCALD},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHAPOOPYZ_1] = {
        .species = SPECIES_SHAPOOPYZ,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_HYPNOSIS    },
        .itemTableId = BATTLE_FRONTIER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LOSSILITH_1] = {
        .species = SPECIES_LOSSILITH,
        .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_STONE_EDGE, MOVE_STEALTH_ROCK},
        .itemTableId = BATTLE_FRONTIER_ITEM_WEAKNESS_POLICY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
		.abilitynum = ABILITY_1
    },
    [FRONTIER_MON_YEESAUR_1] = {
        .species = SPECIES_YEESAUR,//EVIOLITE
        .moves = {MOVE_STEALTH_ROCK, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_BLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_EVIOLITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
		.abilitynum = ABILITY_2
    },
    [FRONTIER_MON_KUKLOPS_1] = {
        .species = SPECIES_KUKLOPS,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_WAVE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BIPHARMA_1] = {
        .species = SPECIES_BIPHARMA,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_SMOKESCREEN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_TROLOLO_1] = {
        .species = SPECIES_TROLOLO,
        .moves = {MOVE_DIZZY_PUNCH, MOVE_BRICK_BREAK, MOVE_COUNTER, MOVE_FAKE_OUT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_KRAFPUNK_1] = {
        .species = SPECIES_KRAFPUNK,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_BRICK_BREAK, MOVE_LIGHT_SCREEN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GROX_1] = {
        .species = SPECIES_GROX,
        .moves = {MOVE_EARTHQUAKE, MOVE_THRASH, MOVE_SWAGGER, MOVE_FACADE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHEMUE_1] = {
        .species = SPECIES_SHEMUE,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_HEADBUTT, MOVE_ICE_PUNCH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GOOBLAN_1] = {
        .species = SPECIES_GOOBLAN,
        .moves = {MOVE_PSYCHIC, MOVE_BRICK_BREAK, MOVE_AMNESIA, MOVE_ATTRACT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PANTS_1] = {
        .species = SPECIES_PANTS,
        .moves = {MOVE_FACADE, MOVE_SHADOW_BALL, MOVE_COUNTER, MOVE_MILK_DRINK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_UNSC_1] = {
        .species = SPECIES_UNSC,
        .moves = {MOVE_DRAGON_CLAW, MOVE_AERIAL_ACE, MOVE_REFRESH, MOVE_BODY_SLAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_EBOLABLE_1] = {
        .species = SPECIES_EBOLABLE,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_DOUBLE_KICK, MOVE_BODY_SLAM, MOVE_COUNTER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_OOGABOOGA_1] = {
        .species = SPECIES_OOGABOOGA,
        .moves = {MOVE_HORN_DRILL, MOVE_DOUBLE_KICK, MOVE_BODY_SLAM, MOVE_COUNTER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ENDMYSUFF_1] = {
        .species = SPECIES_ENDMYSUFF,
        .moves = {MOVE_FLAMETHROWER, MOVE_SMOKESCREEN, MOVE_BRICK_BREAK, MOVE_BARRIER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_RAWST_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_Pyrabass_1] = {
        .species = SPECIES_Pyrabass,
        .moves = {MOVE_GIGA_DRAIN, MOVE_ROCK_SLIDE, MOVE_BARRIER, MOVE_CONFUSE_RAY    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_XENOTOPS_1] = {
        .species = SPECIES_XENOTOPS,
        .moves = {MOVE_EARTHQUAKE, MOVE_X_SCISSOR, MOVE_STEALTH_ROCK, MOVE_STONE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PERRIPUS_1] = {
        .species = SPECIES_PERRIPUS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DIG, MOVE_BRICK_BREAK, MOVE_LIGHT_SCREEN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LONKY_1] = {
        .species = SPECIES_LONKY,
        .moves = {MOVE_FLAMETHROWER, MOVE_DOUBLE_KICK, MOVE_QUICK_ATTACK, MOVE_PROTECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHARCOAL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MUK_1] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_BODY_SLAM, MOVE_SCREECH, MOVE_MINIMIZE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_POISON_BARB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SANS_1] = {
         .species = SPECIES_SANS,//MEGA
        .moves = {MOVE_SLUDGE_BOMB, MOVE_HEX, MOVE_WILL_O_WISP, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_SANSITE,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BACID_1] = {
        .species = SPECIES_BACID,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_THUNDER_WAVE, MOVE_ATTRACT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_MAGNET,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_NUGGIE_1] = {
        .species = SPECIES_NUGGIE,
        .moves = {MOVE_METAL_CLAW, MOVE_AERIAL_ACE, MOVE_COUNTER, MOVE_QUICK_ATTACK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HAPPYMAUL_1] = {//MEGA
        .species = SPECIES_HAPPYMAUL,
        .moves = {MOVE_ARM_THRUST, MOVE_PIN_MISSILE, MOVE_ROCK_BLAST, MOVE_BULLET_SEED},
        .itemTableId = BATTLE_FRONTIER_ITEM_HERACRONITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MAURRICE_1] = {
        .species = SPECIES_MAURRICE,
        .moves = {MOVE_SWORDS_DANCE, MOVE_FACADE, MOVE_PLAY_ROUGH, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MINIMAL_1] = {
        .species = SPECIES_MINIMAL,
        .moves = {MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_COUNTER, MOVE_WILL_O_WISP    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_COFFICRAB_1] = {
        .species = SPECIES_COFFICRAB,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_SWAGGER, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HEBURROW_1] = {
        .species = SPECIES_HEBURROW,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWAGGER, MOVE_PSYCH_UP    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_WAILORD_1] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_SURF, MOVE_ICY_WIND, MOVE_BODY_SLAM, MOVE_ROAR    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SAWSBAWS_1] = {
        .species = SPECIES_SAWSBAWS,
        .moves = {MOVE_WILL_O_WISP, MOVE_SOLAR_BEAM, MOVE_FIRE_BLAST, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAT_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = 2
    },
    [FRONTIER_MON_LONGIFER_1] = {
        .species = SPECIES_LONGIFER,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_SCARY_FACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MCCHICKY_1] = {
        .species = SPECIES_MCCHICKY,
        .moves = {MOVE_ROLLOUT, MOVE_DEFENSE_CURL, MOVE_SLEEP_TALK, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BRAVE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HOLOCAST_1] = {
        .species = SPECIES_HOLOCAST,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_BREATH, MOVE_ROCK_TOMB, MOVE_ROAR    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FREDDIFER_1] = {
        .species = SPECIES_FREDDIFER,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_ICY_WIND, MOVE_BARRIER, MOVE_CONFUSE_RAY    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_USARMY_1] = {
        .species = SPECIES_USARMY,
        .moves = {MOVE_ANCIENT_POWER, MOVE_DRAGON_BREATH, MOVE_AERIAL_ACE, MOVE_ROAR    },
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CRABERAVE_1] = {
        .species = SPECIES_CRABERAVE,
        .moves = {MOVE_TRI_ATTACK, MOVE_ICE_BEAM, MOVE_TRICK_ROOM, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_EVIOLITE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_THATSFURRY_1] = {
        .species = SPECIES_THATSFURRY,//MEGA
        .moves = {MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_THATSFURRYITE,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_1
    },
    [FRONTIER_MON_CIPHRON_1] = {
        .species = SPECIES_CIPHRON,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_LIGHT_SCREEN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BICYELION_1] = {
        .species = SPECIES_BICYELION,
        .moves = {MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE, MOVE_RECOVER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GALADRAKE_1] = {
        .species = SPECIES_GALADRAKE,
        .moves = {MOVE_EARTHQUAKE, MOVE_STEEL_WING, MOVE_FAINT_ATTACK, MOVE_FACADE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_YGGDRACON_1] = {
        .species = SPECIES_YGGDRACON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_SLEEP_POWDER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_STRESSEON_1] = {
        .species = SPECIES_STRESSEON,
        .moves = {MOVE_SURF, MOVE_ROAR, MOVE_BITE, MOVE_QUICK_ATTACK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_XOKKEON_1] = {
        .species = SPECIES_XOKKEON,
        .moves = {MOVE_VOLT_SWITCH, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BABEYON_1] = {
        .species = SPECIES_BABEYON,
        .moves = {MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_BITE, MOVE_SAND_ATTACK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_RAMMET_1] = {
        .species = SPECIES_RAMMET,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_LIGHT_SCREEN, MOVE_SYNTHESIS    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DONT_1] = {
        .species = SPECIES_DONT,
        .moves = {MOVE_PSYCHIC, MOVE_CHARM, MOVE_CALM_MIND, MOVE_BATON_PASS    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LEAVE_1] = {
        .species = SPECIES_LEAVE,
        .moves = {MOVE_CONFUSE_RAY, MOVE_FAINT_ATTACK, MOVE_DOUBLE_TEAM, MOVE_BATON_PASS    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SPERIATHON_1] = {
        .species = SPECIES_SPERIATHON,
        .moves = {MOVE_AURA_SPHERE, MOVE_DARK_PULSE, MOVE_RAPID_SPIN, MOVE_WATER_PULSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLASTOISINITE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_TEED_1] = {
        .species = SPECIES_TEED,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_AERIAL_ACE, MOVE_ROAR    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MURPHIRE_1] = {
        .species = SPECIES_MURPHIRE,
        .moves = {MOVE_IRON_TAIL, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ROAR    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GOURMASTER_1] = {
        .species = SPECIES_GOURMASTER,
        .moves = {MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_DOUBLE_KICK, MOVE_ROAR    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PHASMORGAN_1] = {
        .species = SPECIES_PHASMORGAN,
        .moves = {MOVE_BLIZZARD, MOVE_HAIL, MOVE_YAWN, MOVE_PROTECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_INCREDALEN_1] = {
        .species = SPECIES_INCREDALEN,
        .moves = {MOVE_LEAF_BLADE, MOVE_LEECH_SEED, MOVE_AERIAL_ACE, MOVE_DETECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SKORPYROS_1] = {
        .species = SPECIES_SKORPYROS,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_ROAR, MOVE_SCARY_FACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_RICKLE_1] = {
        .species = SPECIES_RICKLE,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_SMOKESCREEN, MOVE_ROAR    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_JEBONY_1] = {
        .species = SPECIES_JEBONY,
        .moves = {MOVE_SURF, MOVE_ATTRACT, MOVE_CONFUSE_RAY, MOVE_SING    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CROBAT_1] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_BITE, MOVE_ASTONISH, MOVE_SCREECH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BAITANK_1] = {
        .species = SPECIES_BAITANK,
        .moves = {MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_REST, MOVE_CURSE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_KROLLER_1] = {
        .species = SPECIES_KROLLER,
        .moves = {MOVE_RETURN, MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_DRAGON_DANCE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHEPEIRD_1] = {
        .species = SPECIES_SHEPEIRD,
        .moves = {MOVE_FACADE, MOVE_SHADOW_BALL, MOVE_ATTRACT, MOVE_DOUBLE_TEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DISMALO_1] = {
        .species = SPECIES_DISMALO,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_BREATH, MOVE_ICY_WIND, MOVE_ATTRACT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REAPCHARGE_1] = {
        .species = SPECIES_REAPCHARGE,
        .moves = {MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_SING, MOVE_SOFT_BOILED    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_NUTVALANCHE_1] = {
        .species = SPECIES_NUTVALANCHE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICY_WIND, MOVE_RECOVER, MOVE_MIRROR_COAT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_OPTICULU_1] = {
        .species = SPECIES_OPTICULU,
        .moves = {MOVE_FLAMETHROWER, MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_BODY_SLAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DRUNKABUS_1] = {
        .species = SPECIES_KROOKODILE,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_ROCKY_HELMET,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HAZETHOTH_1] = {
        .species = SPECIES_HAZETHOTH,
        .moves = {MOVE_METEOR_MASH, MOVE_AERIAL_ACE, MOVE_FACADE, MOVE_LIGHT_SCREEN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_UGADOOBA_1] = {
        .species = SPECIES_UGADOOBA,
        .moves = {MOVE_YAWN, MOVE_BULK_UP, MOVE_SWAGGER, MOVE_AERIAL_ACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GHOMA_2] = {
        .species = SPECIES_GHOMA_ALOLAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LONKEST_2] = {
        .species = SPECIES_LONKEST,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_PSYCHIC, MOVE_FAKE_OUT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_AMAZULK_2] = {
        .species = SPECIES_AMAZULK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_ICY_WIND    },
        .itemTableId = BATTLE_FRONTIER_ITEM_THICK_CLUB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_AREALGUN_2] = {
        .species = SPECIES_AREALGUN,
        .moves = {MOVE_CURSE, MOVE_ATTRACT, MOVE_YAWN, MOVE_ANCIENT_POWER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_SASSY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LILREAPER_2] = {
        .species = SPECIES_LILREAPER,
        .moves = {MOVE_PSYCHIC, MOVE_ATTRACT, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CHAPSNAT_2] = {
        .species = SPECIES_CHAPSNAT,
        .moves = {MOVE_DRILL_PECK, MOVE_TRI_ATTACK, MOVE_ATTRACT, MOVE_PURSUIT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DABBUG_2] = {
        .species = SPECIES_DABBUG,
        .moves = {MOVE_OVERHEAT, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_FACADE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REPSAC_2] = {
        .species = SPECIES_REPSAC,
        .moves = {MOVE_PERISH_SONG, MOVE_MEAN_LOOK, MOVE_LOVELY_KISS, MOVE_PROTECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HUGEMAN_2] = {
        .species = SPECIES_DUSKNOIR,
        .moves = {MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT, MOVE_SHADOW_SNEAK, MOVE_ICE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PARANGELIA_2] = {
        .species = SPECIES_PARANGELIA,
        .moves = {MOVE_DRILL_PECK, MOVE_DOUBLE_EDGE, MOVE_FAINT_ATTACK, MOVE_PROTECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ALIEN_2] = {
        .species = SPECIES_ALIEN,
        .moves = {MOVE_BATON_PASS, MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_PSYCHIC    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_OUROBOLET_2] = {
        .species = SPECIES_OUROBOLET,
        .moves = {MOVE_FLAIL, MOVE_ENDURE, MOVE_THUNDERBOLT, MOVE_SURF    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DOUBLINKER_2] = {
        .species = SPECIES_DOUBLINKER,
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_FOCUS_PUNCH, MOVE_SPORE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_WAILE_2] = {
        .species = SPECIES_WAILE,
        .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_COUNTER, MOVE_PROTECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LEGEARTH_2] = {
        .species = SPECIES_LEGEARTH,
        .moves = {MOVE_SPIKES, MOVE_ROAR, MOVE_DRILL_PECK, MOVE_TOXIC    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SPLASHICOOT_2] = {
        .species = SPECIES_SPLASHICOOT,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_SPARK, MOVE_FUTURE_SIGHT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GOALEM_2] = {
        .species = SPECIES_GOALEM,
        .moves = {MOVE_FLY, MOVE_TOXIC, MOVE_CONFUSE_RAY, MOVE_ATTRACT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GOTHOT_2] = {
        .species = SPECIES_GOTHOT,
        .moves = {MOVE_METEOR_MASH, MOVE_COSMIC_POWER, MOVE_DOUBLE_TEAM, MOVE_FOLLOW_ME    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GANGBEATS_2] = {
        .species = SPECIES_GANGBEATS,
        .moves = {MOVE_CROSS_CHOP, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DISHEATS_2] = {
        .species = SPECIES_DISHEATS_ALOLAN,
        .moves = {MOVE_THUNDERBOLT, MOVE_SURF, MOVE_GRASS_KNOT, MOVE_PSYSHOCK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = 2
    },
    [FRONTIER_MON_TITENIC_2] = {
        .species = SPECIES_TITENIC,
        .moves = {MOVE_BLIZZARD, MOVE_DOUBLE_EDGE, MOVE_ENCORE, MOVE_DISABLE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_AUXILISK_2] = {
        .species = SPECIES_AUXILISK,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_CRUNCH, MOVE_ROAR    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GANJAZE_2] = {
        .species = SPECIES_GANJAZE,
        .moves = {MOVE_INGRAIN, MOVE_DOUBLE_TEAM, MOVE_TOXIC, MOVE_GIGA_DRAIN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MARLEYZARD_2] = {
        .species = SPECIES_MARLEYZARD,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_ATTRACT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_SERIOUS,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ENDERMON_2] = {
        .species = SPECIES_ENDERMON,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_DOUBLE_TEAM, MOVE_SWAGGER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GIGALPHA_2] = {
        .species = SPECIES_GIGALPHA,//TO REMOVE
        .moves = {MOVE_BOOMBURST, MOVE_ICE_BEAM, MOVE_FIRE_BLAST, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHADEKU_2] = {
        .species = SPECIES_SHADEKU,
        .moves = {MOVE_LEECH_SEED, MOVE_DIG, MOVE_DOUBLE_TEAM, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ELECHAIR_2] = {
        .species = SPECIES_ELECHAIR,
        .moves = {MOVE_EXPLOSION, MOVE_ENDURE, MOVE_BODY_SLAM, MOVE_ICY_WIND    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_QUACKNATOR_2] = {
        .species = SPECIES_QUACKNATOR,//TO REMOVE
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN, MOVE_SCALD},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHAPOOPYZ_2] = {
        .species = SPECIES_SHAPOOPYZ,
        .moves = {MOVE_HYPNOSIS, MOVE_NIGHTMARE, MOVE_DREAM_EATER, MOVE_PSYCHIC    },
        .itemTableId = BATTLE_FRONTIER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LOSSILITH_2] = {
        .species = SPECIES_LOSSILITH,//ALOLAN
        .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_STONE_EDGE, MOVE_STEALTH_ROCK},
        .itemTableId = BATTLE_FRONTIER_ITEM_WEAKNESS_POLICY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
		.abilitynum = ABILITY_1
    },
    [FRONTIER_MON_YEESAUR_2] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_STEALTH_ROCK, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_BLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
		.abilitynum = ABILITY_2
    },
    [FRONTIER_MON_KUKLOPS_2] = {
        .species = SPECIES_KUKLOPS,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_THUNDER_WAVE, MOVE_RECOVER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BIPHARMA_2] = {
        .species = SPECIES_BIPHARMA,
        .moves = {MOVE_MEMENTO, MOVE_SLUDGE_BOMB, MOVE_FACADE, MOVE_DESTINY_BOND    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_TROLOLO_2] = {
        .species = SPECIES_TROLOLO,
        .moves = {MOVE_CRUSH_CLAW, MOVE_SHADOW_BALL, MOVE_ATTRACT, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_KRAFPUNK_2] = {
        .species = SPECIES_KRAFPUNK,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_ATTRACT, MOVE_FOCUS_PUNCH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GROX_2] = {
        .species = SPECIES_GROX,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_DOUBLE_TEAM, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHEMUE_2] = {
        .species = SPECIES_SHEMUE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_YAWN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GOOBLAN_2] = {
        .species = SPECIES_GOOBLAN,
        .moves = {MOVE_YAWN, MOVE_THUNDER_WAVE, MOVE_SURF, MOVE_PSYCHIC    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PANTS_2] = {
        .species = SPECIES_PANTS,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SHADOW_BALL, MOVE_ATTRACT, MOVE_THUNDER_WAVE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_UNSC_2] = {
        .species = SPECIES_UNSC,
        .moves = {MOVE_PERISH_SONG, MOVE_DRAGON_BREATH, MOVE_PURSUIT, MOVE_ATTRACT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_EBOLABLE_2] = {
        .species = SPECIES_EBOLABLE,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_OOGABOOGA_2] = {
        .species = SPECIES_OOGABOOGA,
        .moves = {MOVE_MEGA_KICK, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ENDMYSUFF_2] = {
        .species = SPECIES_ENDMYSUFF,
        .moves = {MOVE_FIRE_BLAST, MOVE_SMOKESCREEN, MOVE_THUNDER_PUNCH, MOVE_CONFUSE_RAY    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_Pyrabass_2] = {
        .species = SPECIES_Pyrabass,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_SWAGGER, MOVE_PSYCH_UP    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_XENOTOPS_2] = {
        .species = SPECIES_ARCHEOPS,
        .moves = {MOVE_STEALTH_ROCK, MOVE_HEAD_SMASH, MOVE_ENDEAVOR, MOVE_TAUNT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PERRIPUS_2] = {
        .species = SPECIES_PERRIPUS,
        .moves = {MOVE_CROSS_CHOP, MOVE_SURF, MOVE_SWAGGER, MOVE_PSYCH_UP    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LONKY_2] = {
        .species = SPECIES_LONKY,
        .moves = {MOVE_FIRE_BLAST, MOVE_BOUNCE, MOVE_DOUBLE_TEAM, MOVE_ATTRACT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MUK_2] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_CURSE, MOVE_REST, MOVE_SLUDGE_BOMB, MOVE_DYNAMIC_PUNCH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SANS_2] = {
        .species = SPECIES_SANS,//NOT MEGA
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_PSYCHIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BACID_2] = {
        .species = SPECIES_BACID,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_FOCUS_PUNCH, MOVE_THUNDER_WAVE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_NUGGIE_2] = {
        .species = SPECIES_NUGGIE,
        .moves = {MOVE_SILVER_WIND, MOVE_STEEL_WING, MOVE_SWORDS_DANCE, MOVE_LIGHT_SCREEN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HAPPYMAUL_2] = {//NOT MEGA
        .species = SPECIES_HAPPYMAUL,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MAURRICE_2] = {
        .species = SPECIES_MAURRICE,//TO REMOVE
        .moves = {MOVE_SWORDS_DANCE, MOVE_FACADE, MOVE_PLAY_ROUGH, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MINIMAL_2] = {
        .species = SPECIES_MINIMAL,
        .moves = {MOVE_FIRE_BLAST, MOVE_CRUNCH, MOVE_ROAR, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_COFFICRAB_2] = {
        .species = SPECIES_COFFICRAB,
        .moves = {MOVE_FLAIL, MOVE_ENDURE, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HEBURROW_2] = {
        .species = SPECIES_HEBURROW,
        .moves = {MOVE_PSYCHIC, MOVE_EARTHQUAKE, MOVE_DOUBLE_TEAM, MOVE_COSMIC_POWER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_WAILORD_2] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_REST, MOVE_CURSE, MOVE_AMNESIA    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SAWSBAWS_2] = {
        .species = SPECIES_SAWSBAWS_ALOLAN,
        .moves = {MOVE_AURORA_VEIL, MOVE_MOONBLAST, MOVE_ICE_BEAM, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_ICY_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = 2
    },
    [FRONTIER_MON_LONGIFER_2] = {
        .species = SPECIES_LONGIFER,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_BULK_UP, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MCCHICKY_2] = {
        .species = SPECIES_MCCHICKY,
        .moves = {MOVE_SANDSTORM, MOVE_DIG, MOVE_FLASH, MOVE_DOUBLE_TEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_CAREFUL,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HOLOCAST_2] = {
        .species = SPECIES_HOLOCAST,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_BREATH, MOVE_SANDSTORM, MOVE_BLOCK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FREDDIFER_2] = {
        .species = SPECIES_FREDDIFER,
        .moves = {MOVE_TOXIC, MOVE_GIGA_DRAIN, MOVE_CONFUSE_RAY, MOVE_SURF    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_USARMY_2] = {
        .species = SPECIES_USARMY,
        .moves = {MOVE_HYPER_BEAM, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ANCIENT_POWER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CRABERAVE_2] = {
        .species = SPECIES_PORYGON_Z,//
        .moves = {MOVE_TRI_ATTACK, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_1
    },
    [FRONTIER_MON_THATSFURRY_2] = {
        .species = SPECIES_GALLADE,//MEGA
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ZEN_HEADBUTT, MOVE_LEAF_BLADE, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_GALLADITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CIPHRON_2] = {
        .species = SPECIES_CIPHRON,
        .moves = {MOVE_RETURN, MOVE_CURSE, MOVE_SLEEP_POWDER, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BICYELION_2] = {
        .species = SPECIES_BICYELION,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_RECOVER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GALADRAKE_2] = {
        .species = SPECIES_GALADRAKE,
        .moves = {MOVE_SOLAR_BEAM, MOVE_FIRE_BLAST, MOVE_CRUNCH, MOVE_SUNNY_DAY    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_YGGDRACON_2] = {
        .species = SPECIES_YGGDRACON,
        .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_DOUBLE_TEAM, MOVE_LIGHT_SCREEN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_STRESSEON_2] = {
        .species = SPECIES_STRESSEON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_BODY_SLAM, MOVE_SHADOW_BALL    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_XOKKEON_2] = {//TO REMOVE
        .species = SPECIES_XOKKEON,
        .moves = {MOVE_VOLT_SWITCH, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BABEYON_2] = {
        .species = SPECIES_BABEYON,
        .moves = {MOVE_CURSE, MOVE_ATTRACT, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_RAMMET_2] = {
        .species = SPECIES_RAMMET,
        .moves = {MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_DOUBLE_TEAM, MOVE_GRASS_WHISTLE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DONT_2] = {
        .species = SPECIES_DONT,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LEAVE_2] = {
        .species = SPECIES_LEAVE,
        .moves = {MOVE_CURSE, MOVE_SCREECH, MOVE_DOUBLE_TEAM, MOVE_DOUBLE_EDGE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SPERIATHON_2] = {
        .species = SPECIES_SPERIATHON,
        .moves = {MOVE_AURA_SPHERE, MOVE_SHELL_SMASH, MOVE_ICE_BEAM, MOVE_SCALD},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_TEED_2] = {
        .species = SPECIES_TEED,
        .moves = {MOVE_SURF, MOVE_DRAGON_CLAW, MOVE_BRICK_BREAK, MOVE_SCARY_FACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MURPHIRE_2] = {
        .species = SPECIES_MURPHIRE,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_THUNDER_WAVE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GOURMASTER_2] = {
        .species = SPECIES_GOURMASTER,
        .moves = {MOVE_BLAZE_KICK, MOVE_MEGA_KICK, MOVE_THUNDER_PUNCH, MOVE_BRICK_BREAK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PHASMORGAN_2] = {
        .species = SPECIES_PHASMORGAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_CURSE, MOVE_DOUBLE_TEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_INCREDALEN_2] = {
        .species = SPECIES_INCREDALEN,
        .moves = {MOVE_LEAF_BLADE, MOVE_THUNDER_PUNCH, MOVE_ATTRACT, MOVE_DOUBLE_TEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SKORPYROS_2] = {
        .species = SPECIES_SKORPYROS,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_DRAGON_DANCE, MOVE_SMOKESCREEN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_RICKLE_2] = {
        .species = SPECIES_RICKLE,
        .moves = {MOVE_FLAMETHROWER, MOVE_THUNDER_PUNCH, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_JEBONY_2] = {
        .species = SPECIES_JEBONY,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_BODY_SLAM, MOVE_ROAR    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CROBAT_2] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_TOXIC, MOVE_GIGA_DRAIN, MOVE_CONFUSE_RAY, MOVE_DOUBLE_TEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BAITANK_2] = {
        .species = SPECIES_BAITANK,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_MIRROR_COAT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_KROLLER_2] = {
        .species = SPECIES_KROLLER,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, MOVE_FIRE_BLAST, MOVE_BLIZZARD    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHEPEIRD_2] = {
        .species = SPECIES_SHEPEIRD,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CURSE, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DISMALO_2] = {
        .species = SPECIES_DISMALO,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_DRAGON_BREATH, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REAPCHARGE_2] = {
        .species = SPECIES_REAPCHARGE,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_SING, MOVE_ATTRACT, MOVE_SUBSTITUTE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_NUTVALANCHE_2] = {
        .species = SPECIES_NUTVALANCHE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_SAFEGUARD, MOVE_MIRROR_COAT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_OPTICULU_2] = {
        .species = SPECIES_OPTICULU,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_CRUNCH, MOVE_ROAR    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DRUNKABUS_2] = {
        .species = SPECIES_HAXORUS,
        .moves = {MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_OUTRAGE, MOVE_DRAGON_CLAW},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HAZETHOTH_2] = {
        .species = SPECIES_HAZETHOTH,
        .moves = {MOVE_EARTHQUAKE, MOVE_METEOR_MASH, MOVE_PSYCH_UP, MOVE_SWAGGER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_UGADOOBA_2] = {
        .species = SPECIES_UGADOOBA,
        .moves = {MOVE_MEGA_KICK, MOVE_SHADOW_BALL, MOVE_YAWN, MOVE_AMNESIA    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GHOMA_3] = {
        .species = SPECIES_GHOMA,//TO REMOVE
        .moves = {MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_REVERSAL, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LONKEST_3] = {
        .species = SPECIES_LONKEST,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LILREAPER_3] = {
        .species = SPECIES_LILREAPER,
        .moves = {MOVE_PERISH_SONG, MOVE_MEAN_LOOK, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CHAPSNAT_3] = {
        .species = SPECIES_CHAPSNAT,
        .moves = {MOVE_DRILL_PECK, MOVE_RETURN, MOVE_STEEL_WING, MOVE_FAINT_ATTACK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DABBUG_3] = {
        .species = SPECIES_DABBUG,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_SLUDGE_BOMB, MOVE_ROCK_SLIDE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REPSAC_3] = {
        .species = SPECIES_REPSAC,
        .moves = {MOVE_DREAM_EATER, MOVE_LOVELY_KISS, MOVE_ATTRACT, MOVE_SUBSTITUTE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HUGEMAN_3] = {
        .species = SPECIES_DUSKNOIR,//TO REMOVE
        .moves = {MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT, MOVE_SHADOW_SNEAK, MOVE_ICE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PARANGELIA_3] = {
        .species = SPECIES_PARANGELIA,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_FAINT_ATTACK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ALIEN_3] = {
        .species = SPECIES_ALIEN,
        .moves = {MOVE_TRICK, MOVE_TORMENT, MOVE_PSYCHIC, MOVE_THUNDERBOLT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_OUROBOLET_3] = {
        .species = SPECIES_OUROBOLET,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_CONFUSE_RAY, MOVE_RAIN_DANCE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DOUBLINKER_3] = {
        .species = SPECIES_DOUBLINKER,
        .moves = {MOVE_IRON_TAIL, MOVE_FOCUS_PUNCH, MOVE_ATTRACT, MOVE_SPORE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_WAILE_3] = {
        .species = SPECIES_WAILE,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_GIGA_DRAIN, MOVE_ZAP_CANNON    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SPLASHICOOT_3] = {
        .species = SPECIES_SPLASHICOOT,
        .moves = {MOVE_SLEEP_TALK, MOVE_REST, MOVE_SURF, MOVE_FISSURE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GOALEM_3] = {
        .species = SPECIES_GOALEM,
        .moves = {MOVE_DRILL_PECK, MOVE_PSYCHIC, MOVE_GIGA_DRAIN, MOVE_STEEL_WING    },
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LEGEARTH_3] = {
        .species = SPECIES_LEGEARTH,
        .moves = {MOVE_TOXIC, MOVE_CURSE, MOVE_REST, MOVE_FLY    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_AMAZULK_3] = {
        .species = SPECIES_AMAZULK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_BRICK_BREAK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_THICK_CLUB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_AREALGUN_3] = {
        .species = SPECIES_AREALGUN,
        .moves = {MOVE_EARTHQUAKE, MOVE_SLUDGE_BOMB, MOVE_DOUBLE_EDGE, MOVE_CURSE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GOTHOT_3] = {
        .species = SPECIES_GOTHOT,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_FLAMETHROWER, MOVE_MAGICAL_LEAF    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GANGBEATS_3] = {
        .species = SPECIES_GANGBEATS,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_FACADE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DISHEATS_3] = {
        .species = SPECIES_DISHEATS,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_IRON_TAIL, MOVE_ATTRACT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_TITENIC_3] = {
        .species = SPECIES_TITENIC,
        .moves = {MOVE_HORN_DRILL, MOVE_SHEER_COLD, MOVE_SLEEP_TALK, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_AUXILISK_3] = {
        .species = SPECIES_AUXILISK,
        .moves = {MOVE_THUNDERBOLT, MOVE_IRON_TAIL, MOVE_THUNDER_WAVE, MOVE_ROAR    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GANJAZE_3] = {
        .species = SPECIES_GANJAZE,
        .moves = {MOVE_ATTRACT, MOVE_STUN_SPORE, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MARLEYZARD_3] = {
        .species = SPECIES_MARLEYZARD,
        .moves = {MOVE_STUN_SPORE, MOVE_INGRAIN, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ENDERMON_3] = {
        .species = SPECIES_ENDERMON,
        .moves = {MOVE_EXPLOSION, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_ENDURE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_NAUGHTY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GIGALPHA_3] = {
        .species = SPECIES_GIGALPHA,//TO REMOVE
        .moves = {MOVE_BOOMBURST, MOVE_ICE_BEAM, MOVE_FIRE_BLAST, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHADEKU_3] = {
        .species = SPECIES_SHADEKU,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_SYNTHESIS    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ELECHAIR_3] = {
        .species = SPECIES_ELECHAIR,
        .moves = {MOVE_BLIZZARD, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_QUACKNATOR_3] = {
		.species = SPECIES_QUACKNATOR,//TO REMOVE
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN, MOVE_SCALD},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHAPOOPYZ_3] = {
        .species = SPECIES_SHAPOOPYZ,
        .moves = {MOVE_PSYCH_UP, MOVE_SWAGGER, MOVE_MEGA_KICK, MOVE_SHADOW_BALL    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LOSSILITH_3] = {
        .species = SPECIES_LOSSILITH,//TO REMOVE
        .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_STONE_EDGE, MOVE_STEALTH_ROCK},
        .itemTableId = BATTLE_FRONTIER_ITEM_WEAKNESS_POLICY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
		.abilitynum = ABILITY_1
    },
    [FRONTIER_MON_YEESAUR_3] = {
        .species = SPECIES_RHYPERIOR,//TO REMOVE
        .moves = {MOVE_STEALTH_ROCK, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_BLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
		.abilitynum = ABILITY_2
    },
    [FRONTIER_MON_KUKLOPS_3] = {
        .species = SPECIES_KUKLOPS,
        .moves = {MOVE_TRICK, MOVE_DISABLE, MOVE_PSYCHIC, MOVE_SKILL_SWAP    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BIPHARMA_3] = {
        .species = SPECIES_BIPHARMA,
        .moves = {MOVE_EXPLOSION, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_TROLOLO_3] = {
        .species = SPECIES_TROLOLO,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_THUNDERBOLT, MOVE_EARTHQUAKE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_KRAFPUNK_3] = {
        .species = SPECIES_KRAFPUNK,
        .moves = {MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDERBOLT, MOVE_CROSS_CHOP    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GROX_3] = {
        .species = SPECIES_GROX,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_ICE_BEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHEMUE_3] = {
        .species = SPECIES_SHEMUE,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ATTRACT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GOOBLAN_3] = {
        .species = SPECIES_GOOBLAN,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_ICE_BEAM, MOVE_EARTHQUAKE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PANTS_3] = {
        .species = SPECIES_PANTS,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_UNSC_3] = {
        .species = SPECIES_UNSC,
        .moves = {MOVE_SING, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_EBOLABLE_3] = {
        .species = SPECIES_EBOLABLE,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_CRUNCH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_OOGABOOGA_3] = {
        .species = SPECIES_OOGABOOGA,
        .moves = {MOVE_HORN_DRILL, MOVE_FIRE_BLAST, MOVE_BLIZZARD, MOVE_SURF    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEPPA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ENDMYSUFF_3] = {
        .species = SPECIES_ENDMYSUFF,
        .moves = {MOVE_MEGA_KICK, MOVE_CROSS_CHOP, MOVE_IRON_TAIL, MOVE_COUNTER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_Pyrabass_3] = {
        .species = SPECIES_Pyrabass,
        .moves = {MOVE_SUBSTITUTE, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_RECOVER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_XENOTOPS_3] = {
        .species = SPECIES_XENOTOPS,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_SWORDS_DANCE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PERRIPUS_3] = {
        .species = SPECIES_PERRIPUS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_CROSS_CHOP, MOVE_BLIZZARD, MOVE_PROTECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LONKY_3] = {
        .species = SPECIES_LONKY,
        .moves = {MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_HYPNOSIS    },
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MUK_3] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_ICE_PUNCH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SANS_3] = {
        .species = SPECIES_DOUBLADE,
        .moves = {MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK, MOVE_SACRED_SWORD, MOVE_GYRO_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_EVIOLITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BACID_3] = {
        .species = SPECIES_BACID,
        .moves = {MOVE_THUNDERBOLT, MOVE_MEGA_KICK, MOVE_IRON_TAIL, MOVE_BRICK_BREAK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_NUGGIE_3] = {
        .species = SPECIES_NUGGIE,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_AGILITY, MOVE_SLASH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_CAREFUL,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HAPPYMAUL_3] = {
        .species = SPECIES_HAPPYMAUL,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MAURRICE_3] = {
        .species = SPECIES_MAURRICE,//TO REMOVE
        .moves = {MOVE_SWORDS_DANCE, MOVE_FACADE, MOVE_PLAY_ROUGH, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MINIMAL_3] = {
        .species = SPECIES_MINIMAL,
        .moves = {MOVE_OVERHEAT, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_DOUBLE_EDGE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_COFFICRAB_3] = {
        .species = SPECIES_COFFICRAB,
        .moves = {MOVE_FISSURE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SECRET_POWER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HEBURROW_3] = {
        .species = SPECIES_HEBURROW,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_WAILORD_3] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FISSURE, MOVE_DOUBLE_TEAM, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SAWSBAWS_3] = {
        .species = SPECIES_SAWSBAWS,//TO REMOVE
        .moves = {MOVE_WILL_O_WISP, MOVE_SOLAR_BEAM, MOVE_FIRE_BLAST, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAT_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = 2
    },
    [FRONTIER_MON_LONGIFER_3] = {
        .species = SPECIES_LONGIFER,
        .moves = {MOVE_CROSS_CHOP, MOVE_FIRE_BLAST, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MCCHICKY_3] = {
        .species = SPECIES_MCCHICKY,
        .moves = {MOVE_SUBSTITUTE, MOVE_ATTRACT, MOVE_TOXIC, MOVE_DOUBLE_TEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_CAREFUL,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HOLOCAST_3] = {
        .species = SPECIES_HOLOCAST,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_ROCK_SLIDE, MOVE_EXPLOSION    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FREDDIFER_3] = {
        .species = SPECIES_FREDDIFER,
        .moves = {MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_MIRROR_COAT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_USARMY_3] = {
        .species = SPECIES_USARMY,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE, MOVE_FIRE_BLAST, MOVE_DRAGON_CLAW    },
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CRABERAVE_3] = {
        .species = SPECIES_PORYGON_Z,//TO REMOVE
        .moves = {MOVE_TRI_ATTACK, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_1
    },
    [FRONTIER_MON_THATSFURRY_3] = {
        .species = SPECIES_THATSFURRY,//NOT MEGA
        .moves = {MOVE_MOONBLAST, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_1
    },
    [FRONTIER_MON_CIPHRON_3] = {
        .species = SPECIES_CIPHRON,
        .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_EXPLOSION    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BICYELION_3] = {
        .species = SPECIES_BICYELION,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GALADRAKE_3] = {
        .species = SPECIES_GALADRAKE,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_FLAMETHROWER, MOVE_GIGA_DRAIN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_YGGDRACON_3] = {
        .species = SPECIES_YGGDRACON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_SLEEP_POWDER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_STRESSEON_3] = {
        .species = SPECIES_STRESSEON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_ACID_ARMOR, MOVE_BATON_PASS    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_XOKKEON_3] = {
        .species = SPECIES_XOKKEON,//TO REMOVE
        .moves = {MOVE_VOLT_SWITCH, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BABEYON_3] = {
        .species = SPECIES_BABEYON,
        .moves = {MOVE_SHADOW_BALL, MOVE_FLAIL, MOVE_ENDURE, MOVE_OVERHEAT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_RAMMET_3] = {
        .species = SPECIES_RAMMET,
        .moves = {MOVE_EARTHQUAKE, MOVE_FLAIL, MOVE_ENDURE, MOVE_GIGA_DRAIN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DONT_3] = {
        .species = SPECIES_DONT,
        .moves = {MOVE_PSYCHIC, MOVE_BITE, MOVE_WISH, MOVE_REFLECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LEAVE_3] = {
        .species = SPECIES_LEAVE,
        .moves = {MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_ATTRACT, MOVE_SHADOW_BALL    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SPERIATHON_3] = {
        .species = SPECIES_SPERIATHON,//TO REMOVE
        .moves = {MOVE_AURA_SPHERE, MOVE_SHELL_SMASH, MOVE_ICE_BEAM, MOVE_SCALD},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_TEED_3] = {
        .species = SPECIES_TEED,
        .moves = {MOVE_HYDRO_PUMP, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MURPHIRE_3] = {
        .species = SPECIES_MURPHIRE,
        .moves = {MOVE_SURF, MOVE_THUNDER, MOVE_FIRE_BLAST, MOVE_BLIZZARD    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GOURMASTER_3] = {
        .species = SPECIES_GOURMASTER,
        .moves = {MOVE_OVERHEAT, MOVE_EARTHQUAKE, MOVE_ENDURE, MOVE_REVERSAL    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PHASMORGAN_3] = {
        .species = SPECIES_PHASMORGAN,
        .moves = {MOVE_SHEER_COLD, MOVE_FISSURE, MOVE_SURF, MOVE_ATTRACT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_INCREDALEN_3] = {
        .species = SPECIES_INCREDALEN,
        .moves = {MOVE_LEAF_BLADE, MOVE_EARTHQUAKE, MOVE_CRUSH_CLAW, MOVE_AERIAL_ACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SKORPYROS_3] = {
        .species = SPECIES_SKORPYROS,
        .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_BITE, MOVE_BRICK_BREAK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_RICKLE_3] = {
        .species = SPECIES_RICKLE,
        .moves = {MOVE_EARTHQUAKE, MOVE_OVERHEAT, MOVE_ENDURE, MOVE_REVERSAL    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_JEBONY_3] = {
        .species = SPECIES_JEBONY,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_DRAGON_DANCE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CROBAT_3] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_AIR_CUTTER, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_SCREECH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BAITANK_3] = {
        .species = SPECIES_BAITANK,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_COUNTER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_BRAVE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_KROLLER_3] = {
        .species = SPECIES_KROLLER,
        .moves = {MOVE_SURF, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_EARTHQUAKE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHEPEIRD_3] = {
        .species = SPECIES_SHEPEIRD,
        .moves = {MOVE_MEGA_KICK, MOVE_SHADOW_BALL, MOVE_SWAGGER, MOVE_PSYCH_UP    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DISMALO_3] = {
        .species = SPECIES_DISMALO,
        .moves = {MOVE_FLAIL, MOVE_HYDRO_PUMP, MOVE_DRAGON_DANCE, MOVE_ENDURE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REAPCHARGE_3] = {
        .species = SPECIES_REAPCHARGE,
        .moves = {MOVE_FIRE_BLAST, MOVE_BLIZZARD, MOVE_CALM_MIND, MOVE_SOFT_BOILED    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_NUTVALANCHE_3] = {
        .species = SPECIES_NUTVALANCHE,
        .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_ATTRACT, MOVE_RECOVER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_OPTICULU_3] = {
        .species = SPECIES_OPTICULU,
        .moves = {MOVE_OVERHEAT, MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_AERIAL_ACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DRUNKABUS_3] = {
        .species = SPECIES_DRUNKABUS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_OUTRAGE, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HAZETHOTH_3] = {
        .species = SPECIES_HAZETHOTH,
        .moves = {MOVE_EARTHQUAKE, MOVE_METEOR_MASH, MOVE_DOUBLE_TEAM, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_UGADOOBA_3] = {
        .species = SPECIES_UGADOOBA,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GHOMA_4] = {
        .species = SPECIES_GHOMA,//TO REMOVE
        .moves = {MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_REVERSAL, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LONKEST_4] = {
        .species = SPECIES_LONKEST,
        .moves = {MOVE_MEGA_KICK, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ROCK_SLIDE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LILREAPER_4] = {
        .species = SPECIES_LILREAPER,
        .moves = {MOVE_DESTINY_BOND, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CHAPSNAT_4] = {
        .species = SPECIES_CHAPSNAT,
        .moves = {MOVE_DRILL_PECK, MOVE_DOUBLE_EDGE, MOVE_STEEL_WING, MOVE_SKY_ATTACK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DABBUG_4] = {
        .species = SPECIES_DABBUG,
        .moves = {MOVE_MEGA_KICK, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_SHADOW_BALL    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_BRAVE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REPSAC_4] = {
        .species = SPECIES_REPSAC,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_LOVELY_KISS, MOVE_FAKE_TEARS    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HUGEMAN_4] = {
        .species = SPECIES_DUSKNOIR,//TO REMOVE
        .moves = {MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT, MOVE_SHADOW_SNEAK, MOVE_ICE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PARANGELIA_4] = {
        .species = SPECIES_PARANGELIA,
        .moves = {MOVE_FLAIL, MOVE_ENDURE, MOVE_DRILL_PECK, MOVE_FACADE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ALIEN_4] = {
        .species = SPECIES_ALIEN,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_OUROBOLET_4] = {
        .species = SPECIES_OUROBOLET,
        .moves = {MOVE_SURF, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DOUBLINKER_4] = {
        .species = SPECIES_DOUBLINKER,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SLUDGE_BOMB, MOVE_SPORE, MOVE_DOUBLE_TEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_WAILE_4] = {
        .species = SPECIES_WAILE,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SPLASHICOOT_4] = {
        .species = SPECIES_SPLASHICOOT,
        .moves = {MOVE_FISSURE, MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GOALEM_4] = {
        .species = SPECIES_GOALEM,
        .moves = {MOVE_PSYCHIC, MOVE_DRILL_PECK, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY    },
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LEGEARTH_4] = {
        .species = SPECIES_LEGEARTH,
        .moves = {MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_COUNTER, MOVE_ROCK_SLIDE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_AMAZULK_4] = {
        .species = SPECIES_AMAZULK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_MEGA_KICK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_THICK_CLUB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_AREALGUN_4] = {
        .species = SPECIES_AREALGUN,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_AMNESIA    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_SASSY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GOTHOT_4] = {
        .species = SPECIES_GOTHOT,
        .moves = {MOVE_MEGA_KICK, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_SOFT_BOILED    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GANGBEATS_4] = {
        .species = SPECIES_GANGBEATS,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_FAKE_OUT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DISHEATS_4] = {
        .species = SPECIES_DISHEATS,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_PROTECT, MOVE_MEGA_KICK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_TITENIC_4] = {
        .species = SPECIES_TITENIC,
        .moves = {MOVE_SHEER_COLD, MOVE_ICE_BEAM, MOVE_SURF, MOVE_SIGNAL_BEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_AUXILISK_4] = {
        .species = SPECIES_AUXILISK,
        .moves = {MOVE_THUNDERBOLT, MOVE_CRUNCH, MOVE_THUNDER_WAVE, MOVE_ROAR    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GANJAZE_4] = {
        .species = SPECIES_GANJAZE,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_SUNNY_DAY, MOVE_SYNTHESIS    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MARLEYZARD_4] = {
        .species = SPECIES_MARLEYZARD,
        .moves = {MOVE_GIGA_DRAIN, MOVE_DOUBLE_EDGE, MOVE_SLUDGE_BOMB, MOVE_SYNTHESIS    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ENDERMON_4] = {
        .species = SPECIES_ENDERMON,
        .moves = {MOVE_EXPLOSION, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_MIRROR_COAT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_NAUGHTY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GIGALPHA_4] = {
        .species = SPECIES_GIGALPHA,//TO REMOVE
        .moves = {MOVE_BOOMBURST, MOVE_ICE_BEAM, MOVE_FIRE_BLAST, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHADEKU_4] = {
        .species = SPECIES_SHADEKU,
        .moves = {MOVE_EXPLOSION, MOVE_GIGA_DRAIN, MOVE_MEGA_KICK, MOVE_FAKE_OUT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ELECHAIR_4] = {
        .species = SPECIES_ELECHAIR,
        .moves = {MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_SHADOW_BALL    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_QUACKNATOR_4] = {
        .species = SPECIES_QUACKNATOR,//TO REMOVE
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN, MOVE_SCALD},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHAPOOPYZ_4] = {
        .species = SPECIES_SHAPOOPYZ,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LOSSILITH_4] = {
       .species = SPECIES_LOSSILITH,//TO REMOVE
        .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_STONE_EDGE, MOVE_STEALTH_ROCK},
        .itemTableId = BATTLE_FRONTIER_ITEM_WEAKNESS_POLICY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
		.abilitynum = ABILITY_1
    },
    [FRONTIER_MON_YEESAUR_4] = {
        .species = SPECIES_RHYPERIOR,//TO REMOVE
        .moves = {MOVE_STEALTH_ROCK, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_BLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
		.abilitynum = ABILITY_2
    },
    [FRONTIER_MON_KUKLOPS_4] = {
        .species = SPECIES_KUKLOPS,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BIPHARMA_4] = {
        .species = SPECIES_BIPHARMA,
        .moves = {MOVE_EXPLOSION, MOVE_SLUDGE_BOMB, MOVE_FRUSTRATION, MOVE_SHADOW_BALL    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_TROLOLO_4] = {
        .species = SPECIES_TROLOLO,
        .moves = {MOVE_MEGA_KICK, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_SHADOW_BALL    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_KRAFPUNK_4] = {
        .species = SPECIES_KRAFPUNK,
        .moves = {MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_MEGA_KICK, MOVE_CROSS_CHOP    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GROX_4] = {
        .species = SPECIES_GROX,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ROCK_TOMB, MOVE_THUNDERBOLT, MOVE_SURF    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHEMUE_4] = {
        .species = SPECIES_SHEMUE,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_SASSY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GOOBLAN_4] = {
        .species = SPECIES_GOOBLAN,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_ICE_BEAM, MOVE_FLAMETHROWER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PANTS_4] = {
        .species = SPECIES_PANTS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CURSE, MOVE_DOUBLE_TEAM, MOVE_MILK_DRINK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_UNSC_4] = {
        .species = SPECIES_UNSC,
        .moves = {MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_ICE_BEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_EBOLABLE_4] = {
        .species = SPECIES_EBOLABLE,
        .moves = {MOVE_SUPERPOWER, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL    },
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_OOGABOOGA_4] = {
        .species = SPECIES_OOGABOOGA,
        .moves = {MOVE_MEGAHORN, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_THUNDER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ENDMYSUFF_4] = {
        .species = SPECIES_ENDMYSUFF,
        .moves = {MOVE_FLAMETHROWER, MOVE_PSYCHIC, MOVE_CROSS_CHOP, MOVE_CONFUSE_RAY    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_Pyrabass_4] = {
        .species = SPECIES_Pyrabass,
        .moves = {MOVE_TOXIC, MOVE_INGRAIN, MOVE_MIRROR_COAT, MOVE_GIGA_DRAIN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_XENOTOPS_4] = {
        .species = SPECIES_XENOTOPS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PERRIPUS_4] = {
        .species = SPECIES_PERRIPUS,
        .moves = {MOVE_SURF, MOVE_CROSS_CHOP, MOVE_ICE_BEAM, MOVE_AERIAL_ACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LONKY_4] = {
        .species = SPECIES_LONKY,
        .moves = {MOVE_OVERHEAT, MOVE_DOUBLE_EDGE, MOVE_IRON_TAIL, MOVE_DOUBLE_KICK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MUK_4] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_BRICK_BREAK, MOVE_GIGA_DRAIN, MOVE_EXPLOSION    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_BRAVE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SANS_4] = {
        .species = SPECIES_AEGISLASH,
        .moves = {MOVE_KINGS_SHIELD, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_AUTOTOMIZE},
        .itemTableId = BATTLE_FRONTIER_ITEM_WEAKNESS_POLICY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BACID_4] = {
        .species = SPECIES_BACID,
        .moves = {MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH, MOVE_THUNDER_WAVE, MOVE_REFLECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_NUGGIE_4] = {
        .species = SPECIES_NUGGIE,
        .moves = {MOVE_SILVER_WIND, MOVE_SWORDS_DANCE, MOVE_AGILITY, MOVE_BATON_PASS    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HAPPYMAUL_4] = {
        .species = SPECIES_HAPPYMAUL,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_REVERSAL, MOVE_ENDURE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MAURRICE_4] = {
		.species = SPECIES_MAURRICE,//TO REMOVE
        .moves = {MOVE_SWORDS_DANCE, MOVE_FACADE, MOVE_PLAY_ROUGH, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MINIMAL_4] = {
        .species = SPECIES_MINIMAL,
        .moves = {MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_CRUNCH, MOVE_SUNNY_DAY    },
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_COFFICRAB_4] = {
        .species = SPECIES_COFFICRAB,
        .moves = {MOVE_FISSURE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_IRON_TAIL    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HEBURROW_4] = {
        .species = SPECIES_HEBURROW,
        .moves = {MOVE_PSYCHIC, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_EXPLOSION    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_WAILORD_4] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_FISSURE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SAWSBAWS_4] = {
        .species = SPECIES_SAWSBAWS,//TO REMOVE
        .moves = {MOVE_WILL_O_WISP, MOVE_SOLAR_BEAM, MOVE_FIRE_BLAST, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAT_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = 2
    },
    [FRONTIER_MON_LONGIFER_4] = {
        .species = SPECIES_LONGIFER,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_ROCK_SLIDE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MCCHICKY_4] = {
        .species = SPECIES_MCCHICKY,
        .moves = {MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_WRAP, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_CAREFUL,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HOLOCAST_4] = {
        .species = SPECIES_HOLOCAST,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_DOUBLE_EDGE, MOVE_EXPLOSION    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FREDDIFER_4] = {
        .species = SPECIES_FREDDIFER,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM, MOVE_MIRROR_COAT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_USARMY_4] = {
        .species = SPECIES_USARMY,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_FIRE_BLAST, MOVE_BITE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CRABERAVE_4] = {
        .species = SPECIES_PORYGON_Z,//TO REMOVE
        .moves = {MOVE_TRI_ATTACK, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_1
    },
    [FRONTIER_MON_THATSFURRY_4] = {
        .species = SPECIES_GALLADE,//NOT MEGA
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ZEN_HEADBUTT, MOVE_LEAF_BLADE, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CIPHRON_4] = {
        .species = SPECIES_CIPHRON,
        .moves = {MOVE_PSYCHIC, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_EXPLOSION    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BICYELION_4] = {
        .species = SPECIES_BICYELION,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECOVER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GALADRAKE_4] = {
        .species = SPECIES_GALADRAKE,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_DOUBLE_EDGE, MOVE_CRUNCH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_YGGDRACON_4] = {
        .species = SPECIES_YGGDRACON,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_STRESSEON_4] = {
        .species = SPECIES_STRESSEON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_ACID_ARMOR, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_CALM,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_XOKKEON_4] = {
        .species = SPECIES_XOKKEON,//TO REMOVE
        .moves = {MOVE_VOLT_SWITCH, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BABEYON_4] = {
        .species = SPECIES_BABEYON,
        .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_RAMMET_4] = {
        .species = SPECIES_RAMMET,
        .moves = {MOVE_GIGA_DRAIN, MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_BODY_SLAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DONT_4] = {
        .species = SPECIES_DONT,
        .moves = {MOVE_PSYCHIC, MOVE_BITE, MOVE_ATTRACT, MOVE_CALM_MIND    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LEAVE_4] = {
        .species = SPECIES_LEAVE,
        .moves = {MOVE_CONFUSE_RAY, MOVE_TOXIC, MOVE_FAINT_ATTACK, MOVE_DOUBLE_TEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SPERIATHON_4] = {
        .species = SPECIES_SPERIATHON,//TO REMOVE
        .moves = {MOVE_AURA_SPHERE, MOVE_SHELL_SMASH, MOVE_ICE_BEAM, MOVE_SCALD},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_TEED_4] = {
        .species = SPECIES_TEED,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MURPHIRE_4] = {
        .species = SPECIES_MURPHIRE,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_AERIAL_ACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_GOURMASTER_4] = {
        .species = SPECIES_GOURMASTER,
        .moves = {MOVE_OVERHEAT, MOVE_EARTHQUAKE, MOVE_THUNDER_PUNCH, MOVE_ROCK_SLIDE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_PHASMORGAN_4] = {
        .species = SPECIES_PHASMORGAN,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_SHEER_COLD    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_INCREDALEN_4] = {
        .species = SPECIES_INCREDALEN,
        .moves = {MOVE_LEAF_BLADE, MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_THUNDER_PUNCH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SKORPYROS_4] = {
        .species = SPECIES_SKORPYROS,
        .moves = {MOVE_OVERHEAT, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_RICKLE_4] = {
        .species = SPECIES_RICKLE,
        .moves = {MOVE_OVERHEAT, MOVE_THUNDER_PUNCH, MOVE_EARTHQUAKE, MOVE_CRUSH_CLAW    },
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_JEBONY_4] = {
        .species = SPECIES_JEBONY,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_PSYCHIC    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_CROBAT_4] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_AERIAL_ACE, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BAITANK_4] = {
        .species = SPECIES_BAITANK,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_MIRROR_COAT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_KROLLER_4] = {
        .species = SPECIES_KROLLER,
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHEPEIRD_4] = {
        .species = SPECIES_SHEPEIRD,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_CURSE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DISMALO_4] = {
        .species = SPECIES_DISMALO,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ICE_BEAM, MOVE_DRAGON_DANCE, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REAPCHARGE_4] = {
        .species = SPECIES_REAPCHARGE,
        .moves = {MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_COUNTER, MOVE_SOFT_BOILED    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_NUTVALANCHE_4] = {
        .species = SPECIES_NUTVALANCHE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_MIRROR_COAT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_OPTICULU_4] = {
        .species = SPECIES_OPTICULU,
        .moves = {MOVE_OVERHEAT, MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_DOUBLE_EDGE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DRUNKABUS_4] = {
        .species = SPECIES_DRUNKABUS,
        .moves = {MOVE_HYPER_VOICE, MOVE_FIRE_BLAST, MOVE_DRACO_METEOR, MOVE_ROOST},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAMENCITE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HAZETHOTH_4] = {
        .species = SPECIES_HAZETHOTH,
        .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_UGADOOBA_4] = {
        .species = SPECIES_UGADOOBA,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_YAWN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LEGEND_1] = {
        .species = SPECIES_LEGEND,
        .moves = {MOVE_ICE_BEAM, MOVE_WATER_PULSE, MOVE_ICY_WIND, MOVE_ROAR    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ZERUEL_1] = {
        .species = SPECIES_ZERUEL,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRILL_PECK, MOVE_THUNDER_WAVE, MOVE_ROAR    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REMIEL_1] = {
        .species = SPECIES_REMIEL,
        .moves = {MOVE_FLAMETHROWER, MOVE_AERIAL_ACE, MOVE_MUD_SLAP, MOVE_ROAR    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHOCKITTY_1] = {
        .species = SPECIES_SHOCKITTY,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HEATTAR_1] = {
        .species = SPECIES_HEATTAR,
        .moves = {MOVE_FLAMETHROWER, MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REINGEER_1] = {
        .species = SPECIES_REINGEER,
        .moves = {MOVE_SURF, MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REGIROCK_1] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_SUPERPOWER, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_EXPLOSION    },
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REGICE_1] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_AMNESIA, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REGISTEEL_1] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_METAL_CLAW, MOVE_CURSE, MOVE_AMNESIA, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LATIAS_1] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_DRAGON_CLAW    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LATIOS_1] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_DRAGON_CLAW    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LEGEND_2] = {
        .species = SPECIES_LEGEND,
        .moves = {MOVE_SUBSTITUTE, MOVE_TOXIC, MOVE_BLIZZARD, MOVE_DOUBLE_TEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ZERUEL_2] = {
        .species = SPECIES_ZERUEL,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_DRILL_PECK, MOVE_DOUBLE_TEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REMIEL_2] = {
        .species = SPECIES_REMIEL,
        .moves = {MOVE_OVERHEAT, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_PROTECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHOCKITTY_2] = {
        .species = SPECIES_SHOCKITTY,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_DOUBLE_TEAM, MOVE_REFLECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HEATTAR_2] = {
        .species = SPECIES_HEATTAR,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_REFLECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REINGEER_2] = {
        .species = SPECIES_REINGEER,
        .moves = {MOVE_TOXIC, MOVE_DIVE, MOVE_DOUBLE_TEAM, MOVE_PROTECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REGIROCK_2] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_EXPLOSION    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REGICE_2] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_BLIZZARD, MOVE_BRICK_BREAK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REGISTEEL_2] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LATIAS_2] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_EARTHQUAKE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LATIOS_2] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_EARTHQUAKE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LEGEND_3] = {
        .species = SPECIES_LEGEND,
        .moves = {MOVE_ICE_BEAM, MOVE_FACADE, MOVE_AERIAL_ACE, MOVE_PROTECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ZERUEL_3] = {
        .species = SPECIES_ZERUEL,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRILL_PECK, MOVE_THUNDER_WAVE, MOVE_SUBSTITUTE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REMIEL_3] = {
        .species = SPECIES_REMIEL,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_DOUBLE_TEAM, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHOCKITTY_3] = {
        .species = SPECIES_SHOCKITTY,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_ROAR    },
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HEATTAR_3] = {
        .species = SPECIES_HEATTAR,
        .moves = {MOVE_FLAMETHROWER, MOVE_DOUBLE_EDGE, MOVE_SWAGGER, MOVE_PSYCH_UP    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REINGEER_3] = {
        .species = SPECIES_REINGEER,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_ROAR    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REGIROCK_3] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_CURSE, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REGICE_3] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_EXPLOSION    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REGISTEEL_3] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_ANCIENT_POWER, MOVE_AMNESIA, MOVE_COUNTER, MOVE_EXPLOSION    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LATIAS_3] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_EARTHQUAKE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LATIOS_3] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_EARTHQUAKE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LEGEND_4] = {
        .species = SPECIES_LEGEND,
        .moves = {MOVE_BLIZZARD, MOVE_DOUBLE_EDGE, MOVE_REST, MOVE_REFLECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ZERUEL_4] = {
        .species = SPECIES_ZERUEL,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRILL_PECK, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REMIEL_4] = {
        .species = SPECIES_REMIEL,
        .moves = {MOVE_OVERHEAT, MOVE_DOUBLE_EDGE, MOVE_STEEL_WING, MOVE_SAFEGUARD    },
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHOCKITTY_4] = {
        .species = SPECIES_SHOCKITTY,
        .moves = {MOVE_THUNDERBOLT, MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_REFLECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HEATTAR_4] = {
        .species = SPECIES_HEATTAR,
        .moves = {MOVE_FLAMETHROWER, MOVE_BITE, MOVE_DOUBLE_TEAM, MOVE_REFLECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REINGEER_4] = {
        .species = SPECIES_REINGEER,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_BITE, MOVE_REFLECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REGIROCK_4] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REGICE_4] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_HAIL, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REGISTEEL_4] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LATIAS_4] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_MIST_BALL, MOVE_SHADOW_BALL, MOVE_CHARM, MOVE_REFLECT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LATIOS_4] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_LUSTER_PURGE, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_DRAGON_CLAW    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SANS_5] = {
        .species = SPECIES_SANS,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SANS_6] = {
        .species = SPECIES_SANS,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SANS_7] = {
        .species = SPECIES_SANS,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH, MOVE_DESTINY_BOND    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SANS_8] = {
        .species = SPECIES_SANS,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_DESTINY_BOND    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MAURRICE_5] = {
        .species = SPECIES_MAURRICE,//TO REMOVE
        .moves = {MOVE_SWORDS_DANCE, MOVE_FACADE, MOVE_PLAY_ROUGH, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MAURRICE_6] = {
        .species = SPECIES_MAURRICE,//TO REMOVE
        .moves = {MOVE_SWORDS_DANCE, MOVE_FACADE, MOVE_PLAY_ROUGH, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MAURRICE_7] = {
        .species = SPECIES_MAURRICE,//TO REMOVE
        .moves = {MOVE_SWORDS_DANCE, MOVE_FACADE, MOVE_PLAY_ROUGH, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_MAURRICE_8] = {
        .species = SPECIES_MAURRICE,//TO REMOVE
        .moves = {MOVE_SWORDS_DANCE, MOVE_FACADE, MOVE_PLAY_ROUGH, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LONGIFER_5] = {
        .species = SPECIES_LONGIFER,
        .moves = {MOVE_CROSS_CHOP, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LONGIFER_6] = {
        .species = SPECIES_LONGIFER,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_ROCK_TOMB    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LONGIFER_7] = {
        .species = SPECIES_LONGIFER,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_ATTRACT, MOVE_DOUBLE_TEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LONGIFER_8] = {
        .species = SPECIES_LONGIFER,
        .moves = {MOVE_REVENGE, MOVE_ROCK_SLIDE, MOVE_FACADE, MOVE_COUNTER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_THATSFURRY_5] = {
        .species = SPECIES_THATSFURRY,//TO REMOVE
        .moves = {MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_1
    },
    [FRONTIER_MON_THATSFURRY_6] = {
        .species = SPECIES_THATSFURRY,//TO REMOVE
        .moves = {MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_1
    },
    [FRONTIER_MON_THATSFURRY_7] = {
        .species = SPECIES_THATSFURRY,//TO REMOVE
        .moves = {MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_1
    },
    [FRONTIER_MON_THATSFURRY_8] = {
        .species = SPECIES_THATSFURRY,//TO REMOVE
        .moves = {MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_1
    },
    [FRONTIER_MON_BICYELION_5] = {
        .species = SPECIES_BICYELION,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_RECOVER, MOVE_LIGHT_SCREEN    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BICYELION_6] = {
        .species = SPECIES_BICYELION,
        .moves = {MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE, MOVE_RECOVER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BICYELION_7] = {
        .species = SPECIES_BICYELION,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_COSMIC_POWER, MOVE_RECOVER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_BICYELION_8] = {
        .species = SPECIES_BICYELION,
        .moves = {MOVE_SURF, MOVE_THUNDERBOLT, MOVE_COSMIC_POWER, MOVE_RECOVER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_JEBONY_5] = {
        .species = SPECIES_JEBONY,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_IRON_TAIL, MOVE_DOUBLE_EDGE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_JEBONY_6] = {
        .species = SPECIES_JEBONY,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_BLIZZARD    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_JEBONY_7] = {
        .species = SPECIES_JEBONY,
        .moves = {MOVE_SHEER_COLD, MOVE_HORN_DRILL, MOVE_REST, MOVE_SLEEP_TALK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEPPA_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_JEBONY_8] = {
        .species = SPECIES_JEBONY,
        .moves = {MOVE_SHEER_COLD, MOVE_HORN_DRILL, MOVE_SING, MOVE_ATTRACT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHEPEIRD_5] = {
        .species = SPECIES_SHEPEIRD,
        .moves = {MOVE_MEGA_KICK, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_COUNTER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHEPEIRD_6] = {
        .species = SPECIES_SHEPEIRD,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_COUNTER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHEPEIRD_7] = {
        .species = SPECIES_DIANCIE,//MEGA
        .moves = {MOVE_DIAMOND_STORM, MOVE_MOONBLAST, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK},
        .itemTableId = BATTLE_FRONTIER_ITEM_DIANCITE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.abilitynum = ABILITY_1
    },
    [FRONTIER_MON_SHEPEIRD_8] = {
        .species = SPECIES_DIANCIE,//NOT MEGA
        .moves = {MOVE_DIAMOND_STORM, MOVE_EXPLOSION, MOVE_TRICK_ROOM, MOVE_STEALTH_ROCK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
		.abilitynum = ABILITY_1
    },
    [FRONTIER_MON_DRUNKABUS_5] = {
        .species = SPECIES_DRUNKABUS,
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_OUTRAGE, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAMENCITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DRUNKABUS_6] = {
        .species = SPECIES_DRUNKABUS,
        .moves = {MOVE_HEADBUTT, MOVE_AERIAL_ACE, MOVE_CRUNCH, MOVE_DRAGON_DANCE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DRUNKABUS_7] = {
        .species = SPECIES_DRUNKABUS,
        .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_BRICK_BREAK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_DRUNKABUS_8] = {
        .species = SPECIES_DRUNKABUS,
        .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_ATTRACT    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HAZETHOTH_5] = {
        .species = SPECIES_HAZETHOTH,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HAZETHOTH_6] = {
        .species = SPECIES_HAZETHOTH,
        .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HAZETHOTH_7] = {
        .species = SPECIES_HAZETHOTH,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HAZETHOTH_8] = {
        .species = SPECIES_HAZETHOTH,
        .moves = {MOVE_METEOR_MASH, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_EXPLOSION    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REGIROCK_5] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_HYPER_BEAM, MOVE_FOCUS_PUNCH, MOVE_ROCK_SLIDE, MOVE_DOUBLE_TEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REGIROCK_6] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_ROCK_SLIDE, MOVE_EXPLOSION    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REGICE_5] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_CURSE, MOVE_COUNTER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REGICE_6] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_SLEEP_TALK, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REGISTEEL_5] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_TOXIC, MOVE_DOUBLE_TEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REGISTEEL_6] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_SUPERPOWER, MOVE_AERIAL_ACE, MOVE_SWAGGER, MOVE_PSYCH_UP    },
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LATIAS_5] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_RECOVER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LATIAS_6] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_MIST_BALL, MOVE_DRAGON_CLAW, MOVE_ATTRACT, MOVE_THUNDER_WAVE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LATIAS_7] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_SWAGGER, MOVE_PSYCH_UP    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LATIAS_8] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LATIOS_5] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_RECOVER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LATIOS_6] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_LUSTER_PURGE, MOVE_SHADOW_BALL, MOVE_DRAGON_CLAW, MOVE_THUNDER_WAVE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LATIOS_7] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_DRAGON_DANCE, MOVE_RECOVER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LATIOS_8] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_KILLWORU_1] = {
        .species = SPECIES_KILLWORU,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK, MOVE_DRAGON_DANCE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_KILLWORU_2] = {
        .species = SPECIES_KILLWORU,
        .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_AERIAL_ACE, MOVE_DRAGON_DANCE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_KILLWORU_3] = {
        .species = SPECIES_KILLWORU,
        .moves = {MOVE_HYPER_BEAM, MOVE_ATTRACT, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_KILLWORU_4] = {
        .species = SPECIES_KILLWORU,
        .moves = {MOVE_HYPER_BEAM, MOVE_THUNDER_WAVE, MOVE_DRAGON_DANCE, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_KILLWORU_5] = {
        .species = SPECIES_KILLWORU,
        .moves = {MOVE_OUTRAGE, MOVE_DOUBLE_EDGE, MOVE_THUNDER_WAVE, MOVE_ROAR    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_KILLWORU_6] = {
        .species = SPECIES_KILLWORU,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDERBOLT, MOVE_SURF, MOVE_FLAMETHROWER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_KILLWORU_7] = {
        .species = SPECIES_KILLWORU,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDERBOLT, MOVE_SURF, MOVE_ICE_BEAM    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_KILLWORU_8] = {
        .species = SPECIES_KILLWORU,
        .moves = {MOVE_DRAGON_CLAW, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_BRICK_BREAK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_KILLWORU_9] = {
        .species = SPECIES_KILLWORU,
        .moves = {MOVE_THUNDER, MOVE_SURF, MOVE_RAIN_DANCE, MOVE_EARTHQUAKE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_KILLWORU_10] = {
        .species = SPECIES_KILLWORU,
        .moves = {MOVE_FIRE_BLAST, MOVE_BLIZZARD, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FROSILISK_1] = {
        .species = SPECIES_FROSILISK,
        .moves = {MOVE_SHORE_UP, MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_STONE_EDGE   },
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FROSILISK_2] = {
        .species = SPECIES_FROSILISK,
        .moves = {MOVE_SHORE_UP, MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_STONE_EDGE   },
        .itemTableId = BATTLE_FRONTIER_ITEM_FROSILISKITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FROSILISK_3] = {
        .species = SPECIES_FROSILISK,
        .moves = {MOVE_SHORE_UP, MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_STONE_EDGE   },
        .itemTableId = BATTLE_FRONTIER_ITEM_FROSILISKITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FROSILISK_4] = {
        .species = SPECIES_FROSILISK,
        .moves = {MOVE_SHORE_UP, MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_STONE_EDGE   },
        .itemTableId = BATTLE_FRONTIER_ITEM_FROSILISKITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FROSILISK_5] = {
        .species = SPECIES_FROSILISK,
        .moves = {MOVE_SHORE_UP, MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_STONE_EDGE   },
        .itemTableId = BATTLE_FRONTIER_ITEM_FROSILISKITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FROSILISK_6] = {
        .species = SPECIES_FROSILISK,
        .moves = {MOVE_SHORE_UP, MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_STONE_EDGE   },
        .itemTableId = BATTLE_FRONTIER_ITEM_FROSILISKITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FROSILISK_7] = {
        .species = SPECIES_FROSILISK,
        .moves = {MOVE_SHORE_UP, MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_STONE_EDGE   },
        .itemTableId = BATTLE_FRONTIER_ITEM_FROSILISKITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FROSILISK_8] = {
        .species = SPECIES_FROSILISK,
        .moves = {MOVE_SHORE_UP, MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_STONE_EDGE   },
        .itemTableId = BATTLE_FRONTIER_ITEM_FROSILISKITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FROSILISK_9] = {
        .species = SPECIES_FROSILISK,
        .moves = {MOVE_SHORE_UP, MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_STONE_EDGE   },
        .itemTableId = BATTLE_FRONTIER_ITEM_FROSILISKITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_FROSILISK_10] = {
        .species = SPECIES_FROSILISK,
        .moves = {MOVE_SHORE_UP, MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_STONE_EDGE   },
        .itemTableId = BATTLE_FRONTIER_ITEM_FROSILISKITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LEGEND_5] = {
        .species = SPECIES_LEGEND,
        .moves = {MOVE_ICE_BEAM, MOVE_HURRICANE, MOVE_AURA_SPHERE, MOVE_SHEER_COLD    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_LEGEND_6] = {
        .species = SPECIES_LEGEND_GALARIAN,
        .moves = {MOVE_ICE_BEAM, MOVE_HURRICANE, MOVE_AURA_SPHERE, MOVE_PSYSHOCK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ZERUEL_5] = {
        .species = SPECIES_ZERUEL,
        .moves = {MOVE_THUNDER, MOVE_HURRICANE, MOVE_RAIN_DANCE, MOVE_ROOST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_ZERUEL_6] = {
        .species = SPECIES_ZERUEL_GALARIAN,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_DRILL_PECK, MOVE_ROOST, MOVE_BLAZE_KICK    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REMIEL_5] = {
        .species = SPECIES_REMIEL,
        .moves = {MOVE_OVERHEAT, MOVE_HURRICANE, MOVE_SOLAR_BEAM, MOVE_ANCIENT_POWER    },
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REMIEL_6] = {
        .species = SPECIES_REMIEL_GALARIAN,
        .moves = {MOVE_FIERY_DANCE, MOVE_DARK_PULSE, MOVE_HURRICANE, MOVE_ROOST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHOCKITTY_5] = {
        .species = SPECIES_PHEROMOSA,
        .moves = {MOVE_HI_JUMP_KICK, MOVE_ICE_BEAM, MOVE_BUG_BUZZ, MOVE_STONE_EDGE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_SHOCKITTY_6] = {
        .species = SPECIES_SHOCKITTY,
        .moves = {MOVE_THUNDERBOLT, MOVE_CALM_MIND, MOVE_SUBSTITUTE, MOVE_AURA_SPHERE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HEATTAR_5] = {
        .species = SPECIES_MELMETAL,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_IRON_HEAD, MOVE_EARTHQUAKE, MOVE_STONE_EDGE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_HEATTAR_6] = {
        .species = SPECIES_HEATTAR,
        .moves = {MOVE_SACRED_FIRE, MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_STONE_EDGE    },
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REINGEER_5] = {
        .species = SPECIES_URSHIFU_RAPID_STRIKE_STYLE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_IRON_HEAD    },
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
        .abilitynum = ABILITY_RANDOM
    },
    [FRONTIER_MON_REINGEER_6] = {
        .species = SPECIES_REINGEER,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_REST    },
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    }
};
