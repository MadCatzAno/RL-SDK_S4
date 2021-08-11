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
// Functions
//---------------------------------------------------------------------------

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ManuallyTickEOSPlatform
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::ManuallyTickEOSPlatform()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ManuallyTickEOSPlatform");

	UOnlineSubsystemEOS_ManuallyTickEOSPlatform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.FormatCurrency
// ()
// Parameters:
// struct FString                 Currency                       (Parm, NeedCtorLink)
// int                            Price                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UOnlineSubsystemEOS::FormatCurrency(const struct FString& Currency, int Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.FormatCurrency");

	UOnlineSubsystemEOS_FormatCurrency_Params params;
	params.Currency = Currency;
	params.Price = Price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearMicroTxnResponseDelegate
// ()
// Parameters:
// struct FScriptDelegate         ResponseMicroTxnDelegate       (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::ClearMicroTxnResponseDelegate(const struct FScriptDelegate& ResponseMicroTxnDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearMicroTxnResponseDelegate");

	UOnlineSubsystemEOS_ClearMicroTxnResponseDelegate_Params params;
	params.ResponseMicroTxnDelegate = ResponseMicroTxnDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddMicroTxnResponseDelegate
// ()
// Parameters:
// struct FScriptDelegate         ResponseMicroTxnDelegate       (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::AddMicroTxnResponseDelegate(const struct FScriptDelegate& ResponseMicroTxnDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddMicroTxnResponseDelegate");

	UOnlineSubsystemEOS_AddMicroTxnResponseDelegate_Params params;
	params.ResponseMicroTxnDelegate = ResponseMicroTxnDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetAppPriceInfo
// ()
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm, NeedCtorLink)
// TArray<struct FName>           AppNames                       (Const, Parm, OutParm, NeedCtorLink)
// struct FScriptDelegate         Callback                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::GetAppPriceInfo(struct FUniqueNetId* PlayerID, TArray<struct FName>* AppNames, const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetAppPriceInfo");

	UOnlineSubsystemEOS_GetAppPriceInfo_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;
	if (AppNames != nullptr)
		*AppNames = params.AppNames;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.HandleBootMessage
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::HandleBootMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.HandleBootMessage");

	UOnlineSubsystemEOS_HandleBootMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetOverlayEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::GetOverlayEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetOverlayEnabled");

	UOnlineSubsystemEOS_GetOverlayEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RefreshNetworkErrorToggle
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::RefreshNetworkErrorToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.RefreshNetworkErrorToggle");

	UOnlineSubsystemEOS_RefreshNetworkErrorToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUserRestoredDelegate
// ()
// Parameters:
// struct FScriptDelegate         UserRestoredDelegate           (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::ClearUserRestoredDelegate(const struct FScriptDelegate& UserRestoredDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUserRestoredDelegate");

	UOnlineSubsystemEOS_ClearUserRestoredDelegate_Params params;
	params.UserRestoredDelegate = UserRestoredDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUserRestoredDelegate
// ()
// Parameters:
// struct FScriptDelegate         UserRestoredDelegate           (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::AddUserRestoredDelegate(const struct FScriptDelegate& UserRestoredDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUserRestoredDelegate");

	UOnlineSubsystemEOS_AddUserRestoredDelegate_Params params;
	params.UserRestoredDelegate = UserRestoredDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUserRestored
// ()
// Parameters:
// unsigned char                  ControllerId                   (Parm)
void UOnlineSubsystemEOS::OnUserRestored(unsigned char ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUserRestored");

	UOnlineSubsystemEOS_OnUserRestored_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUserOrphanedDelegate
// ()
// Parameters:
// struct FScriptDelegate         UserOrphanedDelegate           (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::ClearUserOrphanedDelegate(const struct FScriptDelegate& UserOrphanedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUserOrphanedDelegate");

	UOnlineSubsystemEOS_ClearUserOrphanedDelegate_Params params;
	params.UserOrphanedDelegate = UserOrphanedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUserOrphanedDelegate
// ()
// Parameters:
// struct FScriptDelegate         UserOrphanedDelegate           (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::AddUserOrphanedDelegate(const struct FScriptDelegate& UserOrphanedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUserOrphanedDelegate");

	UOnlineSubsystemEOS_AddUserOrphanedDelegate_Params params;
	params.UserOrphanedDelegate = UserOrphanedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUserOrphaned
// ()
// Parameters:
// unsigned char                  ControllerId                   (Parm)
void UOnlineSubsystemEOS::OnUserOrphaned(unsigned char ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUserOrphaned");

	UOnlineSubsystemEOS_OnUserOrphaned_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForItemsAsync
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FString>         Targets                        (Parm, NeedCtorLink)
// struct FScriptDelegate         OnStorePurchaseCompleteDelegate (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::OpenStoreForItemsAsync(unsigned char LocalUserNum, TArray<struct FString> Targets, const struct FScriptDelegate& OnStorePurchaseCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForItemsAsync");

	UOnlineSubsystemEOS_OpenStoreForItemsAsync_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Targets = Targets;
	params.OnStorePurchaseCompleteDelegate = OnStorePurchaseCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnStorePurchaseCompleteDelegate
// ()
void UOnlineSubsystemEOS::OnStorePurchaseCompleteDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnStorePurchaseCompleteDelegate");

	UOnlineSubsystemEOS_OnStorePurchaseCompleteDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForItems
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FString>         Targets                        (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::OpenStoreForItems(unsigned char LocalUserNum, TArray<struct FString> Targets)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForItems");

	UOnlineSubsystemEOS_OpenStoreForItems_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Targets = Targets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForDLC
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FName                   DLC                            (Parm)
void UOnlineSubsystemEOS::OpenStoreForDLC(unsigned char LocalUserNum, const struct FName& DLC)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForDLC");

	UOnlineSubsystemEOS_OpenStoreForDLC_Params params;
	params.LocalUserNum = LocalUserNum;
	params.DLC = DLC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenErrorDialog
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<Engine_EPS4ErrorDialog> ErrorCode                      (Parm)
void UOnlineSubsystemEOS::OpenErrorDialog(unsigned char LocalUserNum, TEnumAsByte<Engine_EPS4ErrorDialog> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenErrorDialog");

	UOnlineSubsystemEOS_OpenErrorDialog_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenPS4DisplayMode
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<Engine_EPS4DisplayMode> DisplayMode                    (Parm)
// TArray<struct FString>         Targets                        (OptionalParm, Parm, NeedCtorLink)
// int                            ServiceLabel                   (OptionalParm, Parm)
void UOnlineSubsystemEOS::OpenPS4DisplayMode(unsigned char LocalUserNum, TEnumAsByte<Engine_EPS4DisplayMode> DisplayMode, TArray<struct FString> Targets, int ServiceLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenPS4DisplayMode");

	UOnlineSubsystemEOS_OpenPS4DisplayMode_Params params;
	params.LocalUserNum = LocalUserNum;
	params.DisplayMode = DisplayMode;
	params.Targets = Targets;
	params.ServiceLabel = ServiceLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ResetControllerColor
// ()
// Parameters:
// int                            ControllerId                   (Parm)
void UOnlineSubsystemEOS::ResetControllerColor(int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ResetControllerColor");

	UOnlineSubsystemEOS_ResetControllerColor_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetControllerColor
// ()
// Parameters:
// int                            ControllerId                   (Parm)
// struct FColor                  NewColor                       (Parm)
void UOnlineSubsystemEOS::SetControllerColor(int ControllerId, const struct FColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetControllerColor");

	UOnlineSubsystemEOS_SetControllerColor_Params params;
	params.ControllerId = ControllerId;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.InitializeTrophyAPI
// ()
void UOnlineSubsystemEOS::InitializeTrophyAPI()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.InitializeTrophyAPI");

	UOnlineSubsystemEOS_InitializeTrophyAPI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AnyPlayerChatRestricted
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::AnyPlayerChatRestricted()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AnyPlayerChatRestricted");

	UOnlineSubsystemEOS_AnyPlayerChatRestricted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUnlockedDLCChangeDelegate
// ()
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::ClearUnlockedDLCChangeDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUnlockedDLCChangeDelegate");

	UOnlineSubsystemEOS_ClearUnlockedDLCChangeDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUnlockedDLCChangeDelegate
// ()
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::AddUnlockedDLCChangeDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUnlockedDLCChangeDelegate");

	UOnlineSubsystemEOS_AddUnlockedDLCChangeDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetUnlockedDLC
// ()
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)
TArray<struct FName> UOnlineSubsystemEOS::GetUnlockedDLC()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetUnlockedDLC");

	UOnlineSubsystemEOS_GetUnlockedDLC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUnlockedDLCChange
// ()
void UOnlineSubsystemEOS::OnUnlockedDLCChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUnlockedDLCChange");

	UOnlineSubsystemEOS_OnUnlockedDLCChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UpdateSessionStatusFromPlayers
// ()
// Parameters:
// int                            CurrentPlayerCount             (Parm)
// int                            numBotPlayers                  (Parm)
void UOnlineSubsystemEOS::UpdateSessionStatusFromPlayers(int CurrentPlayerCount, int numBotPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.UpdateSessionStatusFromPlayers");

	UOnlineSubsystemEOS_UpdateSessionStatusFromPlayers_Params params;
	params.CurrentPlayerCount = CurrentPlayerCount;
	params.numBotPlayers = numBotPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearErrorDialogClosedDelegate
// ()
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::ClearErrorDialogClosedDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearErrorDialogClosedDelegate");

	UOnlineSubsystemEOS_ClearErrorDialogClosedDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddErrorDialogClosedDelegate
// ()
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::AddErrorDialogClosedDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddErrorDialogClosedDelegate");

	UOnlineSubsystemEOS_AddErrorDialogClosedDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnErrorDialogClosed
// ()
// Parameters:
// int                            LocalUserNum                   (Parm)
void UOnlineSubsystemEOS::OnErrorDialogClosed(int LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnErrorDialogClosed");

	UOnlineSubsystemEOS_OnErrorDialogClosed_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCommerceDialogClosedDelegate
// ()
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::ClearCommerceDialogClosedDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCommerceDialogClosedDelegate");

	UOnlineSubsystemEOS_ClearCommerceDialogClosedDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCommerceDialogClosedDelegate
// ()
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::AddCommerceDialogClosedDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCommerceDialogClosedDelegate");

	UOnlineSubsystemEOS_AddCommerceDialogClosedDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCommerceDialogClosed
// ()
void UOnlineSubsystemEOS::OnCommerceDialogClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCommerceDialogClosed");

	UOnlineSubsystemEOS_OnCommerceDialogClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetCurrentConnectionStatus
// ()
// Parameters:
// TEnumAsByte<Engine_EOnlineServerConnectionStatus> ReturnValue                    (Parm, OutParm, ReturnParm)
TEnumAsByte<Engine_EOnlineServerConnectionStatus> UOnlineSubsystemEOS::GetCurrentConnectionStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetCurrentConnectionStatus");

	UOnlineSubsystemEOS_GetCurrentConnectionStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCloseKickPlayerDialogDelegate
// ()
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::ClearCloseKickPlayerDialogDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCloseKickPlayerDialogDelegate");

	UOnlineSubsystemEOS_ClearCloseKickPlayerDialogDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCloseKickPlayerDialogDelegate
// ()
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::AddCloseKickPlayerDialogDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCloseKickPlayerDialogDelegate");

	UOnlineSubsystemEOS_AddCloseKickPlayerDialogDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCloseKickPlayerDialog
// ()
void UOnlineSubsystemEOS::OnCloseKickPlayerDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCloseKickPlayerDialog");

	UOnlineSubsystemEOS_OnCloseKickPlayerDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnPlayerTalkingStateChange
// ()
// Parameters:
// struct FUniqueNetId            Player                         (Parm, NeedCtorLink)
// bool                           bIsTalking                     (Parm)
void UOnlineSubsystemEOS::OnPlayerTalkingStateChange(const struct FUniqueNetId& Player, bool bIsTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnPlayerTalkingStateChange");

	UOnlineSubsystemEOS_OnPlayerTalkingStateChange_Params params;
	params.Player = Player;
	params.bIsTalking = bIsTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetVoiceReceiveVolume
// ()
// Parameters:
// float                          VoiceVolume                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::SetVoiceReceiveVolume(float VoiceVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetVoiceReceiveVolume");

	UOnlineSubsystemEOS_SetVoiceReceiveVolume_Params params;
	params.VoiceVolume = VoiceVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetDLCPurchaseTime
// ()
// Parameters:
// struct FName                   AppName                        (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)
int UOnlineSubsystemEOS::GetDLCPurchaseTime(const struct FName& AppName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetDLCPurchaseTime");

	UOnlineSubsystemEOS_GetDLCPurchaseTime_Params params;
	params.AppName = AppName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SaveKey
// ()
// Parameters:
// struct FString                 ProductKey                     (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::SaveKey(const struct FString& ProductKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SaveKey");

	UOnlineSubsystemEOS_SaveKey_Params params;
	params.ProductKey = ProductKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetLocalAccountNames
// ()
// Parameters:
// TArray<struct FString>         Accounts                       (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::GetLocalAccountNames(TArray<struct FString>* Accounts)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetLocalAccountNames");

	UOnlineSubsystemEOS_GetLocalAccountNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Accounts != nullptr)
		*Accounts = params.Accounts;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.DeleteLocalAccount
// ()
// Parameters:
// struct FString                 Username                       (Parm, NeedCtorLink)
// struct FString                 Password                       (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::DeleteLocalAccount(const struct FString& Username, const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.DeleteLocalAccount");

	UOnlineSubsystemEOS_DeleteLocalAccount_Params params;
	params.Username = Username;
	params.Password = Password;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RenameLocalAccount
// ()
// Parameters:
// struct FString                 NewUserName                    (Parm, NeedCtorLink)
// struct FString                 OldUserName                    (Parm, NeedCtorLink)
// struct FString                 Password                       (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::RenameLocalAccount(const struct FString& NewUserName, const struct FString& OldUserName, const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.RenameLocalAccount");

	UOnlineSubsystemEOS_RenameLocalAccount_Params params;
	params.NewUserName = NewUserName;
	params.OldUserName = OldUserName;
	params.Password = Password;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.CreateLocalAccount
// ()
// Parameters:
// struct FString                 Username                       (Parm, NeedCtorLink)
// struct FString                 Password                       (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::CreateLocalAccount(const struct FString& Username, const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.CreateLocalAccount");

	UOnlineSubsystemEOS_CreateLocalAccount_Params params;
	params.Username = Username;
	params.Password = Password;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCreateOnlineAccountCompletedDelegate
// ()
// Parameters:
// struct FScriptDelegate         AccountCreateDelegate          (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::ClearCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCreateOnlineAccountCompletedDelegate");

	UOnlineSubsystemEOS_ClearCreateOnlineAccountCompletedDelegate_Params params;
	params.AccountCreateDelegate = AccountCreateDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCreateOnlineAccountCompletedDelegate
// ()
// Parameters:
// struct FScriptDelegate         AccountCreateDelegate          (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::AddCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCreateOnlineAccountCompletedDelegate");

	UOnlineSubsystemEOS_AddCreateOnlineAccountCompletedDelegate_Params params;
	params.AccountCreateDelegate = AccountCreateDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCreateOnlineAccountCompleted
// ()
// Parameters:
// TEnumAsByte<Engine_EOnlineAccountCreateStatus> ErrorStatus                    (Parm)
void UOnlineSubsystemEOS::OnCreateOnlineAccountCompleted(TEnumAsByte<Engine_EOnlineAccountCreateStatus> ErrorStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCreateOnlineAccountCompleted");

	UOnlineSubsystemEOS_OnCreateOnlineAccountCompleted_Params params;
	params.ErrorStatus = ErrorStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.CreateOnlineAccount
// ()
// Parameters:
// struct FString                 Username                       (Parm, NeedCtorLink)
// struct FString                 Password                       (Parm, NeedCtorLink)
// struct FString                 EmailAddress                   (Parm, NeedCtorLink)
// struct FString                 ProductKey                     (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::CreateOnlineAccount(const struct FString& Username, const struct FString& Password, const struct FString& EmailAddress, const struct FString& ProductKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.CreateOnlineAccount");

	UOnlineSubsystemEOS_CreateOnlineAccount_Params params;
	params.Username = Username;
	params.Password = Password;
	params.EmailAddress = EmailAddress;
	params.ProductKey = ProductKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsKeyValid
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::IsKeyValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsKeyValid");

	UOnlineSubsystemEOS_IsKeyValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearStorageDeviceChangeDelegate
// ()
// Parameters:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::ClearStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearStorageDeviceChangeDelegate");

	UOnlineSubsystemEOS_ClearStorageDeviceChangeDelegate_Params params;
	params.StorageDeviceChangeDelegate = StorageDeviceChangeDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddStorageDeviceChangeDelegate
// ()
// Parameters:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::AddStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddStorageDeviceChangeDelegate");

	UOnlineSubsystemEOS_AddStorageDeviceChangeDelegate_Params params;
	params.StorageDeviceChangeDelegate = StorageDeviceChangeDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnStorageDeviceChange
// ()
void UOnlineSubsystemEOS::OnStorageDeviceChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnStorageDeviceChange");

	UOnlineSubsystemEOS_OnStorageDeviceChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetNATType
// ()
// Parameters:
// TEnumAsByte<Engine_ENATType>   ReturnValue                    (Parm, OutParm, ReturnParm)
TEnumAsByte<Engine_ENATType> UOnlineSubsystemEOS::GetNATType()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetNATType");

	UOnlineSubsystemEOS_GetNATType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearConnectionStatusChangeDelegate
// ()
// Parameters:
// struct FScriptDelegate         ConnectionStatusDelegate       (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::ClearConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearConnectionStatusChangeDelegate");

	UOnlineSubsystemEOS_ClearConnectionStatusChangeDelegate_Params params;
	params.ConnectionStatusDelegate = ConnectionStatusDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddConnectionStatusChangeDelegate
// ()
// Parameters:
// struct FScriptDelegate         ConnectionStatusDelegate       (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::AddConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddConnectionStatusChangeDelegate");

	UOnlineSubsystemEOS_AddConnectionStatusChangeDelegate_Params params;
	params.ConnectionStatusDelegate = ConnectionStatusDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnConnectionStatusChange
// ()
// Parameters:
// TEnumAsByte<Engine_EOnlineServerConnectionStatus> ConnectionStatus               (Parm)
void UOnlineSubsystemEOS::OnConnectionStatusChange(TEnumAsByte<Engine_EOnlineServerConnectionStatus> ConnectionStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnConnectionStatusChange");

	UOnlineSubsystemEOS_OnConnectionStatusChange_Params params;
	params.ConnectionStatus = ConnectionStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsControllerConnected
// ()
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::IsControllerConnected(int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsControllerConnected");

	UOnlineSubsystemEOS_IsControllerConnected_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearControllerChangeDelegate
// ()
// Parameters:
// struct FScriptDelegate         ControllerChangeDelegate       (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::ClearControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearControllerChangeDelegate");

	UOnlineSubsystemEOS_ClearControllerChangeDelegate_Params params;
	params.ControllerChangeDelegate = ControllerChangeDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddControllerChangeDelegate
// ()
// Parameters:
// struct FScriptDelegate         ControllerChangeDelegate       (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::AddControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddControllerChangeDelegate");

	UOnlineSubsystemEOS_AddControllerChangeDelegate_Params params;
	params.ControllerChangeDelegate = ControllerChangeDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnControllerChange
// ()
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           bIsConnected                   (Parm)
void UOnlineSubsystemEOS::OnControllerChange(int ControllerId, bool bIsConnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnControllerChange");

	UOnlineSubsystemEOS_OnControllerChange_Params params;
	params.ControllerId = ControllerId;
	params.bIsConnected = bIsConnected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetNetworkNotificationPosition
// ()
// Parameters:
// TEnumAsByte<Engine_ENetworkNotificationPosition> NewPos                         (Parm)
void UOnlineSubsystemEOS::SetNetworkNotificationPosition(TEnumAsByte<Engine_ENetworkNotificationPosition> NewPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetNetworkNotificationPosition");

	UOnlineSubsystemEOS_SetNetworkNotificationPosition_Params params;
	params.NewPos = NewPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetNetworkNotificationPosition
// ()
// Parameters:
// TEnumAsByte<Engine_ENetworkNotificationPosition> ReturnValue                    (Parm, OutParm, ReturnParm)
TEnumAsByte<Engine_ENetworkNotificationPosition> UOnlineSubsystemEOS::GetNetworkNotificationPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetNetworkNotificationPosition");

	UOnlineSubsystemEOS_GetNetworkNotificationPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.NotifyExternalUIChanged
// ()
// Parameters:
// bool                           bIsOpening                     (Parm)
void UOnlineSubsystemEOS::NotifyExternalUIChanged(bool bIsOpening)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.NotifyExternalUIChanged");

	UOnlineSubsystemEOS_NotifyExternalUIChanged_Params params;
	params.bIsOpening = bIsOpening;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearExternalUIChangeDelegate
// ()
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::ClearExternalUIChangeDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearExternalUIChangeDelegate");

	UOnlineSubsystemEOS_ClearExternalUIChangeDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddExternalUIChangeDelegate
// ()
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::AddExternalUIChangeDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddExternalUIChangeDelegate");

	UOnlineSubsystemEOS_AddExternalUIChangeDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnExternalUIChange
// ()
// Parameters:
// bool                           bIsOpening                     (Parm)
void UOnlineSubsystemEOS::OnExternalUIChange(bool bIsOpening)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnExternalUIChange");

	UOnlineSubsystemEOS_OnExternalUIChange_Params params;
	params.bIsOpening = bIsOpening;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearLinkStatusChangeDelegate
// ()
// Parameters:
// struct FScriptDelegate         LinkStatusDelegate             (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::ClearLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearLinkStatusChangeDelegate");

	UOnlineSubsystemEOS_ClearLinkStatusChangeDelegate_Params params;
	params.LinkStatusDelegate = LinkStatusDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddLinkStatusChangeDelegate
// ()
// Parameters:
// struct FScriptDelegate         LinkStatusDelegate             (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::AddLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddLinkStatusChangeDelegate");

	UOnlineSubsystemEOS_AddLinkStatusChangeDelegate_Params params;
	params.LinkStatusDelegate = LinkStatusDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnLinkStatusChange
// ()
// Parameters:
// bool                           bIsConnected                   (Parm)
void UOnlineSubsystemEOS::OnLinkStatusChange(bool bIsConnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnLinkStatusChange");

	UOnlineSubsystemEOS_OnLinkStatusChange_Params params;
	params.bIsConnected = bIsConnected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.HasLinkConnection
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::HasLinkConnection()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.HasLinkConnection");

	UOnlineSubsystemEOS_HasLinkConnection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterStatGuid
// ()
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm, NeedCtorLink)
// struct FString                 ClientStatGuid                 (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::RegisterStatGuid(const struct FUniqueNetId& PlayerID, struct FString* ClientStatGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterStatGuid");

	UOnlineSubsystemEOS_RegisterStatGuid_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ClientStatGuid != nullptr)
		*ClientStatGuid = params.ClientStatGuid;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetClientStatGuid
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UOnlineSubsystemEOS::GetClientStatGuid()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetClientStatGuid");

	UOnlineSubsystemEOS_GetClientStatGuid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearRegisterHostStatGuidCompleteDelegateDelegate
// ()
// Parameters:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::ClearRegisterHostStatGuidCompleteDelegateDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearRegisterHostStatGuidCompleteDelegateDelegate");

	UOnlineSubsystemEOS_ClearRegisterHostStatGuidCompleteDelegateDelegate_Params params;
	params.RegisterHostStatGuidCompleteDelegate = RegisterHostStatGuidCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddRegisterHostStatGuidCompleteDelegate
// ()
// Parameters:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::AddRegisterHostStatGuidCompleteDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddRegisterHostStatGuidCompleteDelegate");

	UOnlineSubsystemEOS_AddRegisterHostStatGuidCompleteDelegate_Params params;
	params.RegisterHostStatGuidCompleteDelegate = RegisterHostStatGuidCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnFlushOnlineStatsComplete
// ()
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)
void UOnlineSubsystemEOS::OnFlushOnlineStatsComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnFlushOnlineStatsComplete");

	UOnlineSubsystemEOS_OnFlushOnlineStatsComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnRegisterHostStatGuidComplete
// ()
// Parameters:
// bool                           bWasSuccessful                 (Parm)
void UOnlineSubsystemEOS::OnRegisterHostStatGuidComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnRegisterHostStatGuidComplete");

	UOnlineSubsystemEOS_OnRegisterHostStatGuidComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterHostStatGuid
// ()
// Parameters:
// struct FString                 HostStatGuid                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::RegisterHostStatGuid(struct FString* HostStatGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterHostStatGuid");

	UOnlineSubsystemEOS_RegisterHostStatGuid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HostStatGuid != nullptr)
		*HostStatGuid = params.HostStatGuid;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetHostStatGuid
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UOnlineSubsystemEOS::GetHostStatGuid()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetHostStatGuid");

	UOnlineSubsystemEOS_GetHostStatGuid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.WriteOnlinePlayerScores
// ()
// Parameters:
// TArray<struct FOnlinePlayerScore> PlayerScores                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::WriteOnlinePlayerScores(TArray<struct FOnlinePlayerScore>* PlayerScores)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.WriteOnlinePlayerScores");

	UOnlineSubsystemEOS_WriteOnlinePlayerScores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerScores != nullptr)
		*PlayerScores = params.PlayerScores;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.FreeStats
// ()
// Parameters:
// class UOnlineStatsRead*        StatsRead                      (Parm)
void UOnlineSubsystemEOS::FreeStats(class UOnlineStatsRead* StatsRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.FreeStats");

	UOnlineSubsystemEOS_FreeStats_Params params;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearReadOnlineStatsCompleteDelegate
// ()
// Parameters:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::ClearReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearReadOnlineStatsCompleteDelegate");

	UOnlineSubsystemEOS_ClearReadOnlineStatsCompleteDelegate_Params params;
	params.ReadOnlineStatsCompleteDelegate = ReadOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddReadOnlineStatsCompleteDelegate
// ()
// Parameters:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::AddReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddReadOnlineStatsCompleteDelegate");

	UOnlineSubsystemEOS_AddReadOnlineStatsCompleteDelegate_Params params;
	params.ReadOnlineStatsCompleteDelegate = ReadOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnReadOnlineStatsComplete
// ()
// Parameters:
// bool                           bWasSuccessful                 (Parm)
void UOnlineSubsystemEOS::OnReadOnlineStatsComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnReadOnlineStatsComplete");

	UOnlineSubsystemEOS_OnReadOnlineStatsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsByRankAroundPlayer
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// int                            NumRows                        (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::ReadOnlineStatsByRankAroundPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsByRankAroundPlayer");

	UOnlineSubsystemEOS_ReadOnlineStatsByRankAroundPlayer_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;
	params.NumRows = NumRows;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsByRank
// ()
// Parameters:
// class UOnlineStatsRead*        StatsRead                      (Parm)
// int                            StartIndex                     (OptionalParm, Parm)
// int                            NumToRead                      (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::ReadOnlineStatsByRank(class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsByRank");

	UOnlineSubsystemEOS_ReadOnlineStatsByRank_Params params;
	params.StatsRead = StatsRead;
	params.StartIndex = StartIndex;
	params.NumToRead = NumToRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsForFriends
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::ReadOnlineStatsForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsForFriends");

	UOnlineSubsystemEOS_ReadOnlineStatsForFriends_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStats
// ()
// Parameters:
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::ReadOnlineStats(TArray<struct FUniqueNetId>* Players, class UOnlineStatsRead* StatsRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStats");

	UOnlineSubsystemEOS_ReadOnlineStats_Params params;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnmuteAll
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::UnmuteAll(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnmuteAll");

	UOnlineSubsystemEOS_UnmuteAll_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.MuteAll
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bAllowFriends                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::MuteAll(unsigned char LocalUserNum, bool bAllowFriends)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.MuteAll");

	UOnlineSubsystemEOS_MuteAll_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAllowFriends = bAllowFriends;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetSpeechRecognitionObject
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class USpeechRecognition*      SpeechRecogObj                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::SetSpeechRecognitionObject(unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetSpeechRecognitionObject");

	UOnlineSubsystemEOS_SetSpeechRecognitionObject_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SpeechRecogObj = SpeechRecogObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SelectVocabulary
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            VocabularyId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::SelectVocabulary(unsigned char LocalUserNum, int VocabularyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SelectVocabulary");

	UOnlineSubsystemEOS_SelectVocabulary_Params params;
	params.LocalUserNum = LocalUserNum;
	params.VocabularyId = VocabularyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearRecognitionCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         RecognitionDelegate            (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::ClearRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearRecognitionCompleteDelegate");

	UOnlineSubsystemEOS_ClearRecognitionCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RecognitionDelegate = RecognitionDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddRecognitionCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         RecognitionDelegate            (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::AddRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddRecognitionCompleteDelegate");

	UOnlineSubsystemEOS_AddRecognitionCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RecognitionDelegate = RecognitionDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnRecognitionComplete
// ()
void UOnlineSubsystemEOS::OnRecognitionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnRecognitionComplete");

	UOnlineSubsystemEOS_OnRecognitionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetRecognitionResults
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FSpeechRecognizedWord> Words                          (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::GetRecognitionResults(unsigned char LocalUserNum, TArray<struct FSpeechRecognizedWord>* Words)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetRecognitionResults");

	UOnlineSubsystemEOS_GetRecognitionResults_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Words != nullptr)
		*Words = params.Words;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StopSpeechRecognition
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::StopSpeechRecognition(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.StopSpeechRecognition");

	UOnlineSubsystemEOS_StopSpeechRecognition_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StartSpeechRecognition
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::StartSpeechRecognition(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.StartSpeechRecognition");

	UOnlineSubsystemEOS_StartSpeechRecognition_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StopNetworkedVoice
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
void UOnlineSubsystemEOS::StopNetworkedVoice(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.StopNetworkedVoice");

	UOnlineSubsystemEOS_StopNetworkedVoice_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StartNetworkedVoice
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
void UOnlineSubsystemEOS::StartNetworkedVoice(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.StartNetworkedVoice");

	UOnlineSubsystemEOS_StartNetworkedVoice_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearPlayerTalkingDelegate
// ()
// Parameters:
// struct FScriptDelegate         TalkerDelegate                 (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::ClearPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearPlayerTalkingDelegate");

	UOnlineSubsystemEOS_ClearPlayerTalkingDelegate_Params params;
	params.TalkerDelegate = TalkerDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddPlayerTalkingDelegate
// ()
// Parameters:
// struct FScriptDelegate         TalkerDelegate                 (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::AddPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddPlayerTalkingDelegate");

	UOnlineSubsystemEOS_AddPlayerTalkingDelegate_Params params;
	params.TalkerDelegate = TalkerDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnPlayerTalking
// ()
// Parameters:
// struct FUniqueNetId            Player                         (Parm, NeedCtorLink)
void UOnlineSubsystemEOS::OnPlayerTalking(const struct FUniqueNetId& Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnPlayerTalking");

	UOnlineSubsystemEOS_OnPlayerTalking_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnmuteRemoteTalker
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::UnmuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnmuteRemoteTalker");

	UOnlineSubsystemEOS_UnmuteRemoteTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.MuteRemoteTalker
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::MuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.MuteRemoteTalker");

	UOnlineSubsystemEOS_MuteRemoteTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetRemoteTalkerPriority
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm, NeedCtorLink)
// int                            Priority                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::SetRemoteTalkerPriority(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, int Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetRemoteTalkerPriority");

	UOnlineSubsystemEOS_SetRemoteTalkerPriority_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsHeadsetPresent
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::IsHeadsetPresent(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsHeadsetPresent");

	UOnlineSubsystemEOS_IsHeadsetPresent_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsRemotePlayerTalking
// ()
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::IsRemotePlayerTalking(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsRemotePlayerTalking");

	UOnlineSubsystemEOS_IsRemotePlayerTalking_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsLocalPlayerTalking
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::IsLocalPlayerTalking(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsLocalPlayerTalking");

	UOnlineSubsystemEOS_IsLocalPlayerTalking_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnregisterRemoteTalker
// ()
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::UnregisterRemoteTalker(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnregisterRemoteTalker");

	UOnlineSubsystemEOS_UnregisterRemoteTalker_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterRemoteTalker
// ()
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::RegisterRemoteTalker(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterRemoteTalker");

	UOnlineSubsystemEOS_RegisterRemoteTalker_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnregisterLocalTalker
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::UnregisterLocalTalker(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnregisterLocalTalker");

	UOnlineSubsystemEOS_UnregisterLocalTalker_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterLocalTalker
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::RegisterLocalTalker(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterLocalTalker");

	UOnlineSubsystemEOS_RegisterLocalTalker_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetPlayerUniqueNetIdFromIndex
// ()
// Parameters:
// int                            UserIndex                      (Parm)
// struct FUniqueNetId            ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FUniqueNetId UOnlineSubsystemEOS::GetPlayerUniqueNetIdFromIndex(int UserIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetPlayerUniqueNetIdFromIndex");

	UOnlineSubsystemEOS_GetPlayerUniqueNetIdFromIndex_Params params;
	params.UserIndex = UserIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetPlayerNicknameFromIndex
// ()
// Parameters:
// int                            UserIndex                      (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UOnlineSubsystemEOS::GetPlayerNicknameFromIndex(int UserIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetPlayerNicknameFromIndex");

	UOnlineSubsystemEOS_GetPlayerNicknameFromIndex_Params params;
	params.UserIndex = UserIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.Init
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.Init");

	UOnlineSubsystemEOS_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.InitEOS
// ()
// Parameters:
// struct FString                 SandboxId                      (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 DeploymentId                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineSubsystemEOS::InitEOS(struct FString* SandboxId, struct FString* DeploymentId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.InitEOS");

	UOnlineSubsystemEOS_InitEOS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SandboxId != nullptr)
		*SandboxId = params.SandboxId;
	if (DeploymentId != nullptr)
		*DeploymentId = params.DeploymentId;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.EventGetAppPriceInfoComplete
// ()
// Parameters:
// struct FName                   AppName                        (Parm)
// struct FString                 Price                          (Parm, NeedCtorLink)
// struct FString                 DiscountPrice                  (Parm, NeedCtorLink)
// int                            DiscountPercentage             (Parm)
void UOnlineSubsystemEOS::EventGetAppPriceInfoComplete(const struct FName& AppName, const struct FString& Price, const struct FString& DiscountPrice, int DiscountPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.EventGetAppPriceInfoComplete");

	UOnlineSubsystemEOS_EventGetAppPriceInfoComplete_Params params;
	params.AppName = AppName;
	params.Price = Price;
	params.DiscountPrice = DiscountPrice;
	params.DiscountPercentage = DiscountPercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnMicroTxnResponse
// ()
// Parameters:
// bool                           bAuthorized                    (Parm)
void UOnlineSubsystemEOS::OnMicroTxnResponse(bool bAuthorized)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnMicroTxnResponse");

	UOnlineSubsystemEOS_OnMicroTxnResponse_Params params;
	params.bAuthorized = bAuthorized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequiresAuthTicket
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineAuthInterfaceEOS::RequiresAuthTicket()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequiresAuthTicket");

	UOnlineAuthInterfaceEOS_RequiresAuthTicket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequestAuthTicket
// ()
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm, NeedCtorLink)
// struct FScriptDelegate         Callback                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineAuthInterfaceEOS::RequestAuthTicket(const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequestAuthTicket");

	UOnlineAuthInterfaceEOS_RequestAuthTicket_Params params;
	params.PlayerID = PlayerID;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequestMtxCode
// ()
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm, NeedCtorLink)
// struct FScriptDelegate         Callback                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineAuthInterfaceEOS::RequestMtxCode(const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequestMtxCode");

	UOnlineAuthInterfaceEOS_RequestMtxCode_Params params;
	params.PlayerID = PlayerID;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineFriendsInterfaceEOS.GetActivePlatformId
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            AccountId                      (Const, Parm, NeedCtorLink)
// struct FUniqueNetId            PlatformId                     (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineFriendsInterfaceEOS::GetActivePlatformId(unsigned char LocalUserNum, const struct FUniqueNetId& AccountId, struct FUniqueNetId* PlatformId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineFriendsInterfaceEOS.GetActivePlatformId");

	UOnlineFriendsInterfaceEOS_GetActivePlatformId_Params params;
	params.LocalUserNum = LocalUserNum;
	params.AccountId = AccountId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlatformId != nullptr)
		*PlatformId = params.PlatformId;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineFriendsInterfaceEOS.RequestLinkedAccounts
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FUniqueNetId>    AccountIds                     (Const, Parm, NeedCtorLink)
// struct FScriptDelegate         Callback                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineFriendsInterfaceEOS::RequestLinkedAccounts(unsigned char LocalUserNum, TArray<struct FUniqueNetId> AccountIds, const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineFriendsInterfaceEOS.RequestLinkedAccounts");

	UOnlineFriendsInterfaceEOS_RequestLinkedAccounts_Params params;
	params.LocalUserNum = LocalUserNum;
	params.AccountIds = AccountIds;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.AcceptGameInvite
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineGameInterfaceEOS::AcceptGameInvite(unsigned char LocalUserNum, const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.AcceptGameInvite");

	UOnlineGameInterfaceEOS_AcceptGameInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.FreeSearchResults
// ()
// Parameters:
// class UOnlineGameSearch*       Search                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineGameInterfaceEOS::FreeSearchResults(class UOnlineGameSearch* Search)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.FreeSearchResults");

	UOnlineGameInterfaceEOS_FreeSearchResults_Params params;
	params.Search = Search;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.UpdateOnlineGame
// ()
// Parameters:
// struct FName                   SessionName                    (Parm)
// class UOnlineGameSettings*     UpdatedGameSettings            (Parm)
// bool                           bShouldRefreshOnlineData       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineGameInterfaceEOS::UpdateOnlineGame(const struct FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.UpdateOnlineGame");

	UOnlineGameInterfaceEOS_UpdateOnlineGame_Params params;
	params.SessionName = SessionName;
	params.UpdatedGameSettings = UpdatedGameSettings;
	params.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.AuthWithNintendoAccountToken
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 NintendoAccountToken           (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePersistentAuthInterfaceEOS::AuthWithNintendoAccountToken(unsigned char LocalUserNum, struct FString* NintendoAccountToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.AuthWithNintendoAccountToken");

	UOnlinePersistentAuthInterfaceEOS_AuthWithNintendoAccountToken_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NintendoAccountToken != nullptr)
		*NintendoAccountToken = params.NintendoAccountToken;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetAuthExpirationTimestamp
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UDateTime*               ReturnValue                    (Parm, OutParm, ReturnParm)
class UDateTime* UOnlinePersistentAuthInterfaceEOS::GetAuthExpirationTimestamp(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetAuthExpirationTimestamp");

	UOnlinePersistentAuthInterfaceEOS_GetAuthExpirationTimestamp_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.LaunchAccountPortal
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePersistentAuthInterfaceEOS::LaunchAccountPortal(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.LaunchAccountPortal");

	UOnlinePersistentAuthInterfaceEOS_LaunchAccountPortal_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetClientCredentials
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UOnlinePersistentAuthInterfaceEOS::GetClientCredentials()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetClientCredentials");

	UOnlinePersistentAuthInterfaceEOS_GetClientCredentials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetContinuanceToken
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UOnlinePersistentAuthInterfaceEOS::GetContinuanceToken(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetContinuanceToken");

	UOnlinePersistentAuthInterfaceEOS_GetContinuanceToken_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.UseRefreshToken
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 RefreshToken                   (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePersistentAuthInterfaceEOS::UseRefreshToken(unsigned char LocalUserNum, const struct FString& RefreshToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.UseRefreshToken");

	UOnlinePersistentAuthInterfaceEOS_UseRefreshToken_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RefreshToken = RefreshToken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetRefreshToken
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UOnlinePersistentAuthInterfaceEOS::GetRefreshToken(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetRefreshToken");

	UOnlinePersistentAuthInterfaceEOS_GetRefreshToken_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.RequestPinGrantCode
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePersistentAuthInterfaceEOS::RequestPinGrantCode(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.RequestPinGrantCode");

	UOnlinePersistentAuthInterfaceEOS_RequestPinGrantCode_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowInviteUI
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 InviteText                     (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::ShowInviteUI(unsigned char LocalUserNum, const struct FString& InviteText)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowInviteUI");

	UOnlinePlayerInterfaceEOS_ShowInviteUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviteText = InviteText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowGamerCardUI
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::ShowGamerCardUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowGamerCardUI");

	UOnlinePlayerInterfaceEOS_ShowGamerCardUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetRichPresence
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 PresenceString                 (Parm, NeedCtorLink)
// struct FString                 GameDataString                 (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::SetRichPresence(unsigned char LocalUserNum, const struct FString& PresenceString, const struct FString& GameDataString)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetRichPresence");

	UOnlinePlayerInterfaceEOS_SetRichPresence_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PresenceString = PresenceString;
	params.GameDataString = GameDataString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendPresence
// ()
// Parameters:
// struct FOnlineFriend           FriendData                     (Parm, OutParm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::GetFriendPresence(struct FOnlineFriend* FriendData)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendPresence");

	UOnlinePlayerInterfaceEOS_GetFriendPresence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FriendData != nullptr)
		*FriendData = params.FriendData;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RecordPlayersRecentlyMet
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FUniqueNetId>    Players                        (Parm, OutParm, NeedCtorLink)
// struct FString                 GameDescription                (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::RecordPlayersRecentlyMet(unsigned char LocalUserNum, TArray<struct FUniqueNetId>* Players, const struct FString& GameDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RecordPlayersRecentlyMet");

	UOnlinePlayerInterfaceEOS_RecordPlayersRecentlyMet_Params params;
	params.LocalUserNum = LocalUserNum;
	params.GameDescription = GameDescription;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WordFilterSanitizeString
// ()
// Parameters:
// struct FString                 Comment                        (Const, Parm, NeedCtorLink)
// struct FScriptDelegate         SanitizeDelegate               (Parm, NeedCtorLink)
// struct FUniqueNetId            PlayerID                       (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::WordFilterSanitizeString(const struct FString& Comment, const struct FScriptDelegate& SanitizeDelegate, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WordFilterSanitizeString");

	UOnlinePlayerInterfaceEOS_WordFilterSanitizeString_Params params;
	params.Comment = Comment;
	params.SanitizeDelegate = SanitizeDelegate;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnSanitizeStringComplete
// ()
// Parameters:
// struct FWordFilterResult       Result                         (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::OnSanitizeStringComplete(const struct FWordFilterResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnSanitizeStringComplete");

	UOnlinePlayerInterfaceEOS_OnSanitizeStringComplete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HideKeyboardUI
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::HideKeyboardUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HideKeyboardUI");

	UOnlinePlayerInterfaceEOS_HideKeyboardUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerCountryDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadPlayerCountryDelegate      (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearReadPlayerCountryDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerCountryDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerCountryDelegate");

	UOnlinePlayerInterfaceEOS_ClearReadPlayerCountryDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadPlayerCountryDelegate = ReadPlayerCountryDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerCountryDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadPlayerCountryDelegate      (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddReadPlayerCountryDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerCountryDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerCountryDelegate");

	UOnlinePlayerInterfaceEOS_AddReadPlayerCountryDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadPlayerCountryDelegate = ReadPlayerCountryDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnPlayerCountryRetrieved
// ()
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm, NeedCtorLink)
// struct FString                 Country                        (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::OnPlayerCountryRetrieved(const struct FUniqueNetId& PlayerID, const struct FString& Country)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnPlayerCountryRetrieved");

	UOnlinePlayerInterfaceEOS_OnPlayerCountryRetrieved_Params params;
	params.PlayerID = PlayerID;
	params.Country = Country;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerCountry
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
void UOnlinePlayerInterfaceEOS::GetPlayerCountry(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerCountry");

	UOnlinePlayerInterfaceEOS_GetPlayerCountry_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAvatarChangeDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         AvatarDelegate                 (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearAvatarChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& AvatarDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAvatarChangeDelegate");

	UOnlinePlayerInterfaceEOS_ClearAvatarChangeDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.AvatarDelegate = AvatarDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAvatarChangeDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         AvatarDelegate                 (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddAvatarChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& AvatarDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAvatarChangeDelegate");

	UOnlinePlayerInterfaceEOS_AddAvatarChangeDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.AvatarDelegate = AvatarDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendPresenceChangeDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         PresenceDelegate               (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearFriendPresenceChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& PresenceDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendPresenceChangeDelegate");

	UOnlinePlayerInterfaceEOS_ClearFriendPresenceChangeDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PresenceDelegate = PresenceDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendPresenceChangeDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         PresenceDelegate               (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddFriendPresenceChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& PresenceDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendPresenceChangeDelegate");

	UOnlinePlayerInterfaceEOS_AddFriendPresenceChangeDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PresenceDelegate = PresenceDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.FriendPresenceChange
// ()
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::FriendPresenceChange(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.FriendPresenceChange");

	UOnlinePlayerInterfaceEOS_FriendPresenceChange_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAvatarChange
// ()
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::OnAvatarChange(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAvatarChange");

	UOnlinePlayerInterfaceEOS_OnAvatarChange_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnlockAchievement
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            AchievementId                  (Parm)
// float                          PercentComplete                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::UnlockAchievement(unsigned char LocalUserNum, int AchievementId, float PercentComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnlockAchievement");

	UOnlinePlayerInterfaceEOS_UnlockAchievement_Params params;
	params.LocalUserNum = LocalUserNum;
	params.AchievementId = AchievementId;
	params.PercentComplete = PercentComplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadAchievements
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            TitleId                        (OptionalParm, Parm)
// bool                           bShouldReadText                (OptionalParm, Parm)
// bool                           bShouldReadImages              (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::ReadAchievements(unsigned char LocalUserNum, int TitleId, bool bShouldReadText, bool bShouldReadImages)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadAchievements");

	UOnlinePlayerInterfaceEOS_ReadAchievements_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;
	params.bShouldReadText = bShouldReadText;
	params.bShouldReadImages = bShouldReadImages;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetAchievements
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FAchievementDetails> Achievements                   (Parm, OutParm, NeedCtorLink)
// int                            TitleId                        (OptionalParm, Parm)
// TEnumAsByte<Engine_EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)
TEnumAsByte<Engine_EOnlineEnumerationReadState> UOnlinePlayerInterfaceEOS::GetAchievements(unsigned char LocalUserNum, TArray<struct FAchievementDetails>* Achievements, int TitleId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetAchievements");

	UOnlinePlayerInterfaceEOS_GetAchievements_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Achievements != nullptr)
		*Achievements = params.Achievements;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadAchievementsCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadAchievementsCompleteDelegate");

	UOnlinePlayerInterfaceEOS_ClearReadAchievementsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUnlockAchievementCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUnlockAchievementCompleteDelegate");

	UOnlinePlayerInterfaceEOS_ClearUnlockAchievementCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadAchievementsCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadAchievementsCompleteDelegate");

	UOnlinePlayerInterfaceEOS_AddReadAchievementsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUnlockAchievementCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUnlockAchievementCompleteDelegate");

	UOnlinePlayerInterfaceEOS_AddUnlockAchievementCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadAchievementsComplete
// ()
// Parameters:
// int                            TitleId                        (Parm)
void UOnlinePlayerInterfaceEOS::OnReadAchievementsComplete(int TitleId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadAchievementsComplete");

	UOnlinePlayerInterfaceEOS_OnReadAchievementsComplete_Params params;
	params.TitleId = TitleId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUnlockAchievementComplete
// ()
// Parameters:
// bool                           bWasSuccessful                 (Parm)
void UOnlinePlayerInterfaceEOS::OnUnlockAchievementComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUnlockAchievementComplete");

	UOnlinePlayerInterfaceEOS_OnUnlockAchievementComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowControllerUI
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::ShowControllerUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowControllerUI");

	UOnlinePlayerInterfaceEOS_ShowControllerUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerLanguage
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UOnlinePlayerInterfaceEOS::GetPlayerLanguage(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerLanguage");

	UOnlinePlayerInterfaceEOS_GetPlayerLanguage_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowPlayersUI
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::ShowPlayersUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowPlayersUI");

	UOnlinePlayerInterfaceEOS_ShowPlayersUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearProfileDataChangedDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearProfileDataChangedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearProfileDataChangedDelegate");

	UOnlinePlayerInterfaceEOS_ClearProfileDataChangedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileDataChangedDelegate = ProfileDataChangedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddProfileDataChangedDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddProfileDataChangedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddProfileDataChangedDelegate");

	UOnlinePlayerInterfaceEOS_AddProfileDataChangedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileDataChangedDelegate = ProfileDataChangedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnProfileDataChanged
// ()
void UOnlinePlayerInterfaceEOS::OnProfileDataChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnProfileDataChanged");

	UOnlinePlayerInterfaceEOS_OnProfileDataChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnlockGamerPicture
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            PictureId                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::UnlockGamerPicture(unsigned char LocalUserNum, int PictureId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnlockGamerPicture");

	UOnlinePlayerInterfaceEOS_UnlockGamerPicture_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PictureId = PictureId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsDeviceValid
// ()
// Parameters:
// int                            DeviceID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::IsDeviceValid(int DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsDeviceValid");

	UOnlinePlayerInterfaceEOS_IsDeviceValid_Params params;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetDeviceSelectionResults
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 DeviceName                     (Parm, OutParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)
int UOnlinePlayerInterfaceEOS::GetDeviceSelectionResults(unsigned char LocalUserNum, struct FString* DeviceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetDeviceSelectionResults");

	UOnlinePlayerInterfaceEOS_GetDeviceSelectionResults_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DeviceName != nullptr)
		*DeviceName = params.DeviceName;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearDeviceSelectionDoneDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         DeviceDelegate                 (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearDeviceSelectionDoneDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& DeviceDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearDeviceSelectionDoneDelegate");

	UOnlinePlayerInterfaceEOS_ClearDeviceSelectionDoneDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.DeviceDelegate = DeviceDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddDeviceSelectionDoneDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         DeviceDelegate                 (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddDeviceSelectionDoneDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& DeviceDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddDeviceSelectionDoneDelegate");

	UOnlinePlayerInterfaceEOS_AddDeviceSelectionDoneDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.DeviceDelegate = DeviceDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnDeviceSelectionComplete
// ()
// Parameters:
// bool                           bWasSuccessful                 (Parm)
void UOnlinePlayerInterfaceEOS::OnDeviceSelectionComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnDeviceSelectionComplete");

	UOnlinePlayerInterfaceEOS_OnDeviceSelectionComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowDeviceSelectionUI
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            SizeNeeded                     (Parm)
// bool                           bForceShowUI                   (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::ShowDeviceSelectionUI(unsigned char LocalUserNum, int SizeNeeded, bool bForceShowUI)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowDeviceSelectionUI");

	UOnlinePlayerInterfaceEOS_ShowDeviceSelectionUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SizeNeeded = SizeNeeded;
	params.bForceShowUI = bForceShowUI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowCustomPlayersUI
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 Description                    (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::ShowCustomPlayersUI(unsigned char LocalUserNum, TArray<struct FUniqueNetId>* Players, const struct FString& Title, const struct FString& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowCustomPlayersUI");

	UOnlinePlayerInterfaceEOS_ShowCustomPlayersUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Title = Title;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsUserSwitchActive
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::IsUserSwitchActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsUserSwitchActive");

	UOnlinePlayerInterfaceEOS_IsUserSwitchActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetKickPlayerDialogActive
// ()
// Parameters:
// bool                           Active                         (Parm)
void UOnlinePlayerInterfaceEOS::SetKickPlayerDialogActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetKickPlayerDialogActive");

	UOnlinePlayerInterfaceEOS_SetKickPlayerDialogActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetKickPreviousUser
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
void UOnlinePlayerInterfaceEOS::SetKickPreviousUser(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetKickPreviousUser");

	UOnlinePlayerInterfaceEOS_SetKickPreviousUser_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowLoginUIForOrphanedUser
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::ShowLoginUIForOrphanedUser(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowLoginUIForOrphanedUser");

	UOnlinePlayerInterfaceEOS_ShowLoginUIForOrphanedUser_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetSyncedAchievements
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<unsigned long>          ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)
TArray<unsigned long> UOnlinePlayerInterfaceEOS::GetSyncedAchievements(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetSyncedAchievements");

	UOnlinePlayerInterfaceEOS_GetSyncedAchievements_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsGuestLogin
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::IsGuestLogin(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsGuestLogin");

	UOnlinePlayerInterfaceEOS_IsGuestLogin_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RequestRestrictedFeatureMessaging
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<Engine_EFeaturePrivilege> RestrictedFeature              (Parm)
void UOnlinePlayerInterfaceEOS::RequestRestrictedFeatureMessaging(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilege> RestrictedFeature)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RequestRestrictedFeatureMessaging");

	UOnlinePlayerInterfaceEOS_RequestRestrictedFeatureMessaging_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RestrictedFeature = RestrictedFeature;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateVoice
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<Engine_EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::CanCommunicateVoice(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateVoice");

	UOnlinePlayerInterfaceEOS_CanCommunicateVoice_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateVideo
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<Engine_EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::CanCommunicateVideo(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateVideo");

	UOnlinePlayerInterfaceEOS_CanCommunicateVideo_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateText
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<Engine_EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::CanCommunicateText(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateText");

	UOnlinePlayerInterfaceEOS_CanCommunicateText_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareUserCreatedContent
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<Engine_EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::CanShareUserCreatedContent(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareUserCreatedContent");

	UOnlinePlayerInterfaceEOS_CanShareUserCreatedContent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanAccessPremiumVideoContent
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<Engine_EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::CanAccessPremiumVideoContent(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanAccessPremiumVideoContent");

	UOnlinePlayerInterfaceEOS_CanAccessPremiumVideoContent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanAccessPremiumContent
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<Engine_EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::CanAccessPremiumContent(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanAccessPremiumContent");

	UOnlinePlayerInterfaceEOS_CanAccessPremiumContent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanUseCloudStorage
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<Engine_EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::CanUseCloudStorage(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanUseCloudStorage");

	UOnlinePlayerInterfaceEOS_CanUseCloudStorage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanRecordDVRClips
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<Engine_EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::CanRecordDVRClips(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanRecordDVRClips");

	UOnlinePlayerInterfaceEOS_CanRecordDVRClips_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanBrowseInternet
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<Engine_EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::CanBrowseInternet(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanBrowseInternet");

	UOnlinePlayerInterfaceEOS_CanBrowseInternet_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareWithSocialNetwork
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<Engine_EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::CanShareWithSocialNetwork(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareWithSocialNetwork");

	UOnlinePlayerInterfaceEOS_CanShareWithSocialNetwork_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareKinectContent
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<Engine_EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::CanShareKinectContent(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareKinectContent");

	UOnlinePlayerInterfaceEOS_CanShareKinectContent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanUploadFitnessData
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<Engine_EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::CanUploadFitnessData(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanUploadFitnessData");

	UOnlinePlayerInterfaceEOS_CanUploadFitnessData_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetPrimaryPlayerGamepadToLastInput
// ()
void UOnlinePlayerInterfaceEOS::SetPrimaryPlayerGamepadToLastInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetPrimaryPlayerGamepadToLastInput");

	UOnlinePlayerInterfaceEOS_SetPrimaryPlayerGamepadToLastInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUserSwitchCompleteDelegate
// ()
// Parameters:
// struct FScriptDelegate         UserSwitchCompleteDelegate     (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearUserSwitchCompleteDelegate(const struct FScriptDelegate& UserSwitchCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUserSwitchCompleteDelegate");

	UOnlinePlayerInterfaceEOS_ClearUserSwitchCompleteDelegate_Params params;
	params.UserSwitchCompleteDelegate = UserSwitchCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUserSwitchCompleteDelegate
// ()
// Parameters:
// struct FScriptDelegate         UserSwitchCompleteDelegate     (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddUserSwitchCompleteDelegate(const struct FScriptDelegate& UserSwitchCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUserSwitchCompleteDelegate");

	UOnlinePlayerInterfaceEOS_AddUserSwitchCompleteDelegate_Params params;
	params.UserSwitchCompleteDelegate = UserSwitchCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUserSwitchComplete
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
void UOnlinePlayerInterfaceEOS::OnUserSwitchComplete(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUserSwitchComplete");

	UOnlinePlayerInterfaceEOS_OnUserSwitchComplete_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginStatusChangeDelegate
// ()
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)
// unsigned char                  LocalUserNum                   (Parm)
void UOnlinePlayerInterfaceEOS::ClearLoginStatusChangeDelegate(const struct FScriptDelegate& InDelegate, unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginStatusChangeDelegate");

	UOnlinePlayerInterfaceEOS_ClearLoginStatusChangeDelegate_Params params;
	params.InDelegate = InDelegate;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginStatusChangeDelegate
// ()
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)
// unsigned char                  LocalUserNum                   (Parm)
void UOnlinePlayerInterfaceEOS::AddLoginStatusChangeDelegate(const struct FScriptDelegate& InDelegate, unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginStatusChangeDelegate");

	UOnlinePlayerInterfaceEOS_AddLoginStatusChangeDelegate_Params params;
	params.InDelegate = InDelegate;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginStatusChange
// ()
// Parameters:
// TEnumAsByte<Engine_ELoginStatus> NewStatus                      (Parm)
// struct FUniqueNetId            NewId                          (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::OnLoginStatusChange(TEnumAsByte<Engine_ELoginStatus> NewStatus, const struct FUniqueNetId& NewId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginStatusChange");

	UOnlinePlayerInterfaceEOS_OnLoginStatusChange_Params params;
	params.NewStatus = NewStatus;
	params.NewId = NewId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayHistoryRegistrationKey
// ()
// Parameters:
// TArray<unsigned char>          Key                            (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::GetPlayHistoryRegistrationKey(TArray<unsigned char>* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayHistoryRegistrationKey");

	UOnlinePlayerInterfaceEOS_GetPlayHistoryRegistrationKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CheckParentalControlInfo
// ()
// Parameters:
// bool                           bShowUi                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::CheckParentalControlInfo(bool bShowUi)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CheckParentalControlInfo");

	UOnlinePlayerInterfaceEOS_CheckParentalControlInfo_Params params;
	params.bShowUi = bShowUi;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetActiveDiscDLC
// ()
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)
TArray<struct FName> UOnlinePlayerInterfaceEOS::GetActiveDiscDLC()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetActiveDiscDLC");

	UOnlinePlayerInterfaceEOS_GetActiveDiscDLC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetOnlineSubscriptionRequirement
// ()
// Parameters:
// bool                           bRequiresOnlineSubscription    (Parm)
void UOnlinePlayerInterfaceEOS::SetOnlineSubscriptionRequirement(bool bRequiresOnlineSubscription)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetOnlineSubscriptionRequirement");

	UOnlinePlayerInterfaceEOS_SetOnlineSubscriptionRequirement_Params params;
	params.bRequiresOnlineSubscription = bRequiresOnlineSubscription;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetControllerID
// ()
// Parameters:
// int                            LocalPlayerNum                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)
int UOnlinePlayerInterfaceEOS::GetControllerID(int LocalPlayerNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetControllerID");

	UOnlinePlayerInterfaceEOS_GetControllerID_Params params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetConnectedControllerNames
// ()
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)
TArray<struct FName> UOnlinePlayerInterfaceEOS::GetConnectedControllerNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetConnectedControllerNames");

	UOnlinePlayerInterfaceEOS_GetConnectedControllerNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLocalPlayerRemoved
// ()
// Parameters:
// int                            LocalPlayerNum                 (Parm)
void UOnlinePlayerInterfaceEOS::OnLocalPlayerRemoved(int LocalPlayerNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLocalPlayerRemoved");

	UOnlinePlayerInterfaceEOS_OnLocalPlayerRemoved_Params params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnregisterController
// ()
// Parameters:
// int                            LocalPlayerNum                 (Parm)
void UOnlinePlayerInterfaceEOS::UnregisterController(int LocalPlayerNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnregisterController");

	UOnlinePlayerInterfaceEOS_UnregisterController_Params params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RegisterController
// ()
// Parameters:
// int                            LocalPlayerNum                 (Parm)
// int                            ControllerId                   (OptionalParm, Parm)
void UOnlinePlayerInterfaceEOS::RegisterController(int LocalPlayerNum, int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RegisterController");

	UOnlinePlayerInterfaceEOS_RegisterController_Params params;
	params.LocalPlayerNum = LocalPlayerNum;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanRegisterController
// ()
// Parameters:
// int                            LocalPlayerNum                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::CanRegisterController(int LocalPlayerNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanRegisterController");

	UOnlinePlayerInterfaceEOS_CanRegisterController_Params params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowBindings
// ()
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::ShowBindings(int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowBindings");

	UOnlinePlayerInterfaceEOS_ShowBindings_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetControllerLayout
// ()
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   LayoutName                     (Parm)
void UOnlinePlayerInterfaceEOS::SetControllerLayout(int ControllerId, const struct FName& LayoutName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetControllerLayout");

	UOnlinePlayerInterfaceEOS_SetControllerLayout_Params params;
	params.ControllerId = ControllerId;
	params.LayoutName = LayoutName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetInputAPI
// ()
// Parameters:
// TEnumAsByte<Core_EInputAPI>    TargetAPI                      (Parm)
void UOnlinePlayerInterfaceEOS::SetInputAPI(TEnumAsByte<Core_EInputAPI> TargetAPI)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetInputAPI");

	UOnlinePlayerInterfaceEOS_SetInputAPI_Params params;
	params.TargetAPI = TargetAPI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearInputAPIChangedDelegate
// ()
// Parameters:
// struct FScriptDelegate         InputAPIChangedDelegate        (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearInputAPIChangedDelegate(const struct FScriptDelegate& InputAPIChangedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearInputAPIChangedDelegate");

	UOnlinePlayerInterfaceEOS_ClearInputAPIChangedDelegate_Params params;
	params.InputAPIChangedDelegate = InputAPIChangedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddInputAPIChangedDelegate
// ()
// Parameters:
// struct FScriptDelegate         InputAPIChangedDelegate        (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddInputAPIChangedDelegate(const struct FScriptDelegate& InputAPIChangedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddInputAPIChangedDelegate");

	UOnlinePlayerInterfaceEOS_AddInputAPIChangedDelegate_Params params;
	params.InputAPIChangedDelegate = InputAPIChangedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnInputAPIChanged
// ()
// Parameters:
// TEnumAsByte<Core_EInputAPI>    TargetAPI                      (Parm)
void UOnlinePlayerInterfaceEOS::OnInputAPIChanged(TEnumAsByte<Core_EInputAPI> TargetAPI)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnInputAPIChanged");

	UOnlinePlayerInterfaceEOS_OnInputAPIChanged_Params params;
	params.TargetAPI = TargetAPI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUnregisteredControllerDelegate
// ()
// Parameters:
// struct FScriptDelegate         UnregisteredControllerDelegate (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearUnregisteredControllerDelegate(const struct FScriptDelegate& UnregisteredControllerDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUnregisteredControllerDelegate");

	UOnlinePlayerInterfaceEOS_ClearUnregisteredControllerDelegate_Params params;
	params.UnregisteredControllerDelegate = UnregisteredControllerDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearRegisteredControllerDelegate
// ()
// Parameters:
// struct FScriptDelegate         RegisteredControllerDelegate   (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearRegisteredControllerDelegate(const struct FScriptDelegate& RegisteredControllerDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearRegisteredControllerDelegate");

	UOnlinePlayerInterfaceEOS_ClearRegisteredControllerDelegate_Params params;
	params.RegisteredControllerDelegate = RegisteredControllerDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUnregisteredControllerDelegate
// ()
// Parameters:
// struct FScriptDelegate         UnregisteredControllerDelegate (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddUnregisteredControllerDelegate(const struct FScriptDelegate& UnregisteredControllerDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUnregisteredControllerDelegate");

	UOnlinePlayerInterfaceEOS_AddUnregisteredControllerDelegate_Params params;
	params.UnregisteredControllerDelegate = UnregisteredControllerDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddRegisteredControllerDelegate
// ()
// Parameters:
// struct FScriptDelegate         RegisteredControllerDelegate   (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddRegisteredControllerDelegate(const struct FScriptDelegate& RegisteredControllerDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddRegisteredControllerDelegate");

	UOnlinePlayerInterfaceEOS_AddRegisteredControllerDelegate_Params params;
	params.RegisteredControllerDelegate = RegisteredControllerDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUnregisteredController
// ()
// Parameters:
// int                            LocalPlayerNum                 (Parm)
void UOnlinePlayerInterfaceEOS::OnUnregisteredController(int LocalPlayerNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUnregisteredController");

	UOnlinePlayerInterfaceEOS_OnUnregisteredController_Params params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRegisteredController
// ()
// Parameters:
// int                            LocalPlayerNum                 (Parm)
// int                            ControllerId                   (Parm)
void UOnlinePlayerInterfaceEOS::OnRegisteredController(int LocalPlayerNum, int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRegisteredController");

	UOnlinePlayerInterfaceEOS_OnRegisteredController_Params params;
	params.LocalPlayerNum = LocalPlayerNum;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddInGamePost
// ()
// Parameters:
// struct FString                 InPostID                       (Parm, NeedCtorLink)
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FString>         StringReplaceList              (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::AddInGamePost(const struct FString& InPostID, unsigned char LocalUserNum, TArray<struct FString> StringReplaceList)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddInGamePost");

	UOnlinePlayerInterfaceEOS_AddInGamePost_Params params;
	params.InPostID = InPostID;
	params.LocalUserNum = LocalUserNum;
	params.StringReplaceList = StringReplaceList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UpdateStat
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FName                   StatName                       (Parm)
// int                            Points                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::UpdateStat(unsigned char LocalUserNum, const struct FName& StatName, int Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UpdateStat");

	UOnlinePlayerInterfaceEOS_UpdateStat_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatName = StatName;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearSaveDataNoSpaceDialogCompleteDelegate
// ()
// Parameters:
// struct FScriptDelegate         DeviceDelegate                 (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearSaveDataNoSpaceDialogCompleteDelegate(const struct FScriptDelegate& DeviceDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearSaveDataNoSpaceDialogCompleteDelegate");

	UOnlinePlayerInterfaceEOS_ClearSaveDataNoSpaceDialogCompleteDelegate_Params params;
	params.DeviceDelegate = DeviceDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddSaveDataNoSpaceDialogCompleteDelegate
// ()
// Parameters:
// struct FScriptDelegate         DeviceDelegate                 (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddSaveDataNoSpaceDialogCompleteDelegate(const struct FScriptDelegate& DeviceDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddSaveDataNoSpaceDialogCompleteDelegate");

	UOnlinePlayerInterfaceEOS_AddSaveDataNoSpaceDialogCompleteDelegate_Params params;
	params.DeviceDelegate = DeviceDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnSaveDataNoSpaceDialogComplete
// ()
// Parameters:
// bool                           bContinueWithoutSave           (Parm)
void UOnlinePlayerInterfaceEOS::OnSaveDataNoSpaceDialogComplete(bool bContinueWithoutSave)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnSaveDataNoSpaceDialogComplete");

	UOnlinePlayerInterfaceEOS_OnSaveDataNoSpaceDialogComplete_Params params;
	params.bContinueWithoutSave = bContinueWithoutSave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RecordPlayersRecentlyMetKeys
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FFriendHistoryKey> PlayerKeys                     (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::RecordPlayersRecentlyMetKeys(unsigned char LocalUserNum, TArray<struct FFriendHistoryKey> PlayerKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RecordPlayersRecentlyMetKeys");

	UOnlinePlayerInterfaceEOS_RecordPlayersRecentlyMetKeys_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerKeys = PlayerKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsAchievementUnlocked
// ()
// Parameters:
// int                            AchievementId                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::IsAchievementUnlocked(int AchievementId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsAchievementUnlocked");

	UOnlinePlayerInterfaceEOS_IsAchievementUnlocked_Params params;
	params.AchievementId = AchievementId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowContentMarketplaceUI
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::ShowContentMarketplaceUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowContentMarketplaceUI");

	UOnlinePlayerInterfaceEOS_ShowContentMarketplaceUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFriendsInviteUI
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::ShowFriendsInviteUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFriendsInviteUI");

	UOnlinePlayerInterfaceEOS_ShowFriendsInviteUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowAchievementsUI
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::ShowAchievementsUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowAchievementsUI");

	UOnlinePlayerInterfaceEOS_ShowAchievementsUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowMessagesUI
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::ShowMessagesUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowMessagesUI");

	UOnlinePlayerInterfaceEOS_ShowMessagesUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFeedbackUI
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::ShowFeedbackUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFeedbackUI");

	UOnlinePlayerInterfaceEOS_ShowFeedbackUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RemoveCanPlayOnlineChangedDelegate
// ()
// Parameters:
// struct FScriptDelegate         Callback                       (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::RemoveCanPlayOnlineChangedDelegate(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RemoveCanPlayOnlineChangedDelegate");

	UOnlinePlayerInterfaceEOS_RemoveCanPlayOnlineChangedDelegate_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddCanPlayOnlineChangedDelegate
// ()
// Parameters:
// struct FScriptDelegate         Callback                       (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddCanPlayOnlineChangedDelegate(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddCanPlayOnlineChangedDelegate");

	UOnlinePlayerInterfaceEOS_AddCanPlayOnlineChangedDelegate_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPlayOnlineChanged
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
void UOnlinePlayerInterfaceEOS::CanPlayOnlineChanged(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPlayOnlineChanged");

	UOnlinePlayerInterfaceEOS_CanPlayOnlineChanged_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUserSignInCompleteDelegate
// ()
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearUserSignInCompleteDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUserSignInCompleteDelegate");

	UOnlinePlayerInterfaceEOS_ClearUserSignInCompleteDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUserSignInCompleteDelegate
// ()
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddUserSignInCompleteDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUserSignInCompleteDelegate");

	UOnlinePlayerInterfaceEOS_AddUserSignInCompleteDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUserSignInComplete
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
void UOnlinePlayerInterfaceEOS::OnUserSignInComplete(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUserSignInComplete");

	UOnlinePlayerInterfaceEOS_OnUserSignInComplete_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowCustomMessageUI
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FUniqueNetId>    Recipients                     (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 MessageTitle                   (Parm, NeedCtorLink)
// struct FString                 NonEditableMessage             (Parm, NeedCtorLink)
// struct FString                 EditableMessage                (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::ShowCustomMessageUI(unsigned char LocalUserNum, TArray<struct FUniqueNetId>* Recipients, const struct FString& MessageTitle, const struct FString& NonEditableMessage, const struct FString& EditableMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowCustomMessageUI");

	UOnlinePlayerInterfaceEOS_ShowCustomMessageUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageTitle = MessageTitle;
	params.NonEditableMessage = NonEditableMessage;
	params.EditableMessage = EditableMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Recipients != nullptr)
		*Recipients = params.Recipients;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearCrossTitleProfileSettings
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            TitleId                        (Parm)
void UOnlinePlayerInterfaceEOS::ClearCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearCrossTitleProfileSettings");

	UOnlinePlayerInterfaceEOS_ClearCrossTitleProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetCrossTitleProfileSettings
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            TitleId                        (Parm)
// class UOnlineProfileSettings*  ReturnValue                    (Parm, OutParm, ReturnParm)
class UOnlineProfileSettings* UOnlinePlayerInterfaceEOS::GetCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetCrossTitleProfileSettings");

	UOnlinePlayerInterfaceEOS_GetCrossTitleProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadCrossTitleProfileSettingsCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadCrossTitleProfileSettingsCompleteDelegate");

	UOnlinePlayerInterfaceEOS_ClearReadCrossTitleProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadCrossTitleProfileSettingsCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadCrossTitleProfileSettingsCompleteDelegate");

	UOnlinePlayerInterfaceEOS_AddReadCrossTitleProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadCrossTitleProfileSettingsComplete
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            TitleId                        (Parm)
// bool                           bWasSuccessful                 (Parm)
void UOnlinePlayerInterfaceEOS::OnReadCrossTitleProfileSettingsComplete(unsigned char LocalUserNum, int TitleId, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadCrossTitleProfileSettingsComplete");

	UOnlinePlayerInterfaceEOS_OnReadCrossTitleProfileSettingsComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadCrossTitleProfileSettings
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            TitleId                        (Parm)
// class UOnlineProfileSettings*  ProfileSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::ReadCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId, class UOnlineProfileSettings* ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadCrossTitleProfileSettings");

	UOnlinePlayerInterfaceEOS_ReadCrossTitleProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearWritePlayerStorageCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearWritePlayerStorageCompleteDelegate");

	UOnlinePlayerInterfaceEOS_ClearWritePlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddWritePlayerStorageCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddWritePlayerStorageCompleteDelegate");

	UOnlinePlayerInterfaceEOS_AddWritePlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnWritePlayerStorageComplete
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)
void UOnlinePlayerInterfaceEOS::OnWritePlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnWritePlayerStorageComplete");

	UOnlinePlayerInterfaceEOS_OnWritePlayerStorageComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WritePlayerStorage
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (Parm)
// int                            DeviceID                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::WritePlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WritePlayerStorage");

	UOnlinePlayerInterfaceEOS_WritePlayerStorage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerStorage = PlayerStorage;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerStorageForNetIdCompleteDelegate
// ()
// Parameters:
// struct FUniqueNetId            NetId                          (Parm, NeedCtorLink)
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerStorageForNetIdCompleteDelegate");

	UOnlinePlayerInterfaceEOS_ClearReadPlayerStorageForNetIdCompleteDelegate_Params params;
	params.NetId = NetId;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerStorageForNetIdCompleteDelegate
// ()
// Parameters:
// struct FUniqueNetId            NetId                          (Parm, NeedCtorLink)
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerStorageForNetIdCompleteDelegate");

	UOnlinePlayerInterfaceEOS_AddReadPlayerStorageForNetIdCompleteDelegate_Params params;
	params.NetId = NetId;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadPlayerStorageForNetIdComplete
// ()
// Parameters:
// struct FUniqueNetId            NetId                          (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
void UOnlinePlayerInterfaceEOS::OnReadPlayerStorageForNetIdComplete(const struct FUniqueNetId& NetId, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadPlayerStorageForNetIdComplete");

	UOnlinePlayerInterfaceEOS_OnReadPlayerStorageForNetIdComplete_Params params;
	params.NetId = NetId;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadPlayerStorageForNetId
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            NetId                          (Parm, NeedCtorLink)
// class UOnlinePlayerStorage*    PlayerStorage                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::ReadPlayerStorageForNetId(unsigned char LocalUserNum, const struct FUniqueNetId& NetId, class UOnlinePlayerStorage* PlayerStorage)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadPlayerStorageForNetId");

	UOnlinePlayerInterfaceEOS_ReadPlayerStorageForNetId_Params params;
	params.LocalUserNum = LocalUserNum;
	params.NetId = NetId;
	params.PlayerStorage = PlayerStorage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerStorageCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerStorageCompleteDelegate");

	UOnlinePlayerInterfaceEOS_ClearReadPlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerStorageCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerStorageCompleteDelegate");

	UOnlinePlayerInterfaceEOS_AddReadPlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadPlayerStorageComplete
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)
void UOnlinePlayerInterfaceEOS::OnReadPlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadPlayerStorageComplete");

	UOnlinePlayerInterfaceEOS_OnReadPlayerStorageComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadPlayerStorage
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (Parm)
// int                            DeviceID                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::ReadPlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadPlayerStorage");

	UOnlinePlayerInterfaceEOS_ReadPlayerStorage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerStorage = PlayerStorage;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerStorage
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlinePlayerStorage*    ReturnValue                    (Parm, OutParm, ReturnParm)
class UOnlinePlayerStorage* UOnlinePlayerInterfaceEOS::GetPlayerStorage(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerStorage");

	UOnlinePlayerInterfaceEOS_GetPlayerStorage_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RequestNativePlatformAuthTicket
// ()
// Parameters:
// int                            LocalUserNum                   (Parm)
// struct FScriptDelegate         Callback                       (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::RequestNativePlatformAuthTicket(int LocalUserNum, const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RequestNativePlatformAuthTicket");

	UOnlinePlayerInterfaceEOS_RequestNativePlatformAuthTicket_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRequestNativePlatformAuthTicketComplete
// ()
// Parameters:
// int                            LocalUserNum                   (Parm)
// struct FString                 PlatformAuthTicket             (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::OnRequestNativePlatformAuthTicketComplete(int LocalUserNum, const struct FString& PlatformAuthTicket)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRequestNativePlatformAuthTicketComplete");

	UOnlinePlayerInterfaceEOS_OnRequestNativePlatformAuthTicketComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlatformAuthTicket = PlatformAuthTicket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.LinkedAccount
// ()
// Parameters:
// int                            LocalUserNum                   (Parm)
void UOnlinePlayerInterfaceEOS::LinkedAccount(int LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.LinkedAccount");

	UOnlinePlayerInterfaceEOS_LinkedAccount_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RefreshConnectLogin
// ()
// Parameters:
// int                            LocalUserNum                   (Parm)
void UOnlinePlayerInterfaceEOS::RefreshConnectLogin(int LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RefreshConnectLogin");

	UOnlinePlayerInterfaceEOS_RefreshConnectLogin_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ConnectLogin
// ()
// Parameters:
// int                            LocalUserNum                   (Parm)
void UOnlinePlayerInterfaceEOS::ConnectLogin(int LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ConnectLogin");

	UOnlinePlayerInterfaceEOS_ConnectLogin_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HasIncomingFriendInvite
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            InviteFrom                     (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::HasIncomingFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& InviteFrom)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HasIncomingFriendInvite");

	UOnlinePlayerInterfaceEOS_HasIncomingFriendInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviteFrom = InviteFrom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SupportInGameLogin
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::SupportInGameLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SupportInGameLogin");

	UOnlinePlayerInterfaceEOS_SupportInGameLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HasFriendsFunctionality
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::HasFriendsFunctionality()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HasFriendsFunctionality");

	UOnlinePlayerInterfaceEOS_HasFriendsFunctionality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.DeleteMessage
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            MessageIndex                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::DeleteMessage(unsigned char LocalUserNum, int MessageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.DeleteMessage");

	UOnlinePlayerInterfaceEOS_DeleteMessage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageIndex = MessageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendMessageReceivedDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         MessageDelegate                (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendMessageReceivedDelegate");

	UOnlinePlayerInterfaceEOS_ClearFriendMessageReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageDelegate = MessageDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendMessageReceivedDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         MessageDelegate                (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendMessageReceivedDelegate");

	UOnlinePlayerInterfaceEOS_AddFriendMessageReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageDelegate = MessageDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendMessageReceived
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            SendingPlayer                  (Parm, NeedCtorLink)
// struct FString                 SendingNick                    (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::OnFriendMessageReceived(unsigned char LocalUserNum, const struct FUniqueNetId& SendingPlayer, const struct FString& SendingNick, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendMessageReceived");

	UOnlinePlayerInterfaceEOS_OnFriendMessageReceived_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SendingPlayer = SendingPlayer;
	params.SendingNick = SendingNick;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendMessages
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FOnlineFriendMessage> FriendMessages                 (Parm, OutParm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::GetFriendMessages(unsigned char LocalUserNum, TArray<struct FOnlineFriendMessage>* FriendMessages)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendMessages");

	UOnlinePlayerInterfaceEOS_GetFriendMessages_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FriendMessages != nullptr)
		*FriendMessages = params.FriendMessages;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearJoinFriendGameCompleteDelegate
// ()
// Parameters:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearJoinFriendGameCompleteDelegate");

	UOnlinePlayerInterfaceEOS_ClearJoinFriendGameCompleteDelegate_Params params;
	params.JoinFriendGameCompleteDelegate = JoinFriendGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddJoinFriendGameCompleteDelegate
// ()
// Parameters:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddJoinFriendGameCompleteDelegate");

	UOnlinePlayerInterfaceEOS_AddJoinFriendGameCompleteDelegate_Params params;
	params.JoinFriendGameCompleteDelegate = JoinFriendGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnJoinFriendGameComplete
// ()
// Parameters:
// bool                           bWasSuccessful                 (Parm)
void UOnlinePlayerInterfaceEOS::OnJoinFriendGameComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnJoinFriendGameComplete");

	UOnlinePlayerInterfaceEOS_OnJoinFriendGameComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.JoinFriendGame
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            Friend                         (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::JoinFriendGame(unsigned char LocalUserNum, const struct FUniqueNetId& Friend)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.JoinFriendGame");

	UOnlinePlayerInterfaceEOS_JoinFriendGame_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friend = Friend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReceivedGameInviteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReceivedGameInviteDelegate");

	UOnlinePlayerInterfaceEOS_ClearReceivedGameInviteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReceivedGameInviteDelegate = ReceivedGameInviteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReceivedGameInviteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReceivedGameInviteDelegate");

	UOnlinePlayerInterfaceEOS_AddReceivedGameInviteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReceivedGameInviteDelegate = ReceivedGameInviteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReceivedGameInvite
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 InviterName                    (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::OnReceivedGameInvite(unsigned char LocalUserNum, const struct FString& InviterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReceivedGameInvite");

	UOnlinePlayerInterfaceEOS_OnReceivedGameInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviterName = InviterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendGameInviteToFriends
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FUniqueNetId>    Friends                        (Parm, NeedCtorLink)
// struct FString                 Text                           (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::SendGameInviteToFriends(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Friends, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendGameInviteToFriends");

	UOnlinePlayerInterfaceEOS_SendGameInviteToFriends_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friends = Friends;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendGameInviteToFriend
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            Friend                         (Parm, NeedCtorLink)
// struct FString                 Text                           (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::SendGameInviteToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendGameInviteToFriend");

	UOnlinePlayerInterfaceEOS_SendGameInviteToFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friend = Friend;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendMessageToFriend
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            Friend                         (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::SendMessageToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendMessageToFriend");

	UOnlinePlayerInterfaceEOS_SendMessageToFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friend = Friend;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendInviteCanceledDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InviteDelegate                 (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearFriendInviteCanceledDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendInviteCanceledDelegate");

	UOnlinePlayerInterfaceEOS_ClearFriendInviteCanceledDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviteDelegate = InviteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendInviteCanceledDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InviteDelegate                 (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddFriendInviteCanceledDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendInviteCanceledDelegate");

	UOnlinePlayerInterfaceEOS_AddFriendInviteCanceledDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviteDelegate = InviteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendInviteCanceled
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            CanceledUserId                 (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::OnFriendInviteCanceled(unsigned char LocalUserNum, const struct FUniqueNetId& CanceledUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendInviteCanceled");

	UOnlinePlayerInterfaceEOS_OnFriendInviteCanceled_Params params;
	params.LocalUserNum = LocalUserNum;
	params.CanceledUserId = CanceledUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendInviteReceivedDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InviteDelegate                 (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendInviteReceivedDelegate");

	UOnlinePlayerInterfaceEOS_ClearFriendInviteReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviteDelegate = InviteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendInviteReceivedDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InviteDelegate                 (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendInviteReceivedDelegate");

	UOnlinePlayerInterfaceEOS_AddFriendInviteReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviteDelegate = InviteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendInviteReceived
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            RequestingPlayer               (Parm, NeedCtorLink)
// struct FString                 RequestingNick                 (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::OnFriendInviteReceived(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer, const struct FString& RequestingNick, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendInviteReceived");

	UOnlinePlayerInterfaceEOS_OnFriendInviteReceived_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RequestingPlayer = RequestingPlayer;
	params.RequestingNick = RequestingNick;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RemoveFriend
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            FormerFriend                   (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::RemoveFriend(unsigned char LocalUserNum, const struct FUniqueNetId& FormerFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RemoveFriend");

	UOnlinePlayerInterfaceEOS_RemoveFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FormerFriend = FormerFriend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearRemoveFriendCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         RemoveFriendDelegate           (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearRemoveFriendCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RemoveFriendDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearRemoveFriendCompleteDelegate");

	UOnlinePlayerInterfaceEOS_ClearRemoveFriendCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RemoveFriendDelegate = RemoveFriendDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddRemoveFriendCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         RemoveFriendDelegate           (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddRemoveFriendCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RemoveFriendDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddRemoveFriendCompleteDelegate");

	UOnlinePlayerInterfaceEOS_AddRemoveFriendCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RemoveFriendDelegate = RemoveFriendDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRemoveFriendComplete
// ()
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FUniqueNetId            RemovedID                      (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::OnRemoveFriendComplete(bool bWasSuccessful, const struct FUniqueNetId& RemovedID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRemoveFriendComplete");

	UOnlinePlayerInterfaceEOS_OnRemoveFriendComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.RemovedID = RemovedID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.DenyFriendInvite
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            RequestingPlayer               (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::DenyFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.DenyFriendInvite");

	UOnlinePlayerInterfaceEOS_DenyFriendInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RequestingPlayer = RequestingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearDenyFriendInviteCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendDelegate                 (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearDenyFriendInviteCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearDenyFriendInviteCompleteDelegate");

	UOnlinePlayerInterfaceEOS_ClearDenyFriendInviteCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendDelegate = FriendDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddDenyFriendInviteCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendDelegate                 (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddDenyFriendInviteCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddDenyFriendInviteCompleteDelegate");

	UOnlinePlayerInterfaceEOS_AddDenyFriendInviteCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendDelegate = FriendDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnDenyFriendInviteComplete
// ()
// Parameters:
// struct FUniqueNetId            FriendId                       (Parm, NeedCtorLink)
// class UError*                  Error                          (Const, Parm)
void UOnlinePlayerInterfaceEOS::OnDenyFriendInviteComplete(const struct FUniqueNetId& FriendId, class UError* Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnDenyFriendInviteComplete");

	UOnlinePlayerInterfaceEOS_OnDenyFriendInviteComplete_Params params;
	params.FriendId = FriendId;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AcceptFriendInvite
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            RequestingPlayer               (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::AcceptFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AcceptFriendInvite");

	UOnlinePlayerInterfaceEOS_AcceptFriendInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RequestingPlayer = RequestingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAcceptFriendInviteCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendDelegate                 (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearAcceptFriendInviteCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAcceptFriendInviteCompleteDelegate");

	UOnlinePlayerInterfaceEOS_ClearAcceptFriendInviteCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendDelegate = FriendDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAcceptFriendInviteCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendDelegate                 (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddAcceptFriendInviteCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAcceptFriendInviteCompleteDelegate");

	UOnlinePlayerInterfaceEOS_AddAcceptFriendInviteCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendDelegate = FriendDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAcceptFriendInviteComplete
// ()
// Parameters:
// struct FUniqueNetId            FriendId                       (Parm, NeedCtorLink)
// class UError*                  Error                          (Const, Parm)
void UOnlinePlayerInterfaceEOS::OnAcceptFriendInviteComplete(const struct FUniqueNetId& FriendId, class UError* Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAcceptFriendInviteComplete");

	UOnlinePlayerInterfaceEOS_OnAcceptFriendInviteComplete_Params params;
	params.FriendId = FriendId;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAddFriendByNameCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendDelegate                 (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAddFriendByNameCompleteDelegate");

	UOnlinePlayerInterfaceEOS_ClearAddFriendByNameCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendDelegate = FriendDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAddFriendByNameCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendDelegate                 (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAddFriendByNameCompleteDelegate");

	UOnlinePlayerInterfaceEOS_AddAddFriendByNameCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendDelegate = FriendDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAddFriendByNameComplete
// ()
// Parameters:
// bool                           bWasSuccessful                 (Parm)
void UOnlinePlayerInterfaceEOS::OnAddFriendByNameComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAddFriendByNameComplete");

	UOnlinePlayerInterfaceEOS_OnAddFriendByNameComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendByName
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 FriendName                     (Parm, NeedCtorLink)
// struct FString                 Message                        (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::AddFriendByName(unsigned char LocalUserNum, const struct FString& FriendName, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendByName");

	UOnlinePlayerInterfaceEOS_AddFriendByName_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendName = FriendName;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.QueryUserByDisplayName
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 DisplayName                    (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::QueryUserByDisplayName(unsigned char LocalUserNum, const struct FString& DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.QueryUserByDisplayName");

	UOnlinePlayerInterfaceEOS_QueryUserByDisplayName_Params params;
	params.LocalUserNum = LocalUserNum;
	params.DisplayName = DisplayName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearQueryUserByDisplayNameCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         QueryDelegate                  (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearQueryUserByDisplayNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& QueryDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearQueryUserByDisplayNameCompleteDelegate");

	UOnlinePlayerInterfaceEOS_ClearQueryUserByDisplayNameCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.QueryDelegate = QueryDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddQueryUserByDisplayNameCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         QueryDelegate                  (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddQueryUserByDisplayNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& QueryDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddQueryUserByDisplayNameCompleteDelegate");

	UOnlinePlayerInterfaceEOS_AddQueryUserByDisplayNameCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.QueryDelegate = QueryDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnQueryUserByDisplayName
// ()
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 QueriedDisplayName             (Parm, NeedCtorLink)
// struct FUniqueNetId            UserId                         (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::OnQueryUserByDisplayName(bool bWasSuccessful, const struct FString& QueriedDisplayName, const struct FUniqueNetId& UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnQueryUserByDisplayName");

	UOnlinePlayerInterfaceEOS_OnQueryUserByDisplayName_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.QueriedDisplayName = QueriedDisplayName;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriend
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            NewFriend                      (Parm, NeedCtorLink)
// struct FString                 Message                        (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::AddFriend(unsigned char LocalUserNum, const struct FUniqueNetId& NewFriend, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriend");

	UOnlinePlayerInterfaceEOS_AddFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.NewFriend = NewFriend;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAddFriendCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendDelegate                 (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearAddFriendCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAddFriendCompleteDelegate");

	UOnlinePlayerInterfaceEOS_ClearAddFriendCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendDelegate = FriendDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAddFriendCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendDelegate                 (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddAddFriendCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAddFriendCompleteDelegate");

	UOnlinePlayerInterfaceEOS_AddAddFriendCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendDelegate = FriendDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAddFriendComplete
// ()
// Parameters:
// struct FUniqueNetId            NewFriendId                    (Parm, NeedCtorLink)
// class UError*                  Error                          (Const, Parm)
void UOnlinePlayerInterfaceEOS::OnAddFriendComplete(const struct FUniqueNetId& NewFriendId, class UError* Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAddFriendComplete");

	UOnlinePlayerInterfaceEOS_OnAddFriendComplete_Params params;
	params.NewFriendId = NewFriendId;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetKeyboardInputResults
// ()
// Parameters:
// unsigned char                  bWasCanceled                   (Parm, OutParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UOnlinePlayerInterfaceEOS::GetKeyboardInputResults(unsigned char* bWasCanceled)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetKeyboardInputResults");

	UOnlinePlayerInterfaceEOS_GetKeyboardInputResults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bWasCanceled != nullptr)
		*bWasCanceled = params.bWasCanceled;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearKeyboardInputDoneDelegate
// ()
// Parameters:
// struct FScriptDelegate         InputDelegate                  (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearKeyboardInputDoneDelegate");

	UOnlinePlayerInterfaceEOS_ClearKeyboardInputDoneDelegate_Params params;
	params.InputDelegate = InputDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddKeyboardInputDoneDelegate
// ()
// Parameters:
// struct FScriptDelegate         InputDelegate                  (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddKeyboardInputDoneDelegate");

	UOnlinePlayerInterfaceEOS_AddKeyboardInputDoneDelegate_Params params;
	params.InputDelegate = InputDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnKeyboardInputComplete
// ()
// Parameters:
// bool                           bWasSuccessful                 (Parm)
void UOnlinePlayerInterfaceEOS::OnKeyboardInputComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnKeyboardInputComplete");

	UOnlinePlayerInterfaceEOS_OnKeyboardInputComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowKeyboardUI
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 TitleText                      (Parm, NeedCtorLink)
// struct FString                 DescriptionText                (Parm, NeedCtorLink)
// bool                           bIsPassword                    (OptionalParm, Parm)
// bool                           bShouldValidate                (OptionalParm, Parm)
// struct FString                 DefaultText                    (OptionalParm, Parm, NeedCtorLink)
// int                            MaxResultLength                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::ShowKeyboardUI(unsigned char LocalUserNum, const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const struct FString& DefaultText, int MaxResultLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowKeyboardUI");

	UOnlinePlayerInterfaceEOS_ShowKeyboardUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleText = TitleText;
	params.DescriptionText = DescriptionText;
	params.bIsPassword = bIsPassword;
	params.bShouldValidate = bShouldValidate;
	params.DefaultText = DefaultText;
	params.MaxResultLength = MaxResultLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetOnlineStatus
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            StatusId                       (Parm)
// TArray<struct FLocalizedStringSetting> LocalizedStringSettings        (Const, Parm, OutParm, NeedCtorLink)
// TArray<struct FSettingsProperty> Properties                     (Const, Parm, OutParm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::SetOnlineStatus(unsigned char LocalUserNum, int StatusId, TArray<struct FLocalizedStringSetting>* LocalizedStringSettings, TArray<struct FSettingsProperty>* Properties)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetOnlineStatus");

	UOnlinePlayerInterfaceEOS_SetOnlineStatus_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatusId = StatusId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LocalizedStringSettings != nullptr)
		*LocalizedStringSettings = params.LocalizedStringSettings;
	if (Properties != nullptr)
		*Properties = params.Properties;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendsList
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FOnlineFriend>   Friends                        (Parm, OutParm, NeedCtorLink)
// int                            Count                          (OptionalParm, Parm)
// int                            StartingAt                     (OptionalParm, Parm)
// TEnumAsByte<Engine_EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)
TEnumAsByte<Engine_EOnlineEnumerationReadState> UOnlinePlayerInterfaceEOS::GetFriendsList(unsigned char LocalUserNum, TArray<struct FOnlineFriend>* Friends, int Count, int StartingAt)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendsList");

	UOnlinePlayerInterfaceEOS_GetFriendsList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Count = Count;
	params.StartingAt = StartingAt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Friends != nullptr)
		*Friends = params.Friends;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadFriendsCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadFriendsCompleteDelegate");

	UOnlinePlayerInterfaceEOS_ClearReadFriendsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadFriendsCompleteDelegate = ReadFriendsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadFriendsCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadFriendsCompleteDelegate");

	UOnlinePlayerInterfaceEOS_AddReadFriendsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadFriendsCompleteDelegate = ReadFriendsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadFriendsComplete
// ()
// Parameters:
// bool                           bWasSuccessful                 (Parm)
void UOnlinePlayerInterfaceEOS::OnReadFriendsComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadFriendsComplete");

	UOnlinePlayerInterfaceEOS_OnReadFriendsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadFriendsList
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            Count                          (OptionalParm, Parm)
// int                            StartingAt                     (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::ReadFriendsList(unsigned char LocalUserNum, int Count, int StartingAt)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadFriendsList");

	UOnlinePlayerInterfaceEOS_ReadFriendsList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Count = Count;
	params.StartingAt = StartingAt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearWriteProfileSettingsCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearWriteProfileSettingsCompleteDelegate");

	UOnlinePlayerInterfaceEOS_ClearWriteProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WriteProfileSettingsCompleteDelegate = WriteProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddWriteProfileSettingsCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddWriteProfileSettingsCompleteDelegate");

	UOnlinePlayerInterfaceEOS_AddWriteProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WriteProfileSettingsCompleteDelegate = WriteProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnWriteProfileSettingsComplete
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)
void UOnlinePlayerInterfaceEOS::OnWriteProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnWriteProfileSettingsComplete");

	UOnlinePlayerInterfaceEOS_OnWriteProfileSettingsComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WriteProfileSettings
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineProfileSettings*  ProfileSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::WriteProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WriteProfileSettings");

	UOnlinePlayerInterfaceEOS_WriteProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetProfileSettings
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineProfileSettings*  ReturnValue                    (Parm, OutParm, ReturnParm)
class UOnlineProfileSettings* UOnlinePlayerInterfaceEOS::GetProfileSettings(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetProfileSettings");

	UOnlinePlayerInterfaceEOS_GetProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadProfileSettingsCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadProfileSettingsCompleteDelegate");

	UOnlinePlayerInterfaceEOS_ClearReadProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadProfileSettingsCompleteDelegate = ReadProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadProfileSettingsCompleteDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadProfileSettingsCompleteDelegate");

	UOnlinePlayerInterfaceEOS_AddReadProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadProfileSettingsCompleteDelegate = ReadProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadProfileSettingsComplete
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)
void UOnlinePlayerInterfaceEOS::OnReadProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadProfileSettingsComplete");

	UOnlinePlayerInterfaceEOS_OnReadProfileSettingsComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadProfileSettings
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineProfileSettings*  ProfileSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::ReadProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadProfileSettings");

	UOnlinePlayerInterfaceEOS_ReadProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendsChangeDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendsDelegate                (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendsChangeDelegate");

	UOnlinePlayerInterfaceEOS_ClearFriendsChangeDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendsDelegate = FriendsDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendsChangeDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendsDelegate                (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendsChangeDelegate");

	UOnlinePlayerInterfaceEOS_AddFriendsChangeDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendsDelegate = FriendsDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearMutingChangeDelegate
// ()
// Parameters:
// struct FScriptDelegate         MutingDelegate                 (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearMutingChangeDelegate");

	UOnlinePlayerInterfaceEOS_ClearMutingChangeDelegate_Params params;
	params.MutingDelegate = MutingDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddMutingChangeDelegate
// ()
// Parameters:
// struct FScriptDelegate         MutingDelegate                 (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddMutingChangeDelegate");

	UOnlinePlayerInterfaceEOS_AddMutingChangeDelegate_Params params;
	params.MutingDelegate = MutingDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginCancelledDelegate
// ()
// Parameters:
// struct FScriptDelegate         CancelledDelegate              (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginCancelledDelegate");

	UOnlinePlayerInterfaceEOS_ClearLoginCancelledDelegate_Params params;
	params.CancelledDelegate = CancelledDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginCancelledDelegate
// ()
// Parameters:
// struct FScriptDelegate         CancelledDelegate              (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginCancelledDelegate");

	UOnlinePlayerInterfaceEOS_AddLoginCancelledDelegate_Params params;
	params.CancelledDelegate = CancelledDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginChangeDelegate
// ()
// Parameters:
// struct FScriptDelegate         LoginDelegate                  (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginChangeDelegate");

	UOnlinePlayerInterfaceEOS_ClearLoginChangeDelegate_Params params;
	params.LoginDelegate = LoginDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginChangeDelegate
// ()
// Parameters:
// struct FScriptDelegate         LoginDelegate                  (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginChangeDelegate");

	UOnlinePlayerInterfaceEOS_AddLoginChangeDelegate_Params params;
	params.LoginDelegate = LoginDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFriendsUI
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::ShowFriendsUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFriendsUI");

	UOnlinePlayerInterfaceEOS_ShowFriendsUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsMuted
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::IsMuted(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsMuted");

	UOnlinePlayerInterfaceEOS_IsMuted_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AreAnyFriends
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FFriendsQuery>   Query                          (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::AreAnyFriends(unsigned char LocalUserNum, TArray<struct FFriendsQuery>* Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AreAnyFriends");

	UOnlinePlayerInterfaceEOS_AreAnyFriends_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Query != nullptr)
		*Query = params.Query;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsFriend
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::IsFriend(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsFriend");

	UOnlinePlayerInterfaceEOS_IsFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShowPresenceInformation
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<Engine_EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::CanShowPresenceInformation(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShowPresenceInformation");

	UOnlinePlayerInterfaceEOS_CanShowPresenceInformation_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanViewPlayerProfiles
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<Engine_EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::CanViewPlayerProfiles(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanViewPlayerProfiles");

	UOnlinePlayerInterfaceEOS_CanViewPlayerProfiles_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPurchaseContent
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<Engine_EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::CanPurchaseContent(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPurchaseContent");

	UOnlinePlayerInterfaceEOS_CanPurchaseContent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanDownloadUserContent
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<Engine_EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::CanDownloadUserContent(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanDownloadUserContent");

	UOnlinePlayerInterfaceEOS_CanDownloadUserContent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<Engine_ECommunicationMethod> CommMethod                     (Parm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// TEnumAsByte<Engine_EFeaturePrivilegeLevel> ReturnValue                    (Parm, OutParm, ReturnParm)
TEnumAsByte<Engine_EFeaturePrivilegeLevel> UOnlinePlayerInterfaceEOS::CanCommunicate(unsigned char LocalUserNum, TEnumAsByte<Engine_ECommunicationMethod> CommMethod, bool bAttemptToResolve)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicate");

	UOnlinePlayerInterfaceEOS_CanCommunicate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.CommMethod = CommMethod;
	params.bAttemptToResolve = bAttemptToResolve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPlayOnline
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<Engine_EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::CanPlayOnline(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPlayOnline");

	UOnlinePlayerInterfaceEOS_CanPlayOnline_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerNickname
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UOnlinePlayerInterfaceEOS::GetPlayerNickname(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerNickname");

	UOnlinePlayerInterfaceEOS_GetPlayerNickname_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetUniquePlayerId
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::GetUniquePlayerId(unsigned char LocalUserNum, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetUniquePlayerId");

	UOnlinePlayerInterfaceEOS_GetUniquePlayerId_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetLoginStatus
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<Engine_ELoginStatus> ReturnValue                    (Parm, OutParm, ReturnParm)
TEnumAsByte<Engine_ELoginStatus> UOnlinePlayerInterfaceEOS::GetLoginStatus(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetLoginStatus");

	UOnlinePlayerInterfaceEOS_GetLoginStatus_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLogoutCompletedDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LogoutDelegate                 (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLogoutCompletedDelegate");

	UOnlinePlayerInterfaceEOS_ClearLogoutCompletedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LogoutDelegate = LogoutDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLogoutCompletedDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LogoutDelegate                 (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLogoutCompletedDelegate");

	UOnlinePlayerInterfaceEOS_AddLogoutCompletedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LogoutDelegate = LogoutDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLogoutCompleted
// ()
// Parameters:
// bool                           bWasSuccessful                 (Parm)
void UOnlinePlayerInterfaceEOS::OnLogoutCompleted(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLogoutCompleted");

	UOnlinePlayerInterfaceEOS_OnLogoutCompleted_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.Logout
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::Logout(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.Logout");

	UOnlinePlayerInterfaceEOS_Logout_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginFailedDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LoginFailedDelegate            (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::ClearLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginFailedDelegate");

	UOnlinePlayerInterfaceEOS_ClearLoginFailedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LoginFailedDelegate = LoginFailedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginFailedDelegate
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LoginFailedDelegate            (Parm, NeedCtorLink)
void UOnlinePlayerInterfaceEOS::AddLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginFailedDelegate");

	UOnlinePlayerInterfaceEOS_AddLoginFailedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LoginFailedDelegate = LoginFailedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReceievedPinGrantCode
// ()
// Parameters:
// TEnumAsByte<Engine_EPinGrantResult> Result                         (Parm)
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 Code                           (Parm, NeedCtorLink)
// struct FString                 URL                            (Parm, NeedCtorLink)
// int                            SecondsUntilExpiration         (Parm)
void UOnlinePlayerInterfaceEOS::OnReceievedPinGrantCode(TEnumAsByte<Engine_EPinGrantResult> Result, unsigned char LocalUserNum, const struct FString& Code, const struct FString& URL, int SecondsUntilExpiration)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReceievedPinGrantCode");

	UOnlinePlayerInterfaceEOS_OnReceievedPinGrantCode_Params params;
	params.Result = Result;
	params.LocalUserNum = LocalUserNum;
	params.Code = Code;
	params.URL = URL;
	params.SecondsUntilExpiration = SecondsUntilExpiration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginFailed
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<Engine_EOnlineServerConnectionStatus> ErrorCode                      (Parm)
void UOnlinePlayerInterfaceEOS::OnLoginFailed(unsigned char LocalUserNum, TEnumAsByte<Engine_EOnlineServerConnectionStatus> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginFailed");

	UOnlinePlayerInterfaceEOS_OnLoginFailed_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AutoLogin
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::AutoLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AutoLogin");

	UOnlinePlayerInterfaceEOS_AutoLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.Login
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 LoginName                      (Parm, NeedCtorLink)
// struct FString                 Password                       (Parm, NeedCtorLink)
// bool                           bWantsLocalOnly                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::Login(unsigned char LocalUserNum, const struct FString& LoginName, const struct FString& Password, bool bWantsLocalOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.Login");

	UOnlinePlayerInterfaceEOS_Login_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LoginName = LoginName;
	params.Password = Password;
	params.bWantsLocalOnly = bWantsLocalOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowLoginUI
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bShowOnlineOnly                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlinePlayerInterfaceEOS::ShowLoginUI(unsigned char LocalUserNum, bool bShowOnlineOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowLoginUI");

	UOnlinePlayerInterfaceEOS_ShowLoginUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bShowOnlineOnly = bShowOnlineOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendsChange
// ()
void UOnlinePlayerInterfaceEOS::OnFriendsChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendsChange");

	UOnlinePlayerInterfaceEOS_OnFriendsChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnMutingChange
// ()
void UOnlinePlayerInterfaceEOS::OnMutingChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnMutingChange");

	UOnlinePlayerInterfaceEOS_OnMutingChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginCancelled
// ()
void UOnlinePlayerInterfaceEOS::OnLoginCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginCancelled");

	UOnlinePlayerInterfaceEOS_OnLoginCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginChange
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
void UOnlinePlayerInterfaceEOS::OnLoginChange(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginChange");

	UOnlinePlayerInterfaceEOS_OnLoginChange_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.RegisterStatGuid
// ()
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm, NeedCtorLink)
// struct FString                 ClientStatGuid                 (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineStatsInterfaceEOS::RegisterStatGuid(const struct FUniqueNetId& PlayerID, struct FString* ClientStatGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.RegisterStatGuid");

	UOnlineStatsInterfaceEOS_RegisterStatGuid_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ClientStatGuid != nullptr)
		*ClientStatGuid = params.ClientStatGuid;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.GetClientStatGuid
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UOnlineStatsInterfaceEOS::GetClientStatGuid()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.GetClientStatGuid");

	UOnlineStatsInterfaceEOS_GetClientStatGuid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearRegisterHostStatGuidCompleteDelegateDelegate
// ()
// Parameters:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (Parm, NeedCtorLink)
void UOnlineStatsInterfaceEOS::ClearRegisterHostStatGuidCompleteDelegateDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearRegisterHostStatGuidCompleteDelegateDelegate");

	UOnlineStatsInterfaceEOS_ClearRegisterHostStatGuidCompleteDelegateDelegate_Params params;
	params.RegisterHostStatGuidCompleteDelegate = RegisterHostStatGuidCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddRegisterHostStatGuidCompleteDelegate
// ()
// Parameters:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (Parm, NeedCtorLink)
void UOnlineStatsInterfaceEOS::AddRegisterHostStatGuidCompleteDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddRegisterHostStatGuidCompleteDelegate");

	UOnlineStatsInterfaceEOS_AddRegisterHostStatGuidCompleteDelegate_Params params;
	params.RegisterHostStatGuidCompleteDelegate = RegisterHostStatGuidCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnRegisterHostStatGuidComplete
// ()
// Parameters:
// bool                           bWasSuccessful                 (Parm)
void UOnlineStatsInterfaceEOS::OnRegisterHostStatGuidComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnRegisterHostStatGuidComplete");

	UOnlineStatsInterfaceEOS_OnRegisterHostStatGuidComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.RegisterHostStatGuid
// ()
// Parameters:
// struct FString                 HostStatGuid                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineStatsInterfaceEOS::RegisterHostStatGuid(struct FString* HostStatGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.RegisterHostStatGuid");

	UOnlineStatsInterfaceEOS_RegisterHostStatGuid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HostStatGuid != nullptr)
		*HostStatGuid = params.HostStatGuid;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.GetHostStatGuid
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UOnlineStatsInterfaceEOS::GetHostStatGuid()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.GetHostStatGuid");

	UOnlineStatsInterfaceEOS_GetHostStatGuid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.WriteOnlinePlayerScores
// ()
// Parameters:
// struct FName                   SessionName                    (Parm)
// int                            LeaderboardId                  (Parm)
// TArray<struct FOnlinePlayerScore> PlayerScores                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineStatsInterfaceEOS::WriteOnlinePlayerScores(const struct FName& SessionName, int LeaderboardId, TArray<struct FOnlinePlayerScore>* PlayerScores)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.WriteOnlinePlayerScores");

	UOnlineStatsInterfaceEOS_WriteOnlinePlayerScores_Params params;
	params.SessionName = SessionName;
	params.LeaderboardId = LeaderboardId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerScores != nullptr)
		*PlayerScores = params.PlayerScores;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearFlushOnlineStatsCompleteDelegate
// ()
// Parameters:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (Parm, NeedCtorLink)
void UOnlineStatsInterfaceEOS::ClearFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearFlushOnlineStatsCompleteDelegate");

	UOnlineStatsInterfaceEOS_ClearFlushOnlineStatsCompleteDelegate_Params params;
	params.FlushOnlineStatsCompleteDelegate = FlushOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddFlushOnlineStatsCompleteDelegate
// ()
// Parameters:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (Parm, NeedCtorLink)
void UOnlineStatsInterfaceEOS::AddFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddFlushOnlineStatsCompleteDelegate");

	UOnlineStatsInterfaceEOS_AddFlushOnlineStatsCompleteDelegate_Params params;
	params.FlushOnlineStatsCompleteDelegate = FlushOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnFlushOnlineStatsComplete
// ()
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)
void UOnlineStatsInterfaceEOS::OnFlushOnlineStatsComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnFlushOnlineStatsComplete");

	UOnlineStatsInterfaceEOS_OnFlushOnlineStatsComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.FlushOnlineStats
// ()
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineStatsInterfaceEOS::FlushOnlineStats(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.FlushOnlineStats");

	UOnlineStatsInterfaceEOS_FlushOnlineStats_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.WriteOnlineStats
// ()
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            Player                         (Parm, NeedCtorLink)
// class UOnlineStatsWrite*       StatsWrite                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineStatsInterfaceEOS::WriteOnlineStats(const struct FName& SessionName, const struct FUniqueNetId& Player, class UOnlineStatsWrite* StatsWrite)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.WriteOnlineStats");

	UOnlineStatsInterfaceEOS_WriteOnlineStats_Params params;
	params.SessionName = SessionName;
	params.Player = Player;
	params.StatsWrite = StatsWrite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.FreeStats
// ()
// Parameters:
// class UOnlineStatsRead*        StatsRead                      (Parm)
void UOnlineStatsInterfaceEOS::FreeStats(class UOnlineStatsRead* StatsRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.FreeStats");

	UOnlineStatsInterfaceEOS_FreeStats_Params params;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearReadOnlineStatsCompleteDelegate
// ()
// Parameters:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (Parm, NeedCtorLink)
void UOnlineStatsInterfaceEOS::ClearReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearReadOnlineStatsCompleteDelegate");

	UOnlineStatsInterfaceEOS_ClearReadOnlineStatsCompleteDelegate_Params params;
	params.ReadOnlineStatsCompleteDelegate = ReadOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddReadOnlineStatsCompleteDelegate
// ()
// Parameters:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (Parm, NeedCtorLink)
void UOnlineStatsInterfaceEOS::AddReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddReadOnlineStatsCompleteDelegate");

	UOnlineStatsInterfaceEOS_AddReadOnlineStatsCompleteDelegate_Params params;
	params.ReadOnlineStatsCompleteDelegate = ReadOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnReadOnlineStatsComplete
// ()
// Parameters:
// bool                           bWasSuccessful                 (Parm)
void UOnlineStatsInterfaceEOS::OnReadOnlineStatsComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnReadOnlineStatsComplete");

	UOnlineStatsInterfaceEOS_OnReadOnlineStatsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsByRankAroundPlayer
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// int                            NumRows                        (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineStatsInterfaceEOS::ReadOnlineStatsByRankAroundPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsByRankAroundPlayer");

	UOnlineStatsInterfaceEOS_ReadOnlineStatsByRankAroundPlayer_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;
	params.NumRows = NumRows;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsByRank
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// int                            StartIndex                     (OptionalParm, Parm)
// int                            NumToRead                      (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineStatsInterfaceEOS::ReadOnlineStatsByRank(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsByRank");

	UOnlineStatsInterfaceEOS_ReadOnlineStatsByRank_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;
	params.StartIndex = StartIndex;
	params.NumToRead = NumToRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsForFriends
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineStatsInterfaceEOS::ReadOnlineStatsForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsForFriends");

	UOnlineStatsInterfaceEOS_ReadOnlineStatsForFriends_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStats
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineStatsInterfaceEOS::ReadOnlineStats(unsigned char LocalUserNum, TArray<struct FUniqueNetId>* Players, class UOnlineStatsRead* StatsRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStats");

	UOnlineStatsInterfaceEOS_ReadOnlineStats_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearAllDelegates
// ()
void UOnlineUserCloudFileInterfaceEOS::ClearAllDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearAllDelegates");

	UOnlineUserCloudFileInterfaceEOS_ClearAllDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearDeleteUserFileCompleteDelegate
// ()
// Parameters:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (Parm, NeedCtorLink)
void UOnlineUserCloudFileInterfaceEOS::ClearDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearDeleteUserFileCompleteDelegate");

	UOnlineUserCloudFileInterfaceEOS_ClearDeleteUserFileCompleteDelegate_Params params;
	params.DeleteUserFileCompleteDelegate = DeleteUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddDeleteUserFileCompleteDelegate
// ()
// Parameters:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (Parm, NeedCtorLink)
void UOnlineUserCloudFileInterfaceEOS::AddDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddDeleteUserFileCompleteDelegate");

	UOnlineUserCloudFileInterfaceEOS_AddDeleteUserFileCompleteDelegate_Params params;
	params.DeleteUserFileCompleteDelegate = DeleteUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.DeleteUserFile
// ()
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           bShouldCloudDelete             (Parm)
// bool                           bShouldLocallyDelete           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineUserCloudFileInterfaceEOS::DeleteUserFile(const struct FString& UserId, const struct FString& Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.DeleteUserFile");

	UOnlineUserCloudFileInterfaceEOS_DeleteUserFile_Params params;
	params.UserId = UserId;
	params.Filename = Filename;
	params.bShouldCloudDelete = bShouldCloudDelete;
	params.bShouldLocallyDelete = bShouldLocallyDelete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnDeleteUserFileComplete
// ()
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
void UOnlineUserCloudFileInterfaceEOS::OnDeleteUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnDeleteUserFileComplete");

	UOnlineUserCloudFileInterfaceEOS_OnDeleteUserFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearWriteUserFileCompleteDelegate
// ()
// Parameters:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (Parm, NeedCtorLink)
void UOnlineUserCloudFileInterfaceEOS::ClearWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearWriteUserFileCompleteDelegate");

	UOnlineUserCloudFileInterfaceEOS_ClearWriteUserFileCompleteDelegate_Params params;
	params.WriteUserFileCompleteDelegate = WriteUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddWriteUserFileCompleteDelegate
// ()
// Parameters:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (Parm, NeedCtorLink)
void UOnlineUserCloudFileInterfaceEOS::AddWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddWriteUserFileCompleteDelegate");

	UOnlineUserCloudFileInterfaceEOS_AddWriteUserFileCompleteDelegate_Params params;
	params.WriteUserFileCompleteDelegate = WriteUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.WriteUserFile
// ()
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TArray<unsigned char>          FileContents                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineUserCloudFileInterfaceEOS::WriteUserFile(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.WriteUserFile");

	UOnlineUserCloudFileInterfaceEOS_WriteUserFile_Params params;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnWriteUserFileComplete
// ()
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
void UOnlineUserCloudFileInterfaceEOS::OnWriteUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnWriteUserFileComplete");

	UOnlineUserCloudFileInterfaceEOS_OnWriteUserFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearReadUserFileCompleteDelegate
// ()
// Parameters:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (Parm, NeedCtorLink)
void UOnlineUserCloudFileInterfaceEOS::ClearReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearReadUserFileCompleteDelegate");

	UOnlineUserCloudFileInterfaceEOS_ClearReadUserFileCompleteDelegate_Params params;
	params.ReadUserFileCompleteDelegate = ReadUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddReadUserFileCompleteDelegate
// ()
// Parameters:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (Parm, NeedCtorLink)
void UOnlineUserCloudFileInterfaceEOS::AddReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddReadUserFileCompleteDelegate");

	UOnlineUserCloudFileInterfaceEOS_AddReadUserFileCompleteDelegate_Params params;
	params.ReadUserFileCompleteDelegate = ReadUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ReadUserFile
// ()
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineUserCloudFileInterfaceEOS::ReadUserFile(const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ReadUserFile");

	UOnlineUserCloudFileInterfaceEOS_ReadUserFile_Params params;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnReadUserFileComplete
// ()
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
void UOnlineUserCloudFileInterfaceEOS::OnReadUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnReadUserFileComplete");

	UOnlineUserCloudFileInterfaceEOS_OnReadUserFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.GetUserFileList
// ()
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// TArray<struct FEmsFile>        UserFiles                      (Parm, OutParm, NeedCtorLink)
void UOnlineUserCloudFileInterfaceEOS::GetUserFileList(const struct FString& UserId, TArray<struct FEmsFile>* UserFiles)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.GetUserFileList");

	UOnlineUserCloudFileInterfaceEOS_GetUserFileList_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UserFiles != nullptr)
		*UserFiles = params.UserFiles;

}


// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearEnumerateUserFileCompleteDelegate
// ()
// Parameters:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (Parm, NeedCtorLink)
void UOnlineUserCloudFileInterfaceEOS::ClearEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearEnumerateUserFileCompleteDelegate");

	UOnlineUserCloudFileInterfaceEOS_ClearEnumerateUserFileCompleteDelegate_Params params;
	params.EnumerateUserFileCompleteDelegate = EnumerateUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddEnumerateUserFileCompleteDelegate
// ()
// Parameters:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (Parm, NeedCtorLink)
void UOnlineUserCloudFileInterfaceEOS::AddEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddEnumerateUserFileCompleteDelegate");

	UOnlineUserCloudFileInterfaceEOS_AddEnumerateUserFileCompleteDelegate_Params params;
	params.EnumerateUserFileCompleteDelegate = EnumerateUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.EnumerateUserFiles
// ()
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
void UOnlineUserCloudFileInterfaceEOS::EnumerateUserFiles(const struct FString& UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.EnumerateUserFiles");

	UOnlineUserCloudFileInterfaceEOS_EnumerateUserFiles_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnEnumerateUserFilesComplete
// ()
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 UserId                         (Parm, NeedCtorLink)
void UOnlineUserCloudFileInterfaceEOS::OnEnumerateUserFilesComplete(bool bWasSuccessful, const struct FString& UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnEnumerateUserFilesComplete");

	UOnlineUserCloudFileInterfaceEOS_OnEnumerateUserFilesComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearFile
// ()
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineUserCloudFileInterfaceEOS::ClearFile(const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearFile");

	UOnlineUserCloudFileInterfaceEOS_ClearFile_Params params;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearFiles
// ()
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineUserCloudFileInterfaceEOS::ClearFiles(const struct FString& UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearFiles");

	UOnlineUserCloudFileInterfaceEOS_ClearFiles_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.GetFileContents
// ()
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TArray<unsigned char>          FileContents                   (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)
bool UOnlineUserCloudFileInterfaceEOS::GetFileContents(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.GetFileContents");

	UOnlineUserCloudFileInterfaceEOS_GetFileContents_Params params;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;


	return params.ReturnValue;
}


// Function OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6.__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6
// ()
// Parameters:
// int                            _                              (Parm)
// struct FString                 PlatformAuthTicket             (Parm, NeedCtorLink)
void U__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6::__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6(int _, const struct FString& PlatformAuthTicket)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6.__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6");

	U__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6___OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6_Params params;
	params._ = _;
	params.PlatformAuthTicket = PlatformAuthTicket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD
// ()
// Parameters:
// bool                           bSuccess                       (Parm)
// struct FString                 Code                           (Parm, NeedCtorLink)
void U__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD::__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD(bool bSuccess, const struct FString& Code)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD");

	U__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD___OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD_Params params;
	params.bSuccess = bSuccess;
	params.Code = Code;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
