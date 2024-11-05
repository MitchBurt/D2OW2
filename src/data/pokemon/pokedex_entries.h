const struct PokedexEntry gPokedexEntries[] =
{
#if GAME_LANGUAGE == LANGUAGE_SPANISH
    [NATIONAL_DEX_NONE] =
    {
        .categoryName = _("Descon."),
        .height = 0,
        .weight = 0,
        .description = gDummyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MEADOSAUR] =
    {
        .categoryName = _("Semilla"),
        .height = 7,
        .weight = 69,
        .description = gMeadosaurPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GROVINE] =
    {
        .categoryName = _("Semilla"),
        .height = 10,
        .weight = 130,
        .description = gGrovinePokedexText,
        .pokemonScale = 335,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YGGDRACON] =
    {
        .categoryName = _("Semilla"),
        .height = 20,
        .weight = 1000,
        .description = gYggdraconPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_SKORCHI] =
    {
        .categoryName = _("Lagartija"),
        .height = 6,
        .weight = 85,
        .description = gSkorchiPokedexText,
        .pokemonScale = 444,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKOMAD] =
    {
        .categoryName = _("Llama"),
        .height = 11,
        .weight = 190,
        .description = gSkomadPokedexText,
        .pokemonScale = 302,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKORPYROS] =
    {
        .categoryName = _("Llama"),
        .height = 17,
        .weight = 905,
        .description = gSkorpyrosPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_JISSM] =
    {
        .categoryName = _("Tortuguita"),
        .height = 5,
        .weight = 90,
        .description = gJissmPokedexText,
        .pokemonScale = 412,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPLOOGER] =
    {
        .categoryName = _("Tortuga"),
        .height = 10,
        .weight = 225,
        .description = gSploogerPokedexText,
        .pokemonScale = 332,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPERIATHON] =
    {
        .categoryName = _("Marisco"),
        .height = 16,
        .weight = 855,
        .description = gSperiathonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BUG] =
    {
        .categoryName = _("Gusano"),
        .height = 3,
        .weight = 29,
        .description = gBugPokedexText,
        .pokemonScale = 549,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LEGOOG] =
    {
        .categoryName = _("Capullo"),
        .height = 7,
        .weight = 99,
        .description = gLegoogPokedexText,
        .pokemonScale = 350,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FIROME] =
    {
        .categoryName = _("Mariposa"),
        .height = 11,
        .weight = 320,
        .description = gFiromePokedexText,
        .pokemonScale = 312,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PAINTIC] =
    {
        .categoryName = _("Oruga"),
        .height = 3,
        .weight = 32,
        .description = gPainticPokedexText,
        .pokemonScale = 455,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MYRESFT] =
    {
        .categoryName = _("Capullo"),
        .height = 6,
        .weight = 100,
        .description = gMyresftPokedexText,
        .pokemonScale = 424,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BERRORD] =
    {
        .categoryName = _("Abeja Ven."),
        .height = 10,
        .weight = 295,
        .description = gBerrordPokedexText,
        .pokemonScale = 366,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EMELGY] =
    {
        .categoryName = _("Pajarito"),
        .height = 3,
        .weight = 18,
        .description = gEmelgyPokedexText,
        .pokemonScale = 508,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FEDORHAWK] =
    {
        .categoryName = _("Pájaro"),
        .height = 11,
        .weight = 300,
        .description = gFedorhawkPokedexText,
        .pokemonScale = 331,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FAZEAGLE] =
    {
        .categoryName = _("Pájaro"),
        .height = 15,
        .weight = 395,
        .description = gFazeaglePokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HANGSTER] =
    {
        .categoryName = _("Ratón"),
        .height = 3,
        .weight = 35,
        .description = gHangsterPokedexText,
        .pokemonScale = 481,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GAWDAMSTER] =
    {
        .categoryName = _("Ratón"),
        .height = 7,
        .weight = 185,
        .description = gGawdamsterPokedexText,
        .pokemonScale = 459,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BIRDAPP] =
    {
        .categoryName = _("Pajarito"),
        .height = 3,
        .weight = 20,
        .description = gBirdappPokedexText,
        .pokemonScale = 571,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHAPSNAT] =
    {
        .categoryName = _("Pico"),
        .height = 12,
        .weight = 380,
        .description = gChapsnatPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ALCOO] =
    {
        .categoryName = _("Serpiente"),
        .height = 20,
        .weight = 69,
        .description = gAlcooPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BEVRAGON] =
    {
        .categoryName = _("Cobra"),
        .height = 35,
        .weight = 650,
        .description = gBevragonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 296,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SKIPPA] =
    {
        .categoryName = _("Ratón"),
        .height = 4,
        .weight = 60,
        .description = gSkippaPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DISHEATS] =
    {
        .categoryName = _("Ratón"),
        .height = 8,
        .weight = 300,
        .description = gDisheatsPokedexText,
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JAFEET] =
    {
        .categoryName = _("Ratón"),
        .height = 6,
        .weight = 120,
        .description = gJafeetPokedexText,
        .pokemonScale = 365,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOYUTA] =
    {
        .categoryName = _("Ratón"),
        .height = 10,
        .weight = 295,
        .description = gToyutaPokedexText,
        .pokemonScale = 341,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NAUSEON] =
    {
        .categoryName = _("Pin Veneno"),
        .height = 4,
        .weight = 70,
        .description = gNauseonPokedexText,
        .pokemonScale = 488,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HAZMATE] =
    {
        .categoryName = _("Pin Veneno"),
        .height = 8,
        .weight = 200,
        .description = gHazmatePokedexText,
        .pokemonScale = 381,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EBOLABLE] =
    {
        .categoryName = _("Taladro"),
        .height = 13,
        .weight = 600,
        .description = gEbolablePokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UNGA] =
    {
        .categoryName = _("Pin Veneno"),
        .height = 5,
        .weight = 90,
        .description = gUngaPokedexText,
        .pokemonScale = 511,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BUNGA] =
    {
        .categoryName = _("Pin Veneno"),
        .height = 9,
        .weight = 195,
        .description = gBungaPokedexText,
        .pokemonScale = 408,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OOGABOOGA] =
    {
        .categoryName = _("Taladro"),
        .height = 14,
        .weight = 620,
        .description = gOogaboogaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EGOIRL] =
    {
        .categoryName = _("Hada"),
        .height = 6,
        .weight = 75,
        .description = gEgoirlPokedexText,
        .pokemonScale = 441,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOTHOT] =
    {
        .categoryName = _("Hada"),
        .height = 13,
        .weight = 400,
        .description = gGothotPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SAUCIE] =
    {
        .categoryName = _("Zorro"),
        .height = 6,
        .weight = 99,
        .description = gSauciePokedexText,
        .pokemonScale = 542,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SAWSBAWS] =
    {
        .categoryName = _("Zorro"),
        .height = 11,
        .weight = 199,
        .description = gSawsbawsPokedexText,
        .pokemonScale = 339,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNEDDIT] =
    {
        .categoryName = _("Globo"),
        .height = 5,
        .weight = 55,
        .description = gSnedditPokedexText,
        .pokemonScale = 433,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COSMIE] =
    {
        .categoryName = _("Globo"),
        .height = 10,
        .weight = 120,
        .description = gCosmiePokedexText,
        .pokemonScale = 328,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BATANARF] =
    {
        .categoryName = _("Murciélago"),
        .height = 8,
        .weight = 75,
        .description = gBatanarfPokedexText,
        .pokemonScale = 362,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ANIVENOM] =
    {
        .categoryName = _("Murciélago"),
        .height = 16,
        .weight = 550,
        .description = gAnivenomPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BONGSTARD] =
    {
        .categoryName = _("Hierbajo"),
        .height = 5,
        .weight = 54,
        .description = gBongstardPokedexText,
        .pokemonScale = 423,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SMOGAS] =
    {
        .categoryName = _("Hierbajo"),
        .height = 8,
        .weight = 86,
        .description = gSmogasPokedexText,
        .pokemonScale = 329,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GANJAZE] =
    {
        .categoryName = _("Flor"),
        .height = 12,
        .weight = 186,
        .description = gGanjazePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOOFSHRUM] =
    {
        .categoryName = _("Hongo"),
        .height = 3,
        .weight = 54,
        .description = gGoofshrumPokedexText,
        .pokemonScale = 593,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUSHROOM] =
    {
        .categoryName = _("Hongo"),
        .height = 10,
        .weight = 295,
        .description = gDushroomPokedexText,
        .pokemonScale = 307,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARAKETSU] =
    {
        .categoryName = _("Insecto"),
        .height = 10,
        .weight = 300,
        .description = gAraketsuPokedexText,
        .pokemonScale = 360,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_SENKETULA] =
    {
        .categoryName = _("Polilla V."),
        .height = 15,
        .weight = 125,
        .description = gSenketulaPokedexText,
        .pokemonScale = 285,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_DIGLETT] =
    {
        .categoryName = _("Topo"),
        .height = 2,
        .weight = 8,
        .description = gDiglettPokedexText,
        .pokemonScale = 833,
        .pokemonOffset = 25,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GHOMA] =
    {
        .categoryName = _("Topo"),
        .height = 7,
        .weight = 333,
        .description = gGhomaPokedexText,
        .pokemonScale = 406,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GARFEL] =
    {
        .categoryName = _("Gato Araña"),
        .height = 4,
        .weight = 42,
        .description = gGarfelPokedexText,
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOREFIELD] =
    {
        .categoryName = _("Gato Fino"),
        .height = 10,
        .weight = 320,
        .description = gGorefieldPokedexText,
        .pokemonScale = 320,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUGGAME] =
    {
        .categoryName = _("Pato"),
        .height = 8,
        .weight = 196,
        .description = gDuggamePokedexText,
        .pokemonScale = 369,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PERRIPUS] =
    {
        .categoryName = _("Pato"),
        .height = 17,
        .weight = 766,
        .description = gPerripusPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 273,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_AGANDA] =
    {
        .categoryName = _("Mono Cerdo"),
        .height = 5,
        .weight = 280,
        .description = gAgandaPokedexText,
        .pokemonScale = 404,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SUGREIVOUS] =
    {
        .categoryName = _("Mono Cerdo"),
        .height = 10,
        .weight = 320,
        .description = gSugreivousPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CTHEYE] =
    {
        .categoryName = _("Perrito"),
        .height = 7,
        .weight = 190,
        .description = gCtheyePokedexText,
        .pokemonScale = 346,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OPTICULU] =
    {
        .categoryName = _("Leyenda"),
        .height = 19,
        .weight = 1550,
        .description = gOpticuluPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_OOTLAW] =
    {
        .categoryName = _("Renacuajo"),
        .height = 6,
        .weight = 124,
        .description = gOotlawPokedexText,
        .pokemonScale = 369,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHERRIF] =
    {
        .categoryName = _("Renacuajo"),
        .height = 10,
        .weight = 200,
        .description = gSherrifPokedexText,
        .pokemonScale = 288,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RENAGEDE] =
    {
        .categoryName = _("Renacuajo"),
        .height = 13,
        .weight = 540,
        .description = gRenagedePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KUKLUX] =
    {
        .categoryName = _("PSI"),
        .height = 9,
        .weight = 195,
        .description = gAbraPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KUKLAN] =
    {
        .categoryName = _("PSI"),
        .height = 13,
        .weight = 565,
        .description = gKuklanPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KUKLOPS] =
    {
        .categoryName = _("PSI"),
        .height = 15,
        .weight = 480,
        .description = gKuklopsPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FARBY] =
    {
        .categoryName = _("Superpoder"),
        .height = 8,
        .weight = 195,
        .description = gFarbyPokedexText,
        .pokemonScale = 342,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FURBOIS] =
    {
        .categoryName = _("Superpoder"),
        .height = 15,
        .weight = 705,
        .description = gFurboisPokedexText,
        .pokemonScale = 323,
        .pokemonOffset = 9,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LONGIFER] =
    {
        .categoryName = _("Superpoder"),
        .height = 16,
        .weight = 1300,
        .description = gLongiferPokedexText,
        .pokemonScale = 280,
        .pokemonOffset = 1,
        .trainerScale = 269,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_BONGECKO] =
    {
        .categoryName = _("Flor"),
        .height = 7,
        .weight = 40,
        .description = gBongeckoPokedexText,
        .pokemonScale = 354,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MARIGUANA] =
    {
        .categoryName = _("Matamoscas"),
        .height = 10,
        .weight = 64,
        .description = gMariguanaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MARLEYZARD] =
    {
        .categoryName = _("Matamoscas"),
        .height = 17,
        .weight = 155,
        .description = gMarleyzardPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_FLOOTEY] =
    {
        .categoryName = _("Medusa"),
        .height = 9,
        .weight = 455,
        .description = gFlooteyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FREDDIFER] =
    {
        .categoryName = _("Medusa"),
        .height = 16,
        .weight = 550,
        .description = gFreddiferPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 312,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_ROCK] =
    {
        .categoryName = _("Roca"),
        .height = 4,
        .weight = 200,
        .description = gRockPokedexText,
        .pokemonScale = 347,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TONCRETE] =
    {
        .categoryName = _("Roca"),
        .height = 10,
        .weight = 1050,
        .description = gToncretePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LOSSILITH] =
    {
        .categoryName = _("Megatón"),
        .height = 14,
        .weight = 3000,
        .description = gLossilithPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 296,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DEBEGUCK] =
    {
        .categoryName = _("Caballo F."),
        .height = 10,
        .weight = 300,
        .description = gDebeguckPokedexText,
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LONKY] =
    {
        .categoryName = _("Caballo F."),
        .height = 17,
        .weight = 950,
        .description = gLonkyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 289,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_BASSHOP] =
    {
        .categoryName = _("Atontado"),
        .height = 12,
        .weight = 360,
        .description = gBasshopPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHEMUE] =
    {
        .categoryName = _("Ermitaño"),
        .height = 16,
        .weight = 785,
        .description = gShemuePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DESQUARED] =
    {
        .categoryName = _("Imán"),
        .height = 3,
        .weight = 60,
        .description = gDesquaredPokedexText,
        .pokemonScale = 288,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEATHCUBED] =
    {
        .categoryName = _("Imán"),
        .height = 10,
        .weight = 600,
        .description = gDeathcubedPokedexText,
        .pokemonScale = 292,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_IMPOSTOWN] =
    {
        .categoryName = _("Pato Salv."),
        .height = 8,
        .weight = 150,
        .description = gImpostownPokedexText,
        .pokemonScale = 330,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DIVINI] =
    {
        .categoryName = _("Ave Gemela"),
        .height = 14,
        .weight = 392,
        .description = gDiviniPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_PARANGELIA] =
    {
        .categoryName = _("Ave Triple"),
        .height = 18,
        .weight = 852,
        .description = gParangeliaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DABBOI] =
    {
        .categoryName = _("León Mar."),
        .height = 11,
        .weight = 900,
        .description = gDabboiPokedexText,
        .pokemonScale = 297,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TITENIC] =
    {
        .categoryName = _("León Mar."),
        .height = 17,
        .weight = 1200,
        .description = gTitenicPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 275,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GUMMI] =
    {
        .categoryName = _("Lodo"),
        .height = 9,
        .weight = 300,
        .description = gGummiPokedexText,
        .pokemonScale = 258,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MUK] =
    {
        .categoryName = _("Lodo"),
        .height = 12,
        .weight = 300,
        .description = gMukPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COOLAR] =
    {
        .categoryName = _("Bivalvo"),
        .height = 3,
        .weight = 40,
        .description = gCoolarPokedexText,
        .pokemonScale = 675,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FRIDEGE] =
    {
        .categoryName = _("Bivalvo"),
        .height = 15,
        .weight = 1325,
        .description = gFridegePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 269,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_SKELEDOOT] =
    {
        .categoryName = _("Gas"),
        .height = 13,
        .weight = 1,
        .description = gSkeledootPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BEEGMIKE] =
    {
        .categoryName = _("Gas"),
        .height = 16,
        .weight = 1,
        .description = gBeegmikePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SANS] =
    {
        .categoryName = _("Sombra"),
        .height = 15,
        .weight = 405,
        .description = gSansPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ESCEEPEE] =
    {
        .categoryName = _("Serp. Roca"),
        .height = 88,
        .weight = 2100,
        .description = gEsceepeePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 515,
        .trainerOffset = 14,
    },

    [NATIONAL_DEX_SHAPIPIZ] =
    {
        .categoryName = _("Hipnosis"),
        .height = 10,
        .weight = 324,
        .description = gShapipizPokedexText,
        .pokemonScale = 274,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHAPOOPYZ] =
    {
        .categoryName = _("Hipnosis"),
        .height = 16,
        .weight = 756,
        .description = gShapoopyzPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STROLOKE] =
    {
        .categoryName = _("Cangrejo"),
        .height = 4,
        .weight = 65,
        .description = gStrolokePokedexText,
        .pokemonScale = 469,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CREEPA] =
    {
        .categoryName = _("Tenaza"),
        .height = 13,
        .weight = 600,
        .description = gCreepaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AWMANE] =
    {
        .categoryName = _("Bola"),
        .height = 5,
        .weight = 104,
        .description = gAwmanePokedexText,
        .pokemonScale = 364,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ENDERMON] =
    {
        .categoryName = _("Bola"),
        .height = 12,
        .weight = 666,
        .description = gEndermonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BILLOMINAT] =
    {
        .categoryName = _("Huevo"),
        .height = 4,
        .weight = 25,
        .description = gBillominatPokedexText,
        .pokemonScale = 489,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CIPHRON] =
    {
        .categoryName = _("Coco"),
        .height = 20,
        .weight = 1200,
        .description = gCiphronPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
    },

    [NATIONAL_DEX_SURBSQUACH] =
    {
        .categoryName = _("Solitario"),
        .height = 4,
        .weight = 65,
        .description = gSurbsquachPokedexText,
        .pokemonScale = 545,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AMAZULK] =
    {
        .categoryName = _("Apilahueso"),
        .height = 10,
        .weight = 450,
        .description = gAmazulkPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_REPLITOR] =
    {
        .categoryName = _("Patada"),
        .height = 15,
        .weight = 498,
        .description = gReplitorPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 259,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_BIREMIC] =
    {
        .categoryName = _("Puñetazo"),
        .height = 14,
        .weight = 502,
        .description = gBiremicPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 277,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CAPFALCO] =
    {
        .categoryName = _("Lametazo"),
        .height = 12,
        .weight = 655,
        .description = gCapfalcoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FENNAF] =
    {
        .categoryName = _("Gas Veneno"),
        .height = 6,
        .weight = 10,
        .description = gFennafPokedexText,
        .pokemonScale = 369,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BIPHARMA] =
    {
        .categoryName = _("Gas Veneno"),
        .height = 12,
        .weight = 95,
        .description = gBipharmaPokedexText,
        .pokemonScale = 305,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POTOGREED] =
    {
        .categoryName = _("Clavos"),
        .height = 10,
        .weight = 1150,
        .description = gPotogreedPokedexText,
        .pokemonScale = 267,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YEESAUR] =
    {
        .categoryName = _("Taladro"),
        .height = 19,
        .weight = 1200,
        .description = gYeesaurPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 299,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_UNJOY] =
    {
        .categoryName = _("Huevo"),
        .height = 11,
        .weight = 346,
        .description = gUnjoyPokedexText,
        .pokemonScale = 257,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BANANACE] =
    {
        .categoryName = _("Enredadera"),
        .height = 10,
        .weight = 350,
        .description = gBananacePokedexText,
        .pokemonScale = 304,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TROLOLO] =
    {
        .categoryName = _("Padres"),
        .height = 22,
        .weight = 800,
        .description = gTrololoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
    },

    [NATIONAL_DEX_JANK] =
    {
        .categoryName = _("Dragón"),
        .height = 4,
        .weight = 80,
        .description = gJankPokedexText,
        .pokemonScale = 399,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWAMPOGRE] =
    {
        .categoryName = _("Dragón"),
        .height = 12,
        .weight = 250,
        .description = gSwampogrePokedexText,
        .pokemonScale = 299,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CIGHTED] =
    {
        .categoryName = _("Pez Color"),
        .height = 6,
        .weight = 150,
        .description = gCightedPokedexText,
        .pokemonScale = 379,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MONGELORD] =
    {
        .categoryName = _("Pez Color"),
        .height = 13,
        .weight = 390,
        .description = gMongelordPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BURIK] =
    {
        .categoryName = _("Estrellada"),
        .height = 8,
        .weight = 345,
        .description = gBurikPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BICYELION] =
    {
        .categoryName = _("Misterioso"),
        .height = 11,
        .weight = 800,
        .description = gBicyelionPokedexText,
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ALIEN] =
    {
        .categoryName = _("Barrera"),
        .height = 13,
        .weight = 545,
        .description = gAlienPokedexText,
        .pokemonScale = 258,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHUXKUSH] =
    {
        .categoryName = _("Mantis"),
        .height = 15,
        .weight = 560,
        .description = gChuxkushPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_REPSAC] =
    {
        .categoryName = _("F. Humana"),
        .height = 14,
        .weight = 406,
        .description = gRepsacPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 300,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_KRAFPUNK] =
    {
        .categoryName = _("Eléctrico"),
        .height = 11,
        .weight = 300,
        .description = gKrafpunkPokedexText,
        .pokemonScale = 351,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ENDMYSUFF] =
    {
        .categoryName = _("Escupfuego"),
        .height = 13,
        .weight = 445,
        .description = gEndmysuffPokedexText,
        .pokemonScale = 277,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ITRIMID] =
    {
        .categoryName = _("Escarabajo"),
        .height = 15,
        .weight = 550,
        .description = gItrimidPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GROX] =
    {
        .categoryName = _("Toro Bravo"),
        .height = 14,
        .weight = 884,
        .description = gGroxPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NUSHAKE] =
    {
        .categoryName = _("Pez"),
        .height = 9,
        .weight = 100,
        .description = gNushakePokedexText,
        .pokemonScale = 310,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KROLLER] =
    {
        .categoryName = _("Atrocidad"),
        .height = 65,
        .weight = 2350,
        .description = gKrollerPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 481,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_JEBONY] =
    {
        .categoryName = _("Transporte"),
        .height = 25,
        .weight = 2200,
        .description = gJebonyPokedexText,
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
    },

    [NATIONAL_DEX_DITTO] =
    {
        .categoryName = _("Transform."),
        .height = 3,
        .weight = 40,
        .description = gDittoPokedexText,
        .pokemonScale = 633,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EEMOJEE] =
    {
        .categoryName = _("Evolución"),
        .height = 3,
        .weight = 65,
        .description = gEemojeePokedexText,
        .pokemonScale = 476,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STRESSEON] =
    {
        .categoryName = _("Burbuja"),
        .height = 10,
        .weight = 290,
        .description = gStresseonPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_XOKKEON] =
    {
        .categoryName = _("Relámpago"),
        .height = 8,
        .weight = 245,
        .description = gXokkeonPokedexText,
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BABEYON] =
    {
        .categoryName = _("Llama"),
        .height = 9,
        .weight = 250,
        .description = gBabeyonPokedexText,
        .pokemonScale = 306,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AURICLIARY] =
    {
        .categoryName = _("Virtual"),
        .height = 8,
        .weight = 365,
        .description = gAuricliaryPokedexText,
        .pokemonScale = 328,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ATTACO] =
    {
        .categoryName = _("Espiral"),
        .height = 4,
        .weight = 75,
        .description = gAttacoPokedexText,
        .pokemonScale = 521,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GAISER] =
    {
        .categoryName = _("Espiral"),
        .height = 10,
        .weight = 350,
        .description = gGaiserPokedexText,
        .pokemonScale = 307,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CORORK] =
    {
        .categoryName = _("Marisco"),
        .height = 5,
        .weight = 115,
        .description = gCororkPokedexText,
        .pokemonScale = 454,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BIGOBEET] =
    {
        .categoryName = _("Marisco"),
        .height = 13,
        .weight = 405,
        .description = gBigobeetPokedexText,
        .pokemonScale = 271,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_USARMY] =
    {
        .categoryName = _("Fósil"),
        .height = 18,
        .weight = 590,
        .description = gUsarmyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 302,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_SHEPEIRD] =
    {
        .categoryName = _("Dormir"),
        .height = 21,
        .weight = 4600,
        .description = gShepeirdPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 423,
        .trainerOffset = 11,
    },

    [NATIONAL_DEX_LEGEND] =
    {
        .categoryName = _("Congelar"),
        .height = 17,
        .weight = 554,
        .description = gLegendPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ZERUEL] =
    {
        .categoryName = _("Eléctrico"),
        .height = 16,
        .weight = 526,
        .description = gZeruelPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 318,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_REMIEL] =
    {
        .categoryName = _("Llama"),
        .height = 20,
        .weight = 600,
        .description = gRemielPokedexText,
        .pokemonScale = 270,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
    },

    [NATIONAL_DEX_AMONSUS] =
    {
        .categoryName = _("Dragón"),
        .height = 18,
        .weight = 33,
        .description = gAmonsusPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 8,
        .trainerScale = 386,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_WOOPTRET] =
    {
        .categoryName = _("Dragón"),
        .height = 40,
        .weight = 165,
        .description = gWooptretPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 411,
        .trainerOffset = 5,
    },

    [NATIONAL_DEX_KILLWORU] =
    {
        .categoryName = _("Dragón"),
        .height = 22,
        .weight = 2100,
        .description = gKillworuPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_GOD] =
    {
        .categoryName = _("Genético"),
        .height = 20,
        .weight = 1220,
        .description = gGodPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_THEVOID] =
    {
        .categoryName = _("N. Especie"),
        .height = 4,
        .weight = 40,
        .description = gMewPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOM] =
    {
        .categoryName = _("Hoja"),
        .height = 9,
        .weight = 64,
        .description = gTomPokedexText,
        .pokemonScale = 512,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZACTORY] =
    {
        .categoryName = _("Hoja"),
        .height = 12,
        .weight = 158,
        .description = gZactoryPokedexText,
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RAMMET] =
    {
        .categoryName = _("Hierba"),
        .height = 18,
        .weight = 1005,
        .description = gRammetPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 277,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_MEGATRON] =
    {
        .categoryName = _("Ratónfuego"),
        .height = 5,
        .weight = 79,
        .description = gMegatronPokedexText,
        .pokemonScale = 539,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RIGAMORT] =
    {
        .categoryName = _("Volcán"),
        .height = 9,
        .weight = 190,
        .description = gRigamortPokedexText,
        .pokemonScale = 329,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RICKLE] =
    {
        .categoryName = _("Volcán"),
        .height = 17,
        .weight = 795,
        .description = gRicklePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_KORBIE] =
    {
        .categoryName = _("Fauces"),
        .height = 6,
        .weight = 95,
        .description = gKorbiePokedexText,
        .pokemonScale = 487,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JEWIS] =
    {
        .categoryName = _("Fauces"),
        .height = 11,
        .weight = 250,
        .description = gJewisPokedexText,
        .pokemonScale = 378,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TEED] =
    {
        .categoryName = _("Fauces"),
        .height = 23,
        .weight = 888,
        .description = gTeedPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_GONCARICIV] =
    {
        .categoryName = _("Explorador"),
        .height = 8,
        .weight = 60,
        .description = gGoncaricivPokedexText,
        .pokemonScale = 439,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEEPFRIEON] =
    {
        .categoryName = _("Alargado"),
        .height = 18,
        .weight = 325,
        .description = gDeepfrieonPokedexText,
        .pokemonScale = 346,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WORMADAMT] =
    {
        .categoryName = _("Búho"),
        .height = 7,
        .weight = 212,
        .description = gWormadamTPokedexText,
        .pokemonScale = 380,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JADOUG] =
    {
        .categoryName = _("Búho"),
        .height = 16,
        .weight = 408,
        .description = gJadougPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ABOMINATON] =
    {
        .categoryName = _("5Estrellas"),
        .height = 10,
        .weight = 108,
        .description = gAbominatonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WURM] =
    {
        .categoryName = _("5Estrellas"),
        .height = 14,
        .weight = 356,
        .description = gWurmPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PHRACER] =
    {
        .categoryName = _("Escupesoga"),
        .height = 5,
        .weight = 85,
        .description = gPhracerPokedexText,
        .pokemonScale = 414,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLUERILLA] =
    {
        .categoryName = _("Pata Larga"),
        .height = 11,
        .weight = 335,
        .description = gGluerillaPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUIS] =
    {
        .categoryName = _("Murciélago"),
        .height = 18,
        .weight = 750,
        .description = gLuisPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 281,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_LOVLILAD] =
    {
        .categoryName = _("Rape"), // Nombre científico: Lophius piscatorius
        .height = 5,
        .weight = 120,
        .description = gLovliladPokedexText,
        .pokemonScale = 424,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OUROBOLET] =
    {
        .categoryName = _("Luz"),
        .height = 12,
        .weight = 225,
        .description = gOuroboletPokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PICHU] =
    {
        .categoryName = _("Ratoncito"),
        .height = 3,
        .weight = 20,
        .description = gPichuPokedexText,
        .pokemonScale = 508,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POOPRAT] =
    {
        .categoryName = _("Estrellada"),
        .height = 3,
        .weight = 30,
        .description = gPoopratPokedexText,
        .pokemonScale = 462,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VCRBRAIN] =
    {
        .categoryName = _("Globo"),
        .height = 3,
        .weight = 10,
        .description = gVcrbrainPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FILMBRAIN] =
    {
        .categoryName = _("Bolaclavos"),
        .height = 3,
        .weight = 15,
        .description = gFilmbrainPokedexText,
        .pokemonScale = 507,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLURABRAIN] =
    {
        .categoryName = _("Felicidad"),
        .height = 6,
        .weight = 32,
        .description = gBlurabrainPokedexText,
        .pokemonScale = 424,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PUCKID] =
    {
        .categoryName = _("Pajarito"),
        .height = 2,
        .weight = 20,
        .description = gNatuPokedexText,
        .pokemonScale = 610,
        .pokemonOffset = 25,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOALEM] =
    {
        .categoryName = _("Místico"),
        .height = 15,
        .weight = 150,
        .description = gGoalemPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 318,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_BADDERY] =
    {
        .categoryName = _("Lana"),
        .height = 6,
        .weight = 78,
        .description = gBadderyPokedexText,
        .pokemonScale = 379,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DURASHELL] =
    {
        .categoryName = _("Lana"),
        .height = 8,
        .weight = 133,
        .description = gDurashellPokedexText,
        .pokemonScale = 372,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BACID] =
    {
        .categoryName = _("Luz"),
        .height = 14,
        .weight = 615,
        .description = gBacidPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEAWEE] =
    {
        .categoryName = _("Flor"),
        .height = 4,
        .weight = 58,
        .description = gSeaweePokedexText,
        .pokemonScale = 472,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEAKUSH] =
    {
        .categoryName = _("Ratón Agua"),
        .height = 4,
        .weight = 85,
        .description = gSeakushPokedexText,
        .pokemonScale = 476,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BARIREEFER] =
    {
        .categoryName = _("Conejoagua"),
        .height = 8,
        .weight = 285,
        .description = gBarireeferPokedexText,
        .pokemonScale = 448,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BREADDIE] =
    {
        .categoryName = _("Imitación"),
        .height = 12,
        .weight = 380,
        .description = gBreaddiePokedexText,
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOASTEM] =
    {
        .categoryName = _("Rana"),
        .height = 11,
        .weight = 339,
        .description = gToastemPokedexText,
        .pokemonScale = 289,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DOGEASTER] =
    {
        .categoryName = _("Algodón"),
        .height = 4,
        .weight = 5,
        .description = gDogeasterPokedexText,
        .pokemonScale = 562,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ANOOBIS] =
    {
        .categoryName = _("Algodón"),
        .height = 6,
        .weight = 10,
        .description = gAnoobisPokedexText,
        .pokemonScale = 387,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIGHTWAVE] =
    {
        .categoryName = _("Algodón"),
        .height = 8,
        .weight = 30,
        .description = gNightwavePokedexText,
        .pokemonScale = 418,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHARLES] =
    {
        .categoryName = _("Cola Larga"),
        .height = 8,
        .weight = 115,
        .description = gCharlesPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MELARICK] =
    {
        .categoryName = _("Semilla"),
        .height = 3,
        .weight = 18,
        .description = gMelarickPokedexText,
        .pokemonScale = 541,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WRECKFAST] =
    {
        .categoryName = _("Sol"),
        .height = 8,
        .weight = 85,
        .description = gWreckfastPokedexText,
        .pokemonScale = 444,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHARCRUSH] =
    {
        .categoryName = _("Ala Clara"),
        .height = 12,
        .weight = 380,
        .description = gSharcrushPokedexText,
        .pokemonScale = 274,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MEGALADETH] =
    {
        .categoryName = _("Pez Agua"),
        .height = 4,
        .weight = 85,
        .description = gMegaladethPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AREALGUN] =
    {
        .categoryName = _("Pez Agua"),
        .height = 14,
        .weight = 750,
        .description = gArealgunPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DONT] =
    {
        .categoryName = _("Sol"),
        .height = 9,
        .weight = 265,
        .description = gDontPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LEAVE] =
    {
        .categoryName = _("Luz Lunar"),
        .height = 10,
        .weight = 270,
        .description = gLeavePokedexText,
        .pokemonScale = 317,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GAHBLIN] =
    {
        .categoryName = _("Oscuridad"),
        .height = 5,
        .weight = 21,
        .description = gGahblinPokedexText,
        .pokemonScale = 401,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_GOOBLAN] =
    {
        .categoryName = _("Regio"),
        .height = 20,
        .weight = 795,
        .description = gGooblanPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
    },

    [NATIONAL_DEX_LILREAPER] =
    {
        .categoryName = _("Chirrido"),
        .height = 7,
        .weight = 10,
        .description = gLilreaperPokedexText,
        .pokemonScale = 407,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UNOWN] =
    {
        .categoryName = _("Símbolo"),
        .height = 5,
        .weight = 50,
        .description = gUnownPokedexText,
        .pokemonScale = 411,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FIRANT] =
    {
        .categoryName = _("Paciente"),
        .height = 13,
        .weight = 285,
        .description = gFirantPokedexText,
        .pokemonScale = 274,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BURNANT] =
    {
        .categoryName = _("Grancuello"),
        .height = 15,
        .weight = 415,
        .description = gBurnantPokedexText,
        .pokemonScale = 281,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ANTINDER] =
    {
        .categoryName = _("Larva"),
        .height = 6,
        .weight = 72,
        .description = gAntinderPokedexText,
        .pokemonScale = 445,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WAILE] =
    {
        .categoryName = _("Larva"),
        .height = 12,
        .weight = 1258,
        .description = gWailePokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MOABY] =
    {
        .categoryName = _("Serptierra"),
        .height = 15,
        .weight = 140,
        .description = gMoabyPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHAWT] =
    {
        .categoryName = _("Escopiala"),
        .height = 11,
        .weight = 648,
        .description = gShawtPokedexText,
        .pokemonScale = 350,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HOLOCAST] =
    {
        .categoryName = _("Serpférrea"),
        .height = 92,
        .weight = 4000,
        .description = gHolocastPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 516,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_GRUBDAB] =
    {
        .categoryName = _("Hada"),
        .height = 6,
        .weight = 78,
        .description = gGrubdabPokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DABBUG] =
    {
        .categoryName = _("Hada"),
        .height = 14,
        .weight = 487,
        .description = gDabbugPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DABBEATLE] =
    {
        .categoryName = _("Globo"),
        .height = 5,
        .weight = 39,
        .description = gDabbeatlePokedexText,
        .pokemonScale = 430,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NUGGIE] =
    {
        .categoryName = _("Tenaza"),
        .height = 18,
        .weight = 1180,
        .description = gNuggiePokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MCCHICKY] =
    {
        .categoryName = _("Moho"),
        .height = 6,
        .weight = 205,
        .description = gMcchickyPokedexText,
        .pokemonScale = 485,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HAPPYMAUL] =
    {
        .categoryName = _("Unicornio"),
        .height = 15,
        .weight = 540,
        .description = gHappymaulPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PINATI] =
    {
        .categoryName = _("Garra Filo"),
        .height = 9,
        .weight = 280,
        .description = gPinatiPokedexText,
        .pokemonScale = 413,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VIVAPINAUT] =
    {
        .categoryName = _("Osito"),
        .height = 6,
        .weight = 88,
        .description = gVivapinautPokedexText,
        .pokemonScale = 455,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAURRICE] =
    {
        .categoryName = _("Hibernante"),
        .height = 18,
        .weight = 1258,
        .description = gMaurricePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SLUGMA] =
    {
        .categoryName = _("Lava"),
        .height = 7,
        .weight = 350,
        .description = gSlugmaPokedexText,
        .pokemonScale = 329,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SUGMABALLS] =
    {
        .categoryName = _("Lava"),
        .height = 8,
        .weight = 550,
        .description = gSugmaballsPokedexText,
        .pokemonScale = 332,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ORCALE] =
    {
        .categoryName = _("Cerdo"),
        .height = 4,
        .weight = 65,
        .description = gOrcalePokedexText,
        .pokemonScale = 324,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCRAPCHAT] =
    {
        .categoryName = _("Puerco"),
        .height = 11,
        .weight = 558,
        .description = gScrapchatPokedexText,
        .pokemonScale = 306,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SETRONIC] =
    {
        .categoryName = _("Coral"),
        .height = 6,
        .weight = 50,
        .description = gSetronicPokedexText,
        .pokemonScale = 410,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BANNACONDA] =
    {
        .categoryName = _("Reactor"),
        .height = 6,
        .weight = 120,
        .description = gBannacondaPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SYSTANIC] =
    {
        .categoryName = _("Reactor"),
        .height = 9,
        .weight = 285,
        .description = gSystanicPokedexText,
        .pokemonScale = 296,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ABSTRATIC] =
    {
        .categoryName = _("Reprato"),
        .height = 9,
        .weight = 160,
        .description = gAbstraticPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLOOTICORN] =
    {
        .categoryName = _("Milano"),
        .height = 21,
        .weight = 2200,
        .description = gFlooticornPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_LEGEARTH] =
    {
        .categoryName = _("Coraza Ave"),
        .height = 17,
        .weight = 505,
        .description = gLegearthPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 271,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_LEGUESSR] =
    {
        .categoryName = _("Siniestro"),
        .height = 6,
        .weight = 108,
        .description = gLeguessrPokedexText,
        .pokemonScale = 393,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MINIMALO] =
    {
        .categoryName = _("Siniestro"),
        .height = 14,
        .weight = 350,
        .description = gMinimaloPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DISMALO] =
    {
        .categoryName = _("Dragón"),
        .height = 18,
        .weight = 1520,
        .description = gDismaloPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 287,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MORTARMALO] =
    {
        .categoryName = _("Narizotas"),
        .height = 5,
        .weight = 335,
        .description = gMortarmaloPokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COFFICRAB] =
    {
        .categoryName = _("Coraza"),
        .height = 11,
        .weight = 1200,
        .description = gCofficrabPokedexText,
        .pokemonScale = 313,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRABERAVE] =
    {
        .categoryName = _("Virtual"),
        .height = 6,
        .weight = 325,
        .description = gCraberavePokedexText,
        .pokemonScale = 320,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GNORB] =
    {
        .categoryName = _("Grancuerno"),
        .height = 14,
        .weight = 712,
        .description = gGnorbPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GAHNOMED] =
    {
        .categoryName = _("Pintor"),
        .height = 12,
        .weight = 580,
        .description = gGahnomedPokedexText,
        .pokemonScale = 287,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRYWEE] =
    {
        .categoryName = _("Peleón"),
        .height = 7,
        .weight = 210,
        .description = gDryweePokedexText,
        .pokemonScale = 292,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STRAIDIRT] =
    {
        .categoryName = _("Boca Abajo"),
        .height = 14,
        .weight = 480,
        .description = gStraidirtPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BURNTONION] =
    {
        .categoryName = _("Beso"),
        .height = 4,
        .weight = 60,
        .description = gBurntonionPokedexText,
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PLATERRY] =
    {
        .categoryName = _("Eléctrico"),
        .height = 6,
        .weight = 235,
        .description = gPlaterryPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RICKLING] =
    {
        .categoryName = _("Ascuas"),
        .height = 7,
        .weight = 214,
        .description = gRicklingPokedexText,
        .pokemonScale = 284,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PANTS] =
    {
        .categoryName = _("Lechera"),
        .height = 12,
        .weight = 755,
        .description = gPantsPokedexText,
        .pokemonScale = 280,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_REAPCHARGE] =
    {
        .categoryName = _("Felicidad"),
        .height = 15,
        .weight = 468,
        .description = gReapchargePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 310,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_SHOCKITTY] =
    {
        .categoryName = _("Trueno"),
        .height = 19,
        .weight = 1780,
        .description = gShockittyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_HEATTAR] =
    {
        .categoryName = _("Volcán"),
        .height = 21,
        .weight = 1980,
        .description = gHeattarPokedexText,
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_REINGEER] =
    {
        .categoryName = _("Aurora"),
        .height = 20,
        .weight = 1870,
        .description = gReingeerPokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_FROSLING] =
    {
        .categoryName = _("Piel Roca"),
        .height = 6,
        .weight = 720,
        .description = gFroslingPokedexText,
        .pokemonScale = 472,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FROSHUND] =
    {
        .categoryName = _("Caparazón"),
        .height = 12,
        .weight = 1520,
        .description = gFroshundPokedexText,
        .pokemonScale = 292,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FROSILISK] =
    {
        .categoryName = _("Coraza"),
        .height = 20,
        .weight = 2020,
        .description = gFrosiliskPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_HELPME] =
    {
        .categoryName = _("Buceo"),
        .height = 52,
        .weight = 2160,
        .description = gHelpmePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
    },

    [NATIONAL_DEX_SUFFER] =
    {
        .categoryName = _("Arco Iris"),
        .height = 38,
        .weight = 1990,
        .description = gSufferPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 610,
        .trainerOffset = 17,
    },

    [NATIONAL_DEX_LILGUY] =
    {
        .categoryName = _("Viajetiempo"),
        .height = 6,
        .weight = 50,
        .description = gLilguyPokedexText,
        .pokemonScale = 393,
        .pokemonOffset = -10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BERRYALEN] =
    {
        .categoryName = _("Geco Bosque"),
        .height = 5,
        .weight = 50,
        .description = gBerryalenPokedexText,
        .pokemonScale = 541,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VERYBERRY] =
    {
        .categoryName = _("Geco Bosque"),
        .height = 9,
        .weight = 216,
        .description = gVeryberryPokedexText,
        .pokemonScale = 360,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_INCREDALEN] =
    {
        .categoryName = _("Monte"),
        .height = 17,
        .weight = 522,
        .description = gIncredalenPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 275,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_COOKLET] =
    {
        .categoryName = _("Polluelo"),
        .height = 4,
        .weight = 25,
        .description = gCookletPokedexText,
        .pokemonScale = 566,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHEFURE] =
    {
        .categoryName = _("Ave Corral"),
        .height = 9,
        .weight = 195,
        .description = gChefurePokedexText,
        .pokemonScale = 343,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOURMASTER] =
    {
        .categoryName = _("Llameante"),
        .height = 19,
        .weight = 520,
        .description = gGourmasterPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_BAITORD] =
    {
        .categoryName = _("Pez Lodo"),
        .height = 4,
        .weight = 76,
        .description = gBaitordPokedexText,
        .pokemonScale = 535,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BAITERROR] =
    {
        .categoryName = _("Pez Lodo"),
        .height = 7,
        .weight = 280,
        .description = gBaiterrorPokedexText,
        .pokemonScale = 340,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BAITANK] =
    {
        .categoryName = _("Pez Lodo"),
        .height = 15,
        .weight = 819,
        .description = gBaitankPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUPLICAT] =
    {
        .categoryName = _("Mordisco"),
        .height = 5,
        .weight = 136,
        .description = gDuplicatPokedexText,
        .pokemonScale = 481,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FURRLEAD] =
    {
        .categoryName = _("Mordisco"),
        .height = 10,
        .weight = 370,
        .description = gFurrleadPokedexText,
        .pokemonScale = 362,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MEOWRRIOR] =
    {
        .categoryName = _("MAPACHITO"),
        .height = 4,
        .weight = 175,
        .description = gMeowrriorPokedexText,
        .pokemonScale = 560,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZEPPUR] =
    {
        .categoryName = _("Lanzado"),
        .height = 5,
        .weight = 325,
        .description = gZeppurPokedexText,
        .pokemonScale = 321,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZEPURRINE] =
    {
        .categoryName = _("Gusano"),
        .height = 3,
        .weight = 36,
        .description = gZepurrinePokedexText,
        .pokemonScale = 711,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NYANKITTY] =
    {
        .categoryName = _("Capullo"),
        .height = 6,
        .weight = 100,
        .description = gNyankittyPokedexText,
        .pokemonScale = 431,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NYANTIGER] =
    {
        .categoryName = _("Mariposa"),
        .height = 10,
        .weight = 284,
        .description = gNyantigerPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MECHDUCK] =
    {
        .categoryName = _("Capullo"),
        .height = 7,
        .weight = 115,
        .description = gMechduckPokedexText,
        .pokemonScale = 391,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUCKERTRON] =
    {
        .categoryName = _("Polilla V."),
        .height = 12,
        .weight = 316,
        .description = gDuckertronPokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCUBITE] =
    {
        .categoryName = _("Alga"),
        .height = 5,
        .weight = 26,
        .description = gScubitePokedexText,
        .pokemonScale = 406,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_QUACKSHOT] =
    {
        .categoryName = _("Alegre"),
        .height = 12,
        .weight = 325,
        .description = gQuackshotPokedexText,
        .pokemonScale = 277,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_QUACKNATOR] =
    {
        .categoryName = _("Optimista"),
        .height = 15,
        .weight = 550,
        .description = gQuacknatorPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_SOBBLEAF] =
    {
        .categoryName = _("Bellota"),
        .height = 5,
        .weight = 40,
        .description = gSobbleafPokedexText,
        .pokemonScale = 472,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HEROKKU] =
    {
        .categoryName = _("Astuto"),
        .height = 10,
        .weight = 280,
        .description = gHerokkuPokedexText,
        .pokemonScale = 299,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHADEKU] =
    {
        .categoryName = _("Malvado"),
        .height = 13,
        .weight = 596,
        .description = gShadekuPokedexText,
        .pokemonScale = 290,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TAILLOW] =
    {
        .categoryName = _("Pequebuche"),
        .height = 3,
        .weight = 23,
        .description = gTaillowPokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_XAPP] =
    {
        .categoryName = _("Buche"),
        .height = 7,
        .weight = 198,
        .description = gXappPokedexText,
        .pokemonScale = 428,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BATCARDI] =
    {
        .categoryName = _("Gaviota"),
        .height = 6,
        .weight = 95,
        .description = gBatcardiPokedexText,
        .pokemonScale = 295,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NOCTRUM] =
    {
        .categoryName = _("Ave Agua"),
        .height = 12,
        .weight = 280,
        .description = gNoctrumPokedexText,
        .pokemonScale = 288,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NOTAFURRY] =
    {
        .categoryName = _("Sensible"),
        .height = 4,
        .weight = 66,
        .description = gNotafurryPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SORTAFURRY] =
    {
        .categoryName = _("Sensorio"),
        .height = 8,
        .weight = 202,
        .description = gSortafurryPokedexText,
        .pokemonScale = 354,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_THATSFURRY] =
    {
        .categoryName = _("Envolvente"),
        .height = 16,
        .weight = 484,
        .description = gThatsfurryPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WHISKBALL] =
    {
        .categoryName = _("Zapatero"),
        .height = 5,
        .weight = 17,
        .description = gWhiskballPokedexText,
        .pokemonScale = 375,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CINAMANCER] =
    {
        .categoryName = _("Globocular"),
        .height = 8,
        .weight = 36,
        .description = gCinamancerPokedexText,
        .pokemonScale = 378,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLINKY] =
    {
        .categoryName = _("Hongo"),
        .height = 4,
        .weight = 45,
        .description = gBlinkyPokedexText,
        .pokemonScale = 513,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DOUBLINKER] =
    {
        .categoryName = _("Hongo"),
        .height = 12,
        .weight = 392,
        .description = gDoublinkerPokedexText,
        .pokemonScale = 324,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DOOBOB] =
    {
        .categoryName = _("Gandul"),
        .height = 8,
        .weight = 240,
        .description = gDoobobPokedexText,
        .pokemonScale = 291,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DOODOOBOB] =
    {
        .categoryName = _("Mono Feroz"),
        .height = 14,
        .weight = 465,
        .description = gDoodoobobPokedexText,
        .pokemonScale = 301,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UGADOOBA] =
    {
        .categoryName = _("Holgazán"),
        .height = 20,
        .weight = 1305,
        .description = gUgadoobaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 300,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_NINCADA] =
    {
        .categoryName = _("Aprendiz"),
        .height = 5,
        .weight = 55,
        .description = gNincadaPokedexText,
        .pokemonScale = 405,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NINJASK] =
    {
        .categoryName = _("Ninja"),
        .height = 8,
        .weight = 120,
        .description = gNinjaskPokedexText,
        .pokemonScale = 383,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHEDINJA] =
    {
        .categoryName = _("Muda"),
        .height = 8,
        .weight = 12,
        .description = gShedinjaPokedexText,
        .pokemonScale = 372,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COWERLIN] =
    {
        .categoryName = _("Susurro"),
        .height = 6,
        .weight = 163,
        .description = gCowerlinPokedexText,
        .pokemonScale = 373,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRAVOGOR] =
    {
        .categoryName = _("Chillón"),
        .height = 10,
        .weight = 405,
        .description = gBravogorPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GIGALPHA] =
    {
        .categoryName = _("Escandaloso"),
        .height = 15,
        .weight = 840,
        .description = gGigalphaPokedexText,
        .pokemonScale = 284,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ANGBEAST] =
    {
        .categoryName = _("Valiente"),
        .height = 10,
        .weight = 864,
        .description = gAngbeastPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GANGBEATS] =
    {
        .categoryName = _("Empuje"),
        .height = 23,
        .weight = 2538,
        .description = gGangbeatsPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 343,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_AZURILL] =
    {
        .categoryName = _("A Topos"),
        .height = 2,
        .weight = 20,
        .description = gAzurillPokedexText,
        .pokemonScale = 603,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCATRUSH] =
    {
        .categoryName = _("Brújula"),
        .height = 10,
        .weight = 970,
        .description = gScatrushPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 9,
        .trainerScale = 289,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_SMOSLIME] =
    {
        .categoryName = _("Gatito"),
        .height = 6,
        .weight = 110,
        .description = gSmoslimePokedexText,
        .pokemonScale = 492,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NYANCAT] =
    {
        .categoryName = _("Cursi"),
        .height = 11,
        .weight = 326,
        .description = gNyancatPokedexText,
        .pokemonScale = 322,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SECRITLER] =
    {
        .categoryName = _("Oscuridad"),
        .height = 5,
        .weight = 110,
        .description = gSecritlerPokedexText,
        .pokemonScale = 451,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MINITRON] =
    {
        .categoryName = _("Tramposo"),
        .height = 6,
        .weight = 115,
        .description = gMinitronPokedexText,
        .pokemonScale = 466,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARON] =
    {
        .categoryName = _("Cor. Férrea"),
        .height = 4,
        .weight = 600,
        .description = gAronPokedexText,
        .pokemonScale = 419,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GALVATRON] =
    {
        .categoryName = _("Cor. Férrea"),
        .height = 9,
        .weight = 1200,
        .description = gGalvatronPokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MURPHIRE] =
    {
        .categoryName = _("Cor. Férrea"),
        .height = 21,
        .weight = 3600,
        .description = gMurphirePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 350,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_LONK] =
    {
        .categoryName = _("Meditador"),
        .height = 6,
        .weight = 112,
        .description = gLonkPokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LONKEST] =
    {
        .categoryName = _("Meditador"),
        .height = 13,
        .weight = 315,
        .description = gLonkestPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CORDRA] =
    {
        .categoryName = _("Relámpago"),
        .height = 6,
        .weight = 152,
        .description = gCordraPokedexText,
        .pokemonScale = 290,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AUXILISK] =
    {
        .categoryName = _("Descarga"),
        .height = 15,
        .weight = 402,
        .description = gAuxiliskPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PURRSOUR] =
    {
        .categoryName = _("Ánimo"),
        .height = 4,
        .weight = 42,
        .description = gPurrsourPokedexText,
        .pokemonScale = 515,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PURRTANG] =
    {
        .categoryName = _("Ánimo"),
        .height = 4,
        .weight = 42,
        .description = gPurrtangPokedexText,
        .pokemonScale = 512,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_REWINDLE] =
    {
        .categoryName = _("Luciérnaga"),
        .height = 7,
        .weight = 177,
        .description = gRewindlePokedexText,
        .pokemonScale = 442,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DNDICE] =
    {
        .categoryName = _("Luciérnaga"),
        .height = 6,
        .weight = 177,
        .description = gDndicePokedexText,
        .pokemonScale = 572,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ALIEON] =
    {
        .categoryName = _("Espina"),
        .height = 3,
        .weight = 20,
        .description = gAlieonPokedexText,
        .pokemonScale = 677,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SYMBITE] =
    {
        .categoryName = _("Estómago"),
        .height = 4,
        .weight = 103,
        .description = gSymbitePokedexText,
        .pokemonScale = 593,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CARNIGORE] =
    {
        .categoryName = _("Bolsa Ven."),
        .height = 17,
        .weight = 800,
        .description = gCarnigorePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 345,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_BREWFIN] =
    {
        .categoryName = _("Feroz"),
        .height = 8,
        .weight = 208,
        .description = gBrewfinPokedexText,
        .pokemonScale = 362,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHARKEG] =
    {
        .categoryName = _("Voraz"),
        .height = 18,
        .weight = 888,
        .description = gSharkegPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 317,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_SHRIMPOT] =
    {
        .categoryName = _("Ballenabola"),
        .height = 20,
        .weight = 1300,
        .description = gShrimpotPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 493,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LOBSCALD] =
    {
        .categoryName = _("Ballenaflot"),
        .height = 145,
        .weight = 3980,
        .description = gLobscaldPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 1352,
        .trainerOffset = 18,
    },

    [NATIONAL_DEX_VULPOINTER] =
    {
        .categoryName = _("Torpe"),
        .height = 7,
        .weight = 240,
        .description = gVulpointerPokedexText,
        .pokemonScale = 342,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ERRORINE] =
    {
        .categoryName = _("Erupción"),
        .height = 19,
        .weight = 2200,
        .description = gErrorinePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 7,
        .trainerScale = 345,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_HELLAPHANT] =
    {
        .categoryName = _("Carbón"),
        .height = 5,
        .weight = 804,
        .description = gHellaphantPokedexText,
        .pokemonScale = 390,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FIZZCUB] =
    {
        .categoryName = _("Saltarín"),
        .height = 7,
        .weight = 306,
        .description = gFizzcubPokedexText,
        .pokemonScale = 423,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SELTCLAW] =
    {
        .categoryName = _("Manipulador"),
        .height = 9,
        .weight = 715,
        .description = gSeltclawPokedexText,
        .pokemonScale = 358,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YELTZER] =
    {
        .categoryName = _("Panda Topos"),
        .height = 11,
        .weight = 50,
        .description = gYeltzerPokedexText,
        .pokemonScale = 321,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_METIORE] =
    {
        .categoryName = _("Hormigaleón"),
        .height = 7,
        .weight = 150,
        .description = gMetiorePokedexText,
        .pokemonScale = 298,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COMETIDE] =
    {
        .categoryName = _("Vibrate"),
        .height = 11,
        .weight = 153,
        .description = gCometidePokedexText,
        .pokemonScale = 370,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GALADRAKE] =
    {
        .categoryName = _("Místico"),
        .height = 20,
        .weight = 820,
        .description = gGaladrakePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_YOLKANNER] =
    {
        .categoryName = _("Cactus"),
        .height = 4,
        .weight = 513,
        .description = gYolkannerPokedexText,
        .pokemonScale = 455,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ACONEGGS] =
    {
        .categoryName = _("Espantajo"),
        .height = 13,
        .weight = 774,
        .description = gAconeggsPokedexText,
        .pokemonScale = 327,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARMYDRONE] =
    {
        .categoryName = _("Ave Algodón"),
        .height = 4,
        .weight = 12,
        .description = gArmydronePokedexText,
        .pokemonScale = 422,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UNSC] =
    {
        .categoryName = _("Cantor"),
        .height = 11,
        .weight = 206,
        .description = gUNSCPokedexText,
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SMITNION] =
    {
        .categoryName = _("Gato Hurón"),
        .height = 13,
        .weight = 403,
        .description = gSmitnionPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARACKNE] =
    {
        .categoryName = _("Colmillos"),
        .height = 27,
        .weight = 525,
        .description = gAracknePokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SURTYUR] =
    {
        .categoryName = _("Meteorito"),
        .height = 10,
        .weight = 1680,
        .description = gSurtyurPokedexText,
        .pokemonScale = 300,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GANESH] =
    {
        .categoryName = _("Meteorito"),
        .height = 12,
        .weight = 1540,
        .description = gGaneshPokedexText,
        .pokemonScale = 328,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COOPID] =
    {
        .categoryName = _("Bigotudo"),
        .height = 4,
        .weight = 19,
        .description = gCoopidPokedexText,
        .pokemonScale = 581,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPLASHICOOT] =
    {
        .categoryName = _("Bigotudo"),
        .height = 9,
        .weight = 236,
        .description = gSplashicootPokedexText,
        .pokemonScale = 317,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NONGETIVE] =
    {
        .categoryName = _("Rufían"),
        .height = 6,
        .weight = 115,
        .description = gNongetivePokedexText,
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NONONMON] =
    {
        .categoryName = _("Granuja"),
        .height = 11,
        .weight = 328,
        .description = gNononmonPokedexText,
        .pokemonScale = 365,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DREIDRILL] =
    {
        .categoryName = _("Muñ. Barro"),
        .height = 5,
        .weight = 215,
        .description = gDreidrillPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HEBURROW] =
    {
        .categoryName = _("Muñ. Barro"),
        .height = 15,
        .weight = 1080,
        .description = gHeburrowPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 280,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_ODOSAUR] =
    {
        .categoryName = _("Lila Mar"),
        .height = 10,
        .weight = 238,
        .description = gOdosaurPokedexText,
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PYRABASS] =
    {
        .categoryName = _("Percebe"),
        .height = 15,
        .weight = 604,
        .description = gPyrabassPokedexText,
        .pokemonScale = 267,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TRICERAS] =
    {
        .categoryName = _("Camarón"),
        .height = 7,
        .weight = 125,
        .description = gTricerasPokedexText,
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_XENOTOPS] =
    {
        .categoryName = _("Armadura"),
        .height = 15,
        .weight = 682,
        .description = gXenotopsPokedexText,
        .pokemonScale = 312,
        .pokemonOffset = 3,
        .trainerScale = 271,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PADDLITE] =
    {
        .categoryName = _("Pez"),
        .height = 6,
        .weight = 74,
        .description = gPaddlitePokedexText,
        .pokemonScale = 423,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NUTVALANCHE] =
    {
        .categoryName = _("Tierno"),
        .height = 62,
        .weight = 1620,
        .description = gNutvalanchePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 360,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_CASTFORM] =
    {
        .categoryName = _("Clima"),
        .height = 3,
        .weight = 8,
        .description = gCastformPokedexText,
        .pokemonScale = 435,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KECLEON] =
    {
        .categoryName = _("Camaleónico"),
        .height = 10,
        .weight = 220,
        .description = gKecleonPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TICKTOWEL] =
    {
        .categoryName = _("Títere"),
        .height = 6,
        .weight = 23,
        .description = gTicktowelPokedexText,
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOCKTOWER] =
    {
        .categoryName = _("Marioneta"),
        .height = 11,
        .weight = 125,
        .description = gTocktowerPokedexText,
        .pokemonScale = 262,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RATMAN] =
    {
        .categoryName = _("Réquiem"),
        .height = 8,
        .weight = 150,
        .description = gRatmanPokedexText,
        .pokemonScale = 406,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HUGEMAN] =
    {
        .categoryName = _("Atrayente"),
        .height = 16,
        .weight = 306,
        .description = gHugemanPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 299,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_TROPIUS] =
    {
        .categoryName = _("Fruto"),
        .height = 20,
        .weight = 1000,
        .description = gTropiusPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 344,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_KIRBAIRDE] =
    {
        .categoryName = _("Sonido Aire"),
        .height = 6,
        .weight = 10,
        .description = gKirbairdePokedexText,
        .pokemonScale = 505,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FREDBAR] =
    {
        .categoryName = _("Catástrofe"),
        .height = 12,
        .weight = 470,
        .description = gFredbarPokedexText,
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BABINION] =
    {
        .categoryName = _("Radiante"),
        .height = 6,
        .weight = 140,
        .description = gBabinionPokedexText,
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHAIROLD] =
    {
        .categoryName = _("Gorro Nieve"),
        .height = 7,
        .weight = 168,
        .description = gChairoldPokedexText,
        .pokemonScale = 380,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ELECHAIR] =
    {
        .categoryName = _("Cara"),
        .height = 15,
        .weight = 2565,
        .description = gElechairPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 344,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIRAGHOUL] =
    {
        .categoryName = _("Aplauso"),
        .height = 8,
        .weight = 395,
        .description = gPiraghoulPokedexText,
        .pokemonScale = 315,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MORGHOST] =
    {
        .categoryName = _("Rodabola"),
        .height = 11,
        .weight = 876,
        .description = gMorghostPokedexText,
        .pokemonScale = 338,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PHASMORGAN] =
    {
        .categoryName = _("Rompehielo"),
        .height = 14,
        .weight = 1506,
        .description = gPhasmorganPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLBNAR] =
    {
        .categoryName = _("Bivalvo"),
        .height = 4,
        .weight = 525,
        .description = gGolbnarPokedexText,
        .pokemonScale = 691,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLOBNAUT] =
    {
        .categoryName = _("Abisal"),
        .height = 17,
        .weight = 270,
        .description = gGlobnautPokedexText,
        .pokemonScale = 307,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_THAUMNAR] =
    {
        .categoryName = _("Mar del Sur"),
        .height = 18,
        .weight = 226,
        .description = gThaumnarPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GALACNAR] =
    {
        .categoryName = _("Longevo"),
        .height = 10,
        .weight = 234,
        .description = gGalacnarPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WARPNAR] =
    {
        .categoryName = _("Cita"),
        .height = 6,
        .weight = 87,
        .description = gWarpnarPokedexText,
        .pokemonScale = 371,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SIPKING] =
    {
        .categoryName = _("Cabeza Roca"),
        .height = 6,
        .weight = 421,
        .description = gSipkingPokedexText,
        .pokemonScale = 448,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TIPSYRAMID] =
    {
        .categoryName = _("Resistencia"),
        .height = 11,
        .weight = 1105,
        .description = gTipsyramidPokedexText,
        .pokemonScale = 311,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRUNKABUS] =
    {
        .categoryName = _("Dragón"),
        .height = 15,
        .weight = 1026,
        .description = gDrunkabusPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YELLEYE] =
    {
        .categoryName = _("Bola Hierro"),
        .height = 6,
        .weight = 952,
        .description = gYelleyePokedexText,
        .pokemonScale = 414,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HARASTUR] =
    {
        .categoryName = _("Garrahierro"),
        .height = 12,
        .weight = 2025,
        .description = gHarasturPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HAZETHOTH] =
    {
        .categoryName = _("Pata Hierro"),
        .height = 16,
        .weight = 5500,
        .description = gHazethothPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 447,
        .trainerOffset = 9,
    },

    [NATIONAL_DEX_REGIROCK] =
    {
        .categoryName = _("Pico Roca"),
        .height = 17,
        .weight = 2300,
        .description = gRegirockPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 309,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_REGICE] =
    {
        .categoryName = _("Iceberg"),
        .height = 18,
        .weight = 1750,
        .description = gRegicePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_NAWFFLE] =
    {
        .categoryName = _("Hierro"),
        .height = 19,
        .weight = 2050,
        .description = gNawfflePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 359,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_LATIAS] =
    {
        .categoryName = _("Eón"),
        .height = 14,
        .weight = 400,
        .description = gLatiasPokedexText,
        .pokemonScale = 304,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LATIOS] =
    {
        .categoryName = _("Eón"),
        .height = 20,
        .weight = 600,
        .description = gLatiosPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 294,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_KRAKRUM] =
    {
        .categoryName = _("Cuenca Mar"),
        .height = 45,
        .weight = 3520,
        .description = gKrakrumPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 614,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_NOIRNET] =
    {
        .categoryName = _("Continente"),
        .height = 35,
        .weight = 9500,
        .description = gNoirnetPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 515,
        .trainerOffset = 14,
    },

    [NATIONAL_DEX_RAYQUAZA] =
    {
        .categoryName = _("Cielo"),
        .height = 70,
        .weight = 2065,
        .description = gRayquazaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 448,
        .trainerOffset = 12,
    },

    [NATIONAL_DEX_THISCRAKER] =
    {
        .categoryName = _("Deseo"),
        .height = 3,
        .weight = 11,
        .description = gThiscrakerPokedexText,
        .pokemonScale = 608,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEOXYS] =
    {
        .categoryName = _("ADN"),
        .height = 17,
        .weight = 608,
        .description = gDeoxysPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

	[NATIONAL_DEX_TURTWIG] =
	{
		.categoryName = _("TinyLeaf"),
		.height = 4,
		.weight = 102,
		.description = gTurtwigPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GROTLE] =
	{
		.categoryName = _("Grove"),
		.height = 11,
		.weight = 970,
		.description = gGrotlePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TORTERRA] =
	{
		.categoryName = _("Continent"),
		.height = 22,
		.weight = 3100,
		.description = gTorterraPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_EMBOB] =
	{
		.categoryName = _("Chimp"),
		.height = 5,
		.weight = 62,
		.description = gEmbobPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_COALGAR] =
	{
		.categoryName = _("Playful"),
		.height = 9,
		.weight = 220,
		.description = gCoalgarPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BOBISTIC] =
	{
		.categoryName = _("Flame"),
		.height = 12,
		.weight = 550,
		.description = gBobisticPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_OROFLOW] =
	{
		.categoryName = _("Penguin"),
		.height = 4,
		.weight = 52,
		.description = gOroflowPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_OROCAST] =
	{
		.categoryName = _("Penguin"),
		.height = 8,
		.weight = 230,
		.description = gOrocastPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ORROWHELM] =
	{
		.categoryName = _("Emperor"),
		.height = 17,
		.weight = 845,
		.description = gOrrowhelmPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_STARLY] =
	{
		.categoryName = _("Starling"),
		.height = 3,
		.weight = 20,
		.description = gStarlyPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_STARAVIA] =
	{
		.categoryName = _("Starling"),
		.height = 6,
		.weight = 155,
		.description = gStaraviaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_STARAPTOR] =
	{
		.categoryName = _("Predator"),
		.height = 12,
		.weight = 249,
		.description = gStaraptorPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_XDIK] =
	{
		.categoryName = _("PlumpMouse"),
		.height = 5,
		.weight = 200,
		.description = gXdikPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_XDEMON] =
	{
		.categoryName = _("Beaver"),
		.height = 10,
		.weight = 315,
		.description = gXdemonPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DESITRUS] =
	{
		.categoryName = _("Cricket"),
		.height = 3,
		.weight = 22,
		.description = gDesitrusPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DESQUEEZE] =
	{
		.categoryName = _("Cricket"),
		.height = 10,
		.weight = 255,
		.description = gDesqueezePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SHINX] =
	{
		.categoryName = _("Flash"),
		.height = 5,
		.weight = 95,
		.description = gShinxPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_RIMESLANCH] =
	{
		.categoryName = _("Spark"),
		.height = 9,
		.weight = 305,
		.description = gRimeslanchPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LUXRAY] =
	{
		.categoryName = _("Gleam Eyes"),
		.height = 14,
		.weight = 420,
		.description = gLuxrayPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BANSLIP] =
	{
		.categoryName = _("Bud"),
		.height = 2,
		.weight = 12,
		.description = gBanslipPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ROSERADE] =
	{
		.categoryName = _("Bouquet"),
		.height = 9,
		.weight = 145,
		.description = gRoseradePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CRANIDOS] =
	{
		.categoryName = _("Headbutt"),
		.height = 9,
		.weight = 315,
		.description = gCranidosPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_RAMPARDOS] =
	{
		.categoryName = _("Headbutt"),
		.height = 16,
		.weight = 1025,
		.description = gRampardosPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SHIELDON] =
	{
		.categoryName = _("Shield"),
		.height = 5,
		.weight = 570,
		.description = gShieldonPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BASTIODON] =
	{
		.categoryName = _("Shield"),
		.height = 13,
		.weight = 1495,
		.description = gBastiodonPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PARSLITO] =
	{
		.categoryName = _("Bagworm"),
		.height = 2,
		.weight = 34,
		.description = gParslitoPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MOJISLEY] =
	{
		.categoryName = _("Bagworm"),
		.height = 5,
		.weight = 65,
		.description = gMojisleyPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GAILORD] =
	{
		.categoryName = _("Moth"),
		.height = 9,
		.weight = 233,
		.description = gGailordPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_COMBEE] =
	{
		.categoryName = _("Tiny Bee"),
		.height = 3,
		.weight = 55,
		.description = gCombeePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_VESPIQUEN] =
	{
		.categoryName = _("Beehive"),
		.height = 12,
		.weight = 385,
		.description = gVespiquenPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DEADMOUS] =
	{
		.categoryName = _("EleSquirrel"),
		.height = 4,
		.weight = 39,
		.description = gDeadmousPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SQUIGGA] =
	{
		.categoryName = _("Sea Weasel"),
		.height = 7,
		.weight = 295,
		.description = gSquiggaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DESPARWARD] =
	{
		.categoryName = _("Sea Weasel"),
		.height = 11,
		.weight = 335,
		.description = gDesparwardPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BUSHIZARD] =
	{
		.categoryName = _("Cherry"),
		.height = 4,
		.weight = 33,
		.description = gBushizardPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_NOTYUHDAD] =
	{
		.categoryName = _("Blossom"),
		.height = 5,
		.weight = 93,
		.description = gNotyuhdadPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHOCCUDLE] =
	{
		.categoryName = _("SeaSlug"),
		.height = 3,
		.weight = 63,
		.description = gChoccudlePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHOCTIC] =
	{
		.categoryName = _("SeaSlug"),
		.height = 9,
		.weight = 299,
		.description = gChocticPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_AMBIPOM] =
	{
		.categoryName = _("Long Tail"),
		.height = 12,
		.weight = 203,
		.description = gAmbipomPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DRIFLOON] =
	{
		.categoryName = _("Balloon"),
		.height = 4,
		.weight = 12,
		.description = gDrifloonPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DRIFBLIM] =
	{
		.categoryName = _("Blimp"),
		.height = 12,
		.weight = 150,
		.description = gDrifblimPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BUNEARY] =
	{
		.categoryName = _("Rabbit"),
		.height = 4,
		.weight = 55,
		.description = gBunearyPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LOPUNNY] =
	{
		.categoryName = _("Rabbit"),
		.height = 12,
		.weight = 333,
		.description = gLopunnyPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MISMAGIUS] =
	{
		.categoryName = _("Magical"),
		.height = 9,
		.weight = 44,
		.description = gMismagiusPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_HONCHKROW] =
	{
		.categoryName = _("Big Boss"),
		.height = 9,
		.weight = 273,
		.description = gHonchkrowPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GLAMEOW] =
	{
		.categoryName = _("Catty"),
		.height = 5,
		.weight = 39,
		.description = gGlameowPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GORFOLD] =
	{
		.categoryName = _("Tiger Cat"),
		.height = 10,
		.weight = 438,
		.description = gGorfoldPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LUIWEE] =
	{
		.categoryName = _("Bell"),
		.height = 2,
		.weight = 6,
		.description = gLuiweePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_STUNKY] =
	{
		.categoryName = _("Skunk"),
		.height = 4,
		.weight = 192,
		.description = gStunkyPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SKUNTANK] =
	{
		.categoryName = _("Skunk"),
		.height = 10,
		.weight = 380,
		.description = gSkuntankPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BRONZOR] =
	{
		.categoryName = _("Bronze"),
		.height = 5,
		.weight = 605,
		.description = gBronzorPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BRONZONG] =
	{
		.categoryName = _("Bronze Bell"),
		.height = 13,
		.weight = 1870,
		.description = gBronzongPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BONSLY] =
	{
		.categoryName = _("Bonsai"),
		.height = 5,
		.weight = 150,
		.description = gBonslyPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MIMEJR] =
	{
		.categoryName = _("Mime"),
		.height = 6,
		.weight = 130,
		.description = gMimeJrPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_HANGINGY] =
	{
		.categoryName = _("Playhouse"),
		.height = 6,
		.weight = 244,
		.description = gHangingyPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ENDERAGON] =
	{
		.categoryName = _("Music Note"),
		.height = 5,
		.weight = 19,
		.description = gEnderagonPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHANCER] =
	{
		.categoryName = _("Forbidden"),
		.height = 10,
		.weight = 1080,
		.description = gChancerPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CAPPLE] =
	{
		.categoryName = _("Land Shark"),
		.height = 7,
		.weight = 205,
		.description = gCapplePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SHELLHAUL] =
	{
		.categoryName = _("Cave"),
		.height = 14,
		.weight = 560,
		.description = gShellhaulPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TRUCKOISE] =
	{
		.categoryName = _("Mach"),
		.height = 19,
		.weight = 950,
		.description = gTruckoisePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TROLOLING] =
	{
		.categoryName = _("Big Eater"),
		.height = 6,
		.weight = 1050,
		.description = gTrololingPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BRIXEL] =
	{
		.categoryName = _("Emanation"),
		.height = 7,
		.weight = 202,
		.description = gBrixelPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BLOKNOCK] =
	{
		.categoryName = _("Aura"),
		.height = 12,
		.weight = 540,
		.description = gBloknockPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_JOURNEMAP] =
	{
		.categoryName = _("Hippo"),
		.height = 8,
		.weight = 495,
		.description = gJournemapPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_JOURNESHIP] =
	{
		.categoryName = _("Heavyweight"),
		.height = 20,
		.weight = 3000,
		.description = gJourneshipPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SKORUPI] =
	{
		.categoryName = _("Scorpion"),
		.height = 8,
		.weight = 120,
		.description = gSkorupiPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DRAPION] =
	{
		.categoryName = _("Scorpion"),
		.height = 13,
		.weight = 615,
		.description = gDrapionPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CROAGUNK] =
	{
		.categoryName = _("Toxic Mouth"),
		.height = 7,
		.weight = 230,
		.description = gCroagunkPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TOXICROAK] =
	{
		.categoryName = _("Toxic Mouth"),
		.height = 13,
		.weight = 444,
		.description = gToxicroakPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CARNIVINE] =
	{
		.categoryName = _("Bug Catcher"),
		.height = 14,
		.weight = 270,
		.description = gCarnivinePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FINNEON] =
	{
		.categoryName = _("Wing Fish"),
		.height = 4,
		.weight = 70,
		.description = gFinneonPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LUMINEON] =
	{
		.categoryName = _("Neon"),
		.height = 12,
		.weight = 240,
		.description = gLumineonPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MANTYKE] =
	{
		.categoryName = _("Kite"),
		.height = 10,
		.weight = 650,
		.description = gMantykePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SNOVER] =
	{
		.categoryName = _("Frost Tree"),
		.height = 10,
		.weight = 505,
		.description = gSnoverPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ABOMASNOW] =
	{
		.categoryName = _("Frost Tree"),
		.height = 22,
		.weight = 1355,
		.description = gAbomasnowPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FREDUNKLE] =
	{
		.categoryName = _("Sharp Claw"),
		.height = 11,
		.weight = 340,
		.description = gFredunklePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MAGNEZONE] =
	{
		.categoryName = _("Magnet Area"),
		.height = 12,
		.weight = 1800,
		.description = gMagnezonePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LICKILICKY] =
	{
		.categoryName = _("Licking"),
		.height = 17,
		.weight = 1400,
		.description = gLickilickyPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_RHYPERIOR] =
	{
		.categoryName = _("Drill"),
		.height = 24,
		.weight = 2828,
		.description = gRhyperiorPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TANGROWTH] =
	{
		.categoryName = _("Vine"),
		.height = 20,
		.weight = 1286,
		.description = gTangrowthPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ELECTIVIRE] =
	{
		.categoryName = _("Thunderbolt"),
		.height = 18,
		.weight = 1386,
		.description = gElectivirePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TOASTRIDER] =
	{
		.categoryName = _("Blast"),
		.height = 16,
		.weight = 680,
		.description = gToastriderPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TOGEKISS] =
	{
		.categoryName = _("Jubilee"),
		.height = 15,
		.weight = 380,
		.description = gTogekissPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_YANMEGA] =
	{
		.categoryName = _("Ogre Darner"),
		.height = 19,
		.weight = 515,
		.description = gYanmegaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LEAFEON] =
	{
		.categoryName = _("Verdant"),
		.height = 10,
		.weight = 255,
		.description = gLeafeonPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GLACEON] =
	{
		.categoryName = _("Fresh Snow"),
		.height = 8,
		.weight = 259,
		.description = gGlaceonPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GLISCOR] =
	{
		.categoryName = _("Scorpion"),
		.height = 20,
		.weight = 425,
		.description = gGliscorPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MAMOSWINE] =
	{
		.categoryName = _("Twin Tusk"),
		.height = 25,
		.weight = 2910,
		.description = gMamoswinePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_HELLSPACK] =
	{
		.categoryName = _("Virtual"),
		.height = 9,
		.weight = 340,
		.description = gHellspackPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GALLADE] =
	{
		.categoryName = _("Blade"),
		.height = 16,
		.weight = 520,
		.description = gGalladePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PROBOPASS] =
	{
		.categoryName = _("Compass"),
		.height = 14,
		.weight = 3400,
		.description = gProbopassPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SKELEDOOM] =
	{
		.categoryName = _("Gripper"),
		.height = 22,
		.weight = 1066,
		.description = gSkeledoomPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BLINKRUPT] =
	{
		.categoryName = _("Snow Land"),
		.height = 13,
		.weight = 266,
		.description = gBlinkruptPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ROTOM] =
	{
		.categoryName = _("Plasma"),
		.height = 3,
		.weight = 3,
		.description = gRotomPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_UXIE] =
	{
		.categoryName = _("Knowledge"),
		.height = 3,
		.weight = 3,
		.description = gUxiePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MESPRIT] =
	{
		.categoryName = _("Emotion"),
		.height = 3,
		.weight = 3,
		.description = gMespritPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_AZELF] =
	{
		.categoryName = _("Willpower"),
		.height = 3,
		.weight = 3,
		.description = gAzelfPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DIALGA] =
	{
		.categoryName = _("Temporal"),
		.height = 54,
		.weight = 6830,
		.description = gDialgaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PALKIA] =
	{
		.categoryName = _("Spatial"),
		.height = 42,
		.weight = 3360,
		.description = gPalkiaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_HEATRAN] =
	{
		.categoryName = _("Lava Dome"),
		.height = 17,
		.weight = 4300,
		.description = gHeatranPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_REGIGIGAS] =
	{
		.categoryName = _("Colossal"),
		.height = 37,
		.weight = 4200,
		.description = gRegigigasPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GIRATINA] =
	{
		.categoryName = _("Renegade"),
		.height = 45,
		.weight = 7500,
		.description = gGiratinaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CRESSELIA] =
	{
		.categoryName = _("Lunar"),
		.height = 15,
		.weight = 856,
		.description = gCresseliaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PHIONE] =
	{
		.categoryName = _("Sea Drifter"),
		.height = 4,
		.weight = 31,
		.description = gPhionePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MANAPHY] =
	{
		.categoryName = _("Seafaring"),
		.height = 3,
		.weight = 14,
		.description = gManaphyPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DARKRAI] =
	{
		.categoryName = _("Pitch-Black"),
		.height = 15,
		.weight = 505,
		.description = gDarkraiPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SHAYMIN] =
	{
		.categoryName = _("Gratitude"),
		.height = 2,
		.weight = 21,
		.description = gShayminPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ARCEUS] =
	{
		.categoryName = _("Alpha"),
		.height = 32,
		.weight = 3200,
		.description = gArceusPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_VICTINI] =
	{
		.categoryName = _("Victory"),
		.height = 4,
		.weight = 40,
		.description = gVictiniPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SNIVY] =
	{
		.categoryName = _("Grass Snake"),
		.height = 6,
		.weight = 81,
		.description = gSnivyPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SERVINE] =
	{
		.categoryName = _("Grass Snake"),
		.height = 8,
		.weight = 160,
		.description = gServinePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SERPERIOR] =
	{
		.categoryName = _("Regal"),
		.height = 33,
		.weight = 630,
		.description = gSerperiorPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TEPIG] =
	{
		.categoryName = _("Fire Pig"),
		.height = 5,
		.weight = 99,
		.description = gTepigPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PIGNITE] =
	{
		.categoryName = _("Fire Pig"),
		.height = 10,
		.weight = 555,
		.description = gPignitePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_EMBOAR] =
	{
		.categoryName = _("Fire Pig"),
		.height = 16,
		.weight = 1500,
		.description = gEmboarPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_OSHAWOTT] =
	{
		.categoryName = _("Sea Otter"),
		.height = 5,
		.weight = 59,
		.description = gOshawottPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DEWOTT] =
	{
		.categoryName = _("Discipline"),
		.height = 8,
		.weight = 245,
		.description = gDewottPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SAMUROTT] =
	{
		.categoryName = _("Formidable"),
		.height = 15,
		.weight = 946,
		.description = gSamurottPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PATRAT] =
	{
		.categoryName = _("Scout"),
		.height = 5,
		.weight = 116,
		.description = gPatratPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_WATCHOG] =
	{
		.categoryName = _("Lookout"),
		.height = 11,
		.weight = 270,
		.description = gWatchogPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LILLIPUP] =
	{
		.categoryName = _("Puppy"),
		.height = 4,
		.weight = 41,
		.description = gLillipupPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_HERDIER] =
	{
		.categoryName = _("Loyal Dog"),
		.height = 9,
		.weight = 147,
		.description = gHerdierPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_STOUTLAND] =
	{
		.categoryName = _("Big-Hearted"),
		.height = 12,
		.weight = 610,
		.description = gStoutlandPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PURRLOIN] =
	{
		.categoryName = _("Devious"),
		.height = 4,
		.weight = 101,
		.description = gPurrloinPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LIEPARD] =
	{
		.categoryName = _("Cruel"),
		.height = 11,
		.weight = 375,
		.description = gLiepardPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PANSAGE] =
	{
		.categoryName = _("Grass Monkey"),
		.height = 6,
		.weight = 105,
		.description = gPansagePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SIMISAGE] =
	{
		.categoryName = _("Thorn Monkey"),
		.height = 11,
		.weight = 305,
		.description = gSimisagePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PANSEAR] =
	{
		.categoryName = _("High Temp"),
		.height = 6,
		.weight = 110,
		.description = gPansearPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SIMISEAR] =
	{
		.categoryName = _("Ember"),
		.height = 10,
		.weight = 280,
		.description = gSimisearPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PANPOUR] =
	{
		.categoryName = _("Spray"),
		.height = 6,
		.weight = 135,
		.description = gPanpourPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SIMIPOUR] =
	{
		.categoryName = _("Geyser"),
		.height = 10,
		.weight = 290,
		.description = gSimipourPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MUNNA] =
	{
		.categoryName = _("Dream Eater"),
		.height = 6,
		.weight = 233,
		.description = gMunnaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MUSHARNA] =
	{
		.categoryName = _("Drowsing"),
		.height = 11,
		.weight = 605,
		.description = gMusharnaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PIDOVE] =
	{
		.categoryName = _("Tiny Pigeon"),
		.height = 3,
		.weight = 21,
		.description = gPidovePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TRANQUILL] =
	{
		.categoryName = _("Wild Pigeon"),
		.height = 6,
		.weight = 150,
		.description = gTranquillPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_UNFEZANT] =
	{
		.categoryName = _("Proud"),
		.height = 12,
		.weight = 290,
		.description = gUnfezantPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BLITZLE] =
	{
		.categoryName = _("Electrified"),
		.height = 8,
		.weight = 298,
		.description = gBlitzlePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ZEBSTRIKA] =
	{
		.categoryName = _("Thunderbolt"),
		.height = 16,
		.weight = 795,
		.description = gZebstrikaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ROGGENROLA] =
	{
		.categoryName = _("Mantle"),
		.height = 4,
		.weight = 180,
		.description = gRoggenrolaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BOLDORE] =
	{
		.categoryName = _("Ore"),
		.height = 9,
		.weight = 1020,
		.description = gBoldorePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GIGALITH] =
	{
		.categoryName = _("Compressed"),
		.height = 17,
		.weight = 2600,
		.description = gGigalithPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_WOOBAT] =
	{
		.categoryName = _("Bat"),
		.height = 4,
		.weight = 21,
		.description = gWoobatPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SWOOBAT] =
	{
		.categoryName = _("Courting"),
		.height = 9,
		.weight = 105,
		.description = gSwoobatPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DRILBUR] =
	{
		.categoryName = _("Mole"),
		.height = 3,
		.weight = 85,
		.description = gDrilburPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_EXCADRILL] =
	{
		.categoryName = _("Subterrene"),
		.height = 7,
		.weight = 404,
		.description = gExcadrillPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_AUDINO] =
	{
		.categoryName = _("Hearing"),
		.height = 11,
		.weight = 310,
		.description = gAudinoPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TIMBURR] =
	{
		.categoryName = _("Muscular"),
		.height = 6,
		.weight = 125,
		.description = gTimburrPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GURDURR] =
	{
		.categoryName = _("Muscular"),
		.height = 12,
		.weight = 400,
		.description = gGurdurrPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CONKELDURR] =
	{
		.categoryName = _("Muscular"),
		.height = 14,
		.weight = 870,
		.description = gConkeldurrPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TYMPOLE] =
	{
		.categoryName = _("Tadpole"),
		.height = 5,
		.weight = 45,
		.description = gTympolePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PALPITOAD] =
	{
		.categoryName = _("Vibration"),
		.height = 8,
		.weight = 170,
		.description = gPalpitoadPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SEISMITOAD] =
	{
		.categoryName = _("Vibration"),
		.height = 15,
		.weight = 620,
		.description = gSeismitoadPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_THROH] =
	{
		.categoryName = _("Judo"),
		.height = 13,
		.weight = 555,
		.description = gThrohPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SAWK] =
	{
		.categoryName = _("Karate"),
		.height = 14,
		.weight = 510,
		.description = gSawkPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SEWADDLE] =
	{
		.categoryName = _("Sewing"),
		.height = 3,
		.weight = 25,
		.description = gSewaddlePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SWADLOON] =
	{
		.categoryName = _("Leaf Wrapped"),
		.height = 5,
		.weight = 73,
		.description = gSwadloonPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LEAVANNY] =
	{
		.categoryName = _("Nurturing"),
		.height = 12,
		.weight = 205,
		.description = gLeavannyPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_VENIPEDE] =
	{
		.categoryName = _("Centipede"),
		.height = 4,
		.weight = 53,
		.description = gVenipedePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_WHIRLIPEDE] =
	{
		.categoryName = _("Curlipede"),
		.height = 12,
		.weight = 585,
		.description = gWhirlipedePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SCOLIPEDE] =
	{
		.categoryName = _("Megapede"),
		.height = 25,
		.weight = 2005,
		.description = gScolipedePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_COTTONEE] =
	{
		.categoryName = _("CottonPuff"),
		.height = 3,
		.weight = 6,
		.description = gCottoneePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_WHIMSICOTT] =
	{
		.categoryName = _("Windveiled"),
		.height = 7,
		.weight = 66,
		.description = gWhimsicottPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PETILIL] =
	{
		.categoryName = _("Bulb"),
		.height = 5,
		.weight = 66,
		.description = gPetililPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LILLIGANT] =
	{
		.categoryName = _("Flowering"),
		.height = 11,
		.weight = 163,
		.description = gLilligantPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BASCULIN] =
	{
		.categoryName = _("Hostile"),
		.height = 10,
		.weight = 180,
		.description = gBasculinPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SANDILE] =
	{
		.categoryName = _("Desert Croc"),
		.height = 7,
		.weight = 152,
		.description = gSandilePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KROKOROK] =
	{
		.categoryName = _("Desert Croc"),
		.height = 10,
		.weight = 334,
		.description = gKrokorokPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KROOKODILE] =
	{
		.categoryName = _("Intimidate"),
		.height = 15,
		.weight = 963,
		.description = gKrookodilePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DARUMAKA] =
	{
		.categoryName = _("Zen Charm"),
		.height = 6,
		.weight = 375,
		.description = gDarumakaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DARMANITAN] =
	{
		.categoryName = _("Blazing"),
		.height = 13,
		.weight = 929,
		.description = gDarmanitanPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MARACTUS] =
	{
		.categoryName = _("Cactus"),
		.height = 10,
		.weight = 280,
		.description = gMaractusPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DWEBBLE] =
	{
		.categoryName = _("Rock Inn"),
		.height = 3,
		.weight = 145,
		.description = gDwebblePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CRUSTLE] =
	{
		.categoryName = _("Stone Home"),
		.height = 14,
		.weight = 2000,
		.description = gCrustlePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SCRAGGY] =
	{
		.categoryName = _("Shedding"),
		.height = 6,
		.weight = 118,
		.description = gScraggyPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SCRAFTY] =
	{
		.categoryName = _("Hoodlum"),
		.height = 11,
		.weight = 300,
		.description = gScraftyPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SIGILYPH] =
	{
		.categoryName = _("Avianoid"),
		.height = 14,
		.weight = 140,
		.description = gSigilyphPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_YAMASK] =
	{
		.categoryName = _("Spirit"),
		.height = 5,
		.weight = 15,
		.description = gYamaskPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_COFAGRIGUS] =
	{
		.categoryName = _("Coffin"),
		.height = 17,
		.weight = 765,
		.description = gCofagrigusPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TIRTOUGA] =
	{
		.categoryName = _("Prototurtle"),
		.height = 7,
		.weight = 165,
		.description = gTirtougaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CARRACOSTA] =
	{
		.categoryName = _("Prototurtle"),
		.height = 12,
		.weight = 810,
		.description = gCarracostaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ARCHEN] =
	{
		.categoryName = _("First Bird"),
		.height = 5,
		.weight = 95,
		.description = gArchenPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ARCHEOPS] =
	{
		.categoryName = _("First Bird"),
		.height = 14,
		.weight = 320,
		.description = gArcheopsPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TRUBBISH] =
	{
		.categoryName = _("Trash Bag"),
		.height = 6,
		.weight = 310,
		.description = gTrubbishPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GARBODOR] =
	{
		.categoryName = _("Trash Heap"),
		.height = 19,
		.weight = 1073,
		.description = gGarbodorPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ZORUA] =
	{
		.categoryName = _("Tricky Fox"),
		.height = 7,
		.weight = 125,
		.description = gZoruaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ZOROARK] =
	{
		.categoryName = _("Illusion Fox"),
		.height = 16,
		.weight = 811,
		.description = gZoroarkPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MINCCINO] =
	{
		.categoryName = _("Chinchilla"),
		.height = 4,
		.weight = 58,
		.description = gMinccinoPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CINCCINO] =
	{
		.categoryName = _("Scarf"),
		.height = 5,
		.weight = 75,
		.description = gCinccinoPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GOTHITA] =
	{
		.categoryName = _("Fixation"),
		.height = 4,
		.weight = 58,
		.description = gGothitaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GOTHORITA] =
	{
		.categoryName = _("Manipulate"),
		.height = 7,
		.weight = 180,
		.description = gGothoritaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GOTHITELLE] =
	{
		.categoryName = _("Astral Body"),
		.height = 15,
		.weight = 440,
		.description = gGothitellePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SOLOSIS] =
	{
		.categoryName = _("Cell"),
		.height = 3,
		.weight = 10,
		.description = gSolosisPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DUOSION] =
	{
		.categoryName = _("Mitosis"),
		.height = 6,
		.weight = 80,
		.description = gDuosionPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_REUNICLUS] =
	{
		.categoryName = _("Multiplying"),
		.height = 10,
		.weight = 201,
		.description = gReuniclusPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DUCKLETT] =
	{
		.categoryName = _("Water Bird"),
		.height = 5,
		.weight = 55,
		.description = gDucklettPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SWANNA] =
	{
		.categoryName = _("White Bird"),
		.height = 13,
		.weight = 242,
		.description = gSwannaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_VANILLITE] =
	{
		.categoryName = _("Fresh Snow"),
		.height = 4,
		.weight = 57,
		.description = gVanillitePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_VANILLISH] =
	{
		.categoryName = _("Icy Snow"),
		.height = 11,
		.weight = 410,
		.description = gVanillishPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_VANILLUXE] =
	{
		.categoryName = _("Snowstorm"),
		.height = 13,
		.weight = 575,
		.description = gVanilluxePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DEERLING] =
	{
		.categoryName = _("Season"),
		.height = 6,
		.weight = 195,
		.description = gDeerlingPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SAWSBUCK] =
	{
		.categoryName = _("Season"),
		.height = 19,
		.weight = 925,
		.description = gSawsbuckPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_EMOLGA] =
	{
		.categoryName = _("Sky Squirrel"),
		.height = 4,
		.weight = 50,
		.description = gEmolgaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KARRABLAST] =
	{
		.categoryName = _("Clamping"),
		.height = 5,
		.weight = 59,
		.description = gKarrablastPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ESCAVALIER] =
	{
		.categoryName = _("Cavalry"),
		.height = 10,
		.weight = 330,
		.description = gEscavalierPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FOONGUS] =
	{
		.categoryName = _("Mushroom"),
		.height = 2,
		.weight = 10,
		.description = gFoongusPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_AMOONGUSS] =
	{
		.categoryName = _("Mushroom"),
		.height = 6,
		.weight = 105,
		.description = gAmoongussPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FRILLISH] =
	{
		.categoryName = _("Floating"),
		.height = 12,
		.weight = 330,
		.description = gFrillishPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_JELLICENT] =
	{
		.categoryName = _("Floating"),
		.height = 22,
		.weight = 1350,
		.description = gJellicentPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ALOMOMOLA] =
	{
		.categoryName = _("Caring"),
		.height = 12,
		.weight = 316,
		.description = gAlomomolaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_JOLTIK] =
	{
		.categoryName = _("Attaching"),
		.height = 1,
		.weight = 6,
		.description = gJoltikPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GALVANTULA] =
	{
		.categoryName = _("EleSpider"),
		.height = 8,
		.weight = 143,
		.description = gGalvantulaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FERROSEED] =
	{
		.categoryName = _("Thorn Seed"),
		.height = 6,
		.weight = 188,
		.description = gFerroseedPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FERROTHORN] =
	{
		.categoryName = _("Thorn Pod"),
		.height = 10,
		.weight = 1100,
		.description = gFerrothornPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KLINK] =
	{
		.categoryName = _("Gear"),
		.height = 3,
		.weight = 210,
		.description = gKlinkPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KLANG] =
	{
		.categoryName = _("Gear"),
		.height = 6,
		.weight = 510,
		.description = gKlangPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KLINKLANG] =
	{
		.categoryName = _("Gear"),
		.height = 6,
		.weight = 810,
		.description = gKlinklangPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TYNAMO] =
	{
		.categoryName = _("EleFish"),
		.height = 2,
		.weight = 3,
		.description = gTynamoPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_EELEKTRIK] =
	{
		.categoryName = _("EleFish"),
		.height = 12,
		.weight = 220,
		.description = gEelektrikPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_EELEKTROSS] =
	{
		.categoryName = _("EleFish"),
		.height = 21,
		.weight = 805,
		.description = gEelektrossPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ELGYEM] =
	{
		.categoryName = _("Cerebral"),
		.height = 5,
		.weight = 90,
		.description = gElgyemPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BEHEEYEM] =
	{
		.categoryName = _("Cerebral"),
		.height = 10,
		.weight = 345,
		.description = gBeheeyemPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LITWICK] =
	{
		.categoryName = _("Candle"),
		.height = 3,
		.weight = 31,
		.description = gLitwickPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LAMPENT] =
	{
		.categoryName = _("Lamp"),
		.height = 6,
		.weight = 130,
		.description = gLampentPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHANDELURE] =
	{
		.categoryName = _("Luring"),
		.height = 10,
		.weight = 343,
		.description = gChandelurePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_AXEW] =
	{
		.categoryName = _("Tusk"),
		.height = 6,
		.weight = 180,
		.description = gAxewPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FRAXURE] =
	{
		.categoryName = _("Axe Jaw"),
		.height = 10,
		.weight = 360,
		.description = gFraxurePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_HAXORUS] =
	{
		.categoryName = _("Axe Jaw"),
		.height = 18,
		.weight = 1055,
		.description = gHaxorusPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CUBCHOO] =
	{
		.categoryName = _("Chill"),
		.height = 5,
		.weight = 85,
		.description = gCubchooPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BEARTIC] =
	{
		.categoryName = _("Freezing"),
		.height = 26,
		.weight = 2600,
		.description = gBearticPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CRYOGONAL] =
	{
		.categoryName = _("Crystallize"),
		.height = 11,
		.weight = 1480,
		.description = gCryogonalPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SHELMET] =
	{
		.categoryName = _("Snail"),
		.height = 4,
		.weight = 77,
		.description = gShelmetPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ACCELGOR] =
	{
		.categoryName = _("ShellOut"),
		.height = 8,
		.weight = 253,
		.description = gAccelgorPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_STUNFISK] =
	{
		.categoryName = _("Trap"),
		.height = 7,
		.weight = 110,
		.description = gStunfiskPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MIENFOO] =
	{
		.categoryName = _("Martial Arts"),
		.height = 9,
		.weight = 200,
		.description = gMienfooPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MIENSHAO] =
	{
		.categoryName = _("Martial Arts"),
		.height = 14,
		.weight = 355,
		.description = gMienshaoPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DRUDDIGON] =
	{
		.categoryName = _("Cave"),
		.height = 16,
		.weight = 1390,
		.description = gDruddigonPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GOLETT] =
	{
		.categoryName = _("Automaton"),
		.height = 10,
		.weight = 920,
		.description = gGolettPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GOLURK] =
	{
		.categoryName = _("Automaton"),
		.height = 28,
		.weight = 3300,
		.description = gGolurkPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PAWNIARD] =
	{
		.categoryName = _("Sharp Blade"),
		.height = 5,
		.weight = 102,
		.description = gPawniardPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BISHARP] =
	{
		.categoryName = _("Sword Blade"),
		.height = 16,
		.weight = 700,
		.description = gBisharpPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BOUFFALANT] =
	{
		.categoryName = _("Bash Buffalo"),
		.height = 16,
		.weight = 946,
		.description = gBouffalantPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_RUFFLET] =
	{
		.categoryName = _("Eaglet"),
		.height = 5,
		.weight = 105,
		.description = gRuffletPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BRAVIARY] =
	{
		.categoryName = _("Valiant"),
		.height = 15,
		.weight = 410,
		.description = gBraviaryPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_VULLABY] =
	{
		.categoryName = _("Diapered"),
		.height = 5,
		.weight = 90,
		.description = gVullabyPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MANDIBUZZ] =
	{
		.categoryName = _("Bone Vulture"),
		.height = 12,
		.weight = 395,
		.description = gMandibuzzPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_HEATMOR] =
	{
		.categoryName = _("Anteater"),
		.height = 14,
		.weight = 580,
		.description = gHeatmorPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DURANT] =
	{
		.categoryName = _("Iron Ant"),
		.height = 3,
		.weight = 330,
		.description = gDurantPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DEINO] =
	{
		.categoryName = _("Irate"),
		.height = 8,
		.weight = 173,
		.description = gDeinoPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ZWEILOUS] =
	{
		.categoryName = _("Hostile"),
		.height = 14,
		.weight = 500,
		.description = gZweilousPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_HYDREIGON] =
	{
		.categoryName = _("Brutal"),
		.height = 18,
		.weight = 1600,
		.description = gHydreigonPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LARVESTA] =
	{
		.categoryName = _("Torch"),
		.height = 11,
		.weight = 288,
		.description = gLarvestaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_VOLCARONA] =
	{
		.categoryName = _("Sun"),
		.height = 16,
		.weight = 460,
		.description = gVolcaronaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_COBALION] =
	{
		.categoryName = _("Iron Will"),
		.height = 21,
		.weight = 2500,
		.description = gCobalionPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TERRAKION] =
	{
		.categoryName = _("Cavern"),
		.height = 19,
		.weight = 2600,
		.description = gTerrakionPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_VIRIZION] =
	{
		.categoryName = _("Grassland"),
		.height = 20,
		.weight = 2000,
		.description = gVirizionPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TORNADUS] =
	{
		.categoryName = _("Cyclone"),
		.height = 15,
		.weight = 630,
		.description = gTornadusPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_THUNDURUS] =
	{
		.categoryName = _("Bolt Strike"),
		.height = 15,
		.weight = 610,
		.description = gThundurusPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_RESHIRAM] =
	{
		.categoryName = _("Vast White"),
		.height = 32,
		.weight = 3300,
		.description = gReshiramPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ZEKROM] =
	{
		.categoryName = _("Deep Black"),
		.height = 29,
		.weight = 3450,
		.description = gZekromPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LANDORUS] =
	{
		.categoryName = _("Abundance"),
		.height = 15,
		.weight = 680,
		.description = gLandorusPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KYUREM] =
	{
		.categoryName = _("Boundary"),
		.height = 30,
		.weight = 3250,
		.description = gKyuremPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KELDEO] =
	{
		.categoryName = _("Colt"),
		.height = 14,
		.weight = 485,
		.description = gKeldeoPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MELOETTA] =
	{
		.categoryName = _("Melody"),
		.height = 6,
		.weight = 65,
		.description = gMeloettaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GENESECT] =
	{
		.categoryName = _("Paleozoic"),
		.height = 15,
		.weight = 825,
		.description = gGenesectPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHESPIN] =
	{
		.categoryName = _("Spiny Nut"),
		.height = 4,
		.weight = 90,
		.description = gChespinPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_QUILLADIN] =
	{
		.categoryName = _("Spiny Armor"),
		.height = 7,
		.weight = 290,
		.description = gQuilladinPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHESNAUGHT] =
	{
		.categoryName = _("Spiny Armor"),
		.height = 16,
		.weight = 900,
		.description = gChesnaughtPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FENNEKIN] =
	{
		.categoryName = _("Fox"),
		.height = 4,
		.weight = 94,
		.description = gFennekinPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BRAIXEN] =
	{
		.categoryName = _("Fox"),
		.height = 10,
		.weight = 145,
		.description = gBraixenPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DELPHOX] =
	{
		.categoryName = _("Fox"),
		.height = 15,
		.weight = 390,
		.description = gDelphoxPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FROAKIE] =
	{
		.categoryName = _("Bubble Frog"),
		.height = 3,
		.weight = 70,
		.description = gFroakiePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FROGADIER] =
	{
		.categoryName = _("Bubble Frog"),
		.height = 6,
		.weight = 109,
		.description = gFrogadierPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GRENINJA] =
	{
		.categoryName = _("Ninja"),
		.height = 15,
		.weight = 400,
		.description = gGreninjaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BUNNELBY] =
	{
		.categoryName = _("Digging"),
		.height = 4,
		.weight = 50,
		.description = gBunnelbyPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DIGGERSBY] =
	{
		.categoryName = _("Digging"),
		.height = 10,
		.weight = 424,
		.description = gDiggersbyPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FLETCHLING] =
	{
		.categoryName = _("Tiny Robin"),
		.height = 3,
		.weight = 17,
		.description = gFletchlingPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FLETCHINDER] =
	{
		.categoryName = _("Ember"),
		.height = 7,
		.weight = 160,
		.description = gFletchinderPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TALONFLAME] =
	{
		.categoryName = _("Scorching"),
		.height = 12,
		.weight = 245,
		.description = gTalonflamePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SCATTERBUG] =
	{
		.categoryName = _("Scatterdust"),
		.height = 3,
		.weight = 25,
		.description = gScatterbugPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SPEWPA] =
	{
		.categoryName = _("Scatterdust"),
		.height = 3,
		.weight = 84,
		.description = gSpewpaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_VIVILLON] =
	{
		.categoryName = _("Scale"),
		.height = 12,
		.weight = 170,
		.description = gVivillonPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LITLEO] =
	{
		.categoryName = _("Lion Cub"),
		.height = 6,
		.weight = 135,
		.description = gLitleoPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PYROAR] =
	{
		.categoryName = _("Royal"),
		.height = 15,
		.weight = 815,
		.description = gPyroarPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FLABEBE] =
	{
		.categoryName = _("Single Bloom"),
		.height = 1,
		.weight = 1,
		.description = gFlabebePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FLOETTE] =
	{
		.categoryName = _("Single Bloom"),
		.height = 2,
		.weight = 9,
		.description = gFloettePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FLORGES] =
	{
		.categoryName = _("Garden"),
		.height = 11,
		.weight = 100,
		.description = gFlorgesPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SKIDDO] =
	{
		.categoryName = _("Mount"),
		.height = 9,
		.weight = 310,
		.description = gSkiddoPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GOGOAT] =
	{
		.categoryName = _("Mount"),
		.height = 17,
		.weight = 910,
		.description = gGogoatPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PANCHAM] =
	{
		.categoryName = _("Playful"),
		.height = 6,
		.weight = 80,
		.description = gPanchamPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PANGORO] =
	{
		.categoryName = _("Daunting"),
		.height = 21,
		.weight = 1360,
		.description = gPangoroPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FURFROU] =
	{
		.categoryName = _("Poodle"),
		.height = 12,
		.weight = 280,
		.description = gFurfrouPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ESPURR] =
	{
		.categoryName = _("Restraint"),
		.height = 3,
		.weight = 35,
		.description = gEspurrPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MEOWSTIC] =
	{
		.categoryName = _("Constraint"),
		.height = 6,
		.weight = 85,
		.description = gMeowsticPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_HONEDGE] =
	{
		.categoryName = _("Sword"),
		.height = 8,
		.weight = 20,
		.description = gHonedgePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DOUBLADE] =
	{
		.categoryName = _("Sword"),
		.height = 8,
		.weight = 45,
		.description = gDoubladePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_AEGISLASH] =
	{
		.categoryName = _("Royal Sword"),
		.height = 17,
		.weight = 530,
		.description = gAegislashPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SPRITZEE] =
	{
		.categoryName = _("Perfume"),
		.height = 2,
		.weight = 5,
		.description = gSpritzeePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_AROMATISSE] =
	{
		.categoryName = _("Fragrance"),
		.height = 8,
		.weight = 155,
		.description = gAromatissePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SWIRLIX] =
	{
		.categoryName = _("Cotton Candy"),
		.height = 4,
		.weight = 35,
		.description = gSwirlixPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SLURPUFF] =
	{
		.categoryName = _("Meringue"),
		.height = 8,
		.weight = 50,
		.description = gSlurpuffPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_INKAY] =
	{
		.categoryName = _("Revolving"),
		.height = 4,
		.weight = 35,
		.description = gInkayPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MALAMAR] =
	{
		.categoryName = _("Overturning"),
		.height = 15,
		.weight = 470,
		.description = gMalamarPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BINACLE] =
	{
		.categoryName = _("Two-Handed"),
		.height = 5,
		.weight = 310,
		.description = gBinaclePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BARBARACLE] =
	{
		.categoryName = _("Collective"),
		.height = 13,
		.weight = 960,
		.description = gBarbaraclePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SKRELP] =
	{
		.categoryName = _("Mock Kelp"),
		.height = 5,
		.weight = 73,
		.description = gSkrelpPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DRAGALGE] =
	{
		.categoryName = _("Mock Kelp"),
		.height = 18,
		.weight = 815,
		.description = gDragalgePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CLAUNCHER] =
	{
		.categoryName = _("Water Gun"),
		.height = 5,
		.weight = 83,
		.description = gClauncherPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CLAWITZER] =
	{
		.categoryName = _("Howitzer"),
		.height = 13,
		.weight = 353,
		.description = gClawitzerPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_HELIOPTILE] =
	{
		.categoryName = _("Generator"),
		.height = 5,
		.weight = 60,
		.description = gHelioptilePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_HELIOLISK] =
	{
		.categoryName = _("Generator"),
		.height = 10,
		.weight = 210,
		.description = gHelioliskPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TYRUNT] =
	{
		.categoryName = _("Royal Heir"),
		.height = 8,
		.weight = 260,
		.description = gTyruntPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TYRANTRUM] =
	{
		.categoryName = _("Despot"),
		.height = 25,
		.weight = 2700,
		.description = gTyrantrumPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_AMAURA] =
	{
		.categoryName = _("Tundra"),
		.height = 13,
		.weight = 252,
		.description = gAmauraPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_AURORUS] =
	{
		.categoryName = _("Tundra"),
		.height = 27,
		.weight = 2250,
		.description = gAurorusPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SYLVEON] =
	{
		.categoryName = _("Intertwine"),
		.height = 10,
		.weight = 235,
		.description = gSylveonPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_HAWLUCHA] =
	{
		.categoryName = _("Wrestling"),
		.height = 8,
		.weight = 215,
		.description = gHawluchaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DEDENNE] =
	{
		.categoryName = _("Antenna"),
		.height = 2,
		.weight = 22,
		.description = gDedennePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CARBINK] =
	{
		.categoryName = _("Jewel"),
		.height = 3,
		.weight = 57,
		.description = gCarbinkPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GOOMY] =
	{
		.categoryName = _("Soft Tissue"),
		.height = 3,
		.weight = 28,
		.description = gGoomyPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SLIGGOO] =
	{
		.categoryName = _("Soft Tissue"),
		.height = 8,
		.weight = 175,
		.description = gSliggooPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GOODRA] =
	{
		.categoryName = _("Dragon"),
		.height = 20,
		.weight = 1505,
		.description = gGoodraPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KLEFKI] =
	{
		.categoryName = _("Key Ring"),
		.height = 2,
		.weight = 30,
		.description = gKlefkiPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PHANTUMP] =
	{
		.categoryName = _("Stump"),
		.height = 4,
		.weight = 70,
		.description = gPhantumpPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TREVENANT] =
	{
		.categoryName = _("Elder Tree"),
		.height = 15,
		.weight = 710,
		.description = gTrevenantPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PUMPKABOO] =
	{
		.categoryName = _("Pumpkin"),
		.height = 4,
		.weight = 50,
		.description = gPumpkabooPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GOURGEIST] =
	{
		.categoryName = _("Pumpkin"),
		.height = 9,
		.weight = 125,
		.description = gGourgeistPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BERGMITE] =
	{
		.categoryName = _("Ice Chunk"),
		.height = 10,
		.weight = 995,
		.description = gBergmitePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_AVALUGG] =
	{
		.categoryName = _("Iceberg"),
		.height = 20,
		.weight = 5050,
		.description = gAvaluggPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_NOIBAT] =
	{
		.categoryName = _("Sound Wave"),
		.height = 5,
		.weight = 80,
		.description = gNoibatPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_NOIVERN] =
	{
		.categoryName = _("Sound Wave"),
		.height = 15,
		.weight = 850,
		.description = gNoivernPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_XERNEAS] =
	{
		.categoryName = _("Life"),
		.height = 30,
		.weight = 2150,
		.description = gXerneasPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_YVELTAL] =
	{
		.categoryName = _("Destruction"),
		.height = 58,
		.weight = 2030,
		.description = gYveltalPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ZYGARDE] =
	{
		.categoryName = _("Order"),
		.height = 50,
		.weight = 3050,
		.description = gZygardePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DIANCIE] =
	{
		.categoryName = _("Jewel"),
		.height = 7,
		.weight = 88,
		.description = gDianciePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_HOOPA] =
	{
		.categoryName = _("Mischief"),
		.height = 5,
		.weight = 90,
		.description = gHoopaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_VOLCANION] =
	{
		.categoryName = _("Steam"),
		.height = 17,
		.weight = 1950,
		.description = gVolcanionPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ROWLET] =
	{
		.categoryName = _("Grass Quill"),
		.height = 3,
		.weight = 15,
		.description = gRowletPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DARTRIX] =
	{
		.categoryName = _("Blade Quill"),
		.height = 7,
		.weight = 160,
		.description = gDartrixPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DECIDUEYE] =
	{
		.categoryName = _("Arrow Quill"),
		.height = 16,
		.weight = 366,
		.description = gDecidueyePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LITTEN] =
	{
		.categoryName = _("Fire Cat"),
		.height = 4,
		.weight = 43,
		.description = gLittenPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TORRACAT] =
	{
		.categoryName = _("Fire Cat"),
		.height = 7,
		.weight = 250,
		.description = gTorracatPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_INCINEROAR] =
	{
		.categoryName = _("Heel"),
		.height = 18,
		.weight = 830,
		.description = gIncineroarPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_POPPLIO] =
	{
		.categoryName = _("Sea Lion"),
		.height = 4,
		.weight = 75,
		.description = gPopplioPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BRIONNE] =
	{
		.categoryName = _("Pop Star"),
		.height = 6,
		.weight = 175,
		.description = gBrionnePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PRIMARINA] =
	{
		.categoryName = _("Soloist"),
		.height = 18,
		.weight = 440,
		.description = gPrimarinaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PIKIPEK] =
	{
		.categoryName = _("Woodpecker"),
		.height = 3,
		.weight = 12,
		.description = gPikipekPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TRUMBEAK] =
	{
		.categoryName = _("Bugle Beak"),
		.height = 6,
		.weight = 148,
		.description = gTrumbeakPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TOUCANNON] =
	{
		.categoryName = _("Cannon"),
		.height = 11,
		.weight = 260,
		.description = gToucannonPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_YUNGOOS] =
	{
		.categoryName = _("Loitering"),
		.height = 4,
		.weight = 60,
		.description = gYungoosPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GUMSHOOS] =
	{
		.categoryName = _("Stakeout"),
		.height = 7,
		.weight = 142,
		.description = gGumshoosPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GRUBBIN] =
	{
		.categoryName = _("Larva"),
		.height = 4,
		.weight = 44,
		.description = gGrubbinPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHARJABUG] =
	{
		.categoryName = _("Battery"),
		.height = 5,
		.weight = 105,
		.description = gCharjabugPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_VIKAVOLT] =
	{
		.categoryName = _("Stag Beetle"),
		.height = 15,
		.weight = 450,
		.description = gVikavoltPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CRABRAWLER] =
	{
		.categoryName = _("Boxing"),
		.height = 6,
		.weight = 70,
		.description = gCrabrawlerPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CRABOMINABLE] =
	{
		.categoryName = _("Woolly Crab"),
		.height = 17,
		.weight = 1800,
		.description = gCrabominablePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ORICORIO] =
	{
		.categoryName = _("Dancing"),
		.height = 6,
		.weight = 34,
		.description = gOricorioPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CUTIEFLY] =
	{
		.categoryName = _("Bee Fly"),
		.height = 1,
		.weight = 2,
		.description = gCutieflyPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_RIBOMBEE] =
	{
		.categoryName = _("Bee Fly"),
		.height = 2,
		.weight = 5,
		.description = gRibombeePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ROCKRUFF] =
	{
		.categoryName = _("Puppy"),
		.height = 5,
		.weight = 92,
		.description = gRockruffPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LYCANROC] =
	{
		.categoryName = _("Wolf"),
		.height = 8,
		.weight = 250,
		.description = gLycanrocPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_WISHIWASHI] =
	{
		.categoryName = _("Small Fry"),
		.height = 2,
		.weight = 3,
		.description = gWishiwashiPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MAREANIE] =
	{
		.categoryName = _("Brutal Star"),
		.height = 4,
		.weight = 80,
		.description = gMareaniePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TOXAPEX] =
	{
		.categoryName = _("Brutal Star"),
		.height = 7,
		.weight = 145,
		.description = gToxapexPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MUDBRAY] =
	{
		.categoryName = _("Donkey"),
		.height = 10,
		.weight = 1100,
		.description = gMudbrayPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MUDSDALE] =
	{
		.categoryName = _("Draft Horse"),
		.height = 25,
		.weight = 9200,
		.description = gMudsdalePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DEWPIDER] =
	{
		.categoryName = _("Water Bubble"),
		.height = 3,
		.weight = 40,
		.description = gDewpiderPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ARAQUANID] =
	{
		.categoryName = _("Water Bubble"),
		.height = 18,
		.weight = 820,
		.description = gAraquanidPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FOMANTIS] =
	{
		.categoryName = _("Sickle Grass"),
		.height = 3,
		.weight = 15,
		.description = gFomantisPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LURANTIS] =
	{
		.categoryName = _("Bloom Sickle"),
		.height = 9,
		.weight = 185,
		.description = gLurantisPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MORELULL] =
	{
		.categoryName = _("Illuminate"),
		.height = 2,
		.weight = 15,
		.description = gMorelullPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SHIINOTIC] =
	{
		.categoryName = _("Illuminate"),
		.height = 10,
		.weight = 115,
		.description = gShiinoticPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SALANDIT] =
	{
		.categoryName = _("Toxic Lizard"),
		.height = 6,
		.weight = 48,
		.description = gSalanditPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SALAZZLE] =
	{
		.categoryName = _("Toxic Lizard"),
		.height = 12,
		.weight = 222,
		.description = gSalazzlePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_STUFFUL] =
	{
		.categoryName = _("Flailing"),
		.height = 5,
		.weight = 68,
		.description = gStuffulPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BEWEAR] =
	{
		.categoryName = _("Strong Arm"),
		.height = 21,
		.weight = 1350,
		.description = gBewearPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BOUNSWEET] =
	{
		.categoryName = _("Fruit"),
		.height = 3,
		.weight = 32,
		.description = gBounsweetPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_STEENEE] =
	{
		.categoryName = _("Fruit"),
		.height = 7,
		.weight = 82,
		.description = gSteeneePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TSAREENA] =
	{
		.categoryName = _("Fruit"),
		.height = 12,
		.weight = 214,
		.description = gTsareenaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_COMFEY] =
	{
		.categoryName = _("Posy Picker"),
		.height = 1,
		.weight = 3,
		.description = gComfeyPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ORANGURU] =
	{
		.categoryName = _("Sage"),
		.height = 15,
		.weight = 760,
		.description = gOranguruPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PASSIMIAN] =
	{
		.categoryName = _("Teamwork"),
		.height = 20,
		.weight = 828,
		.description = gPassimianPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_WIMPOD] =
	{
		.categoryName = _("Turn Tail"),
		.height = 5,
		.weight = 120,
		.description = gWimpodPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GOLISOPOD] =
	{
		.categoryName = _("Hard Scale"),
		.height = 20,
		.weight = 1080,
		.description = gGolisopodPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SANDYGAST] =
	{
		.categoryName = _("Sand Heap"),
		.height = 5,
		.weight = 700,
		.description = gSandygastPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PALOSSAND] =
	{
		.categoryName = _("Sand Castle"),
		.height = 13,
		.weight = 2500,
		.description = gPalossandPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PYUKUMUKU] =
	{
		.categoryName = _("Sea Cucumber"),
		.height = 3,
		.weight = 12,
		.description = gPyukumukuPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TYPE_NULL] =
	{
		.categoryName = _("Synthetic"),
		.height = 19,
		.weight = 1205,
		.description = gTypeNullPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SILVALLY] =
	{
		.categoryName = _("Synthetic"),
		.height = 23,
		.weight = 1005,
		.description = gSilvallyPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MINIOR] =
	{
		.categoryName = _("Meteor"),
		.height = 3,
		.weight = 400,
		.description = gMiniorPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KOMALA] =
	{
		.categoryName = _("Drowsing"),
		.height = 4,
		.weight = 199,
		.description = gKomalaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TURTONATOR] =
	{
		.categoryName = _("Blast Turtle"),
		.height = 20,
		.weight = 2120,
		.description = gTurtonatorPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TOGEDEMARU] =
	{
		.categoryName = _("Roly-Poly"),
		.height = 3,
		.weight = 33,
		.description = gTogedemaruPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MIMIKYU] =
	{
		.categoryName = _("Disguise"),
		.height = 2,
		.weight = 7,
		.description = gMimikyuPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BRUXISH] =
	{
		.categoryName = _("Gnash Teeth"),
		.height = 9,
		.weight = 190,
		.description = gBruxishPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DRAMPA] =
	{
		.categoryName = _("Placid"),
		.height = 30,
		.weight = 1850,
		.description = gDrampaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DHELMISE] =
	{
		.categoryName = _("Sea Creeper"),
		.height = 39,
		.weight = 2100,
		.description = gDhelmisePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_JANGMO_O] =
	{
		.categoryName = _("Scaly"),
		.height = 6,
		.weight = 297,
		.description = gJangmooPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_HAKAMO_O] =
	{
		.categoryName = _("Scaly"),
		.height = 12,
		.weight = 470,
		.description = gHakamooPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KOMMO_O] =
	{
		.categoryName = _("Scaly"),
		.height = 16,
		.weight = 782,
		.description = gKommooPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TAPU_KOKO] =
	{
		.categoryName = _("Land Spirit"),
		.height = 18,
		.weight = 205,
		.description = gTapuKokoPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TAPU_LELE] =
	{
		.categoryName = _("Land Spirit"),
		.height = 12,
		.weight = 186,
		.description = gTapuLelePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TAPU_BULU] =
	{
		.categoryName = _("Land Spirit"),
		.height = 19,
		.weight = 455,
		.description = gTapuBuluPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TAPU_FINI] =
	{
		.categoryName = _("Land Spirit"),
		.height = 13,
		.weight = 212,
		.description = gTapuFiniPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_COSMOG] =
	{
		.categoryName = _("Nebula"),
		.height = 2,
		.weight = 1,
		.description = gCosmogPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_COSMOEM] =
	{
		.categoryName = _("Protostar"),
		.height = 1,
		.weight = 9999,
		.description = gCosmoemPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SOLGALEO] =
	{
		.categoryName = _("Sunne"),
		.height = 34,
		.weight = 2300,
		.description = gSolgaleoPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LUNALA] =
	{
		.categoryName = _("Moone"),
		.height = 40,
		.weight = 1200,
		.description = gLunalaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_NIHILEGO] =
	{
		.categoryName = _("Goofshrumite"),
		.height = 12,
		.weight = 555,
		.description = gNihilegoPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BUZZWOLE] =
	{
		.categoryName = _("Swollen"),
		.height = 24,
		.weight = 3336,
		.description = gBuzzwolePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PHEROMOSA] =
	{
		.categoryName = _("Lissome"),
		.height = 18,
		.weight = 250,
		.description = gPheromosaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_XURKITREE] =
	{
		.categoryName = _("Glowing"),
		.height = 38,
		.weight = 1000,
		.description = gXurkitreePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CELESTEELA] =
	{
		.categoryName = _("Launch"),
		.height = 92,
		.weight = 9999,
		.description = gCelesteelaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KARTANA] =
	{
		.categoryName = _("Drawn Sword"),
		.height = 3,
		.weight = 1,
		.description = gKartanaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GUZZLORD] =
	{
		.categoryName = _("Junkivore"),
		.height = 55,
		.weight = 8880,
		.description = gGuzzlordPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_NECROZMA] =
	{
		.categoryName = _("Prism"),
		.height = 24,
		.weight = 2300,
		.description = gNecrozmaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MAGEARNA] =
	{
		.categoryName = _("Artificial"),
		.height = 10,
		.weight = 805,
		.description = gMagearnaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MARSHADOW] =
	{
		.categoryName = _("Smogasdwelle"),
		.height = 7,
		.weight = 222,
		.description = gMarshadowPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_POIPOLE] =
	{
		.categoryName = _("Poison Pin"),
		.height = 6,
		.weight = 18,
		.description = gPoipolePokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_NAGANADEL] =
	{
		.categoryName = _("Poison Pin"),
		.height = 36,
		.weight = 1500,
		.description = gNaganadelPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_STAKATAKA] =
	{
		.categoryName = _("Rampart"),
		.height = 55,
		.weight = 8200,
		.description = gStakatakaPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BLACEPHALON] =
	{
		.categoryName = _("Fireworks"),
		.height = 18,
		.weight = 130,
		.description = gBlacephalonPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ZERAORA] =
	{
		.categoryName = _("Thunderclap"),
		.height = 15,
		.weight = 445,
		.description = gZeraoraPokedexText,
		.pokemonScale = 356,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MELTAN] =
	{
		.categoryName = _("Hex Nut"),
		.height = 2,
		.weight = 80,
		.description = gMeltanPokedexText,
		.pokemonScale = 640,
		.pokemonOffset = 23,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MELMETAL] =
	{
		.categoryName = _("Hex Nut"),
		.height = 25,
		.weight = 800,
		.description = gMelmetalPokedexText,
		.pokemonScale = 255,
		.pokemonOffset = 1,
		.trainerScale = 387,
		.trainerOffset = 2,
	},

    [NATIONAL_DEX_GROOKEY] =
    {
        .categoryName = _("Chimp"),
        .height = 3,
        .weight = 50,
        .description = gGrookeyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_THWACKEY] =
    {
        .categoryName = _("Beat"),
        .height = 7,
        .weight = 140,
        .description = gThwackeyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RILLABOOM] =
    {
        .categoryName = _("Drummer"),
        .height = 21,
        .weight = 900,
        .description = gRillaboomPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCORBUNNY] =
    {
        .categoryName = _("Rabbit"),
        .height = 3,
        .weight = 45,
        .description = gScorbunnyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RABOOT] =
    {
        .categoryName = _("Rabbit"),
        .height = 6,
        .weight = 90,
        .description = gRabootPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CINDERACE] =
    {
        .categoryName = _("Striker"),
        .height = 14,
        .weight = 330,
        .description = gCinderacePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SOBBLE] =
    {
        .categoryName = _("Water Lizard"),
        .height = 3,
        .weight = 40,
        .description = gSobblePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRIZZILE] =
    {
        .categoryName = _("Water Lizard"),
        .height = 7,
        .weight = 115,
        .description = gDrizzilePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_INTELEON] =
    {
        .categoryName = _("Secret Agent"),
        .height = 19,
        .weight = 452,
        .description = gInteleonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKWOVET] =
    {
        .categoryName = _("Cheeky"),
        .height = 3,
        .weight = 25,
        .description = gSkwovetPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GREEDENT] =
    {
        .categoryName = _("Greedy"),
        .height = 6,
        .weight = 60,
        .description = gGreedentPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROOKIDEE] =
    {
        .categoryName = _("Tiny Bird"),
        .height = 2,
        .weight = 18,
        .description = gRookideePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CORVISQUIRE] =
    {
        .categoryName = _("Raven"),
        .height = 8,
        .weight = 160,
        .description = gCorvisquirePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CORVIKNIGHT] =
    {
        .categoryName = _("Raven"),
        .height = 22,
        .weight = 750,
        .description = gCorviknightPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLIPBUG] =
    {
        .categoryName = _("Larva"),
        .height = 4,
        .weight = 80,
        .description = gBlipbugPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DOTTLER] =
    {
        .categoryName = _("Radome"),
        .height = 4,
        .weight = 195,
        .description = gDottlerPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ORBEETLE] =
    {
        .categoryName = _("Seven Spot"),
        .height = 4,
        .weight = 408,
        .description = gOrbeetlePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NICKIT] =
    {
        .categoryName = _("Fox"),
        .height = 6,
        .weight = 89,
        .description = gNickitPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_THIEVUL] =
    {
        .categoryName = _("Fox"),
        .height = 12,
        .weight = 199,
        .description = gThievulPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOSSIFLEUR] =
    {
        .categoryName = _("Flowering"),
        .height = 4,
        .weight = 22,
        .description = gGossifleurPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ELDEGOSS] =
    {
        .categoryName = _("Cotton Bloom"),
        .height = 5,
        .weight = 25,
        .description = gEldegossPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WOOLOO] =
    {
        .categoryName = _("Sheep"),
        .height = 6,
        .weight = 60,
        .description = gWoolooPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUBWOOL] =
    {
        .categoryName = _("Sheep"),
        .height = 13,
        .weight = 430,
        .description = gDubwoolPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHEWTLE] =
    {
        .categoryName = _("Snapping"),
        .height = 3,
        .weight = 85,
        .description = gChewtlePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DREDNAW] =
    {
        .categoryName = _("Bite"),
        .height = 10,
        .weight = 1155,
        .description = gDrednawPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YAMPER] =
    {
        .categoryName = _("Puppy"),
        .height = 3,
        .weight = 135,
        .description = gYamperPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BOLTUND] =
    {
        .categoryName = _("Dog"),
        .height = 10,
        .weight = 340,
        .description = gBoltundPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROLYCOLY] =
    {
        .categoryName = _("Coal"),
        .height = 3,
        .weight = 120,
        .description = gRolycolyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CARKOL] =
    {
        .categoryName = _("Coal"),
        .height = 11,
        .weight = 780,
        .description = gCarkolPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COALOSSAL] =
    {
        .categoryName = _("Coal"),
        .height = 28,
        .weight = 3105,
        .description = gCoalossalPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_APPLIN] =
    {
        .categoryName = _("Apple Core"),
        .height = 2,
        .weight = 5,
        .description = gApplinPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLAPPLE] =
    {
        .categoryName = _("Apple Wing"),
        .height = 3,
        .weight = 10,
        .description = gFlapplePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_APPLETUN] =
    {
        .categoryName = _("Apple Nectar"),
        .height = 4,
        .weight = 130,
        .description = gAppletunPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SILICOBRA] =
    {
        .categoryName = _("Sand Snake"),
        .height = 22,
        .weight = 76,
        .description = gSilicobraPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SANDACONDA] =
    {
        .categoryName = _("Sand Snake"),
        .height = 38,
        .weight = 655,
        .description = gSandacondaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRAMORANT] =
    {
        .categoryName = _("Gulp"),
        .height = 8,
        .weight = 180,
        .description = gCramorantPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARROKUDA] =
    {
        .categoryName = _("Rush"),
        .height = 5,
        .weight = 10,
        .description = gArrokudaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BARRASKEWDA] =
    {
        .categoryName = _("Skewer"),
        .height = 13,
        .weight = 300,
        .description = gBarraskewdaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOXEL] =
    {
        .categoryName = _("Baby"),
        .height = 4,
        .weight = 110,
        .description = gToxelPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOXTRICITY] =
    {
        .categoryName = _("Punk"),
        .height = 16,
        .weight = 400,
        .description = gToxtricityPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SIZZLIPEDE] =
    {
        .categoryName = _("Radiator"),
        .height = 7,
        .weight = 10,
        .description = gSizzlipedePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CENTISKORCH] =
    {
        .categoryName = _("Radiator"),
        .height = 30,
        .weight = 1200,
        .description = gCentiskorchPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLOBBOPUS] =
    {
        .categoryName = _("Tantrum"),
        .height = 6,
        .weight = 40,
        .description = gClobbopusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRAPPLOCT] =
    {
        .categoryName = _("Jujitsu"),
        .height = 16,
        .weight = 390,
        .description = gGrapploctPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SINISTEA] =
    {
        .categoryName = _("Black Tea"),
        .height = 1,
        .weight = 2,
        .description = gSinisteaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POLTEAGEIST] =
    {
        .categoryName = _("Black Tea"),
        .height = 2,
        .weight = 4,
        .description = gPolteageistPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HATENNA] =
    {
        .categoryName = _("Calm"),
        .height = 4,
        .weight = 34,
        .description = gHatennaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HATTREM] =
    {
        .categoryName = _("Serene"),
        .height = 6,
        .weight = 48,
        .description = gHattremPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HATTERENE] =
    {
        .categoryName = _("Silent"),
        .height = 21,
        .weight = 51,
        .description = gHatterenePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_IMPIDIMP] =
    {
        .categoryName = _("Wily"),
        .height = 4,
        .weight = 55,
        .description = gImpidimpPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MORGREM] =
    {
        .categoryName = _("Devious"),
        .height = 8,
        .weight = 125,
        .description = gMorgremPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRIMMSNARL] =
    {
        .categoryName = _("Bulk Up"),
        .height = 15,
        .weight = 610,
        .description = gGrimmsnarlPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OBSTAGOON] =
    {
        .categoryName = _("Blocking"),
        .height = 16,
        .weight = 460,
        .description = gObstagoonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PERRSERKER] =
    {
        .categoryName = _("Viking"),
        .height = 8,
        .weight = 280,
        .description = gPerrserkerPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CURSOLA] =
    {
        .categoryName = _("Coral"),
        .height = 10,
        .weight = 4,
        .description = gCursolaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SIRFETCHD] =
    {
        .categoryName = _("Wild Duck"),
        .height = 8,
        .weight = 1170,
        .description = gSirfetchdPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MR_RIME] =
    {
        .categoryName = _("Comedian"),
        .height = 15,
        .weight = 582,
        .description = gMrRimePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RUNERIGUS] =
    {
        .categoryName = _("Grudge"),
        .height = 16,
        .weight = 666,
        .description = gRunerigusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MILCERY] =
    {
        .categoryName = _("Cream"),
        .height = 2,
        .weight = 3,
        .description = gMilceryPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ALCREMIE] =
    {
        .categoryName = _("Cream"),
        .height = 3,
        .weight = 5,
        .description = gAlcremiePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FALINKS] =
    {
        .categoryName = _("Formation"),
        .height = 30,
        .weight = 620,
        .description = gFalinksPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PINCURCHIN] =
    {
        .categoryName = _("Sea Urchin"),
        .height = 3,
        .weight = 10,
        .description = gPincurchinPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNOM] =
    {
        .categoryName = _("Worm"),
        .height = 3,
        .weight = 38,
        .description = gSnomPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FROSMOTH] =
    {
        .categoryName = _("Frost Moth"),
        .height = 13,
        .weight = 420,
        .description = gFrosmothPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STONJOURNER] =
    {
        .categoryName = _("Big Rock"),
        .height = 25,
        .weight = 5200,
        .description = gStonjournerPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EISCUE] =
    {
        .categoryName = _("Penguin"),
        .height = 14,
        .weight = 890,
        .description = gEiscuePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_INDEEDEE] =
    {
        .categoryName = _("Emotion"),
        .height = 9,
        .weight = 280,
        .description = gIndeedeePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MORPEKO] =
    {
        .categoryName = _("Two-Sided"),
        .height = 3,
        .weight = 30,
        .description = gMorpekoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CUFANT] =
    {
        .categoryName = _("Copperderm"),
        .height = 12,
        .weight = 1000,
        .description = gCufantPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COPPERAJAH] =
    {
        .categoryName = _("Copperderm"),
        .height = 30,
        .weight = 6500,
        .description = gCopperajahPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRACOZOLT] =
    {
        .categoryName = _("Fossil"),
        .height = 18,
        .weight = 1900,
        .description = gDracozoltPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARCTOZOLT] =
    {
        .categoryName = _("Fossil"),
        .height = 23,
        .weight = 1500,
        .description = gArctozoltPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRACOVISH] =
    {
        .categoryName = _("Fossil"),
        .height = 23,
        .weight = 2150,
        .description = gDracovishPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARCTOVISH] =
    {
        .categoryName = _("Fossil"),
        .height = 20,
        .weight = 1750,
        .description = gArctovishPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DURALUDON] =
    {
        .categoryName = _("Alloy"),
        .height = 18,
        .weight = 400,
        .description = gDuraludonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DREEPY] =
    {
        .categoryName = _("Lingering"),
        .height = 5,
        .weight = 20,
        .description = gDreepyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRAKLOAK] =
    {
        .categoryName = _("Caretaker"),
        .height = 14,
        .weight = 110,
        .description = gDrakloakPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRAGAPULT] =
    {
        .categoryName = _("Stealth"),
        .height = 30,
        .weight = 500,
        .description = gDragapultPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZACIAN] =
    {
        .categoryName = _("Warrior"),
        .height = 28,
        .weight = 1100,
        .description = gZacianPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZAMAZENTA] =
    {
        .categoryName = _("Warrior"),
        .height = 29,
        .weight = 2100,
        .description = gZamazentaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ETERNATUS] =
    {
        .categoryName = _("Gigantic"),
        .height = 200,
        .weight = 9500,
        .description = gEternatusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KUBFU] =
    {
        .categoryName = _("Wushu"),
        .height = 6,
        .weight = 120,
        .description = gKubfuPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_URSHIFU] =
    {
        .categoryName = _("Wushu"),
        .height = 19,
        .weight = 1050,
        .description = gUrshifuPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZARUDE] =
    {
        .categoryName = _("Rogue Monkey"),
        .height = 18,
        .weight = 700,
        .description = gZarudePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_REGIELEKI] =
    {
        .categoryName = _("Electron"),
        .height = 12,
        .weight = 1450,
        .description = gRegielekiPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_REGIDRAGO] =
    {
        .categoryName = _("Dragon Orb"),
        .height = 21,
        .weight = 2000,
        .description = gRegidragoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLASTRIER] =
    {
        .categoryName = _("Wild Horse"),
        .height = 22,
        .weight = 8000,
        .description = gGlastrierPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPECTRIER] =
    {
        .categoryName = _("Swift Horse"),
        .height = 20,
        .weight = 445,
        .description = gSpectrierPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CALYREX] =
    {
        .categoryName = _("King"),
        .height = 11,
        .weight = 77,
        .description = gCalyrexPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#else

    [NATIONAL_DEX_NONE] =
    {
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .description = gDummyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MEADOSAUR] =
    {
        .categoryName = _("Grass"),
        .height = 7,
        .weight = 69,
        .description = gMeadosaurPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GROVINE] =
    {
        .categoryName = _("Grass"),
        .height = 10,
        .weight = 130,
        .description = gGrovinePokedexText,
        .pokemonScale = 335,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YGGDRACON] =
    {
        .categoryName = _("Grass"),
        .height = 20,
        .weight = 1000,
        .description = gYggdraconPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_SKORCHI] =
    {
        .categoryName = _("Scorp"),
        .height = 6,
        .weight = 85,
        .description = gSkorchiPokedexText,
        .pokemonScale = 444,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKOMAD] =
    {
        .categoryName = _("Nomad"),
        .height = 11,
        .weight = 190,
        .description = gSkomadPokedexText,
        .pokemonScale = 302,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKORPYROS] =
    {
        .categoryName = _("Nomad"),
        .height = 17,
        .weight = 905,
        .description = gSkorpyrosPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_JISSM] =
    {
        .categoryName = _("Gamete"),
        .height = 5,
        .weight = 90,
        .description = gJissmPokedexText,
        .pokemonScale = 412,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPLOOGER] =
    {
        .categoryName = _("Gamete"),
        .height = 10,
        .weight = 225,
        .description = gSploogerPokedexText,
        .pokemonScale = 332,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPERIATHON] =
    {
        .categoryName = _("Gamete"),
        .height = 16,
        .weight = 855,
        .description = gSperiathonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BUG] =
    {
        .categoryName = _("Bug"),
        .height = 3,
        .weight = 29,
        .description = gBugPokedexText,
        .pokemonScale = 549,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LEGOOG] =
    {
        .categoryName = _("Google"),
        .height = 7,
        .weight = 99,
        .description = gLegoogPokedexText,
        .pokemonScale = 350,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FIROME] =
    {
        .categoryName = _("RAM"),
        .height = 11,
        .weight = 320,
        .description = gFiromePokedexText,
        .pokemonScale = 312,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PAINTIC] =
    {
        .categoryName = _("Paintbrush"),
        .height = 3,
        .weight = 32,
        .description = gPainticPokedexText,
        .pokemonScale = 455,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MYRESFT] =
    {
        .categoryName = _("Windows"),
        .height = 6,
        .weight = 100,
        .description = gMyresftPokedexText,
        .pokemonScale = 424,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BERRORD] =
    {
        .categoryName = _("Error"),
        .height = 10,
        .weight = 295,
        .description = gBerrordPokedexText,
        .pokemonScale = 366,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EMELGY] =
    {
        .categoryName = _("Squeaker"),
        .height = 3,
        .weight = 18,
        .description = gEmelgyPokedexText,
        .pokemonScale = 508,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FEDORHAWK] =
    {
        .categoryName = _("Gamer"),
        .height = 11,
        .weight = 300,
        .description = gFedorhawkPokedexText,
        .pokemonScale = 331,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FAZEAGLE] =
    {
        .categoryName = _("Esport"),
        .height = 15,
        .weight = 395,
        .description = gFazeaglePokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HANGSTER] =
    {
        .categoryName = _("Rat"),
        .height = 3,
        .weight = 35,
        .description = gHangsterPokedexText,
        .pokemonScale = 481,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GAWDAMSTER] =
    {
        .categoryName = _("Rat"),
        .height = 7,
        .weight = 185,
        .description = gGawdamsterPokedexText,
        .pokemonScale = 459,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BIRDAPP] =
    {
        .categoryName = _("Twitter"),
        .height = 3,
        .weight = 20,
        .description = gBirdappPokedexText,
        .pokemonScale = 571,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHAPSNAT] =
    {
        .categoryName = _("Snap"),
        .height = 12,
        .weight = 380,
        .description = gChapsnatPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ALCOO] =
    {
        .categoryName = _("Bevy"),
        .height = 20,
        .weight = 69,
        .description = gAlcooPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BEVRAGON] =
    {
        .categoryName = _("Bevy"),
        .height = 35,
        .weight = 650,
        .description = gBevragonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 296,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SKIPPA] =
    {
        .categoryName = _("Takeout"),
        .height = 4,
        .weight = 60,
        .description = gSkippaPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DISHEATS] =
    {
        .categoryName = _("Takeout"),
        .height = 8,
        .weight = 300,
        .description = gDisheatsPokedexText,
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JAFEET] =
    {
        .categoryName = _("Feet"),
        .height = 6,
        .weight = 120,
        .description = gJafeetPokedexText,
        .pokemonScale = 365,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOYUTA] =
    {
        .categoryName = _("Hubcap"),
        .height = 10,
        .weight = 295,
        .description = gToyutaPokedexText,
        .pokemonScale = 341,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NAUSEON] =
    {
        .categoryName = _("Sick"),
        .height = 4,
        .weight = 70,
        .description = gNauseonPokedexText,
        .pokemonScale = 488,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HAZMATE] =
    {
        .categoryName = _("Hazmat"),
        .height = 8,
        .weight = 200,
        .description = gHazmatePokedexText,
        .pokemonScale = 381,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EBOLABLE] =
    {
        .categoryName = _("Plauge"),
        .height = 13,
        .weight = 600,
        .description = gEbolablePokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UNGA] =
    {
        .categoryName = _("Unga"),
        .height = 5,
        .weight = 90,
        .description = gUngaPokedexText,
        .pokemonScale = 511,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BUNGA] =
    {
        .categoryName = _("Unga"),
        .height = 9,
        .weight = 195,
        .description = gBungaPokedexText,
        .pokemonScale = 408,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OOGABOOGA] =
    {
        .categoryName = _("Unga"),
        .height = 14,
        .weight = 620,
        .description = gOogaboogaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EGOIRL] =
    {
        .categoryName = _("Girl"),
        .height = 6,
        .weight = 75,
        .description = gEgoirlPokedexText,
        .pokemonScale = 441,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOTHOT] =
    {
        .categoryName = _("Goth"),
        .height = 13,
        .weight = 400,
        .description = gGothotPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SAUCIE] =
    {
        .categoryName = _("Sauce"),
        .height = 6,
        .weight = 99,
        .description = gSauciePokedexText,
        .pokemonScale = 542,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SAWSBAWS] =
    {
        .categoryName = _("Sauce"),
        .height = 11,
        .weight = 199,
        .description = gSawsbawsPokedexText,
        .pokemonScale = 339,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNEDDIT] =
    {
        .categoryName = _("Reddit"),
        .height = 5,
        .weight = 55,
        .description = gSnedditPokedexText,
        .pokemonScale = 433,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COSMIE] =
    {
        .categoryName = _("Brownie"),
        .height = 10,
        .weight = 120,
        .description = gCosmiePokedexText,
        .pokemonScale = 328,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BATANARF] =
    {
        .categoryName = _("Batman"),
        .height = 8,
        .weight = 75,
        .description = gBatanarfPokedexText,
        .pokemonScale = 362,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ANIVENOM] =
    {
        .categoryName = _("Squish"),
        .height = 16,
        .weight = 550,
        .description = gAnivenomPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BONGSTARD] =
    {
        .categoryName = _("Weed"),
        .height = 5,
        .weight = 54,
        .description = gBongstardPokedexText,
        .pokemonScale = 423,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SMOGAS] =
    {
        .categoryName = _("Weed"),
        .height = 8,
        .weight = 86,
        .description = gSmogasPokedexText,
        .pokemonScale = 329,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GANJAZE] =
    {
        .categoryName = _("Weed"),
        .height = 12,
        .weight = 186,
        .description = gGanjazePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOOFSHRUM] =
    {
        .categoryName = _("Mushroom"),
        .height = 3,
        .weight = 54,
        .description = gGoofshrumPokedexText,
        .pokemonScale = 593,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUSHROOM] =
    {
        .categoryName = _("Mushroom"),
        .height = 10,
        .weight = 295,
        .description = gDushroomPokedexText,
        .pokemonScale = 307,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARAKETSU] =
    {
        .categoryName = _("Scissor"),
        .height = 10,
        .weight = 300,
        .description = gAraketsuPokedexText,
        .pokemonScale = 360,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_SENKETULA] =
    {
        .categoryName = _("Scissor"),
        .height = 15,
        .weight = 125,
        .description = gSenketulaPokedexText,
        .pokemonScale = 285,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_DIGLETT] =
    {
        .categoryName = _("Mole"),
        .height = 2,
        .weight = 8,
        .description = gDiglettPokedexText,
        .pokemonScale = 833,
        .pokemonOffset = 25,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GHOMA] =
    {
        .categoryName = _("Ghoma"),
        .height = 7,
        .weight = 333,
        .description = gGhomaPokedexText,
        .pokemonScale = 406,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GARFEL] =
    {
        .categoryName = _("Lasanga"),
        .height = 4,
        .weight = 42,
        .description = gGarfelPokedexText,
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOREFIELD] =
    {
        .categoryName = _("I'm sorry Jon"),
        .height = 10,
        .weight = 320,
        .description = gGorefieldPokedexText,
        .pokemonScale = 320,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUGGAME] =
    {
        .categoryName = _("Duck"),
        .height = 8,
        .weight = 196,
        .description = gDuggamePokedexText,
        .pokemonScale = 369,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PERRIPUS] =
    {
        .categoryName = _("Platypus"),
        .height = 17,
        .weight = 766,
        .description = gPerripusPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 273,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_AGANDA] =
    {
        .categoryName = _("Monkey"),
        .height = 5,
        .weight = 280,
        .description = gAgandaPokedexText,
        .pokemonScale = 404,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SUGREIVOUS] =
    {
        .categoryName = _("Monkey"),
        .height = 10,
        .weight = 320,
        .description = gSugreivousPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CTHEYE] =
    {
        .categoryName = _("Eye"),
        .height = 7,
        .weight = 190,
        .description = gCtheyePokedexText,
        .pokemonScale = 346,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OPTICULU] =
    {
        .categoryName = _("Eye"),
        .height = 19,
        .weight = 1550,
        .description = gOpticuluPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_OOTLAW] =
    {
        .categoryName = _("BANG!"),
        .height = 6,
        .weight = 124,
        .description = gOotlawPokedexText,
        .pokemonScale = 369,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHERRIF] =
    {
        .categoryName = _("BANG!"),
        .height = 10,
        .weight = 200,
        .description = gSherrifPokedexText,
        .pokemonScale = 288,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RENAGEDE] =
    {
        .categoryName = _("BANG!"),
        .height = 13,
        .weight = 540,
        .description = gRenagedePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KUKLUX] =
    {
        .categoryName = _("Klan"),
        .height = 9,
        .weight = 195,
        .description = gAbraPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KUKLAN] =
    {
        .categoryName = _("Klan"),
        .height = 13,
        .weight = 565,
        .description = gKuklanPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KUKLOPS] =
    {
        .categoryName = _("Klan"),
        .height = 15,
        .weight = 480,
        .description = gKuklopsPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FARBY] =
    {
        .categoryName = _("Short"),
        .height = 8,
        .weight = 195,
        .description = gFarbyPokedexText,
        .pokemonScale = 342,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FURBOIS] =
    {
        .categoryName = _("Long"),
        .height = 15,
        .weight = 705,
        .description = gFurboisPokedexText,
        .pokemonScale = 323,
        .pokemonOffset = 9,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LONGIFER] =
    {
        .categoryName = _("Long"),
        .height = 16,
        .weight = 1300,
        .description = gLongiferPokedexText,
        .pokemonScale = 280,
        .pokemonOffset = 1,
        .trainerScale = 269,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_BONGECKO] =
    {
        .categoryName = _("Stoner"),
        .height = 7,
        .weight = 40,
        .description = gBongeckoPokedexText,
        .pokemonScale = 354,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MARIGUANA] =
    {
        .categoryName = _("Stoner"),
        .height = 10,
        .weight = 64,
        .description = gMariguanaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MARLEYZARD] =
    {
        .categoryName = _("Stoner"),
        .height = 17,
        .weight = 155,
        .description = gMarleyzardPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_FLOOTEY] =
    {
        .categoryName = _("Floaty"),
        .height = 9,
        .weight = 455,
        .description = gFlooteyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FREDDIFER] =
    {
        .categoryName = _("Uncle"),
        .height = 16,
        .weight = 550,
        .description = gFreddiferPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 312,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_ROCK] =
    {
        .categoryName = _("Rock"),
        .height = 4,
        .weight = 200,
        .description = gRockPokedexText,
        .pokemonScale = 347,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TONCRETE] =
    {
        .categoryName = _("Concrete"),
        .height = 10,
        .weight = 1050,
        .description = gToncretePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LOSSILITH] =
    {
        .categoryName = _("Loss"),
        .height = 14,
        .weight = 3000,
        .description = gLossilithPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 296,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DEBEGUCK] =
    {
        .categoryName = _("Duck"),
        .height = 10,
        .weight = 300,
        .description = gDebeguckPokedexText,
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LONKY] =
    {
        .categoryName = _("Graceless"),
        .height = 17,
        .weight = 950,
        .description = gLonkyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 289,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_BASSHOP] =
    {
        .categoryName = _("Bass"),
        .height = 12,
        .weight = 360,
        .description = gBasshopPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHEMUE] =
    {
        .categoryName = _("Whale"),
        .height = 16,
        .weight = 785,
        .description = gShemuePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DESQUARED] =
    {
        .categoryName = _("Cube"),
        .height = 3,
        .weight = 60,
        .description = gDesquaredPokedexText,
        .pokemonScale = 288,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEATHCUBED] =
    {
        .categoryName = _("Cube"),
        .height = 10,
        .weight = 600,
        .description = gDeathcubedPokedexText,
        .pokemonScale = 292,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_IMPOSTOWN] =
    {
        .categoryName = _("Werewolf"),
        .height = 8,
        .weight = 150,
        .description = gImpostownPokedexText,
        .pokemonScale = 330,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DIVINI] =
    {
        .categoryName = _("Angel"),
        .height = 14,
        .weight = 392,
        .description = gDiviniPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_PARANGELIA] =
    {
        .categoryName = _("Angel"),
        .height = 18,
        .weight = 852,
        .description = gParangeliaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DABBOI] =
    {
        .categoryName = _("Frog"),
        .height = 11,
        .weight = 900,
        .description = gDabboiPokedexText,
        .pokemonScale = 297,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TITENIC] =
    {
        .categoryName = _("Boat"),
        .height = 17,
        .weight = 1200,
        .description = gTitenicPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 275,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GUMMI] =
    {
        .categoryName = _("Edible"),
        .height = 9,
        .weight = 300,
        .description = gGummiPokedexText,
        .pokemonScale = 258,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MUK] =
    {
        .categoryName = _("Sludge"),
        .height = 12,
        .weight = 300,
        .description = gMukPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COOLAR] =
    {
        .categoryName = _("Cooler"),
        .height = 3,
        .weight = 40,
        .description = gCoolarPokedexText,
        .pokemonScale = 675,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FRIDEGE] =
    {
        .categoryName = _("Fridge"),
        .height = 15,
        .weight = 1325,
        .description = gFridegePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 269,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_SKELEDOOT] =
    {
        .categoryName = _("Doot"),
        .height = 13,
        .weight = 1,
        .description = gSkeledootPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BEEGMIKE] =
    {
        .categoryName = _("Ghost"),
        .height = 16,
        .weight = 1,
        .description = gBeegmikePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SANS] =
    {
        .categoryName = _("Sans"),
        .height = 15,
        .weight = 405,
        .description = gSansPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ESCEEPEE] =
    {
        .categoryName = _("SCP"),
        .height = 88,
        .weight = 2100,
        .description = gEsceepeePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 515,
        .trainerOffset = 14,
    },

    [NATIONAL_DEX_SHAPIPIZ] =
    {
        .categoryName = _("Gamer"),
        .height = 10,
        .weight = 324,
        .description = gShapipizPokedexText,
        .pokemonScale = 274,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHAPOOPYZ] =
    {
        .categoryName = _("Gamer"),
        .height = 16,
        .weight = 756,
        .description = gShapoopyzPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STROLOKE] =
    {
        .categoryName = _("Stroke"),
        .height = 4,
        .weight = 65,
        .description = gStrolokePokedexText,
        .pokemonScale = 469,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CREEPA] =
    {
        .categoryName = _("Creeper"),
        .height = 13,
        .weight = 600,
        .description = gCreepaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AWMANE] =
    {
        .categoryName = _("Creeper"),
        .height = 5,
        .weight = 104,
        .description = gAwmanePokedexText,
        .pokemonScale = 364,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ENDERMON] =
    {
        .categoryName = _("End"),
        .height = 12,
        .weight = 666,
        .description = gEndermonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BILLOMINAT] =
    {
        .categoryName = _("Cipher"),
        .height = 4,
        .weight = 25,
        .description = gBillominatPokedexText,
        .pokemonScale = 489,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CIPHRON] =
    {
        .categoryName = _("Cipher"),
        .height = 20,
        .weight = 1200,
        .description = gCiphronPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
    },

    [NATIONAL_DEX_SURBSQUACH] =
    {
        .categoryName = _("Bigfoot"),
        .height = 4,
        .weight = 65,
        .description = gSurbsquachPokedexText,
        .pokemonScale = 545,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AMAZULK] =
    {
        .categoryName = _("Bulk"),
        .height = 10,
        .weight = 450,
        .description = gAmazulkPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_REPLITOR] =
    {
        .categoryName = _("Gator"),
        .height = 15,
        .weight = 498,
        .description = gReplitorPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 259,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_BIREMIC] =
    {
        .categoryName = _("Bird"),
        .height = 14,
        .weight = 502,
        .description = gBiremicPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 277,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CAPFALCO] =
    {
        .categoryName = _("Smash"),
        .height = 12,
        .weight = 655,
        .description = gCapfalcoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FENNAF] =
    {
        .categoryName = _("Fnaf"),
        .height = 6,
        .weight = 10,
        .description = gFennafPokedexText,
        .pokemonScale = 369,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BIPHARMA] =
    {
        .categoryName = _("Hoax"),
        .height = 12,
        .weight = 95,
        .description = gBipharmaPokedexText,
        .pokemonScale = 305,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POTOGREED] =
    {
        .categoryName = _("Greed"),
        .height = 10,
        .weight = 1150,
        .description = gPotogreedPokedexText,
        .pokemonScale = 267,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YEESAUR] =
    {
        .categoryName = _("Yeee"),
        .height = 19,
        .weight = 1200,
        .description = gYeesaurPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 299,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_UNJOY] =
    {
        .categoryName = _("NO NO NO"),
        .height = 11,
        .weight = 346,
        .description = gUnjoyPokedexText,
        .pokemonScale = 257,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BANANACE] =
    {
        .categoryName = _("Lying"),
        .height = 10,
        .weight = 350,
        .description = gBananacePokedexText,
        .pokemonScale = 304,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TROLOLO] =
    {
        .categoryName = _("Troll"),
        .height = 22,
        .weight = 800,
        .description = gTrololoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
    },

    [NATIONAL_DEX_JANK] =
    {
        .categoryName = _("Shirt"),
        .height = 4,
        .weight = 80,
        .description = gJankPokedexText,
        .pokemonScale = 399,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWAMPOGRE] =
    {
        .categoryName = _("Shrek"),
        .height = 12,
        .weight = 250,
        .description = gSwampogrePokedexText,
        .pokemonScale = 299,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CIGHTED] =
    {
        .categoryName = _("HQ"),
        .height = 6,
        .weight = 150,
        .description = gCightedPokedexText,
        .pokemonScale = 379,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MONGELORD] =
    {
        .categoryName = _("Tech-4"),
        .height = 13,
        .weight = 390,
        .description = gMongelordPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BURIK] =
    {
        .categoryName = _("Brick"),
        .height = 8,
        .weight = 345,
        .description = gBurikPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BICYELION] =
    {
        .categoryName = _("Robot"),
        .height = 11,
        .weight = 800,
        .description = gBicyelionPokedexText,
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ALIEN] =
    {
        .categoryName = _("Alien"),
        .height = 13,
        .weight = 545,
        .description = gAlienPokedexText,
        .pokemonScale = 258,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHUXKUSH] =
    {
        .categoryName = _("Paladin"),
        .height = 15,
        .weight = 560,
        .description = gChuxkushPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_REPSAC] =
    {
        .categoryName = _("Rouge"),
        .height = 14,
        .weight = 406,
        .description = gRepsacPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 300,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_KRAFPUNK] =
    {
        .categoryName = _("EDM"),
        .height = 11,
        .weight = 300,
        .description = gKrafpunkPokedexText,
        .pokemonScale = 351,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ENDMYSUFF] =
    {
        .categoryName = _("Suffering"),
        .height = 13,
        .weight = 445,
        .description = gEndmysuffPokedexText,
        .pokemonScale = 277,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ITRIMID] =
    {
        .categoryName = _("Snake"),
        .height = 15,
        .weight = 550,
        .description = gItrimidPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GROX] =
    {
        .categoryName = _("Spore"),
        .height = 14,
        .weight = 884,
        .description = gGroxPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NUSHAKE] =
    {
        .categoryName = _("Nuts"),
        .height = 9,
        .weight = 100,
        .description = gNushakePokedexText,
        .pokemonScale = 310,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KROLLER] =
    {
        .categoryName = _("Roller"),
        .height = 65,
        .weight = 2350,
        .description = gKrollerPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 481,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_JEBONY] =
    {
        .categoryName = _("Black"),
        .height = 25,
        .weight = 2200,
        .description = gJebonyPokedexText,
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
    },

    [NATIONAL_DEX_DITTO] =
    {
        .categoryName = _("Transform"),
        .height = 3,
        .weight = 40,
        .description = gDittoPokedexText,
        .pokemonScale = 633,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EEMOJEE] =
    {
        .categoryName = _("Emoji"),
        .height = 3,
        .weight = 65,
        .description = gEemojeePokedexText,
        .pokemonScale = 476,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STRESSEON] =
    {
        .categoryName = _("Stress"),
        .height = 10,
        .weight = 290,
        .description = gStresseonPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_XOKKEON] =
    {
        .categoryName = _("Xokk"),
        .height = 8,
        .weight = 245,
        .description = gXokkeonPokedexText,
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BABEYON] =
    {
        .categoryName = _("Babey"),
        .height = 9,
        .weight = 250,
        .description = gBabeyonPokedexText,
        .pokemonScale = 306,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AURICLIARY] =
    {
        .categoryName = _("Headphones"),
        .height = 8,
        .weight = 365,
        .description = gAuricliaryPokedexText,
        .pokemonScale = 328,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ATTACO] =
    {
        .categoryName = _("Taco"),
        .height = 4,
        .weight = 75,
        .description = gAttacoPokedexText,
        .pokemonScale = 521,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GAISER] =
    {
        .categoryName = _("Floor Poop"),
        .height = 10,
        .weight = 350,
        .description = gGaiserPokedexText,
        .pokemonScale = 307,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CORORK] =
    {
        .categoryName = _("Cork"),
        .height = 5,
        .weight = 115,
        .description = gCororkPokedexText,
        .pokemonScale = 454,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BIGOBEET] =
    {
        .categoryName = _("Kobe"),
        .height = 13,
        .weight = 405,
        .description = gBigobeetPokedexText,
        .pokemonScale = 271,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_USARMY] =
    {
        .categoryName = _("Army"),
        .height = 18,
        .weight = 590,
        .description = gUsarmyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 302,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_SHEPEIRD] =
    {
        .categoryName = _("Weird"),
        .height = 21,
        .weight = 4600,
        .description = gShepeirdPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 423,
        .trainerOffset = 11,
    },

    [NATIONAL_DEX_LEGEND] =
    {
        .categoryName = _("Legend"),
        .height = 17,
        .weight = 554,
        .description = gLegendPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ZERUEL] =
    {
        .categoryName = _("Angel"),
        .height = 16,
        .weight = 526,
        .description = gZeruelPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 318,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_REMIEL] =
    {
        .categoryName = _("Angel"),
        .height = 20,
        .weight = 600,
        .description = gRemielPokedexText,
        .pokemonScale = 270,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
    },

    [NATIONAL_DEX_AMONSUS] =
    {
        .categoryName = _("Sus"),
        .height = 18,
        .weight = 33,
        .description = gAmonsusPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 8,
        .trainerScale = 386,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_WOOPTRET] =
    {
        .categoryName = _("Whoops"),
        .height = 40,
        .weight = 165,
        .description = gWooptretPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 411,
        .trainerOffset = 5,
    },

    [NATIONAL_DEX_KILLWORU] =
    {
        .categoryName = _("Waiting"),
        .height = 22,
        .weight = 2100,
        .description = gKillworuPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_GOD] =
    {
        .categoryName = _("God"),
        .height = 20,
        .weight = 1220,
        .description = gGodPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_THEVOID] =
    {
        .categoryName = _("Abyss"),
        .height = 4,
        .weight = 40,
        .description = gMewPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOM] =
    {
        .categoryName = _("Tom"),
        .height = 9,
        .weight = 64,
        .description = gTomPokedexText,
        .pokemonScale = 512,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZACTORY] =
    {
        .categoryName = _("Zach"),
        .height = 12,
        .weight = 158,
        .description = gZactoryPokedexText,
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RAMMET] =
    {
        .categoryName = _("RAM"),
        .height = 18,
        .weight = 1005,
        .description = gRammetPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 277,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_MEGATRON] =
    {
        .categoryName = _("Deception"),
        .height = 5,
        .weight = 79,
        .description = gMegatronPokedexText,
        .pokemonScale = 539,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RIGAMORT] =
    {
        .categoryName = _("IQ"),
        .height = 9,
        .weight = 190,
        .description = gRigamortPokedexText,
        .pokemonScale = 329,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RICKLE] =
    {
        .categoryName = _("Pickle"),
        .height = 17,
        .weight = 795,
        .description = gRicklePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_KORBIE] =
    {
        .categoryName = _("Kirby"),
        .height = 6,
        .weight = 95,
        .description = gKorbiePokedexText,
        .pokemonScale = 487,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JEWIS] =
    {
        .categoryName = _("Jew"),
        .height = 11,
        .weight = 250,
        .description = gJewisPokedexText,
        .pokemonScale = 378,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TEED] =
    {
        .categoryName = _("Tired"),
        .height = 23,
        .weight = 888,
        .description = gTeedPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_GONCARICIV] =
    {
        .categoryName = _("Awake"),
        .height = 8,
        .weight = 60,
        .description = gGoncaricivPokedexText,
        .pokemonScale = 439,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEEPFRIEON] =
    {
        .categoryName = _("Laugh"),
        .height = 18,
        .weight = 325,
        .description = gDeepfrieonPokedexText,
        .pokemonScale = 346,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WORMADAMT] =
    {
        .categoryName = _("Green"),
        .height = 7,
        .weight = 212,
        .description = gWormadamTPokedexText,
        .pokemonScale = 380,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JADOUG] =
    {
        .categoryName = _("Feet"),
        .height = 16,
        .weight = 408,
        .description = gJadougPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ABOMINATON] =
    {
        .categoryName = _("Fez"),
        .height = 10,
        .weight = 108,
        .description = gAbominatonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WURM] =
    {
        .categoryName = _("Worm"),
        .height = 14,
        .weight = 356,
        .description = gWurmPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PHRACER] =
    {
        .categoryName = _("Racer"),
        .height = 5,
        .weight = 85,
        .description = gPhracerPokedexText,
        .pokemonScale = 414,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLUERILLA] =
    {
        .categoryName = _("Long Leg"),
        .height = 11,
        .weight = 335,
        .description = gGluerillaPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUIS] =
    {
        .categoryName = _("Brother"),
        .height = 18,
        .weight = 750,
        .description = gLuisPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 281,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_LOVLILAD] =
    {
        .categoryName = _("Lovely"),
        .height = 5,
        .weight = 120,
        .description = gLovliladPokedexText,
        .pokemonScale = 424,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OUROBOLET] =
    {
        .categoryName = _("Power"),
        .height = 12,
        .weight = 225,
        .description = gOuroboletPokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PICHU] =
    {
        .categoryName = _("Tiny Mouse"),
        .height = 3,
        .weight = 20,
        .description = gPichuPokedexText,
        .pokemonScale = 508,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POOPRAT] =
    {
        .categoryName = _("Poop"),
        .height = 3,
        .weight = 30,
        .description = gPoopratPokedexText,
        .pokemonScale = 462,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VCRBRAIN] =
    {
        .categoryName = _("Dumb"),
        .height = 3,
        .weight = 10,
        .description = gVcrbrainPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FILMBRAIN] =
    {
        .categoryName = _("Stupid"),
        .height = 3,
        .weight = 15,
        .description = gFilmbrainPokedexText,
        .pokemonScale = 507,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLURABRAIN] =
    {
        .categoryName = _("Smart"),
        .height = 6,
        .weight = 32,
        .description = gBlurabrainPokedexText,
        .pokemonScale = 424,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PUCKID] =
    {
        .categoryName = _("Hockey"),
        .height = 2,
        .weight = 20,
        .description = gNatuPokedexText,
        .pokemonScale = 610,
        .pokemonOffset = 25,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOALEM] =
    {
        .categoryName = _("Hockey"),
        .height = 15,
        .weight = 150,
        .description = gGoalemPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 318,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_BADDERY] =
    {
        .categoryName = _("AA"),
        .height = 6,
        .weight = 78,
        .description = gBadderyPokedexText,
        .pokemonScale = 379,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DURASHELL] =
    {
        .categoryName = _("AAA"),
        .height = 8,
        .weight = 133,
        .description = gDurashellPokedexText,
        .pokemonScale = 372,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BACID] =
    {
        .categoryName = _("AAAAAAAAA"),
        .height = 14,
        .weight = 615,
        .description = gBacidPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEAWEE] =
    {
        .categoryName = _("Seaweed"),
        .height = 4,
        .weight = 58,
        .description = gSeaweePokedexText,
        .pokemonScale = 472,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEAKUSH] =
    {
        .categoryName = _("Seaweed"),
        .height = 4,
        .weight = 85,
        .description = gSeakushPokedexText,
        .pokemonScale = 476,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BARIREEFER] =
    {
        .categoryName = _("Seaweed"),
        .height = 8,
        .weight = 285,
        .description = gBarireeferPokedexText,
        .pokemonScale = 448,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BREADDIE] =
    {
        .categoryName = _("Bread"),
        .height = 12,
        .weight = 380,
        .description = gBreaddiePokedexText,
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOASTEM] =
    {
        .categoryName = _("Burnt"),
        .height = 11,
        .weight = 339,
        .description = gToastemPokedexText,
        .pokemonScale = 289,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DOGEASTER] =
    {
        .categoryName = _("Made Up"),
        .height = 4,
        .weight = 5,
        .description = gDogeasterPokedexText,
        .pokemonScale = 562,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ANOOBIS] =
    {
        .categoryName = _("Mage"),
        .height = 6,
        .weight = 10,
        .description = gAnoobisPokedexText,
        .pokemonScale = 387,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIGHTWAVE] =
    {
        .categoryName = _("MLP OC"),
        .height = 8,
        .weight = 30,
        .description = gNightwavePokedexText,
        .pokemonScale = 418,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHARLES] =
    {
        .categoryName = _("Powerful"),
        .height = 8,
        .weight = 115,
        .description = gCharlesPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MELARICK] =
    {
        .categoryName = _("Bugger"),
        .height = 3,
        .weight = 18,
        .description = gMelarickPokedexText,
        .pokemonScale = 541,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WRECKFAST] =
    {
        .categoryName = _("Mess"),
        .height = 8,
        .weight = 85,
        .description = gWreckfastPokedexText,
        .pokemonScale = 444,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHARCRUSH] =
    {
        .categoryName = _("Shark"),
        .height = 12,
        .weight = 380,
        .description = gSharcrushPokedexText,
        .pokemonScale = 274,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MEGALADETH] =
    {
        .categoryName = _("Shark"),
        .height = 4,
        .weight = 85,
        .description = gMegaladethPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AREALGUN] =
    {
        .categoryName = _("Gun"),
        .height = 14,
        .weight = 750,
        .description = gArealgunPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DONT] =
    {
        .categoryName = _("RUN"),
        .height = 9,
        .weight = 265,
        .description = gDontPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LEAVE] =
    {
        .categoryName = _("YOU CAN'T"),
        .height = 10,
        .weight = 270,
        .description = gLeavePokedexText,
        .pokemonScale = 317,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GAHBLIN] =
    {
        .categoryName = _("Goblin"),
        .height = 5,
        .weight = 21,
        .description = gGahblinPokedexText,
        .pokemonScale = 401,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_GOOBLAN] =
    {
        .categoryName = _("Goblin"),
        .height = 20,
        .weight = 795,
        .description = gGooblanPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
    },

    [NATIONAL_DEX_LILREAPER] =
    {
        .categoryName = _("Idiot"),
        .height = 7,
        .weight = 10,
        .description = gLilreaperPokedexText,
        .pokemonScale = 407,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UNOWN] =
    {
        .categoryName = _("Symbol"),
        .height = 5,
        .weight = 50,
        .description = gUnownPokedexText,
        .pokemonScale = 411,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FIRANT] =
    {
        .categoryName = _("Ant"),
        .height = 13,
        .weight = 285,
        .description = gFirantPokedexText,
        .pokemonScale = 274,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BURNANT] =
    {
        .categoryName = _("Ant"),
        .height = 15,
        .weight = 415,
        .description = gBurnantPokedexText,
        .pokemonScale = 281,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ANTINDER] =
    {
        .categoryName = _("Ant"),
        .height = 6,
        .weight = 72,
        .description = gAntinderPokedexText,
        .pokemonScale = 445,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WAILE] =
    {
        .categoryName = _("Special"),
        .height = 12,
        .weight = 1258,
        .description = gWailePokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MOABY] =
    {
        .categoryName = _("Special"),
        .height = 15,
        .weight = 140,
        .description = gMoabyPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHAWT] =
    {
        .categoryName = _("Shot"),
        .height = 11,
        .weight = 648,
        .description = gShawtPokedexText,
        .pokemonScale = 350,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HOLOCAST] =
    {
        .categoryName = _("Disaster"),
        .height = 92,
        .weight = 4000,
        .description = gHolocastPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 516,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_GRUBDAB] =
    {
        .categoryName = _("Dab"),
        .height = 6,
        .weight = 78,
        .description = gGrubdabPokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DABBUG] =
    {
        .categoryName = _("Dab"),
        .height = 14,
        .weight = 487,
        .description = gDabbugPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DABBEATLE] =
    {
        .categoryName = _("Dab"),
        .height = 5,
        .weight = 39,
        .description = gDabbeatlePokedexText,
        .pokemonScale = 430,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NUGGIE] =
    {
        .categoryName = _("Mcdonald"),
        .height = 18,
        .weight = 1180,
        .description = gNuggiePokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MCCHICKY] =
    {
        .categoryName = _("Mcdonald"),
        .height = 6,
        .weight = 205,
        .description = gMcchickyPokedexText,
        .pokemonScale = 485,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HAPPYMAUL] =
    {
        .categoryName = _("Mcdonald"),
        .height = 15,
        .weight = 540,
        .description = gHappymaulPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PINATI] =
    {
        .categoryName = _("Candy"),
        .height = 9,
        .weight = 280,
        .description = gPinatiPokedexText,
        .pokemonScale = 413,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VIVAPINAUT] =
    {
        .categoryName = _("Candy"),
        .height = 6,
        .weight = 88,
        .description = gVivapinautPokedexText,
        .pokemonScale = 455,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAURRICE] =
    {
        .categoryName = _("Homie"),
        .height = 18,
        .weight = 1258,
        .description = gMaurricePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SLUGMA] =
    {
        .categoryName = _("Sugma"),
        .height = 7,
        .weight = 350,
        .description = gSlugmaPokedexText,
        .pokemonScale = 329,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SUGMABALLS] =
    {
        .categoryName = _("Sugma"),
        .height = 8,
        .weight = 550,
        .description = gSugmaballsPokedexText,
        .pokemonScale = 332,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ORCALE] =
    {
        .categoryName = _("Whale"),
        .height = 4,
        .weight = 65,
        .description = gOrcalePokedexText,
        .pokemonScale = 324,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCRAPCHAT] =
    {
        .categoryName = _("Snap"),
        .height = 11,
        .weight = 558,
        .description = gScrapchatPokedexText,
        .pokemonScale = 306,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SETRONIC] =
    {
        .categoryName = _("Headphones"),
        .height = 6,
        .weight = 50,
        .description = gSetronicPokedexText,
        .pokemonScale = 410,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BANNACONDA] =
    {
        .categoryName = _("Banana"),
        .height = 6,
        .weight = 120,
        .description = gBannacondaPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SYSTANIC] =
    {
        .categoryName = _("GPU"),
        .height = 9,
        .weight = 285,
        .description = gSystanicPokedexText,
        .pokemonScale = 296,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ABSTRATIC] =
    {
        .categoryName = _("Paintbrush"),
        .height = 9,
        .weight = 160,
        .description = gAbstraticPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLOOTICORN] =
    {
        .categoryName = _("Floaty"),
        .height = 21,
        .weight = 2200,
        .description = gFlooticornPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_LEGEARTH] =
    {
        .categoryName = _("Google"),
        .height = 17,
        .weight = 505,
        .description = gLegearthPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 271,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_LEGUESSR] =
    {
        .categoryName = _("Geo"),
        .height = 6,
        .weight = 108,
        .description = gLeguessrPokedexText,
        .pokemonScale = 393,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MINIMALO] =
    {
        .categoryName = _("Marshmallow"),
        .height = 14,
        .weight = 350,
        .description = gMinimaloPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DISMALO] =
    {
        .categoryName = _("Marshmallow"),
        .height = 18,
        .weight = 1520,
        .description = gDismaloPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 287,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MORTARMALO] =
    {
        .categoryName = _("Marshmallow"),
        .height = 5,
        .weight = 335,
        .description = gMortarmaloPokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COFFICRAB] =
    {
        .categoryName = _("Crab"),
        .height = 11,
        .weight = 1200,
        .description = gCofficrabPokedexText,
        .pokemonScale = 313,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRABERAVE] =
    {
        .categoryName = _("Crab"),
        .height = 6,
        .weight = 325,
        .description = gCraberavePokedexText,
        .pokemonScale = 320,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GNORB] =
    {
        .categoryName = _("Gnome"),
        .height = 14,
        .weight = 712,
        .description = gGnorbPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GAHNOMED] =
    {
        .categoryName = _("Gnome"),
        .height = 12,
        .weight = 580,
        .description = gGahnomedPokedexText,
        .pokemonScale = 287,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRYWEE] =
    {
        .categoryName = _("Olden"),
        .height = 7,
        .weight = 210,
        .description = gDryweePokedexText,
        .pokemonScale = 292,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STRAIDIRT] =
    {
        .categoryName = _("Olden"),
        .height = 14,
        .weight = 480,
        .description = gStraidirtPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BURNTONION] =
    {
        .categoryName = _("Anicent"),
        .height = 4,
        .weight = 60,
        .description = gBurntonionPokedexText,
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PLATERRY] =
    {
        .categoryName = _("Platypus"),
        .height = 6,
        .weight = 235,
        .description = gPlaterryPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RICKLING] =
    {
        .categoryName = _("IQ"),
        .height = 7,
        .weight = 214,
        .description = gRicklingPokedexText,
        .pokemonScale = 284,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PANTS] =
    {
        .categoryName = _("Him"),
        .height = 12,
        .weight = 755,
        .description = gPantsPokedexText,
        .pokemonScale = 280,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_REAPCHARGE] =
    {
        .categoryName = _("Rad"),
        .height = 15,
        .weight = 468,
        .description = gReapchargePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 310,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_SHOCKITTY] =
    {
        .categoryName = _("Thunder"),
        .height = 19,
        .weight = 1780,
        .description = gShockittyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_HEATTAR] =
    {
        .categoryName = _("Volcano"),
        .height = 21,
        .weight = 1980,
        .description = gHeattarPokedexText,
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_REINGEER] =
    {
        .categoryName = _("Aurora"),
        .height = 20,
        .weight = 1870,
        .description = gReingeerPokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_FROSLING] =
    {
        .categoryName = _("Ice"),
        .height = 6,
        .weight = 720,
        .description = gFroslingPokedexText,
        .pokemonScale = 472,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FROSHUND] =
    {
        .categoryName = _("Ice"),
        .height = 12,
        .weight = 1520,
        .description = gFroshundPokedexText,
        .pokemonScale = 292,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FROSILISK] =
    {
        .categoryName = _("Ice"),
        .height = 20,
        .weight = 2020,
        .description = gFrosiliskPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_HELPME] =
    {
        .categoryName = _("Glitch"),
        .height = 52,
        .weight = 2160,
        .description = gHelpmePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
    },

    [NATIONAL_DEX_SUFFER] =
    {
        .categoryName = _("Glitch"),
        .height = 38,
        .weight = 1990,
        .description = gSufferPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 610,
        .trainerOffset = 17,
    },

    [NATIONAL_DEX_LILGUY] =
    {
        .categoryName = _("Lovely"),
        .height = 6,
        .weight = 50,
        .description = gLilguyPokedexText,
        .pokemonScale = 393,
        .pokemonOffset = -10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BERRYALEN] =
    {
        .categoryName = _("Berry"),
        .height = 5,
        .weight = 50,
        .description = gBerryalenPokedexText,
        .pokemonScale = 541,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VERYBERRY] =
    {
        .categoryName = _("Berry"),
        .height = 9,
        .weight = 216,
        .description = gVeryberryPokedexText,
        .pokemonScale = 360,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_INCREDALEN] =
    {
        .categoryName = _("Berry"),
        .height = 17,
        .weight = 522,
        .description = gIncredalenPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 275,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_COOKLET] =
    {
        .categoryName = _("Chef"),
        .height = 4,
        .weight = 25,
        .description = gCookletPokedexText,
        .pokemonScale = 566,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHEFURE] =
    {
        .categoryName = _("Chef"),
        .height = 9,
        .weight = 195,
        .description = gChefurePokedexText,
        .pokemonScale = 343,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOURMASTER] =
    {
        .categoryName = _("Chef"),
        .height = 19,
        .weight = 520,
        .description = gGourmasterPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_BAITORD] =
    {
        .categoryName = _("Bait"),
        .height = 4,
        .weight = 76,
        .description = gBaitordPokedexText,
        .pokemonScale = 535,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BAITERROR] =
    {
        .categoryName = _("Bait"),
        .height = 7,
        .weight = 280,
        .description = gBaiterrorPokedexText,
        .pokemonScale = 340,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BAITANK] =
    {
        .categoryName = _("Bait"),
        .height = 15,
        .weight = 819,
        .description = gBaitankPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUPLICAT] =
    {
        .categoryName = _("Cat"),
        .height = 5,
        .weight = 136,
        .description = gDuplicatPokedexText,
        .pokemonScale = 481,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FURRLEAD] =
    {
        .categoryName = _("Lead"),
        .height = 10,
        .weight = 370,
        .description = gFurrleadPokedexText,
        .pokemonScale = 362,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MEOWRRIOR] =
    {
        .categoryName = _("Lead"),
        .height = 4,
        .weight = 175,
        .description = gMeowrriorPokedexText,
        .pokemonScale = 560,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZEPPUR] =
    {
        .categoryName = _("Zeplin"),
        .height = 5,
        .weight = 325,
        .description = gZeppurPokedexText,
        .pokemonScale = 321,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZEPURRINE] =
    {
        .categoryName = _("Zeplin"),
        .height = 3,
        .weight = 36,
        .description = gZepurrinePokedexText,
        .pokemonScale = 711,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NYANKITTY] =
    {
        .categoryName = _("Nyan"),
        .height = 6,
        .weight = 100,
        .description = gNyankittyPokedexText,
        .pokemonScale = 431,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NYANTIGER] =
    {
        .categoryName = _("Nyan"),
        .height = 10,
        .weight = 284,
        .description = gNyantigerPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MECHDUCK] =
    {
        .categoryName = _("Duck"),
        .height = 7,
        .weight = 115,
        .description = gMechduckPokedexText,
        .pokemonScale = 391,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUCKERTRON] =
    {
        .categoryName = _("Duck"),
        .height = 12,
        .weight = 316,
        .description = gDuckertronPokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCUBITE] =
    {
        .categoryName = _("Shark"),
        .height = 5,
        .weight = 26,
        .description = gScubitePokedexText,
        .pokemonScale = 406,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_QUACKSHOT] =
    {
        .categoryName = _("Duck"),
        .height = 12,
        .weight = 325,
        .description = gQuackshotPokedexText,
        .pokemonScale = 277,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_QUACKNATOR] =
    {
        .categoryName = _("Duck"),
        .height = 15,
        .weight = 550,
        .description = gQuacknatorPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_SOBBLEAF] =
    {
        .categoryName = _("Crybaby"),
        .height = 5,
        .weight = 40,
        .description = gSobbleafPokedexText,
        .pokemonScale = 472,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HEROKKU] =
    {
        .categoryName = _("Hero"),
        .height = 10,
        .weight = 280,
        .description = gHerokkuPokedexText,
        .pokemonScale = 299,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHADEKU] =
    {
        .categoryName = _("Anti-Hero"),
        .height = 13,
        .weight = 596,
        .description = gShadekuPokedexText,
        .pokemonScale = 290,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TAILLOW] =
    {
        .categoryName = _("Tinyswallow"),
        .height = 3,
        .weight = 23,
        .description = gTaillowPokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_XAPP] =
    {
        .categoryName = _("Twitter"),
        .height = 7,
        .weight = 198,
        .description = gXappPokedexText,
        .pokemonScale = 428,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BATCARDI] =
    {
        .categoryName = _("Rum"),
        .height = 6,
        .weight = 95,
        .description = gBatcardiPokedexText,
        .pokemonScale = 295,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NOCTRUM] =
    {
        .categoryName = _("Rum"),
        .height = 12,
        .weight = 280,
        .description = gNoctrumPokedexText,
        .pokemonScale = 288,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NOTAFURRY] =
    {
        .categoryName = _("Neko"),
        .height = 4,
        .weight = 66,
        .description = gNotafurryPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SORTAFURRY] =
    {
        .categoryName = _("Catgirl"),
        .height = 8,
        .weight = 202,
        .description = gSortafurryPokedexText,
        .pokemonScale = 354,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_THATSFURRY] =
    {
        .categoryName = _("Fursona"),
        .height = 16,
        .weight = 484,
        .description = gThatsfurryPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WHISKBALL] =
    {
        .categoryName = _("Whisky"),
        .height = 5,
        .weight = 17,
        .description = gWhiskballPokedexText,
        .pokemonScale = 375,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CINAMANCER] =
    {
        .categoryName = _("Whisky"),
        .height = 8,
        .weight = 36,
        .description = gCinamancerPokedexText,
        .pokemonScale = 378,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLINKY] =
    {
        .categoryName = _("Pen"),
        .height = 4,
        .weight = 45,
        .description = gBlinkyPokedexText,
        .pokemonScale = 513,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DOUBLINKER] =
    {
        .categoryName = _("Pen"),
        .height = 12,
        .weight = 392,
        .description = gDoublinkerPokedexText,
        .pokemonScale = 324,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DOOBOB] =
    {
        .categoryName = _("Doodle"),
        .height = 8,
        .weight = 240,
        .description = gDoobobPokedexText,
        .pokemonScale = 291,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DOODOOBOB] =
    {
        .categoryName = _("Doodle"),
        .height = 14,
        .weight = 465,
        .description = gDoodoobobPokedexText,
        .pokemonScale = 301,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UGADOOBA] =
    {
        .categoryName = _("Doodle"),
        .height = 20,
        .weight = 1305,
        .description = gUgadoobaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 300,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_NINCADA] =
    {
        .categoryName = _("Trainee"),
        .height = 5,
        .weight = 55,
        .description = gNincadaPokedexText,
        .pokemonScale = 405,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NINJASK] =
    {
        .categoryName = _("Ninja"),
        .height = 8,
        .weight = 120,
        .description = gNinjaskPokedexText,
        .pokemonScale = 383,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHEDINJA] =
    {
        .categoryName = _("Shed"),
        .height = 8,
        .weight = 12,
        .description = gShedinjaPokedexText,
        .pokemonScale = 372,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COWERLIN] =
    {
        .categoryName = _("Virgin"),
        .height = 6,
        .weight = 163,
        .description = gCowerlinPokedexText,
        .pokemonScale = 373,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRAVOGOR] =
    {
        .categoryName = _("Chad"),
        .height = 10,
        .weight = 405,
        .description = gBravogorPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GIGALPHA] =
    {
        .categoryName = _("Chad"),
        .height = 15,
        .weight = 840,
        .description = gGigalphaPokedexText,
        .pokemonScale = 284,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ANGBEAST] =
    {
        .categoryName = _("Gang"),
        .height = 10,
        .weight = 864,
        .description = gAngbeastPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GANGBEATS] =
    {
        .categoryName = _("Gang"),
        .height = 23,
        .weight = 2538,
        .description = gGangbeatsPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 343,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_AZURILL] =
    {
        .categoryName = _("Polka Dot"),
        .height = 2,
        .weight = 20,
        .description = gAzurillPokedexText,
        .pokemonScale = 603,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCATRUSH] =
    {
        .categoryName = _("Poop"),
        .height = 10,
        .weight = 970,
        .description = gScatrushPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 9,
        .trainerScale = 289,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_SMOSLIME] =
    {
        .categoryName = _("Slime"),
        .height = 6,
        .weight = 110,
        .description = gSmoslimePokedexText,
        .pokemonScale = 492,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NYANCAT] =
    {
        .categoryName = _("Nyan"),
        .height = 11,
        .weight = 326,
        .description = gNyancatPokedexText,
        .pokemonScale = 322,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SECRITLER] =
    {
        .categoryName = _("Fascist"),
        .height = 5,
        .weight = 110,
        .description = gSecritlerPokedexText,
        .pokemonScale = 451,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MINITRON] =
    {
        .categoryName = _("Deception"),
        .height = 6,
        .weight = 115,
        .description = gMinitronPokedexText,
        .pokemonScale = 466,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARON] =
    {
        .categoryName = _("Iron Armor"),
        .height = 4,
        .weight = 600,
        .description = gAronPokedexText,
        .pokemonScale = 419,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GALVATRON] =
    {
        .categoryName = _("Deception"),
        .height = 9,
        .weight = 1200,
        .description = gGalvatronPokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MURPHIRE] =
    {
        .categoryName = _("Disaster"),
        .height = 21,
        .weight = 3600,
        .description = gMurphirePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 350,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_LONK] =
    {
        .categoryName = _("Graceless"),
        .height = 6,
        .weight = 112,
        .description = gLonkPokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LONKEST] =
    {
        .categoryName = _("Graceless"),
        .height = 13,
        .weight = 315,
        .description = gLonkestPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CORDRA] =
    {
        .categoryName = _("Cord"),
        .height = 6,
        .weight = 152,
        .description = gCordraPokedexText,
        .pokemonScale = 290,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AUXILISK] =
    {
        .categoryName = _("Cord"),
        .height = 15,
        .weight = 402,
        .description = gAuxiliskPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PURRSOUR] =
    {
        .categoryName = _("liqueur"),
        .height = 4,
        .weight = 42,
        .description = gPurrsourPokedexText,
        .pokemonScale = 515,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PURRTANG] =
    {
        .categoryName = _("liqueur"),
        .height = 4,
        .weight = 42,
        .description = gPurrtangPokedexText,
        .pokemonScale = 512,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_REWINDLE] =
    {
        .categoryName = _("VHS"),
        .height = 7,
        .weight = 177,
        .description = gRewindlePokedexText,
        .pokemonScale = 442,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DNDICE] =
    {
        .categoryName = _("Dice"),
        .height = 6,
        .weight = 177,
        .description = gDndicePokedexText,
        .pokemonScale = 572,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ALIEON] =
    {
        .categoryName = _("Meep"),
        .height = 3,
        .weight = 20,
        .description = gAlieonPokedexText,
        .pokemonScale = 677,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SYMBITE] =
    {
        .categoryName = _("Venom"),
        .height = 4,
        .weight = 103,
        .description = gSymbitePokedexText,
        .pokemonScale = 593,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CARNIGORE] =
    {
        .categoryName = _("Carnage"),
        .height = 17,
        .weight = 800,
        .description = gCarnigorePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 345,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_BREWFIN] =
    {
        .categoryName = _("Lager"),
        .height = 8,
        .weight = 208,
        .description = gBrewfinPokedexText,
        .pokemonScale = 362,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHARKEG] =
    {
        .categoryName = _("Lager"),
        .height = 18,
        .weight = 888,
        .description = gSharkegPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 317,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_SHRIMPOT] =
    {
        .categoryName = _("Shrimp"),
        .height = 20,
        .weight = 1300,
        .description = gShrimpotPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 493,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LOBSCALD] =
    {
        .categoryName = _("Lobster"),
        .height = 145,
        .weight = 3980,
        .description = gLobscaldPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 1352,
        .trainerOffset = 18,
    },

    [NATIONAL_DEX_VULPOINTER] =
    {
        .categoryName = _("Cursor"),
        .height = 7,
        .weight = 240,
        .description = gVulpointerPokedexText,
        .pokemonScale = 342,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ERRORINE] =
    {
        .categoryName = _("Error"),
        .height = 19,
        .weight = 2200,
        .description = gErrorinePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 7,
        .trainerScale = 345,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_HELLAPHANT] =
    {
        .categoryName = _("Wizard"),
        .height = 5,
        .weight = 804,
        .description = gHellaphantPokedexText,
        .pokemonScale = 390,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FIZZCUB] =
    {
        .categoryName = _("Seltzer"),
        .height = 7,
        .weight = 306,
        .description = gFizzcubPokedexText,
        .pokemonScale = 423,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SELTCLAW] =
    {
        .categoryName = _("Seltzer"),
        .height = 9,
        .weight = 715,
        .description = gSeltclawPokedexText,
        .pokemonScale = 358,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YELTZER] =
    {
        .categoryName = _("Seltzer"),
        .height = 11,
        .weight = 50,
        .description = gYeltzerPokedexText,
        .pokemonScale = 321,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_METIORE] =
    {
        .categoryName = _("Space"),
        .height = 7,
        .weight = 150,
        .description = gMetiorePokedexText,
        .pokemonScale = 298,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COMETIDE] =
    {
        .categoryName = _("Space"),
        .height = 11,
        .weight = 153,
        .description = gCometidePokedexText,
        .pokemonScale = 370,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GALADRAKE] =
    {
        .categoryName = _("Space"),
        .height = 20,
        .weight = 820,
        .description = gGaladrakePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_YOLKANNER] =
    {
        .categoryName = _("Eggs"),
        .height = 4,
        .weight = 513,
        .description = gYolkannerPokedexText,
        .pokemonScale = 455,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ACONEGGS] =
    {
        .categoryName = _("Eggs"),
        .height = 13,
        .weight = 774,
        .description = gAconeggsPokedexText,
        .pokemonScale = 327,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARMYDRONE] =
    {
        .categoryName = _("Army"),
        .height = 4,
        .weight = 12,
        .description = gArmydronePokedexText,
        .pokemonScale = 422,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UNSC] =
    {
        .categoryName = _("Army"),
        .height = 11,
        .weight = 206,
        .description = gUNSCPokedexText,
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SMITNION] =
    {
        .categoryName = _("Smite"),
        .height = 13,
        .weight = 403,
        .description = gSmitnionPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARACKNE] =
    {
        .categoryName = _("Assassin"),
        .height = 27,
        .weight = 525,
        .description = gAracknePokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SURTYUR] =
    {
        .categoryName = _("Warrior"),
        .height = 10,
        .weight = 1680,
        .description = gSurtyurPokedexText,
        .pokemonScale = 300,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GANESH] =
    {
        .categoryName = _("Guardian"),
        .height = 12,
        .weight = 1540,
        .description = gGaneshPokedexText,
        .pokemonScale = 328,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COOPID] =
    {
        .categoryName = _("Hunter"),
        .height = 4,
        .weight = 19,
        .description = gCoopidPokedexText,
        .pokemonScale = 581,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPLASHICOOT] =
    {
        .categoryName = _("Mermaid"),
        .height = 9,
        .weight = 236,
        .description = gSplashicootPokedexText,
        .pokemonScale = 317,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NONGETIVE] =
    {
        .categoryName = _("Music"),
        .height = 6,
        .weight = 115,
        .description = gNongetivePokedexText,
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NONONMON] =
    {
        .categoryName = _("Music"),
        .height = 11,
        .weight = 328,
        .description = gNononmonPokedexText,
        .pokemonScale = 365,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DREIDRILL] =
    {
        .categoryName = _("Jewish"),
        .height = 5,
        .weight = 215,
        .description = gDreidrillPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HEBURROW] =
    {
        .categoryName = _("Jewish"),
        .height = 15,
        .weight = 1080,
        .description = gHeburrowPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 280,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_ODOSAUR] =
    {
        .categoryName = _("Dino"),
        .height = 10,
        .weight = 238,
        .description = gOdosaurPokedexText,
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PYRABASS] =
    {
        .categoryName = _("Bass"),
        .height = 15,
        .weight = 604,
        .description = gPyrabassPokedexText,
        .pokemonScale = 267,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TRICERAS] =
    {
        .categoryName = _("Dino"),
        .height = 7,
        .weight = 125,
        .description = gTricerasPokedexText,
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_XENOTOPS] =
    {
        .categoryName = _("Dino"),
        .height = 15,
        .weight = 682,
        .description = gXenotopsPokedexText,
        .pokemonScale = 312,
        .pokemonOffset = 3,
        .trainerScale = 271,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PADDLITE] =
    {
        .categoryName = _("Boat"),
        .height = 6,
        .weight = 74,
        .description = gPaddlitePokedexText,
        .pokemonScale = 423,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NUTVALANCHE] =
    {
        .categoryName = _("Nut"),
        .height = 62,
        .weight = 1620,
        .description = gNutvalanchePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 360,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_CASTFORM] =
    {
        .categoryName = _("Weather"),
        .height = 3,
        .weight = 8,
        .description = gCastformPokedexText,
        .pokemonScale = 435,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KECLEON] =
    {
        .categoryName = _("Color Swap"),
        .height = 10,
        .weight = 220,
        .description = gKecleonPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TICKTOWEL] =
    {
        .categoryName = _("Clock"),
        .height = 6,
        .weight = 23,
        .description = gTicktowelPokedexText,
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOCKTOWER] =
    {
        .categoryName = _("Clock"),
        .height = 11,
        .weight = 125,
        .description = gTocktowerPokedexText,
        .pokemonScale = 262,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RATMAN] =
    {
        .categoryName = _("Rat"),
        .height = 8,
        .weight = 150,
        .description = gRatmanPokedexText,
        .pokemonScale = 406,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HUGEMAN] =
    {
        .categoryName = _("Anomaly"),
        .height = 16,
        .weight = 306,
        .description = gHugemanPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 299,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_TROPIUS] =
    {
        .categoryName = _("Fruit"),
        .height = 20,
        .weight = 1000,
        .description = gTropiusPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 344,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_KIRBAIRDE] =
    {
        .categoryName = _("Ride"),
        .height = 6,
        .weight = 10,
        .description = gKirbairdePokedexText,
        .pokemonScale = 505,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FREDBAR] =
    {
        .categoryName = _("Fnaf"),
        .height = 12,
        .weight = 470,
        .description = gFredbarPokedexText,
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BABINION] =
    {
        .categoryName = _("Onion"),
        .height = 6,
        .weight = 140,
        .description = gBabinionPokedexText,
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHAIROLD] =
    {
        .categoryName = _("Special"),
        .height = 7,
        .weight = 168,
        .description = gChairoldPokedexText,
        .pokemonScale = 380,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ELECHAIR] =
    {
        .categoryName = _("Special"),
        .height = 15,
        .weight = 2565,
        .description = gElechairPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 344,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIRAGHOUL] =
    {
        .categoryName = _("Pirate"),
        .height = 8,
        .weight = 395,
        .description = gPiraghoulPokedexText,
        .pokemonScale = 315,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MORGHOST] =
    {
        .categoryName = _("Pirate"),
        .height = 11,
        .weight = 876,
        .description = gMorghostPokedexText,
        .pokemonScale = 338,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PHASMORGAN] =
    {
        .categoryName = _("Pirate"),
        .height = 14,
        .weight = 1506,
        .description = gPhasmorganPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLBNAR] =
    {
        .categoryName = _("Goblin"),
        .height = 4,
        .weight = 525,
        .description = gGolbnarPokedexText,
        .pokemonScale = 691,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLOBNAUT] =
    {
        .categoryName = _("Goblin"),
        .height = 17,
        .weight = 270,
        .description = gGlobnautPokedexText,
        .pokemonScale = 307,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_THAUMNAR] =
    {
        .categoryName = _("Goblin"),
        .height = 18,
        .weight = 226,
        .description = gThaumnarPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GALACNAR] =
    {
        .categoryName = _("Goblin"),
        .height = 10,
        .weight = 234,
        .description = gGalacnarPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WARPNAR] =
    {
        .categoryName = _("Goblin"),
        .height = 6,
        .weight = 87,
        .description = gWarpnarPokedexText,
        .pokemonScale = 371,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SIPKING] =
    {
        .categoryName = _("Drink"),
        .height = 6,
        .weight = 421,
        .description = gSipkingPokedexText,
        .pokemonScale = 448,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TIPSYRAMID] =
    {
        .categoryName = _("Drink"),
        .height = 11,
        .weight = 1105,
        .description = gTipsyramidPokedexText,
        .pokemonScale = 311,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRUNKABUS] =
    {
        .categoryName = _("Drink"),
        .height = 15,
        .weight = 1026,
        .description = gDrunkabusPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YELLEYE] =
    {
        .categoryName = _("Eldritch"),
        .height = 6,
        .weight = 952,
        .description = gYelleyePokedexText,
        .pokemonScale = 414,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HARASTUR] =
    {
        .categoryName = _("Eldritch"),
        .height = 12,
        .weight = 2025,
        .description = gHarasturPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HAZETHOTH] =
    {
        .categoryName = _("Eldritch"),
        .height = 16,
        .weight = 5500,
        .description = gHazethothPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 447,
        .trainerOffset = 9,
    },

    [NATIONAL_DEX_REGIROCK] =
    {
        .categoryName = _("Rock Peak"),
        .height = 17,
        .weight = 2300,
        .description = gRegirockPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 309,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_REGICE] =
    {
        .categoryName = _("Iceberg"),
        .height = 18,
        .weight = 1750,
        .description = gRegicePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_NAWFFLE] =
    {
        .categoryName = _("Nope"),
        .height = 19,
        .weight = 2050,
        .description = gNawfflePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 359,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_LATIAS] =
    {
        .categoryName = _("Eon"),
        .height = 14,
        .weight = 400,
        .description = gLatiasPokedexText,
        .pokemonScale = 304,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LATIOS] =
    {
        .categoryName = _("Eon"),
        .height = 20,
        .weight = 600,
        .description = gLatiosPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 294,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_KRAKRUM] =
    {
        .categoryName = _("Rum"),
        .height = 45,
        .weight = 3520,
        .description = gKrakrumPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 614,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_NOIRNET] =
    {
        .categoryName = _("Net"),
        .height = 35,
        .weight = 9500,
        .description = gNoirnetPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 515,
        .trainerOffset = 14,
    },

    [NATIONAL_DEX_RAYQUAZA] =
    {
        .categoryName = _("Sky High"),
        .height = 70,
        .weight = 2065,
        .description = gRayquazaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 448,
        .trainerOffset = 12,
    },

    [NATIONAL_DEX_THISCRAKER] =
    {
        .categoryName = _("Cracker"),
        .height = 3,
        .weight = 11,
        .description = gThiscrakerPokedexText,
        .pokemonScale = 608,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEOXYS] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gDeoxysPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TURTWIG] =
    {
        .categoryName = _("TinyLeaf"),
        .height = 4,
        .weight = 102,
        .description = gTurtwigPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GROTLE] =
    {
        .categoryName = _("Grove"),
        .height = 11,
        .weight = 970,
        .description = gGrotlePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TORTERRA] =
    {
        .categoryName = _("Continent"),
        .height = 22,
        .weight = 3100,
        .description = gTorterraPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EMBOB] =
    {
        .categoryName = _("Sponge"),
        .height = 5,
        .weight = 62,
        .description = gEmbobPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COALGAR] =
    {
        .categoryName = _("Sponge"),
        .height = 9,
        .weight = 220,
        .description = gCoalgarPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BOBISTIC] =
    {
        .categoryName = _("Sponge"),
        .height = 12,
        .weight = 550,
        .description = gBobisticPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OROFLOW] =
    {
        .categoryName = _("Hydra"),
        .height = 4,
        .weight = 52,
        .description = gOroflowPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OROCAST] =
    {
        .categoryName = _("Hydra"),
        .height = 8,
        .weight = 230,
        .description = gOrocastPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ORROWHELM] =
    {
        .categoryName = _("Hydra"),
        .height = 17,
        .weight = 845,
        .description = gOrrowhelmPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STARLY] =
    {
        .categoryName = _("Starling"),
        .height = 3,
        .weight = 20,
        .description = gStarlyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STARAVIA] =
    {
        .categoryName = _("Starling"),
        .height = 6,
        .weight = 155,
        .description = gStaraviaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STARAPTOR] =
    {
        .categoryName = _("Predator"),
        .height = 12,
        .weight = 249,
        .description = gStaraptorPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_XDIK] =
    {
        .categoryName = _("Emote"),
        .height = 5,
        .weight = 200,
        .description = gXdikPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_XDEMON] =
    {
        .categoryName = _("Emote"),
        .height = 10,
        .weight = 315,
        .description = gXdemonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DESITRUS] =
    {
        .categoryName = _("Lemon"),
        .height = 3,
        .weight = 22,
        .description = gDesitrusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DESQUEEZE] =
    {
        .categoryName = _("Lemon"),
        .height = 10,
        .weight = 255,
        .description = gDesqueezePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHINX] =
    {
        .categoryName = _("Flash"),
        .height = 5,
        .weight = 95,
        .description = gShinxPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RIMESLANCH] =
    {
        .categoryName = _("Slime"),
        .height = 9,
        .weight = 305,
        .description = gRimeslanchPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUXRAY] =
    {
        .categoryName = _("Gleam Eyes"),
        .height = 14,
        .weight = 420,
        .description = gLuxrayPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BANSLIP] =
    {
        .categoryName = _("Fib"),
        .height = 2,
        .weight = 12,
        .description = gBanslipPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROSERADE] =
    {
        .categoryName = _("Bouquet"),
        .height = 9,
        .weight = 145,
        .description = gRoseradePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRANIDOS] =
    {
        .categoryName = _("Headbutt"),
        .height = 9,
        .weight = 315,
        .description = gCranidosPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RAMPARDOS] =
    {
        .categoryName = _("Headbutt"),
        .height = 16,
        .weight = 1025,
        .description = gRampardosPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHIELDON] =
    {
        .categoryName = _("Shield"),
        .height = 5,
        .weight = 570,
        .description = gShieldonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BASTIODON] =
    {
        .categoryName = _("Shield"),
        .height = 13,
        .weight = 1495,
        .description = gBastiodonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PARSLITO] =
    {
        .categoryName = _("Parsley"),
        .height = 2,
        .weight = 34,
        .description = gParslitoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MOJISLEY] =
    {
        .categoryName = _("Parsley"),
        .height = 5,
        .weight = 65,
        .description = gMojisleyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GAILORD] =
    {
        .categoryName = _("Warlock"),
        .height = 9,
        .weight = 233,
        .description = gGailordPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COMBEE] =
    {
        .categoryName = _("Tiny Bee"),
        .height = 3,
        .weight = 55,
        .description = gCombeePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VESPIQUEN] =
    {
        .categoryName = _("Beehive"),
        .height = 12,
        .weight = 385,
        .description = gVespiquenPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEADMOUS] =
    {
        .categoryName = _("EDM"),
        .height = 4,
        .weight = 39,
        .description = gDeadmousPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SQUIGGA] =
    {
        .categoryName = _("Squid"),
        .height = 7,
        .weight = 295,
        .description = gSquiggaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DESPARWARD] =
    {
        .categoryName = _("Squid"),
        .height = 11,
        .weight = 335,
        .description = gDesparwardPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BUSHIZARD] =
    {
        .categoryName = _("Bush"),
        .height = 4,
        .weight = 33,
        .description = gBushizardPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NOTYUHDAD] =
    {
        .categoryName = _("Bush"),
        .height = 5,
        .weight = 93,
        .description = gNotyuhdadPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHOCCUDLE] =
    {
        .categoryName = _("Chocolate"),
        .height = 3,
        .weight = 63,
        .description = gChoccudlePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHOCTIC] =
    {
        .categoryName = _("Chocolate"),
        .height = 9,
        .weight = 299,
        .description = gChocticPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AMBIPOM] =
    {
        .categoryName = _("Long Tail"),
        .height = 12,
        .weight = 203,
        .description = gAmbipomPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRIFLOON] =
    {
        .categoryName = _("Balloon"),
        .height = 4,
        .weight = 12,
        .description = gDrifloonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRIFBLIM] =
    {
        .categoryName = _("Blimp"),
        .height = 12,
        .weight = 150,
        .description = gDrifblimPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BUNEARY] =
    {
        .categoryName = _("Rabbit"),
        .height = 4,
        .weight = 55,
        .description = gBunearyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LOPUNNY] =
    {
        .categoryName = _("Rabbit"),
        .height = 12,
        .weight = 333,
        .description = gLopunnyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MISMAGIUS] =
    {
        .categoryName = _("Magical"),
        .height = 9,
        .weight = 44,
        .description = gMismagiusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HONCHKROW] =
    {
        .categoryName = _("Big Boss"),
        .height = 9,
        .weight = 273,
        .description = gHonchkrowPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLAMEOW] =
    {
        .categoryName = _("Catty"),
        .height = 5,
        .weight = 39,
        .description = gGlameowPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GORFOLD] =
    {
        .categoryName = _("Lasagna"),
        .height = 10,
        .weight = 438,
        .description = gGorfoldPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUIWEE] =
    {
        .categoryName = _("Brother"),
        .height = 2,
        .weight = 6,
        .description = gLuiweePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STUNKY] =
    {
        .categoryName = _("Skunk"),
        .height = 4,
        .weight = 192,
        .description = gStunkyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKUNTANK] =
    {
        .categoryName = _("Skunk"),
        .height = 10,
        .weight = 380,
        .description = gSkuntankPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRONZOR] =
    {
        .categoryName = _("Bronze"),
        .height = 5,
        .weight = 605,
        .description = gBronzorPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRONZONG] =
    {
        .categoryName = _("Bronze Bell"),
        .height = 13,
        .weight = 1870,
        .description = gBronzongPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BONSLY] =
    {
        .categoryName = _("Bonsai"),
        .height = 5,
        .weight = 150,
        .description = gBonslyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MIMEJR] =
    {
        .categoryName = _("Mime"),
        .height = 6,
        .weight = 130,
        .description = gMimeJrPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HANGINGY] =
    {
        .categoryName = _("Death"),
        .height = 6,
        .weight = 244,
        .description = gHangingyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ENDERAGON] =
    {
        .categoryName = _("End"),
        .height = 5,
        .weight = 19,
        .description = gEnderagonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHANCER] =
    {
        .categoryName = _("Death"),
        .height = 10,
        .weight = 1080,
        .description = gChancerPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CAPPLE] =
    {
        .categoryName = _("Cap"),
        .height = 7,
        .weight = 205,
        .description = gCapplePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHELLHAUL] =
    {
        .categoryName = _("Truck"),
        .height = 14,
        .weight = 560,
        .description = gShellhaulPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TRUCKOISE] =
    {
        .categoryName = _("Truck"),
        .height = 19,
        .weight = 950,
        .description = gTruckoisePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TROLOLING] =
    {
        .categoryName = _("Troll"),
        .height = 6,
        .weight = 1050,
        .description = gTrololingPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRIXEL] =
    {
        .categoryName = _("Lego"),
        .height = 7,
        .weight = 202,
        .description = gBrixelPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLOKNOCK] =
    {
        .categoryName = _("Lego"),
        .height = 12,
        .weight = 540,
        .description = gBloknockPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JOURNEMAP] =
    {
        .categoryName = _("Map"),
        .height = 8,
        .weight = 495,
        .description = gJournemapPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JOURNESHIP] =
    {
        .categoryName = _("Map"),
        .height = 20,
        .weight = 3000,
        .description = gJourneshipPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKORUPI] =
    {
        .categoryName = _("Scorpion"),
        .height = 8,
        .weight = 120,
        .description = gSkorupiPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRAPION] =
    {
        .categoryName = _("Scorpion"),
        .height = 13,
        .weight = 615,
        .description = gDrapionPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CROAGUNK] =
    {
        .categoryName = _("Toxic Mouth"),
        .height = 7,
        .weight = 230,
        .description = gCroagunkPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOXICROAK] =
    {
        .categoryName = _("Toxic Mouth"),
        .height = 13,
        .weight = 444,
        .description = gToxicroakPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CARNIVINE] =
    {
        .categoryName = _("Bug Catcher"),
        .height = 14,
        .weight = 270,
        .description = gCarnivinePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FINNEON] =
    {
        .categoryName = _("Wing Fish"),
        .height = 4,
        .weight = 70,
        .description = gFinneonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUMINEON] =
    {
        .categoryName = _("Neon"),
        .height = 12,
        .weight = 240,
        .description = gLumineonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MANTYKE] =
    {
        .categoryName = _("Kite"),
        .height = 10,
        .weight = 650,
        .description = gMantykePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNOVER] =
    {
        .categoryName = _("Frost Tree"),
        .height = 10,
        .weight = 505,
        .description = gSnoverPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ABOMASNOW] =
    {
        .categoryName = _("Frost Tree"),
        .height = 22,
        .weight = 1355,
        .description = gAbomasnowPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FREDUNKLE] =
    {
        .categoryName = _("Uncle"),
        .height = 11,
        .weight = 340,
        .description = gFredunklePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGNEZONE] =
    {
        .categoryName = _("Magnet Area"),
        .height = 12,
        .weight = 1800,
        .description = gMagnezonePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LICKILICKY] =
    {
        .categoryName = _("Licking"),
        .height = 17,
        .weight = 1400,
        .description = gLickilickyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RHYPERIOR] =
    {
        .categoryName = _("Drill"),
        .height = 24,
        .weight = 2828,
        .description = gRhyperiorPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TANGROWTH] =
    {
        .categoryName = _("Vine"),
        .height = 20,
        .weight = 1286,
        .description = gTangrowthPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ELECTIVIRE] =
    {
        .categoryName = _("Thunderbolt"),
        .height = 18,
        .weight = 1386,
        .description = gElectivirePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOASTRIDER] =
    {
        .categoryName = _("Burnt"),
        .height = 16,
        .weight = 680,
        .description = gToastriderPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOGEKISS] =
    {
        .categoryName = _("Jubilee"),
        .height = 15,
        .weight = 380,
        .description = gTogekissPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YANMEGA] =
    {
        .categoryName = _("Ogre Darner"),
        .height = 19,
        .weight = 515,
        .description = gYanmegaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LEAFEON] =
    {
        .categoryName = _("Verdant"),
        .height = 10,
        .weight = 255,
        .description = gLeafeonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLACEON] =
    {
        .categoryName = _("Fresh Snow"),
        .height = 8,
        .weight = 259,
        .description = gGlaceonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLISCOR] =
    {
        .categoryName = _("Scorpion"),
        .height = 20,
        .weight = 425,
        .description = gGliscorPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAMOSWINE] =
    {
        .categoryName = _("Twin Tusk"),
        .height = 25,
        .weight = 2910,
        .description = gMamoswinePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HELLSPACK] =
    {
        .categoryName = _("Edible"),
        .height = 9,
        .weight = 340,
        .description = gHellspackPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GALLADE] =
    {
        .categoryName = _("Blade"),
        .height = 16,
        .weight = 520,
        .description = gGalladePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PROBOPASS] =
    {
        .categoryName = _("Compass"),
        .height = 14,
        .weight = 3400,
        .description = gProbopassPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKELEDOOM] =
    {
        .categoryName = _("Doot"),
        .height = 22,
        .weight = 1066,
        .description = gSkeledoomPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLINKRUPT] =
    {
        .categoryName = _("SCP"),
        .height = 13,
        .weight = 266,
        .description = gBlinkruptPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROTOM] =
    {
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = gRotomPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UXIE] =
    {
        .categoryName = _("Knowledge"),
        .height = 3,
        .weight = 3,
        .description = gUxiePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MESPRIT] =
    {
        .categoryName = _("Emotion"),
        .height = 3,
        .weight = 3,
        .description = gMespritPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AZELF] =
    {
        .categoryName = _("Willpower"),
        .height = 3,
        .weight = 3,
        .description = gAzelfPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DIALGA] =
    {
        .categoryName = _("Temporal"),
        .height = 54,
        .weight = 6830,
        .description = gDialgaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PALKIA] =
    {
        .categoryName = _("Spatial"),
        .height = 42,
        .weight = 3360,
        .description = gPalkiaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HEATRAN] =
    {
        .categoryName = _("Lava Dome"),
        .height = 17,
        .weight = 4300,
        .description = gHeatranPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_REGIGIGAS] =
    {
        .categoryName = _("Colossal"),
        .height = 37,
        .weight = 4200,
        .description = gRegigigasPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GIRATINA] =
    {
        .categoryName = _("Renegade"),
        .height = 45,
        .weight = 7500,
        .description = gGiratinaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRESSELIA] =
    {
        .categoryName = _("Lunar"),
        .height = 15,
        .weight = 856,
        .description = gCresseliaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PHIONE] =
    {
        .categoryName = _("Sea Drifter"),
        .height = 4,
        .weight = 31,
        .description = gPhionePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MANAPHY] =
    {
        .categoryName = _("Seafaring"),
        .height = 3,
        .weight = 14,
        .description = gManaphyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DARKRAI] =
    {
        .categoryName = _("Pitch-Black"),
        .height = 15,
        .weight = 505,
        .description = gDarkraiPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHAYMIN] =
    {
        .categoryName = _("Gratitude"),
        .height = 2,
        .weight = 21,
        .description = gShayminPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARCEUS] =
    {
        .categoryName = _("Alpha"),
        .height = 32,
        .weight = 3200,
        .description = gArceusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VICTINI] =
    {
        .categoryName = _("Victory"),
        .height = 4,
        .weight = 40,
        .description = gVictiniPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNIVY] =
    {
        .categoryName = _("Grass Snake"),
        .height = 6,
        .weight = 81,
        .description = gSnivyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SERVINE] =
    {
        .categoryName = _("Grass Snake"),
        .height = 8,
        .weight = 160,
        .description = gServinePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SERPERIOR] =
    {
        .categoryName = _("Regal"),
        .height = 33,
        .weight = 630,
        .description = gSerperiorPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TEPIG] =
    {
        .categoryName = _("Fire Pig"),
        .height = 5,
        .weight = 99,
        .description = gTepigPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIGNITE] =
    {
        .categoryName = _("Fire Pig"),
        .height = 10,
        .weight = 555,
        .description = gPignitePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EMBOAR] =
    {
        .categoryName = _("Fire Pig"),
        .height = 16,
        .weight = 1500,
        .description = gEmboarPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OSHAWOTT] =
    {
        .categoryName = _("Sea Otter"),
        .height = 5,
        .weight = 59,
        .description = gOshawottPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEWOTT] =
    {
        .categoryName = _("Discipline"),
        .height = 8,
        .weight = 245,
        .description = gDewottPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SAMUROTT] =
    {
        .categoryName = _("Formidable"),
        .height = 15,
        .weight = 946,
        .description = gSamurottPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PATRAT] =
    {
        .categoryName = _("Scout"),
        .height = 5,
        .weight = 116,
        .description = gPatratPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WATCHOG] =
    {
        .categoryName = _("Lookout"),
        .height = 11,
        .weight = 270,
        .description = gWatchogPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LILLIPUP] =
    {
        .categoryName = _("Puppy"),
        .height = 4,
        .weight = 41,
        .description = gLillipupPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HERDIER] =
    {
        .categoryName = _("Loyal Dog"),
        .height = 9,
        .weight = 147,
        .description = gHerdierPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STOUTLAND] =
    {
        .categoryName = _("Big-Hearted"),
        .height = 12,
        .weight = 610,
        .description = gStoutlandPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PURRLOIN] =
    {
        .categoryName = _("Devious"),
        .height = 4,
        .weight = 101,
        .description = gPurrloinPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LIEPARD] =
    {
        .categoryName = _("Cruel"),
        .height = 11,
        .weight = 375,
        .description = gLiepardPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PANSAGE] =
    {
        .categoryName = _("Grass Monkey"),
        .height = 6,
        .weight = 105,
        .description = gPansagePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SIMISAGE] =
    {
        .categoryName = _("Thorn Monkey"),
        .height = 11,
        .weight = 305,
        .description = gSimisagePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PANSEAR] =
    {
        .categoryName = _("High Temp"),
        .height = 6,
        .weight = 110,
        .description = gPansearPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SIMISEAR] =
    {
        .categoryName = _("Ember"),
        .height = 10,
        .weight = 280,
        .description = gSimisearPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PANPOUR] =
    {
        .categoryName = _("Spray"),
        .height = 6,
        .weight = 135,
        .description = gPanpourPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SIMIPOUR] =
    {
        .categoryName = _("Geyser"),
        .height = 10,
        .weight = 290,
        .description = gSimipourPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MUNNA] =
    {
        .categoryName = _("Dream Eater"),
        .height = 6,
        .weight = 233,
        .description = gMunnaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MUSHARNA] =
    {
        .categoryName = _("Drowsing"),
        .height = 11,
        .weight = 605,
        .description = gMusharnaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIDOVE] =
    {
        .categoryName = _("Tiny Pigeon"),
        .height = 3,
        .weight = 21,
        .description = gPidovePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TRANQUILL] =
    {
        .categoryName = _("Wild Pigeon"),
        .height = 6,
        .weight = 150,
        .description = gTranquillPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UNFEZANT] =
    {
        .categoryName = _("Proud"),
        .height = 12,
        .weight = 290,
        .description = gUnfezantPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLITZLE] =
    {
        .categoryName = _("Electrified"),
        .height = 8,
        .weight = 298,
        .description = gBlitzlePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZEBSTRIKA] =
    {
        .categoryName = _("Thunderbolt"),
        .height = 16,
        .weight = 795,
        .description = gZebstrikaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROGGENROLA] =
    {
        .categoryName = _("Mantle"),
        .height = 4,
        .weight = 180,
        .description = gRoggenrolaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BOLDORE] =
    {
        .categoryName = _("Ore"),
        .height = 9,
        .weight = 1020,
        .description = gBoldorePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GIGALITH] =
    {
        .categoryName = _("Compressed"),
        .height = 17,
        .weight = 2600,
        .description = gGigalithPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WOOBAT] =
    {
        .categoryName = _("Bat"),
        .height = 4,
        .weight = 21,
        .description = gWoobatPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWOOBAT] =
    {
        .categoryName = _("Courting"),
        .height = 9,
        .weight = 105,
        .description = gSwoobatPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRILBUR] =
    {
        .categoryName = _("Mole"),
        .height = 3,
        .weight = 85,
        .description = gDrilburPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EXCADRILL] =
    {
        .categoryName = _("Subterrene"),
        .height = 7,
        .weight = 404,
        .description = gExcadrillPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AUDINO] =
    {
        .categoryName = _("Hearing"),
        .height = 11,
        .weight = 310,
        .description = gAudinoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TIMBURR] =
    {
        .categoryName = _("Muscular"),
        .height = 6,
        .weight = 125,
        .description = gTimburrPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GURDURR] =
    {
        .categoryName = _("Muscular"),
        .height = 12,
        .weight = 400,
        .description = gGurdurrPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CONKELDURR] =
    {
        .categoryName = _("Muscular"),
        .height = 14,
        .weight = 870,
        .description = gConkeldurrPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYMPOLE] =
    {
        .categoryName = _("Tadpole"),
        .height = 5,
        .weight = 45,
        .description = gTympolePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PALPITOAD] =
    {
        .categoryName = _("Vibration"),
        .height = 8,
        .weight = 170,
        .description = gPalpitoadPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEISMITOAD] =
    {
        .categoryName = _("Vibration"),
        .height = 15,
        .weight = 620,
        .description = gSeismitoadPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_THROH] =
    {
        .categoryName = _("Judo"),
        .height = 13,
        .weight = 555,
        .description = gThrohPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SAWK] =
    {
        .categoryName = _("Karate"),
        .height = 14,
        .weight = 510,
        .description = gSawkPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEWADDLE] =
    {
        .categoryName = _("Sewing"),
        .height = 3,
        .weight = 25,
        .description = gSewaddlePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWADLOON] =
    {
        .categoryName = _("Leaf Wrapped"),
        .height = 5,
        .weight = 73,
        .description = gSwadloonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LEAVANNY] =
    {
        .categoryName = _("Nurturing"),
        .height = 12,
        .weight = 205,
        .description = gLeavannyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VENIPEDE] =
    {
        .categoryName = _("Centipede"),
        .height = 4,
        .weight = 53,
        .description = gVenipedePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WHIRLIPEDE] =
    {
        .categoryName = _("Curlipede"),
        .height = 12,
        .weight = 585,
        .description = gWhirlipedePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCOLIPEDE] =
    {
        .categoryName = _("Megapede"),
        .height = 25,
        .weight = 2005,
        .description = gScolipedePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COTTONEE] =
    {
        .categoryName = _("CottonPuff"),
        .height = 3,
        .weight = 6,
        .description = gCottoneePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WHIMSICOTT] =
    {
        .categoryName = _("Windveiled"),
        .height = 7,
        .weight = 66,
        .description = gWhimsicottPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PETILIL] =
    {
        .categoryName = _("Bulb"),
        .height = 5,
        .weight = 66,
        .description = gPetililPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LILLIGANT] =
    {
        .categoryName = _("Flowering"),
        .height = 11,
        .weight = 163,
        .description = gLilligantPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BASCULIN] =
    {
        .categoryName = _("Hostile"),
        .height = 10,
        .weight = 180,
        .description = gBasculinPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SANDILE] =
    {
        .categoryName = _("Desert Croc"),
        .height = 7,
        .weight = 152,
        .description = gSandilePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KROKOROK] =
    {
        .categoryName = _("Desert Croc"),
        .height = 10,
        .weight = 334,
        .description = gKrokorokPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KROOKODILE] =
    {
        .categoryName = _("Intimidate"),
        .height = 15,
        .weight = 963,
        .description = gKrookodilePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DARUMAKA] =
    {
        .categoryName = _("Zen Charm"),
        .height = 6,
        .weight = 375,
        .description = gDarumakaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DARMANITAN] =
    {
        .categoryName = _("Blazing"),
        .height = 13,
        .weight = 929,
        .description = gDarmanitanPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MARACTUS] =
    {
        .categoryName = _("Cactus"),
        .height = 10,
        .weight = 280,
        .description = gMaractusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DWEBBLE] =
    {
        .categoryName = _("Rock Inn"),
        .height = 3,
        .weight = 145,
        .description = gDwebblePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRUSTLE] =
    {
        .categoryName = _("Stone Home"),
        .height = 14,
        .weight = 2000,
        .description = gCrustlePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCRAGGY] =
    {
        .categoryName = _("Shedding"),
        .height = 6,
        .weight = 118,
        .description = gScraggyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCRAFTY] =
    {
        .categoryName = _("Hoodlum"),
        .height = 11,
        .weight = 300,
        .description = gScraftyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SIGILYPH] =
    {
        .categoryName = _("Avianoid"),
        .height = 14,
        .weight = 140,
        .description = gSigilyphPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YAMASK] =
    {
        .categoryName = _("Spirit"),
        .height = 5,
        .weight = 15,
        .description = gYamaskPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COFAGRIGUS] =
    {
        .categoryName = _("Coffin"),
        .height = 17,
        .weight = 765,
        .description = gCofagrigusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TIRTOUGA] =
    {
        .categoryName = _("Prototurtle"),
        .height = 7,
        .weight = 165,
        .description = gTirtougaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CARRACOSTA] =
    {
        .categoryName = _("Prototurtle"),
        .height = 12,
        .weight = 810,
        .description = gCarracostaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARCHEN] =
    {
        .categoryName = _("First Bird"),
        .height = 5,
        .weight = 95,
        .description = gArchenPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARCHEOPS] =
    {
        .categoryName = _("First Bird"),
        .height = 14,
        .weight = 320,
        .description = gArcheopsPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TRUBBISH] =
    {
        .categoryName = _("Trash Bag"),
        .height = 6,
        .weight = 310,
        .description = gTrubbishPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GARBODOR] =
    {
        .categoryName = _("Trash Heap"),
        .height = 19,
        .weight = 1073,
        .description = gGarbodorPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZORUA] =
    {
        .categoryName = _("Tricky Fox"),
        .height = 7,
        .weight = 125,
        .description = gZoruaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZOROARK] =
    {
        .categoryName = _("Illusion Fox"),
        .height = 16,
        .weight = 811,
        .description = gZoroarkPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MINCCINO] =
    {
        .categoryName = _("Chinchilla"),
        .height = 4,
        .weight = 58,
        .description = gMinccinoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CINCCINO] =
    {
        .categoryName = _("Scarf"),
        .height = 5,
        .weight = 75,
        .description = gCinccinoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOTHITA] =
    {
        .categoryName = _("Fixation"),
        .height = 4,
        .weight = 58,
        .description = gGothitaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOTHORITA] =
    {
        .categoryName = _("Manipulate"),
        .height = 7,
        .weight = 180,
        .description = gGothoritaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOTHITELLE] =
    {
        .categoryName = _("Astral Body"),
        .height = 15,
        .weight = 440,
        .description = gGothitellePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SOLOSIS] =
    {
        .categoryName = _("Cell"),
        .height = 3,
        .weight = 10,
        .description = gSolosisPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUOSION] =
    {
        .categoryName = _("Mitosis"),
        .height = 6,
        .weight = 80,
        .description = gDuosionPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_REUNICLUS] =
    {
        .categoryName = _("Multiplying"),
        .height = 10,
        .weight = 201,
        .description = gReuniclusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUCKLETT] =
    {
        .categoryName = _("Water Bird"),
        .height = 5,
        .weight = 55,
        .description = gDucklettPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWANNA] =
    {
        .categoryName = _("White Bird"),
        .height = 13,
        .weight = 242,
        .description = gSwannaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VANILLITE] =
    {
        .categoryName = _("Fresh Snow"),
        .height = 4,
        .weight = 57,
        .description = gVanillitePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VANILLISH] =
    {
        .categoryName = _("Icy Snow"),
        .height = 11,
        .weight = 410,
        .description = gVanillishPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VANILLUXE] =
    {
        .categoryName = _("Snowstorm"),
        .height = 13,
        .weight = 575,
        .description = gVanilluxePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEERLING] =
    {
        .categoryName = _("Season"),
        .height = 6,
        .weight = 195,
        .description = gDeerlingPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SAWSBUCK] =
    {
        .categoryName = _("Season"),
        .height = 19,
        .weight = 925,
        .description = gSawsbuckPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EMOLGA] =
    {
        .categoryName = _("Sky Squirrel"),
        .height = 4,
        .weight = 50,
        .description = gEmolgaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KARRABLAST] =
    {
        .categoryName = _("Clamping"),
        .height = 5,
        .weight = 59,
        .description = gKarrablastPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ESCAVALIER] =
    {
        .categoryName = _("Cavalry"),
        .height = 10,
        .weight = 330,
        .description = gEscavalierPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FOONGUS] =
    {
        .categoryName = _("Mushroom"),
        .height = 2,
        .weight = 10,
        .description = gFoongusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AMOONGUSS] =
    {
        .categoryName = _("Mushroom"),
        .height = 6,
        .weight = 105,
        .description = gAmoongussPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FRILLISH] =
    {
        .categoryName = _("Floating"),
        .height = 12,
        .weight = 330,
        .description = gFrillishPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JELLICENT] =
    {
        .categoryName = _("Floating"),
        .height = 22,
        .weight = 1350,
        .description = gJellicentPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ALOMOMOLA] =
    {
        .categoryName = _("Caring"),
        .height = 12,
        .weight = 316,
        .description = gAlomomolaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JOLTIK] =
    {
        .categoryName = _("Attaching"),
        .height = 1,
        .weight = 6,
        .description = gJoltikPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GALVANTULA] =
    {
        .categoryName = _("EleSpider"),
        .height = 8,
        .weight = 143,
        .description = gGalvantulaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FERROSEED] =
    {
        .categoryName = _("Thorn Seed"),
        .height = 6,
        .weight = 188,
        .description = gFerroseedPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FERROTHORN] =
    {
        .categoryName = _("Thorn Pod"),
        .height = 10,
        .weight = 1100,
        .description = gFerrothornPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KLINK] =
    {
        .categoryName = _("Gear"),
        .height = 3,
        .weight = 210,
        .description = gKlinkPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KLANG] =
    {
        .categoryName = _("Gear"),
        .height = 6,
        .weight = 510,
        .description = gKlangPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KLINKLANG] =
    {
        .categoryName = _("Gear"),
        .height = 6,
        .weight = 810,
        .description = gKlinklangPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYNAMO] =
    {
        .categoryName = _("EleFish"),
        .height = 2,
        .weight = 3,
        .description = gTynamoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EELEKTRIK] =
    {
        .categoryName = _("EleFish"),
        .height = 12,
        .weight = 220,
        .description = gEelektrikPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EELEKTROSS] =
    {
        .categoryName = _("EleFish"),
        .height = 21,
        .weight = 805,
        .description = gEelektrossPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ELGYEM] =
    {
        .categoryName = _("Cerebral"),
        .height = 5,
        .weight = 90,
        .description = gElgyemPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BEHEEYEM] =
    {
        .categoryName = _("Cerebral"),
        .height = 10,
        .weight = 345,
        .description = gBeheeyemPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LITWICK] =
    {
        .categoryName = _("Candle"),
        .height = 3,
        .weight = 31,
        .description = gLitwickPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LAMPENT] =
    {
        .categoryName = _("Lamp"),
        .height = 6,
        .weight = 130,
        .description = gLampentPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHANDELURE] =
    {
        .categoryName = _("Luring"),
        .height = 10,
        .weight = 343,
        .description = gChandelurePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AXEW] =
    {
        .categoryName = _("Tusk"),
        .height = 6,
        .weight = 180,
        .description = gAxewPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FRAXURE] =
    {
        .categoryName = _("Axe Jaw"),
        .height = 10,
        .weight = 360,
        .description = gFraxurePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HAXORUS] =
    {
        .categoryName = _("Axe Jaw"),
        .height = 18,
        .weight = 1055,
        .description = gHaxorusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CUBCHOO] =
    {
        .categoryName = _("Chill"),
        .height = 5,
        .weight = 85,
        .description = gCubchooPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BEARTIC] =
    {
        .categoryName = _("Freezing"),
        .height = 26,
        .weight = 2600,
        .description = gBearticPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRYOGONAL] =
    {
        .categoryName = _("Crystallize"),
        .height = 11,
        .weight = 1480,
        .description = gCryogonalPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHELMET] =
    {
        .categoryName = _("Snail"),
        .height = 4,
        .weight = 77,
        .description = gShelmetPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ACCELGOR] =
    {
        .categoryName = _("ShellOut"),
        .height = 8,
        .weight = 253,
        .description = gAccelgorPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STUNFISK] =
    {
        .categoryName = _("Trap"),
        .height = 7,
        .weight = 110,
        .description = gStunfiskPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MIENFOO] =
    {
        .categoryName = _("Martial Arts"),
        .height = 9,
        .weight = 200,
        .description = gMienfooPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MIENSHAO] =
    {
        .categoryName = _("Martial Arts"),
        .height = 14,
        .weight = 355,
        .description = gMienshaoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRUDDIGON] =
    {
        .categoryName = _("Cave"),
        .height = 16,
        .weight = 1390,
        .description = gDruddigonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLETT] =
    {
        .categoryName = _("Automaton"),
        .height = 10,
        .weight = 920,
        .description = gGolettPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLURK] =
    {
        .categoryName = _("Automaton"),
        .height = 28,
        .weight = 3300,
        .description = gGolurkPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PAWNIARD] =
    {
        .categoryName = _("Sharp Blade"),
        .height = 5,
        .weight = 102,
        .description = gPawniardPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BISHARP] =
    {
        .categoryName = _("Sword Blade"),
        .height = 16,
        .weight = 700,
        .description = gBisharpPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BOUFFALANT] =
    {
        .categoryName = _("Bash Buffalo"),
        .height = 16,
        .weight = 946,
        .description = gBouffalantPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RUFFLET] =
    {
        .categoryName = _("Eaglet"),
        .height = 5,
        .weight = 105,
        .description = gRuffletPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRAVIARY] =
    {
        .categoryName = _("Valiant"),
        .height = 15,
        .weight = 410,
        .description = gBraviaryPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VULLABY] =
    {
        .categoryName = _("Diapered"),
        .height = 5,
        .weight = 90,
        .description = gVullabyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MANDIBUZZ] =
    {
        .categoryName = _("Bone Vulture"),
        .height = 12,
        .weight = 395,
        .description = gMandibuzzPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HEATMOR] =
    {
        .categoryName = _("Anteater"),
        .height = 14,
        .weight = 580,
        .description = gHeatmorPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DURANT] =
    {
        .categoryName = _("Iron Ant"),
        .height = 3,
        .weight = 330,
        .description = gDurantPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEINO] =
    {
        .categoryName = _("Irate"),
        .height = 8,
        .weight = 173,
        .description = gDeinoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZWEILOUS] =
    {
        .categoryName = _("Hostile"),
        .height = 14,
        .weight = 500,
        .description = gZweilousPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HYDREIGON] =
    {
        .categoryName = _("Brutal"),
        .height = 18,
        .weight = 1600,
        .description = gHydreigonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LARVESTA] =
    {
        .categoryName = _("Torch"),
        .height = 11,
        .weight = 288,
        .description = gLarvestaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VOLCARONA] =
    {
        .categoryName = _("Sun"),
        .height = 16,
        .weight = 460,
        .description = gVolcaronaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COBALION] =
    {
        .categoryName = _("Iron Will"),
        .height = 21,
        .weight = 2500,
        .description = gCobalionPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TERRAKION] =
    {
        .categoryName = _("Cavern"),
        .height = 19,
        .weight = 2600,
        .description = gTerrakionPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VIRIZION] =
    {
        .categoryName = _("Grassland"),
        .height = 20,
        .weight = 2000,
        .description = gVirizionPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TORNADUS] =
    {
        .categoryName = _("Cyclone"),
        .height = 15,
        .weight = 630,
        .description = gTornadusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_THUNDURUS] =
    {
        .categoryName = _("Bolt Strike"),
        .height = 15,
        .weight = 610,
        .description = gThundurusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RESHIRAM] =
    {
        .categoryName = _("Vast White"),
        .height = 32,
        .weight = 3300,
        .description = gReshiramPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZEKROM] =
    {
        .categoryName = _("Deep Black"),
        .height = 29,
        .weight = 3450,
        .description = gZekromPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LANDORUS] =
    {
        .categoryName = _("Abundance"),
        .height = 15,
        .weight = 680,
        .description = gLandorusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KYUREM] =
    {
        .categoryName = _("Boundary"),
        .height = 30,
        .weight = 3250,
        .description = gKyuremPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KELDEO] =
    {
        .categoryName = _("Colt"),
        .height = 14,
        .weight = 485,
        .description = gKeldeoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MELOETTA] =
    {
        .categoryName = _("Melody"),
        .height = 6,
        .weight = 65,
        .description = gMeloettaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GENESECT] =
    {
        .categoryName = _("Paleozoic"),
        .height = 15,
        .weight = 825,
        .description = gGenesectPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHESPIN] =
    {
        .categoryName = _("Spiny Nut"),
        .height = 4,
        .weight = 90,
        .description = gChespinPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_QUILLADIN] =
    {
        .categoryName = _("Spiny Armor"),
        .height = 7,
        .weight = 290,
        .description = gQuilladinPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHESNAUGHT] =
    {
        .categoryName = _("Spiny Armor"),
        .height = 16,
        .weight = 900,
        .description = gChesnaughtPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FENNEKIN] =
    {
        .categoryName = _("Fox"),
        .height = 4,
        .weight = 94,
        .description = gFennekinPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRAIXEN] =
    {
        .categoryName = _("Fox"),
        .height = 10,
        .weight = 145,
        .description = gBraixenPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DELPHOX] =
    {
        .categoryName = _("Fox"),
        .height = 15,
        .weight = 390,
        .description = gDelphoxPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FROAKIE] =
    {
        .categoryName = _("Bubble Frog"),
        .height = 3,
        .weight = 70,
        .description = gFroakiePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FROGADIER] =
    {
        .categoryName = _("Bubble Frog"),
        .height = 6,
        .weight = 109,
        .description = gFrogadierPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRENINJA] =
    {
        .categoryName = _("Ninja"),
        .height = 15,
        .weight = 400,
        .description = gGreninjaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BUNNELBY] =
    {
        .categoryName = _("Digging"),
        .height = 4,
        .weight = 50,
        .description = gBunnelbyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DIGGERSBY] =
    {
        .categoryName = _("Digging"),
        .height = 10,
        .weight = 424,
        .description = gDiggersbyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLETCHLING] =
    {
        .categoryName = _("Tiny Robin"),
        .height = 3,
        .weight = 17,
        .description = gFletchlingPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLETCHINDER] =
    {
        .categoryName = _("Ember"),
        .height = 7,
        .weight = 160,
        .description = gFletchinderPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TALONFLAME] =
    {
        .categoryName = _("Scorching"),
        .height = 12,
        .weight = 245,
        .description = gTalonflamePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCATTERBUG] =
    {
        .categoryName = _("Scatterdust"),
        .height = 3,
        .weight = 25,
        .description = gScatterbugPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPEWPA] =
    {
        .categoryName = _("Scatterdust"),
        .height = 3,
        .weight = 84,
        .description = gSpewpaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VIVILLON] =
    {
        .categoryName = _("Scale"),
        .height = 12,
        .weight = 170,
        .description = gVivillonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LITLEO] =
    {
        .categoryName = _("Lion Cub"),
        .height = 6,
        .weight = 135,
        .description = gLitleoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PYROAR] =
    {
        .categoryName = _("Royal"),
        .height = 15,
        .weight = 815,
        .description = gPyroarPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLABEBE] =
    {
        .categoryName = _("Single Bloom"),
        .height = 1,
        .weight = 1,
        .description = gFlabebePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLOETTE] =
    {
        .categoryName = _("Single Bloom"),
        .height = 2,
        .weight = 9,
        .description = gFloettePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLORGES] =
    {
        .categoryName = _("Garden"),
        .height = 11,
        .weight = 100,
        .description = gFlorgesPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKIDDO] =
    {
        .categoryName = _("Mount"),
        .height = 9,
        .weight = 310,
        .description = gSkiddoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOGOAT] =
    {
        .categoryName = _("Mount"),
        .height = 17,
        .weight = 910,
        .description = gGogoatPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PANCHAM] =
    {
        .categoryName = _("Playful"),
        .height = 6,
        .weight = 80,
        .description = gPanchamPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PANGORO] =
    {
        .categoryName = _("Daunting"),
        .height = 21,
        .weight = 1360,
        .description = gPangoroPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FURFROU] =
    {
        .categoryName = _("Poodle"),
        .height = 12,
        .weight = 280,
        .description = gFurfrouPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ESPURR] =
    {
        .categoryName = _("Restraint"),
        .height = 3,
        .weight = 35,
        .description = gEspurrPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MEOWSTIC] =
    {
        .categoryName = _("Constraint"),
        .height = 6,
        .weight = 85,
        .description = gMeowsticPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HONEDGE] =
    {
        .categoryName = _("Sword"),
        .height = 8,
        .weight = 20,
        .description = gHonedgePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DOUBLADE] =
    {
        .categoryName = _("Sword"),
        .height = 8,
        .weight = 45,
        .description = gDoubladePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AEGISLASH] =
    {
        .categoryName = _("Royal Sword"),
        .height = 17,
        .weight = 530,
        .description = gAegislashPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPRITZEE] =
    {
        .categoryName = _("Perfume"),
        .height = 2,
        .weight = 5,
        .description = gSpritzeePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AROMATISSE] =
    {
        .categoryName = _("Fragrance"),
        .height = 8,
        .weight = 155,
        .description = gAromatissePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWIRLIX] =
    {
        .categoryName = _("Cotton Candy"),
        .height = 4,
        .weight = 35,
        .description = gSwirlixPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SLURPUFF] =
    {
        .categoryName = _("Meringue"),
        .height = 8,
        .weight = 50,
        .description = gSlurpuffPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_INKAY] =
    {
        .categoryName = _("Revolving"),
        .height = 4,
        .weight = 35,
        .description = gInkayPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MALAMAR] =
    {
        .categoryName = _("Overturning"),
        .height = 15,
        .weight = 470,
        .description = gMalamarPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BINACLE] =
    {
        .categoryName = _("Two-Handed"),
        .height = 5,
        .weight = 310,
        .description = gBinaclePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BARBARACLE] =
    {
        .categoryName = _("Collective"),
        .height = 13,
        .weight = 960,
        .description = gBarbaraclePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKRELP] =
    {
        .categoryName = _("Mock Kelp"),
        .height = 5,
        .weight = 73,
        .description = gSkrelpPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRAGALGE] =
    {
        .categoryName = _("Mock Kelp"),
        .height = 18,
        .weight = 815,
        .description = gDragalgePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLAUNCHER] =
    {
        .categoryName = _("Water Gun"),
        .height = 5,
        .weight = 83,
        .description = gClauncherPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLAWITZER] =
    {
        .categoryName = _("Howitzer"),
        .height = 13,
        .weight = 353,
        .description = gClawitzerPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HELIOPTILE] =
    {
        .categoryName = _("Generator"),
        .height = 5,
        .weight = 60,
        .description = gHelioptilePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HELIOLISK] =
    {
        .categoryName = _("Generator"),
        .height = 10,
        .weight = 210,
        .description = gHelioliskPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYRUNT] =
    {
        .categoryName = _("Royal Heir"),
        .height = 8,
        .weight = 260,
        .description = gTyruntPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYRANTRUM] =
    {
        .categoryName = _("Despot"),
        .height = 25,
        .weight = 2700,
        .description = gTyrantrumPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AMAURA] =
    {
        .categoryName = _("Tundra"),
        .height = 13,
        .weight = 252,
        .description = gAmauraPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AURORUS] =
    {
        .categoryName = _("Tundra"),
        .height = 27,
        .weight = 2250,
        .description = gAurorusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SYLVEON] =
    {
        .categoryName = _("Intertwine"),
        .height = 10,
        .weight = 235,
        .description = gSylveonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HAWLUCHA] =
    {
        .categoryName = _("Wrestling"),
        .height = 8,
        .weight = 215,
        .description = gHawluchaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEDENNE] =
    {
        .categoryName = _("Antenna"),
        .height = 2,
        .weight = 22,
        .description = gDedennePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CARBINK] =
    {
        .categoryName = _("Jewel"),
        .height = 3,
        .weight = 57,
        .description = gCarbinkPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOOMY] =
    {
        .categoryName = _("Soft Tissue"),
        .height = 3,
        .weight = 28,
        .description = gGoomyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SLIGGOO] =
    {
        .categoryName = _("Soft Tissue"),
        .height = 8,
        .weight = 175,
        .description = gSliggooPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOODRA] =
    {
        .categoryName = _("Dragon"),
        .height = 20,
        .weight = 1505,
        .description = gGoodraPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KLEFKI] =
    {
        .categoryName = _("Key Ring"),
        .height = 2,
        .weight = 30,
        .description = gKlefkiPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PHANTUMP] =
    {
        .categoryName = _("Stump"),
        .height = 4,
        .weight = 70,
        .description = gPhantumpPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TREVENANT] =
    {
        .categoryName = _("Elder Tree"),
        .height = 15,
        .weight = 710,
        .description = gTrevenantPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PUMPKABOO] =
    {
        .categoryName = _("Pumpkin"),
        .height = 4,
        .weight = 50,
        .description = gPumpkabooPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOURGEIST] =
    {
        .categoryName = _("Pumpkin"),
        .height = 9,
        .weight = 125,
        .description = gGourgeistPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BERGMITE] =
    {
        .categoryName = _("Ice Chunk"),
        .height = 10,
        .weight = 995,
        .description = gBergmitePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AVALUGG] =
    {
        .categoryName = _("Iceberg"),
        .height = 20,
        .weight = 5050,
        .description = gAvaluggPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NOIBAT] =
    {
        .categoryName = _("Sound Wave"),
        .height = 5,
        .weight = 80,
        .description = gNoibatPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NOIVERN] =
    {
        .categoryName = _("Sound Wave"),
        .height = 15,
        .weight = 850,
        .description = gNoivernPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_XERNEAS] =
    {
        .categoryName = _("Life"),
        .height = 30,
        .weight = 2150,
        .description = gXerneasPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YVELTAL] =
    {
        .categoryName = _("Destruction"),
        .height = 58,
        .weight = 2030,
        .description = gYveltalPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZYGARDE] =
    {
        .categoryName = _("Order"),
        .height = 50,
        .weight = 3050,
        .description = gZygardePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DIANCIE] =
    {
        .categoryName = _("Jewel"),
        .height = 7,
        .weight = 88,
        .description = gDianciePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HOOPA] =
    {
        .categoryName = _("Mischief"),
        .height = 5,
        .weight = 90,
        .description = gHoopaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VOLCANION] =
    {
        .categoryName = _("Steam"),
        .height = 17,
        .weight = 1950,
        .description = gVolcanionPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROWLET] =
    {
        .categoryName = _("Grass Quill"),
        .height = 3,
        .weight = 15,
        .description = gRowletPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DARTRIX] =
    {
        .categoryName = _("Blade Quill"),
        .height = 7,
        .weight = 160,
        .description = gDartrixPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DECIDUEYE] =
    {
        .categoryName = _("Arrow Quill"),
        .height = 16,
        .weight = 366,
        .description = gDecidueyePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LITTEN] =
    {
        .categoryName = _("Fire Cat"),
        .height = 4,
        .weight = 43,
        .description = gLittenPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TORRACAT] =
    {
        .categoryName = _("Fire Cat"),
        .height = 7,
        .weight = 250,
        .description = gTorracatPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_INCINEROAR] =
    {
        .categoryName = _("Heel"),
        .height = 18,
        .weight = 830,
        .description = gIncineroarPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POPPLIO] =
    {
        .categoryName = _("Sea Lion"),
        .height = 4,
        .weight = 75,
        .description = gPopplioPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRIONNE] =
    {
        .categoryName = _("Pop Star"),
        .height = 6,
        .weight = 175,
        .description = gBrionnePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PRIMARINA] =
    {
        .categoryName = _("Soloist"),
        .height = 18,
        .weight = 440,
        .description = gPrimarinaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIKIPEK] =
    {
        .categoryName = _("Woodpecker"),
        .height = 3,
        .weight = 12,
        .description = gPikipekPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TRUMBEAK] =
    {
        .categoryName = _("Bugle Beak"),
        .height = 6,
        .weight = 148,
        .description = gTrumbeakPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOUCANNON] =
    {
        .categoryName = _("Cannon"),
        .height = 11,
        .weight = 260,
        .description = gToucannonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YUNGOOS] =
    {
        .categoryName = _("Loitering"),
        .height = 4,
        .weight = 60,
        .description = gYungoosPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GUMSHOOS] =
    {
        .categoryName = _("Stakeout"),
        .height = 7,
        .weight = 142,
        .description = gGumshoosPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRUBBIN] =
    {
        .categoryName = _("Larva"),
        .height = 4,
        .weight = 44,
        .description = gGrubbinPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHARJABUG] =
    {
        .categoryName = _("Battery"),
        .height = 5,
        .weight = 105,
        .description = gCharjabugPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VIKAVOLT] =
    {
        .categoryName = _("Stag Beetle"),
        .height = 15,
        .weight = 450,
        .description = gVikavoltPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRABRAWLER] =
    {
        .categoryName = _("Boxing"),
        .height = 6,
        .weight = 70,
        .description = gCrabrawlerPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRABOMINABLE] =
    {
        .categoryName = _("Woolly Crab"),
        .height = 17,
        .weight = 1800,
        .description = gCrabominablePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ORICORIO] =
    {
        .categoryName = _("Dancing"),
        .height = 6,
        .weight = 34,
        .description = gOricorioPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CUTIEFLY] =
    {
        .categoryName = _("Bee Fly"),
        .height = 1,
        .weight = 2,
        .description = gCutieflyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RIBOMBEE] =
    {
        .categoryName = _("Bee Fly"),
        .height = 2,
        .weight = 5,
        .description = gRibombeePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROCKRUFF] =
    {
        .categoryName = _("Puppy"),
        .height = 5,
        .weight = 92,
        .description = gRockruffPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LYCANROC] =
    {
        .categoryName = _("Wolf"),
        .height = 8,
        .weight = 250,
        .description = gLycanrocPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WISHIWASHI] =
    {
        .categoryName = _("Small Fry"),
        .height = 2,
        .weight = 3,
        .description = gWishiwashiPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAREANIE] =
    {
        .categoryName = _("Brutal Star"),
        .height = 4,
        .weight = 80,
        .description = gMareaniePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOXAPEX] =
    {
        .categoryName = _("Brutal Star"),
        .height = 7,
        .weight = 145,
        .description = gToxapexPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MUDBRAY] =
    {
        .categoryName = _("Donkey"),
        .height = 10,
        .weight = 1100,
        .description = gMudbrayPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MUDSDALE] =
    {
        .categoryName = _("Draft Horse"),
        .height = 25,
        .weight = 9200,
        .description = gMudsdalePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEWPIDER] =
    {
        .categoryName = _("Water Bubble"),
        .height = 3,
        .weight = 40,
        .description = gDewpiderPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARAQUANID] =
    {
        .categoryName = _("Water Bubble"),
        .height = 18,
        .weight = 820,
        .description = gAraquanidPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FOMANTIS] =
    {
        .categoryName = _("Sickle Grass"),
        .height = 3,
        .weight = 15,
        .description = gFomantisPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LURANTIS] =
    {
        .categoryName = _("Bloom Sickle"),
        .height = 9,
        .weight = 185,
        .description = gLurantisPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MORELULL] =
    {
        .categoryName = _("Illuminate"),
        .height = 2,
        .weight = 15,
        .description = gMorelullPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHIINOTIC] =
    {
        .categoryName = _("Illuminate"),
        .height = 10,
        .weight = 115,
        .description = gShiinoticPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SALANDIT] =
    {
        .categoryName = _("Toxic Lizard"),
        .height = 6,
        .weight = 48,
        .description = gSalanditPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SALAZZLE] =
    {
        .categoryName = _("Toxic Lizard"),
        .height = 12,
        .weight = 222,
        .description = gSalazzlePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STUFFUL] =
    {
        .categoryName = _("Flailing"),
        .height = 5,
        .weight = 68,
        .description = gStuffulPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BEWEAR] =
    {
        .categoryName = _("Strong Arm"),
        .height = 21,
        .weight = 1350,
        .description = gBewearPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BOUNSWEET] =
    {
        .categoryName = _("Fruit"),
        .height = 3,
        .weight = 32,
        .description = gBounsweetPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STEENEE] =
    {
        .categoryName = _("Fruit"),
        .height = 7,
        .weight = 82,
        .description = gSteeneePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TSAREENA] =
    {
        .categoryName = _("Fruit"),
        .height = 12,
        .weight = 214,
        .description = gTsareenaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COMFEY] =
    {
        .categoryName = _("Posy Picker"),
        .height = 1,
        .weight = 3,
        .description = gComfeyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ORANGURU] =
    {
        .categoryName = _("Sage"),
        .height = 15,
        .weight = 760,
        .description = gOranguruPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PASSIMIAN] =
    {
        .categoryName = _("Teamwork"),
        .height = 20,
        .weight = 828,
        .description = gPassimianPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WIMPOD] =
    {
        .categoryName = _("Turn Tail"),
        .height = 5,
        .weight = 120,
        .description = gWimpodPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLISOPOD] =
    {
        .categoryName = _("Hard Scale"),
        .height = 20,
        .weight = 1080,
        .description = gGolisopodPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SANDYGAST] =
    {
        .categoryName = _("Sand Heap"),
        .height = 5,
        .weight = 700,
        .description = gSandygastPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PALOSSAND] =
    {
        .categoryName = _("Sand Castle"),
        .height = 13,
        .weight = 2500,
        .description = gPalossandPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PYUKUMUKU] =
    {
        .categoryName = _("Sea Cucumber"),
        .height = 3,
        .weight = 12,
        .description = gPyukumukuPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYPE_NULL] =
    {
        .categoryName = _("Synthetic"),
        .height = 19,
        .weight = 1205,
        .description = gTypeNullPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SILVALLY] =
    {
        .categoryName = _("Synthetic"),
        .height = 23,
        .weight = 1005,
        .description = gSilvallyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MINIOR] =
    {
        .categoryName = _("Meteor"),
        .height = 3,
        .weight = 400,
        .description = gMiniorPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KOMALA] =
    {
        .categoryName = _("Drowsing"),
        .height = 4,
        .weight = 199,
        .description = gKomalaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TURTONATOR] =
    {
        .categoryName = _("Blast Turtle"),
        .height = 20,
        .weight = 2120,
        .description = gTurtonatorPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOGEDEMARU] =
    {
        .categoryName = _("Roly-Poly"),
        .height = 3,
        .weight = 33,
        .description = gTogedemaruPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MIMIKYU] =
    {
        .categoryName = _("Disguise"),
        .height = 2,
        .weight = 7,
        .description = gMimikyuPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRUXISH] =
    {
        .categoryName = _("Gnash Teeth"),
        .height = 9,
        .weight = 190,
        .description = gBruxishPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRAMPA] =
    {
        .categoryName = _("Placid"),
        .height = 30,
        .weight = 1850,
        .description = gDrampaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DHELMISE] =
    {
        .categoryName = _("Sea Creeper"),
        .height = 39,
        .weight = 2100,
        .description = gDhelmisePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JANGMO_O] =
    {
        .categoryName = _("Scaly"),
        .height = 6,
        .weight = 297,
        .description = gJangmooPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HAKAMO_O] =
    {
        .categoryName = _("Scaly"),
        .height = 12,
        .weight = 470,
        .description = gHakamooPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KOMMO_O] =
    {
        .categoryName = _("Scaly"),
        .height = 16,
        .weight = 782,
        .description = gKommooPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TAPU_KOKO] =
    {
        .categoryName = _("Land Spirit"),
        .height = 18,
        .weight = 205,
        .description = gTapuKokoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TAPU_LELE] =
    {
        .categoryName = _("Land Spirit"),
        .height = 12,
        .weight = 186,
        .description = gTapuLelePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TAPU_BULU] =
    {
        .categoryName = _("Land Spirit"),
        .height = 19,
        .weight = 455,
        .description = gTapuBuluPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TAPU_FINI] =
    {
        .categoryName = _("Land Spirit"),
        .height = 13,
        .weight = 212,
        .description = gTapuFiniPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COSMOG] =
    {
        .categoryName = _("Nebula"),
        .height = 2,
        .weight = 1,
        .description = gCosmogPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COSMOEM] =
    {
        .categoryName = _("Protostar"),
        .height = 1,
        .weight = 9999,
        .description = gCosmoemPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SOLGALEO] =
    {
        .categoryName = _("Sunne"),
        .height = 34,
        .weight = 2300,
        .description = gSolgaleoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUNALA] =
    {
        .categoryName = _("Moone"),
        .height = 40,
        .weight = 1200,
        .description = gLunalaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIHILEGO] =
    {
        .categoryName = _("Goofshrumite"),
        .height = 12,
        .weight = 555,
        .description = gNihilegoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BUZZWOLE] =
    {
        .categoryName = _("Swollen"),
        .height = 24,
        .weight = 3336,
        .description = gBuzzwolePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PHEROMOSA] =
    {
        .categoryName = _("Lissome"),
        .height = 18,
        .weight = 250,
        .description = gPheromosaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_XURKITREE] =
    {
        .categoryName = _("Glowing"),
        .height = 38,
        .weight = 1000,
        .description = gXurkitreePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CELESTEELA] =
    {
        .categoryName = _("Launch"),
        .height = 92,
        .weight = 9999,
        .description = gCelesteelaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KARTANA] =
    {
        .categoryName = _("Drawn Sword"),
        .height = 3,
        .weight = 1,
        .description = gKartanaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GUZZLORD] =
    {
        .categoryName = _("Junkivore"),
        .height = 55,
        .weight = 8880,
        .description = gGuzzlordPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NECROZMA] =
    {
        .categoryName = _("Prism"),
        .height = 24,
        .weight = 2300,
        .description = gNecrozmaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGEARNA] =
    {
        .categoryName = _("Artificial"),
        .height = 10,
        .weight = 805,
        .description = gMagearnaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MARSHADOW] =
    {
        .categoryName = _("Smogasdwelle"),
        .height = 7,
        .weight = 222,
        .description = gMarshadowPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POIPOLE] =
    {
        .categoryName = _("Poison Pin"),
        .height = 6,
        .weight = 18,
        .description = gPoipolePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NAGANADEL] =
    {
        .categoryName = _("Poison Pin"),
        .height = 36,
        .weight = 1500,
        .description = gNaganadelPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STAKATAKA] =
    {
        .categoryName = _("Rampart"),
        .height = 55,
        .weight = 8200,
        .description = gStakatakaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLACEPHALON] =
    {
        .categoryName = _("Fireworks"),
        .height = 18,
        .weight = 130,
        .description = gBlacephalonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZERAORA] =
    {
        .categoryName = _("Thunderclap"),
        .height = 15,
        .weight = 445,
        .description = gZeraoraPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MELTAN] =
    {
        .categoryName = _("Hex Nut"),
        .height = 2,
        .weight = 80,
        .description = gMeltanPokedexText,
        .pokemonScale = 640,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MELMETAL] =
    {
        .categoryName = _("Hex Nut"),
        .height = 25,
        .weight = 800,
        .description = gMelmetalPokedexText,
        .pokemonScale = 255,
        .pokemonOffset = 1,
        .trainerScale = 387,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GROOKEY] =
    {
        .categoryName = _("Chimp"),
        .height = 3,
        .weight = 50,
        .description = gGrookeyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_THWACKEY] =
    {
        .categoryName = _("Beat"),
        .height = 7,
        .weight = 140,
        .description = gThwackeyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RILLABOOM] =
    {
        .categoryName = _("Drummer"),
        .height = 21,
        .weight = 900,
        .description = gRillaboomPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCORBUNNY] =
    {
        .categoryName = _("Rabbit"),
        .height = 3,
        .weight = 45,
        .description = gScorbunnyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RABOOT] =
    {
        .categoryName = _("Rabbit"),
        .height = 6,
        .weight = 90,
        .description = gRabootPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CINDERACE] =
    {
        .categoryName = _("Striker"),
        .height = 14,
        .weight = 330,
        .description = gCinderacePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SOBBLE] =
    {
        .categoryName = _("Water Lizard"),
        .height = 3,
        .weight = 40,
        .description = gSobblePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRIZZILE] =
    {
        .categoryName = _("Water Lizard"),
        .height = 7,
        .weight = 115,
        .description = gDrizzilePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_INTELEON] =
    {
        .categoryName = _("Secret Agent"),
        .height = 19,
        .weight = 452,
        .description = gInteleonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKWOVET] =
    {
        .categoryName = _("Cheeky"),
        .height = 3,
        .weight = 25,
        .description = gSkwovetPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GREEDENT] =
    {
        .categoryName = _("Greedy"),
        .height = 6,
        .weight = 60,
        .description = gGreedentPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROOKIDEE] =
    {
        .categoryName = _("Tiny Bird"),
        .height = 2,
        .weight = 18,
        .description = gRookideePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CORVISQUIRE] =
    {
        .categoryName = _("Raven"),
        .height = 8,
        .weight = 160,
        .description = gCorvisquirePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CORVIKNIGHT] =
    {
        .categoryName = _("Raven"),
        .height = 22,
        .weight = 750,
        .description = gCorviknightPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLIPBUG] =
    {
        .categoryName = _("Larva"),
        .height = 4,
        .weight = 80,
        .description = gBlipbugPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DOTTLER] =
    {
        .categoryName = _("Radome"),
        .height = 4,
        .weight = 195,
        .description = gDottlerPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ORBEETLE] =
    {
        .categoryName = _("Seven Spot"),
        .height = 4,
        .weight = 408,
        .description = gOrbeetlePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NICKIT] =
    {
        .categoryName = _("Fox"),
        .height = 6,
        .weight = 89,
        .description = gNickitPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_THIEVUL] =
    {
        .categoryName = _("Fox"),
        .height = 12,
        .weight = 199,
        .description = gThievulPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOSSIFLEUR] =
    {
        .categoryName = _("Flowering"),
        .height = 4,
        .weight = 22,
        .description = gGossifleurPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ELDEGOSS] =
    {
        .categoryName = _("Cotton Bloom"),
        .height = 5,
        .weight = 25,
        .description = gEldegossPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WOOLOO] =
    {
        .categoryName = _("Sheep"),
        .height = 6,
        .weight = 60,
        .description = gWoolooPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUBWOOL] =
    {
        .categoryName = _("Sheep"),
        .height = 13,
        .weight = 430,
        .description = gDubwoolPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHEWTLE] =
    {
        .categoryName = _("Snapping"),
        .height = 3,
        .weight = 85,
        .description = gChewtlePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DREDNAW] =
    {
        .categoryName = _("Bite"),
        .height = 10,
        .weight = 1155,
        .description = gDrednawPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YAMPER] =
    {
        .categoryName = _("Puppy"),
        .height = 3,
        .weight = 135,
        .description = gYamperPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BOLTUND] =
    {
        .categoryName = _("Dog"),
        .height = 10,
        .weight = 340,
        .description = gBoltundPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROLYCOLY] =
    {
        .categoryName = _("Coal"),
        .height = 3,
        .weight = 120,
        .description = gRolycolyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CARKOL] =
    {
        .categoryName = _("Coal"),
        .height = 11,
        .weight = 780,
        .description = gCarkolPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COALOSSAL] =
    {
        .categoryName = _("Coal"),
        .height = 28,
        .weight = 3105,
        .description = gCoalossalPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_APPLIN] =
    {
        .categoryName = _("Apple Core"),
        .height = 2,
        .weight = 5,
        .description = gApplinPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLAPPLE] =
    {
        .categoryName = _("Apple Wing"),
        .height = 3,
        .weight = 10,
        .description = gFlapplePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_APPLETUN] =
    {
        .categoryName = _("Apple Nectar"),
        .height = 4,
        .weight = 130,
        .description = gAppletunPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SILICOBRA] =
    {
        .categoryName = _("Sand Snake"),
        .height = 22,
        .weight = 76,
        .description = gSilicobraPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SANDACONDA] =
    {
        .categoryName = _("Sand Snake"),
        .height = 38,
        .weight = 655,
        .description = gSandacondaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRAMORANT] =
    {
        .categoryName = _("Gulp"),
        .height = 8,
        .weight = 180,
        .description = gCramorantPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARROKUDA] =
    {
        .categoryName = _("Rush"),
        .height = 5,
        .weight = 10,
        .description = gArrokudaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BARRASKEWDA] =
    {
        .categoryName = _("Skewer"),
        .height = 13,
        .weight = 300,
        .description = gBarraskewdaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOXEL] =
    {
        .categoryName = _("Baby"),
        .height = 4,
        .weight = 110,
        .description = gToxelPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOXTRICITY] =
    {
        .categoryName = _("Punk"),
        .height = 16,
        .weight = 400,
        .description = gToxtricityPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SIZZLIPEDE] =
    {
        .categoryName = _("Radiator"),
        .height = 7,
        .weight = 10,
        .description = gSizzlipedePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CENTISKORCH] =
    {
        .categoryName = _("Radiator"),
        .height = 30,
        .weight = 1200,
        .description = gCentiskorchPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLOBBOPUS] =
    {
        .categoryName = _("Tantrum"),
        .height = 6,
        .weight = 40,
        .description = gClobbopusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRAPPLOCT] =
    {
        .categoryName = _("Jujitsu"),
        .height = 16,
        .weight = 390,
        .description = gGrapploctPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SINISTEA] =
    {
        .categoryName = _("Black Tea"),
        .height = 1,
        .weight = 2,
        .description = gSinisteaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POLTEAGEIST] =
    {
        .categoryName = _("Black Tea"),
        .height = 2,
        .weight = 4,
        .description = gPolteageistPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HATENNA] =
    {
        .categoryName = _("Calm"),
        .height = 4,
        .weight = 34,
        .description = gHatennaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HATTREM] =
    {
        .categoryName = _("Serene"),
        .height = 6,
        .weight = 48,
        .description = gHattremPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HATTERENE] =
    {
        .categoryName = _("Silent"),
        .height = 21,
        .weight = 51,
        .description = gHatterenePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_IMPIDIMP] =
    {
        .categoryName = _("Wily"),
        .height = 4,
        .weight = 55,
        .description = gImpidimpPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MORGREM] =
    {
        .categoryName = _("Devious"),
        .height = 8,
        .weight = 125,
        .description = gMorgremPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRIMMSNARL] =
    {
        .categoryName = _("Bulk Up"),
        .height = 15,
        .weight = 610,
        .description = gGrimmsnarlPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OBSTAGOON] =
    {
        .categoryName = _("Blocking"),
        .height = 16,
        .weight = 460,
        .description = gObstagoonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PERRSERKER] =
    {
        .categoryName = _("Viking"),
        .height = 8,
        .weight = 280,
        .description = gPerrserkerPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CURSOLA] =
    {
        .categoryName = _("Coral"),
        .height = 10,
        .weight = 4,
        .description = gCursolaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SIRFETCHD] =
    {
        .categoryName = _("Wild Duck"),
        .height = 8,
        .weight = 1170,
        .description = gSirfetchdPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MR_RIME] =
    {
        .categoryName = _("Comedian"),
        .height = 15,
        .weight = 582,
        .description = gMrRimePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RUNERIGUS] =
    {
        .categoryName = _("Grudge"),
        .height = 16,
        .weight = 666,
        .description = gRunerigusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MILCERY] =
    {
        .categoryName = _("Cream"),
        .height = 2,
        .weight = 3,
        .description = gMilceryPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ALCREMIE] =
    {
        .categoryName = _("Cream"),
        .height = 3,
        .weight = 5,
        .description = gAlcremiePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FALINKS] =
    {
        .categoryName = _("Formation"),
        .height = 30,
        .weight = 620,
        .description = gFalinksPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PINCURCHIN] =
    {
        .categoryName = _("Sea Urchin"),
        .height = 3,
        .weight = 10,
        .description = gPincurchinPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNOM] =
    {
        .categoryName = _("Worm"),
        .height = 3,
        .weight = 38,
        .description = gSnomPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FROSMOTH] =
    {
        .categoryName = _("Frost Moth"),
        .height = 13,
        .weight = 420,
        .description = gFrosmothPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STONJOURNER] =
    {
        .categoryName = _("Big Rock"),
        .height = 25,
        .weight = 5200,
        .description = gStonjournerPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EISCUE] =
    {
        .categoryName = _("Penguin"),
        .height = 14,
        .weight = 890,
        .description = gEiscuePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_INDEEDEE] =
    {
        .categoryName = _("Emotion"),
        .height = 9,
        .weight = 280,
        .description = gIndeedeePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MORPEKO] =
    {
        .categoryName = _("Two-Sided"),
        .height = 3,
        .weight = 30,
        .description = gMorpekoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CUFANT] =
    {
        .categoryName = _("Copperderm"),
        .height = 12,
        .weight = 1000,
        .description = gCufantPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COPPERAJAH] =
    {
        .categoryName = _("Copperderm"),
        .height = 30,
        .weight = 6500,
        .description = gCopperajahPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRACOZOLT] =
    {
        .categoryName = _("Fossil"),
        .height = 18,
        .weight = 1900,
        .description = gDracozoltPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARCTOZOLT] =
    {
        .categoryName = _("Fossil"),
        .height = 23,
        .weight = 1500,
        .description = gArctozoltPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRACOVISH] =
    {
        .categoryName = _("Fossil"),
        .height = 23,
        .weight = 2150,
        .description = gDracovishPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARCTOVISH] =
    {
        .categoryName = _("Fossil"),
        .height = 20,
        .weight = 1750,
        .description = gArctovishPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DURALUDON] =
    {
        .categoryName = _("Alloy"),
        .height = 18,
        .weight = 400,
        .description = gDuraludonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DREEPY] =
    {
        .categoryName = _("Lingering"),
        .height = 5,
        .weight = 20,
        .description = gDreepyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRAKLOAK] =
    {
        .categoryName = _("Caretaker"),
        .height = 14,
        .weight = 110,
        .description = gDrakloakPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRAGAPULT] =
    {
        .categoryName = _("Stealth"),
        .height = 30,
        .weight = 500,
        .description = gDragapultPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZACIAN] =
    {
        .categoryName = _("Warrior"),
        .height = 28,
        .weight = 1100,
        .description = gZacianPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZAMAZENTA] =
    {
        .categoryName = _("Warrior"),
        .height = 29,
        .weight = 2100,
        .description = gZamazentaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ETERNATUS] =
    {
        .categoryName = _("Gigantic"),
        .height = 200,
        .weight = 9500,
        .description = gEternatusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KUBFU] =
    {
        .categoryName = _("Wushu"),
        .height = 6,
        .weight = 120,
        .description = gKubfuPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_URSHIFU] =
    {
        .categoryName = _("Wushu"),
        .height = 19,
        .weight = 1050,
        .description = gUrshifuPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZARUDE] =
    {
        .categoryName = _("Rogue Monkey"),
        .height = 18,
        .weight = 700,
        .description = gZarudePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_REGIELEKI] =
    {
        .categoryName = _("Electron"),
        .height = 12,
        .weight = 1450,
        .description = gRegielekiPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_REGIDRAGO] =
    {
        .categoryName = _("Dragon Orb"),
        .height = 21,
        .weight = 2000,
        .description = gRegidragoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLASTRIER] =
    {
        .categoryName = _("Wild Horse"),
        .height = 22,
        .weight = 8000,
        .description = gGlastrierPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPECTRIER] =
    {
        .categoryName = _("Swift Horse"),
        .height = 20,
        .weight = 445,
        .description = gSpectrierPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CALYREX] =
    {
        .categoryName = _("King"),
        .height = 11,
        .weight = 77,
        .description = gCalyrexPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#endif
};
