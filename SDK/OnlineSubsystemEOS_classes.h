#pragma once

// Name: RL, Version: s4


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemEOS.OnlineSubsystemEOS
// 0x02C8 (FullSize[0x0638] - InheritedSize[0x0370])
class UOnlineSubsystemEOS : public UOnlineSubsystemCommonImpl
{
public:
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                                        // 0x0370(0x0008)
	class UOnlineGameInterfaceEOS*                     GameInterfaceEOS;                                          // 0x0378(0x0008)
	class UOnlineStatsInterfaceEOS*                    StatsInterfaceEOS;                                         // 0x0380(0x0008)
	class UOnlineAuthInterfaceEOS*                     AuthInterfaceEOS;                                          // 0x0388(0x0008)
	class UOnlinePersistentAuthInterfaceEOS*           PersistentAuthInterfaceEOS;                                // 0x0390(0x0008)
	class UOnlineFriendsInterfaceEOS*                  FriendsInterfaceEOS;                                       // 0x0398(0x0008)
	class UOnlineUserCloudFileInterfaceEOS*            UserCloudFileInterfaceEOS;                                 // 0x03A0(0x0008)
	TArray<struct FScriptDelegate>                     SpeechRecognitionCompleteDelegates;                        // 0x03A8(0x0010) (NeedCtorLink)
	struct FPointer                                    AuthHandle;                                                // 0x03B8(0x0008) (Const, Native, Transient)
	struct FPointer                                    FriendsHandle;                                             // 0x03C0(0x0008) (Const, Native, Transient)
	struct FPointer                                    UserInfoHandle;                                            // 0x03C8(0x0008) (Const, Native, Transient)
	struct FPointer                                    PresenceHandle;                                            // 0x03D0(0x0008) (Const, Native, Transient)
	struct FPointer                                    ConnectHandle;                                             // 0x03D8(0x0008) (Const, Native, Transient)
	struct FPointer                                    SessionsHandle;                                            // 0x03E0(0x0008) (Const, Native, Transient)
	struct FPointer                                    PDSHandle;                                                 // 0x03E8(0x0008) (Const, Native, Transient)
	struct FPointer                                    StatsHandle;                                               // 0x03F0(0x0008) (Const, Native, Transient)
	struct FPointer                                    AchievementsHandle;                                        // 0x03F8(0x0008) (Const, Native, Transient)
	struct FPointer                                    EcomHandle;                                                // 0x0400(0x0008) (Const, Native, Transient)
	struct FPointer                                    UIHandle;                                                  // 0x0408(0x0008) (Const, Native, Transient)
	TArray<struct FName>                               UnlockedDLC;                                               // 0x0410(0x0010) (Transient, NeedCtorLink)
	TArray<struct FScriptDelegate>                     UnlockedDLCDelegates;                                      // 0x0420(0x0010) (Transient, NeedCtorLink)
	TArray<struct FScriptDelegate>                     ExternalUIChangeDelegates;                                 // 0x0430(0x0010) (Transient, NeedCtorLink)
	struct FScriptDelegate                             __OnMicroTxnResponse__Delegate;                            // 0x0440(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_D43C[0xC];                                     // 0x0440(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventGetAppPriceInfoComplete__Delegate;                  // 0x0458(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_6LYF[0xC];                                     // 0x0458(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnPlayerTalking__Delegate;                               // 0x0470(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_ZC52[0xC];                                     // 0x0470(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;                         // 0x0488(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_7YZK[0xC];                                     // 0x0488(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;                     // 0x04A0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_CZOA[0xC];                                     // 0x04A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;                // 0x04B8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_S5N4[0xC];                                     // 0x04B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;                    // 0x04D0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_CJZC[0xC];                                     // 0x04D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                            // 0x04E8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_6GWT[0xC];                                     // 0x04E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                            // 0x0500(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_9A7K[0xC];                                     // 0x0500(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnControllerChange__Delegate;                            // 0x0518(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_5VV7[0xC];                                     // 0x0518(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;                      // 0x0530(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_6GBF[0xC];                                     // 0x0530(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                         // 0x0548(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_163Q[0xC];                                     // 0x0548(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnCreateOnlineAccountCompleted__Delegate;                // 0x0560(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_Y9H9[0xC];                                     // 0x0560(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;                    // 0x0578(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_L8BI[0xC];                                     // 0x0578(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnCloseKickPlayerDialog__Delegate;                       // 0x0590(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_R99X[0xC];                                     // 0x0590(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnCommerceDialogClosed__Delegate;                        // 0x05A8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_VVJT[0xC];                                     // 0x05A8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnErrorDialogClosed__Delegate;                           // 0x05C0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_PL36[0xC];                                     // 0x05C0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUnlockedDLCChange__Delegate;                           // 0x05D8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_1OPQ[0xC];                                     // 0x05D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnStorePurchaseCompleteDelegate__Delegate;               // 0x05F0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_DRDL[0xC];                                     // 0x05F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUserOrphaned__Delegate;                                // 0x0608(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_3IDF[0xC];                                     // 0x0608(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUserRestored__Delegate;                                // 0x0620(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_PJN6[0xC];                                     // 0x0620(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemEOS.OnlineSubsystemEOS");
		return ptr;
	}



	bool ManuallyTickEOSPlatform();
	struct FString FormatCurrency(const struct FString& Currency, int Price);
	void ClearMicroTxnResponseDelegate(const struct FScriptDelegate& ResponseMicroTxnDelegate);
	void AddMicroTxnResponseDelegate(const struct FScriptDelegate& ResponseMicroTxnDelegate);
	bool GetAppPriceInfo(struct FUniqueNetId* PlayerID, TArray<struct FName>* AppNames, const struct FScriptDelegate& Callback);
	bool HandleBootMessage();
	bool GetOverlayEnabled();
	bool RefreshNetworkErrorToggle();
	void ClearUserRestoredDelegate(const struct FScriptDelegate& UserRestoredDelegate);
	void AddUserRestoredDelegate(const struct FScriptDelegate& UserRestoredDelegate);
	void OnUserRestored(unsigned char ControllerId);
	void ClearUserOrphanedDelegate(const struct FScriptDelegate& UserOrphanedDelegate);
	void AddUserOrphanedDelegate(const struct FScriptDelegate& UserOrphanedDelegate);
	void OnUserOrphaned(unsigned char ControllerId);
	void OpenStoreForItemsAsync(unsigned char LocalUserNum, TArray<struct FString> Targets, const struct FScriptDelegate& OnStorePurchaseCompleteDelegate);
	void OnStorePurchaseCompleteDelegate();
	void OpenStoreForItems(unsigned char LocalUserNum, TArray<struct FString> Targets);
	void OpenStoreForDLC(unsigned char LocalUserNum, const struct FName& DLC);
	void OpenErrorDialog(unsigned char LocalUserNum, TEnumAsByte<Engine_EPS4ErrorDialog> ErrorCode);
	void OpenPS4DisplayMode(unsigned char LocalUserNum, TEnumAsByte<Engine_EPS4DisplayMode> DisplayMode, TArray<struct FString> Targets, int ServiceLabel);
	void ResetControllerColor(int ControllerId);
	void SetControllerColor(int ControllerId, const struct FColor& NewColor);
	void InitializeTrophyAPI();
	bool AnyPlayerChatRestricted();
	void ClearUnlockedDLCChangeDelegate(const struct FScriptDelegate& InDelegate);
	void AddUnlockedDLCChangeDelegate(const struct FScriptDelegate& InDelegate);
	TArray<struct FName> GetUnlockedDLC();
	void OnUnlockedDLCChange();
	void UpdateSessionStatusFromPlayers(int CurrentPlayerCount, int numBotPlayers);
	void ClearErrorDialogClosedDelegate(const struct FScriptDelegate& InDelegate);
	void AddErrorDialogClosedDelegate(const struct FScriptDelegate& InDelegate);
	void OnErrorDialogClosed(int LocalUserNum);
	void ClearCommerceDialogClosedDelegate(const struct FScriptDelegate& InDelegate);
	void AddCommerceDialogClosedDelegate(const struct FScriptDelegate& InDelegate);
	void OnCommerceDialogClosed();
	TEnumAsByte<Engine_EOnlineServerConnectionStatus> GetCurrentConnectionStatus();
	void ClearCloseKickPlayerDialogDelegate(const struct FScriptDelegate& InDelegate);
	void AddCloseKickPlayerDialogDelegate(const struct FScriptDelegate& InDelegate);
	void OnCloseKickPlayerDialog();
	void OnPlayerTalkingStateChange(const struct FUniqueNetId& Player, bool bIsTalking);
	bool SetVoiceReceiveVolume(float VoiceVolume);
	int GetDLCPurchaseTime(const struct FName& AppName);
	bool SaveKey(const struct FString& ProductKey);
	bool GetLocalAccountNames(TArray<struct FString>* Accounts);
	bool DeleteLocalAccount(const struct FString& Username, const struct FString& Password);
	bool RenameLocalAccount(const struct FString& NewUserName, const struct FString& OldUserName, const struct FString& Password);
	bool CreateLocalAccount(const struct FString& Username, const struct FString& Password);
	void ClearCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate);
	void AddCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate);
	void OnCreateOnlineAccountCompleted(TEnumAsByte<Engine_EOnlineAccountCreateStatus> ErrorStatus);
	bool CreateOnlineAccount(const struct FString& Username, const struct FString& Password, const struct FString& EmailAddress, const struct FString& ProductKey);
	bool IsKeyValid();
	void ClearStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate);
	void AddStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate);
	void OnStorageDeviceChange();
	TEnumAsByte<Engine_ENATType> GetNATType();
	void ClearConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate);
	void AddConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate);
	void OnConnectionStatusChange(TEnumAsByte<Engine_EOnlineServerConnectionStatus> ConnectionStatus);
	bool IsControllerConnected(int ControllerId);
	void ClearControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate);
	void AddControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate);
	void OnControllerChange(int ControllerId, bool bIsConnected);
	void SetNetworkNotificationPosition(TEnumAsByte<Engine_ENetworkNotificationPosition> NewPos);
	TEnumAsByte<Engine_ENetworkNotificationPosition> GetNetworkNotificationPosition();
	void NotifyExternalUIChanged(bool bIsOpening);
	void ClearExternalUIChangeDelegate(const struct FScriptDelegate& InDelegate);
	void AddExternalUIChangeDelegate(const struct FScriptDelegate& InDelegate);
	void OnExternalUIChange(bool bIsOpening);
	void ClearLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate);
	void AddLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate);
	void OnLinkStatusChange(bool bIsConnected);
	bool HasLinkConnection();
	bool RegisterStatGuid(const struct FUniqueNetId& PlayerID, struct FString* ClientStatGuid);
	struct FString GetClientStatGuid();
	void ClearRegisterHostStatGuidCompleteDelegateDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate);
	void AddRegisterHostStatGuidCompleteDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate);
	void OnFlushOnlineStatsComplete(const struct FName& SessionName, bool bWasSuccessful);
	void OnRegisterHostStatGuidComplete(bool bWasSuccessful);
	bool RegisterHostStatGuid(struct FString* HostStatGuid);
	struct FString GetHostStatGuid();
	bool WriteOnlinePlayerScores(TArray<struct FOnlinePlayerScore>* PlayerScores);
	void FreeStats(class UOnlineStatsRead* StatsRead);
	void ClearReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate);
	void AddReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate);
	void OnReadOnlineStatsComplete(bool bWasSuccessful);
	bool ReadOnlineStatsByRankAroundPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows);
	bool ReadOnlineStatsByRank(class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead);
	bool ReadOnlineStatsForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead);
	bool ReadOnlineStats(TArray<struct FUniqueNetId>* Players, class UOnlineStatsRead* StatsRead);
	bool UnmuteAll(unsigned char LocalUserNum);
	bool MuteAll(unsigned char LocalUserNum, bool bAllowFriends);
	bool SetSpeechRecognitionObject(unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj);
	bool SelectVocabulary(unsigned char LocalUserNum, int VocabularyId);
	void ClearRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate);
	void AddRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate);
	void OnRecognitionComplete();
	bool GetRecognitionResults(unsigned char LocalUserNum, TArray<struct FSpeechRecognizedWord>* Words);
	bool StopSpeechRecognition(unsigned char LocalUserNum);
	bool StartSpeechRecognition(unsigned char LocalUserNum);
	void StopNetworkedVoice(unsigned char LocalUserNum);
	void StartNetworkedVoice(unsigned char LocalUserNum);
	void ClearPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate);
	void AddPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate);
	void OnPlayerTalking(const struct FUniqueNetId& Player);
	bool UnmuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool MuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool SetRemoteTalkerPriority(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, int Priority);
	bool IsHeadsetPresent(unsigned char LocalUserNum);
	bool IsRemotePlayerTalking(const struct FUniqueNetId& PlayerID);
	bool IsLocalPlayerTalking(unsigned char LocalUserNum);
	bool UnregisterRemoteTalker(const struct FUniqueNetId& PlayerID);
	bool RegisterRemoteTalker(const struct FUniqueNetId& PlayerID);
	bool UnregisterLocalTalker(unsigned char LocalUserNum);
	bool RegisterLocalTalker(unsigned char LocalUserNum);
	struct FUniqueNetId GetPlayerUniqueNetIdFromIndex(int UserIndex);
	struct FString GetPlayerNicknameFromIndex(int UserIndex);
	bool Init();
	bool InitEOS(struct FString* SandboxId, struct FString* DeploymentId);
	void EventGetAppPriceInfoComplete(const struct FName& AppName, const struct FString& Price, const struct FString& DiscountPrice, int DiscountPercentage);
	void OnMicroTxnResponse(bool bAuthorized);
};

// Class OnlineSubsystemEOS.OnlineAuthInterfaceEOS
// 0x0008 (FullSize[0x03D0] - InheritedSize[0x03C8])
class UOnlineAuthInterfaceEOS : public UOnlineAuthInterfaceImpl
{
public:
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                                        // 0x03C8(0x0008) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemEOS.OnlineAuthInterfaceEOS");
		return ptr;
	}



	bool RequiresAuthTicket();
	bool RequestAuthTicket(const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& Callback);
	bool RequestMtxCode(const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& Callback);
};

// Class OnlineSubsystemEOS.OnlineFriendsInterfaceEOS
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class UOnlineFriendsInterfaceEOS : public UOnlineFriendsInterfaceImpl
{
public:
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                                        // 0x0080(0x0008) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemEOS.OnlineFriendsInterfaceEOS");
		return ptr;
	}



	bool GetActivePlatformId(unsigned char LocalUserNum, const struct FUniqueNetId& AccountId, struct FUniqueNetId* PlatformId);
	bool RequestLinkedAccounts(unsigned char LocalUserNum, TArray<struct FUniqueNetId> AccountIds, const struct FScriptDelegate& Callback);
};

// Class OnlineSubsystemEOS.OnlineGameInterfaceEOS
// 0x001C (FullSize[0x0334] - InheritedSize[0x0318])
class UOnlineGameInterfaceEOS : public UOnlineGameInterfaceImpl
{
public:
	struct FPointer                                    SessionsHandle;                                            // 0x0318(0x0008) (Const, Native, Transient)
	struct FPointer                                    CurrentSearchHandle;                                       // 0x0320(0x0008) (Const, Native, Transient)
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                                        // 0x0328(0x0008)
	unsigned long                                      bGameSessionUpdateInProgress : 1;                          // 0x0330(0x0001) BIT_FIELD


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemEOS.OnlineGameInterfaceEOS");
		return ptr;
	}



	bool AcceptGameInvite(unsigned char LocalUserNum, const struct FName& SessionName);
	bool FreeSearchResults(class UOnlineGameSearch* Search);
	bool UpdateOnlineGame(const struct FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData);
};

// Class OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UOnlinePersistentAuthInterfaceEOS : public UOnlinePersistentAuthInterfaceImpl
{
public:
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                                        // 0x00B8(0x0008) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS");
		return ptr;
	}



	bool AuthWithNintendoAccountToken(unsigned char LocalUserNum, struct FString* NintendoAccountToken);
	class UDateTime* GetAuthExpirationTimestamp(unsigned char LocalUserNum);
	bool LaunchAccountPortal(unsigned char LocalUserNum);
	struct FString GetClientCredentials();
	struct FString GetContinuanceToken(unsigned char LocalUserNum);
	bool UseRefreshToken(unsigned char LocalUserNum, const struct FString& RefreshToken);
	struct FString GetRefreshToken(unsigned char LocalUserNum);
	bool RequestPinGrantCode(unsigned char LocalUserNum);
};

// Class OnlineSubsystemEOS.OnlinePlayerInterfaceEOS
// 0x05B8 (FullSize[0x0618] - InheritedSize[0x0060])
class UOnlinePlayerInterfaceEOS : public UObject
{
public:
	struct FPointer                                    AuthHandle;                                                // 0x0060(0x0008) (Const, Native, Transient)
	struct FPointer                                    FriendsHandle;                                             // 0x0068(0x0008) (Const, Native, Transient)
	struct FPointer                                    UserInfoHandle;                                            // 0x0070(0x0008) (Const, Native, Transient)
	struct FPointer                                    PresenceHandle;                                            // 0x0078(0x0008) (Const, Native, Transient)
	struct FPointer                                    ConnectHandle;                                             // 0x0080(0x0008) (Const, Native, Transient)
	struct FPointer                                    PDSHandle;                                                 // 0x0088(0x0008) (Const, Native, Transient)
	struct FPointer                                    EcomHandle;                                                // 0x0090(0x0008) (Const, Native, Transient)
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                                           // 0x0098(0x0008)
	class UOnlineGameInterfaceEOS*                     GameInterfaceEOS;                                          // 0x00A0(0x0008)
	class UOnlinePersistentAuthInterfaceEOS*           PersistentAuthInterfaceEOS;                                // 0x00A8(0x0008)
	int                                                DefaultLocalUser;                                          // 0x00B0(0x0004)
	unsigned char                                      UnknownData_IRNQ[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ProfileDataDirectory;                                      // 0x00B8(0x0010) (Config, NeedCtorLink)
	struct FString                                     ProfileDataExtension;                                      // 0x00C8(0x0010) (Config, NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadProfileSettingsDelegates;                              // 0x00D8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteProfileSettingsDelegates;                             // 0x00E8(0x0010) (NeedCtorLink)
	class UOnlineProfileSettings*                      CachedProfile;                                             // 0x00F8(0x0008)
	TArray<struct FOnlineProfileSetting>               LastProfileSettings;                                       // 0x0100(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadFriendsDelegates;                                      // 0x0110(0x0010) (NeedCtorLink)
	TEnumAsByte<Engine_EOnlineEnumerationReadState>    FriendsReadState;                                          // 0x0120(0x0001)
	unsigned char                                      UnknownData_0F9C[0x7];                                     // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FScriptDelegate>                     FriendsChangeDelegates;                                    // 0x0128(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoginFailedDelegates;                                      // 0x0138(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoginCancelledDelegates;                                   // 0x0148(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LogoutCompletedDelegates;                                  // 0x0158(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     MutingChangeDelegates;                                     // 0x0168(0x0010) (NeedCtorLink)
	TArray<struct FOnlineStatusMappingEOS>             StatusMappings;                                            // 0x0178(0x0010) (Const, Config, NeedCtorLink)
	struct FString                                     DefaultStatus;                                             // 0x0188(0x0010) (Const, Localized, NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReceivedGameInviteDelegates;                               // 0x0198(0x0010) (NeedCtorLink)
	TArray<struct FOnlineFriendMessage>                CachedFriendMessages;                                      // 0x01A8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinFriendGameCompleteDelegates;                           // 0x01B8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AchievementDelegates;                                      // 0x01C8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AchievementReadDelegates;                                  // 0x01D8(0x0010) (NeedCtorLink)
	struct FPointer                                    AchievementsHandle;                                        // 0x01E8(0x0008) (Const, Native, Transient)
	TArray<struct FScriptDelegate>                     LoginChangeDelegates;                                      // 0x01F0(0x0010) (Transient, NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReceivedPinGrantDelegates;                                 // 0x0200(0x0010) (Transient, NeedCtorLink)
	struct FScriptDelegate                             __OnLoginChange__Delegate;                                 // 0x0210(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_875S[0xC];                                     // 0x0210(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                              // 0x0228(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_YWH1[0xC];                                     // 0x0228(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnMutingChange__Delegate;                                // 0x0240(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_CS91[0xC];                                     // 0x0240(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                               // 0x0258(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_LZYT[0xC];                                     // 0x0258(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                                 // 0x0270(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_8DC2[0xC];                                     // 0x0270(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReceievedPinGrantCode__Delegate;                       // 0x0288(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_1U4K[0xC];                                     // 0x0288(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                             // 0x02A0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_ZRPY[0xC];                                     // 0x02A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;                 // 0x02B8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_17YL[0xC];                                     // 0x02B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;                // 0x02D0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_J2YA[0xC];                                     // 0x02D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                         // 0x02E8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_4IZI[0xC];                                     // 0x02E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;                       // 0x0300(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_O2ZZ[0xC];                                     // 0x0300(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAddFriendComplete__Delegate;                           // 0x0318(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_RWFA[0xC];                                     // 0x0318(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnQueryUserByDisplayName__Delegate;                      // 0x0330(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_QPDG[0xC];                                     // 0x0330(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;                     // 0x0348(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_259N[0xC];                                     // 0x0348(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAcceptFriendInviteComplete__Delegate;                  // 0x0360(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_CV2G[0xC];                                     // 0x0360(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDenyFriendInviteComplete__Delegate;                    // 0x0378(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_GT9F[0xC];                                     // 0x0378(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRemoveFriendComplete__Delegate;                        // 0x0390(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_3YRS[0xC];                                     // 0x0390(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;                        // 0x03A8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_AYZ0[0xC];                                     // 0x03A8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFriendInviteCanceled__Delegate;                        // 0x03C0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_N4O9[0xC];                                     // 0x03C0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                          // 0x03D8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_5F2D[0xC];                                     // 0x03D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;                      // 0x03F0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_MOHM[0xC];                                     // 0x03F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;                       // 0x0408(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_3SSO[0xC];                                     // 0x0408(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRequestNativePlatformAuthTicketComplete__Delegate;     // 0x0420(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_3L7I[0xC];                                     // 0x0420(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;                   // 0x0438(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_PTB5[0xC];                                     // 0x0438(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;           // 0x0450(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_2T63[0xC];                                     // 0x0450(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;                  // 0x0468(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_EWA2[0xC];                                     // 0x0468(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadCrossTitleProfileSettingsComplete__Delegate;       // 0x0480(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_0N28[0xC];                                     // 0x0480(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUserSignInComplete__Delegate;                          // 0x0498(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_RAR7[0xC];                                     // 0x0498(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __CanPlayOnlineChanged__Delegate;                          // 0x04B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_2Y31[0xC];                                     // 0x04B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnSaveDataNoSpaceDialogComplete__Delegate;               // 0x04C8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_LXML[0xC];                                     // 0x04C8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRegisteredController__Delegate;                        // 0x04E0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_FDZY[0xC];                                     // 0x04E0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUnregisteredController__Delegate;                      // 0x04F8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_0QK4[0xC];                                     // 0x04F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnInputAPIChanged__Delegate;                             // 0x0510(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_2SGL[0xC];                                     // 0x0510(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                           // 0x0528(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_I990[0xC];                                     // 0x0528(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUserSwitchComplete__Delegate;                          // 0x0540(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_OOVQ[0xC];                                     // 0x0540(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;                     // 0x0558(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_0U63[0xC];                                     // 0x0558(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;                          // 0x0570(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_3AP1[0xC];                                     // 0x0570(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;                   // 0x0588(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_ZJTF[0xC];                                     // 0x0588(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;                    // 0x05A0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_HVXB[0xC];                                     // 0x05A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAvatarChange__Delegate;                                // 0x05B8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_6LCJ[0xC];                                     // 0x05B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __FriendPresenceChange__Delegate;                          // 0x05D0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_C7F8[0xC];                                     // 0x05D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnPlayerCountryRetrieved__Delegate;                      // 0x05E8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_3GY3[0xC];                                     // 0x05E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnSanitizeStringComplete__Delegate;                      // 0x0600(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_ZDN6[0xC];                                     // 0x0600(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemEOS.OnlinePlayerInterfaceEOS");
		return ptr;
	}



	bool ShowInviteUI(unsigned char LocalUserNum, const struct FString& InviteText);
	bool ShowGamerCardUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	void SetRichPresence(unsigned char LocalUserNum, const struct FString& PresenceString, const struct FString& GameDataString);
	void GetFriendPresence(struct FOnlineFriend* FriendData);
	bool RecordPlayersRecentlyMet(unsigned char LocalUserNum, TArray<struct FUniqueNetId>* Players, const struct FString& GameDescription);
	bool WordFilterSanitizeString(const struct FString& Comment, const struct FScriptDelegate& SanitizeDelegate, const struct FUniqueNetId& PlayerID);
	void OnSanitizeStringComplete(const struct FWordFilterResult& Result);
	bool HideKeyboardUI(unsigned char LocalUserNum);
	void ClearReadPlayerCountryDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerCountryDelegate);
	void AddReadPlayerCountryDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerCountryDelegate);
	void OnPlayerCountryRetrieved(const struct FUniqueNetId& PlayerID, const struct FString& Country);
	void GetPlayerCountry(unsigned char LocalUserNum);
	void ClearAvatarChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& AvatarDelegate);
	void AddAvatarChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& AvatarDelegate);
	void ClearFriendPresenceChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& PresenceDelegate);
	void AddFriendPresenceChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& PresenceDelegate);
	void FriendPresenceChange(const struct FUniqueNetId& PlayerID);
	void OnAvatarChange(const struct FUniqueNetId& PlayerID);
	bool UnlockAchievement(unsigned char LocalUserNum, int AchievementId, float PercentComplete);
	bool ReadAchievements(unsigned char LocalUserNum, int TitleId, bool bShouldReadText, bool bShouldReadImages);
	TEnumAsByte<Engine_EOnlineEnumerationReadState> GetAchievements(unsigned char LocalUserNum, TArray<struct FAchievementDetails>* Achievements, int TitleId);
	void ClearReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate);
	void ClearUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate);
	void AddReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate);
	void AddUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate);
	void OnReadAchievementsComplete(int TitleId);
	void OnUnlockAchievementComplete(bool bWasSuccessful);
	bool ShowControllerUI();
	struct FString GetPlayerLanguage(unsigned char LocalUserNum);
	bool ShowPlayersUI(unsigned char LocalUserNum);
	void ClearProfileDataChangedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate);
	void AddProfileDataChangedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate);
	void OnProfileDataChanged();
	bool UnlockGamerPicture(unsigned char LocalUserNum, int PictureId);
	bool IsDeviceValid(int DeviceID);
	int GetDeviceSelectionResults(unsigned char LocalUserNum, struct FString* DeviceName);
	void ClearDeviceSelectionDoneDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& DeviceDelegate);
	void AddDeviceSelectionDoneDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& DeviceDelegate);
	void OnDeviceSelectionComplete(bool bWasSuccessful);
	bool ShowDeviceSelectionUI(unsigned char LocalUserNum, int SizeNeeded, bool bForceShowUI);
	bool ShowCustomPlayersUI(unsigned char LocalUserNum, TArray<struct FUniqueNetId>* Players, const struct FString& Title, const struct FString& Description);
	bool IsUserSwitchActive();
	void SetKickPlayerDialogActive(bool Active);
	void SetKickPreviousUser(unsigned char LocalUserNum);
	bool ShowLoginUIForOrphanedUser(unsigned char LocalUserNum);
	TArray<unsigned long> GetSyncedAchievements(unsigned char LocalUserNum);
	bool IsGuestLogin(unsigned char LocalUserNum);
	void RequestRestrictedFeatureMessaging(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilege> RestrictedFeature);
	bool CanCommunicateVoice(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanCommunicateVideo(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanCommunicateText(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanShareUserCreatedContent(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanAccessPremiumVideoContent(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanAccessPremiumContent(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanUseCloudStorage(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanRecordDVRClips(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanBrowseInternet(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanShareWithSocialNetwork(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanShareKinectContent(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanUploadFitnessData(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	void SetPrimaryPlayerGamepadToLastInput();
	void ClearUserSwitchCompleteDelegate(const struct FScriptDelegate& UserSwitchCompleteDelegate);
	void AddUserSwitchCompleteDelegate(const struct FScriptDelegate& UserSwitchCompleteDelegate);
	void OnUserSwitchComplete(unsigned char LocalUserNum);
	void ClearLoginStatusChangeDelegate(const struct FScriptDelegate& InDelegate, unsigned char LocalUserNum);
	void AddLoginStatusChangeDelegate(const struct FScriptDelegate& InDelegate, unsigned char LocalUserNum);
	void OnLoginStatusChange(TEnumAsByte<Engine_ELoginStatus> NewStatus, const struct FUniqueNetId& NewId);
	bool GetPlayHistoryRegistrationKey(TArray<unsigned char>* Key);
	bool CheckParentalControlInfo(bool bShowUi);
	TArray<struct FName> GetActiveDiscDLC();
	void SetOnlineSubscriptionRequirement(bool bRequiresOnlineSubscription);
	int GetControllerID(int LocalPlayerNum);
	TArray<struct FName> GetConnectedControllerNames();
	void OnLocalPlayerRemoved(int LocalPlayerNum);
	void UnregisterController(int LocalPlayerNum);
	void RegisterController(int LocalPlayerNum, int ControllerId);
	bool CanRegisterController(int LocalPlayerNum);
	bool ShowBindings(int ControllerId);
	void SetControllerLayout(int ControllerId, const struct FName& LayoutName);
	void SetInputAPI(TEnumAsByte<Core_EInputAPI> TargetAPI);
	void ClearInputAPIChangedDelegate(const struct FScriptDelegate& InputAPIChangedDelegate);
	void AddInputAPIChangedDelegate(const struct FScriptDelegate& InputAPIChangedDelegate);
	void OnInputAPIChanged(TEnumAsByte<Core_EInputAPI> TargetAPI);
	void ClearUnregisteredControllerDelegate(const struct FScriptDelegate& UnregisteredControllerDelegate);
	void ClearRegisteredControllerDelegate(const struct FScriptDelegate& RegisteredControllerDelegate);
	void AddUnregisteredControllerDelegate(const struct FScriptDelegate& UnregisteredControllerDelegate);
	void AddRegisteredControllerDelegate(const struct FScriptDelegate& RegisteredControllerDelegate);
	void OnUnregisteredController(int LocalPlayerNum);
	void OnRegisteredController(int LocalPlayerNum, int ControllerId);
	bool AddInGamePost(const struct FString& InPostID, unsigned char LocalUserNum, TArray<struct FString> StringReplaceList);
	bool UpdateStat(unsigned char LocalUserNum, const struct FName& StatName, int Points);
	void ClearSaveDataNoSpaceDialogCompleteDelegate(const struct FScriptDelegate& DeviceDelegate);
	void AddSaveDataNoSpaceDialogCompleteDelegate(const struct FScriptDelegate& DeviceDelegate);
	void OnSaveDataNoSpaceDialogComplete(bool bContinueWithoutSave);
	bool RecordPlayersRecentlyMetKeys(unsigned char LocalUserNum, TArray<struct FFriendHistoryKey> PlayerKeys);
	bool IsAchievementUnlocked(int AchievementId);
	bool ShowContentMarketplaceUI(unsigned char LocalUserNum);
	bool ShowFriendsInviteUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool ShowAchievementsUI(unsigned char LocalUserNum);
	bool ShowMessagesUI(unsigned char LocalUserNum);
	bool ShowFeedbackUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	void RemoveCanPlayOnlineChangedDelegate(const struct FScriptDelegate& Callback);
	void AddCanPlayOnlineChangedDelegate(const struct FScriptDelegate& Callback);
	void CanPlayOnlineChanged(unsigned char LocalUserNum);
	void ClearUserSignInCompleteDelegate(const struct FScriptDelegate& InDelegate);
	void AddUserSignInCompleteDelegate(const struct FScriptDelegate& InDelegate);
	void OnUserSignInComplete(unsigned char LocalUserNum);
	bool ShowCustomMessageUI(unsigned char LocalUserNum, TArray<struct FUniqueNetId>* Recipients, const struct FString& MessageTitle, const struct FString& NonEditableMessage, const struct FString& EditableMessage);
	void ClearCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId);
	class UOnlineProfileSettings* GetCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId);
	void ClearReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate);
	void AddReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate);
	void OnReadCrossTitleProfileSettingsComplete(unsigned char LocalUserNum, int TitleId, bool bWasSuccessful);
	bool ReadCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId, class UOnlineProfileSettings* ProfileSettings);
	void ClearWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate);
	void AddWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate);
	void OnWritePlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool WritePlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID);
	void ClearReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& InDelegate);
	void AddReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& InDelegate);
	void OnReadPlayerStorageForNetIdComplete(const struct FUniqueNetId& NetId, bool bWasSuccessful);
	bool ReadPlayerStorageForNetId(unsigned char LocalUserNum, const struct FUniqueNetId& NetId, class UOnlinePlayerStorage* PlayerStorage);
	void ClearReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate);
	void AddReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate);
	void OnReadPlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool ReadPlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID);
	class UOnlinePlayerStorage* GetPlayerStorage(unsigned char LocalUserNum);
	void RequestNativePlatformAuthTicket(int LocalUserNum, const struct FScriptDelegate& Callback);
	void OnRequestNativePlatformAuthTicketComplete(int LocalUserNum, const struct FString& PlatformAuthTicket);
	void LinkedAccount(int LocalUserNum);
	void RefreshConnectLogin(int LocalUserNum);
	void ConnectLogin(int LocalUserNum);
	bool HasIncomingFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& InviteFrom);
	bool SupportInGameLogin();
	bool HasFriendsFunctionality();
	bool DeleteMessage(unsigned char LocalUserNum, int MessageIndex);
	void ClearFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate);
	void AddFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate);
	void OnFriendMessageReceived(unsigned char LocalUserNum, const struct FUniqueNetId& SendingPlayer, const struct FString& SendingNick, const struct FString& Message);
	void GetFriendMessages(unsigned char LocalUserNum, TArray<struct FOnlineFriendMessage>* FriendMessages);
	void ClearJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate);
	void AddJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate);
	void OnJoinFriendGameComplete(bool bWasSuccessful);
	bool JoinFriendGame(unsigned char LocalUserNum, const struct FUniqueNetId& Friend);
	void ClearReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate);
	void AddReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate);
	void OnReceivedGameInvite(unsigned char LocalUserNum, const struct FString& InviterName);
	bool SendGameInviteToFriends(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Friends, const struct FString& Text);
	bool SendGameInviteToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Text);
	bool SendMessageToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Message);
	void ClearFriendInviteCanceledDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate);
	void AddFriendInviteCanceledDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate);
	void OnFriendInviteCanceled(unsigned char LocalUserNum, const struct FUniqueNetId& CanceledUserId);
	void ClearFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate);
	void AddFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate);
	void OnFriendInviteReceived(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer, const struct FString& RequestingNick, const struct FString& Message);
	bool RemoveFriend(unsigned char LocalUserNum, const struct FUniqueNetId& FormerFriend);
	void ClearRemoveFriendCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RemoveFriendDelegate);
	void AddRemoveFriendCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RemoveFriendDelegate);
	void OnRemoveFriendComplete(bool bWasSuccessful, const struct FUniqueNetId& RemovedID);
	bool DenyFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer);
	void ClearDenyFriendInviteCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void AddDenyFriendInviteCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void OnDenyFriendInviteComplete(const struct FUniqueNetId& FriendId, class UError* Error);
	bool AcceptFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer);
	void ClearAcceptFriendInviteCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void AddAcceptFriendInviteCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void OnAcceptFriendInviteComplete(const struct FUniqueNetId& FriendId, class UError* Error);
	void ClearAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void AddAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void OnAddFriendByNameComplete(bool bWasSuccessful);
	bool AddFriendByName(unsigned char LocalUserNum, const struct FString& FriendName, const struct FString& Message);
	bool QueryUserByDisplayName(unsigned char LocalUserNum, const struct FString& DisplayName);
	void ClearQueryUserByDisplayNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& QueryDelegate);
	void AddQueryUserByDisplayNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& QueryDelegate);
	void OnQueryUserByDisplayName(bool bWasSuccessful, const struct FString& QueriedDisplayName, const struct FUniqueNetId& UserId);
	bool AddFriend(unsigned char LocalUserNum, const struct FUniqueNetId& NewFriend, const struct FString& Message);
	void ClearAddFriendCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void AddAddFriendCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void OnAddFriendComplete(const struct FUniqueNetId& NewFriendId, class UError* Error);
	struct FString GetKeyboardInputResults(unsigned char* bWasCanceled);
	void ClearKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate);
	void AddKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate);
	void OnKeyboardInputComplete(bool bWasSuccessful);
	bool ShowKeyboardUI(unsigned char LocalUserNum, const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const struct FString& DefaultText, int MaxResultLength);
	void SetOnlineStatus(unsigned char LocalUserNum, int StatusId, TArray<struct FLocalizedStringSetting>* LocalizedStringSettings, TArray<struct FSettingsProperty>* Properties);
	TEnumAsByte<Engine_EOnlineEnumerationReadState> GetFriendsList(unsigned char LocalUserNum, TArray<struct FOnlineFriend>* Friends, int Count, int StartingAt);
	void ClearReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate);
	void AddReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate);
	void OnReadFriendsComplete(bool bWasSuccessful);
	bool ReadFriendsList(unsigned char LocalUserNum, int Count, int StartingAt);
	void ClearWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate);
	void AddWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate);
	void OnWriteProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool WriteProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	class UOnlineProfileSettings* GetProfileSettings(unsigned char LocalUserNum);
	void ClearReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void AddReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void OnReadProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool ReadProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	void ClearFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate);
	void AddFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate);
	void ClearMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate);
	void AddMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate);
	void ClearLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate);
	void AddLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate);
	void ClearLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate);
	void AddLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate);
	bool ShowFriendsUI(unsigned char LocalUserNum);
	bool IsMuted(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool AreAnyFriends(unsigned char LocalUserNum, TArray<struct FFriendsQuery>* Query);
	bool IsFriend(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool CanShowPresenceInformation(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanViewPlayerProfiles(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanPurchaseContent(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanDownloadUserContent(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	TEnumAsByte<Engine_EFeaturePrivilegeLevel> CanCommunicate(unsigned char LocalUserNum, TEnumAsByte<Engine_ECommunicationMethod> CommMethod, bool bAttemptToResolve);
	bool CanPlayOnline(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	struct FString GetPlayerNickname(unsigned char LocalUserNum);
	bool GetUniquePlayerId(unsigned char LocalUserNum, struct FUniqueNetId* PlayerID);
	TEnumAsByte<Engine_ELoginStatus> GetLoginStatus(unsigned char LocalUserNum);
	void ClearLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate);
	void AddLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate);
	void OnLogoutCompleted(bool bWasSuccessful);
	bool Logout(unsigned char LocalUserNum);
	void ClearLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate);
	void AddLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate);
	void OnReceievedPinGrantCode(TEnumAsByte<Engine_EPinGrantResult> Result, unsigned char LocalUserNum, const struct FString& Code, const struct FString& URL, int SecondsUntilExpiration);
	void OnLoginFailed(unsigned char LocalUserNum, TEnumAsByte<Engine_EOnlineServerConnectionStatus> ErrorCode);
	bool AutoLogin();
	bool Login(unsigned char LocalUserNum, const struct FString& LoginName, const struct FString& Password, bool bWantsLocalOnly);
	bool ShowLoginUI(unsigned char LocalUserNum, bool bShowOnlineOnly);
	void OnFriendsChange();
	void OnMutingChange();
	void OnLoginCancelled();
	void OnLoginChange(unsigned char LocalUserNum);
};

// Class OnlineSubsystemEOS.OnlineStatsInterfaceEOS
// 0x0068 (FullSize[0x00C8] - InheritedSize[0x0060])
class UOnlineStatsInterfaceEOS : public UObject
{
public:
	struct FPointer                                    StatsHandle;                                               // 0x0060(0x0008) (Const, Native, Transient)
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                                        // 0x0068(0x0008)
	TArray<struct FScriptDelegate>                     ReadStatsDelegates;                                        // 0x0070(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;                     // 0x0080(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_7HNP[0xC];                                     // 0x0080(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;                    // 0x0098(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_RSWL[0xC];                                     // 0x0098(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;                // 0x00B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_62XJ[0xC];                                     // 0x00B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemEOS.OnlineStatsInterfaceEOS");
		return ptr;
	}



	bool RegisterStatGuid(const struct FUniqueNetId& PlayerID, struct FString* ClientStatGuid);
	struct FString GetClientStatGuid();
	void ClearRegisterHostStatGuidCompleteDelegateDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate);
	void AddRegisterHostStatGuidCompleteDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate);
	void OnRegisterHostStatGuidComplete(bool bWasSuccessful);
	bool RegisterHostStatGuid(struct FString* HostStatGuid);
	struct FString GetHostStatGuid();
	bool WriteOnlinePlayerScores(const struct FName& SessionName, int LeaderboardId, TArray<struct FOnlinePlayerScore>* PlayerScores);
	void ClearFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate);
	void AddFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate);
	void OnFlushOnlineStatsComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool FlushOnlineStats(const struct FName& SessionName);
	bool WriteOnlineStats(const struct FName& SessionName, const struct FUniqueNetId& Player, class UOnlineStatsWrite* StatsWrite);
	void FreeStats(class UOnlineStatsRead* StatsRead);
	void ClearReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate);
	void AddReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate);
	void OnReadOnlineStatsComplete(bool bWasSuccessful);
	bool ReadOnlineStatsByRankAroundPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows);
	bool ReadOnlineStatsByRank(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead);
	bool ReadOnlineStatsForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead);
	bool ReadOnlineStats(unsigned char LocalUserNum, TArray<struct FUniqueNetId>* Players, class UOnlineStatsRead* StatsRead);
};

// Class OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS
// 0x00B8 (FullSize[0x0118] - InheritedSize[0x0060])
class UOnlineUserCloudFileInterfaceEOS : public UObject
{
public:
	struct FPointer                                    PDSHandle;                                                 // 0x0060(0x0008) (Const, Native, Transient)
	int                                                LastReadFileErrorCode;                                     // 0x0068(0x0004) (Native, Transient)
	unsigned char                                      UnknownData_MB2S[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                                        // 0x0070(0x0008)
	TArray<struct FScriptDelegate>                     EnumerateUserFileCompleteDelegates;                        // 0x0078(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadUserFileCompleteDelegates;                             // 0x0088(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteUserFileCompleteDelegates;                            // 0x0098(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     DeleteUserFileCompleteDelegates;                           // 0x00A8(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __OnEnumerateUserFilesComplete__Delegate;                  // 0x00B8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_Q5S1[0xC];                                     // 0x00B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadUserFileComplete__Delegate;                        // 0x00D0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_4API[0xC];                                     // 0x00D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnWriteUserFileComplete__Delegate;                       // 0x00E8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_JUCT[0xC];                                     // 0x00E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDeleteUserFileComplete__Delegate;                      // 0x0100(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_8PA4[0xC];                                     // 0x0100(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS");
		return ptr;
	}



	void ClearAllDelegates();
	void ClearDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate);
	void AddDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate);
	bool DeleteUserFile(const struct FString& UserId, const struct FString& Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete);
	void OnDeleteUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void ClearWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate);
	void AddWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate);
	bool WriteUserFile(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents);
	void OnWriteUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void ClearReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate);
	void AddReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate);
	bool ReadUserFile(const struct FString& UserId, const struct FString& Filename);
	void OnReadUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void GetUserFileList(const struct FString& UserId, TArray<struct FEmsFile>* UserFiles);
	void ClearEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate);
	void AddEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate);
	void EnumerateUserFiles(const struct FString& UserId);
	void OnEnumerateUserFilesComplete(bool bWasSuccessful, const struct FString& UserId);
	bool ClearFile(const struct FString& UserId, const struct FString& Filename);
	bool ClearFiles(const struct FString& UserId);
	bool GetFileContents(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents);
};

// Class OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6
// 0x0004 (FullSize[0x0064] - InheritedSize[0x0060])
class U__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6 : public UObject
{
public:
	int                                                LocalUserNum;                                              // 0x0060(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6");
		return ptr;
	}



	void __OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6(int _, const struct FString& PlatformAuthTicket);
};

// Class OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class U__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD : public UObject
{
public:
	int                                                LocalUserNum;                                              // 0x0060(0x0004)
	unsigned char                                      UnknownData_87Q4[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             Callback;                                                  // 0x0068(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_5FDN[0xC];                                     // 0x0064(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD");
		return ptr;
	}



	void __OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD(bool bSuccess, const struct FString& Code);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
