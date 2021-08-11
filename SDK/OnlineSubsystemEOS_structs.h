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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnlineStatusMappingEOS
// 0x0018
struct FOnlineStatusMappingEOS
{
	int                                                StatusId;                                                  // 0x0000(0x0004)
	unsigned char                                      UnknownData_700N[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StatusString;                                              // 0x0008(0x0010) (Const, Localized, NeedCtorLink)

};

// ScriptStruct OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.LoginDelegates
// 0x0010
struct FLoginDelegates
{
	TArray<struct FScriptDelegate>                     Delegates;                                                 // 0x0000(0x0010) (NeedCtorLink)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
