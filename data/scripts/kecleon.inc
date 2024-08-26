Route120_EventScript_Kecleon1:: @ 82722DB
	lock
	faceplayer
	setvar VAR_0x8009, 1
	goto EventScript_Kecleon
	end

Route120_EventScript_Kecleon2:: @ 82722E8
	lock
	faceplayer
	setvar VAR_0x8009, 2
	goto EventScript_Kecleon
	end

Route120_EventScript_Kecleon3:: @ 82722F5
	lock
	faceplayer
	setvar VAR_0x8009, 3
	goto EventScript_Kecleon
	end

Route120_EventScript_Kecleon4:: @ 8272302
	lock
	faceplayer
	setvar VAR_0x8009, 4
	goto EventScript_Kecleon
	end

Route120_EventScript_Kecleon5:: @ 827230F
	lock
	faceplayer
	setvar VAR_0x8009, 5
	goto EventScript_Kecleon
	end

Route119_EventScript_Kecleon1:: @ 827231C
	lock
	faceplayer
	setvar VAR_0x8009, 6
	goto EventScript_Kecleon
	end

Route119_EventScript_Kecleon2:: @ 8272329
	lock
	faceplayer
	setvar VAR_0x8009, 7
	goto EventScript_Kecleon
	end

EventScript_Kecleon:: @ 8272336
	goto EventScript_AskUseDevonScope
	//msgbox Kecleon_Text_SomethingUnseeable, MSGBOX_DEFAULT
	release
	end

EventScript_AskUseDevonScope:: @ 8272350
	msgbox Kecleon_Text_WantToUseDevonScope, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_BattleKecleon
	release
	end

EventScript_BattleKecleon:: @ 8272365
	msgbox Kecleon_Text_UseDevonScopeMonAttacked, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	applymovement VAR_LAST_TALKED, Movement_KecleonAppears
	waitmovement 0
	waitse
	playmoncry SPECIES_KECLEON, 2
	delay 40
	waitmoncry
	setwildbattle SPECIES_KECLEON, 1, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq EventScript_RemoveKecleon
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq EventScript_RemoveKecleon
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq EventScript_RemoveKecleon
	release
	end

EventScript_RemoveKecleon:: @ 82723C1
	goto Common_EventScript_RemoveStaticPokemon
	end

Movement_KecleonAppears: @ 82723C7
	set_visible
	delay_4
	set_invisible
	delay_4
	set_visible
	delay_4
	set_invisible
	delay_4
	set_visible
	delay_8
	set_invisible
	delay_8
	set_visible
	delay_8
	set_invisible
	delay_8
	set_visible
	delay_16
	set_invisible
	delay_16
	set_visible
	step_end
	
// Trololing & Shepeird -------------------------------------------------------------------------
EventScript_SetTrololingFamilyGfx:: @ 82574C6
	special ShouldStaticEncounterBeFirstStage
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_SetTrololingGfx
	goto_if_unset FLAG_BADGE04_GET, EventScript_SetTrololingGfx
    goto_if_set   FLAG_BADGE04_GET, EventScript_SetShepeirdGfx
	return
	
EventScript_SetTrololingGfx:: @ 82574C6
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_TROLOLING
	return
	
EventScript_SetShepeirdGfx:: @ 82574C6
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_SHEPEIRD
	return

EventScript_Shepeird:: @ 8272350
	msgbox Shepeird_Text_MonSprawledOutInSlumber, MSGBOX_DEFAULT
	checkitem ITEM_BLUE_FLUTE, 1
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Shepeird_AskUseFlute
	release
	end

EventScript_Shepeird_AskUseFlute:: @ 8272350
	msgbox Shepeird_Text_WantToUsePokeFlute, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_BattleShepeird
	release
	end
	
EventScript_BattleShepeird:: @ 8272365
	goto_if_unset FLAG_BADGE04_GET, EventScript_BattleTrololing
	goto_if_set FLAG_TEMP_5, EventScript_BattleTrololing
	msgbox Shepeird_Text_PlayedPokeFlute, MSGBOX_DEFAULT
	playfanfare MUS_RG_SNEDDIT
	delay 400
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	msgbox Shepeird_Text_ShepeirdWokeUp, MSGBOX_DEFAULT
	closemessage
	waitse
	playmoncry SPECIES_SHEPEIRD, 2
	delay 40
	waitmoncry
	setwildbattle SPECIES_SHEPEIRD, 2, ITEM_LEFTOVERS
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq EventScript_RemoveShepeird
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq EventScript_RemoveShepeird
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq EventScript_RemoveShepeird
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq EventScript_RemoveShepeird
	release
	end
	
EventScript_BattleTrololing:: @ 8272365
	msgbox Shepeird_Text_PlayedPokeFlute, MSGBOX_DEFAULT
	playfanfare MUS_RG_SNEDDIT
	delay 400
	playse SE_PIN
	msgbox Shepeird_Text_ShepeirdWokeUp, MSGBOX_DEFAULT
	closemessage
	waitse
	playmoncry SPECIES_TROLOLING, 2
	delay 40
	waitmoncry
	setwildbattle SPECIES_TROLOLING, 2, ITEM_LEFTOVERS
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq EventScript_RemoveShepeird
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq EventScript_RemoveShepeird
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq EventScript_RemoveShepeird
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq EventScript_RemoveShepeird
	release
	end
	
EventScript_RemoveShepeird:: @ 82723C1
	goto Common_EventScript_RemoveStaticPokemon
	end

Shepeird_Text_MonSprawledOutInSlumber::
    .string "A Pokémon is sprawled out in\n"
    .string "a deep and comfortable slumber.$"

Shepeird_Text_ShepeirdWokeUp::
    .string "The Pokémon woke up!\p"
    .string "It attacked in a grumpy rage!$"

Shepeird_Text_ShepeirdReturnedToMountains::
    .string "The Pokémon calmed down.\n"
    .string "It gave a huge yawn…\l"
    .string "And returned to the mountains.$"

Shepeird_Text_WantToUsePokeFlute::
    .string "Do you want to use the Blue Flute?$"

Shepeird_Text_PlayedPokeFlute::
    .string "{PLAYER} played the Blue Flute.$"
	
// Bonsly & Breaddie -------------------------------------------------------------------------
EventScript_SetBreaddieFamilyGfx:: @ 82574C6
	special ShouldStaticEncounterBeFirstStage
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_SetBonslyGfx
	goto_if_unset FLAG_BADGE03_GET, EventScript_SetBonslyGfx
    goto_if_set   FLAG_BADGE03_GET, EventScript_SetBreaddieGfx
	return
	
EventScript_SetBonslyGfx:: @ 82574C6
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BONSLY
	return
	
EventScript_SetBreaddieGfx:: @ 82574C6
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BREADDIE
	return

EventScript_Breaddie::
	lock
	faceplayer
	waitse
	playse SE_BREADDIE_SHAKE
	applymovement VAR_LAST_TALKED, Breaddie_Movement_BreaddieShake
	waitmovement 0
	release
	end

EventScript_WaterBreaddie::
	lock
	faceplayer
	goto_if_unset FLAG_BADGE03_GET, EventScript_WaterBonsly
	goto_if_set FLAG_TEMP_5, EventScript_WaterBonsly
	special DoWateringBerryTreeAnim
	waitstate
	waitse
	playse SE_BREADDIE_SHAKE
	applymovement VAR_LAST_TALKED, Breaddie_Movement_BreaddieShake
	waitmovement 0
	msgbox gText_Breaddie_Attacked, MSGBOX_DEFAULT
	closemessage
	waitse
	playmoncry SPECIES_BREADDIE, 2
	delay 40
	waitmoncry
	setwildbattle SPECIES_BREADDIE, 1, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq EventScript_DefeatedBreaddie
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq EventScript_DefeatedBreaddie
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq EventScript_DefeatedBreaddie
	release
	end
	
EventScript_WaterBonsly::
	special DoWateringBerryTreeAnim
	waitstate
	waitse
	playse SE_BREADDIE_SHAKE
	applymovement VAR_LAST_TALKED, Breaddie_Movement_BreaddieShake
	waitmovement 0
	msgbox gText_Breaddie_Attacked, MSGBOX_DEFAULT
	closemessage
	waitse
	playmoncry SPECIES_BONSLY, 2
	delay 40
	waitmoncry
	setwildbattle SPECIES_BONSLY, 1, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq EventScript_DefeatedBreaddie
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq EventScript_DefeatedBreaddie
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq EventScript_DefeatedBreaddie
	release
	end

EventScript_DefeatedBreaddie:: @ 8242D60
	goto Common_EventScript_RemoveStaticPokemon
	end

Breaddie_Movement_BreaddieShake: @ 8242D69
	face_right
	delay_8
	face_down
	delay_8
	face_left
	delay_8
	face_down
	delay_8
	face_right
	delay_8
	face_down
	delay_8
	face_left
	delay_8
	face_down
	step_end