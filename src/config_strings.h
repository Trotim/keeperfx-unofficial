/******************************************************************************/
// Free implementation of Bullfrog's Dungeon Keeper strategy game.
/******************************************************************************/
/** @file config_strings.h
 *     Header file for config_strings.c.
 * @par Purpose:
 *     List of language-specific strings support.
 * @par Comment:
 *     Just a header file - #defines, typedefs, function prototypes etc.
 * @author   Tomasz Lis
 * @date     25 May 2009 - 31 Jul 2009
 * @par  Copying and copyrights:
 *     This program is free software; you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation; either version 2 of the License, or
 *     (at your option) any later version.
 */
/******************************************************************************/
#ifndef DK_CFGSTRINGS_H
#define DK_CFGSTRINGS_H

#include "globals.h"
#include "bflib_basics.h"

#ifdef __cplusplus
extern "C" {
#endif
/******************************************************************************/
#define STRINGS_MAX       1000
#define DK_STRINGS_MAX     941

struct GameCampaign;

enum GUIStrings {
    GUIStr_SuccessLandIsYours = STRINGS_MAX+0, // per-campaign
    GUIStr_LevelEventMessage = STRINGS_MAX+1, // range 1..200, per-campaign
    GUIStr_Empty = STRINGS_MAX+201,
    GUIStr_NameAndHealthDesc = STRINGS_MAX+222,
    GUIStr_ExperienceDesc,
    GUIStr_HungerDesc,
    GUIStr_Cancel,
    GUIStr_CreatureQueryDesc = STRINGS_MAX+287,
    GUIStr_SelectGame,
    GUIStr_NetworkMenu,
    GUIStr_MainMenu,
    GUIStr_CreatureAngerDesc = STRINGS_MAX+291,
    GUIStr_CreatureKillsDesc,
    GUIStr_CreatureStrengthDesc,
    GUIStr_CreatureWageDesc,
    GUIStr_CreatureGoldHeldDesc,
    GUIStr_CreatureDefenceDesc,
    GUIStr_CreatureSkillDesc,
    GUIStr_CreatureTimeInDungeonDesc,
    GUIStr_CreatureDexterityDesc,
    GUIStr_CreatureLuckDesc,
    GUIStr_CreatureBloodTypeDesc,
    GUIStr_CreatureIdleDesc,
    GUIStr_CreatureWorkingDesc,
    GUIStr_CreatureFightingDesc,
    GUIStr_CreatureFightDesc,
    GUIStr_CreatureFleeDesc,
    GUIStr_CreatureImprisonDesc,
    GUIStr_CreatureDefendingDesc,
    GUIStr_ConfirmYouSure = STRINGS_MAX+309,
    GUIStr_ConfirmYes,
    GUIStr_ConfirmNo,
    GUIStr_For,
    GUIStr_OptionShadowsDesc = STRINGS_MAX+313,
    GUIStr_OptionViewTypeDesc,
    GUIStr_OptionWallHeightDesc,
    GUIStr_OptionViewDistanceDesc,
    GUIStr_OptionGammaCorrectionDesc,
    GUIStr_Of,
    GUIStr_PausedMsg = STRINGS_MAX+320,
    GUIStr_PaneZoomInDesc,
    GUIStr_PaneZoomOutDesc,
    GUIStr_PaneLargeMapDesc,
    GUIStr_PaneMore = STRINGS_MAX+333,
    GUIStr_RecMovie = STRINGS_MAX+336,
    GUIStr_RecMovieFail,
    GUIStr_RecMovieDone,
    GUIStr_OptionSoundFx = STRINGS_MAX+340,
    GUIStr_OptionMusic,
    GUIStr_SlotUnused = STRINGS_MAX+342,
    GUIStr_MnuMainMenu = STRINGS_MAX+343,
    GUIStr_MnuLoadMenu,
    GUIStr_MnuLoadGame,
    GUIStr_MnuContinueGame,
    GUIStr_MnuMultiplayer = STRINGS_MAX+347,
    GUIStr_MnuReturnToMain,
    GUIStr_MnuPlayIntro,
    GUIStr_NetServiceMenu,
    GUIStr_NetSessionMenu,
    GUIStr_NetSpeed = STRINGS_MAX+352,
    GUIStr_NetComPort,
    GUIStr_NetPhoneNumber,
    GUIStr_NetIrq,
    GUIStr_MnuStatistics = STRINGS_MAX+356,
    GUIStr_LevelCompleted = STRINGS_MAX+357,
    GUIStr_MnuUnused = STRINGS_MAX+358,
    GUIStr_MnuQuit = STRINGS_MAX+359,
    GUIStr_MnuStartNewGame = STRINGS_MAX+360,
    GUIStr_TastyHeroes = STRINGS_MAX+361,
    GUIStr_CreditsHead1 = STRINGS_MAX+362, // range 362..394
    GUIStr_NetSessions = STRINGS_MAX+395,
    GUIStr_NetName,
    GUIStr_NetServices,
    GUIStr_NetMessages,
    GUIStr_NetCreateGame,
    GUIStr_NetJoinGame,
    GUIStr_NetStartGame,
    GUIStr_MnuGameMenu = STRINGS_MAX+402,
    GUIStr_MnuCancel,
    GUIStr_MnuNoName,
    GUIStr_MnuPlayers,
    GUIStr_MnuLevel,
    GUIStr_MnuLevels,
    GUIStr_MnuGames = STRINGS_MAX+408,
    GUIStr_NetModemMenu = STRINGS_MAX+409,
    GUIStr_NetSerialMenu,
    GUIStr_NetInit = STRINGS_MAX+411,
    GUIStr_NetHangup,
    GUIStr_NetClear,
    GUIStr_NetAnswer,
    GUIStr_NetStart,
    GUIStr_NetAlly = STRINGS_MAX+416,
    GUIStr_NetAlliance,
    GUIStr_Credits = STRINGS_MAX+418,
    GUIStr_MnuOk = STRINGS_MAX+419,
    GUIStr_SpecRevealMapDesc = STRINGS_MAX+420,
    GUIStr_SpecResurrectCreatureDesc,
    GUIStr_SpecTransferCreatureDesc,
    GUIStr_SpecStealHeroDesc,
    GUIStr_SpecMultiplyCreaturesDesc,
    GUIStr_SpecIncreaseLevelDesc,
    GUIStr_SpecMakeSafeDesc,
    GUIStr_SpecLocateHiddenWorldDesc,
    GUIStr_SpecResurrectCreature,
    GUIStr_SpecTransferCreature,
    GUIStr_MnuHighScoreTable = STRINGS_MAX+431,
    GUIStr_GoToQueryMode,
    GUIStr_MoreInformation = STRINGS_MAX+433,
    GUIStr_BackToMainQueryScreen,
    GUIStr_SelectedAction,
    GUIStr_TeamChooseParty = STRINGS_MAX+436,
    GUIStr_TeamEnterDungeon,
    GUIStr_TeamPartyMembers,
    GUIStr_TeamAvailCreatures,
    GUIStr_TeamCreature,
    GUIStr_TeamMoneyAvailable,
    GUIStr_TeamLeader,
    GUIStr_TeamHire,
    GUIStr_TeamFire,
    GUIStr_TeamCost,
    GUIStr_TeamType,
    GUIStr_InformationPanelDesc = STRINGS_MAX+447,
    GUIStr_RoomPanelDesc = STRINGS_MAX+448,
    GUIStr_ResearchPanelDesc = STRINGS_MAX+449,
    GUIStr_WorkshopPanelDesc = STRINGS_MAX+450,
    GUIStr_CreaturePanelDesc = STRINGS_MAX+451,
    GUIStr_ResearchTimeDesc = STRINGS_MAX+452,
    GUIStr_WorkshopTimeDesc = STRINGS_MAX+453,
    GUIStr_PayTimeDesc = STRINGS_MAX+454,
    GUIStr_NumberOfRoomsDesc = STRINGS_MAX+455,
    GUIStr_NumberOfCreaturesDesc = STRINGS_MAX+456,
    GUIStr_TeamChooseGame,
    GUIStr_TeamGameType,
    GUIStr_TeamKeeperVsKeeper,
    GUIStr_TeamKeeperVsHeroes,
    GUIStr_TeamDeathmatch,
    GUIStr_SellRoomDesc = STRINGS_MAX+462,
    GUIStr_SellItemDesc,
    GUIStr_NextBattleDesc,
    GUIStr_CloseWindow,
    GUIStr_ZoomToArea,
    GUIStr_NoMouseInstalled,
    GUIStr_DefineKeys,
    GUIStr_AllyWithPlayer,
    GUIStr_PressAKey = STRINGS_MAX+470,
    GUIStr_CtrlUp,
    GUIStr_CtrlDown,
    GUIStr_CtrlLeft,
    GUIStr_CtrlRight,
    GUIStr_CtrlRotate,
    GUIStr_CtrlSpeed,
    GUIStr_CtrlRotateLeft,
    GUIStr_CtrlRotateRight,
    GUIStr_CtrlZoomIn,
    GUIStr_CtrlZoomOut,
    GUIStr_KeyLeftControl = STRINGS_MAX+481,
    GUIStr_KeyRightControl,
    GUIStr_KeyLeftShift,
    GUIStr_KeyRightShift,
    GUIStr_KeyLeftAlt,
    GUIStr_KeyRightAlt,
    GUIStr_KeySpace,
    GUIStr_KeyReturn,
    GUIStr_KeyTab,
    GUIStr_KeyCapsLock = STRINGS_MAX+490,
    GUIStr_KeyBackspace,
    GUIStr_KeyInsert,
    GUIStr_KeyDelete,
    GUIStr_KeyHome,
    GUIStr_KeyEnd,
    GUIStr_KeyPageUp,
    GUIStr_KeyPageDown,
    GUIStr_KeyNumLock = STRINGS_MAX+498,
    GUIStr_KeyNumSlash,
    GUIStr_KeyNumMul,
    GUIStr_KeyNumSub,
    GUIStr_KeyNumAdd,
    GUIStr_KeyNumEnter,
    GUIStr_KeyNumDelete,
    GUIStr_KeyNum1,
    GUIStr_KeyNum2,
    GUIStr_KeyNum3,
    GUIStr_KeyNum4,
    GUIStr_KeyNum5,
    GUIStr_KeyNum6,
    GUIStr_KeyNum7,
    GUIStr_KeyNum8,
    GUIStr_KeyNum9,
    GUIStr_KeyNum0,
    GUIStr_KeyF1 = STRINGS_MAX+515,
    GUIStr_KeyF2,
    GUIStr_KeyF3,
    GUIStr_KeyF4,
    GUIStr_KeyF5,
    GUIStr_KeyF6,
    GUIStr_KeyF7,
    GUIStr_KeyF8,
    GUIStr_KeyF9,
    GUIStr_KeyF10,
    GUIStr_KeyF11,
    GUIStr_KeyF12,
    GUIStr_KeyUp,
    GUIStr_KeyDown,
    GUIStr_KeyLeft,
    GUIStr_KeyRight,
    GUIStr_NetInitingModem = STRINGS_MAX+531,
    GUIStr_NetConnectnModem,
    GUIStr_NetDial,
    GUIStr_NetContinue,
    GUIStr_NetLineEngaged,
    GUIStr_NetUnknownError,
    GUIStr_NetNoCarrier,
    GUIStr_NetNoDialTone,
    GUIStr_NetNoResponse,
    GUIStr_NetNoServer,
    GUIStr_NetUnableToInit = STRINGS_MAX+541,
    GUIStr_NetUnableToCrGame,
    GUIStr_NetUnableToJoin,
    GUIStr_CompAssNowAggressive = STRINGS_MAX+548,
    GUIStr_CompAssNowDefensive,
    GUIStr_CompAssNowConstruction,
    GUIStr_CompAssNowMoveOnly,
    GUIStr_StateFight = STRINGS_MAX+567,
    GUIStr_StateAnnoyed = STRINGS_MAX+568,
    GUIStr_KeyShift = STRINGS_MAX+569,
    GUIStr_KeyControl,
    GUIStr_KeyAlt,
    GUIStr_CreditsHead2 = STRINGS_MAX+572, // range 572..577
    GUIStr_EventTreasureRoomFull = STRINGS_MAX+664,
    GUIStr_EventScavengingDetected,
    GUIStr_EventCreaturePayday,
    GUIStr_EventNewSpellPickedUp,
    GUIStr_EventNewRoomTakenOver,
    GUIStr_EventAreaDiscovered,
    GUIStr_EventInformation = STRINGS_MAX+670,
    GUIStr_EventRoomLost,
    GUIStr_EventHeartAttacked,
    GUIStr_EventFight,
    GUIStr_EventObjective,
    GUIStr_EventBreach,
    GUIStr_EventNewSpellResearched,
    GUIStr_EventNewRoomResearched = STRINGS_MAX+677,
    GUIStr_EventNewTrap,
    GUIStr_EventNewDoor,
    GUIStr_EventNewCreature = STRINGS_MAX+680,
    GUIStr_EventCreatureAnnoyed,
    GUIStr_EventNoMoreLivingSpace,
    GUIStr_EventAlarmTriggered,
    GUIStr_EventRoomUnderAttack,
    GUIStr_EventTreasureRoomNeeded,
    GUIStr_EventCreaturesHungry,
    GUIStr_EventTrapCrateFound,
    GUIStr_EventDoorCrateFound,
    GUIStr_EventDnSpecialFound = STRINGS_MAX+689,
    GUIStr_EventTreasrRoomFullDesc = STRINGS_MAX+690,
    GUIStr_EventCreatrScavngDesc,
    GUIStr_EventCreaturePaydayDesc,
    GUIStr_EventSpellPickedUpDesc,
    GUIStr_EventRoomTakenOverDesc,
    GUIStr_EventAreaDiscoveredDesc,
    GUIStr_EventInformationDesc,
    GUIStr_EventRoomLostDesc,
    GUIStr_EventDnHeartAttackedDesc = STRINGS_MAX+698,
    GUIStr_EventFightDesc,
    GUIStr_EventObjectiveDesc = STRINGS_MAX+700,
    GUIStr_EventBreachDesc,
    GUIStr_EventNewSpellResrchDesc,
    GUIStr_EventNewRoomResrchDesc,
    GUIStr_EventNewTrapDesc,
    GUIStr_EventNewDoorDesc,
    GUIStr_EventNewCreatureDesc,
    GUIStr_EventCreatrAnnoyedDesc,
    GUIStr_EventNoMoreLivingSetDesc,
    GUIStr_EventAlarmTriggeredDesc,
    GUIStr_EventRoomUnderAttackDesc = STRINGS_MAX+710,
    GUIStr_EventNeedTreasrRoomDesc,
    GUIStr_EventCreaturesHungryDesc,
    GUIStr_EventTrapCrateFoundDesc,
    GUIStr_EventDoorCrateFoundDesc,
    GUIStr_EventDnSpecialFoundDesc = STRINGS_MAX+715,
    GUIStr_MnuOptions = STRINGS_MAX+716,
    GUIStr_MnuGraphicsOptions,
    GUIStr_MnuSoundOptions,
    GUIStr_MnuLoad,
    GUIStr_MnuSave,
    GUIStr_MnuComputerAssist,
    GUIStr_MnuOptionsDesc = STRINGS_MAX+722,
    GUIStr_GraphicsMenuDesc = STRINGS_MAX+723,
    GUIStr_SoundMenuDesc,
    GUIStr_LoadGameDesc,
    GUIStr_SaveGameDesc,
    GUIStr_QuitGameDesc = STRINGS_MAX+727,
    GUIStr_ComputerAssistDesc = STRINGS_MAX+728,
    GUIStr_AggressiveAssistDesc,
    GUIStr_DefensiveAssistDesc,
    GUIStr_ConstructionAssistDesc,
    GUIStr_MoveOnlyAssistDesc,
    GUIStr_PickCreatrMostExpDesc = STRINGS_MAX+733,
    GUIStr_PickCreatrIdleDesc,
    GUIStr_PickCreatrWorkingDesc,
    GUIStr_PickCreatrFightingDesc,
    GUIStr_OptionsInvertMouse = STRINGS_MAX+737,
    GUIStr_OptionsPossessMouseSensitivity,
    GUIStr_OptionsMoreSensitive,
    GUIStr_OptionsLessSensitive = STRINGS_MAX+740,
    GUIStr_StatisticsNames1 = STRINGS_MAX+741, // range 741..802
    GUIStr_EasterPoems = STRINGS_MAX+803, // range 803..828
    GUIStr_GameHints = STRINGS_MAX+829, // range 829..839
    GUIStr_MnuRetToOptions = STRINGS_MAX+840,
    GUIStr_MnuExit = STRINGS_MAX+841,
    GUIStr_MnuAudio,
    GUIStr_MnuInvertMouse,
    GUIStr_MnuMouseSensitivity,
    GUIStr_MnuComputer,
    GUIStr_MnuComputerPlayers,
    GUIStr_On = STRINGS_MAX+847,
    GUIStr_Off = STRINGS_MAX+848,
    GUIStr_Sensitivity,
    GUIStr_MouseOptions,
    GUIStr_Mouse,
    GUIStr_UndoPickup,
    GUIStr_Pause,
    GUIStr_Map = STRINGS_MAX+854,
    GUIStr_InsufficientMemory,
    GUIStr_UnableToChangeRes,
    GUIStr_Query = STRINGS_MAX+857,
    GUIStr_CreditsHead3 = STRINGS_MAX+858, // range 858..867
    GUIStr_NetAttemptingToJoin = STRINGS_MAX+868,
    GUIStr_NetResyncing,
    GUIStr_Net1Player = STRINGS_MAX+870,
    GUIStr_Net2Players,
    GUIStr_Net3Players,
    GUIStr_Net4Players,
    GUIStr_NetSerial = STRINGS_MAX+874,
    GUIStr_NetModem,
    GUIStr_NetIpx,
    GUIStr_MapN = STRINGS_MAX+877,
    GUIStr_MapE,
    GUIStr_MapS,
    GUIStr_MapW,
    GUIStr_Vs = STRINGS_MAX+881,
    GUIStr_CreditsHead4 = STRINGS_MAX+882, // range 882..884
    GUIStr_HappyBirthday = STRINGS_MAX+885,
    GUIStr_Error,
    GUIStr_ErrorSaving,
    GUIStr_NewLevels = STRINGS_MAX+888,
    GUIStr_InsertDataCD = STRINGS_MAX+889,
    GUIStr_InsertKeeperCD,
    GUIStr_InbsertDeeperCD,
    GUIStr_LevelEventMessageDD = STRINGS_MAX+892, // range 892..940, Deeper Dungeons
    GUIStr_MnuFreePlayLevels = STRINGS_MAX+941,
    GUIStr_MnuLandSelection = STRINGS_MAX+942,
    GUIStr_MnuCampaigns = STRINGS_MAX+943,
    GUIStr_MnuAddComputer = STRINGS_MAX+944,
    GUIStr_EventWorkRoomUnreachbl,
    GUIStr_EventWorkRoomUnreachblDesc,
    GUIStr_EventStorgRoomUnreachbl,
    GUIStr_EventStorgRoomUnreachblDesc,
    GUIStr_CreatureArmourDesc = STRINGS_MAX+949,
    GUIStr_CreatureSpeedDesc,
    GUIStr_CreatureLoyaltyDesc,
    GUIStr_CreatureResrchSkillDesc,
    GUIStr_CreatureManfctrSkillDesc,
    GUIStr_CreatureTraingSkillDesc,
    GUIStr_CreatureScavngSkillDesc,
    GUIStr_CreatureTraingCostDesc,
    GUIStr_CreatureScavngCostDesc,
    GUIStr_CreatureBestDmgDesc,
    GUIStr_CreatureWeightDesc,
    GUIStr_CreatureScoreDesc = STRINGS_MAX+960,
    GUIStr_CreatureHealthDesc = STRINGS_MAX+965,
    GUIStr_CreatureMaxHealthDesc = STRINGS_MAX+966,
    GUIStr_ToggleMessage = STRINGS_MAX+967,
};

enum CampaignStrings {
    CpgStr_SuccessLandIsYours = 0,
    CpgStr_LevelEventMessage = 1, // range 1..200
    CpgStr_Empty = 201,
    CpgStr_LevelName = 202, // range 202..221
    CpgStr_CreatureSpellDesc = 226, // range 226..257
    CpgStr_CreatureKind1 = 258, // range 258..286
    CpgStr_TerrainEmptyLairDesc = 319,
    CpgStr_TerrainVarDesc1 = 324, // range 324..332
    CpgStr_LevelWon = 334,
    CpgStr_LevelLost,
    CpgStr_CreditsHead1 = 362, // range 362..394
    CpgStr_SpecRevealMapDesc = 420,
    CpgStr_SpecResurrectCreatureDesc,
    CpgStr_SpecTransferCreatureDesc,
    CpgStr_SpecStealHeroDesc,
    CpgStr_SpecMultiplyCreaturesDesc,
    CpgStr_SpecIncreaseLevelDesc,
    CpgStr_SpecMakeSafeDesc,
    CpgStr_SpecLocateHiddenWorldDesc,
    CpgStr_SpecResurrectCreature,
    CpgStr_SpecTransferCreature,
    CpgStr_BonusLevel = 430,
    CpgStr_TerrainGemsDesc = 544,
    CpgStr_TerrainHeroEntranceDesc,
    CpgStr_CreatureKind2 = 546, // range 546..547
    CpgStr_RoomKind1 = 552, // range 552..566
    CpgStr_BoulderTrap = 578,
    CpgStr_TrapKindAlarm,
    CpgStr_TrapKindPoisonGas,
    CpgStr_TrapKindLightning,
    CpgStr_TrapKindWordOfPower,
    CpgStr_TrapKindLava,
    CpgStr_TrapBoulderDesc = 584,
    CpgStr_AlarmTrapDesc,
    CpgStr_PoisonGasTrapDesc,
    CpgStr_LightningTrapDesc,
    CpgStr_WordOfPowerTrapDesc,
    CpgStr_LavaTrapDesc,
    CpgStr_DoorKindWooden = 590,
    CpgStr_DoorKindBraced,
    CpgStr_DoorKindIron,
    CpgStr_DoorKindMagic,
    CpgStr_WoodenDoorDesc = 594,
    CpgStr_BracedDoorDesc,
    CpgStr_IronDoorDesc,
    CpgStr_MagicDoorDesc,
    CpgStr_RoomKind2 = 598, // range 598..614
    CpgStr_RoomDesc1 = 615, // range 615..629
    CpgStr_PowerKind1 = 630, // range 630..646
    CpgStr_PowerDesc1 = 647, // range 647..663
};

/******************************************************************************/
TbBool setup_gui_strings_data(void);
TbBool free_gui_strings_data(void);
TbBool reset_strings(char **strings);
const char * get_string(TextStringId stridx);
TbBool setup_campaign_strings_data(struct GameCampaign *campgn);
/******************************************************************************/
#ifdef __cplusplus
}
#endif
#endif
