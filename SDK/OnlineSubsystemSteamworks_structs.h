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
// Enums
//---------------------------------------------------------------------------

// Enum OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ESteamMatchmakingType
enum class OnlineSubsystemSteamworks_ESteamMatchmakingType : uint8_t
{
	SMT_Invalid                    = 0,
	SMT_LAN                        = 1,
	SMT_Internet                   = 2,
	SMT_MAX                        = 3,

};

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardSortType
enum class OnlineSubsystemSteamworks_ELeaderboardSortType : uint8_t
{
	LST_Ascending                  = 0,
	LST_Descending                 = 1,
	LST_MAX                        = 2,

};

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardRequestType
enum class OnlineSubsystemSteamworks_ELeaderboardRequestType : uint8_t
{
	LRT_Global                     = 0,
	LRT_Player                     = 1,
	LRT_Friends                    = 2,
	LRT_MAX                        = 3,

};

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardFormat
enum class OnlineSubsystemSteamworks_ELeaderboardFormat : uint8_t
{
	LF_Number                      = 0,
	LF_Seconds                     = 1,
	LF_Milliseconds                = 2,
	LF_MAX                         = 3,

};

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardUpdateType
enum class OnlineSubsystemSteamworks_ELeaderboardUpdateType : uint8_t
{
	LUT_KeepBest                   = 0,
	LUT_Force                      = 1,
	LUT_MAX                        = 2,

};

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EMuteType
enum class OnlineSubsystemSteamworks_EMuteType : uint8_t
{
	MUTE_None                      = 0,
	MUTE_AllButFriends             = 1,
	MUTE_All                       = 2,
	MUTE_MAX                       = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.WorkshopItemData
// 0x00A0
struct FWorkshopItemData
{
	struct FString                                     Title;                                                     // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Description;                                               // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     MetaData;                                                  // 0x0020(0x0010) (NeedCtorLink)
	struct FString                                     Content;                                                   // 0x0030(0x0010) (NeedCtorLink)
	struct FString                                     Preview;                                                   // 0x0040(0x0010) (NeedCtorLink)
	struct FString                                     Tags;                                                      // 0x0050(0x0010) (NeedCtorLink)
	struct FString                                     AddPairs;                                                  // 0x0060(0x0010) (NeedCtorLink)
	struct FString                                     RemovePairs;                                               // 0x0070(0x0010) (NeedCtorLink)
	int                                                Visibility;                                                // 0x0080(0x0004)
	unsigned char                                      UnknownData_I3HL[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ItemID[0x8];                                               // 0x0084(0x0008) UNKNOWN PROPERTY: QWordProperty OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.WorkshopItemData.ItemID
	unsigned long                                      bIsUploading : 1;                                          // 0x0090(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_96NT[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      UpdateHandle[0x8];                                         // 0x0094(0x0008) UNKNOWN PROPERTY: QWordProperty OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.WorkshopItemData.UpdateHandle

};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToRulesResponseMapping
// 0x0010
struct FServerQueryToRulesResponseMapping
{
	int                                                Query;                                                     // 0x0000(0x0004)
	unsigned char                                      UnknownData_V7LK[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointer                                    Response;                                                  // 0x0008(0x0008) (Native)

};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClientFilterORClause
// 0x0050
struct FClientFilterORClause
{
	struct FMultiMap_Mirror                            OrParams;                                                  // 0x0000(0x0050) (Native, Transient)

};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToPingResponseMapping
// 0x0010
struct FServerQueryToPingResponseMapping
{
	int                                                Query;                                                     // 0x0000(0x0004)
	unsigned char                                      UnknownData_7SZQ[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointer                                    Response;                                                  // 0x0008(0x0008) (Native)

};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.MatchmakingQueryState
// 0x0078
struct FMatchmakingQueryState
{
	class UOnlineGameSearch*                           GameSearch;                                                // 0x0000(0x0008) (Const)
	TArray<struct FServerQueryToRulesResponseMapping>  QueryToRulesResponseMap;                                   // 0x0008(0x0010) (NeedCtorLink)
	TArray<struct FServerQueryToPingResponseMapping>   QueryToPingResponseMap;                                    // 0x0018(0x0010) (NeedCtorLink)
	struct FPointer                                    ServerListResponse;                                        // 0x0028(0x0008) (Native)
	TEnumAsByte<OnlineSubsystemSteamworks_ESteamMatchmakingType> CurrentMatchmakingType;                                    // 0x0030(0x0001)
	unsigned char                                      UnknownData_U053[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointer                                    CurrentMatchmakingQuery;                                   // 0x0038(0x0008) (Native)
	TArray<struct FClientFilterORClause>               ActiveClientsideFilters;                                   // 0x0040(0x0010) (Native, Transient)
	TArray<class UOnlineGameSettings*>                 PendingRulesSearchSettings;                                // 0x0050(0x0010) (NeedCtorLink)
	TArray<class UOnlineGameSettings*>                 PendingPingSearchSettings;                                 // 0x0060(0x0010) (NeedCtorLink)
	unsigned long                                      bIgnoreRefreshComplete : 1;                                // 0x0070(0x0001) BIT_FIELD
	float                                              LastActivityTimestamp;                                     // 0x0074(0x0004)

};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.FilterKeyToSteamKeyMapping
// 0x0040
struct FFilterKeyToSteamKeyMapping
{
	int                                                KeyId;                                                     // 0x0000(0x0004)
	TEnumAsByte<Engine_EOnlineGameSearchEntryType>     KeyType;                                                   // 0x0004(0x0001)
	unsigned char                                      UnknownData_5ZOI[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RawKey;                                                    // 0x0008(0x0010) (NeedCtorLink)
	struct FString                                     SteamKey;                                                  // 0x0018(0x0010) (NeedCtorLink)
	unsigned long                                      bReverseFilter : 1;                                        // 0x0028(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_63IM[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     IgnoreValue;                                               // 0x0030(0x0010) (NeedCtorLink)

};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamPlayerClanData
// 0x0020
struct FSteamPlayerClanData
{
	struct FString                                     ClanName;                                                  // 0x0000(0x0010) (Const, NeedCtorLink)
	struct FString                                     ClanTag;                                                   // 0x0010(0x0010) (Const, NeedCtorLink)

};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LocalTalkerSteam
// 0x0005 (0x0051 - 0x004C)
struct FLocalTalkerSteam : public FLocalTalker
{
	unsigned char                                      UnknownData_8ADX[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<OnlineSubsystemSteamworks_EMuteType>   MuteType;                                                  // 0x0050(0x0001)

};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ProfileSettingsCache
// 0x0038
struct FProfileSettingsCache
{
	class UOnlineProfileSettings*                      Profile;                                                   // 0x0000(0x0008)
	TArray<struct FScriptDelegate>                     ReadDelegates;                                             // 0x0008(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteDelegates;                                            // 0x0018(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ProfileDataChangedDelegates;                               // 0x0028(0x0010) (NeedCtorLink)

};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeviceIdCache
// 0x0030
struct FDeviceIdCache
{
	int                                                DeviceID;                                                  // 0x0000(0x0004)
	unsigned char                                      UnknownData_L73D[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             DeviceSelectionMulticast;                                  // 0x0008(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_MMN2[0xC];                                     // 0x0004(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FScriptDelegate>                     DeviceSelectionDelegates;                                  // 0x0020(0x0010) (NeedCtorLink)

};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineStatusMapping
// 0x0018
struct FOnlineStatusMapping
{
	int                                                StatusId;                                                  // 0x0000(0x0004)
	unsigned char                                      UnknownData_O79X[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StatusString;                                              // 0x0008(0x0010) (Const, Localized, NeedCtorLink)

};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ControllerConnectionState
// 0x0008
struct FControllerConnectionState
{
	int                                                bIsControllerConnected;                                    // 0x0000(0x0004) (Const)
	int                                                bLastIsControllerConnected;                                // 0x0004(0x0004) (Const)

};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueuedAvatarRequest
// 0x0070
struct FQueuedAvatarRequest
{
	float                                              CheckTime;                                                 // 0x0000(0x0004) (Const)
	int                                                NumberOfAttempts;                                          // 0x0004(0x0004) (Const)
	struct FUniqueNetId                                PlayerNetId;                                               // 0x0008(0x0048) (Const, NeedCtorLink)
	int                                                Size;                                                      // 0x0050(0x0004) (Const)
	unsigned char                                      UnknownData_MVBV[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                          // 0x0058(0x000C) ELEMENT_SIZE_MISMATCH (Const, NeedCtorLink)
	unsigned char                                      UnknownData_6XEL[0xC];                                     // 0x0054(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AchievementMappingInfo
// 0x001C
struct FAchievementMappingInfo
{
	int                                                AchievementId;                                             // 0x0000(0x0004)
	struct FName                                       AchievementName;                                           // 0x0004(0x0008)
	int                                                ViewId;                                                    // 0x000C(0x0004)
	int                                                ProgressCount;                                             // 0x0010(0x0004)
	int                                                MaxProgress;                                               // 0x0014(0x0004)
	unsigned long                                      bAutoUnlock : 1;                                           // 0x0018(0x0001) BIT_FIELD

};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AchievementProgressStat
// 0x0010
struct FAchievementProgressStat
{
	int                                                AchievementId;                                             // 0x0000(0x0004)
	int                                                Progress;                                                  // 0x0004(0x0004)
	int                                                MaxProgress;                                               // 0x0008(0x0004)
	unsigned long                                      bUnlock : 1;                                               // 0x000C(0x0001) BIT_FIELD

};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardHandle
// 0x0008
struct FLeaderboardHandle
{
	unsigned char                                      Dud[0x8];                                                  // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardHandle.Dud

};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardTemplate
// 0x002C
struct FLeaderboardTemplate
{
	struct FString                                     LeaderboardName;                                           // 0x0000(0x0010) (NeedCtorLink)
	TEnumAsByte<OnlineSubsystemSteamworks_ELeaderboardUpdateType> UpdateType;                                                // 0x0010(0x0001)
	unsigned char                                      UnknownData_AB4A[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LeaderboardSize;                                           // 0x0014(0x0004) (Const)
	TEnumAsByte<OnlineSubsystemSteamworks_ELeaderboardSortType> SortType;                                                  // 0x0018(0x0001) (Const)
	TEnumAsByte<OnlineSubsystemSteamworks_ELeaderboardFormat> DisplayFormat;                                             // 0x0019(0x0001) (Const)
	unsigned char                                      UnknownData_QNIT[0x6];                                     // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLeaderboardHandle                          LeaderboardRef;                                            // 0x0020(0x0008) (Const)
	unsigned long                                      bLeaderboardInitializing : 1;                              // 0x0028(0x0001) BIT_FIELD (Const)
	unsigned long                                      bLeaderboardInitiated : 1;                                 // 0x0028(0x0001) BIT_FIELD (Const)

};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeferredLeaderboardWrite
// 0x0028
struct FDeferredLeaderboardWrite
{
	struct FString                                     LeaderboardName;                                           // 0x0000(0x0010) (NeedCtorLink)
	int                                                Score;                                                     // 0x0010(0x0004)
	unsigned char                                      UnknownData_KKUZ[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        LeaderboardData;                                           // 0x0018(0x0010) (NeedCtorLink)

};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ViewIdToLeaderboardName
// 0x0018
struct FViewIdToLeaderboardName
{
	int                                                ViewId;                                                    // 0x0000(0x0004)
	unsigned char                                      UnknownData_S2HI[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LeaderboardName;                                           // 0x0008(0x0010) (NeedCtorLink)

};

// ScriptStruct OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppPriceInfoRequest
// 0x0030
struct FAppPriceInfoRequest
{
	class UHttpRequestInterface*                       HTTPRequest;                                               // 0x0000(0x0008)
	TArray<struct FName>                               AppNames;                                                  // 0x0008(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                  // 0x0018(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_023C[0xC];                                     // 0x0018(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardEntry
// 0x0060
struct FLeaderboardEntry
{
	struct FUniqueNetId                                PlayerUID;                                                 // 0x0000(0x0048) (NeedCtorLink)
	int                                                Rank;                                                      // 0x0048(0x0004)
	int                                                Score;                                                     // 0x004C(0x0004)
	TArray<int>                                        LeaderboardData;                                           // 0x0050(0x0010) (NeedCtorLink)

};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PlayerStat
// 0x0018
struct FPlayerStat
{
	int                                                ViewId;                                                    // 0x0000(0x0004)
	int                                                ColumnId;                                                  // 0x0004(0x0004)
	struct FSettingsData                               Data;                                                      // 0x0008(0x0010) (Const)

};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PendingPlayerStats
// 0x00D8
struct FPendingPlayerStats
{
	struct FUniqueNetId                                Player;                                                    // 0x0000(0x0048) (Const, NeedCtorLink)
	struct FString                                     PlayerName;                                                // 0x0048(0x0010) (Const, NeedCtorLink)
	struct FString                                     StatGuid;                                                  // 0x0058(0x0010) (Const, NeedCtorLink)
	TArray<struct FPlayerStat>                         Stats;                                                     // 0x0068(0x0010) (Const, NeedCtorLink)
	struct FOnlinePlayerScore                          Score;                                                     // 0x0078(0x0050) (Const, NeedCtorLink)
	struct FString                                     Place;                                                     // 0x00C8(0x0010) (Const, NeedCtorLink)

};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamUserCloud
// 0x0020
struct FSteamUserCloud
{
	struct FString                                     UserId;                                                    // 0x0000(0x0010) (NeedCtorLink)
	TArray<struct FTitleFile>                          UserCloudFileData;                                         // 0x0010(0x0010) (NeedCtorLink)

};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamUserCloudMetadata
// 0x0020
struct FSteamUserCloudMetadata
{
	struct FString                                     UserId;                                                    // 0x0000(0x0010) (NeedCtorLink)
	TArray<struct FEmsFile>                            UserCloudMetadata;                                         // 0x0010(0x0010) (NeedCtorLink)

};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeferredLeaderboardRead
// 0x0030
struct FDeferredLeaderboardRead
{
	struct FString                                     LeaderboardName;                                           // 0x0000(0x0010) (NeedCtorLink)
	unsigned char                                      RequestType;                                               // 0x0010(0x0001)
	unsigned char                                      UnknownData_3WA3[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Start;                                                     // 0x0014(0x0004)
	int                                                End;                                                       // 0x0018(0x0004)
	unsigned char                                      UnknownData_CAR1[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FUniqueNetId>                        PlayerList;                                                // 0x0020(0x0010) (NeedCtorLink)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
