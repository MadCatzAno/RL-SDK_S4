#pragma once

// Name: RL, Version: s4

#include "../SDK.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ManuallyTickEOSPlatform
struct UOnlineSubsystemEOS_ManuallyTickEOSPlatform_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.FormatCurrency
struct UOnlineSubsystemEOS_FormatCurrency_Params
{
	struct FString                                     Currency;                                                  // (Parm, NeedCtorLink)
	int                                                Price;                                                     // (Parm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearMicroTxnResponseDelegate
struct UOnlineSubsystemEOS_ClearMicroTxnResponseDelegate_Params
{
	struct FScriptDelegate                             ResponseMicroTxnDelegate;                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddMicroTxnResponseDelegate
struct UOnlineSubsystemEOS_AddMicroTxnResponseDelegate_Params
{
	struct FScriptDelegate                             ResponseMicroTxnDelegate;                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetAppPriceInfo
struct UOnlineSubsystemEOS_GetAppPriceInfo_Params
{
	struct FUniqueNetId                                PlayerID;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	TArray<struct FName>                               AppNames;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.HandleBootMessage
struct UOnlineSubsystemEOS_HandleBootMessage_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetOverlayEnabled
struct UOnlineSubsystemEOS_GetOverlayEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RefreshNetworkErrorToggle
struct UOnlineSubsystemEOS_RefreshNetworkErrorToggle_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUserRestoredDelegate
struct UOnlineSubsystemEOS_ClearUserRestoredDelegate_Params
{
	struct FScriptDelegate                             UserRestoredDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUserRestoredDelegate
struct UOnlineSubsystemEOS_AddUserRestoredDelegate_Params
{
	struct FScriptDelegate                             UserRestoredDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUserRestored
struct UOnlineSubsystemEOS_OnUserRestored_Params
{
	unsigned char                                      ControllerId;                                              // (Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUserOrphanedDelegate
struct UOnlineSubsystemEOS_ClearUserOrphanedDelegate_Params
{
	struct FScriptDelegate                             UserOrphanedDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUserOrphanedDelegate
struct UOnlineSubsystemEOS_AddUserOrphanedDelegate_Params
{
	struct FScriptDelegate                             UserOrphanedDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUserOrphaned
struct UOnlineSubsystemEOS_OnUserOrphaned_Params
{
	unsigned char                                      ControllerId;                                              // (Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForItemsAsync
struct UOnlineSubsystemEOS_OpenStoreForItemsAsync_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FString>                             Targets;                                                   // (Parm, NeedCtorLink)
	struct FScriptDelegate                             OnStorePurchaseCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnStorePurchaseCompleteDelegate
struct UOnlineSubsystemEOS_OnStorePurchaseCompleteDelegate_Params
{
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForItems
struct UOnlineSubsystemEOS_OpenStoreForItems_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FString>                             Targets;                                                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForDLC
struct UOnlineSubsystemEOS_OpenStoreForDLC_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FName                                       DLC;                                                       // (Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenErrorDialog
struct UOnlineSubsystemEOS_OpenErrorDialog_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<Engine_EPS4ErrorDialog>                ErrorCode;                                                 // (Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenPS4DisplayMode
struct UOnlineSubsystemEOS_OpenPS4DisplayMode_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<Engine_EPS4DisplayMode>                DisplayMode;                                               // (Parm)
	TArray<struct FString>                             Targets;                                                   // (OptionalParm, Parm, NeedCtorLink)
	int                                                ServiceLabel;                                              // (OptionalParm, Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ResetControllerColor
struct UOnlineSubsystemEOS_ResetControllerColor_Params
{
	int                                                ControllerId;                                              // (Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetControllerColor
struct UOnlineSubsystemEOS_SetControllerColor_Params
{
	int                                                ControllerId;                                              // (Parm)
	struct FColor                                      NewColor;                                                  // (Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.InitializeTrophyAPI
struct UOnlineSubsystemEOS_InitializeTrophyAPI_Params
{
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AnyPlayerChatRestricted
struct UOnlineSubsystemEOS_AnyPlayerChatRestricted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUnlockedDLCChangeDelegate
struct UOnlineSubsystemEOS_ClearUnlockedDLCChangeDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUnlockedDLCChangeDelegate
struct UOnlineSubsystemEOS_AddUnlockedDLCChangeDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetUnlockedDLC
struct UOnlineSubsystemEOS_GetUnlockedDLC_Params
{
	TArray<struct FName>                               ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUnlockedDLCChange
struct UOnlineSubsystemEOS_OnUnlockedDLCChange_Params
{
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UpdateSessionStatusFromPlayers
struct UOnlineSubsystemEOS_UpdateSessionStatusFromPlayers_Params
{
	int                                                CurrentPlayerCount;                                        // (Parm)
	int                                                numBotPlayers;                                             // (Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearErrorDialogClosedDelegate
struct UOnlineSubsystemEOS_ClearErrorDialogClosedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddErrorDialogClosedDelegate
struct UOnlineSubsystemEOS_AddErrorDialogClosedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnErrorDialogClosed
struct UOnlineSubsystemEOS_OnErrorDialogClosed_Params
{
	int                                                LocalUserNum;                                              // (Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCommerceDialogClosedDelegate
struct UOnlineSubsystemEOS_ClearCommerceDialogClosedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCommerceDialogClosedDelegate
struct UOnlineSubsystemEOS_AddCommerceDialogClosedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCommerceDialogClosed
struct UOnlineSubsystemEOS_OnCommerceDialogClosed_Params
{
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetCurrentConnectionStatus
struct UOnlineSubsystemEOS_GetCurrentConnectionStatus_Params
{
	TEnumAsByte<Engine_EOnlineServerConnectionStatus>  ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCloseKickPlayerDialogDelegate
struct UOnlineSubsystemEOS_ClearCloseKickPlayerDialogDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCloseKickPlayerDialogDelegate
struct UOnlineSubsystemEOS_AddCloseKickPlayerDialogDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCloseKickPlayerDialog
struct UOnlineSubsystemEOS_OnCloseKickPlayerDialog_Params
{
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnPlayerTalkingStateChange
struct UOnlineSubsystemEOS_OnPlayerTalkingStateChange_Params
{
	struct FUniqueNetId                                Player;                                                    // (Parm, NeedCtorLink)
	bool                                               bIsTalking;                                                // (Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetVoiceReceiveVolume
struct UOnlineSubsystemEOS_SetVoiceReceiveVolume_Params
{
	float                                              VoiceVolume;                                               // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetDLCPurchaseTime
struct UOnlineSubsystemEOS_GetDLCPurchaseTime_Params
{
	struct FName                                       AppName;                                                   // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SaveKey
struct UOnlineSubsystemEOS_SaveKey_Params
{
	struct FString                                     ProductKey;                                                // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetLocalAccountNames
struct UOnlineSubsystemEOS_GetLocalAccountNames_Params
{
	TArray<struct FString>                             Accounts;                                                  // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.DeleteLocalAccount
struct UOnlineSubsystemEOS_DeleteLocalAccount_Params
{
	struct FString                                     Username;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                  // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RenameLocalAccount
struct UOnlineSubsystemEOS_RenameLocalAccount_Params
{
	struct FString                                     NewUserName;                                               // (Parm, NeedCtorLink)
	struct FString                                     OldUserName;                                               // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                  // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.CreateLocalAccount
struct UOnlineSubsystemEOS_CreateLocalAccount_Params
{
	struct FString                                     Username;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                  // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCreateOnlineAccountCompletedDelegate
struct UOnlineSubsystemEOS_ClearCreateOnlineAccountCompletedDelegate_Params
{
	struct FScriptDelegate                             AccountCreateDelegate;                                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCreateOnlineAccountCompletedDelegate
struct UOnlineSubsystemEOS_AddCreateOnlineAccountCompletedDelegate_Params
{
	struct FScriptDelegate                             AccountCreateDelegate;                                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCreateOnlineAccountCompleted
struct UOnlineSubsystemEOS_OnCreateOnlineAccountCompleted_Params
{
	TEnumAsByte<Engine_EOnlineAccountCreateStatus>     ErrorStatus;                                               // (Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.CreateOnlineAccount
struct UOnlineSubsystemEOS_CreateOnlineAccount_Params
{
	struct FString                                     Username;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                  // (Parm, NeedCtorLink)
	struct FString                                     EmailAddress;                                              // (Parm, NeedCtorLink)
	struct FString                                     ProductKey;                                                // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsKeyValid
struct UOnlineSubsystemEOS_IsKeyValid_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearStorageDeviceChangeDelegate
struct UOnlineSubsystemEOS_ClearStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddStorageDeviceChangeDelegate
struct UOnlineSubsystemEOS_AddStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnStorageDeviceChange
struct UOnlineSubsystemEOS_OnStorageDeviceChange_Params
{
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetNATType
struct UOnlineSubsystemEOS_GetNATType_Params
{
	TEnumAsByte<Engine_ENATType>                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearConnectionStatusChangeDelegate
struct UOnlineSubsystemEOS_ClearConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddConnectionStatusChangeDelegate
struct UOnlineSubsystemEOS_AddConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnConnectionStatusChange
struct UOnlineSubsystemEOS_OnConnectionStatusChange_Params
{
	TEnumAsByte<Engine_EOnlineServerConnectionStatus>  ConnectionStatus;                                          // (Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsControllerConnected
struct UOnlineSubsystemEOS_IsControllerConnected_Params
{
	int                                                ControllerId;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearControllerChangeDelegate
struct UOnlineSubsystemEOS_ClearControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddControllerChangeDelegate
struct UOnlineSubsystemEOS_AddControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnControllerChange
struct UOnlineSubsystemEOS_OnControllerChange_Params
{
	int                                                ControllerId;                                              // (Parm)
	bool                                               bIsConnected;                                              // (Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetNetworkNotificationPosition
struct UOnlineSubsystemEOS_SetNetworkNotificationPosition_Params
{
	TEnumAsByte<Engine_ENetworkNotificationPosition>   NewPos;                                                    // (Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetNetworkNotificationPosition
struct UOnlineSubsystemEOS_GetNetworkNotificationPosition_Params
{
	TEnumAsByte<Engine_ENetworkNotificationPosition>   ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.NotifyExternalUIChanged
struct UOnlineSubsystemEOS_NotifyExternalUIChanged_Params
{
	bool                                               bIsOpening;                                                // (Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearExternalUIChangeDelegate
struct UOnlineSubsystemEOS_ClearExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddExternalUIChangeDelegate
struct UOnlineSubsystemEOS_AddExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnExternalUIChange
struct UOnlineSubsystemEOS_OnExternalUIChange_Params
{
	bool                                               bIsOpening;                                                // (Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearLinkStatusChangeDelegate
struct UOnlineSubsystemEOS_ClearLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddLinkStatusChangeDelegate
struct UOnlineSubsystemEOS_AddLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnLinkStatusChange
struct UOnlineSubsystemEOS_OnLinkStatusChange_Params
{
	bool                                               bIsConnected;                                              // (Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.HasLinkConnection
struct UOnlineSubsystemEOS_HasLinkConnection_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterStatGuid
struct UOnlineSubsystemEOS_RegisterStatGuid_Params
{
	struct FUniqueNetId                                PlayerID;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ClientStatGuid;                                            // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetClientStatGuid
struct UOnlineSubsystemEOS_GetClientStatGuid_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearRegisterHostStatGuidCompleteDelegateDelegate
struct UOnlineSubsystemEOS_ClearRegisterHostStatGuidCompleteDelegateDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddRegisterHostStatGuidCompleteDelegate
struct UOnlineSubsystemEOS_AddRegisterHostStatGuidCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnFlushOnlineStatsComplete
struct UOnlineSubsystemEOS_OnFlushOnlineStatsComplete_Params
{
	struct FName                                       SessionName;                                               // (Parm)
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnRegisterHostStatGuidComplete
struct UOnlineSubsystemEOS_OnRegisterHostStatGuidComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterHostStatGuid
struct UOnlineSubsystemEOS_RegisterHostStatGuid_Params
{
	struct FString                                     HostStatGuid;                                              // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetHostStatGuid
struct UOnlineSubsystemEOS_GetHostStatGuid_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.WriteOnlinePlayerScores
struct UOnlineSubsystemEOS_WriteOnlinePlayerScores_Params
{
	TArray<struct FOnlinePlayerScore>                  PlayerScores;                                              // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.FreeStats
struct UOnlineSubsystemEOS_FreeStats_Params
{
	class UOnlineStatsRead*                            StatsRead;                                                 // (Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearReadOnlineStatsCompleteDelegate
struct UOnlineSubsystemEOS_ClearReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddReadOnlineStatsCompleteDelegate
struct UOnlineSubsystemEOS_AddReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnReadOnlineStatsComplete
struct UOnlineSubsystemEOS_OnReadOnlineStatsComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsByRankAroundPlayer
struct UOnlineSubsystemEOS_ReadOnlineStatsByRankAroundPlayer_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	class UOnlineStatsRead*                            StatsRead;                                                 // (Parm)
	int                                                NumRows;                                                   // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsByRank
struct UOnlineSubsystemEOS_ReadOnlineStatsByRank_Params
{
	class UOnlineStatsRead*                            StatsRead;                                                 // (Parm)
	int                                                StartIndex;                                                // (OptionalParm, Parm)
	int                                                NumToRead;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsForFriends
struct UOnlineSubsystemEOS_ReadOnlineStatsForFriends_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	class UOnlineStatsRead*                            StatsRead;                                                 // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStats
struct UOnlineSubsystemEOS_ReadOnlineStats_Params
{
	TArray<struct FUniqueNetId>                        Players;                                                   // (Const, Parm, OutParm, NeedCtorLink)
	class UOnlineStatsRead*                            StatsRead;                                                 // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnmuteAll
struct UOnlineSubsystemEOS_UnmuteAll_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.MuteAll
struct UOnlineSubsystemEOS_MuteAll_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               bAllowFriends;                                             // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetSpeechRecognitionObject
struct UOnlineSubsystemEOS_SetSpeechRecognitionObject_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	class USpeechRecognition*                          SpeechRecogObj;                                            // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SelectVocabulary
struct UOnlineSubsystemEOS_SelectVocabulary_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                VocabularyId;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearRecognitionCompleteDelegate
struct UOnlineSubsystemEOS_ClearRecognitionCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             RecognitionDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddRecognitionCompleteDelegate
struct UOnlineSubsystemEOS_AddRecognitionCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             RecognitionDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnRecognitionComplete
struct UOnlineSubsystemEOS_OnRecognitionComplete_Params
{
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetRecognitionResults
struct UOnlineSubsystemEOS_GetRecognitionResults_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FSpeechRecognizedWord>               Words;                                                     // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StopSpeechRecognition
struct UOnlineSubsystemEOS_StopSpeechRecognition_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StartSpeechRecognition
struct UOnlineSubsystemEOS_StartSpeechRecognition_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StopNetworkedVoice
struct UOnlineSubsystemEOS_StopNetworkedVoice_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StartNetworkedVoice
struct UOnlineSubsystemEOS_StartNetworkedVoice_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearPlayerTalkingDelegate
struct UOnlineSubsystemEOS_ClearPlayerTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddPlayerTalkingDelegate
struct UOnlineSubsystemEOS_AddPlayerTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnPlayerTalking
struct UOnlineSubsystemEOS_OnPlayerTalking_Params
{
	struct FUniqueNetId                                Player;                                                    // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnmuteRemoteTalker
struct UOnlineSubsystemEOS_UnmuteRemoteTalker_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.MuteRemoteTalker
struct UOnlineSubsystemEOS_MuteRemoteTalker_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetRemoteTalkerPriority
struct UOnlineSubsystemEOS_SetRemoteTalkerPriority_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                  // (Parm, NeedCtorLink)
	int                                                Priority;                                                  // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsHeadsetPresent
struct UOnlineSubsystemEOS_IsHeadsetPresent_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsRemotePlayerTalking
struct UOnlineSubsystemEOS_IsRemotePlayerTalking_Params
{
	struct FUniqueNetId                                PlayerID;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsLocalPlayerTalking
struct UOnlineSubsystemEOS_IsLocalPlayerTalking_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnregisterRemoteTalker
struct UOnlineSubsystemEOS_UnregisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterRemoteTalker
struct UOnlineSubsystemEOS_RegisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnregisterLocalTalker
struct UOnlineSubsystemEOS_UnregisterLocalTalker_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterLocalTalker
struct UOnlineSubsystemEOS_RegisterLocalTalker_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetPlayerUniqueNetIdFromIndex
struct UOnlineSubsystemEOS_GetPlayerUniqueNetIdFromIndex_Params
{
	int                                                UserIndex;                                                 // (Parm)
	struct FUniqueNetId                                ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetPlayerNicknameFromIndex
struct UOnlineSubsystemEOS_GetPlayerNicknameFromIndex_Params
{
	int                                                UserIndex;                                                 // (Parm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.Init
struct UOnlineSubsystemEOS_Init_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.InitEOS
struct UOnlineSubsystemEOS_InitEOS_Params
{
	struct FString                                     SandboxId;                                                 // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     DeploymentId;                                              // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.EventGetAppPriceInfoComplete
struct UOnlineSubsystemEOS_EventGetAppPriceInfoComplete_Params
{
	struct FName                                       AppName;                                                   // (Parm)
	struct FString                                     Price;                                                     // (Parm, NeedCtorLink)
	struct FString                                     DiscountPrice;                                             // (Parm, NeedCtorLink)
	int                                                DiscountPercentage;                                        // (Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnMicroTxnResponse
struct UOnlineSubsystemEOS_OnMicroTxnResponse_Params
{
	bool                                               bAuthorized;                                               // (Parm)
};

// Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequiresAuthTicket
struct UOnlineAuthInterfaceEOS_RequiresAuthTicket_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequestAuthTicket
struct UOnlineAuthInterfaceEOS_RequestAuthTicket_Params
{
	struct FUniqueNetId                                PlayerID;                                                  // (Parm, NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequestMtxCode
struct UOnlineAuthInterfaceEOS_RequestMtxCode_Params
{
	struct FUniqueNetId                                PlayerID;                                                  // (Parm, NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineFriendsInterfaceEOS.GetActivePlatformId
struct UOnlineFriendsInterfaceEOS_GetActivePlatformId_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                AccountId;                                                 // (Const, Parm, NeedCtorLink)
	struct FUniqueNetId                                PlatformId;                                                // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineFriendsInterfaceEOS.RequestLinkedAccounts
struct UOnlineFriendsInterfaceEOS_RequestLinkedAccounts_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FUniqueNetId>                        AccountIds;                                                // (Const, Parm, NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.AcceptGameInvite
struct UOnlineGameInterfaceEOS_AcceptGameInvite_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FName                                       SessionName;                                               // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.FreeSearchResults
struct UOnlineGameInterfaceEOS_FreeSearchResults_Params
{
	class UOnlineGameSearch*                           Search;                                                    // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.UpdateOnlineGame
struct UOnlineGameInterfaceEOS_UpdateOnlineGame_Params
{
	struct FName                                       SessionName;                                               // (Parm)
	class UOnlineGameSettings*                         UpdatedGameSettings;                                       // (Parm)
	bool                                               bShouldRefreshOnlineData;                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.AuthWithNintendoAccountToken
struct UOnlinePersistentAuthInterfaceEOS_AuthWithNintendoAccountToken_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FString                                     NintendoAccountToken;                                      // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetAuthExpirationTimestamp
struct UOnlinePersistentAuthInterfaceEOS_GetAuthExpirationTimestamp_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	class UDateTime*                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.LaunchAccountPortal
struct UOnlinePersistentAuthInterfaceEOS_LaunchAccountPortal_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetClientCredentials
struct UOnlinePersistentAuthInterfaceEOS_GetClientCredentials_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetContinuanceToken
struct UOnlinePersistentAuthInterfaceEOS_GetContinuanceToken_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.UseRefreshToken
struct UOnlinePersistentAuthInterfaceEOS_UseRefreshToken_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FString                                     RefreshToken;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetRefreshToken
struct UOnlinePersistentAuthInterfaceEOS_GetRefreshToken_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.RequestPinGrantCode
struct UOnlinePersistentAuthInterfaceEOS_RequestPinGrantCode_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowInviteUI
struct UOnlinePlayerInterfaceEOS_ShowInviteUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FString                                     InviteText;                                                // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowGamerCardUI
struct UOnlinePlayerInterfaceEOS_ShowGamerCardUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetRichPresence
struct UOnlinePlayerInterfaceEOS_SetRichPresence_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FString                                     PresenceString;                                            // (Parm, NeedCtorLink)
	struct FString                                     GameDataString;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendPresence
struct UOnlinePlayerInterfaceEOS_GetFriendPresence_Params
{
	struct FOnlineFriend                               FriendData;                                                // (Parm, OutParm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RecordPlayersRecentlyMet
struct UOnlinePlayerInterfaceEOS_RecordPlayersRecentlyMet_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FUniqueNetId>                        Players;                                                   // (Parm, OutParm, NeedCtorLink)
	struct FString                                     GameDescription;                                           // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WordFilterSanitizeString
struct UOnlinePlayerInterfaceEOS_WordFilterSanitizeString_Params
{
	struct FString                                     Comment;                                                   // (Const, Parm, NeedCtorLink)
	struct FScriptDelegate                             SanitizeDelegate;                                          // (Parm, NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                  // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnSanitizeStringComplete
struct UOnlinePlayerInterfaceEOS_OnSanitizeStringComplete_Params
{
	struct FWordFilterResult                           Result;                                                    // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HideKeyboardUI
struct UOnlinePlayerInterfaceEOS_HideKeyboardUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerCountryDelegate
struct UOnlinePlayerInterfaceEOS_ClearReadPlayerCountryDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             ReadPlayerCountryDelegate;                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerCountryDelegate
struct UOnlinePlayerInterfaceEOS_AddReadPlayerCountryDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             ReadPlayerCountryDelegate;                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnPlayerCountryRetrieved
struct UOnlinePlayerInterfaceEOS_OnPlayerCountryRetrieved_Params
{
	struct FUniqueNetId                                PlayerID;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Country;                                                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerCountry
struct UOnlinePlayerInterfaceEOS_GetPlayerCountry_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAvatarChangeDelegate
struct UOnlinePlayerInterfaceEOS_ClearAvatarChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             AvatarDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAvatarChangeDelegate
struct UOnlinePlayerInterfaceEOS_AddAvatarChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             AvatarDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendPresenceChangeDelegate
struct UOnlinePlayerInterfaceEOS_ClearFriendPresenceChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             PresenceDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendPresenceChangeDelegate
struct UOnlinePlayerInterfaceEOS_AddFriendPresenceChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             PresenceDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.FriendPresenceChange
struct UOnlinePlayerInterfaceEOS_FriendPresenceChange_Params
{
	struct FUniqueNetId                                PlayerID;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAvatarChange
struct UOnlinePlayerInterfaceEOS_OnAvatarChange_Params
{
	struct FUniqueNetId                                PlayerID;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnlockAchievement
struct UOnlinePlayerInterfaceEOS_UnlockAchievement_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                AchievementId;                                             // (Parm)
	float                                              PercentComplete;                                           // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadAchievements
struct UOnlinePlayerInterfaceEOS_ReadAchievements_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                TitleId;                                                   // (OptionalParm, Parm)
	bool                                               bShouldReadText;                                           // (OptionalParm, Parm)
	bool                                               bShouldReadImages;                                         // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetAchievements
struct UOnlinePlayerInterfaceEOS_GetAchievements_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FAchievementDetails>                 Achievements;                                              // (Parm, OutParm, NeedCtorLink)
	int                                                TitleId;                                                   // (OptionalParm, Parm)
	TEnumAsByte<Engine_EOnlineEnumerationReadState>    ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadAchievementsCompleteDelegate
struct UOnlinePlayerInterfaceEOS_ClearReadAchievementsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUnlockAchievementCompleteDelegate
struct UOnlinePlayerInterfaceEOS_ClearUnlockAchievementCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadAchievementsCompleteDelegate
struct UOnlinePlayerInterfaceEOS_AddReadAchievementsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUnlockAchievementCompleteDelegate
struct UOnlinePlayerInterfaceEOS_AddUnlockAchievementCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadAchievementsComplete
struct UOnlinePlayerInterfaceEOS_OnReadAchievementsComplete_Params
{
	int                                                TitleId;                                                   // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUnlockAchievementComplete
struct UOnlinePlayerInterfaceEOS_OnUnlockAchievementComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowControllerUI
struct UOnlinePlayerInterfaceEOS_ShowControllerUI_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerLanguage
struct UOnlinePlayerInterfaceEOS_GetPlayerLanguage_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowPlayersUI
struct UOnlinePlayerInterfaceEOS_ShowPlayersUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearProfileDataChangedDelegate
struct UOnlinePlayerInterfaceEOS_ClearProfileDataChangedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             ProfileDataChangedDelegate;                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddProfileDataChangedDelegate
struct UOnlinePlayerInterfaceEOS_AddProfileDataChangedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             ProfileDataChangedDelegate;                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnProfileDataChanged
struct UOnlinePlayerInterfaceEOS_OnProfileDataChanged_Params
{
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnlockGamerPicture
struct UOnlinePlayerInterfaceEOS_UnlockGamerPicture_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                PictureId;                                                 // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsDeviceValid
struct UOnlinePlayerInterfaceEOS_IsDeviceValid_Params
{
	int                                                DeviceID;                                                  // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetDeviceSelectionResults
struct UOnlinePlayerInterfaceEOS_GetDeviceSelectionResults_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FString                                     DeviceName;                                                // (Parm, OutParm, NeedCtorLink)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearDeviceSelectionDoneDelegate
struct UOnlinePlayerInterfaceEOS_ClearDeviceSelectionDoneDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             DeviceDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddDeviceSelectionDoneDelegate
struct UOnlinePlayerInterfaceEOS_AddDeviceSelectionDoneDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             DeviceDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnDeviceSelectionComplete
struct UOnlinePlayerInterfaceEOS_OnDeviceSelectionComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowDeviceSelectionUI
struct UOnlinePlayerInterfaceEOS_ShowDeviceSelectionUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                SizeNeeded;                                                // (Parm)
	bool                                               bForceShowUI;                                              // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowCustomPlayersUI
struct UOnlinePlayerInterfaceEOS_ShowCustomPlayersUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FUniqueNetId>                        Players;                                                   // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     Title;                                                     // (Parm, NeedCtorLink)
	struct FString                                     Description;                                               // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsUserSwitchActive
struct UOnlinePlayerInterfaceEOS_IsUserSwitchActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetKickPlayerDialogActive
struct UOnlinePlayerInterfaceEOS_SetKickPlayerDialogActive_Params
{
	bool                                               Active;                                                    // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetKickPreviousUser
struct UOnlinePlayerInterfaceEOS_SetKickPreviousUser_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowLoginUIForOrphanedUser
struct UOnlinePlayerInterfaceEOS_ShowLoginUIForOrphanedUser_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetSyncedAchievements
struct UOnlinePlayerInterfaceEOS_GetSyncedAchievements_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<unsigned long>                              ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsGuestLogin
struct UOnlinePlayerInterfaceEOS_IsGuestLogin_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RequestRestrictedFeatureMessaging
struct UOnlinePlayerInterfaceEOS_RequestRestrictedFeatureMessaging_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<Engine_EFeaturePrivilege>              RestrictedFeature;                                         // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateVoice
struct UOnlinePlayerInterfaceEOS_CanCommunicateVoice_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<Engine_EFeaturePrivilegeLevel>         PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateVideo
struct UOnlinePlayerInterfaceEOS_CanCommunicateVideo_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<Engine_EFeaturePrivilegeLevel>         PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateText
struct UOnlinePlayerInterfaceEOS_CanCommunicateText_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<Engine_EFeaturePrivilegeLevel>         PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareUserCreatedContent
struct UOnlinePlayerInterfaceEOS_CanShareUserCreatedContent_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<Engine_EFeaturePrivilegeLevel>         PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanAccessPremiumVideoContent
struct UOnlinePlayerInterfaceEOS_CanAccessPremiumVideoContent_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<Engine_EFeaturePrivilegeLevel>         PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanAccessPremiumContent
struct UOnlinePlayerInterfaceEOS_CanAccessPremiumContent_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<Engine_EFeaturePrivilegeLevel>         PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanUseCloudStorage
struct UOnlinePlayerInterfaceEOS_CanUseCloudStorage_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<Engine_EFeaturePrivilegeLevel>         PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanRecordDVRClips
struct UOnlinePlayerInterfaceEOS_CanRecordDVRClips_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<Engine_EFeaturePrivilegeLevel>         PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanBrowseInternet
struct UOnlinePlayerInterfaceEOS_CanBrowseInternet_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<Engine_EFeaturePrivilegeLevel>         PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareWithSocialNetwork
struct UOnlinePlayerInterfaceEOS_CanShareWithSocialNetwork_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<Engine_EFeaturePrivilegeLevel>         PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareKinectContent
struct UOnlinePlayerInterfaceEOS_CanShareKinectContent_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<Engine_EFeaturePrivilegeLevel>         PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanUploadFitnessData
struct UOnlinePlayerInterfaceEOS_CanUploadFitnessData_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<Engine_EFeaturePrivilegeLevel>         PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetPrimaryPlayerGamepadToLastInput
struct UOnlinePlayerInterfaceEOS_SetPrimaryPlayerGamepadToLastInput_Params
{
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUserSwitchCompleteDelegate
struct UOnlinePlayerInterfaceEOS_ClearUserSwitchCompleteDelegate_Params
{
	struct FScriptDelegate                             UserSwitchCompleteDelegate;                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUserSwitchCompleteDelegate
struct UOnlinePlayerInterfaceEOS_AddUserSwitchCompleteDelegate_Params
{
	struct FScriptDelegate                             UserSwitchCompleteDelegate;                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUserSwitchComplete
struct UOnlinePlayerInterfaceEOS_OnUserSwitchComplete_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginStatusChangeDelegate
struct UOnlinePlayerInterfaceEOS_ClearLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
	unsigned char                                      LocalUserNum;                                              // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginStatusChangeDelegate
struct UOnlinePlayerInterfaceEOS_AddLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
	unsigned char                                      LocalUserNum;                                              // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginStatusChange
struct UOnlinePlayerInterfaceEOS_OnLoginStatusChange_Params
{
	TEnumAsByte<Engine_ELoginStatus>                   NewStatus;                                                 // (Parm)
	struct FUniqueNetId                                NewId;                                                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayHistoryRegistrationKey
struct UOnlinePlayerInterfaceEOS_GetPlayHistoryRegistrationKey_Params
{
	TArray<unsigned char>                              Key;                                                       // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CheckParentalControlInfo
struct UOnlinePlayerInterfaceEOS_CheckParentalControlInfo_Params
{
	bool                                               bShowUi;                                                   // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetActiveDiscDLC
struct UOnlinePlayerInterfaceEOS_GetActiveDiscDLC_Params
{
	TArray<struct FName>                               ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetOnlineSubscriptionRequirement
struct UOnlinePlayerInterfaceEOS_SetOnlineSubscriptionRequirement_Params
{
	bool                                               bRequiresOnlineSubscription;                               // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetControllerID
struct UOnlinePlayerInterfaceEOS_GetControllerID_Params
{
	int                                                LocalPlayerNum;                                            // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetConnectedControllerNames
struct UOnlinePlayerInterfaceEOS_GetConnectedControllerNames_Params
{
	TArray<struct FName>                               ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLocalPlayerRemoved
struct UOnlinePlayerInterfaceEOS_OnLocalPlayerRemoved_Params
{
	int                                                LocalPlayerNum;                                            // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnregisterController
struct UOnlinePlayerInterfaceEOS_UnregisterController_Params
{
	int                                                LocalPlayerNum;                                            // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RegisterController
struct UOnlinePlayerInterfaceEOS_RegisterController_Params
{
	int                                                LocalPlayerNum;                                            // (Parm)
	int                                                ControllerId;                                              // (OptionalParm, Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanRegisterController
struct UOnlinePlayerInterfaceEOS_CanRegisterController_Params
{
	int                                                LocalPlayerNum;                                            // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowBindings
struct UOnlinePlayerInterfaceEOS_ShowBindings_Params
{
	int                                                ControllerId;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetControllerLayout
struct UOnlinePlayerInterfaceEOS_SetControllerLayout_Params
{
	int                                                ControllerId;                                              // (Parm)
	struct FName                                       LayoutName;                                                // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetInputAPI
struct UOnlinePlayerInterfaceEOS_SetInputAPI_Params
{
	TEnumAsByte<Core_EInputAPI>                        TargetAPI;                                                 // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearInputAPIChangedDelegate
struct UOnlinePlayerInterfaceEOS_ClearInputAPIChangedDelegate_Params
{
	struct FScriptDelegate                             InputAPIChangedDelegate;                                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddInputAPIChangedDelegate
struct UOnlinePlayerInterfaceEOS_AddInputAPIChangedDelegate_Params
{
	struct FScriptDelegate                             InputAPIChangedDelegate;                                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnInputAPIChanged
struct UOnlinePlayerInterfaceEOS_OnInputAPIChanged_Params
{
	TEnumAsByte<Core_EInputAPI>                        TargetAPI;                                                 // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUnregisteredControllerDelegate
struct UOnlinePlayerInterfaceEOS_ClearUnregisteredControllerDelegate_Params
{
	struct FScriptDelegate                             UnregisteredControllerDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearRegisteredControllerDelegate
struct UOnlinePlayerInterfaceEOS_ClearRegisteredControllerDelegate_Params
{
	struct FScriptDelegate                             RegisteredControllerDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUnregisteredControllerDelegate
struct UOnlinePlayerInterfaceEOS_AddUnregisteredControllerDelegate_Params
{
	struct FScriptDelegate                             UnregisteredControllerDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddRegisteredControllerDelegate
struct UOnlinePlayerInterfaceEOS_AddRegisteredControllerDelegate_Params
{
	struct FScriptDelegate                             RegisteredControllerDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUnregisteredController
struct UOnlinePlayerInterfaceEOS_OnUnregisteredController_Params
{
	int                                                LocalPlayerNum;                                            // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRegisteredController
struct UOnlinePlayerInterfaceEOS_OnRegisteredController_Params
{
	int                                                LocalPlayerNum;                                            // (Parm)
	int                                                ControllerId;                                              // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddInGamePost
struct UOnlinePlayerInterfaceEOS_AddInGamePost_Params
{
	struct FString                                     InPostID;                                                  // (Parm, NeedCtorLink)
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FString>                             StringReplaceList;                                         // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UpdateStat
struct UOnlinePlayerInterfaceEOS_UpdateStat_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FName                                       StatName;                                                  // (Parm)
	int                                                Points;                                                    // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearSaveDataNoSpaceDialogCompleteDelegate
struct UOnlinePlayerInterfaceEOS_ClearSaveDataNoSpaceDialogCompleteDelegate_Params
{
	struct FScriptDelegate                             DeviceDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddSaveDataNoSpaceDialogCompleteDelegate
struct UOnlinePlayerInterfaceEOS_AddSaveDataNoSpaceDialogCompleteDelegate_Params
{
	struct FScriptDelegate                             DeviceDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnSaveDataNoSpaceDialogComplete
struct UOnlinePlayerInterfaceEOS_OnSaveDataNoSpaceDialogComplete_Params
{
	bool                                               bContinueWithoutSave;                                      // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RecordPlayersRecentlyMetKeys
struct UOnlinePlayerInterfaceEOS_RecordPlayersRecentlyMetKeys_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FFriendHistoryKey>                   PlayerKeys;                                                // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsAchievementUnlocked
struct UOnlinePlayerInterfaceEOS_IsAchievementUnlocked_Params
{
	int                                                AchievementId;                                             // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowContentMarketplaceUI
struct UOnlinePlayerInterfaceEOS_ShowContentMarketplaceUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFriendsInviteUI
struct UOnlinePlayerInterfaceEOS_ShowFriendsInviteUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowAchievementsUI
struct UOnlinePlayerInterfaceEOS_ShowAchievementsUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowMessagesUI
struct UOnlinePlayerInterfaceEOS_ShowMessagesUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFeedbackUI
struct UOnlinePlayerInterfaceEOS_ShowFeedbackUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RemoveCanPlayOnlineChangedDelegate
struct UOnlinePlayerInterfaceEOS_RemoveCanPlayOnlineChangedDelegate_Params
{
	struct FScriptDelegate                             Callback;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddCanPlayOnlineChangedDelegate
struct UOnlinePlayerInterfaceEOS_AddCanPlayOnlineChangedDelegate_Params
{
	struct FScriptDelegate                             Callback;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPlayOnlineChanged
struct UOnlinePlayerInterfaceEOS_CanPlayOnlineChanged_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUserSignInCompleteDelegate
struct UOnlinePlayerInterfaceEOS_ClearUserSignInCompleteDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUserSignInCompleteDelegate
struct UOnlinePlayerInterfaceEOS_AddUserSignInCompleteDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUserSignInComplete
struct UOnlinePlayerInterfaceEOS_OnUserSignInComplete_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowCustomMessageUI
struct UOnlinePlayerInterfaceEOS_ShowCustomMessageUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FUniqueNetId>                        Recipients;                                                // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     MessageTitle;                                              // (Parm, NeedCtorLink)
	struct FString                                     NonEditableMessage;                                        // (Parm, NeedCtorLink)
	struct FString                                     EditableMessage;                                           // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearCrossTitleProfileSettings
struct UOnlinePlayerInterfaceEOS_ClearCrossTitleProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                TitleId;                                                   // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetCrossTitleProfileSettings
struct UOnlinePlayerInterfaceEOS_GetCrossTitleProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                TitleId;                                                   // (Parm)
	class UOnlineProfileSettings*                      ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadCrossTitleProfileSettingsCompleteDelegate
struct UOnlinePlayerInterfaceEOS_ClearReadCrossTitleProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadCrossTitleProfileSettingsCompleteDelegate
struct UOnlinePlayerInterfaceEOS_AddReadCrossTitleProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadCrossTitleProfileSettingsComplete
struct UOnlinePlayerInterfaceEOS_OnReadCrossTitleProfileSettingsComplete_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                TitleId;                                                   // (Parm)
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadCrossTitleProfileSettings
struct UOnlinePlayerInterfaceEOS_ReadCrossTitleProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                TitleId;                                                   // (Parm)
	class UOnlineProfileSettings*                      ProfileSettings;                                           // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearWritePlayerStorageCompleteDelegate
struct UOnlinePlayerInterfaceEOS_ClearWritePlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddWritePlayerStorageCompleteDelegate
struct UOnlinePlayerInterfaceEOS_AddWritePlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnWritePlayerStorageComplete
struct UOnlinePlayerInterfaceEOS_OnWritePlayerStorageComplete_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WritePlayerStorage
struct UOnlinePlayerInterfaceEOS_WritePlayerStorage_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	class UOnlinePlayerStorage*                        PlayerStorage;                                             // (Parm)
	int                                                DeviceID;                                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerStorageForNetIdCompleteDelegate
struct UOnlinePlayerInterfaceEOS_ClearReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                                     // (Parm, NeedCtorLink)
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerStorageForNetIdCompleteDelegate
struct UOnlinePlayerInterfaceEOS_AddReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                                     // (Parm, NeedCtorLink)
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadPlayerStorageForNetIdComplete
struct UOnlinePlayerInterfaceEOS_OnReadPlayerStorageForNetIdComplete_Params
{
	struct FUniqueNetId                                NetId;                                                     // (Parm, NeedCtorLink)
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadPlayerStorageForNetId
struct UOnlinePlayerInterfaceEOS_ReadPlayerStorageForNetId_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                NetId;                                                     // (Parm, NeedCtorLink)
	class UOnlinePlayerStorage*                        PlayerStorage;                                             // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerStorageCompleteDelegate
struct UOnlinePlayerInterfaceEOS_ClearReadPlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerStorageCompleteDelegate
struct UOnlinePlayerInterfaceEOS_AddReadPlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadPlayerStorageComplete
struct UOnlinePlayerInterfaceEOS_OnReadPlayerStorageComplete_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadPlayerStorage
struct UOnlinePlayerInterfaceEOS_ReadPlayerStorage_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	class UOnlinePlayerStorage*                        PlayerStorage;                                             // (Parm)
	int                                                DeviceID;                                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerStorage
struct UOnlinePlayerInterfaceEOS_GetPlayerStorage_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	class UOnlinePlayerStorage*                        ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RequestNativePlatformAuthTicket
struct UOnlinePlayerInterfaceEOS_RequestNativePlatformAuthTicket_Params
{
	int                                                LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             Callback;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRequestNativePlatformAuthTicketComplete
struct UOnlinePlayerInterfaceEOS_OnRequestNativePlatformAuthTicketComplete_Params
{
	int                                                LocalUserNum;                                              // (Parm)
	struct FString                                     PlatformAuthTicket;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.LinkedAccount
struct UOnlinePlayerInterfaceEOS_LinkedAccount_Params
{
	int                                                LocalUserNum;                                              // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RefreshConnectLogin
struct UOnlinePlayerInterfaceEOS_RefreshConnectLogin_Params
{
	int                                                LocalUserNum;                                              // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ConnectLogin
struct UOnlinePlayerInterfaceEOS_ConnectLogin_Params
{
	int                                                LocalUserNum;                                              // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HasIncomingFriendInvite
struct UOnlinePlayerInterfaceEOS_HasIncomingFriendInvite_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                InviteFrom;                                                // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SupportInGameLogin
struct UOnlinePlayerInterfaceEOS_SupportInGameLogin_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HasFriendsFunctionality
struct UOnlinePlayerInterfaceEOS_HasFriendsFunctionality_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.DeleteMessage
struct UOnlinePlayerInterfaceEOS_DeleteMessage_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                MessageIndex;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendMessageReceivedDelegate
struct UOnlinePlayerInterfaceEOS_ClearFriendMessageReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             MessageDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendMessageReceivedDelegate
struct UOnlinePlayerInterfaceEOS_AddFriendMessageReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             MessageDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendMessageReceived
struct UOnlinePlayerInterfaceEOS_OnFriendMessageReceived_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                SendingPlayer;                                             // (Parm, NeedCtorLink)
	struct FString                                     SendingNick;                                               // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendMessages
struct UOnlinePlayerInterfaceEOS_GetFriendMessages_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FOnlineFriendMessage>                FriendMessages;                                            // (Parm, OutParm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearJoinFriendGameCompleteDelegate
struct UOnlinePlayerInterfaceEOS_ClearJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddJoinFriendGameCompleteDelegate
struct UOnlinePlayerInterfaceEOS_AddJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnJoinFriendGameComplete
struct UOnlinePlayerInterfaceEOS_OnJoinFriendGameComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.JoinFriendGame
struct UOnlinePlayerInterfaceEOS_JoinFriendGame_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                Friend;                                                    // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReceivedGameInviteDelegate
struct UOnlinePlayerInterfaceEOS_ClearReceivedGameInviteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReceivedGameInviteDelegate
struct UOnlinePlayerInterfaceEOS_AddReceivedGameInviteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReceivedGameInvite
struct UOnlinePlayerInterfaceEOS_OnReceivedGameInvite_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FString                                     InviterName;                                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendGameInviteToFriends
struct UOnlinePlayerInterfaceEOS_SendGameInviteToFriends_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FUniqueNetId>                        Friends;                                                   // (Parm, NeedCtorLink)
	struct FString                                     Text;                                                      // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendGameInviteToFriend
struct UOnlinePlayerInterfaceEOS_SendGameInviteToFriend_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                Friend;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Text;                                                      // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendMessageToFriend
struct UOnlinePlayerInterfaceEOS_SendMessageToFriend_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                Friend;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                   // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendInviteCanceledDelegate
struct UOnlinePlayerInterfaceEOS_ClearFriendInviteCanceledDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             InviteDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendInviteCanceledDelegate
struct UOnlinePlayerInterfaceEOS_AddFriendInviteCanceledDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             InviteDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendInviteCanceled
struct UOnlinePlayerInterfaceEOS_OnFriendInviteCanceled_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                CanceledUserId;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendInviteReceivedDelegate
struct UOnlinePlayerInterfaceEOS_ClearFriendInviteReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             InviteDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendInviteReceivedDelegate
struct UOnlinePlayerInterfaceEOS_AddFriendInviteReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             InviteDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendInviteReceived
struct UOnlinePlayerInterfaceEOS_OnFriendInviteReceived_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                          // (Parm, NeedCtorLink)
	struct FString                                     RequestingNick;                                            // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RemoveFriend
struct UOnlinePlayerInterfaceEOS_RemoveFriend_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                FormerFriend;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearRemoveFriendCompleteDelegate
struct UOnlinePlayerInterfaceEOS_ClearRemoveFriendCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             RemoveFriendDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddRemoveFriendCompleteDelegate
struct UOnlinePlayerInterfaceEOS_AddRemoveFriendCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             RemoveFriendDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRemoveFriendComplete
struct UOnlinePlayerInterfaceEOS_OnRemoveFriendComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
	struct FUniqueNetId                                RemovedID;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.DenyFriendInvite
struct UOnlinePlayerInterfaceEOS_DenyFriendInvite_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                          // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearDenyFriendInviteCompleteDelegate
struct UOnlinePlayerInterfaceEOS_ClearDenyFriendInviteCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             FriendDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddDenyFriendInviteCompleteDelegate
struct UOnlinePlayerInterfaceEOS_AddDenyFriendInviteCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             FriendDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnDenyFriendInviteComplete
struct UOnlinePlayerInterfaceEOS_OnDenyFriendInviteComplete_Params
{
	struct FUniqueNetId                                FriendId;                                                  // (Parm, NeedCtorLink)
	class UError*                                      Error;                                                     // (Const, Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AcceptFriendInvite
struct UOnlinePlayerInterfaceEOS_AcceptFriendInvite_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                          // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAcceptFriendInviteCompleteDelegate
struct UOnlinePlayerInterfaceEOS_ClearAcceptFriendInviteCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             FriendDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAcceptFriendInviteCompleteDelegate
struct UOnlinePlayerInterfaceEOS_AddAcceptFriendInviteCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             FriendDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAcceptFriendInviteComplete
struct UOnlinePlayerInterfaceEOS_OnAcceptFriendInviteComplete_Params
{
	struct FUniqueNetId                                FriendId;                                                  // (Parm, NeedCtorLink)
	class UError*                                      Error;                                                     // (Const, Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAddFriendByNameCompleteDelegate
struct UOnlinePlayerInterfaceEOS_ClearAddFriendByNameCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             FriendDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAddFriendByNameCompleteDelegate
struct UOnlinePlayerInterfaceEOS_AddAddFriendByNameCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             FriendDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAddFriendByNameComplete
struct UOnlinePlayerInterfaceEOS_OnAddFriendByNameComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendByName
struct UOnlinePlayerInterfaceEOS_AddFriendByName_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FString                                     FriendName;                                                // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.QueryUserByDisplayName
struct UOnlinePlayerInterfaceEOS_QueryUserByDisplayName_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FString                                     DisplayName;                                               // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearQueryUserByDisplayNameCompleteDelegate
struct UOnlinePlayerInterfaceEOS_ClearQueryUserByDisplayNameCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             QueryDelegate;                                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddQueryUserByDisplayNameCompleteDelegate
struct UOnlinePlayerInterfaceEOS_AddQueryUserByDisplayNameCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             QueryDelegate;                                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnQueryUserByDisplayName
struct UOnlinePlayerInterfaceEOS_OnQueryUserByDisplayName_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
	struct FString                                     QueriedDisplayName;                                        // (Parm, NeedCtorLink)
	struct FUniqueNetId                                UserId;                                                    // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriend
struct UOnlinePlayerInterfaceEOS_AddFriend_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                NewFriend;                                                 // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAddFriendCompleteDelegate
struct UOnlinePlayerInterfaceEOS_ClearAddFriendCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             FriendDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAddFriendCompleteDelegate
struct UOnlinePlayerInterfaceEOS_AddAddFriendCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             FriendDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAddFriendComplete
struct UOnlinePlayerInterfaceEOS_OnAddFriendComplete_Params
{
	struct FUniqueNetId                                NewFriendId;                                               // (Parm, NeedCtorLink)
	class UError*                                      Error;                                                     // (Const, Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetKeyboardInputResults
struct UOnlinePlayerInterfaceEOS_GetKeyboardInputResults_Params
{
	unsigned char                                      bWasCanceled;                                              // (Parm, OutParm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearKeyboardInputDoneDelegate
struct UOnlinePlayerInterfaceEOS_ClearKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddKeyboardInputDoneDelegate
struct UOnlinePlayerInterfaceEOS_AddKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnKeyboardInputComplete
struct UOnlinePlayerInterfaceEOS_OnKeyboardInputComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowKeyboardUI
struct UOnlinePlayerInterfaceEOS_ShowKeyboardUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FString                                     TitleText;                                                 // (Parm, NeedCtorLink)
	struct FString                                     DescriptionText;                                           // (Parm, NeedCtorLink)
	bool                                               bIsPassword;                                               // (OptionalParm, Parm)
	bool                                               bShouldValidate;                                           // (OptionalParm, Parm)
	struct FString                                     DefaultText;                                               // (OptionalParm, Parm, NeedCtorLink)
	int                                                MaxResultLength;                                           // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetOnlineStatus
struct UOnlinePlayerInterfaceEOS_SetOnlineStatus_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                StatusId;                                                  // (Parm)
	TArray<struct FLocalizedStringSetting>             LocalizedStringSettings;                                   // (Const, Parm, OutParm, NeedCtorLink)
	TArray<struct FSettingsProperty>                   Properties;                                                // (Const, Parm, OutParm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendsList
struct UOnlinePlayerInterfaceEOS_GetFriendsList_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FOnlineFriend>                       Friends;                                                   // (Parm, OutParm, NeedCtorLink)
	int                                                Count;                                                     // (OptionalParm, Parm)
	int                                                StartingAt;                                                // (OptionalParm, Parm)
	TEnumAsByte<Engine_EOnlineEnumerationReadState>    ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadFriendsCompleteDelegate
struct UOnlinePlayerInterfaceEOS_ClearReadFriendsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadFriendsCompleteDelegate
struct UOnlinePlayerInterfaceEOS_AddReadFriendsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadFriendsComplete
struct UOnlinePlayerInterfaceEOS_OnReadFriendsComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadFriendsList
struct UOnlinePlayerInterfaceEOS_ReadFriendsList_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                Count;                                                     // (OptionalParm, Parm)
	int                                                StartingAt;                                                // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearWriteProfileSettingsCompleteDelegate
struct UOnlinePlayerInterfaceEOS_ClearWriteProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddWriteProfileSettingsCompleteDelegate
struct UOnlinePlayerInterfaceEOS_AddWriteProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnWriteProfileSettingsComplete
struct UOnlinePlayerInterfaceEOS_OnWriteProfileSettingsComplete_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WriteProfileSettings
struct UOnlinePlayerInterfaceEOS_WriteProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	class UOnlineProfileSettings*                      ProfileSettings;                                           // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetProfileSettings
struct UOnlinePlayerInterfaceEOS_GetProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	class UOnlineProfileSettings*                      ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadProfileSettingsCompleteDelegate
struct UOnlinePlayerInterfaceEOS_ClearReadProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadProfileSettingsCompleteDelegate
struct UOnlinePlayerInterfaceEOS_AddReadProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadProfileSettingsComplete
struct UOnlinePlayerInterfaceEOS_OnReadProfileSettingsComplete_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadProfileSettings
struct UOnlinePlayerInterfaceEOS_ReadProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	class UOnlineProfileSettings*                      ProfileSettings;                                           // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendsChangeDelegate
struct UOnlinePlayerInterfaceEOS_ClearFriendsChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             FriendsDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendsChangeDelegate
struct UOnlinePlayerInterfaceEOS_AddFriendsChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             FriendsDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearMutingChangeDelegate
struct UOnlinePlayerInterfaceEOS_ClearMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddMutingChangeDelegate
struct UOnlinePlayerInterfaceEOS_AddMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginCancelledDelegate
struct UOnlinePlayerInterfaceEOS_ClearLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginCancelledDelegate
struct UOnlinePlayerInterfaceEOS_AddLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginChangeDelegate
struct UOnlinePlayerInterfaceEOS_ClearLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginChangeDelegate
struct UOnlinePlayerInterfaceEOS_AddLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFriendsUI
struct UOnlinePlayerInterfaceEOS_ShowFriendsUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsMuted
struct UOnlinePlayerInterfaceEOS_IsMuted_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AreAnyFriends
struct UOnlinePlayerInterfaceEOS_AreAnyFriends_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FFriendsQuery>                       Query;                                                     // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsFriend
struct UOnlinePlayerInterfaceEOS_IsFriend_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShowPresenceInformation
struct UOnlinePlayerInterfaceEOS_CanShowPresenceInformation_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<Engine_EFeaturePrivilegeLevel>         PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanViewPlayerProfiles
struct UOnlinePlayerInterfaceEOS_CanViewPlayerProfiles_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<Engine_EFeaturePrivilegeLevel>         PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPurchaseContent
struct UOnlinePlayerInterfaceEOS_CanPurchaseContent_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<Engine_EFeaturePrivilegeLevel>         PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanDownloadUserContent
struct UOnlinePlayerInterfaceEOS_CanDownloadUserContent_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<Engine_EFeaturePrivilegeLevel>         PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicate
struct UOnlinePlayerInterfaceEOS_CanCommunicate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<Engine_ECommunicationMethod>           CommMethod;                                                // (Parm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	TEnumAsByte<Engine_EFeaturePrivilegeLevel>         ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPlayOnline
struct UOnlinePlayerInterfaceEOS_CanPlayOnline_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<Engine_EFeaturePrivilegeLevel>         PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerNickname
struct UOnlinePlayerInterfaceEOS_GetPlayerNickname_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetUniquePlayerId
struct UOnlinePlayerInterfaceEOS_GetUniquePlayerId_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                  // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetLoginStatus
struct UOnlinePlayerInterfaceEOS_GetLoginStatus_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<Engine_ELoginStatus>                   ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLogoutCompletedDelegate
struct UOnlinePlayerInterfaceEOS_ClearLogoutCompletedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             LogoutDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLogoutCompletedDelegate
struct UOnlinePlayerInterfaceEOS_AddLogoutCompletedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             LogoutDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLogoutCompleted
struct UOnlinePlayerInterfaceEOS_OnLogoutCompleted_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.Logout
struct UOnlinePlayerInterfaceEOS_Logout_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginFailedDelegate
struct UOnlinePlayerInterfaceEOS_ClearLoginFailedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             LoginFailedDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginFailedDelegate
struct UOnlinePlayerInterfaceEOS_AddLoginFailedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             LoginFailedDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReceievedPinGrantCode
struct UOnlinePlayerInterfaceEOS_OnReceievedPinGrantCode_Params
{
	TEnumAsByte<Engine_EPinGrantResult>                Result;                                                    // (Parm)
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FString                                     Code;                                                      // (Parm, NeedCtorLink)
	struct FString                                     URL;                                                       // (Parm, NeedCtorLink)
	int                                                SecondsUntilExpiration;                                    // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginFailed
struct UOnlinePlayerInterfaceEOS_OnLoginFailed_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<Engine_EOnlineServerConnectionStatus>  ErrorCode;                                                 // (Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AutoLogin
struct UOnlinePlayerInterfaceEOS_AutoLogin_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.Login
struct UOnlinePlayerInterfaceEOS_Login_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FString                                     LoginName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                  // (Parm, NeedCtorLink)
	bool                                               bWantsLocalOnly;                                           // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowLoginUI
struct UOnlinePlayerInterfaceEOS_ShowLoginUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               bShowOnlineOnly;                                           // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendsChange
struct UOnlinePlayerInterfaceEOS_OnFriendsChange_Params
{
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnMutingChange
struct UOnlinePlayerInterfaceEOS_OnMutingChange_Params
{
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginCancelled
struct UOnlinePlayerInterfaceEOS_OnLoginCancelled_Params
{
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginChange
struct UOnlinePlayerInterfaceEOS_OnLoginChange_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.RegisterStatGuid
struct UOnlineStatsInterfaceEOS_RegisterStatGuid_Params
{
	struct FUniqueNetId                                PlayerID;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ClientStatGuid;                                            // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.GetClientStatGuid
struct UOnlineStatsInterfaceEOS_GetClientStatGuid_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearRegisterHostStatGuidCompleteDelegateDelegate
struct UOnlineStatsInterfaceEOS_ClearRegisterHostStatGuidCompleteDelegateDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddRegisterHostStatGuidCompleteDelegate
struct UOnlineStatsInterfaceEOS_AddRegisterHostStatGuidCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnRegisterHostStatGuidComplete
struct UOnlineStatsInterfaceEOS_OnRegisterHostStatGuidComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.RegisterHostStatGuid
struct UOnlineStatsInterfaceEOS_RegisterHostStatGuid_Params
{
	struct FString                                     HostStatGuid;                                              // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.GetHostStatGuid
struct UOnlineStatsInterfaceEOS_GetHostStatGuid_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.WriteOnlinePlayerScores
struct UOnlineStatsInterfaceEOS_WriteOnlinePlayerScores_Params
{
	struct FName                                       SessionName;                                               // (Parm)
	int                                                LeaderboardId;                                             // (Parm)
	TArray<struct FOnlinePlayerScore>                  PlayerScores;                                              // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearFlushOnlineStatsCompleteDelegate
struct UOnlineStatsInterfaceEOS_ClearFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddFlushOnlineStatsCompleteDelegate
struct UOnlineStatsInterfaceEOS_AddFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnFlushOnlineStatsComplete
struct UOnlineStatsInterfaceEOS_OnFlushOnlineStatsComplete_Params
{
	struct FName                                       SessionName;                                               // (Parm)
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.FlushOnlineStats
struct UOnlineStatsInterfaceEOS_FlushOnlineStats_Params
{
	struct FName                                       SessionName;                                               // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.WriteOnlineStats
struct UOnlineStatsInterfaceEOS_WriteOnlineStats_Params
{
	struct FName                                       SessionName;                                               // (Parm)
	struct FUniqueNetId                                Player;                                                    // (Parm, NeedCtorLink)
	class UOnlineStatsWrite*                           StatsWrite;                                                // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.FreeStats
struct UOnlineStatsInterfaceEOS_FreeStats_Params
{
	class UOnlineStatsRead*                            StatsRead;                                                 // (Parm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearReadOnlineStatsCompleteDelegate
struct UOnlineStatsInterfaceEOS_ClearReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddReadOnlineStatsCompleteDelegate
struct UOnlineStatsInterfaceEOS_AddReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnReadOnlineStatsComplete
struct UOnlineStatsInterfaceEOS_OnReadOnlineStatsComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsByRankAroundPlayer
struct UOnlineStatsInterfaceEOS_ReadOnlineStatsByRankAroundPlayer_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	class UOnlineStatsRead*                            StatsRead;                                                 // (Parm)
	int                                                NumRows;                                                   // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsByRank
struct UOnlineStatsInterfaceEOS_ReadOnlineStatsByRank_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	class UOnlineStatsRead*                            StatsRead;                                                 // (Parm)
	int                                                StartIndex;                                                // (OptionalParm, Parm)
	int                                                NumToRead;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsForFriends
struct UOnlineStatsInterfaceEOS_ReadOnlineStatsForFriends_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	class UOnlineStatsRead*                            StatsRead;                                                 // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStats
struct UOnlineStatsInterfaceEOS_ReadOnlineStats_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FUniqueNetId>                        Players;                                                   // (Const, Parm, OutParm, NeedCtorLink)
	class UOnlineStatsRead*                            StatsRead;                                                 // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearAllDelegates
struct UOnlineUserCloudFileInterfaceEOS_ClearAllDelegates_Params
{
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearDeleteUserFileCompleteDelegate
struct UOnlineUserCloudFileInterfaceEOS_ClearDeleteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteUserFileCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddDeleteUserFileCompleteDelegate
struct UOnlineUserCloudFileInterfaceEOS_AddDeleteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteUserFileCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.DeleteUserFile
struct UOnlineUserCloudFileInterfaceEOS_DeleteUserFile_Params
{
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                  // (Parm, NeedCtorLink)
	bool                                               bShouldCloudDelete;                                        // (Parm)
	bool                                               bShouldLocallyDelete;                                      // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnDeleteUserFileComplete
struct UOnlineUserCloudFileInterfaceEOS_OnDeleteUserFileComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearWriteUserFileCompleteDelegate
struct UOnlineUserCloudFileInterfaceEOS_ClearWriteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteUserFileCompleteDelegate;                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddWriteUserFileCompleteDelegate
struct UOnlineUserCloudFileInterfaceEOS_AddWriteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteUserFileCompleteDelegate;                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.WriteUserFile
struct UOnlineUserCloudFileInterfaceEOS_WriteUserFile_Params
{
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                  // (Parm, NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                              // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnWriteUserFileComplete
struct UOnlineUserCloudFileInterfaceEOS_OnWriteUserFileComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearReadUserFileCompleteDelegate
struct UOnlineUserCloudFileInterfaceEOS_ClearReadUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadUserFileCompleteDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddReadUserFileCompleteDelegate
struct UOnlineUserCloudFileInterfaceEOS_AddReadUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadUserFileCompleteDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ReadUserFile
struct UOnlineUserCloudFileInterfaceEOS_ReadUserFile_Params
{
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnReadUserFileComplete
struct UOnlineUserCloudFileInterfaceEOS_OnReadUserFileComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.GetUserFileList
struct UOnlineUserCloudFileInterfaceEOS_GetUserFileList_Params
{
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
	TArray<struct FEmsFile>                            UserFiles;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearEnumerateUserFileCompleteDelegate
struct UOnlineUserCloudFileInterfaceEOS_ClearEnumerateUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             EnumerateUserFileCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddEnumerateUserFileCompleteDelegate
struct UOnlineUserCloudFileInterfaceEOS_AddEnumerateUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             EnumerateUserFileCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.EnumerateUserFiles
struct UOnlineUserCloudFileInterfaceEOS_EnumerateUserFiles_Params
{
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnEnumerateUserFilesComplete
struct UOnlineUserCloudFileInterfaceEOS_OnEnumerateUserFilesComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearFile
struct UOnlineUserCloudFileInterfaceEOS_ClearFile_Params
{
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearFiles
struct UOnlineUserCloudFileInterfaceEOS_ClearFiles_Params
{
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.GetFileContents
struct UOnlineUserCloudFileInterfaceEOS_GetFileContents_Params
{
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                  // (Parm, NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                              // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6.__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6
struct U__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6___OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6_Params
{
	int                                                _;                                                         // (Parm)
	struct FString                                     PlatformAuthTicket;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD
struct U__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD___OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD_Params
{
	bool                                               bSuccess;                                                  // (Parm)
	struct FString                                     Code;                                                      // (Parm, NeedCtorLink)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
