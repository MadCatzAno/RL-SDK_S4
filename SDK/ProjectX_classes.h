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

// Class ProjectX._NetworkNextTypes_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class U_NetworkNextTypes_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX._NetworkNextTypes_X");
		return ptr;
	}



};

// Class ProjectX._SharedHelpers
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class U_SharedHelpers : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX._SharedHelpers");
		return ptr;
	}



	int ScoreDeltaFromDefault(class UObject* Object);
	void DrawShadowedText(class UCanvas* Canvas, const struct FString& Text, int ShadowOffsetX, int ShadowOffsetY, int ShadowAlpha);
	bool IsInTransientPackage(class UObject* Obj);
	class APlayerController* GetAPlayerController(class UClass* PlayerControllerClass);
	class UObject* GetDefaultObject(class UClass* ObjClass);
	void DumpUnreferencedAnims();
	struct FString GetLanguageExtension();
};

// Class ProjectX._Types_X
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class U_Types_X : public UObject
{
public:
	struct FScriptDelegate                             __OnPriviledgeChecked__Delegate;                           // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_S3LP[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __ServiceExecutionDelegate__Delegate;                      // 0x0078(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_V2JS[0xC];                                     // 0x0078(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnTimer__Delegate;                                       // 0x0090(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_XV60[0xC];                                     // 0x0090(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX._Types_X");
		return ptr;
	}



	void JoinCredentialsFromString(const struct FString& Credentials, struct FString* JoinName, struct FString* JoinPassword);
	struct FString JoinCredentialsToString(const struct FString& JoinName, const struct FString& JoinPassword);
	struct FString GenerateRandomPrivateMatchPassword();
	struct FString GenerateRandomPrivateMatchName();
	struct FString GenerateRandomName(int Length);
	void OnTimer();
	struct FServerReservationData GetServerReservationData(struct FCheckReservationResponse* Response);
	void ServiceExecutionDelegate(class UPsyNetClientService_X* Service);
	void OnPriviledgeChecked(class UPrivilegeCheck_X* PrivilegeCheck);
};

// Class ProjectX.ActorComponent_X
// 0x0007 (FullSize[0x00A4] - InheritedSize[0x009D])
class UActorComponent_X : public UActorComponent
{
public:
	unsigned char                                      UnknownData_7G32[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned long                                      bTick : 1;                                                 // 0x00A0(0x0001) BIT_FIELD
	unsigned long                                      bIgnoreScriptAttach : 1;                                   // 0x00A0(0x0001) BIT_FIELD (Const, Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ActorComponent_X");
		return ptr;
	}



	void Reattach();
	void Tick(float DeltaTime);
	void Detached();
	void Attached();
	void BeginPlay();
};

// Class ProjectX.ExplosionComponent_X
// 0x003C (FullSize[0x00E0] - InheritedSize[0x00A4])
class UExplosionComponent_X : public UActorComponent_X
{
public:
	unsigned char                                      UnknownData_5AQ3[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RBVelocityChange;                                          // 0x00A8(0x0004) (Edit)
	float                                              StartRadius;                                               // 0x00AC(0x0004) (Edit)
	float                                              EndRadius;                                                 // 0x00B0(0x0004) (Edit)
	float                                              Speed;                                                     // 0x00B4(0x0004) (Edit)
	float                                              Falloff;                                                   // 0x00B8(0x0004) (Edit)
	unsigned long                                      bPassThroughWorldGeometry : 1;                             // 0x00BC(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bIgnoreInstigator : 1;                                     // 0x00BC(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bDebug : 1;                                                // 0x00BC(0x0001) BIT_FIELD (Edit)
	struct FVector                                     MomentumOffset;                                            // 0x00C0(0x000C) (Edit)
	float                                              LifeTime;                                                  // 0x00CC(0x0004) (Transient)
	TArray<class AActor*>                              DamagedActors;                                             // 0x00D0(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ExplosionComponent_X");
		return ptr;
	}



	void ProcessHit(class AActor* Victim, const struct FVector& HitLocation, const struct FTraceHitInfo& ExtraHitInfo, float DamageScale);
	void Detached();
};

// Class ProjectX.ExplosionHitHandler_X
// 0x0050 (FullSize[0x00F4] - InheritedSize[0x00A4])
class UExplosionHitHandler_X : public UActorComponent_X
{
public:
	unsigned char                                      UnknownData_R6CC[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartTime;                                                 // 0x00A8(0x0004) (Edit)
	float                                              EndTime;                                                   // 0x00AC(0x0004) (Edit)
	class UExplosionCollisionShapes_X*                 CollisionInformation;                                      // 0x00B0(0x0008) (Edit, ExportObject, Component, EditInline)
	unsigned long                                      bIgnoreInstigator : 1;                                     // 0x00B8(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bPassThroughWorldGeometry : 1;                             // 0x00B8(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bOnlyApplyImpulseOnce : 1;                                 // 0x00B8(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bDebug : 1;                                                // 0x00B8(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bPullTowardHitLocation : 1;                                // 0x00B8(0x0001) BIT_FIELD (Edit)
	float                                              Falloff;                                                   // 0x00BC(0x0004) (Edit)
	float                                              RBVelocityChange;                                          // 0x00C0(0x0004) (Edit)
	float                                              Speed;                                                     // 0x00C4(0x0004) (Edit)
	struct FVector                                     MomentumOffset;                                            // 0x00C8(0x000C) (Edit)
	struct FBox                                        GoalWorldBox;                                              // 0x00D4(0x001C) (Transient)
	float                                              LifeTime;                                                  // 0x00F0(0x0004) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ExplosionHitHandler_X");
		return ptr;
	}



	void Destroy();
	void Init(class UActorComponent_X* ExplosionGoal);
	void ProcessHit(class AActor* Victim, const struct FVector& HitLocation, struct FContactInformation* ContactInfo, float DamageScale);
};

// Class ProjectX.FXActor_X
// 0x00C0 (FullSize[0x0328] - InheritedSize[0x0268])
class AFXActor_X : public AActor
{
public:
	class UFXActorEvent_X*                             SpawnState;                                                // 0x0268(0x0008)
	class UFXActorEvent_X*                             ActivationState;                                           // 0x0270(0x0008)
	TArray<struct FFXAttachment>                       Attachments;                                               // 0x0278(0x0010) (Edit, Component, NeedCtorLink)
	TEnumAsByte<ProjectX_EFXLocality>                  Locality;                                                  // 0x0288(0x0001) (Edit)
	unsigned char                                      UnknownData_MKCD[0x3];                                     // 0x0289(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SocketOrBoneName;                                          // 0x028C(0x0008) (Edit)
	unsigned long                                      bDeactivateWhenOwnerDestroyed : 1;                         // 0x0294(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAllowShadowCasting : 1;                                   // 0x0294(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAutoActivate : 1;                                         // 0x0294(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bRenderInactive : 1;                                       // 0x0294(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bActive : 1;                                               // 0x0294(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned long                                      bHadOwner : 1;                                             // 0x0294(0x0001) BIT_FIELD (Const, Transient, PrivateWrite)
	class AFXActor_X*                                  Parent;                                                    // 0x0298(0x0008) (Edit)
	class AActor*                                      AttachmentActor;                                           // 0x02A0(0x0008) (Transient, PrivateWrite)
	TArray<class UFXActorEvent_X*>                     FXStates;                                                  // 0x02A8(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	TArray<struct FFXActorEventCheck>                  FXEvents;                                                  // 0x02B8(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	float                                              DestroyWaitTime;                                           // 0x02C8(0x0004) (Edit)
	float                                              DestroyTime;                                               // 0x02CC(0x0004) (PrivateWrite)
	class UParameterDispenser_X*                       Parameters;                                                // 0x02D0(0x0008) (Edit, ExportObject, Component, EditInline)
	int                                                EditID;                                                    // 0x02D8(0x0004) (Edit, Const, EditConst, EditorOnly)
	unsigned char                                      UnknownData_PD6Q[0x4];                                     // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFXEventSubscription>                EventSubscriptions;                                        // 0x02E0(0x0010) (Const, Transient, NeedCtorLink, PrivateWrite)
	class UFXActorEvent_X*                             AnimationEndState;                                         // 0x02F0(0x0008)
	struct FScriptDelegate                             __EventFXStatePushed__Delegate;                            // 0x02F8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_2YX0[0xC];                                     // 0x02F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventFXStatePopped__Delegate;                            // 0x0310(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_M95T[0xC];                                     // 0x0310(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.FXActor_X");
		return ptr;
	}



	void DumpDebugInfo();
	class UFXAttachmentTraitBase_X* GetTrait(class UClass* TraitClass, int AttachmentIdx);
	void OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void OnAnimPlay(class UAnimNodeSequence* SeqNode);
	void Destroyed();
	void SubscribeState(class UFXActorEvent_X* FXEvent, const struct FScriptDelegate& OnPushed, const struct FScriptDelegate& OnPopped);
	void SetStateEnabled(class UFXActorEvent_X* State, bool bEnable);
	void OnToggle(class USeqAct_Toggle* Action);
	void OnTriggerFXActor_X(class USeqAct_TriggerFXActor_X* SeqAct);
	void Inherit(class AFXActor_X* Other);
	void ResetParticles();
	void StopAllEffects();
	void DeactivateAndDestroy();
	void OnDetached(class UActorComponent* AC);
	void DeactivateFXComponent(class UActorComponent* AC);
	void ActivateFXComponent(class UActorComponent* AC);
	void OnAttached(class UActorComponent* AC);
	int GetComponentsAttachmentIndex(class UActorComponent* ComponentToFind);
	void UpdateFXStates();
	bool IsLocallyControlled();
	class AController* GetControllerOwner();
	void ToggleState(class UFXActorEvent_X* NewState);
	bool RemoveStateForceUpdate(class UFXActorEvent_X* OldState);
	bool RemoveEvent(class UFXActorEvent_X* OldEvent);
	bool RemoveState(class UFXActorEvent_X* OldState);
	void AddEvent(class UFXActorEvent_X* NewEvent);
	void AddState(class UFXActorEvent_X* NewState);
	bool CanRemoveEvent(struct FFXActorEventCheck* InEvent);
	bool IsStateActive(class UFXActorEvent_X* InState);
	void Deactivate();
	void Activate();
	void HandleParentStatePopped(class AFXActor_X* P, class UFXActorEvent_X* Event);
	void HandleParentStatePushed(class AFXActor_X* P, class UFXActorEvent_X* Event);
	void BindTo(class AFXActor_X* ParentFXActor);
	void SetAttachmentActor(class AActor* AttachToActor);
	void PostBeginPlay();
	void AllAttachments(class UClass* ComponentClass, class UActorComponent** OutComponent, int* OutAttachmentIdx);
	class UActorComponent* GetComponentByName(class UClass* ComponentClass, const struct FName& ComponentName);
	void EventFXStatePopped(class AFXActor_X* FXActor, class UFXActorEvent_X* Event);
	void EventFXStatePushed(class AFXActor_X* FXActor, class UFXActorEvent_X* Event);
};

// Class ProjectX.FakeData_X
// 0x0320 (FullSize[0x0380] - InheritedSize[0x0060])
class UFakeData_X : public UObject
{
public:
	int                                                RandomSeed;                                                // 0x0060(0x0004) (PrivateWrite)
	unsigned char                                      UnknownData_V48Y[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFakeData1                                  Data1;                                                     // 0x0068(0x0038) (NeedCtorLink)
	struct FFakeData2                                  Data2;                                                     // 0x00A0(0x0090) (NeedCtorLink)
	struct FFakeData3                                  Data3;                                                     // 0x0130(0x0130) (NeedCtorLink)
	struct FFakeData4                                  Data4;                                                     // 0x0260(0x0120) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.FakeData_X");
		return ptr;
	}



	int RandomizeValues(class UObject* Target, int InRandomSeed);
	class UFakeData_X* RandomizeFakeData(class UFakeData_X* FakeData, int InRandomSeed);
	class UFakeData_X* GenerateFakeData(int InRandomSeed);
};

// Class ProjectX.FXActorEvent_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UFXActorEvent_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.FXActorEvent_X");
		return ptr;
	}



};

// Class ProjectX.FXAttachmentTraitBase_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UFXAttachmentTraitBase_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.FXAttachmentTraitBase_X");
		return ptr;
	}



	class UActorComponent* GetComponent();
	void Init();
};

// Class ProjectX.GameEngine_X
// 0x0000 (FullSize[0x0B48] - InheritedSize[0x0B48])
class UGameEngine_X : public UGameEngine
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GameEngine_X");
		return ptr;
	}



	void __GameEngine_X__Construct_735F1A7E4018F462351C69B3DA4C5283(const struct FString& InURL);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void OnlineSubsystemInitialized();
	void Construct();
};

// Class ProjectX.GameInfo_X
// 0x0058 (FullSize[0x04C8] - InheritedSize[0x0470])
class AGameInfo_X : public AGameInfo
{
public:
	class AGameReplicationInfo*                        GameReplicationInfoArchetype;                              // 0x0470(0x0008) (Edit)
	class APlayerController*                           PlayerControllerArchetype;                                 // 0x0478(0x0008) (Edit)
	class APawn*                                       PawnArchetype;                                             // 0x0480(0x0008) (Edit)
	TArray<struct FPauserData>                         PCPausers;                                                 // 0x0488(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FScriptDelegate                             __EventSpawned__Delegate;                                  // 0x0498(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_JR8T[0xC];                                     // 0x0498(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventInit__Delegate;                                     // 0x04B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_UTDX[0xC];                                     // 0x04B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GameInfo_X");
		return ptr;
	}



	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void ClientMapLoadFail(const struct FUniqueNetId& PlayerID, const struct FString& MapName);
	void RemovePauser(class APlayerController* PC, bool bForceRemove);
	void AddPauser(class APlayerController* PC);
	void SetPaused(class APlayerController* PC, bool bPause);
	void TogglePause(class APlayerController* PC);
	bool IsPaused(class APlayerController* PC);
	void GetOnlineGameHost();
	class UOnlineGameLanServer_X* GetOnlineGameLanServer();
	class UOnlineGameDedicatedServer_X* GetOnlineGameDedicatedServer();
	class UOnlineGame_Base_X* GetOnlineGame();
	void EndOnlineGame();
	void Logout(class AController* Exiting);
	void GenericPlayerInitialization(class AController* C);
	void DisconnectExistingPlayer(struct FUniqueNetId* PlayerID);
	class APlayerController* Login(const struct FString& Portal, const struct FString& Options, const struct FUniqueNetId& UniqueId, struct FString* ErrorMessage);
	void PreLoginSplitscreen(const struct FUniqueNetId& PrimaryPlayerUniqueId, const struct FString& Options, const struct FString& Address, const struct FUniqueNetId& UniqueId, bool bSupportsAuth, struct FString* ErrorMessage);
	void PreLogin(const struct FString& Options, const struct FString& Address, const struct FUniqueNetId& UniqueId, bool bSupportsAuth, struct FString* ErrorMessage);
	void UpdateGameSettingsCounts();
	void PostBeginPlay();
	bool ProcessServerLogin();
	void RegisterServer();
	class APawn* SpawnDefaultPawnFor(class AController* NewPlayer, class ANavigationPoint* StartSpot);
	void PreBeginPlay();
	class APlayerController* SpawnPlayerController(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
	class UClass* SetGameType(const struct FString& MapName, const struct FString& Options, const struct FString& Portal);
	struct FString GetDefaultGameClassPath(const struct FString& MapName, const struct FString& Options, const struct FString& Portal);
	void PDI(class UClass* ActorClass, bool bOnlybDebug);
	void InitGame(const struct FString& Options, struct FString* ErrorMessage);
	void EventInit(class AGameInfo_X* G, const struct FString& Options);
	void EventSpawned(class AGameInfo_X* G);
};

// Class ProjectX.GameSetting_X
// 0x0004 (FullSize[0x0064] - InheritedSize[0x0060])
class UGameSetting_X : public UObject
{
public:
	unsigned long                                      bHidden : 1;                                               // 0x0060(0x0001) BIT_FIELD (Edit, ProtectedWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GameSetting_X");
		return ptr;
	}



	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool IsSetting(const struct FName& SettingName);
	void AddGameSettingToList(class UOnlineGameSettings_X* OnlineGameSettings, TArray<class UGameSetting_X*>* GameSettingsArray);
};

// Class ProjectX.GameSettingCategory_X
// 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
class UGameSettingCategory_X : public UObject
{
public:
	TArray<struct FName>                               SelectedNames;                                             // 0x0060(0x0010) (Edit, NeedCtorLink, PrivateWrite)
	unsigned long                                      bHidden : 1;                                               // 0x0070(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      bUseableWhileHidden : 1;                                   // 0x0070(0x0001) BIT_FIELD (Edit, Const)
	unsigned char                                      UnknownData_0POX[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UGameSetting_X*>                      GameSettings;                                              // 0x0078(0x0010) (Edit, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GameSettingCategory_X");
		return ptr;
	}



	bool __GameSettingCategory_X__GetGameSettingIndex_A405F7A642D1D2A7B18FE0A1DAEA4EBC(class UGameSetting_X* GS);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	int GetGameSettingIndex(const struct FName& SettingName, bool bIgnoreHidden, TArray<class UGameSetting_X*>* FilterLocal_C7EF81F94A8E502122615A9926D38F3D);
	bool HasSetting(const struct FName& SettingName);
	void GetSelectedGameSettings(TArray<class UGameSetting_X*>* SelectedGameSettings);
	class UGameSetting_X* GetFirstSelectedGameSetting();
	void ClearSelected();
	void AddSelectedSetting(const struct FName& NewSelectedName);
	void SetGameSettings(TArray<class UGameSetting_X*> NewGameSettings);
};

// Class ProjectX.GameViewportClient_X
// 0x0068 (FullSize[0x02B0] - InheritedSize[0x0248])
class UGameViewportClient_X : public UGameViewportClient
{
public:
	unsigned long                                      bHandCursor : 1;                                           // 0x0248(0x0001) BIT_FIELD (Transient)
	unsigned long                                      bMuteSoundOnFocusLost : 1;                                 // 0x0248(0x0001) BIT_FIELD (Transient)
	int                                                MaxSplitScreenPlayers;                                     // 0x024C(0x0004) (Const, Config)
	struct FScriptDelegate                             __EventLocalPlayerJoin__Delegate;                          // 0x0250(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_HX12[0xC];                                     // 0x0250(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventLocalPlayerLeave__Delegate;                         // 0x0268(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_PTNH[0xC];                                     // 0x0268(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventNotifyConnectionError__Delegate;                    // 0x0280(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_SSLZ[0xC];                                     // 0x0280(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPrimaryPlayerChange__Delegate;                      // 0x0298(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_2ZEO[0xC];                                     // 0x0298(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GameViewportClient_X");
		return ptr;
	}



	void OnPrimaryPlayerSwitch(class ULocalPlayer* OldPrimaryPlayer, class ULocalPlayer* NewPrimaryPlayer);
	bool ForceRemovePlayer(class ULocalPlayer* ExPlayer);
	bool RemovePlayer(class ULocalPlayer* ExPlayer);
	bool RemovePlayerByID(int ControllerId);
	void SetHardwareMouseCursorVisibility(bool bIsVisible);
	void NotifyConnectionError(TEnumAsByte<Engine_EProgressMessageType> MessageType, const struct FString& Message, const struct FString& Title);
	void SetProgressMessage(TEnumAsByte<Engine_EProgressMessageType> MessageType, const struct FString& Message, const struct FString& Title, bool bIgnoreFutureNetworkMessages);
	class ULocalPlayer* CreatePlayer(int ControllerId, struct FString* OutError, bool bSpawnActor);
	void NotifyPlayerRemoved(int PlayerIndex, class ULocalPlayer* RemovedPlayer);
	void NotifyPlayerAdded(int PlayerIndex, class ULocalPlayer* AddedPlayer);
	bool ShouldMuteAudioWhenUnfocused();
	bool PlatformSupportsMuteOnFocusLostOption();
	bool IsGameRecordingEnabled();
	float GetDefaultSafeZone();
	void FlashWindow();
	void SaveCurrentWindowState();
	void SaveWindowState(int ResX, int ResY, bool bFullScreen, bool bBorderless, bool bVsync);
	bool GetAvailableRefreshRates(TArray<int>* RefreshRates);
	bool GetAvailableResolutions(TArray<struct FIntPoint>* Resolutions);
	bool GetAvailableResolutionsStr(TArray<struct FString>* Resolutions);
	bool IsBorderlessViewport();
	struct FIntPoint GetViewportSizePoint();
	struct FString GetViewportSizeStr();
	class UGameViewportClient_X* GetInstance();
	void EventPrimaryPlayerChange(class ULocalPlayer* OldPrimaryPlayer, class ULocalPlayer* NewPrimaryPlayer);
	void EventNotifyConnectionError(TEnumAsByte<Engine_EProgressMessageType> MessageType, const struct FString& Title, const struct FString& Message);
	void EventLocalPlayerLeave(class ULocalPlayer* OldPlayer);
	void EventLocalPlayerJoin(class ULocalPlayer* NewPlayer);
};

// Class ProjectX.GFxDataRow_X
// 0x0034 (FullSize[0x0094] - InheritedSize[0x0060])
class UGFxDataRow_X : public UObject
{
public:
	struct FName                                       TableName;                                                 // 0x0060(0x0008) (Edit, Const)
	struct FName                                       PrimaryKeyName;                                            // 0x0068(0x0008) (Edit, Const)
	class UClass*                                      ProxyClass;                                                // 0x0070(0x0008) (Edit, Const)
	unsigned long                                      bLevelTransitionPersistent : 1;                            // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData_FJ2Q[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     ProxyObject;                                               // 0x0080(0x0008) (Const, Transient)
	class UGFxShell_X*                                 Shell;                                                     // 0x0088(0x0008) (Const, Transient)
	int                                                RowIndex;                                                  // 0x0090(0x0004) (Const, Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxDataRow_X");
		return ptr;
	}



	class UGFxObject* FlashEventObject();
	struct FString FlashEventString();
	float FlashEventFloat();
	int FlashEventInt();
	void FlashEventVoid();
	void SetProxy(class UObject* InProxyObject);
	void OnRemoved();
	void OnShellSet();
};

// Class ProjectX.GFxDataSingleton_X
// 0x0004 (FullSize[0x0098] - InheritedSize[0x0094])
class UGFxDataSingleton_X : public UGFxDataRow_X
{
public:
	unsigned char                                      UnknownData_KH5O[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxDataSingleton_X");
		return ptr;
	}



};

// Class ProjectX.GFxShell_X
// 0x0098 (FullSize[0x0130] - InheritedSize[0x0098])
class UGFxShell_X : public UGFxDataSingleton_X
{
public:
	class UGFxMoviePlayer_X*                           MoviePlayerArchetype;                                      // 0x0098(0x0008) (Edit)
	class ULocalPlayer_X*                              Player;                                                    // 0x00A0(0x0008) (Const, Transient)
	unsigned long                                      bGamePaused : 1;                                           // 0x00A8(0x0001) BIT_FIELD (DataBinding)
	unsigned long                                      bWasFullscreen : 1;                                        // 0x00A8(0x0001) BIT_FIELD (Const, Transient)
	float                                              LeftX;                                                     // 0x00AC(0x0004) (DataBinding)
	float                                              LeftY;                                                     // 0x00B0(0x0004) (DataBinding)
	float                                              RightX;                                                    // 0x00B4(0x0004) (DataBinding)
	float                                              RightY;                                                    // 0x00B8(0x0004) (DataBinding)
	unsigned char                                      UnknownData_EZ5H[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UGFxMoviePlayer_X*>                   Movies;                                                    // 0x00C0(0x0010) (Const, Transient, NeedCtorLink)
	class UGFxDataStore_X*                             DataStore;                                                 // 0x00D0(0x0008) (Const, ExportObject, Component, EditInline)
	TEnumAsByte<Engine_EInputPlatformType>             InputType;                                                 // 0x00D8(0x0001) (Const, Transient)
	TEnumAsByte<Core_EOnlinePlatform>                  OnlinePlatformType;                                        // 0x00D9(0x0001) (DataBinding)
	unsigned char                                      UnknownData_066K[0x6];                                     // 0x00DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UOnlineSubsystem*                            OnlineSub;                                                 // 0x00E0(0x0008) (Edit)
	struct FScriptDelegate                             __EventInputCaptureChanged__Delegate;                      // 0x00E8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_W6L2[0xC];                                     // 0x00E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventInputTypeChanged__Delegate;                         // 0x0100(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_XQLK[0xC];                                     // 0x0100(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventReceivedInput__Delegate;                            // 0x0118(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_S2XZ[0xC];                                     // 0x0118(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxShell_X");
		return ptr;
	}



	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void SetMouseKeyPressed(const struct FName& Key, bool bPressed);
	void HandleOnlineSubSet();
	void SetAllowAnyPlayerInput(bool bAllow);
	void HandlePauseChanged();
	void OnShowKeyboardCanceled();
	void OnShowKeyboardComplete(const struct FString& NewText);
	void HandleShowKeyboardComplete(const struct FString& NewText, bool bCanceled);
	struct FString PasteFromClipboard();
	void CopyToClipboard(const struct FString& ClipboardText);
	void HideKeyboard();
	bool ShowKeyboard(const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, const struct FString& DefaultText, int MaxLength);
	void SetGamePaused(bool bPaused);
	void ExitToMainMenu();
	void ExitGame();
	void HandleMovieInputCaptureChanged(class UGFxMoviePlayer_X* MoviePlayer);
	void TriggerDataCallbacks();
	void Tick(float DeltaTime);
	void OnMovieClosed(class UGFxMoviePlayer_X* Movie);
	void OnMovieStarted(class UGFxMoviePlayer_X* Movie);
	void StopMovie(class UGFxMoviePlayer_X* Movie);
	void StartMovie(class UGFxMoviePlayer_X* Movie);
	void Stop();
	void OnStart();
	void Start(class ULocalPlayer_X* InPlayer);
	void EventReceivedInput(class UGFxShell_X* InShell);
	void EventInputTypeChanged(class UGFxShell_X* InShell);
	void EventInputCaptureChanged(class UGFxShell_X* InShell);
};

// Class ProjectX.GFxDataStore_X
// 0x0074 (FullSize[0x00E4] - InheritedSize[0x0070])
class UGFxDataStore_X : public UComponent
{
public:
	TArray<struct FGFxDataStoreTable>                  Tables;                                                    // 0x0070(0x0010) (Const, Transient, NeedCtorLink)
	TArray<struct FGFxDirtyTable>                      DirtyTables;                                               // 0x0080(0x0010) (Const, Transient, NeedCtorLink)
	struct FMap_Mirror                                 ObjectNameToTable;                                         // 0x0090(0x0050) (Const, Native, Transient)
	unsigned long                                      bDebugGetValue : 1;                                        // 0x00E0(0x0001) BIT_FIELD (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxDataStore_X");
		return ptr;
	}



	void ExportFakeData(const struct FName& InTableName);
	void PrintData(const struct FName& InTableName);
	int GetObjectRow(class UGFxDataRow_X* O);
	void AllObjectsOfType(class UClass* BaseClass, class UGFxDataRow_X** OutObject);
	void AllObjects(class UClass* ObjClass, class UGFxDataRow_X** OutObject, int* Row);
	class UGFxDataRow_X* GetObjectByPrimaryKey(class UClass* ObjClass, const struct FString& Value);
	class UGFxDataRow_X* GetObject(class UClass* ObjClass, int Row);
	void RemoveObject(class UGFxDataRow_X* O);
	void BindObject(class UGFxDataRow_X* Object, int Row);
	class UGFxDataRow_X* CreateObject(class UClass* ObjClass, int Row, int* PlacedRow);
	void RemoveAllObjects(class UClass* ObjClass);
	void SetObjectCount(class UClass* ObjClass, int Count);
	int GetObjectCount(class UClass* ObjClass);
	void EmptyTables();
	void EmptyTable(const struct FName& Table);
	void RemoveRow(const struct FName& Table, int Row);
	void SetRowCount(const struct FName& Table, int Count);
	int GetRowCount(const struct FName& Table);
	struct FASValue GetValue(const struct FName& Table, int Row, const struct FName& Column);
	int GetObjectIndex(class UGFxDataRow_X* TargetObject);
	void SetASValue(const struct FName& Table, int Row, const struct FName& Column, struct FASValue* Value);
	void SetTextureValue(const struct FName& Table, int Row, const struct FName& Column, class UTexture* Value);
	void SetStringValue(const struct FName& Table, int Row, const struct FName& Column, const struct FString& Value);
	void SetQWordValue(const struct FName& Table, int Row, const struct FName& Column);
	void SetFloatValue(const struct FName& Table, int Row, const struct FName& Column, float Value);
	void SetIntValue(const struct FName& Table, int Row, const struct FName& Column, int Value);
	void SetBoolValue(const struct FName& Table, int Row, const struct FName& Column, bool Value);
	void SetDirty(const struct FName& InTableName, int RowNum, const struct FName& Value);
};

// Class ProjectX.GFxEngine_X
// 0x0078 (FullSize[0x0190] - InheritedSize[0x0118])
class UGFxEngine_X : public UGFxEngine
{
public:
	class UGFxShell_X*                                 ShellArchetype;                                            // 0x0118(0x0008) (PrivateWrite)
	TArray<class UGFxShell_X*>                         Shells;                                                    // 0x0120(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	TArray<struct FDirtyObject>                        DirtyObjects;                                              // 0x0130(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	unsigned long                                      bAnyShellHasInput : 1;                                     // 0x0140(0x0001) BIT_FIELD (Transient, PrivateWrite)
	TEnumAsByte<Engine_EInputPlatformType>             AvailableGamepadType;                                      // 0x0144(0x0001) (Const, Transient)
	unsigned char                                      UnknownData_GZM5[0x3];                                     // 0x0145(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             __EventShellCreated__Delegate;                             // 0x0148(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_ZBZS[0xC];                                     // 0x0145(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventAvailableGamepadTypeChanged__Delegate;              // 0x0160(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_QL6U[0xC];                                     // 0x0160(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventGameSessionEnded__Delegate;                         // 0x0178(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_ARS2[0xC];                                     // 0x0178(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxEngine_X");
		return ptr;
	}



	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void OnGameSessionEnded();
	void GetFlashKey(const struct FName& UnrealKey, int* KeyCode, int* MouseButton);
	void UpdateHardwareMouseCursorVisibility();
	void HandleShellInputTypeChanged(class UGFxShell_X* InShell);
	void HandleGFxEnabledChanged(class UGameViewportClient* GVC);
	void HandleShellInputCaptureChanged(class UGFxShell_X* InShell);
	void FlushDirtyObjects();
	void Tick(float DeltaTime);
	class UGFxShell_X* FindShell(class ULocalPlayer_X* ForPlayer);
	void OnShellDestroyed(class UGFxShell_X* Shell);
	void DestroyShell(class ULocalPlayer* ForPlayer);
	class UGFxShell_X* CreateShell();
	class UGFxShell_X* GetShell(class ULocalPlayer_X* ForPlayer);
	void SetShellArchetype(class UGFxShell_X* InShellArchetype);
	class UGFxEngine_X* GetInstance(class UClass* Type);
	void EventGameSessionEnded();
	void EventAvailableGamepadTypeChanged(class UGFxEngine_X* Engine);
	void EventShellCreated(class UGFxEngine_X* Engine, class UGFxShell_X* Shell);
};

// Class ProjectX.GFxMoviePlayer_X
// 0x0120 (FullSize[0x0338] - InheritedSize[0x0218])
class UGFxMoviePlayer_X : public UGFxMoviePlayer
{
public:
	class UGFxShell_X*                                 Shell;                                                     // 0x0218(0x0008) (Const, Transient)
	class UGFxDataStore_X*                             DataStore;                                                 // 0x0220(0x0008) (Const, ExportObject, Transient, Component, EditInline)
	TArray<class UGFxDataCallback_X*>                  DataCallbacks;                                             // 0x0228(0x0010) (Const, Transient, NeedCtorLink)
	TArray<class UGFxObjectReference_X*>               ActionScriptClasses;                                       // 0x0238(0x0010) (Const, Transient, NeedCtorLink)
	struct FMap_Mirror                                 ActionScriptClassMap;                                      // 0x0248(0x0050) (Const, Native, Transient)
	TArray<struct FString>                             CursorScenes;                                              // 0x0298(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	TArray<struct FString>                             InputScenes;                                               // 0x02A8(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	TArray<struct FString>                             CaptureScenes;                                             // 0x02B8(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FName                                       DebugTableCallback;                                        // 0x02C8(0x0008) (Edit)
	struct FName                                       DebugColumnCallback;                                       // 0x02D0(0x0008) (Edit)
	class UGFxObjectReference_X*                       ShellHooksClass;                                           // 0x02D8(0x0008) (Const, Transient)
	TArray<class UGFxSoundPack_X*>                     LoadedSoundPacks;                                          // 0x02E0(0x0010) (Transient, NeedCtorLink)
	struct FScriptDelegate                             __EventStarted__Delegate;                                  // 0x02F0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_BCEP[0xC];                                     // 0x02F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventClosed__Delegate;                                   // 0x0308(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_BK5M[0xC];                                     // 0x0308(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventInputCaptureChanged__Delegate;                      // 0x0320(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_QZ2W[0xC];                                     // 0x0320(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxMoviePlayer_X");
		return ptr;
	}



	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void SetAllowAnyPlayerInput(bool bAllow);
	bool PopString(TArray<struct FString>* Items, const struct FString& Value);
	void SetGlobalRTCP(const struct FName& Key, float Value);
	void StopAllSounds(class UGFxSoundPack_X* SoundPack);
	void StopSound(const struct FName& EventName);
	void PlaySound(const struct FName& EventName);
	void PlaySoundFromTheme(const struct FName& EventName, const struct FName& SoundThemeName);
	class AActor* GetSoundSource();
	void UpdateCursorVisibility();
	void SetCaptureAllInput(bool bNewCaptureInput, const struct FString& SceneName);
	void SetReceiveInput(bool bNewReceiveInput, const struct FString& SceneName);
	void SetCursorVisible(bool bVisible, const struct FString& SceneName);
	void InitShellHooks();
	void InitDataHooks();
	void OnClose();
	bool Start(bool StartPaused);
	void EventInputCaptureChanged(class UGFxMoviePlayer_X* Player);
	void EventClosed(class UGFxMoviePlayer_X* Player);
	void EventStarted(class UGFxMoviePlayer_X* Player);
};

// Class ProjectX.GFxObjectReference_X
// 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
class UGFxObjectReference_X : public UObject
{
public:
	int                                                Value[0xC];                                                // 0x0060(0x0030) (Const, Native)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxObjectReference_X");
		return ptr;
	}



};

// Class ProjectX.GFxDataCallback_X
// 0x0015 (FullSize[0x00A5] - InheritedSize[0x0090])
class UGFxDataCallback_X : public UGFxObjectReference_X
{
public:
	struct FName                                       Table;                                                     // 0x0090(0x0008) (Transient)
	int                                                Row;                                                       // 0x0098(0x0004) (Transient)
	struct FName                                       Column;                                                    // 0x009C(0x0008) (Transient)
	TEnumAsByte<ProjectX_EDataCallbackType>            Type;                                                      // 0x00A4(0x0001) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxDataCallback_X");
		return ptr;
	}



};

// Class ProjectX.GFxSoundPack_X
// 0x0024 (FullSize[0x0084] - InheritedSize[0x0060])
class UGFxSoundPack_X : public UObject
{
public:
	struct FString                                     ExportClassName;                                           // 0x0060(0x0010) (Edit, NeedCtorLink)
	TArray<struct FSoundPackSoundRef>                  Sounds;                                                    // 0x0070(0x0010) (Edit, Const, NeedCtorLink, PrivateWrite)
	unsigned long                                      bHasSubtitles : 1;                                         // 0x0080(0x0001) BIT_FIELD (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxSoundPack_X");
		return ptr;
	}



	bool ToggleSound(int Idx, class AActor* Target, bool bPlay);
	void StopAll(class AActor* Target);
	bool StopSound(const struct FName& SoundName, class AActor* Target);
	bool PlaySound(const struct FName& SoundName, class AActor* Target);
};

// Class ProjectX.LensFlareComponent_X
// 0x0080 (FullSize[0x033C] - InheritedSize[0x02BC])
class ULensFlareComponent_X : public ULensFlareComponent
{
public:
	unsigned char                                      UnknownData_HXLM[0x4];                                     // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointer                                    VfTable_IISetParameter;                                    // 0x02C0(0x0008) (Const, Native, NoExport)
	struct FRawDistributionFloat                       AlphaOverTime;                                             // 0x02C8(0x0028) (Edit, Component, NeedCtorLink)
	struct FRawDistributionVector                      ColorOverTime;                                             // 0x02F0(0x0028) (Edit, Component, NeedCtorLink)
	TArray<struct FLensFlareFloatParamCurve>           MaterialFloatParamValuesOverTime;                          // 0x0318(0x0010) (Edit, Component, NeedCtorLink)
	struct FName                                       SourceColorParamName;                                      // 0x0328(0x0008) (Edit, Const)
	struct FName                                       SourceColorAlphaParamName;                                 // 0x0330(0x0008) (Edit, Const)
	float                                              AttachTime;                                                // 0x0338(0x0004) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LensFlareComponent_X");
		return ptr;
	}



	void SetActorParameter(const struct FName& Key, class AActor* Value);
	void SetLinearColorParameter(const struct FName& Key, const struct FLinearColor& Value);
	void SetVectorParameter(const struct FName& Key, const struct FVector& Value);
	void SetFloatParameter(const struct FName& Key, float Value);
	void SetNameParameter(const struct FName& Key, const struct FName& Value);
};

// Class ProjectX.NetworkNextClient_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNetworkNextClient_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetworkNextClient_X");
		return ptr;
	}



	void FlagSession();
	struct FNetworkNextStats GetStats();
	TEnumAsByte<ProjectX_ENetworkNextState> GetState();
};

// Class ProjectX.NetworkNextServer_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNetworkNextServer_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetworkNextServer_X");
		return ptr;
	}



	void Upgrade(class UNetConnection* Connection, const struct FString& SessionTag);
	bool IsEnabled();
};

// Class ProjectX.NNXErrors_X
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class UNNXErrors_X : public UErrorList
{
public:
	class UErrorType*                                  SwitchServiceMaintenance;                                  // 0x0080(0x0008) (Const)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NNXErrors_X");
		return ptr;
	}



};

// Class ProjectX.OnlineConfig_X
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UOnlineConfig_X : public UObject
{
public:
	unsigned long                                      bAllowOnServer : 1;                                        // 0x0060(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData_U9ZE[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FModifierSubscription>               AllSubscriptions;                                          // 0x0068(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineConfig_X");
		return ptr;
	}



	void UnsubscribeModifiers();
	void ModifyObjects(class UClass* ObjClass, const struct FScriptDelegate& ApplyCallback, const struct FScriptDelegate& ResetCallback);
	void Undo();
	void Apply();
};

// Class ProjectX.BeaconConfig_X
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
class UBeaconConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bUdpPingRegions : 1;                                       // 0x0078(0x0001) BIT_FIELD (Config)
	unsigned long                                      bUdpPingMetrics : 1;                                       // 0x0078(0x0001) BIT_FIELD (Config)
	int                                                MaxPingsPerAddress;                                        // 0x007C(0x0004) (Config)
	int                                                MaxPingsWindowSeconds;                                     // 0x0080(0x0004) (Config)
	int                                                StatsLogDelaySeconds;                                      // 0x0084(0x0004) (Config)
	float                                              WaitForPongSeconds;                                        // 0x0088(0x0004) (Config)
	int                                                PingsPerSecond;                                            // 0x008C(0x0004) (Config)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.BeaconConfig_X");
		return ptr;
	}



};

// Class ProjectX.CrossplayConfig_X
// 0x0020 (FullSize[0x0098] - InheritedSize[0x0078])
class UCrossplayConfig_X : public UOnlineConfig_X
{
public:
	TArray<struct FCrossplayGroup>                     Groups;                                                    // 0x0078(0x0010) (Edit, NeedCtorLink)
	TArray<struct FCrossplayGroup>                     DisabledCrossplayGroups;                                   // 0x0088(0x0010) (Edit, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CrossplayConfig_X");
		return ptr;
	}



	bool CanInteractWithCrossplayDisabled(TEnumAsByte<Core_EOnlinePlatform> Platform1, TEnumAsByte<Core_EOnlinePlatform> Platform2, TArray<TEnumAsByte<Core_EOnlinePlatform>>* ArrayResultLocal_E393E93F4031CA04A1A9FF8325F4F676);
	TArray<TEnumAsByte<Core_EOnlinePlatform>> GetDisabledCrossplayGroup(TEnumAsByte<Core_EOnlinePlatform> PlayerPlatform, TArray<TEnumAsByte<Core_EOnlinePlatform>>* ArrayInitializer_638B32A145E29F1C4DDD449B2449FDB9);
	bool PlatformsShareGroup(TEnumAsByte<Core_EOnlinePlatform> Platform1, TEnumAsByte<Core_EOnlinePlatform> Platform2);
};

// Class ProjectX.EventRecorderConfig_X
// 0x002C (FullSize[0x00A4] - InheritedSize[0x0078])
class UEventRecorderConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bEnabled : 1;                                              // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bSeparatePlayerIDs : 1;                                    // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bExcludePlayerIDs : 1;                                     // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData_6E0I[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               DisabledEvents;                                            // 0x0080(0x0010) (Edit, NeedCtorLink)
	class UClass*                                      EventRecorderClass;                                        // 0x0090(0x0008) (Edit)
	float                                              PlayerNetMetricsPeriod;                                    // 0x0098(0x0004) (Edit)
	int                                                MaxUnstableConnections;                                    // 0x009C(0x0004) (Edit)
	int                                                UnstableConnectionsTimePeriodSeconds;                      // 0x00A0(0x0004) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EventRecorderConfig_X");
		return ptr;
	}



};

// Class ProjectX.LocalizationConfig_X
// 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
class ULocalizationConfig_X : public UOnlineConfig_X
{
public:
	TArray<struct FLocOverride>                        Overrides;                                                 // 0x0078(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LocalizationConfig_X");
		return ptr;
	}



	void Apply();
};

// Class ProjectX.NetworkNextConfig_X
// 0x002C (FullSize[0x00A4] - InheritedSize[0x0078])
class UNetworkNextConfig_X : public UOnlineConfig_X
{
public:
	float                                              ClientLibraryProbability;                                  // 0x0078(0x0004) (Edit)
	float                                              ClientDriverProbability;                                   // 0x007C(0x0004) (Edit)
	float                                              ServerLibraryProbability;                                  // 0x0080(0x0004) (Edit)
	float                                              SessionProbability;                                        // 0x0084(0x0004) (Edit)
	TArray<struct FString>                             UserCountryCodes;                                          // 0x0088(0x0010) (Edit, NeedCtorLink)
	int                                                SocketSendBufferBytes;                                     // 0x0098(0x0004) (Edit)
	int                                                SocketReceiveBufferBytes;                                  // 0x009C(0x0004) (Edit)
	unsigned long                                      bEnableDocsisTagging : 1;                                  // 0x00A0(0x0001) BIT_FIELD (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetworkNextConfig_X");
		return ptr;
	}



	void Undo();
	void Apply();
};

// Class ProjectX.PsyNetConfig_X
// 0x0014 (FullSize[0x008C] - InheritedSize[0x0078])
class UPsyNetConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bAllowPerCon : 1;                                          // 0x0078(0x0001) BIT_FIELD (Edit, Config)
	unsigned long                                      bRequiresPerCon : 1;                                       // 0x0078(0x0001) BIT_FIELD (Config)
	unsigned long                                      bAllowPsyNetParty : 1;                                     // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bSendPingMessage : 1;                                      // 0x0078(0x0001) BIT_FIELD (Edit, Config)
	unsigned long                                      bUploadServerBugReports : 1;                               // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAllowServerBacktraceUploads : 1;                          // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAllowServerBacktraceLogUploads : 1;                       // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAllowClientBacktraceUploads : 1;                          // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAllowClientBacktraceLogUploads : 1;                       // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bUseMatchmakingNotifications : 1;                          // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bUsePsyNetBeacon : 1;                                      // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bUseReservationsV3 : 1;                                    // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAllowPlayerCancelMatch : 1;                               // 0x0078(0x0001) BIT_FIELD (Edit)
	float                                              PerConTimeout;                                             // 0x007C(0x0004) (Edit, Config)
	float                                              PerConPingInterval;                                        // 0x0080(0x0004) (Edit, Config)
	float                                              FreshConnectionWindow;                                     // 0x0084(0x0004) (Edit)
	float                                              MatchmakingHeartbeatTimeSeconds;                           // 0x0088(0x0004) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetConfig_X");
		return ptr;
	}



};

// Class ProjectX.PsyNetRetryConfig_X
// 0x0030 (FullSize[0x00A8] - InheritedSize[0x0078])
class UPsyNetRetryConfig_X : public UOnlineConfig_X
{
public:
	TArray<class URetryDelay_X*>                       RetryDelays;                                               // 0x0078(0x0010) (NeedCtorLink)
	TArray<class URetryPolicy_X*>                      RetryPolicies;                                             // 0x0088(0x0010) (NeedCtorLink)
	TArray<class URetryPolicy_X*>                      ReAuthPolicies;                                            // 0x0098(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetRetryConfig_X");
		return ptr;
	}



	class URetryDelay_X* FindReAuthDelay(const struct FString& Service, const struct FName& Error);
	class URetryDelay_X* FindRetryDelay(const struct FString& Service, const struct FName& Error);
	class URetryPolicy_X* FindReAuthPolicy(const struct FString& Service, const struct FName& Error);
	class URetryPolicy_X* FindRetryPolicy(const struct FString& Service, const struct FName& Error);
};

// Class ProjectX.RPCConfig_X
// 0x0024 (FullSize[0x009C] - InheritedSize[0x0078])
class URPCConfig_X : public UOnlineConfig_X
{
public:
	TArray<class UClass*>                              DisabledClasses;                                           // 0x0078(0x0010) (Edit, NeedCtorLink)
	TArray<struct FString>                             DisabledServices;                                          // 0x0088(0x0010) (Edit, NeedCtorLink)
	int                                                MaxRPCsPerBatch;                                           // 0x0098(0x0004) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPCConfig_X");
		return ptr;
	}



	bool IsRPCDisabled(class URPC_X* RPC);
};

// Class ProjectX.ServerConfig_X
// 0x0024 (FullSize[0x009C] - InheritedSize[0x0078])
class UServerConfig_X : public UOnlineConfig_X
{
public:
	float                                              HeartbeatSeconds;                                          // 0x0078(0x0004) (Edit, Config)
	float                                              HeartbeatRetrySeconds;                                     // 0x007C(0x0004) (Edit, Config)
	unsigned long                                      bUploadLogFiles : 1;                                       // 0x0080(0x0001) BIT_FIELD (Edit, Config)
	unsigned long                                      bUploadReplays : 1;                                        // 0x0080(0x0001) BIT_FIELD (Edit, Config)
	unsigned long                                      bFlatbufferRecordInput : 1;                                // 0x0080(0x0001) BIT_FIELD (Edit, Config)
	int                                                MaxUploadLogFileSize;                                      // 0x0084(0x0004) (Edit, Config)
	float                                              NetServerMaxTickRate;                                      // 0x0088(0x0004) (Edit, Config)
	float                                              IdleNetServerMaxTickRate;                                  // 0x008C(0x0004) (Edit, Config)
	float                                              FlatbufferChance;                                          // 0x0090(0x0004) (Edit, Config)
	int                                                FlatbufferMaxRecordSizeMB;                                 // 0x0094(0x0004) (Edit, Config)
	int                                                FlatbufferPacketSendRate;                                  // 0x0098(0x0004) (Edit, Config)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ServerConfig_X");
		return ptr;
	}



};

// Class ProjectX.ParticleModuleVelocitySurfaceNormal_X
// 0x0034 (FullSize[0x00A8] - InheritedSize[0x0074])
class UParticleModuleVelocitySurfaceNormal_X : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData_PMFC[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       MeshActorParamName;                                        // 0x0078(0x0008) (Edit)
	struct FRawDistributionFloat                       VelocityMultiplier;                                        // 0x0080(0x0028) (Edit, Component, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ParticleModuleVelocitySurfaceNormal_X");
		return ptr;
	}



};

// Class ProjectX.ParticleModuleVelocitySurfaceNormalStatic_X
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UParticleModuleVelocitySurfaceNormalStatic_X : public UParticleModuleVelocitySurfaceNormal_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ParticleModuleVelocitySurfaceNormalStatic_X");
		return ptr;
	}



};

// Class ProjectX.RPC_X
// 0x0088 (FullSize[0x00E8] - InheritedSize[0x0060])
class URPC_X : public UObject
{
public:
	struct FString                                     Service;                                                   // 0x0060(0x0010) (Edit, Const, NeedCtorLink)
	int                                                Version;                                                   // 0x0070(0x0004) (Edit, Const)
	float                                              ServiceFailRetryDelay;                                     // 0x0074(0x0004) (Edit, Const)
	unsigned long                                      bAllowBatching : 1;                                        // 0x0078(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      bRequiresAuth : 1;                                         // 0x0078(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      bDisposed : 1;                                             // 0x0078(0x0001) BIT_FIELD (Transient, PrivateWrite)
	TEnumAsByte<ProjectX_ERPCPriority>                 Priority;                                                  // 0x007C(0x0001) (Edit, Const)
	unsigned char                                      UnknownData_UCKO[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKeyValuePair>                       Headers;                                                   // 0x0080(0x0010) (Edit, Const, NeedCtorLink)
	class UError*                                      Error;                                                     // 0x0090(0x0008) (Const, Transient)
	class UAsyncTask*                                  Task;                                                      // 0x0098(0x0008) (Transient)
	struct FScriptDelegate                             __EventSuccess__Delegate;                                  // 0x00A0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_9XP3[0xC];                                     // 0x00A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventFail__Delegate;                                     // 0x00B8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_I4L2[0xC];                                     // 0x00B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventComplete__Delegate;                                 // 0x00D0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_4PC2[0xC];                                     // 0x00D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_X");
		return ptr;
	}



	void NotifySuccess();
	void NotifyError(class UError* InError);
	bool ShouldResendOnFail(class UError* InError);
	class UErrorType* OverrideErrorType(class UErrorType* ErrorType);
	void OnComplete();
	void OnFail();
	void OnSuccess();
	void Dispose();
	class UAsyncTask* CreateTask(const struct FScriptDelegate& InCallback);
	class URPC_X* NotifyOnComplete(const struct FScriptDelegate& Callback);
	class URPC_X* NotifyOnFail(const struct FScriptDelegate& Callback);
	class URPC_X* NotifyOnSuccess(const struct FScriptDelegate& Callback);
	class UObject* GetResponseObject();
	void EventComplete(class URPC_X* RPC);
	void EventFail(class URPC_X* RPC);
	void EventSuccess(class URPC_X* RPC);
};

// Class ProjectX.RPC_GetLeaderboardBase_X
// 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
class URPC_GetLeaderboardBase_X : public URPC_X
{
public:
	unsigned long                                      bDisableCrossPlay : 1;                                     // 0x00E8(0x0001) BIT_FIELD (PrivateWrite)
	unsigned char                                      UnknownData_6TEI[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LeaderboardId;                                             // 0x00F0(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	TArray<struct FGetLeaderboardPlatformBaseData>     Platforms;                                                 // 0x0100(0x0010) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetLeaderboardBase_X");
		return ptr;
	}



	class URPC_GetLeaderboardBase_X* SetDisableCrossPlay(bool InDisableCrossplay);
};

// Class ProjectX.RPC_GetSkillLeaderboard_X
// 0x0004 (FullSize[0x0114] - InheritedSize[0x0110])
class URPC_GetSkillLeaderboard_X : public URPC_GetLeaderboardBase_X
{
public:
	int                                                Playlist;                                                  // 0x0110(0x0004) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetSkillLeaderboard_X");
		return ptr;
	}



	class URPC_GetSkillLeaderboard_X* SetPlaylist(int InPlaylist);
};

// Class ProjectX.RPC_GetLeaderboard_X
// 0x0010 (FullSize[0x0120] - InheritedSize[0x0110])
class URPC_GetLeaderboard_X : public URPC_GetLeaderboardBase_X
{
public:
	struct FString                                     Stat;                                                      // 0x0110(0x0010) (NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetLeaderboard_X");
		return ptr;
	}



	class URPC_GetLeaderboard_X* SetStat(const struct FString& InStat);
};

// Class ProjectX.StateObject_X
// 0x0004 (FullSize[0x0064] - InheritedSize[0x0060])
class UStateObject_X : public UObject
{
public:
	unsigned long                                      bDebug : 1;                                                // 0x0060(0x0001) BIT_FIELD (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.StateObject_X");
		return ptr;
	}



	void InitExecution();
	void Destroyed();
	void Destroy();
};

// Class ProjectX.Online_X
// 0x0034 (FullSize[0x0098] - InheritedSize[0x0064])
class UOnline_X : public UStateObject_X
{
public:
	unsigned char                                      UnknownData_TW52[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UOnlineSubsystem*                            OnlineSub;                                                 // 0x0068(0x0008) (Transient, PrivateWrite)
	class UPsyNet_X*                                   PsyNet;                                                    // 0x0070(0x0008) (Transient, PrivateWrite)
	class UOnlineSubsystem*                            EOS;                                                       // 0x0078(0x0008) (Transient, PrivateWrite)
	struct FScriptDelegate                             __EventEOSInitialized__Delegate;                           // 0x0080(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_LD0V[0xC];                                     // 0x0080(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Online_X");
		return ptr;
	}



	void __Online_X__InitializeEOS_EF5386874EE3DB421665A8972CDFD843(class UEpicConfig_X* EpicConfig);
	class UOnlineSubsystem* GetOrCreateEOS(struct FString* SandboxId, struct FString* DeploymentId);
	void NotifyWhenEOSInitialized(const struct FScriptDelegate& Callback);
	void HandleLinkStatusChangedEOSInit(bool bHasInternetConnection);
	void InitializeEOS();
	struct FString BuildAddress(const struct FString& Host, int Port, const struct FString& IP);
	bool IsInOnlineGame();
	bool IsInMainMenu();
	class AGRI_X* GetGRI();
	class AWorldInfo* GetWorldInfo();
	struct FUniqueNetId CreateUniqueNetID(TEnumAsByte<Core_EOnlinePlatform> Platform, const struct FString& PlatformName);
	bool UniqueLobbyIDIsSet(const struct FUniqueLobbyId& InID);
	struct FUniqueLobbyId StringToUniqueLobbyId(const struct FString& InID);
	struct FString UniqueLobbyIdToString(const struct FUniqueLobbyId& InID);
	struct FUniqueNetId GetUniqueNetIDWithoutSplitscreenID(const struct FUniqueNetId& Id);
	struct FUniqueNetId GetPrimaryIDForGuest(const struct FUniqueNetId& InGuestID);
	bool UniqueNetIDIsGuest(const struct FUniqueNetId& InID);
	bool UniqueNetIDIsValid(const struct FUniqueNetId& InID);
	struct FUniqueNetId StringToUniqueNetId(const struct FString& InID);
	struct FString PlatformIdToString(struct FUniqueNetId* InID);
	struct FString UniqueNetIdToString(const struct FUniqueNetId& InID);
	struct FUniqueNetId CleanUniqueNetID(const struct FUniqueNetId& InID);
	int FindUniqueNetID(TArray<struct FUniqueNetId>* List, struct FUniqueNetId* Search);
	class UError* GetConnectionStatusError(int ErrorCode, class UError* FallbackError);
	void OnExit();
	void OnNewGame();
	void OnMainMenuOpened();
	void HandleGRISpawned(class AGRI_X* GRI);
	void OnInit();
	void Init(class UOnlineSubsystem* NewOnlineSubsystem);
	void EventEOSInitialized();
};

// Class ProjectX.OnlinePlayerFriends_X
// 0x0280 (FullSize[0x0318] - InheritedSize[0x0098])
class UOnlinePlayerFriends_X : public UOnline_X
{
public:
	unsigned long                                      bAllowSamePlatformPsyNetFriends : 1;                       // 0x0098(0x0001) BIT_FIELD (Config)
	unsigned long                                      bRepeatFriendsListDownloadsUntilSuccess : 1;               // 0x0098(0x0001) BIT_FIELD (Const, Config)
	unsigned long                                      bFetchingLinkedAccounts : 1;                               // 0x0098(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_P2RD[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UOnlineFriendMap_X*                          CachedFriends;                                             // 0x00A0(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class UPlatformFriends_X*                          PlatformFriends;                                           // 0x00A8(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class UPsyNetFriends_X*                            PsyNetFriends;                                             // 0x00B0(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class UEpicFriends_X*                              EpicFriends;                                               // 0x00B8(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class UOnlineFriendMap_X*                          BlockedPlayers;                                            // 0x00C0(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class ULinkedAccountMap_X*                         PlatformToEpicAccountMap;                                  // 0x00C8(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class ULinkedAccountMap_X*                         EpicToPlatformAccountMap;                                  // 0x00D0(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class URetryDelayer_X*                             PlatformFriendsDownloadDelayer;                            // 0x00D8(0x0008) (ExportObject, Component, EditInline)
	class URetryDelayer_X*                             PsyNetFriendsDownloadDelayer;                              // 0x00E0(0x0008) (ExportObject, Component, EditInline)
	class URetryDelayer_X*                             EpicFriendsDownloadDelayer;                                // 0x00E8(0x0008) (ExportObject, Component, EditInline)
	class URetryDelayer_X*                             BlockedListDownloadDelayer;                                // 0x00F0(0x0008) (ExportObject, Component, EditInline)
	TArray<struct FUniqueNetId>                        PendingFriendAccepts;                                      // 0x00F8(0x0010) (NeedCtorLink)
	class UOSSConfig_X*                                OSSConfig;                                                 // 0x0108(0x0008) (Edit)
	class UEpicConfig_X*                               EpicConfig;                                                // 0x0110(0x0008)
	class UEpicFriendsPlugin_X*                        EpicFriendsPlugin;                                         // 0x0118(0x0008) (Edit)
	struct FScriptDelegate                             __EventFriendsListChanged__Delegate;                       // 0x0120(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_7INH[0xC];                                     // 0x0120(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetBlockedListDownloadComplete__Delegate;        // 0x0138(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_WTU8[0xC];                                     // 0x0138(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetBlockedListChanged__Delegate;                 // 0x0150(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_Q97I[0xC];                                     // 0x0150(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetBlockedPlayer__Delegate;                      // 0x0168(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_H7V7[0xC];                                     // 0x0168(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetUnblockedPlayer__Delegate;                    // 0x0180(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_AWQT[0xC];                                     // 0x0180(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventAcceptEpicFriendInvite__Delegate;                   // 0x0198(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_GEYY[0xC];                                     // 0x0198(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDeclineEpicFriendInvite__Delegate;                  // 0x01B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_0FAW[0xC];                                     // 0x01B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventChatMessage__Delegate;                              // 0x01C8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_P7ZO[0xC];                                     // 0x01C8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetStatusUpdate__Delegate;                       // 0x01E0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_HOMY[0xC];                                     // 0x01E0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetPsyTagUpdate__Delegate;                       // 0x01F8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_F7V5[0xC];                                     // 0x01F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlatformStatusUpdate__Delegate;                     // 0x0210(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_YJ3U[0xC];                                     // 0x0210(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventEpicStatusUpdate__Delegate;                         // 0x0228(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_EZA8[0xC];                                     // 0x0228(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventEpicFriendInviteReceived__Delegate;                 // 0x0240(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_HZ62[0xC];                                     // 0x0240(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventEpicFriendInviteRemoved__Delegate;                  // 0x0258(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_L862[0xC];                                     // 0x0258(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventEpicFriendInviteSucceeded__Delegate;                // 0x0270(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_TZQR[0xC];                                     // 0x0270(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventEpicFriendInviteFailed__Delegate;                   // 0x0288(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_T7SS[0xC];                                     // 0x0288(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventEpicPlayerUnfriended__Delegate;                     // 0x02A0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_KTA3[0xC];                                     // 0x02A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventQueriedUserByEpicDisplayName__Delegate;             // 0x02B8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_U71C[0xC];                                     // 0x02B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlatformFriendsListDownloadCompleted__Delegate;     // 0x02D0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_AU57[0xC];                                     // 0x02D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetFriendsListDownloadCompleted__Delegate;       // 0x02E8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_KETB[0xC];                                     // 0x02E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventEpicFriendsListDownloadCompleted__Delegate;         // 0x0300(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_FBP0[0xC];                                     // 0x0300(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayerFriends_X");
		return ptr;
	}



	void __OnlinePlayerFriends_X__OnInit_F0303B1148E2FE212C9C8998B091A1AD(class UEpicFriendsPlugin_X* Plugin);
	void __OnlinePlayerFriends_X__OnInit_9A035BC5465F076F41AD73A41A9501DE();
	void __OnlinePlayerFriends_X__OnInit_83D1E6DD4FC75584BA8F01977F99C8E7(class UPsyNetService_FriendChatReceived_X* N);
	void RebuildFriendsCache();
	void RemoveEpicFriendLocally(const struct FUniqueNetId& RemovedID);
	void SendChatMessage(const struct FString& InMessage, const struct FUniqueNetId& Recipient);
	void ShowPlayerCard(const struct FUniqueNetId& FriendId, const struct FString& FriendName);
	void SetEpicRichPresence(unsigned char LocalUserNum, const struct FString& PresenceString, const struct FString& GameDataString);
	void SetPlatformRichPresence(unsigned char LocalUserNum, const struct FString& PresenceString, const struct FString& GameDataString);
	void HandleEpicFriendRemoved(bool bWasSuccessful, const struct FUniqueNetId& RemovedID);
	void RemoveEpicFriend(const struct FUniqueNetId& FriendId);
	bool IsFriend(const struct FUniqueNetId& FriendId);
	bool IsPlatformFriend(const struct FUniqueNetId& FriendId);
	bool IsPsyNetFriend(const struct FUniqueNetId& FriendId);
	bool IsEpicFriend(const struct FUniqueNetId& FriendId);
	void ConditionalUpdateFriendInMap(class UOnlineFriendMap_X* FriendMap, const struct FOnlineFriend& NewFriendData);
	void HandlePsyTagUpdated(class UPsyNetService_FriendPsyTagUpdated_X* Notification);
	void HandleEpicPresenceChanged(const struct FUniqueNetId& FriendId);
	void HandlePlatformPresenceChange(const struct FUniqueNetId& FriendId);
	struct FOnlineStatus ExtractStatusData(const struct FOnlineFriend& InFriend);
	void HandleReadEpicFriendsAbandoned();
	void HandleDownloadEpicFriendsTryComplete(bool bSuccess);
	void DownloadEpicFriendsList();
	void BeginEpicFriendsDownloadAttempts();
	void HandleOnReceivedLinkedAccounts(bool bSuccess, TArray<struct FLinkedAccountData> LinkedAccountData);
	void GetLinkedFriendData();
	void HandleReadPsyNetFriendsAbandoned();
	void HandleReadPsyNetFriendsFail(class URPC_PsyNetReadFriends_X* RPC);
	void HandleReadPsyNetFriendsSuccess(class URPC_PsyNetReadFriends_X* RPC);
	void DownloadPsyNetFriendsList();
	void BeginPsyNetFriendsDownloadAttempts();
	void UpdateFriendsFromOnlineSub();
	void DelayedUpdateFriendsFromOnlineSub();
	void UpdateFriendsFromEpicSub();
	void DelayedUpdateFriendsFromEpicSub();
	void HandleDeclineEpicFriendInviteComplete(const struct FUniqueNetId& DeclinedId, class UError* Error);
	void DeclineEpicFriendInvite(const struct FUniqueNetId& FriendId);
	void HandleAcceptEpicFriendInviteComplete(const struct FUniqueNetId& AcceptedId, class UError* Error);
	void AcceptEpicFriendInvite(const struct FUniqueNetId& FriendId);
	void HandleEpicFriendInviteCompleted(const struct FUniqueNetId& InvitedPlayerId, class UError* Error);
	void HandleEpicFriendInviteRemoved(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerToRemove);
	void HandleEpicFriendInviteReceived(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer, const struct FString& RequestingNick, const struct FString& Message);
	bool InviteEpicFriend(const struct FUniqueNetId& FriendPlayerId);
	bool RequestLinkedAccounts(TArray<struct FUniqueNetId> AccountIds, const struct FScriptDelegate& Callback);
	void HandleQueriedUserByEpicDisplayName(bool bWasSuccessful, const struct FString& QueriedDisplayName, const struct FUniqueNetId& QueriedPlayerId);
	bool QueryUserByEpicDisplayName(const struct FString& DisplayName);
	void OnPlatformFriendsDownloadAbandoned();
	void HandleDownloadPlatformFriendsTryComplete(bool bSuccess);
	void DownloadPlatformFriendsList();
	void BeginDownloadPlatformFriendsListAttempts();
	void UnblockPlayer(const struct FUniqueNetId& UnblockID, const struct FScriptDelegate& Callback);
	void BlockPlayer(const struct FUniqueNetId& BlockedID, const struct FString& BlockedPlayerName, const struct FPsyTag& BlockedTag, const struct FScriptDelegate& Callback);
	void OnBlockedListDownloadAbandoned(const struct FScriptDelegate& Callback);
	void HandleDownloadBlockedListAttemptComplete(class URPC_GetBlockList_X* RPC, const struct FScriptDelegate& Callback);
	void DownloadBlockedListAttempt(const struct FScriptDelegate& Callback);
	void DownloadBlockedList(const struct FScriptDelegate& Callback);
	void HandlePsyNetConnected(class UPsyNetConnection_X* C);
	TEnumAsByte<Engine_EOnlineFriendState> GetFriendState(const struct FString& PresenceState);
	struct FOnlineFriend ConvertPsyNetResponseToOnlineFriend(const struct FPsyNetPersonaData& InData, struct FOnlineFriend* StructInitializer_F33B2FBB4CB1A069DE92BCA52EBED56C);
	void Construct();
	void HandleOSSConfigChanged(class UOSSConfig_X* InOSSConfig);
	void OnInit();
	void EventEpicFriendsListDownloadCompleted(bool bSuccess);
	void EventPsyNetFriendsListDownloadCompleted(bool bSuccess);
	void EventPlatformFriendsListDownloadCompleted(bool bSuccess);
	void EventQueriedUserByEpicDisplayName(bool bWasSuccessful, const struct FString& QueriedDisplayName, const struct FUniqueNetId& QueriedPlayerId);
	void EventEpicPlayerUnfriended(const struct FUniqueNetId& RemovedID);
	void EventEpicFriendInviteFailed(const struct FUniqueNetId& InvitedPlayerId, class UError* InviteFriendError);
	void EventEpicFriendInviteSucceeded(const struct FUniqueNetId& InvitedPlayerId);
	void EventEpicFriendInviteRemoved(const struct FUniqueNetId& PlayerToRemove);
	void EventEpicFriendInviteReceived(const struct FUniqueNetId& RequestingPlayer, const struct FString& RequestingNick);
	void EventEpicStatusUpdate(const struct FOnlineStatus& StatusData);
	void EventPlatformStatusUpdate(const struct FOnlineStatus& StatusData);
	void EventPsyNetPsyTagUpdate(struct FOnlineFriend* FriendData);
	void EventPsyNetStatusUpdate(const struct FOnlineStatus& StatusData);
	void EventChatMessage(const struct FString& InMessage, const struct FUniqueNetId& SenderId, bool bIsLocal);
	void EventDeclineEpicFriendInvite(const struct FUniqueNetId& DeclinedId, class UError* RequestError);
	void EventAcceptEpicFriendInvite(const struct FUniqueNetId& AcceptedId, class UError* RequestError);
	void EventPsyNetUnblockedPlayer(const struct FUniqueNetId& BlockedID, class UError* RequestError);
	void EventPsyNetBlockedPlayer(const struct FUniqueNetId& BlockedID, class UError* RequestError);
	void EventPsyNetBlockedListChanged(class UOnlinePlayerFriends_X* FriendsObject);
	void EventPsyNetBlockedListDownloadComplete(class UError* RequestError);
	void EventFriendsListChanged(class UOnlinePlayerFriends_X* FriendsRef, class UError* Error);
};

// Class ProjectX.PsyNetClientService_X
// 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
class UPsyNetClientService_X : public UObject
{
public:
	struct FString                                     Service;                                                   // 0x0060(0x0010) (Edit, Const, NeedCtorLink)
	int                                                Version;                                                   // 0x0070(0x0004) (Edit, Const)
	unsigned char                                      UnknownData_R6F4[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UError*                                      Error;                                                     // 0x0078(0x0008) (Const)
	class UPsyNetConnection_X*                         Connection;                                                // 0x0080(0x0008)
	unsigned char                                      Expiration[0x8];                                           // 0x0088(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.PsyNetClientService_X.Expiration


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetClientService_X");
		return ptr;
	}



	void Execute();
	void SetError(class UError* InError);
};

// Class ProjectX.PsyNetService_ReservationBase_X
// 0x0020 (FullSize[0x00B0] - InheritedSize[0x0090])
class UPsyNetService_ReservationBase_X : public UPsyNetClientService_X
{
public:
	struct FString                                     ReservationID;                                             // 0x0090(0x0010) (NeedCtorLink)
	TArray<struct FPsyNetBeaconPlayerReservation>      Players;                                                   // 0x00A0(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_ReservationBase_X");
		return ptr;
	}



	struct FPsyNetBeaconReservation GetReservation();
};

// Class ProjectX.PsyNetService_Backfill_X
// 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
class UPsyNetService_Backfill_X : public UPsyNetService_ReservationBase_X
{
public:
	TArray<struct FPsyNetBeaconPartyReservation>       Parties;                                                   // 0x00B0(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_Backfill_X");
		return ptr;
	}



	struct FPsyNetBeaconReservation GetReservation();
};

// Class ProjectX.PsyNetService_CreatePrivate_X
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UPsyNetService_CreatePrivate_X : public UPsyNetService_ReservationBase_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_CreatePrivate_X");
		return ptr;
	}



	struct FPsyNetBeaconReservation GetReservation();
};

// Class ProjectX.PsyNetService_JoinPrivate_X
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UPsyNetService_JoinPrivate_X : public UPsyNetService_ReservationBase_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_JoinPrivate_X");
		return ptr;
	}



};

// Class ProjectX.PsyNetService_FriendJoin_X
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UPsyNetService_FriendJoin_X : public UPsyNetService_ReservationBase_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_FriendJoin_X");
		return ptr;
	}



};

// Class ProjectX.PsyNetService_Reconnect_X
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UPsyNetService_Reconnect_X : public UPsyNetService_ReservationBase_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_Reconnect_X");
		return ptr;
	}



};

// Class ProjectX.ServerToServerMessage_X
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UServerToServerMessage_X : public UObject
{
public:
	unsigned char                                      ServerId[0x8];                                             // 0x0060(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.ServerToServerMessage_X.ServerId


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ServerToServerMessage_X");
		return ptr;
	}



};

// Class ProjectX.MatchInfoMessage_X
// 0x0048 (FullSize[0x00B0] - InheritedSize[0x0068])
class UMatchInfoMessage_X : public UServerToServerMessage_X
{
public:
	int                                                Playlist;                                                  // 0x0068(0x0004)
	unsigned long                                      bIsBotMatch : 1;                                           // 0x006C(0x0001) BIT_FIELD
	TArray<struct FString>                             BotNames;                                                  // 0x0070(0x0010) (NeedCtorLink)
	struct FString                                     ReservationID;                                             // 0x0080(0x0010) (NeedCtorLink)
	struct FString                                     JoinName;                                                  // 0x0090(0x0010) (NeedCtorLink)
	struct FString                                     JoinPassword;                                              // 0x00A0(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MatchInfoMessage_X");
		return ptr;
	}



	struct FPsyNetBeaconReservation GetReservation();
};

// Class ProjectX.__OnlineGameSkill_X__OnSkillSynced_F886A7394DBEC5E00C7E43B99461E649
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class U__OnlineGameSkill_X__OnSkillSynced_F886A7394DBEC5E00C7E43B99461E649 : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0060(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameSkill_X__OnSkillSynced_F886A7394DBEC5E00C7E43B99461E649");
		return ptr;
	}



	bool __OnlineGameSkill_X__OnSkillSynced_F886A7394DBEC5E00C7E43B99461E649(class ULocalPlayer* P);
};

// Class ProjectX.SyncedSkillData_X
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class USyncedSkillData_X : public UObject
{
public:
	class UOnlineGameSkill_X*                          OnlineGameSkill;                                           // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SyncedSkillData_X");
		return ptr;
	}



};

// Class ProjectX.RPC_BlockPlayer_X
// 0x0048 (FullSize[0x0130] - InheritedSize[0x00E8])
class URPC_BlockPlayer_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x00E8(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_BlockPlayer_X");
		return ptr;
	}



	class URPC_BlockPlayer_X* SetBlockedPlayerId(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.RPC_GetBlockList_X
// 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
class URPC_GetBlockList_X : public URPC_X
{
public:
	TArray<struct FBlockedListRequestData>             bLocked;                                                   // 0x00E8(0x0010) (Transient, NeedCtorLink)
	TArray<struct FOnlineFriend>                       FriendsData;                                               // 0x00F8(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetBlockList_X");
		return ptr;
	}



	struct FOnlineFriend ConvertToBlockedOnlineFriend(const struct FBlockedListRequestData& FromPlayer);
	void OnComplete(TArray<struct FOnlineFriend>* MapLocal_446F0BDE41683F604E185583975B7DB8);
};

// Class ProjectX.__OnlinePlayerFriends_X__DownloadBlockedListAttempt_2E5DA0C04C6CFCBB78F8FFA4D3FED93E
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__OnlinePlayerFriends_X__DownloadBlockedListAttempt_2E5DA0C04C6CFCBB78F8FFA4D3FED93E : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_8Y2U[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlinePlayerFriends_X__DownloadBlockedListAttempt_2E5DA0C04C6CFCBB78F8FFA4D3FED93E");
		return ptr;
	}



	void __OnlinePlayerFriends_X__DownloadBlockedListAttempt_2E5DA0C04C6CFCBB78F8FFA4D3FED93E(class URPC_GetBlockList_X* RPC);
};

// Class ProjectX.__OnlinePlayerFriends_X__DownloadBlockedList_2BAB1F1D4C2A3532C8898CB2A101AB41
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__OnlinePlayerFriends_X__DownloadBlockedList_2BAB1F1D4C2A3532C8898CB2A101AB41 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_F4I1[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlinePlayerFriends_X__DownloadBlockedList_2BAB1F1D4C2A3532C8898CB2A101AB41");
		return ptr;
	}



	void __OnlinePlayerFriends_X__DownloadBlockedList_43F203A9438C03E4D69E8A95F5286BC5();
	void __OnlinePlayerFriends_X__DownloadBlockedList_2BAB1F1D4C2A3532C8898CB2A101AB41();
};

// Class ProjectX.OnlineFriendMap_X
// 0x0050 (FullSize[0x00C0] - InheritedSize[0x0070])
class UOnlineFriendMap_X : public UComponent
{
public:
	struct FMap_Mirror                                 PlayerMap;                                                 // 0x0070(0x0050) (Native)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineFriendMap_X");
		return ptr;
	}



	void ValueArray(TArray<struct FOnlineFriend>* OutArray);
	void AppendArray(TArray<struct FOnlineFriend>* InArray);
	void CopyArray(TArray<struct FOnlineFriend>* InArray);
	bool Contains(struct FUniqueNetId* Key);
	void Clear(int ExpectedElements);
	void Remove(struct FUniqueNetId* Key);
	bool TryGet(struct FUniqueNetId* Key, struct FOnlineFriend* OutValue);
	void Set(struct FUniqueNetId* Key, struct FOnlineFriend* Value);
	int Count();
	void AllValues(struct FOnlineFriend* OutFriend, int StartIndex, int MaxValues);
};

// Class ProjectX.PlatformFriends_X
// 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
class UPlatformFriends_X : public UOnlineFriendMap_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PlatformFriends_X");
		return ptr;
	}



};

// Class ProjectX.EpicFriends_X
// 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
class UEpicFriends_X : public UOnlineFriendMap_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EpicFriends_X");
		return ptr;
	}



};

// Class ProjectX.LanBrowser_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class ULanBrowser_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LanBrowser_X");
		return ptr;
	}



	class UAsyncTask* JoinServer(const struct FString& ServerId, const struct FString& Options);
	class UTAsyncResult__array_LanServerRecord_X* GetServerList();
	void DestroyServer();
	class UAsyncTask* SetServerMetaData(const struct FString& MetaData);
	class UAsyncTask* CreateServer(const struct FString& MetaData);
	void HandleGameInfoSpawned(class AGameInfo_X* G);
	void Construct();
};

// Class ProjectX.AdHocBrowser_X
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class UAdHocBrowser_X : public ULanBrowser_X
{
public:
	class UAdHocBeacon_X*                              AdHocBeacon;                                               // 0x0060(0x0008)
	TArray<struct FAdHocAccessPointInfo>               AdHocNodesOnNetwork;                                       // 0x0068(0x0010) (NeedCtorLink)
	float                                              SearchTimeout;                                             // 0x0078(0x0004) (Edit, Const)
	unsigned char                                      UnknownData_Z2WJ[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTAsyncResult__array_LanServerRecord_X*      SearchTask;                                                // 0x0080(0x0008)
	TArray<class ULanServerRecord_X*>                  SearchResults;                                             // 0x0088(0x0010) (NeedCtorLink)
	TArray<struct FAdHocAccessPointInfo>               AdHocAccessPointsAvailable;                                // 0x0098(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AdHocBrowser_X");
		return ptr;
	}



	void __AdHocBrowser_X__GetServerList_10DD4B404451E522B1E26FA35C8B9AB2();
	void HandleSearchTimeout();
	void AdHocHandleOnNetworkChanged(TArray<struct FAdHocAccessPointInfo> Ahapis);
	int FindIndexFromServerID(const struct FString& InServerID);
	class UAsyncTask* JoinServer(const struct FString& ServerId, const struct FString& Options);
	void CreateErrorDelegate(class UAsyncTask* Task);
	class UTAsyncResult__array_LanServerRecord_X* GetServerList();
	class UAsyncTask* SetServerMetaData(const struct FString& MetaData);
	class UAsyncTask* CreateServer(const struct FString& MetaData);
};

// Class ProjectX.LanServerRecord_X
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class ULanServerRecord_X : public UObject
{
public:
	struct FString                                     ServerId;                                                  // 0x0060(0x0010) (NeedCtorLink)
	struct FString                                     MetaData;                                                  // 0x0070(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LanServerRecord_X");
		return ptr;
	}



};

// Class ProjectX.__AdHocBrowser_X__CreateServer_2C47D6AB4D558D6425DA6191CE30CF73
// 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
class U__AdHocBrowser_X__CreateServer_2C47D6AB4D558D6425DA6191CE30CF73 : public UObject
{
public:
	struct FString                                     MetaData;                                                  // 0x0060(0x0010) (NeedCtorLink)
	class UAsyncTask*                                  Task;                                                      // 0x0070(0x0008)
	struct FScriptDelegate                             ApcDelegate;                                               // 0x0078(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_ELXT[0xC];                                     // 0x0078(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__AdHocBrowser_X__CreateServer_2C47D6AB4D558D6425DA6191CE30CF73");
		return ptr;
	}



	void __AdHocBrowser_X__CreateServer_EBA31AEA4B25C03F7DD9788B6C8317FC();
	void __AdHocBrowser_X__CreateServer_2C47D6AB4D558D6425DA6191CE30CF73();
};

// Class ProjectX.__AdHocBrowser_X__CreateErrorDelegate_CFC4DEE94D89EAB30428A5827BC8FED5
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class U__AdHocBrowser_X__CreateErrorDelegate_CFC4DEE94D89EAB30428A5827BC8FED5 : public UObject
{
public:
	class UAsyncTask*                                  Task;                                                      // 0x0060(0x0008)
	struct FScriptDelegate                             ErrorDelegate;                                             // 0x0068(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_2ZUN[0xC];                                     // 0x0068(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__AdHocBrowser_X__CreateErrorDelegate_CFC4DEE94D89EAB30428A5827BC8FED5");
		return ptr;
	}



	void __AdHocBrowser_X__CreateErrorDelegate_DFF999864A197C07E171F49019A8E126();
	void __AdHocBrowser_X__CreateErrorDelegate_CFC4DEE94D89EAB30428A5827BC8FED5(class UError* Error);
};

// Class ProjectX.__AdHocBrowser_X__JoinServer_73FD583148BBE5057DE3D0BE3EEA8950
// 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
class U__AdHocBrowser_X__JoinServer_73FD583148BBE5057DE3D0BE3EEA8950 : public UObject
{
public:
	class UAsyncTask*                                  Task;                                                      // 0x0060(0x0008)
	struct FString                                     ServerId;                                                  // 0x0068(0x0010) (NeedCtorLink)
	struct FString                                     Options;                                                   // 0x0078(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__AdHocBrowser_X__JoinServer_73FD583148BBE5057DE3D0BE3EEA8950");
		return ptr;
	}



	void __AdHocBrowser_X__JoinServer_73FD583148BBE5057DE3D0BE3EEA8950();
};

// Class ProjectX.AdHocInterface_X
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UAdHocInterface_X : public UObject
{
public:
	class ULanBrowser_X*                               OldLanBrowser;                                             // 0x0060(0x0008)
	class UAdHocBeacon_X*                              AdHocBeacon;                                               // 0x0068(0x0008)
	class UOnlineGameParty_X*                          OnlineGameParty;                                           // 0x0070(0x0008)
	class UOnlineGameMatchmaking_X*                    Matchmaking;                                               // 0x0078(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AdHocInterface_X");
		return ptr;
	}



	void CreateErrorDelegate(class UAsyncTask* Task);
	class UAsyncTask* DisableAdHoc();
	void HandleGameInfoSpawned(class AGameInfo_X* InGameInfo);
	class UAsyncTask* EnableAdHoc();
};

// Class ProjectX.__AdHocInterface_X__EnableAdHoc_281846CE4FA658FA0FEB16920BDF18F6
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class U__AdHocInterface_X__EnableAdHoc_281846CE4FA658FA0FEB16920BDF18F6 : public UObject
{
public:
	class UAsyncTask*                                  Task;                                                      // 0x0060(0x0008)
	struct FScriptDelegate                             InitDelegate;                                              // 0x0068(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_1XVF[0xC];                                     // 0x0068(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__AdHocInterface_X__EnableAdHoc_281846CE4FA658FA0FEB16920BDF18F6");
		return ptr;
	}



	void __AdHocInterface_X__EnableAdHoc_0B7F91834BB27B7C7353848F63CE7248();
	void __AdHocInterface_X__EnableAdHoc_281846CE4FA658FA0FEB16920BDF18F6();
};

// Class ProjectX.__AdHocInterface_X__DisableAdHoc_8617E42541F6804C6CAA0AA562AA98F9
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class U__AdHocInterface_X__DisableAdHoc_8617E42541F6804C6CAA0AA562AA98F9 : public UObject
{
public:
	class UAsyncTask*                                  Task;                                                      // 0x0060(0x0008)
	struct FScriptDelegate                             DestroyedDelegate;                                         // 0x0068(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_DSYS[0xC];                                     // 0x0068(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__AdHocInterface_X__DisableAdHoc_8617E42541F6804C6CAA0AA562AA98F9");
		return ptr;
	}



	void __AdHocInterface_X__DisableAdHoc_9E1088B74B94C22B6F5319837CA6A773();
	void __AdHocInterface_X__DisableAdHoc_8617E42541F6804C6CAA0AA562AA98F9();
};

// Class ProjectX.BlogTile_X
// 0x00A0 (FullSize[0x0100] - InheritedSize[0x0060])
class UBlogTile_X : public UObject
{
public:
	struct FString                                     Title;                                                     // 0x0060(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     DescriptionHeader;                                         // 0x0070(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     Description;                                               // 0x0080(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     WebURL;                                                    // 0x0090(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     CarName;                                                   // 0x00A0(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     ImageURL;                                                  // 0x00B0(0x0010) (NeedCtorLink)
	struct FString                                     StartTime;                                                 // 0x00C0(0x0010) (NeedCtorLink)
	unsigned char                                      StartTimeEpoch[0x8];                                       // 0x00D0(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.BlogTile_X.StartTimeEpoch
	TEnumAsByte<ProjectX_ELinkType>                    LinkType;                                                  // 0x00D8(0x0001) (DataBinding)
	unsigned char                                      UnknownData_DDEM[0x3];                                     // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ShopID;                                                    // 0x00DC(0x0004) (DataBinding)
	int                                                ShopItemID;                                                // 0x00E0(0x0004) (DataBinding)
	int                                                ProductID;                                                 // 0x00E4(0x0004) (DataBinding)
	int                                                CategoryID;                                                // 0x00E8(0x0004) (DataBinding)
	int                                                PlaylistId;                                                // 0x00EC(0x0004) (DataBinding)
	struct FString                                     InfoURL;                                                   // 0x00F0(0x0010) (NeedCtorLink, DataBinding)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.BlogTile_X");
		return ptr;
	}



	struct FString GetTileID();
};

// Class ProjectX.CountTrigger_X
// 0x0020 (FullSize[0x0090] - InheritedSize[0x0070])
class UCountTrigger_X : public UComponent
{
public:
	int                                                Threshold;                                                 // 0x0070(0x0004) (Edit)
	int                                                Count;                                                     // 0x0074(0x0004) (PrivateWrite)
	struct FScriptDelegate                             __EventTriggered__Delegate;                                // 0x0078(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_XQ4A[0xC];                                     // 0x0078(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CountTrigger_X");
		return ptr;
	}



	void Reset();
	void Increment();
	void EventTriggered(class UCountTrigger_X* Trigger);
};

// Class ProjectX.PartyMessageQueue_X
// 0x0040 (FullSize[0x00B0] - InheritedSize[0x0070])
class UPartyMessageQueue_X : public UComponent
{
public:
	TArray<struct FPendingMessage>                     Pending;                                                   // 0x0070(0x0010) (Transient, NeedCtorLink)
	TArray<class UAsyncTask*>                          CurrentBatch;                                              // 0x0080(0x0010) (Transient, NeedCtorLink)
	unsigned long                                      bPaused : 1;                                               // 0x0090(0x0001) BIT_FIELD (PrivateWrite)
	float                                              BatchDelayTime;                                            // 0x0094(0x0004) (Edit)
	struct FScriptDelegate                             __SendMessageServiceDelegate__Delegate;                    // 0x0098(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_81LV[0xC];                                     // 0x0098(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessageQueue_X");
		return ptr;
	}



	void __PartyMessageQueue_X__CancelAll_B16C322F4227C9EC40B116B562B986AE(class UAsyncTask* Task);
	void HandleTaskComplete(class UAsyncTask* Task);
	class UAsyncTask* SendMessage(const struct FUniqueLobbyId& LobbyId, const struct FString& Message);
	void SendBatch();
	void SendBatchTimer();
	void QueueBatch();
	void CancelAll();
	void QueueMessage(const struct FUniqueLobbyId& LobbyId, const struct FString& Message);
	void SetPaused(bool bPause);
	class UAsyncTask* SendMessageServiceDelegate(const struct FUniqueLobbyId& LobbyId, const struct FString& Message);
};

// Class ProjectX.RPC_PartyBase_X
// 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
class URPC_PartyBase_X : public URPC_X
{
public:
	struct FString                                     PartyID;                                                   // 0x00E8(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyBase_X");
		return ptr;
	}



	class URPC_PartyBase_X* SetPartyIdStr(const struct FString& InPartyId);
	class URPC_PartyBase_X* SetPartyId(const struct FUniqueLobbyId& InLobbyId);
};

// Class ProjectX.RPC_PartyMessage_X
// 0x0010 (FullSize[0x0108] - InheritedSize[0x00F8])
class URPC_PartyMessage_X : public URPC_PartyBase_X
{
public:
	struct FString                                     Message;                                                   // 0x00F8(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyMessage_X");
		return ptr;
	}



	class URPC_PartyMessage_X* SetMessage(const struct FString& InMessage);
};

// Class ProjectX.__PartyMessageQueue_X__SendMessage_93AB81514AB6ECB3DDA81BBA8AA56F5D
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__PartyMessageQueue_X__SendMessage_93AB81514AB6ECB3DDA81BBA8AA56F5D : public UObject
{
public:
	class UAsyncTask*                                  Task;                                                      // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PartyMessageQueue_X__SendMessage_93AB81514AB6ECB3DDA81BBA8AA56F5D");
		return ptr;
	}



	void __PartyMessageQueue_X__SendMessage_93AB81514AB6ECB3DDA81BBA8AA56F5D(class UError* _);
};

// Class ProjectX.PsyNetChannel_X
// 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
class UPsyNetChannel_X : public UObject
{
public:
	struct FString                                     ChannelName;                                               // 0x0060(0x0010) (NeedCtorLink)
	unsigned long                                      bOpen : 1;                                                 // 0x0070(0x0001) BIT_FIELD
	unsigned long                                      bReceivedFirstMessage : 1;                                 // 0x0070(0x0001) BIT_FIELD
	unsigned long                                      bClosed : 1;                                               // 0x0070(0x0001) BIT_FIELD
	unsigned long                                      bTimedOut : 1;                                             // 0x0070(0x0001) BIT_FIELD
	int                                                NextMessageID;                                             // 0x0074(0x0004)
	float                                              WaitForMessageTime;                                        // 0x0078(0x0004) (Edit)
	unsigned char                                      UnknownData_AB5W[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPendingChannelService>              ServiceQueue;                                              // 0x0080(0x0010) (NeedCtorLink)
	class UPsyNetServiceSubscriptions_X*               Subscriptions;                                             // 0x0090(0x0008) (ExportObject, Component, EditInline)
	struct FScriptDelegate                             __EventClosed__Delegate;                                   // 0x0098(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_F9FD[0xC];                                     // 0x0098(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetChannel_X");
		return ptr;
	}



	struct FString GetDebugName();
	void Close();
	void Timeout();
	void ClearTimeout();
	void UpdateTimeout();
	void ExecuteService(class UPsyNetClientService_X* Service);
	void ExecuteNext();
	class UAsyncTask* CreatePendingService(class UPsyNetClientService_X* Service, int MessageId);
	class UAsyncTask* QueueServiceCall(class UPsyNetClientService_X* Service, class UPsyNetMessage_X* Message);
	void Open();
	void Unsubscribe(const struct FScriptDelegate& Callback);
	void Subscribe(class UClass* ServiceClass, const struct FScriptDelegate& Callback);
	void Init(const struct FString& InChannelName);
	void EventClosed(class UPsyNetChannel_X* Channel);
};

// Class ProjectX.PartySequence_CreateParty_X
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UPartySequence_CreateParty_X : public UObject
{
public:
	class URPC_PartyCreate_X*                          PendingRPC;                                                // 0x0060(0x0008)
	struct FScriptDelegate                             __EventPartyCreated__Delegate;                             // 0x0068(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_JIHL[0xC];                                     // 0x0068(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartySequence_CreateParty_X");
		return ptr;
	}



	void __PartySequence_CreateParty_X__CreateParty_4077A4A5418DFA3EEF9E08B2DCB84F57(class URPC_X* _);
	void HandleCreatePartyComplete();
	void HandlePlatformPartyCreated(bool bWasSuccessful, struct FUniqueLobbyId* PlatformPartyID, const struct FString& Error);
	class UAsyncTask* CreateParty(int LocalPlayerNum, int MaxPlayers, TEnumAsByte<Engine_ELobbyVisibility> Type, TArray<struct FLobbyMetaData> InitialSettings);
	void EventPartyCreated(const struct FUniqueLobbyId& PsyNetPartyId, TArray<struct FPsyNetPartyMember>* Members);
};

// Class ProjectX.PartySequence_JoinParty_X
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UPartySequence_JoinParty_X : public UObject
{
public:
	struct FScriptDelegate                             __EventJoinedParty__Delegate;                              // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_9U9H[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartySequence_JoinParty_X");
		return ptr;
	}



	void HandlePlatformPartyCreated(bool bWasSuccessful, struct FUniqueLobbyId* PlatformPartyID, const struct FString& Error);
	void HandleJoinLobby(bool bWasSuccessful, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* LobbyUID, const struct FString& Error);
	void HandleGetPlatformPartyResponseMessage(class UOnlineMessageComponent_X* Component, class UPartyMessage_GetPlatformPartyResponse_X* Message, struct FUniqueLobbyId* StructInitializer_7DADF77A47D9E81C09BE988A5C6FF8EE);
	void HandleGetPlatformPartyMessage(class UOnlineMessageComponent_X* Component, class UPartyMessage_GetPlatformParty_X* Message, class UPartyMessage_GetPlatformPartyResponse_X** ObjectInitializer_BAE19B574B1752A54214EB8543ACF569);
	void HandlePsyNetLobbyJoinSucceeded(class URPC_PartyJoin_X* RpcPartyJoin, struct FLobbyMetaData* StructInitializer_092E63B84FF2CDAAC5E285B05ED89841, struct FLobbyMetaData* StructInitializer_44E059964F327212BC5B159FAF241D33);
	class UAsyncTask* JoinLobbyWithKey(const struct FString& PsyNetPartyId, const struct FString& JoinKey);
	class UAsyncTask* JoinLobby(struct FUniqueLobbyId* LobbyId);
	void Init();
	void EventJoinedParty(const struct FUniqueLobbyId& PsyNetPartyId, TArray<struct FPsyNetPartyMember>* Members);
};

// Class ProjectX.__EpicFriendsPlugin_X__AddFriendWithCustomCallback_9C117B47460352F05E8D378EEE756EFA
// 0x0060 (FullSize[0x00C0] - InheritedSize[0x0060])
class U__EpicFriendsPlugin_X__AddFriendWithCustomCallback_9C117B47460352F05E8D378EEE756EFA : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_MO4W[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FUniqueNetId                                FriendId;                                                  // 0x0078(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__EpicFriendsPlugin_X__AddFriendWithCustomCallback_9C117B47460352F05E8D378EEE756EFA");
		return ptr;
	}



	void __EpicFriendsPlugin_X__AddFriendWithCustomCallback_9C117B47460352F05E8D378EEE756EFA(class UEOS_ManageFriendsListResponse* R, class UError* E);
};

// Class ProjectX.__EpicFriendsPlugin_X__AcceptFriendRequest_9BFCE9BC4A23E2483F467C93476DB779
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class U__EpicFriendsPlugin_X__AcceptFriendRequest_9BFCE9BC4A23E2483F467C93476DB779 : public UObject
{
public:
	struct FUniqueNetId                                FriendId;                                                  // 0x0060(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__EpicFriendsPlugin_X__AcceptFriendRequest_9BFCE9BC4A23E2483F467C93476DB779");
		return ptr;
	}



	void __EpicFriendsPlugin_X__AcceptFriendRequest_9BFCE9BC4A23E2483F467C93476DB779(class UEOS_ManageFriendsListResponse* R, class UError* E);
};

// Class ProjectX.____OnlineGameParty_X__UpdatePartyInfo_181C0AB3403D6466B9293A950F4CB37A____OnlineGameParty_X__UpdatePartyInfo_181C0AB3403D6466B9293A950F4CB37A_647264B2495B51C4AD3327B4D8FF47DC
// 0x0178 (FullSize[0x01D8] - InheritedSize[0x0060])
class U____OnlineGameParty_X__UpdatePartyInfo_181C0AB3403D6466B9293A950F4CB37A____OnlineGameParty_X__UpdatePartyInfo_181C0AB3403D6466B9293A950F4CB37A_647264B2495B51C4AD3327B4D8FF47DC : public UObject
{
public:
	struct FPartyMember                                PM;                                                        // 0x0060(0x0178) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.____OnlineGameParty_X__UpdatePartyInfo_181C0AB3403D6466B9293A950F4CB37A____OnlineGameParty_X__UpdatePartyInfo_181C0AB3403D6466B9293A950F4CB37A_647264B2495B51C4AD3327B4D8FF47DC");
		return ptr;
	}



	bool ____OnlineGameParty_X__UpdatePartyInfo_181C0AB3403D6466B9293A950F4CB37A____OnlineGameParty_X__UpdatePartyInfo_181C0AB3403D6466B9293A950F4CB37A_647264B2495B51C4AD3327B4D8FF47DC(const struct FLobbyMember& LM);
};

// Class ProjectX.MICParamDispenserComponent_X
// 0x0024 (FullSize[0x00C8] - InheritedSize[0x00A4])
class UMICParamDispenserComponent_X : public UActorComponent_X
{
public:
	unsigned char                                      UnknownData_E7CQ[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointer                                    VfTable_IISetParameter;                                    // 0x00A8(0x0008) (Const, Native, NoExport)
	int                                                MaterialIndex;                                             // 0x00B0(0x0004) (Edit)
	struct FName                                       AttachedComponentName;                                     // 0x00B4(0x0008) (Edit)
	unsigned char                                      UnknownData_VCET[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMeshComponent*                              MeshComp;                                                  // 0x00C0(0x0008) (ExportObject, Component, EditInline, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MICParamDispenserComponent_X");
		return ptr;
	}



	bool __MICParamDispenserComponent_X__Attached_C4543C3C4C3448911B36B1BD9F0327F7(const struct FFXAttachment& A);
	void Attached();
	void SetActorParameter(const struct FName& Key, class AActor* Value);
	void SetLinearColorParameter(const struct FName& Key, const struct FLinearColor& Value);
	void SetVectorParameter(const struct FName& Key, const struct FVector& Value);
	void SetFloatParameter(const struct FName& Key, float Value);
	void SetNameParameter(const struct FName& Key, const struct FName& Value);
};

// Class ProjectX.ShakeComponent_X
// 0x0114 (FullSize[0x01B8] - InheritedSize[0x00A4])
class UShakeComponent_X : public UActorComponent_X
{
public:
	unsigned char                                      UnknownData_IXNA[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InnerRadius;                                               // 0x00A8(0x0004) (Edit)
	float                                              OuterRadius;                                               // 0x00AC(0x0004) (Edit)
	float                                              Falloff;                                                   // 0x00B0(0x0004) (Edit)
	unsigned long                                      bAutoPlay : 1;                                             // 0x00B4(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAutoDetach : 1;                                           // 0x00B4(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bOnlyAffectPlayersWithPawns : 1;                           // 0x00B4(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAttenuate : 1;                                            // 0x00B4(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bPlaying : 1;                                              // 0x00B4(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned long                                      bStopping : 1;                                             // 0x00B4(0x0001) BIT_FIELD (Transient, PrivateWrite)
	TEnumAsByte<ProjectX_EShakeReceiver>               Receiver;                                                  // 0x00B8(0x0001) (Edit)
	unsigned char                                      UnknownData_3GIY[0x3];                                     // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RadiusScale;                                               // 0x00BC(0x0004) (Edit)
	float                                              BlendInTime;                                               // 0x00C0(0x0004) (Edit)
	float                                              BlendOutTime;                                              // 0x00C4(0x0004) (Edit)
	class UCameraShake*                                ShakeParams;                                               // 0x00C8(0x0008) (Edit)
	struct FRawDistributionFloat                       AmplitudeScale;                                            // 0x00D0(0x0028) (Edit, Component, NeedCtorLink)
	struct FRawDistributionFloat                       FrequencyScale;                                            // 0x00F8(0x0028) (Edit, Component, NeedCtorLink)
	struct FRawDistributionFloat                       DurationScale;                                             // 0x0120(0x0028) (Edit, Component, NeedCtorLink)
	float                                              CurrentAmplitudeScale;                                     // 0x0148(0x0004) (Const, Transient)
	float                                              CurrentFrequencyScale;                                     // 0x014C(0x0004) (Const, Transient)
	class UForceFeedbackWaveform*                      ForceFeedbackWaveform;                                     // 0x0150(0x0008) (Edit)
	float                                              ForceFeedbackScale;                                        // 0x0158(0x0004) (Edit)
	float                                              ForceFeedbackBalance;                                      // 0x015C(0x0004) (Edit)
	TArray<struct FParticleSysParam>                   InstanceParameters;                                        // 0x0160(0x0010) (Edit, NeedCtorLink, EditInline)
	float                                              PlayTime;                                                  // 0x0170(0x0004) (Transient, PrivateWrite)
	float                                              StopTime;                                                  // 0x0174(0x0004) (Transient, PrivateWrite)
	struct FVector                                     ShakeLocTimeOffset;                                        // 0x0178(0x000C) (Transient, PrivateWrite)
	struct FVector                                     ShakeRotTimeOffset;                                        // 0x0184(0x000C) (Transient, PrivateWrite)
	float                                              ShakeFOVTimeOffset;                                        // 0x0190(0x0004) (Transient, PrivateWrite)
	float                                              CameraShakeDuration;                                       // 0x0194(0x0004) (Transient, PrivateWrite)
	float                                              ForceFeedbackDuration;                                     // 0x0198(0x0004) (Transient, PrivateWrite)
	float                                              ForceFeedbackSamplesTime;                                  // 0x019C(0x0004) (Transient, PrivateWrite)
	class AActor*                                      PrevOwner;                                                 // 0x01A0(0x0008) (Transient, PrivateWrite)
	TArray<struct FShakeReceiver>                      Receivers;                                                 // 0x01A8(0x0010) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ShakeComponent_X");
		return ptr;
	}



	bool GetColorParameter(const struct FName& InName, struct FColor* OutColor);
	bool GetVectorParameter(const struct FName& InName, struct FVector* OutVector);
	bool GetFloatParameter(const struct FName& InName, float* OutFloat);
	void SetColorParameter(const struct FName& ParameterName, const struct FColor& Param);
	void SetVectorRandParameter(const struct FName& ParameterName, struct FVector* Param, struct FVector* ParamLow);
	void SetVectorParameter(const struct FName& ParameterName, const struct FVector& Param);
	void SetFloatRandParameter(const struct FName& ParameterName, float Param, float ParamLow);
	void SetFloatParameter(const struct FName& ParameterName, float Param);
	bool IsPlaying();
	void StopShake(float InBlendOutTime);
	void InitParams();
	void PlayShake();
	void Detached();
	void Attached();
};

// Class ProjectX.AnimateParametersComponent_X
// 0x003F (FullSize[0x00DC] - InheritedSize[0x009D])
class UAnimateParametersComponent_X : public UActorComponent
{
public:
	unsigned char                                      UnknownData_EME9[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAnimatedFloatParam>                 FloatParameters;                                           // 0x00A0(0x0010) (Edit, NeedCtorLink)
	TArray<struct FAnimatedVectorParam>                VectorParameters;                                          // 0x00B0(0x0010) (Edit, NeedCtorLink)
	TArray<struct FAnimatedLinearColorParam>           ColorParameters;                                           // 0x00C0(0x0010) (Edit, NeedCtorLink)
	unsigned long                                      bResetMaterialsOnComplete : 1;                             // 0x00D0(0x0001) BIT_FIELD (Edit)
	float                                              AnimTime;                                                  // 0x00D4(0x0004) (Transient)
	float                                              EndTime;                                                   // 0x00D8(0x0004) (Const, Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AnimateParametersComponent_X");
		return ptr;
	}



};

// Class ProjectX.ArchetypePrefab_X
// 0x0020 (FullSize[0x0288] - InheritedSize[0x0268])
class AArchetypePrefab_X : public AActor
{
public:
	TArray<class AActor*>                              PrefabArchetypes;                                          // 0x0268(0x0010) (Edit, NeedCtorLink)
	TArray<class AActor*>                              ArchetypeInstances;                                        // 0x0278(0x0010) (Const, Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ArchetypePrefab_X");
		return ptr;
	}



};

// Class ProjectX.ArchetypeSpawnPoint_X
// 0x0070 (FullSize[0x02D8] - InheritedSize[0x0268])
class AArchetypeSpawnPoint_X : public AActor
{
public:
	struct FPointer                                    VfTable_IInterface_NavMeshPathObject;                      // 0x0268(0x0008) (Const, Native, NoExport)
	struct FString                                     ArchetypePath;                                             // 0x0270(0x0010) (Edit, Const, NeedCtorLink)
	unsigned long                                      bSeedNavMesh : 1;                                          // 0x0280(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bSpawnOnLevelStart : 1;                                    // 0x0280(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bOnlyAllowOneInstance : 1;                                 // 0x0280(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData_M6IZ[0x4];                                     // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      ActorArchetype;                                            // 0x0288(0x0008) (Edit)
	class USpriteComponent*                            PlacementSprite;                                           // 0x0290(0x0008) (ExportObject, Component, EditInline)
	class USkeletalMeshComponent*                      ArchetypeSkeletalMesh;                                     // 0x0298(0x0008) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        ArchetypeStaticMesh;                                       // 0x02A0(0x0008) (ExportObject, Component, EditInline)
	TArray<class AActor*>                              SpawnedActors;                                             // 0x02A8(0x0010) (Transient, NeedCtorLink)
	class AActor*                                      SpawnedActor;                                              // 0x02B8(0x0008) (Transient)
	struct FScriptDelegate                             __EventSpawned__Delegate;                                  // 0x02C0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_N0FV[0xC];                                     // 0x02C0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ArchetypeSpawnPoint_X");
		return ptr;
	}



	void OnSpawned(class AActor* Spawned);
	class AActor* DoSpawn();
	void OnToggle(class USeqAct_Toggle* Action);
	void OnDestroy(class USeqAct_Destroy* Action);
	void PostBeginPlay();
	void EventSpawned(class AArchetypeSpawnPoint_X* SpawnPoint, class AActor* Spawned);
};

// Class ProjectX.Aws4Signature_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UAws4Signature_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Aws4Signature_X");
		return ptr;
	}



	void SignRequest(class UHttpRequestInterface* HTTPRequest);
};

// Class ProjectX.ReservationBeacon_X
// 0x0068 (FullSize[0x00D8] - InheritedSize[0x0070])
class UReservationBeacon_X : public UComponent
{
public:
	TArray<struct FBeaconMessageHandler>               MessageHandlers;                                           // 0x0070(0x0010) (Const, NeedCtorLink)
	class UTcpMessageBeacon*                           TcpBeacon;                                                 // 0x0080(0x0008) (ExportObject, Component, EditInline)
	class UPsyNetBeacon_X*                             PsyNetBeacon;                                              // 0x0088(0x0008) (ExportObject, Component, EditInline)
	struct FScriptDelegate                             __MessageReceivedDelegate__Delegate;                       // 0x0090(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_O7N2[0xC];                                     // 0x0090(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventConnected__Delegate;                                // 0x00A8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_8276[0xC];                                     // 0x00A8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDisconnected__Delegate;                             // 0x00C0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_W71C[0xC];                                     // 0x00C0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationBeacon_X");
		return ptr;
	}



	void __ReservationBeacon_X__Construct_B82198A5410540A0710FE09A74DC1F73();
	void __ReservationBeacon_X__Construct_6F226B074C691A7F12D5EF8DFB27E617(class UPsyNetBeaconConnection_X* Connection, class UObject* Message);
	void __ReservationBeacon_X__Construct_E0AB0BC24E3249EED86A9B8C05C82845(class UPsyNetBeacon_X* _, class UPsyNetBeaconConnection_X* Connection);
	void __ReservationBeacon_X__Construct_9CB9982C482CC0BFA5D66D87B51987DE(class UPsyNetBeacon_X* _, class UPsyNetBeaconConnection_X* Connection);
	void __ReservationBeacon_X__Construct_EE3646364C1DAA98A6381AAAB6F794C6(class UTcpConnection* Connection, class UObject* Message);
	void __ReservationBeacon_X__Construct_CCA3014E462703CC6DE842823968EB47(class UTcpBeacon* _, class UTcpConnection* Connection);
	void __ReservationBeacon_X__Construct_5E58B0DA4B66A265F9F6049EFED0F000(class UTcpBeacon* _, class UTcpConnection* Connection);
	void ServerReserveConnection(const struct FString& ReservationID, const struct FUniqueNetId& PlayerID, float ConnectionTimeoutSeconds);
	void BeginPsyNetConnect(const struct FString& ReservationID, const struct FString& DSRToken);
	void BeginTcpConnect(const struct FString& BeaconURL);
	void BeginConnect(const struct FServerReservationData& Reservation);
	void Close();
	void CloseConnection();
	void BroadcastMessage(class UObject* Message);
	void SendMessage(class UObject* Message);
	class UBeaconMessage_X* CreateMessage(class UClass* MessageClass);
	void ReceiveMessage(class UObject* Message);
	void RemoveMessageHandler(const struct FScriptDelegate& Callback);
	void AddMessageHandler(class UClass* MessageClass, const struct FScriptDelegate& Callback);
	void BeginListen();
	void Construct();
	void EventDisconnected(class UReservationBeacon_X* Beacon);
	void EventConnected(class UReservationBeacon_X* Beacon);
	void MessageReceivedDelegate(class UObject* Message);
};

// Class ProjectX.BeaconMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UBeaconMessage_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.BeaconMessage_X");
		return ptr;
	}



	class UBeaconMessage_X* Broadcast();
	class UBeaconMessage_X* Send();
};

// Class ProjectX.BugReport_X
// 0x0154 (FullSize[0x01B4] - InheritedSize[0x0060])
class UBugReport_X : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0060(0x0008) (Const, Native, NoExport)
	struct FString                                     BugReportClassName;                                        // 0x0068(0x0010) (Config, GlobalConfig, NeedCtorLink)
	struct FString                                     URL;                                                       // 0x0078(0x0010) (Edit, NeedCtorLink)
	int                                                MaxFileSizeMegabytes;                                      // 0x0088(0x0004) (Edit)
	unsigned char                                      UnknownData_3RPP[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BugID;                                                     // 0x0090(0x0010) (Const, Transient, NeedCtorLink)
	struct FBugReportSubmitterData                     SubmitterData;                                             // 0x00A0(0x0030) (Const, Transient, NeedCtorLink)
	struct FBugReportSystemData                        SystemData;                                                // 0x00D0(0x0038) (Const, Transient, NeedCtorLink)
	struct FBugReportPathData                          PathData;                                                  // 0x0108(0x0040) (Const, Transient, NeedCtorLink)
	struct FBugReportDescriptionData                   DescriptionData;                                           // 0x0148(0x0050) (Const, Transient, NeedCtorLink)
	struct FPointer                                    LogFile;                                                   // 0x0198(0x0008) (Const, Native, Transient)
	TArray<struct FFileUploadData>                     FileUploads;                                               // 0x01A0(0x0010) (Const, Transient, NeedCtorLink)
	unsigned long                                      bUploadNextFile : 1;                                       // 0x01B0(0x0001) BIT_FIELD (Const, Transient)
	unsigned long                                      bSubmitted : 1;                                            // 0x01B0(0x0001) BIT_FIELD (Const, Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.BugReport_X");
		return ptr;
	}



	void HandleHttpRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, bool bDidSucceed);
	void LogText(const struct FString& Str);
	void PDIReport();
	void CancelBugReport();
	void SubmitBugReport(const struct FString& Title, const struct FString& Description, const struct FString& Email);
	void StartBugReport();
	void StaticSubmitBugReport(const struct FString& Title);
	class UBugReport_X* CreateBugReport();
};

// Class ProjectX.CachedWebData_X
// 0x005C (FullSize[0x00BC] - InheritedSize[0x0060])
class UCachedWebData_X : public UObject
{
public:
	TArray<unsigned char>                              Data;                                                      // 0x0060(0x0010) (Const, NeedCtorLink)
	int                                                DataCRC;                                                   // 0x0070(0x0004) (Const)
	unsigned char                                      UnknownData_94VM[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ETag;                                                      // 0x0078(0x0010) (Const, NeedCtorLink)
	struct FString                                     ContentType;                                               // 0x0088(0x0010) (Const, NeedCtorLink)
	struct FString                                     Signature;                                                 // 0x0098(0x0010) (Const, NeedCtorLink)
	class UError*                                      LoadError;                                                 // 0x00A8(0x0008) (Transient)
	class UError*                                      DownloadError;                                             // 0x00B0(0x0008) (Transient)
	unsigned long                                      bNewData : 1;                                              // 0x00B8(0x0001) BIT_FIELD (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CachedWebData_X");
		return ptr;
	}



	struct FString GetText();
	void SetData(TArray<unsigned char> NewData, const struct FString& NewETag, const struct FString& NewContentType, const struct FString& NewSignature);
};

// Class ProjectX.Camera_X
// 0x0110 (FullSize[0x06C8] - InheritedSize[0x05B8])
class ACamera_X : public ACamera
{
public:
	TArray<class UCameraState_X*>                      States;                                                    // 0x05B8(0x0010) (Edit, NeedCtorLink)
	struct FRotator                                    PCDeltaRotation;                                           // 0x05C8(0x000C) (Transient)
	struct FRotator                                    OldControllerRotation;                                     // 0x05D4(0x000C) (Transient)
	struct FVector                                     PCDeltaLocation;                                           // 0x05E0(0x000C) (Transient)
	struct FVector                                     OldControllerLocation;                                     // 0x05EC(0x000C) (Transient)
	struct FCameraOrientation                          PreProcessPOV;                                             // 0x05F8(0x002C) (Transient)
	struct FCameraOrientation                          PostProcessPOV;                                            // 0x0624(0x002C) (Transient)
	class UCameraStateBlender_X*                       Blender;                                                   // 0x0650(0x0008) (ExportObject, Component, EditInline)
	struct FVector                                     ShakeLocationOffset;                                       // 0x0658(0x000C) (Const, Transient)
	struct FRotator                                    ShakeRotationOffset;                                       // 0x0664(0x000C) (Const, Transient)
	float                                              ShakeFOVOffset;                                            // 0x0670(0x0004) (Const, Transient)
	struct FColor                                      StartFadeColor;                                            // 0x0674(0x0004) (Transient)
	struct FColor                                      EndFadeColor;                                              // 0x0678(0x0004) (Transient)
	struct FVector                                     ClipOffset;                                                // 0x067C(0x000C) (Transient)
	TArray<struct FLocationCameraKnock>                LocationKnocks;                                            // 0x0688(0x0010) (Transient, NeedCtorLink)
	TArray<struct FRotationCameraKnock>                RotationKnocks;                                            // 0x0698(0x0010) (Transient, NeedCtorLink)
	unsigned long                                      bDisableCameraShake : 1;                                   // 0x06A8(0x0001) BIT_FIELD (Transient)
	unsigned long                                      bSnapNextTransition : 1;                                   // 0x06A8(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownData_N5UD[0x4];                                     // 0x06AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             __EventCameraStateChanged__Delegate;                       // 0x06B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_MUWR[0xC];                                     // 0x06AC(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Camera_X");
		return ptr;
	}



	void __Camera_X__Destroyed_EE24F77E46538B75EA15938858D62907(class UCameraState_X* S);
	void Destroyed();
	void OnViewTargetChanged();
	void SetViewTarget(class AActor* NewViewTarget, const struct FViewTargetTransitionParams& TransitionParams);
	bool IsTransitioning();
	void HandleBlenderStateChanged(class UCameraStateBlender_X* CameraBlender);
	void SnapTransition();
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void ApplyCameraModifiers(float DeltaTime, struct FTPOV* OutPOV);
	bool CameraTrace(const struct FVector& End, const struct FVector& Start, const struct FVector& Extent, struct FVector* HitLoc, class AActor** HitActor);
	class UCameraState_X* InstanceCameraState(class UCameraState_X* Archetype);
	void ModifyPostProcessSettings(struct FPostProcessSettings* PP);
	void ProcessViewRotation(float DeltaTime, struct FRotator* OutViewRotation, struct FRotator* OutDeltaRot);
	void PostProcessCameraState(float DeltaTime, struct FCameraOrientation* OutPOV);
	void ProcessCameraState(float DeltaTime, struct FCameraOrientation* OutPOV);
	void CheckViewTarget(struct FTViewTarget* VT);
	void CopyFade(class ACamera_X* Other);
	void SetCameraFade(bool bNewEnableFading, const struct FColor& NewFadeColor, const struct FVector2D& NewFadeAlpha, float NewFadeTime, bool bNewFadeAudio);
	void UpdateFade(float DeltaTime);
	void UpdateCamera(float DeltaTime);
	void ClampPOV(struct FCameraOrientation* OutPOV);
	struct FRotator RemoveRoll(const struct FRotator& InRot);
	class UCameraState_X* GetCameraState();
	class UCameraState_X* SelectCameraState();
	void UpdateCameraState();
	void UpdateCameraKnocks(float DeltaTime, struct FCameraOrientation* OutPOV);
	void AddRotationKnock(const struct FRotationCameraKnock& Knock, float Scale);
	void AddLocationKnock(const struct FLocationCameraKnock& Knock, float Scale, const struct FRotator& Transform);
	void InstanceCameraStates();
	void InitializeFor(class APlayerController* PC);
	void ModifyCameraShakeScale(class UCameraShake* Shake, float NewScale);
	void OnLoadingMovieClosesd();
	void PostBeginPlay();
	struct FVector InterpVector(const struct FVector& OldValue, const struct FVector& NewValue, const struct FVectorInterpRate& Rate, const struct FRotator& Orientation, float DeltaTime);
	void FinalizeOrientation(struct FCameraOrientation* OutPOV);
	struct FCameraOrientation BlendCameraOrientations(struct FCameraOrientation* A, struct FCameraOrientation* B, float Alpha);
	void EventCameraStateChanged(class ACamera_X* Camera, class UCameraState_X* CameraState);
};

// Class ProjectX.CameraAttachmentComponent_X
// 0x0017 (FullSize[0x00B4] - InheritedSize[0x009D])
class UCameraAttachmentComponent_X : public UActorComponent
{
public:
	unsigned char                                      UnknownData_8K37[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UActorComponent*>                     Attachments;                                               // 0x00A0(0x0010) (Edit, ExportObject, Component, NeedCtorLink, EditInline)
	unsigned long                                      bDirtyTransform : 1;                                       // 0x00B0(0x0001) BIT_FIELD (Const, Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CameraAttachmentComponent_X");
		return ptr;
	}



};

// Class ProjectX.CanvasTexture_X
// 0x0018 (FullSize[0x01A8] - InheritedSize[0x0190])
class UCanvasTexture_X : public UTextureRenderTarget2D
{
public:
	struct FScriptDelegate                             __Draw__Delegate;                                          // 0x0190(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_89KB[0xC];                                     // 0x0190(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CanvasTexture_X");
		return ptr;
	}



	void Draw(class UCanvas* C);
};

// Class ProjectX.CanvasTextureComponent_X
// 0x0023 (FullSize[0x00C0] - InheritedSize[0x009D])
class UCanvasTextureComponent_X : public UActorComponent
{
public:
	unsigned char                                      UnknownData_JOQC[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMeshComponent*                              Mesh;                                                      // 0x00A0(0x0008) (Edit, Const, ExportObject, Component, EditInline)
	int                                                MaterialIndex;                                             // 0x00A8(0x0004) (Edit, Const)
	struct FName                                       MaterialParamName;                                         // 0x00AC(0x0008) (Edit, Const)
	unsigned char                                      UnknownData_QTJQ[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCanvasTexture_X*                            Texture;                                                   // 0x00B8(0x0008) (Edit, Const, ExportObject, NeedCtorLink, EditInline)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CanvasTextureComponent_X");
		return ptr;
	}



	void OnDraw(class UCanvas* C);
};

// Class ProjectX.PlayerController_X
// 0x00A8 (FullSize[0x0860] - InheritedSize[0x07B8])
class APlayerController_X : public APlayerController
{
public:
	class ACamera*                                     CameraArchetype;                                           // 0x07B8(0x0008) (Edit)
	class AHUD*                                        HUDArchetype;                                              // 0x07C0(0x0008) (Edit)
	class APawn*                                       OldPawnReference;                                          // 0x07C8(0x0008) (Transient)
	class AActor*                                      LockedDebugActor;                                          // 0x07D0(0x0008) (Transient)
	unsigned long                                      bPausedForExternalUI : 1;                                  // 0x07D8(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownData_4WR6[0x4];                                     // 0x07DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNetConnection*                              NetConnection;                                             // 0x07E0(0x0008) (Transient, PrivateWrite)
	struct FScriptDelegate                             __EventReceivedPRI__Delegate;                              // 0x07E8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_XMU5[0xC];                                     // 0x07E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPawnChange__Delegate;                               // 0x0800(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_U3DE[0xC];                                     // 0x0800(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventReceivedPlayer__Delegate;                           // 0x0818(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_21Q2[0xC];                                     // 0x0818(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDestroyed__Delegate;                                // 0x0830(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_H8VW[0xC];                                     // 0x0830(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlayerCameraChange__Delegate;                       // 0x0848(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_0QJA[0xC];                                     // 0x0848(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PlayerController_X");
		return ptr;
	}



	void ToggleDebugCamera();
	void DebugCrosshair();
	void DebugKill();
	void DebugKillAllExcept();
	bool GetAutoAimTarget(class AActor** HitActor, struct FVector* HitLoc);
	void __PlayerController_X__ReceivedPlayer_222DEF3142A98791DEB5E3A80A0FAAE6(class UObject* _);
	void ClientSetSeasonReward(const struct FPlayerSeasonRewardProgress& Reward);
	void ServerUpdateCustomMatchSettings(const struct U_Types_X_FCustomMatchSettings& Settings);
	void ServerSetParty(const struct FUniqueNetId& MemberId, const struct FUniqueNetId& NewPartyID);
	void DisconnectSplitScreenPlayer(class UPlayer* P);
	void ServerDestroy();
	void KickPlayerForReason(const struct FString& Reason, const struct FString& Title);
	void ClientNetLag(float PktLag, float PktVariance, float PktLoss, float PktDup, float PktSpike);
	void ServerNetLag(float PktLag, float PktVariance, float PktLoss, float PktDup, float PktSpike);
	void Pause();
	void RemoveOptionFromLastURL(const struct FString& OptName);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void ClearOnlineDelegates();
	void RegisterOnlineDelegates();
	void ClientPlayForceFeedbackWaveform(class UForceFeedbackWaveform* FFWaveform, class AActor* FFWaveformInstigator);
	void ClientCommand(const struct FString& Command);
	void ServerCommand(const struct FString& Command);
	void UnPossess();
	void Possess(class APawn* aPawn);
	void OnPawnChange(class APawn* OldPawn, class APawn* NewPawn);
	void PawnReferenceUpdated();
	void ClientRestart(class APawn* NewPawn);
	void GivePawn(class APawn* NewPawn);
	void InitInputSystem();
	class ACamera* GetCameraArchetype();
	void SpawnPlayerCamera();
	void SetPlayerCamera(class ACamera* NewCamera);
	void AddCheats(bool bForce);
	class UOnlineGameAccount_X* GetOnlineAccount();
	class UOnlinePlayer_X* GetOnlinePlayer();
	void OnReceivedPlayerAndPRI();
	void InitPlayerReplicationInfo();
	void Destroyed();
	void OnExternalUIChanged(bool bIsOpening);
	void SetPaused(bool bPaused);
	void ReceivedPlayer();
	class UOnlineGame_X* GetOnlineGame();
	void GetOnlineGameHost();
	class UOnlineGameLanServer_X* GetOnlineGameLanServer();
	class UOnlineGameDedicatedServer_X* GetOnlineGameDedicatedServer();
	void SpawnDefaultHUD();
	void SetPRI(class APlayerReplicationInfo* PRI);
	void ReplicatedEvent(const struct FName& VarName);
	void EventPlayerCameraChange(class APlayerController_X* PC);
	void EventDestroyed(class APlayerController_X* PC);
	void EventReceivedPlayer(class APlayerController_X* PC);
	void EventPawnChange(class APlayerController_X* PC, class APawn* OldPawn, class APawn* NewPawn);
	void EventReceivedPRI(class APlayerController_X* PC);
};

// Class ProjectX.CheatManager_X
// 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
class UCheatManager_X : public UCheatManager
{
public:
	struct FScriptDelegate                             __EventDelegateTest__Delegate;                             // 0x0080(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_NRVQ[0xC];                                     // 0x0080(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CheatManager_X");
		return ptr;
	}



	void HandleImageDownloaded(const struct FOnlineImageDownload& Image);
	void DownloadImage(const struct FString& URL, TArray<struct FString>* ArrayInitializer_BD2F815E489B577D91862A87FD11A2B2);
	void RandomSleep(float MinDelay, float MaxDelay, float MinSleep, float MaxSleep);
	void Sleep(float Seconds);
	void LoadKismetLevel(const struct FName& LeveFileName);
	void DrawBulletContacts(float LifeTime);
	void PrintReproPhysics(const struct FString& Command, class AActor* A);
	void ReproPhysics(class AActor* A, float LX, float LY, float LZ, float RX, float RY, float RZ, float RW, float VX, float VY, float VZ, float AX, float AY, float AZ);
	void DisableCCD();
	void SimulateInputKey(const struct FName& KeyName);
	void SetNetServerMaxTickRate(float Rate);
	void ScreenShotDir(const struct FString& Directory);
	void ListVisiblePrimitives();
	void HideVisiblePrimitives(const struct FString& NameMatch, const struct FString& NameIgnore);
	void ToggleReplicateVoiceToSelf();
	void ToggleReplicateVoiceToSender();
	void ShutdownCheatManager();
	void InitCheatManager();
	void EventDelegateTest();
};

// Class ProjectX.CheatObject_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UCheatObject_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CheatObject_X");
		return ptr;
	}



};

// Class ProjectX.ColorPalette_X
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UColorPalette_X : public UObject
{
public:
	int                                                DefaultId;                                                 // 0x0060(0x0004) (Edit)
	int                                                HueCount;                                                  // 0x0064(0x0004) (Edit, Const, EditConst)
	int                                                ValueCount;                                                // 0x0068(0x0004) (Edit, Const, EditConst)
	unsigned char                                      UnknownData_E0XU[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FLinearColor>                        Colors;                                                    // 0x0070(0x0010) (Edit, Const, EditConst, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ColorPalette_X");
		return ptr;
	}



	int IntColorToID(int ColorInt);
	int IdToColorInt(int ColorID);
	struct FColorPosition GetColorPosition(int ColorID);
	struct FLinearColor GetValidColor(const struct FLinearColor& InColor);
	int GetClosestID(const struct FLinearColor& InColor);
	struct FLinearColor GetColor(int ColorID);
};

// Class ProjectX.Compression_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UCompression_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Compression_X");
		return ptr;
	}



	bool Uncompress(TArray<unsigned char>* Compressed, TArray<unsigned char>* Uncompressed);
	bool Compress(TArray<unsigned char>* Uncompressed, TArray<unsigned char>* Compressed);
};

// Class ProjectX.ControlPreset_X
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class UControlPreset_X : public UObject
{
public:
	TArray<struct FPlayerBinding>                      PCBindings;                                                // 0x0060(0x0010) (Config, NeedCtorLink, PrivateWrite)
	TArray<struct FPlayerBinding>                      GamepadBindings;                                           // 0x0070(0x0010) (Config, NeedCtorLink, PrivateWrite)
	unsigned long                                      bRemovedPCOverrides : 1;                                   // 0x0080(0x0001) BIT_FIELD
	unsigned long                                      bRemovedGamepadOverrides : 1;                              // 0x0080(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_GZ0Z[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPlayerBinding>                      SteamInputBindings;                                        // 0x0088(0x0010) (Config, NeedCtorLink, PrivateWrite)
	struct FName                                       CustomPresetName;                                          // 0x0098(0x0008) (Const)
	struct FName                                       DefaultPresetName;                                         // 0x00A0(0x0008) (Const)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ControlPreset_X");
		return ptr;
	}



	TArray<struct FPlayerBinding> GetGamepadBindings();
	TArray<struct FPlayerBinding> GetPCBindings();
};

// Class ProjectX.CrashReport_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UCrashReport_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CrashReport_X");
		return ptr;
	}



	void HandleHttpRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bSuccess);
};

// Class ProjectX.CRC_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UCRC_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CRC_X");
		return ptr;
	}



	int CrcBytes(TArray<unsigned char>* Bytes);
	int CrcString(const struct FString& Text);
};

// Class ProjectX.CycleLog_X
// 0x001C (FullSize[0x008C] - InheritedSize[0x0070])
class UCycleLog_X : public UComponent
{
public:
	int                                                MaxLogs;                                                   // 0x0070(0x0004) (Edit)
	unsigned char                                      UnknownData_TXXK[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             Logs;                                                      // 0x0078(0x0010) (Transient, NeedCtorLink)
	int                                                LogIndex;                                                  // 0x0088(0x0004) (Const, Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CycleLog_X");
		return ptr;
	}



	void AllLogs(struct FString* S);
};

// Class ProjectX.DistributionFloatShakeParameter_X
// 0x0007 (FullSize[0x00A8] - InheritedSize[0x00A1])
class UDistributionFloatShakeParameter_X : public UDistributionFloatParameterBase
{
public:
	unsigned char                                      UnknownData_KNMD[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DistributionFloatShakeParameter_X");
		return ptr;
	}



};

// Class ProjectX.EffectsMap_X
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UEffectsMap_X : public UObject
{
public:
	TArray<struct FEffectsMapping>                     Effects;                                                   // 0x0060(0x0010) (Edit, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EffectsMap_X");
		return ptr;
	}



	struct FEffectsMapping GetEffects(class UPhysicalMaterial* PhysMat);
};

// Class ProjectX.EngineShare_X
// 0x0120 (FullSize[0x0180] - InheritedSize[0x0060])
class UEngineShare_X : public UEngineShare
{
public:
	class UOnlineGame_Base_X*                          OnlineGame;                                                // 0x0060(0x0008) (Transient, PrivateWrite)
	class ULocalCache_X*                               LocalCache;                                                // 0x0068(0x0008) (Transient, PrivateWrite)
	struct FString                                     ArchetypeString_OnlineGame;                                // 0x0070(0x0010) (Edit, Const, NeedCtorLink)
	struct FString                                     ArchetypeString_OnlineGameDedicatedServer;                 // 0x0080(0x0010) (Edit, Const, NeedCtorLink)
	struct FString                                     ArchetypeString_OnlineGameLanServer;                       // 0x0090(0x0010) (Edit, Const, NeedCtorLink)
	unsigned long                                      bDisableSaving : 1;                                        // 0x00A0(0x0001) BIT_FIELD (Transient)
	unsigned long                                      bIsShowingLoadmapMovie : 1;                                // 0x00A0(0x0001) BIT_FIELD (Const, Transient)
	unsigned long                                      bUndocked : 1;                                             // 0x00A0(0x0001) BIT_FIELD (Const)
	unsigned char                                      UnknownData_XAWF[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             __EventPreExit__Delegate;                                  // 0x00A8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_AALQ[0xC];                                     // 0x00A4(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventLoadingMovieClosed__Delegate;                       // 0x00C0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_9NXS[0xC];                                     // 0x00C0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPreScriptsReloaded__Delegate;                       // 0x00D8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_CPP5[0xC];                                     // 0x00D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPostScriptsReloaded__Delegate;                      // 0x00F0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_VZ8P[0xC];                                     // 0x00F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventOnlineGameInitialized__Delegate;                    // 0x0108(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_9H9L[0xC];                                     // 0x0108(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPreLoadMap__Delegate;                               // 0x0120(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_LVID[0xC];                                     // 0x0120(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPostLoadMap__Delegate;                              // 0x0138(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_CDGK[0xC];                                     // 0x0138(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventCrashed__Delegate;                                  // 0x0150(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_59WJ[0xC];                                     // 0x0150(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventUndockedChanged__Delegate;                          // 0x0168(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_1HCG[0xC];                                     // 0x0168(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EngineShare_X");
		return ptr;
	}



	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void PreExit();
	bool IsRequestingExit();
	struct FString GetUserAgentHeader();
	struct FString GetRegionString();
	struct FString GetPlatformString();
	bool ConfigGetString(const struct FString& SectionName, const struct FString& KeyName, struct FString* OutValue);
	bool ParseCommandlineString(const struct FString& Param, struct FString* OutValue, bool bShouldStopOnComma);
	bool ParseCommandlineQWORD(const struct FString& Param);
	bool ParseCommandlineFloat(const struct FString& Param, float* OutValue);
	bool ParseCommandlineInt(const struct FString& Param, int* OutValue);
	bool ParseCommandlineParam(const struct FString& Param);
	void InitOnlineGame(class UOnlineSubsystem* NewOnlineSubsystem);
	bool IsUsingNullRHI();
	bool IsAuthoritative();
	bool IsNetServer();
	bool IsNetClient();
	bool IsHeadlessGameClient();
	bool IsGameClient();
	bool IsLanServer();
	bool IsDedicatedServer();
	void EventUndockedChanged();
	void EventCrashed();
	void EventPostLoadMap();
	void EventPreLoadMap(const struct FString& MapName);
	void EventOnlineGameInitialized();
	void EventPostScriptsReloaded();
	void EventPreScriptsReloaded();
	void EventLoadingMovieClosed();
	void EventPreExit();
};

// Class ProjectX.EOS_ErrorResponse
// 0x0038 (FullSize[0x0098] - InheritedSize[0x0060])
class UEOS_ErrorResponse : public UObject
{
public:
	struct FString                                     ErrorMessage;                                              // 0x0060(0x0010) (NeedCtorLink)
	int                                                NumericErrorCode;                                          // 0x0070(0x0004)
	unsigned char                                      UnknownData_KMYP[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ErrorCode;                                                 // 0x0078(0x0010) (NeedCtorLink)
	TArray<struct FString>                             MessageVars;                                               // 0x0088(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EOS_ErrorResponse");
		return ptr;
	}



};

// Class ProjectX.EOS_GetAccountsResponse
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UEOS_GetAccountsResponse : public UObject
{
public:
	TArray<struct FEOSAccountInfo>                     Accounts;                                                  // 0x0060(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EOS_GetAccountsResponse");
		return ptr;
	}



};

// Class ProjectX.EpochTimerTick_X
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UEpochTimerTick_X : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0060(0x0008) (Const, Native, NoExport)
	TArray<struct FEpochTimer>                         Timers;                                                    // 0x0068(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EpochTimerTick_X");
		return ptr;
	}



};

// Class ProjectX.Errors_X
// 0x0300 (FullSize[0x0380] - InheritedSize[0x0080])
class UErrors_X : public UErrorList
{
public:
	class UErrorType*                                  UnknownError;                                              // 0x0080(0x0008) (Const)
	class UPsyNetErrorType_X*                          RequestError;                                              // 0x0088(0x0008) (Const)
	class UErrorType*                                  HTTPError;                                                 // 0x0090(0x0008) (Const)
	class UErrorType*                                  SessionNotActive;                                          // 0x0098(0x0008) (Const)
	class UErrorType*                                  OSCS_NotConnected;                                         // 0x00A0(0x0008) (Const)
	class UErrorType*                                  OSCS_Connected;                                            // 0x00A8(0x0008) (Const)
	class UErrorType*                                  OSCS_ConnectionDropped;                                    // 0x00B0(0x0008) (Const)
	class UErrorType*                                  OSCS_NoNetworkConnection;                                  // 0x00B8(0x0008) (Const)
	class UErrorType*                                  OSCS_ServiceUnavailable;                                   // 0x00C0(0x0008) (Const)
	class UErrorType*                                  OSCS_UpdateRequired;                                       // 0x00C8(0x0008) (Const)
	class UErrorType*                                  OSCS_ServersTooBusy;                                       // 0x00D0(0x0008) (Const)
	class UErrorType*                                  OSCS_DuplicateLoginDetected;                               // 0x00D8(0x0008) (Const)
	class UErrorType*                                  OSCS_InvalidUser;                                          // 0x00E0(0x0008) (Const)
	class UErrorType*                                  OSCS_InvalidResponse;                                      // 0x00E8(0x0008) (Const)
	class UErrorType*                                  OSCS_EpicAccountRequired;                                  // 0x00F0(0x0008) (Const)
	class UErrorType*                                  OSCS_EpicAccountLinkingFailed;                             // 0x00F8(0x0008) (Const)
	class UErrorType*                                  ConnectionStatusErrors[0xD];                               // 0x0100(0x0068) (Const)
	class UErrorType*                                  VersionMismatch;                                           // 0x0168(0x0008) (Const)
	class UErrorType*                                  NoServers;                                                 // 0x0170(0x0008) (Const)
	class UErrorType*                                  FileDoesNotExist;                                          // 0x0178(0x0008) (Const)
	class UErrorType*                                  FileLoadFail;                                              // 0x0180(0x0008) (Const)
	class UErrorType*                                  FileLoadCorrupt;                                           // 0x0188(0x0008) (Const)
	class UErrorType*                                  FileMountCorrupt;                                          // 0x0190(0x0008) (Const)
	class UErrorType*                                  FileSaveFail;                                              // 0x0198(0x0008) (Const)
	class UErrorType*                                  FileSaveNoSpace;                                           // 0x01A0(0x0008) (Const)
	class UErrorType*                                  FileSaveCorrupt;                                           // 0x01A8(0x0008) (Const)
	class UErrorType*                                  UserAuthBanned;                                            // 0x01B0(0x0008) (Const)
	class UErrorType*                                  NotLoggedInToPsynet;                                       // 0x01B8(0x0008) (Const)
	class UErrorType*                                  FriendsList;                                               // 0x01C0(0x0008) (Const)
	class UErrorType*                                  InviteLimitReached;                                        // 0x01C8(0x0008) (Const)
	class UErrorType*                                  OutOfRetries;                                              // 0x01D0(0x0008) (Const)
	class UErrorType*                                  AuthenticationFailed;                                      // 0x01D8(0x0008) (Const)
	class UErrorType*                                  NoExportCountry;                                           // 0x01E0(0x0008) (Const)
	class UErrorType*                                  UnauthorizedAccess;                                        // 0x01E8(0x0008) (Const)
	class UErrorType*                                  ServiceNotFound;                                           // 0x01F0(0x0008) (Const)
	class UErrorType*                                  FeatureDisabled;                                           // 0x01F8(0x0008) (Const)
	class UErrorType*                                  OtherPlayerFeatureDisabled;                                // 0x0200(0x0008) (Const)
	class UErrorType*                                  MatchmakingDisabled;                                       // 0x0208(0x0008) (Const)
	class UErrorType*                                  NoValidPlaylistsSelected;                                  // 0x0210(0x0008) (Const)
	class UErrorType*                                  PlaylistNotAvailable;                                      // 0x0218(0x0008) (Const)
	class UErrorType*                                  PlayerNameNotSet;                                          // 0x0220(0x0008) (Const)
	class UErrorType*                                  PlayerNameAlreadyTaken;                                    // 0x0228(0x0008) (Const)
	class UErrorType*                                  PlayerNameTooShort;                                        // 0x0230(0x0008) (Const)
	class UErrorType*                                  PlayerNameTooLong;                                         // 0x0238(0x0008) (Const)
	class UErrorType*                                  PlayerNameInappropriate;                                   // 0x0240(0x0008) (Const)
	class UErrorType*                                  PlayerNameInvalidCharacter;                                // 0x0248(0x0008) (Const)
	class UErrorType*                                  PlayerNameFailed;                                          // 0x0250(0x0008) (Const)
	class UErrorType*                                  NotAuthorized;                                             // 0x0258(0x0008) (Const)
	class UErrorType*                                  SessionAlreadyActive;                                      // 0x0260(0x0008) (Const)
	class UErrorType*                                  GameServerPending;                                         // 0x0268(0x0008) (Const)
	class UErrorType*                                  CacheError;                                                // 0x0270(0x0008) (Const)
	class UErrorType*                                  WordFilterEvil;                                            // 0x0278(0x0008) (Const)
	class UErrorType*                                  WordFilterPlatformError;                                   // 0x0280(0x0008) (Const)
	class UErrorType*                                  WordFilterPlatformChatError;                               // 0x0288(0x0008) (Const)
	class UErrorType*                                  InvalidSettings;                                           // 0x0290(0x0008) (Const)
	class UErrorType*                                  Maintenance;                                               // 0x0298(0x0008) (Const)
	class UErrorType*                                  PlatformAuthError;                                         // 0x02A0(0x0008) (Const)
	class UErrorType*                                  MicrotransactionAuthExpired;                               // 0x02A8(0x0008) (Const)
	class UErrorType*                                  CannotFriendSelf;                                          // 0x02B0(0x0008) (Const)
	class UErrorType*                                  InvalidPlayer;                                             // 0x02B8(0x0008) (Const)
	class UErrorType*                                  FriendRequestNotFound;                                     // 0x02C0(0x0008) (Const)
	class UErrorType*                                  FriendRequestFailed;                                       // 0x02C8(0x0008) (Const)
	class UErrorType*                                  AlreadyFriends;                                            // 0x02D0(0x0008) (Const)
	class UErrorType*                                  FriendLimitReached;                                        // 0x02D8(0x0008) (Const)
	class UErrorType*                                  LocalFriendLimitReached;                                   // 0x02E0(0x0008) (Const)
	class UErrorType*                                  RemoteFriendLimitReached;                                  // 0x02E8(0x0008) (Const)
	class UErrorType*                                  LocalHostConnectionError;                                  // 0x02F0(0x0008) (Const)
	class UErrorType*                                  UGCRestricted;                                             // 0x02F8(0x0008) (Const)
	class UErrorType*                                  MicrotransactionServiceMaintenance;                        // 0x0300(0x0008) (Const)
	class UErrorType*                                  GenericStorageOutOfSync;                                   // 0x0308(0x0008) (Const)
	class UErrorType*                                  GenericStorageSync_RequestNotFound;                        // 0x0310(0x0008) (Const)
	class UErrorType*                                  SignatureMismatch;                                         // 0x0318(0x0008) (Const)
	class UErrorType*                                  JsonDeserialization;                                       // 0x0320(0x0008) (Const)
	class UErrorType*                                  InvalidPlatform;                                           // 0x0328(0x0008) (Const)
	class UErrorType*                                  InvalidPlatformForCodeRedemption;                          // 0x0330(0x0008) (Const)
	class UErrorType*                                  InvalidParameters;                                         // 0x0338(0x0008) (Const)
	class UPsyNetErrorType_X*                          NotMatchmaking;                                            // 0x0340(0x0008) (Const)
	class UErrorType*                                  AccessDenied;                                              // 0x0348(0x0008) (Const)
	class UPsyNetErrorType_X*                          PerConDisconnected;                                        // 0x0350(0x0008) (Const)
	class UErrorType*                                  AccountNotFound;                                           // 0x0358(0x0008) (Const)
	class UErrorType*                                  ServerNotFound;                                            // 0x0360(0x0008) (Const)
	class UPsyNetErrorType_X*                          ExpiredDsConnectToken;                                     // 0x0368(0x0008) (Const)
	class UErrorType*                                  MatchmakingNoInternet;                                     // 0x0370(0x0008) (Const)
	class UErrorType*                                  PartyRankDisparity;                                        // 0x0378(0x0008) (Const)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Errors_X");
		return ptr;
	}



	bool DisplayPlatformError(class UErrorType* InErrorType);
};

// Class ProjectX.EventRecorder_X
// 0x0060 (FullSize[0x00D0] - InheritedSize[0x0070])
class UEventRecorder_X : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0070(0x0008) (Const, Native, NoExport)
	class UEventRecorderConfig_X*                      Config;                                                    // 0x0078(0x0008)
	int                                                MaxQueuedEvents;                                           // 0x0080(0x0004) (Edit)
	int                                                MaxQueuedMinutes;                                          // 0x0084(0x0004) (Edit)
	unsigned long                                      bPaused : 1;                                               // 0x0088(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_YTAP[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMetricsEvent>                       QueuedEvents;                                              // 0x0090(0x0010) (Const, Transient, NeedCtorLink)
	struct FGuid                                       AppSessionID;                                              // 0x00A0(0x0010) (Const, Transient, PrivateWrite)
	struct FGuid                                       LevelSessionID;                                            // 0x00B0(0x0010) (Const, Transient, PrivateWrite)
	float                                              NextSendTime;                                              // 0x00C0(0x0004) (Const, Transient)
	float                                              FloodPreventionTimeSeconds;                                // 0x00C4(0x0004) (Edit)
	float                                              LastFullSendTime;                                          // 0x00C8(0x0004) (Const, Transient)
	int                                                AppEventCount;                                             // 0x00CC(0x0004) (Const, Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EventRecorder_X");
		return ptr;
	}



	void MetricsNotSent(int Count);
	void MetricsFlood(const struct FString& LastEventName);
	void SetLevelSessionID(const struct FGuid& Id);
	bool Send();
	void RecordEvent(const struct FString& Category, const struct FName& Event, struct FString* Data, const struct FUniqueNetId& PlayerID, int Version);
	void RecordFunction(const struct FString& Category, int Version);
};

// Class ProjectX.MetricsSystem_X
// 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
class UMetricsSystem_X : public UEventRecorder_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MetricsSystem_X");
		return ptr;
	}



	void Construct();
	void HandleUnpause(class UNetMode_Networked* NetMode, class UMetricsSystem_X* Metrics, class UPauseMetricsState_X* State);
	void HandlePause(class UNetMode_Networked* NetMode, class UMetricsSystem_X* Metrics, class UPauseMetricsState_X* State);
};

// Class ProjectX.EventRecorderGroup_X
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UEventRecorderGroup_X : public UComponent
{
public:
	struct FString                                     Category;                                                  // 0x0070(0x0010) (Edit, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EventRecorderGroup_X");
		return ptr;
	}



	struct FString VectorToString(const struct FVector& V);
	void RecordFunction(int Version);
	class UEventRecorder_X* GetEventRecorder();
};

// Class ProjectX.MetricsGroup_X
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UMetricsGroup_X : public UEventRecorderGroup_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MetricsGroup_X");
		return ptr;
	}



	class UEventRecorder_X* GetEventRecorder();
};

// Class ProjectX.NetMetrics_X
// 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
class UNetMetrics_X : public UMetricsGroup_X
{
public:
	class UEventRecorderConfig_X*                      Config;                                                    // 0x0080(0x0008)
	TArray<struct FString>                             UnstableConnectionsQueue;                                  // 0x0088(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetMetrics_X");
		return ptr;
	}



	void UnstableConnections(TArray<struct FString>* Addresses);
	void RecordUnstableConnections();
	void AddUnstableConnection(struct FString* Address);
	void StaticUnstableConnection(struct FString* Address);
	void ReliablePacketsBlocked();
	void UseInputBuffer(const struct FUniqueNetId& PlayerID, const struct FName& Type);
	void LaunchURL(const struct FString& URL);
	void ServerReported(const struct FUniqueNetId& PlayerID);
	void RpcSignatureMismatch(int ServiceID);
	void ConnectionChangedIP(const struct FUniqueNetId& PlayerID);
	void PlayerNetworkError(const struct FUniqueNetId& PlayerID, const struct FString& Reason);
	void PlayerTimeout(const struct FUniqueNetId& PlayerID);
	void NetStats(int PeriodMS, int PingMin, int PingMax, int PingAvg, int PingMed, int OutPackets, int InPackets, int OutLost, int InLost, int OutOfOrder, int OutBytes, int InBytes, int NNState, int DPingMin, int DJitter, float DLossPct, int NNPingMin, int NNJitter, float NNLossPct, int PsyPingMin, int PsyPingMax, int PsyPingAvg, int PsyPingMed, int PsyReceived, int PsyLost);
	void PlayerNetwork(const struct FUniqueNetId& PlayerID, int PingMin, int PingMax, int PingAvg, int PktLossRateMin, int PktLossRateMax, int PktLossAvg, int InBpsMax, int InBpsAvg, int InBytesTotal, int OutBpsMax, int OutBpsAvg, int OutBytesTotal);
	void RecordPlayerNetwork(class APlayerController* PC);
};

// Class ProjectX.NetworkNextMetrics_X
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UNetworkNextMetrics_X : public UMetricsGroup_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetworkNextMetrics_X");
		return ptr;
	}



	void ClientInitError();
	void ServerInitError();
	void RouteEstablished();
};

// Class ProjectX.ExplosionCollisionShapes_X
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UExplosionCollisionShapes_X : public UComponent
{
public:
	struct FVector                                     Location;                                                  // 0x0070(0x000C)
	float                                              GrowthAmount;                                              // 0x007C(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ExplosionCollisionShapes_X");
		return ptr;
	}



	void Destroy();
	void Init();
};

// Class ProjectX.AddReservationMessage_X
// 0x006C (FullSize[0x00CC] - InheritedSize[0x0060])
class UAddReservationMessage_X : public UBeaconMessage_X
{
public:
	TArray<struct FReservationPlayerData>              Players;                                                   // 0x0060(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                PartyLeaderID;                                             // 0x0070(0x0048) (NeedCtorLink)
	struct FString                                     ReservationID;                                             // 0x00B8(0x0010) (NeedCtorLink)
	unsigned long                                      bDisableCrossPlay : 1;                                     // 0x00C8(0x0001) BIT_FIELD
	unsigned long                                      bMarkSplitscreenAsRemote : 1;                              // 0x00C8(0x0001) BIT_FIELD (Transient, Config)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AddReservationMessage_X");
		return ptr;
	}



	struct FUniqueNetId __AddReservationMessage_X__GetPlayerIDs_E51F9C584C4EECD4DFC655B9945F7E0B(const struct FReservationPlayerData& P);
	TArray<struct FUniqueNetId> GetPlayerIDs(TArray<struct FUniqueNetId>* MapLocal_87881C2E4C910C33CAE039A95A3E72A7);
	void GetPlayerMapPrefs(const struct FUniqueNetId& PlayerID, TArray<struct FName>* Likes, TArray<struct FName>* Dislikes);
	class UAddReservationMessage_X* SetDisableCrossPlay(bool bValue);
	class UAddReservationMessage_X* AddPlayer(const struct FUniqueNetId& PlayerID, const struct FString& PlayerName, bool bRemotePlayer);
	class UAddReservationMessage_X* AddOnlinePlayer(class UOnlinePlayer_X* Player, bool bFriendJoin);
	class UAddReservationMessage_X* AddPlayers();
	class UAddReservationMessage_X* SetReservationID(const struct FString& Id);
};

// Class ProjectX.AddReservationMessagePrivate_X
// 0x0094 (FullSize[0x0160] - InheritedSize[0x00CC])
class UAddReservationMessagePrivate_X : public UAddReservationMessage_X
{
public:
	unsigned char                                      UnknownData_WPUW[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct U_Types_X_FCustomMatchSettings              Settings;                                                  // 0x00D0(0x0090) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AddReservationMessagePrivate_X");
		return ptr;
	}



	struct FString GetDebugString();
	class UAddReservationMessagePrivate_X* SetSettings(struct U_Types_X_FCustomMatchSettings* InSettings);
};

// Class ProjectX.AddReservationMessagePublic_X
// 0x0034 (FullSize[0x0100] - InheritedSize[0x00CC])
class UAddReservationMessagePublic_X : public UAddReservationMessage_X
{
public:
	unsigned char                                      UnknownData_W7E2[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FJoinMatchSettings                          Settings;                                                  // 0x00D0(0x0020) (NeedCtorLink)
	TArray<struct FOnlinePlayerMapPrefs>               MapPrefs;                                                  // 0x00F0(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AddReservationMessagePublic_X");
		return ptr;
	}



	class UAddReservationMessage_X* AddPlayers();
	void SetPlayerPref(class UGameSettingPlaylist_X* Playlist, class UOnlinePlayer_X* OnlinePlayer);
	void GetPlayerMapPrefs(const struct FUniqueNetId& PlayerID, TArray<struct FName>* Likes, TArray<struct FName>* Dislikes);
	class UAddReservationMessage_X* AddPlayer(const struct FUniqueNetId& PlayerID, const struct FString& PlayerName, bool bRemotePlayer);
	struct FString GetDebugString();
	struct FString GetPlayerDebugString(const struct FReservationPlayerData& Player);
	class UAddReservationMessagePublic_X* SetSettings(struct FJoinMatchSettings* InSettings);
};

// Class ProjectX.OnlineGameSkill_X
// 0x0058 (FullSize[0x00F0] - InheritedSize[0x0098])
class UOnlineGameSkill_X : public UOnline_X
{
public:
	TArray<class UPlaylistSkillCache_X*>               Playlists;                                                 // 0x0098(0x0010) (Transient, NeedCtorLink, ProtectedWrite)
	TArray<struct FPlayerSeasonRewardProgress>         SeasonRewards;                                             // 0x00A8(0x0010) (Transient, NeedCtorLink, ProtectedWrite)
	TArray<struct FSkillSyncRequest>                   SyncRequests;                                              // 0x00B8(0x0010) (Transient, NeedCtorLink)
	TArray<struct FUniqueNetId>                        SkillsSyncedPlayers;                                       // 0x00C8(0x0010) (Transient, NeedCtorLink)
	struct FScriptDelegate                             __EventSkillSynced__Delegate;                              // 0x00D8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_KXA5[0xC];                                     // 0x00D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameSkill_X");
		return ptr;
	}



	void __OnlineGameSkill_X__Construct_6ECBA9264FD08D6516CFC98D37738121(class UOnlineGameParty_X* PartyObject);
	void __OnlineGameSkill_X__CreateSyncPlayerSkillRPC_D2005B9C4A14C7038B76868DEB98A237(class URPC_GetPartyMemberSkill_X* RPC);
	void __OnlineGameSkill_X__CreateSyncPlayerSkillRPC_BF9464BE4AD924D1D7459CA2E7A5FAD4(class URPC_GetPlayerSkill_X* RPC);
	void __OnlineGameSkill_X__ClearPartyMembersSkill_F4937F354B3670AD92ECB79565BF7D03(const struct FPartyMember& Member);
	void __OnlineGameSkill_X__CacheSkills_641727F549D737E546BA18926C250261(const struct FPlayerSkillRating& Rating);
	void __OnlineGameSkill_X__SyncPartyMembersSkills_155B159846626B0E710503A279AA20FD(const struct FPartyMember& Member);
	bool __OnlineGameSkill_X__SyncPartyMembersSkills_CE23D87845A70C5E52EDEDABBA1EFCC5(const struct FPartyMember& Member);
	bool SkillsSynced(const struct FUniqueNetId& PlayerID);
	int GetHighestSkillTier(const struct FUniqueNetId& PlayerID);
	struct FPlayerSeasonRewardProgress GetPlayerSeasonRewardProgress(const struct FUniqueNetId& PlayerID);
	class UPlaylistSkillCache_X* GetPlaylistSkillCache(int Playlist);
	void HandleSkillsUpdateFailed(class URPC_X* RPC);
	void SetPlayerSeasonReward(const struct FPlayerSeasonRewardProgress& Reward);
	void ReplicateSeasonReward(const struct FPlayerSeasonRewardProgress& Reward);
	void HandleSkillsUpdated(class URPC_UpdateSkills_X* RPC);
	void SubmitMatch(class UMatchData_X* Match, const struct FString& MatchGUID);
	void Clear();
	float GetConservativeMMR(float Mu, float Sigma);
	float GetPlayerConservativeMMR(const struct FUniqueNetId& PlayerID, int Playlist);
	float GetMMR(float Mu, float Sigma);
	float GetPlayerMMR(const struct FUniqueNetId& PlayerID, int Playlist);
	struct FUpdatedPlayerSkillRating GetUpdatedPlayerRating(const struct FUniqueNetId& PlayerID, int Playlist);
	struct FPlayerSkillRating GetPlayerRating(const struct FUniqueNetId& PlayerID, int Playlist);
	void OnSkillSynced(const struct FUniqueNetId& PlayerID, class UError* Error, class USyncedSkillData_X** ObjectInitializer_2C2C036741384E17B6E4C4A8BB43F610);
	void CacheSeasonReward(const struct FPlayerSeasonRewardProgress& Reward);
	void HandleSyncedPlayerSkill(class URPC_X* RPC, const struct FUniqueNetId& PlayerID, TArray<struct FPlayerSkillRating> PlayerSkillRatings, class UError* Error, TArray<int>* ArrayResultLocal_4A2C31B24A0C4306C425E69ECA5CD543);
	void SyncPlayerSkill(const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& Callback);
	void SyncPartyMembersSkills(TArray<struct FPartyMember>* FilterLocal_4AB0A01D4EBB528D146849B7EC557911);
	void CacheSkill(const struct FUpdatedPlayerSkillRating& Rating, int Playlist);
	void CacheSkills(TArray<struct FPlayerSkillRating> Ratings);
	void PreCacheSkill(const struct FPlayerSkillRating& Rating, int Playlist);
	void HandlePartyDestroyed(class UOnlineGameParty_X* PartyObject);
	void HandlePartyLeaderChanged(class UOnlineGameParty_X* PartyObject, const struct FUniqueNetId& NewLeader);
	void HandlePartyMemberRemoved(class UOnlineGameParty_X* PartyObject, const struct FUniqueNetId& InMemberId);
	void HandlePartyMemberAdded(class UOnlineGameParty_X* PartyObject, const struct FUniqueNetId& InMemberId);
	int GetSkillPlaylistID(int PlaylistId);
	void ClearSkill(const struct FUniqueNetId& PlayerID);
	void ClearPartyMembersSkill(TArray<struct FPartyMember>* FilterLocal_1013E2A3440D6C37E7FB629175E09310);
	bool AllPlayersAreAroundTheSameRank(int PlaylistId);
	class URPC_X* CreateSyncPlayerSkillRPC(const struct FUniqueNetId& PlayerID);
	void Construct();
	void EventSkillSynced(class UOnlineGameSkill_X* Skill, const struct FUniqueNetId& PlayerID, class UError* Error);
};

// Class ProjectX.OnlineGamePlaylists_X
// 0x0068 (FullSize[0x0100] - InheritedSize[0x0098])
class UOnlineGamePlaylists_X : public UOnline_X
{
public:
	class UClass*                                      PlaylistClass;                                             // 0x0098(0x0008) (Edit)
	TArray<class UGameSettingPlaylist_X*>              DownloadedPlaylists;                                       // 0x00A0(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	class URankedConfig_X*                             RankedConfig;                                              // 0x00B0(0x0008) (Edit)
	struct FString                                     CompetitiveCategory;                                       // 0x00B8(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     CasualCategory;                                            // 0x00C8(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     ExtraModeCategory;                                         // 0x00D8(0x0010) (Const, Localized, NeedCtorLink)
	struct FScriptDelegate                             __EventPlaylistsChanged__Delegate;                         // 0x00E8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_N7TQ[0xC];                                     // 0x00E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGamePlaylists_X");
		return ptr;
	}



	bool __OnlineGamePlaylists_X__GetPrivateMatch_6E60D2A645C03B895DC958929462774D(class UGameSettingPlaylist_X* P);
	bool __OnlineGamePlaylists_X__GetLanMatch_53623A5042C8433B39C6D3A61166DFD1(class UGameSettingPlaylist_X* P);
	int __OnlineGamePlaylists_X__GetRankedPlaylistIDs_59F840CB424265408434488F06B00594(class UGameSettingPlaylist_X* Playlist);
	bool __OnlineGamePlaylists_X__GetRankedPlaylistIDs_3B04EBB94045DBB3A7D2BF8FB1D8436F(class UGameSettingPlaylist_X* Playlist);
	TArray<int> GetRankedPlaylistIDs(TArray<class UGameSettingPlaylist_X*>* FilterLocal_74A6BAC4479B36C76F736A9C6735E200, TArray<int>* MapLocal_48208A0345E2C1C6BF78CEA65B322C90);
	struct FString GetLocalizedPlaylistIDCategory(int PlaylistId);
	class UGameSettingPlaylist_X* GetLanMatch();
	class UGameSettingPlaylist_X* GetPrivateMatch();
	TArray<struct FName> GetAccessiblePlaylists(TArray<struct FName>* SelectedPlaylists);
	bool IsRankedEnabled();
	bool IsRankedPlaylistID(int PlaylistId);
	bool IsRankedPlaylistName(const struct FName& PlaylistName);
	bool IsUnrankedPlaylistName(const struct FName& PlaylistName);
	bool IsStandardPlaylistID(int PlaylistId);
	bool IsStandardPlaylistName(const struct FName& PlaylistName);
	bool IsNonStandardPlaylistName(const struct FName& PlaylistName);
	void NamesToIDs(TArray<struct FName>* Names, TArray<int>* Ids);
	struct FString GetPlaylistFriendlyName(int PlaylistId);
	void CopyPlaylistGameTags();
	void HandlePlaylistsChanged(class UObjectProvider* Provider);
	struct FName IdToName(int PlaylistId);
	int NameToId(const struct FName& PlaylistName);
	int GetTimeRemaining(int PlaylistId);
	bool IsTimeConstrained(int PlaylistId);
	class UGameSettingPlaylist_X* GetPlaylistByID(int PlaylistId);
	class UGameSettingPlaylist_X* GetPlaylistByName(const struct FName& PlaylistName);
	bool IsPlaylistEnabled(class UGameSettingPlaylist_X* Playlist);
	void NotifyWhenChanged(const struct FScriptDelegate& Callback);
	void OnInit();
	void EventPlaylistsChanged(class UOnlineGamePlaylists_X* PlaylistsObj);
};

// Class ProjectX.GameSettingPlaylist_X
// 0x00BC (FullSize[0x0120] - InheritedSize[0x0064])
class UGameSettingPlaylist_X : public UGameSetting_X
{
public:
	unsigned char                                      UnknownData_T9QF[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Title;                                                     // 0x0068(0x0010) (Edit, NeedCtorLink)
	struct FString                                     Description;                                               // 0x0078(0x0010) (Edit, NeedCtorLink)
	int                                                PlayerCount;                                               // 0x0088(0x0004) (Edit, PrivateWrite)
	unsigned long                                      bStandard : 1;                                             // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned long                                      bRanked : 1;                                               // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned long                                      bSolo : 1;                                                 // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned long                                      bExtraMode : 1;                                            // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned long                                      bPrivate : 1;                                              // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned long                                      bTournament : 1;                                           // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned long                                      bApplyQuitPenalty : 1;                                     // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned long                                      bAllowForfeit : 1;                                         // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned long                                      bDisableRankedReconnect : 1;                               // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned long                                      bIgnoreAssignTeams : 1;                                    // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned long                                      bAllowBotFills : 1;                                        // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned long                                      bKickOnMigrate : 1;                                        // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned long                                      bCheckRankedMatchReservationID : 1;                        // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned long                                      bIsMicroEventPlaylist : 1;                                 // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned long                                      bHasVariablePlayerCount : 1;                               // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned long                                      bNew : 1;                                                  // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned long                                      bAllowClubs : 1;                                           // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned long                                      bAllowStayAsParty : 1;                                     // 0x008C(0x0001) BIT_FIELD (Edit)
	struct FString                                     PlaylistImageURL;                                          // 0x0090(0x0010) (Edit, NeedCtorLink, PrivateWrite)
	struct FString                                     PlaylistImageTexture;                                      // 0x00A0(0x0010) (Edit, NeedCtorLink, PrivateWrite)
	struct FString                                     PlaylistIconActiveURL;                                     // 0x00B0(0x0010) (Edit, NeedCtorLink, PrivateWrite)
	struct FString                                     PlaylistIconInactiveURL;                                   // 0x00C0(0x0010) (Edit, NeedCtorLink, PrivateWrite)
	int                                                PlaylistId;                                                // 0x00D0(0x0004) (Edit, PrivateWrite)
	unsigned char                                      UnknownData_GMQC[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimeWindow*                                 PlaylistTimeWindow;                                        // 0x00D8(0x0008) (Edit)
	TArray<class UPresetMutators_X*>                   PresetMutators;                                            // 0x00E0(0x0010) (Edit, NeedCtorLink, ProtectedWrite)
	struct FName                                       MapName;                                                   // 0x00F0(0x0008) (Edit)
	struct FString                                     ServerCommand;                                             // 0x00F8(0x0010) (Edit, NeedCtorLink)
	struct FName                                       MapSetName;                                                // 0x0108(0x0008) (Edit)
	TArray<int>                                        PopulationBuckets;                                         // 0x0110(0x0010) (Edit, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GameSettingPlaylist_X");
		return ptr;
	}



	bool UseRandomizedNameAndPassword();
	bool ShouldAllowRankedReconnect();
	bool IsLanMatch();
	bool IsTournamentMatch();
	bool IsPrivateMatch();
	bool IsRankedMatch();
	bool ShouldUpdateSkills();
	bool IsValidID(int InPlaylistID);
	bool IsValid();
	struct FString GetLocalizedDescription();
	struct FString GetLocalizedName();
	void Setup(class UPlaylistSettings_X* Settings);
};

// Class ProjectX.SeqEvent_Spawned_X
// 0x000C (FullSize[0x0188] - InheritedSize[0x017C])
class USeqEvent_Spawned_X : public USequenceEvent
{
public:
	unsigned char                                      UnknownData_KE3F[0x4];                                     // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Spawned;                                                   // 0x0180(0x0008) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SeqEvent_Spawned_X");
		return ptr;
	}



	void TriggerFor(class AActor* A);
};

// Class ProjectX.CameraStateBlender_X
// 0x00A0 (FullSize[0x0110] - InheritedSize[0x0070])
class UCameraStateBlender_X : public UComponent
{
public:
	struct FCameraTransition                           Transition;                                                // 0x0070(0x0050) (Transient, PrivateWrite)
	struct FCameraOrientation                          TransitionDelta;                                           // 0x00C0(0x002C) (Transient)
	unsigned char                                      UnknownData_OMAU[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCameraState_X*                              CameraState;                                               // 0x00F0(0x0008) (Transient, PrivateWrite)
	struct FScriptDelegate                             __EventBlenderStateChanged__Delegate;                      // 0x00F8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_577Z[0xC];                                     // 0x00F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CameraStateBlender_X");
		return ptr;
	}



	bool IsTransitioning();
	void BlendCameraState(struct FCameraOrientation* OutPOV, float DeltaTime);
	void PostProcessPOV(float DeltaTime, struct FCameraOrientation* OutPOV);
	void UpdatePOV(float DeltaTime, struct FCameraOrientation* OutPOV);
	void Tick(float DeltaTime);
	void ClearTransitionDelta();
	void ClearTransition();
	bool TransitionToState(class UCameraState_X* NewState);
	void Snap();
	void EventBlenderStateChanged(class UCameraStateBlender_X* CameraBender);
};

// Class ProjectX.CameraState_X
// 0x0028 (FullSize[0x008C] - InheritedSize[0x0064])
class UCameraState_X : public UStateObject_X
{
public:
	unsigned char                                      UnknownData_SQQT[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FViewTargetTransitionParams                 DefaultBlendParams;                                        // 0x0068(0x0010) (Edit)
	class AWorldInfo*                                  WorldInfo;                                                 // 0x0078(0x0008) (Transient, PrivateWrite)
	class ACamera_X*                                   Camera;                                                    // 0x0080(0x0008) (Transient, PrivateWrite)
	unsigned long                                      bCanSwivel : 1;                                            // 0x0088(0x0001) BIT_FIELD (Const)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CameraState_X");
		return ptr;
	}



	void OnSnap();
	void ModifyPostProcessSettings(struct FPostProcessSettings* PP);
	void ProcessViewRotation(float DeltaTime, struct FRotator* OutViewRotation, struct FRotator* OutDeltaRot);
	void UpdatePOV(float DeltaTime, struct FCameraOrientation* OutPOV);
	void Tick(float DeltaTime);
	void EndCameraState();
	void BeginCameraState();
	struct FViewTargetTransitionParams GetEndBlendParams(class UCameraState_X* NewState);
	struct FViewTargetTransitionParams GetStartBlendParams(class UCameraState_X* PreviousState);
	bool ShouldKeepExecuting();
	bool ShouldExecute();
	void ShutDown();
	void Init(class ACamera_X* InCamera);
};

// Class ProjectX.RPC_CheckReplacementDedicatedServer_X
// 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
class URPC_CheckReplacementDedicatedServer_X : public URPC_X
{
public:
	unsigned char                                      ServerId[0x8];                                             // 0x00E8(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_CheckReplacementDedicatedServer_X.ServerId
	unsigned long                                      bFoundReplacement : 1;                                     // 0x00F0(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownData_N3T3[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCheckReplacementDedicatedServerData        Server;                                                    // 0x00F8(0x0030) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_CheckReplacementDedicatedServer_X");
		return ptr;
	}



	struct FString GetServerAddress();
	class URPC_CheckReplacementDedicatedServer_X* SetServerID();
};

// Class ProjectX.RPC_AddQuitter_X
// 0x005C (FullSize[0x0144] - InheritedSize[0x00E8])
class URPC_AddQuitter_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x00E8(0x0048) (NeedCtorLink)
	struct FString                                     Reason;                                                    // 0x0130(0x0010) (NeedCtorLink)
	int                                                PlaylistId;                                                // 0x0140(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_AddQuitter_X");
		return ptr;
	}



	class URPC_AddQuitter_X* SetPlaylistID(int InPlaylistID);
	class URPC_AddQuitter_X* SetReason(const struct FString& InReason);
	class URPC_AddQuitter_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.RPC_RemoveQuitter_X
// 0x004C (FullSize[0x0134] - InheritedSize[0x00E8])
class URPC_RemoveQuitter_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x00E8(0x0048) (NeedCtorLink, PrivateWrite)
	int                                                PlaylistId;                                                // 0x0130(0x0004) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_RemoveQuitter_X");
		return ptr;
	}



	class URPC_RemoveQuitter_X* SetPlaylistID(int InPlaylistID);
	class URPC_RemoveQuitter_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.RPC_RecordMatch_X
// 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
class URPC_RecordMatch_X : public URPC_X
{
public:
	class UObject*                                     Match;                                                     // 0x00E8(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_RecordMatch_X");
		return ptr;
	}



	class URPC_RecordMatch_X* SetMatch(class UObject* InMatch);
};

// Class ProjectX.MatchLog_X
// 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
class UMatchLog_X : public UObject
{
public:
	int                                                LogFileStartSize;                                          // 0x0060(0x0004)
	unsigned char                                      UnknownData_IQVF[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     URL;                                                       // 0x0068(0x0010) (NeedCtorLink)
	TArray<unsigned char>                              Content;                                                   // 0x0078(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MatchLog_X");
		return ptr;
	}



	void ConditionalSendWebRequest();
	void End(int MaxSize);
	void SetURL(const struct FString& InURL);
	struct FString GetLogFileName();
	int GetLogFileSize();
	void Start();
};

// Class ProjectX.ClanforgeReservation_X
// 0x0068 (FullSize[0x00C8] - InheritedSize[0x0060])
class UClanforgeReservation_X : public UObject
{
public:
	struct FString                                     ReserveURLs[0x3];                                          // 0x0060(0x0030) (NeedCtorLink, PrivateWrite)
	TEnumAsByte<ProjectX_EReserveState>                ReserveState;                                              // 0x0090(0x0001) (Transient)
	unsigned char                                      UnknownData_Y1AP[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      RetryDelays;                                               // 0x0098(0x0010) (Edit, NeedCtorLink)
	int                                                SendFailures;                                              // 0x00A8(0x0004) (Transient)
	unsigned char                                      UnknownData_BXX5[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UWebRequest_X*>                       QueuedRequests;                                            // 0x00B0(0x0010) (Transient, NeedCtorLink)
	class UWebRequest_X*                               PendingRequest;                                            // 0x00C0(0x0008) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ClanforgeReservation_X");
		return ptr;
	}



	void HandleRetry();
	void Retry();
	void HandleSendComplete(class UWebRequest_X* Request);
	void ProcessNextRequest();
	void Send(const struct FString& URL);
	void SetReserveState(TEnumAsByte<ProjectX_EReserveState> NewState);
	void HandleActivate(class UOnlineGameDedicatedServer_X* Server);
	void HandleInactive(class UOnlineGameDedicatedServer_X* Server);
	void Init(class UOnlineGameDedicatedServer_X* Server, const struct FString& ReserveURL, const struct FString& UnreserveURL);
};

// Class ProjectX.ServerMetrics_X
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UServerMetrics_X : public UMetricsGroup_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ServerMetrics_X");
		return ptr;
	}



	void CrashedError();
	void ShutDown();
	void Created(const struct FString& Host);
};

// Class ProjectX.RPC_DeactivateGameServer_X
// 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
class URPC_DeactivateGameServer_X : public URPC_X
{
public:
	unsigned char                                      ServerId[0x8];                                             // 0x00E8(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_DeactivateGameServer_X.ServerId


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_DeactivateGameServer_X");
		return ptr;
	}



	class URPC_DeactivateGameServer_X* SetServerID();
};

// Class ProjectX.RPC_SetServerNotJoinable_X
// 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
class URPC_SetServerNotJoinable_X : public URPC_X
{
public:
	unsigned char                                      ServerId[0x8];                                             // 0x00E8(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_SetServerNotJoinable_X.ServerId


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_SetServerNotJoinable_X");
		return ptr;
	}



	class URPC_SetServerNotJoinable_X* SetServerID();
};

// Class ProjectX.RPC_UpdateGameServer_X
// 0x0094 (FullSize[0x017C] - InheritedSize[0x00E8])
class URPC_UpdateGameServer_X : public URPC_X
{
public:
	unsigned char                                      ServerId[0x8];                                             // 0x00E8(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_UpdateGameServer_X.ServerId
	int                                                Playlist;                                                  // 0x00F0(0x0004) (PrivateWrite)
	int                                                MaxPlayers;                                                // 0x00F4(0x0004) (PrivateWrite)
	int                                                NumPlayersTeam1;                                           // 0x00F8(0x0004) (PrivateWrite)
	int                                                NumPlayersTeam2;                                           // 0x00FC(0x0004) (PrivateWrite)
	int                                                ReservationsTeam1;                                         // 0x0100(0x0004) (PrivateWrite)
	int                                                ReservationsTeam2;                                         // 0x0104(0x0004) (PrivateWrite)
	unsigned long                                      bIsPostGame : 1;                                           // 0x0108(0x0001) BIT_FIELD (PrivateWrite)
	unsigned long                                      bIsBotMatch : 1;                                           // 0x0108(0x0001) BIT_FIELD (PrivateWrite)
	int                                                TimeRemaining;                                             // 0x010C(0x0004) (PrivateWrite)
	struct FString                                     ExclusivePlatform;                                         // 0x0110(0x0010) (NeedCtorLink, PrivateWrite)
	TArray<struct FString>                             PlayersPlatforms;                                          // 0x0120(0x0010) (NeedCtorLink, PrivateWrite)
	TArray<struct FUniqueNetId>                        PlayerIDs;                                                 // 0x0130(0x0010) (NeedCtorLink, PrivateWrite)
	TArray<struct FUniqueNetId>                        AbandonedPlayerIDs;                                        // 0x0140(0x0010) (NeedCtorLink, PrivateWrite)
	struct FString                                     CustomServerName;                                          // 0x0150(0x0010) (NeedCtorLink, PrivateWrite)
	struct FString                                     CustomServerPassword;                                      // 0x0160(0x0010) (NeedCtorLink, PrivateWrite)
	int                                                ScoreTeam1;                                                // 0x0170(0x0004) (PrivateWrite)
	int                                                ScoreTeam2;                                                // 0x0174(0x0004) (PrivateWrite)
	int                                                ClubID;                                                    // 0x0178(0x0004) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_UpdateGameServer_X");
		return ptr;
	}



	class URPC_UpdateGameServer_X* SetTeam2Score(int TeamScore);
	class URPC_UpdateGameServer_X* SetTeam1Score(int TeamScore);
	class URPC_UpdateGameServer_X* SetIsBotMatch(bool bBotMatch);
	class URPC_UpdateGameServer_X* SetClubID();
	class URPC_UpdateGameServer_X* SetCustomServerPassword(const struct FString& InCustomServerPassword);
	class URPC_UpdateGameServer_X* SetCustomServerName(const struct FString& InCustomServerName);
	class URPC_UpdateGameServer_X* SetPlayersPlatforms(TArray<struct FString> InPlayersPlatforms);
	class URPC_UpdateGameServer_X* SetExclusivePlatform(const struct FString& InExclusivePlatform);
	class URPC_UpdateGameServer_X* SetTimeRemaining(int InTimeRemaining);
	class URPC_UpdateGameServer_X* SetIsPostGame(bool bInIsPostGame);
	class URPC_UpdateGameServer_X* SetAbandonedPlayerIDs(TArray<struct FUniqueNetId> InPlayerIDs);
	class URPC_UpdateGameServer_X* SetPlayerIDs(TArray<struct FUniqueNetId> InPlayerIDs);
	class URPC_UpdateGameServer_X* SetReservationsTeam2(int InReservationsTeam2);
	class URPC_UpdateGameServer_X* SetReservationsTeam1(int InReservationsTeam1);
	class URPC_UpdateGameServer_X* SetNumPlayersTeam2(int InNumPlayersTeam2);
	class URPC_UpdateGameServer_X* SetNumPlayersTeam1(int InNumPlayersTeam1);
	class URPC_UpdateGameServer_X* SetMaxPlayers(int InMaxPlayers);
	class URPC_UpdateGameServer_X* SetPlaylist(int InPlaylist);
	class URPC_UpdateGameServer_X* SetServerID();
};

// Class ProjectX.RPC_CreateGameServer_X
// 0x00A0 (FullSize[0x0188] - InheritedSize[0x00E8])
class URPC_CreateGameServer_X : public URPC_X
{
public:
	struct FString                                     ServerName;                                                // 0x00E8(0x0010) (NeedCtorLink, PrivateWrite)
	int                                                MachineId;                                                 // 0x00F8(0x0004) (PrivateWrite)
	unsigned char                                      UnknownData_MUZJ[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     IP;                                                        // 0x0100(0x0010) (NeedCtorLink, PrivateWrite)
	struct FString                                     Region;                                                    // 0x0110(0x0010) (NeedCtorLink, PrivateWrite)
	int                                                BuildID;                                                   // 0x0120(0x0004) (PrivateWrite)
	unsigned char                                      UnknownData_5BUC[0x4];                                     // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ServerType;                                                // 0x0128(0x0010) (NeedCtorLink, PrivateWrite)
	unsigned char                                      ServerId[0x8];                                             // 0x0138(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_CreateGameServer_X.ServerId
	struct FString                                     Host;                                                      // 0x0140(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	int                                                Zone;                                                      // 0x0150(0x0004) (Transient, PrivateWrite)
	unsigned long                                      UseWebSocket : 1;                                          // 0x0154(0x0001) BIT_FIELD (Transient)
	struct FString                                     PerConURL;                                                 // 0x0158(0x0010) (Transient, NeedCtorLink)
	struct FString                                     PerConURLv2;                                               // 0x0168(0x0010) (Transient, NeedCtorLink)
	struct FString                                     PsyToken;                                                  // 0x0178(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_CreateGameServer_X");
		return ptr;
	}



	class URPC_CreateGameServer_X* SetBuildID(int InBuildID);
	class URPC_CreateGameServer_X* SetRegion(const struct FString& InRegion);
	class URPC_CreateGameServer_X* SetIP(const struct FString& InIP);
	class URPC_CreateGameServer_X* SetMachineID(int InMachineID);
	class URPC_CreateGameServer_X* SetServerType(const struct FString& InServerType);
	class URPC_CreateGameServer_X* SetServerName(const struct FString& InServerName);
};

// Class ProjectX.RPC_GetLeaderboardRankForUsersBase_X
// 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
class URPC_GetLeaderboardRankForUsersBase_X : public URPC_X
{
public:
	TArray<struct FUniqueNetId>                        PlayerIDs;                                                 // 0x00E8(0x0010) (NeedCtorLink, PrivateWrite)
	struct FString                                     LeaderboardId;                                             // 0x00F8(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	TArray<struct FGetLeaderboardRankForUserData>      Players;                                                   // 0x0108(0x0010) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetLeaderboardRankForUsersBase_X");
		return ptr;
	}



	class URPC_GetLeaderboardRankForUsersBase_X* SetPlayerIDs(TArray<struct FUniqueNetId> InPlayerIDs);
};

// Class ProjectX.RPC_GetSkillLeaderboardRankForUsers_X
// 0x0004 (FullSize[0x011C] - InheritedSize[0x0118])
class URPC_GetSkillLeaderboardRankForUsers_X : public URPC_GetLeaderboardRankForUsersBase_X
{
public:
	int                                                Playlist;                                                  // 0x0118(0x0004) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetSkillLeaderboardRankForUsers_X");
		return ptr;
	}



	class URPC_GetSkillLeaderboardRankForUsers_X* SetPlaylist(int InPlaylist);
};

// Class ProjectX.RPC_GetLeaderboardRankForUsers_X
// 0x0010 (FullSize[0x0128] - InheritedSize[0x0118])
class URPC_GetLeaderboardRankForUsers_X : public URPC_GetLeaderboardRankForUsersBase_X
{
public:
	struct FString                                     Stat;                                                      // 0x0118(0x0010) (NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetLeaderboardRankForUsers_X");
		return ptr;
	}



	class URPC_GetLeaderboardRankForUsers_X* SetStat(const struct FString& InStat);
};

// Class ProjectX.CheckReservation_X
// 0x00F0 (FullSize[0x0150] - InheritedSize[0x0060])
class UCheckReservation_X : public UObject
{
public:
	float                                              StartDelay;                                                // 0x0060(0x0004) (Edit)
	float                                              Rate;                                                      // 0x0064(0x0004) (Edit)
	float                                              LastMatchmakingHeartbeatTime;                              // 0x0068(0x0004) (Transient, PrivateWrite)
	unsigned char                                      UnknownData_S2RN[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAsyncTask*                                  CheckReservationTask;                                      // 0x0070(0x0008) (Transient)
	struct FScriptDelegate                             FoundReservationCallback;                                  // 0x0078(0x000C) ELEMENT_SIZE_MISMATCH (Transient, NeedCtorLink)
	unsigned char                                      UnknownData_Q1LB[0xC];                                     // 0x0078(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FServerReservationData                      FoundReservation;                                          // 0x0090(0x0080) (NeedCtorLink)
	class UPsyNetConfig_X*                             Config;                                                    // 0x0110(0x0008)
	class UReservationBeacon_X*                        ReservationBeacon;                                         // 0x0118(0x0008) (ExportObject, Component, EditInline)
	struct FScriptDelegate                             __OnStartSearch__Delegate;                                 // 0x0120(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_3MW6[0xC];                                     // 0x0120(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFoundReservation__Delegate;                            // 0x0138(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_IFFA[0xC];                                     // 0x0138(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CheckReservation_X");
		return ptr;
	}



	void HandleReservationData(struct FServerReservationData* Reservation);
	void HandleClientReservationMessage(class UClientReservationMessage_X* Message);
	void HandleReservation2Notification(class UPsyNetService_Reservation2_X* Service);
	void HandlePendingReservation();
	void HandleReservationNotification(class UPsyNetService_Reservation_X* Service);
	void SendRequest();
	void HandlePreLoadMap(const struct FString& _);
	void Cancel();
	bool IsSearching();
	void StartSearch(const struct FScriptDelegate& Callback);
	class UCheckReservation_X* NotifyOnStartSearch(const struct FScriptDelegate& Callback);
	void OnFoundReservation(const struct FServerReservationData& Reservation);
	void OnStartSearch(class UAsyncTask* Task);
};

// Class ProjectX.RegionPing_X
// 0x0039 (FullSize[0x0099] - InheritedSize[0x0060])
class URegionPing_X : public UObject
{
public:
	class URegion_X*                                   Region;                                                    // 0x0060(0x0008)
	struct FString                                     RegionID;                                                  // 0x0068(0x0010) (NeedCtorLink)
	struct FName                                       Address;                                                   // 0x0078(0x0008)
	class UTcpConnection*                              Connection;                                                // 0x0080(0x0008)
	float                                              PingSendTime;                                              // 0x0088(0x0004)
	float                                              Ping;                                                      // 0x008C(0x0004)
	float                                              AvgPing;                                                   // 0x0090(0x0004)
	int                                                PingCount;                                                 // 0x0094(0x0004)
	TEnumAsByte<ProjectX_ERegionPingResult>            PingResult;                                                // 0x0098(0x0001)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RegionPing_X");
		return ptr;
	}



	void Reset();
};

// Class ProjectX.RPC_PlayerCancelMatchmaking_X
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class URPC_PlayerCancelMatchmaking_X : public URPC_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PlayerCancelMatchmaking_X");
		return ptr;
	}



};

// Class ProjectX.RPC_StartMatchmaking_X
// 0x005C (FullSize[0x0144] - InheritedSize[0x00E8])
class URPC_StartMatchmaking_X : public URPC_X
{
public:
	TArray<struct FString>                             Regions;                                                   // 0x00E8(0x0010) (NeedCtorLink)
	TArray<int>                                        Playlists;                                                 // 0x00F8(0x0010) (NeedCtorLink)
	int                                                SecondsSearching;                                          // 0x0108(0x0004)
	unsigned char                                      UnknownData_BYJB[0x4];                                     // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      CurrentServerId[0x8];                                      // 0x010C(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_StartMatchmaking_X.CurrentServerId
	unsigned long                                      bDisableCrossPlay : 1;                                     // 0x0118(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_34H8[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PartyID;                                                   // 0x0120(0x0010) (NeedCtorLink)
	TArray<struct FUniqueNetId>                        PartyMembers;                                              // 0x0130(0x0010) (NeedCtorLink)
	float                                              BannedSecondsRemaining;                                    // 0x0140(0x0004) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_StartMatchmaking_X");
		return ptr;
	}



	class URPC_StartMatchmaking_X* SetIgnoreSkill(bool bInIgnoreSkill);
	class URPC_StartMatchmaking_X* SetPartyId(const struct FString& InPartyId);
	class URPC_StartMatchmaking_X* SetPartyMembers(TArray<struct FUniqueNetId> InPartyMembers);
	class URPC_StartMatchmaking_X* SetDisableCrossPlay(bool bInDisableCrossplay);
	class URPC_StartMatchmaking_X* SetCurrentServerID();
	class URPC_StartMatchmaking_X* SetSecondsSearching(int InSecondsSearching);
	class URPC_StartMatchmaking_X* SetPlaylists(TArray<int> InPlaylists);
	class URPC_StartMatchmaking_X* SetRegions(TArray<struct FString> InRegions);
};

// Class ProjectX.Parties_X
// 0x02B8 (FullSize[0x0318] - InheritedSize[0x0060])
class UParties_X : public UObject
{
public:
	struct FActiveLobbyInfo                            ActiveLobby;                                               // 0x0060(0x0030) (NeedCtorLink, ProtectedWrite)
	struct FUniqueLobbyId                              LastActiveLobby;                                           // 0x0090(0x0010) (PrivateWrite)
	struct FUniqueNetId                                PartyLeaderID;                                             // 0x00A0(0x0048) (NeedCtorLink, PrivateWrite)
	class UPsyNet_X*                                   PsyNet;                                                    // 0x00E8(0x0008)
	class UOnlineGameParty_X*                          OnlineGameParty;                                           // 0x00F0(0x0008)
	class UPartyMessageQueue_X*                        MessageQueue;                                              // 0x00F8(0x0008) (Edit, ExportObject, Component, EditInline)
	class UPsyNetConnection_X*                         PsyNetConnection;                                          // 0x0100(0x0008) (PrivateWrite)
	class UPsyNetChannel_X*                            PsyNetChannel;                                             // 0x0108(0x0008) (PrivateWrite)
	class UPsyNetServiceSubscriptions_X*               Subscriptions;                                             // 0x0110(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class UPartyPlatformSession_X*                     PlatformSession;                                           // 0x0118(0x0008) (PrivateWrite)
	class UPartySequence_CreateParty_X*                SequenceCreateParty;                                       // 0x0120(0x0008) (PrivateWrite)
	class UPartySequence_JoinParty_X*                  SequenceJoinParty;                                         // 0x0128(0x0008) (PrivateWrite)
	class UPartySequence_LeaveParty_X*                 SequenceLeaveParty;                                        // 0x0130(0x0008) (PrivateWrite)
	class UPartySequence_InviteToParty_X*              SequenceInviteToParty;                                     // 0x0138(0x0008) (PrivateWrite)
	unsigned long                                      bRejoiningParty : 1;                                       // 0x0140(0x0001) BIT_FIELD
	float                                              SecondToWaitForPerConReconnect;                            // 0x0144(0x0004) (Edit)
	struct FString                                     PartySetting_PsyNetPartyId;                                // 0x0148(0x0010) (Edit, NeedCtorLink)
	struct FString                                     PartySetting_JoinKey;                                      // 0x0158(0x0010) (Edit, NeedCtorLink)
	struct FScriptDelegate                             __EventShowInviteUI__Delegate;                             // 0x0168(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_W9LB[0xC];                                     // 0x0168(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventLobbyInviteComplete__Delegate;                      // 0x0180(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_MLSV[0xC];                                     // 0x0180(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnCreateLobbyComplete__Delegate;                         // 0x0198(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_2E8W[0xC];                                     // 0x0198(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbyError__Delegate;                                  // 0x01B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_KWNW[0xC];                                     // 0x01B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbySessionCreated__Delegate;                         // 0x01C8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_LQX1[0xC];                                     // 0x01C8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFindLobbiesComplete__Delegate;                         // 0x01E0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_I9LL[0xC];                                     // 0x01E0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnJoinLobbyComplete__Delegate;                           // 0x01F8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_FPBA[0xC];                                     // 0x01F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbySettingsUpdate__Delegate;                         // 0x0210(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_XXMD[0xC];                                     // 0x0210(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbyMemberSettingsUpdate__Delegate;                   // 0x0228(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_HXL4[0xC];                                     // 0x0228(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbyMemberStatusUpdate__Delegate;                     // 0x0240(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_EA9O[0xC];                                     // 0x0240(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbyReceiveMessage__Delegate;                         // 0x0258(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_ZPQY[0xC];                                     // 0x0258(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbyReceiveBinaryData__Delegate;                      // 0x0270(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_KBJQ[0xC];                                     // 0x0270(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbyJoinGame__Delegate;                               // 0x0288(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_YLDU[0xC];                                     // 0x0288(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbyInvite__Delegate;                                 // 0x02A0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_GILX[0xC];                                     // 0x02A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventLobbyInvitePending__Delegate;                       // 0x02B8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_XA66[0xC];                                     // 0x02B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbyDestroyed__Delegate;                              // 0x02D0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_JR8F[0xC];                                     // 0x02D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPartyChatRecieved__Delegate;                        // 0x02E8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_25PX[0xC];                                     // 0x02E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnHostStartPlayTogether__Delegate;                       // 0x0300(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_KSSL[0xC];                                     // 0x0300(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Parties_X");
		return ptr;
	}



	void __Parties_X__CreateLobby_2E42106C45818784B5927895805B96C6(class UError* Error, struct FUniqueLobbyId* StructInitializer_C7779DF24004822B340E1B99B1F3CB08);
	void __Parties_X__HandlePsyNetPartyJoined_655B33B54B4FC3C95939ECA4D8625B62(const struct FPsyNetPartyMember& Member);
	void __Parties_X__SetLobbyOwner_976A154A4432B9C6D5AEA4801775ACD8(class URPC_PartyChangeOwner_X* RPC);
	void HandlePsyNetPartyInviteAccepted(const struct FString& PartyID, struct FUniqueNetId* StructInitializer_AE1735DB437A1FA9D86EB7966F89C089);
	struct FString GetPsyNetPartyID();
	struct FUniqueNetId FindPartyLeaderID(TArray<struct FPsyNetPartyMember>* Members, struct FUniqueNetId* StructInitializer_2A04F5B94A31153386BBD49B4FB091F9);
	void HandleOwnerChanged(class UPsyNetService_PartyOwnerChanged_X* Notification);
	void HandleChatNotification(class UPsyNetService_PartyChat_X* Notifications);
	void HandleSystemNotification(class UPsyNetService_PartySystem_X* Notifications);
	void HandleUserKicked(class UPsyNetService_PartyUserKicked_X* Notification);
	void HandleUserDisconnected(class UPsyNetService_PartyUserDisconnected_X* Notification);
	void HandleUserLeft(class UPsyNetService_PartyUserLeft_X* Notification);
	void HandleUserJoined(class UPsyNetService_PartyUserJoined_X* Notification);
	void HandleMemberStatusUpdate(const struct FUniqueNetId& MemberUID, const struct FString& Status);
	void HandleUserInvitedResponse(const struct FUniqueLobbyId& LobbyId, const struct FUniqueNetId& ForUserId, bool bAccepted);
	void HandleUserInvited(class UPsyNetService_PartyUserInvited_X* Notifications);
	void SetRejoiningParty(bool bRejoining);
	void HandleChannelClosed(class UPsyNetChannel_X* InChannel);
	class UPsyNetChannel_X* CreatePsyNetChannel(const struct FUniqueLobbyId& PsyNetPartyId);
	void SetPsyNetSubscriptions(class UPsyNetServiceSubscriptions_X* InSubscriptions);
	void SetPsyNetChannel(class UPsyNetChannel_X* InChannel);
	void TimeoutPerconReconnect();
	void SetPsyNetConnection(class UPsyNetConnection_X* InConnection);
	void ClearLobbyData(struct FActiveLobbyInfo* StructInitializer_85B481FC4F5509099449E3B6B34E289A);
	void DestroyLobby(TEnumAsByte<Engine_ELobbyKickReason> Reason);
	void HandlePerConDisconnected(class UPsyNetConnection_X* Connection);
	void HandlePerConConnected(class UPsyNetConnection_X* Connection);
	void HandlePartyInfoFail(class URPC_X* RPC);
	void HandlePartyInfoSuccess(class URPC_PartyInfo_X* RPC_PartyInfo);
	void GetPartyInfo();
	class UOnlinePlayer_X* GetPrimaryPlayer();
	bool IsInLobby();
	struct FUniqueLobbyId CreatePsyNetPartyID(const struct FString& S, struct FUniqueLobbyId* StructInitializer_502EEADE4A8FCBFAD50B18A2ED597774);
	void ClearHostStartPlayTogetherDelegate(const struct FScriptDelegate& InDelegate);
	void AddHostStartPlayTogetherDelegate(const struct FScriptDelegate& InDelegate);
	void OnHostStartPlayTogether(unsigned char LocalUserNum);
	int FindMemberId(struct FLobbyMember* MemberData);
	int PlayerIdToMemberId(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID, int* MemberIndex);
	struct FUniqueNetId MemberIdToPlayerId(struct FUniqueLobbyId* LobbyId, int MemberId, int* MemberIndex);
	bool KickPlayer(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID, TEnumAsByte<Engine_ELobbyKickReason> Reason);
	bool ShowInviteUI(unsigned char LocalUserNum, struct FUniqueLobbyId* LobbyId);
	bool InviteToPsyNetLobbyExclusively(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID);
	bool InviteToLobby(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID);
	bool CanInviteToLobby(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID);
	bool InviteToActiveLobby(struct FUniqueNetId* PlayerID);
	bool SetLobbyOwner(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* NewOwnerId);
	bool SetLobbyLock(struct FUniqueLobbyId* LobbyId, bool bLocked);
	bool SetLobbyType(struct FUniqueLobbyId* LobbyId, TEnumAsByte<Engine_ELobbyVisibility> Type);
	bool SetLobbyServer(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* ServerUID, const struct FString& ServerIP);
	bool RemoveLobbySetting(struct FUniqueLobbyId* LobbyId, const struct FString& Key);
	bool SetLobbySetting(struct FUniqueLobbyId* LobbyId, const struct FString& Key, const struct FString& Value);
	bool GetLobbyAdmin(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* AdminId);
	bool SendLobbyBinaryData(struct FUniqueLobbyId* LobbyId, TArray<unsigned char>* Data);
	bool SendLobbyMessage(struct FUniqueLobbyId* LobbyId, const struct FString& Message);
	bool SetLobbyUserSetting(struct FUniqueLobbyId* LobbyId, const struct FString& Key, const struct FString& Value);
	bool LeaveLobby(struct FUniqueLobbyId* LobbyId);
	void RemoveLobbyMember(const struct FUniqueNetId& PlayerUID);
	void AddLobbyMember(const struct FUniqueNetId& PlayerUID, const struct FString& Username, struct FLobbyMember* StructInitializer_57C9118742D645E2D55B2FAE38624B33);
	void HandleLobbyJoinFailed(class UError* InError, struct FActiveLobbyInfo* StructInitializer_D7F2E69A456917572016C3BB0630D08A, struct FUniqueLobbyId* StructInitializer_48BDD5AF4223CA92CD10CEAF25340EF7);
	void HandlePsyNetPartyJoined(const struct FUniqueLobbyId& PsyNetPartyId, TArray<struct FPsyNetPartyMember>* Members);
	void HandlePsyNetPartyCreated(const struct FUniqueLobbyId& PsyNetPartyId, TArray<struct FPsyNetPartyMember>* Members);
	bool JoinLobbyWithKey(const struct FString& PsyNetPartyId, const struct FString& JoinKey);
	bool JoinLobby(int LocalPlayerNum, struct FUniqueLobbyId* LobbyId);
	bool UpdateFoundLobbies(const struct FUniqueLobbyId& LobbyId);
	int FindMemberIndex(const struct FUniqueNetId& MemberId);
	bool FindLobbies(int MaxResults, TArray<struct FLobbyFilter> Filters, TArray<struct FLobbySortFilter> SortFilters, int MinSlots, TEnumAsByte<Engine_ELobbyDistance> Distance);
	bool CreateLobby(int LocalPlayerNum, int MaxPlayers, TEnumAsByte<Engine_ELobbyVisibility> Type, TArray<struct FLobbyMetaData> InitialSettings);
	void EventPartyChatRecieved(const struct FUniqueNetId& PlayerID, const struct FString& Text);
	void ClearLobbyDestroyedDelegate(const struct FScriptDelegate& LobbyDestroyedDelegate);
	void AddLobbyDestroyedDelegate(const struct FScriptDelegate& LobbyDestroyedDelegate);
	void OnLobbyDestroyed(struct FUniqueLobbyId* LobbyId, TEnumAsByte<Engine_ELobbyKickReason> Reason);
	void RemoveLocalPlayerFromSession(struct FUniqueNetId* PartyMember);
	void AddLocalPartyMemberToSession(struct FUniqueNetId* NewPartyMember);
	bool GetLobbyMembers(struct FUniqueLobbyId* LobbyId, TArray<struct FLobbyMember>* Members);
	void EventLobbyInvitePending(const struct FUniqueLobbyId& LobbyId, const struct FUniqueNetId& FromUserId, const struct FString& FromUserName);
	void ClearLobbyInviteDelegate(const struct FScriptDelegate& LobbyInviteDelegate);
	void AddLobbyInviteDelegate(const struct FScriptDelegate& LobbyInviteDelegate);
	void OnLobbyInvite(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* FriendId, bool bAccepted);
	void ClearLobbyJoinGameDelegate(const struct FScriptDelegate& LobbyJoinGameDelegate);
	void AddLobbyJoinGameDelegate(const struct FScriptDelegate& LobbyJoinGameDelegate);
	void OnLobbyJoinGame(struct FActiveLobbyInfo* LobbyInfo, struct FUniqueNetId* ServerId, const struct FString& ServerIP);
	void TriggerLobbyReceiveBinaryDataDelegate(int MemberIndex, TArray<unsigned char> Data);
	void ClearLobbyReceiveBinaryDataDelegate(const struct FScriptDelegate& LobbyReceiveBinaryDataDelegate);
	void AddLobbyReceiveBinaryDataDelegate(const struct FScriptDelegate& LobbyReceiveBinaryDataDelegate);
	void OnLobbyReceiveBinaryData(struct FActiveLobbyInfo* LobbyInfo, int MemberIndex, TArray<unsigned char>* Data);
	void ClearLobbyReceiveMessageDelegate(const struct FScriptDelegate& LobbyReceiveMessageDelegate);
	void AddLobbyReceiveMessageDelegate(const struct FScriptDelegate& LobbyReceiveMessageDelegate);
	void OnLobbyReceiveMessage(struct FActiveLobbyInfo* LobbyInfo, int MemberIndex, const struct FString& Type, const struct FString& Message);
	void ClearLobbyMemberStatusUpdateDelegate(const struct FScriptDelegate& LobbyMemberStatusUpdateDelegate);
	void AddLobbyMemberStatusUpdateDelegate(const struct FScriptDelegate& LobbyMemberStatusUpdateDelegate);
	void TriggerLobbyMemberStatusUpdateDelegates(int MemberIndex, int InstigatorIndex, const struct FString& Status);
	void OnLobbyMemberStatusUpdate(struct FActiveLobbyInfo* LobbyInfo, int MemberIndex, int InstigatorIndex, const struct FString& Status);
	void ClearLobbyMemberSettingsUpdateDelegate(const struct FScriptDelegate& LobbyMemberSettingsUpdateDelegate);
	void AddLobbyMemberSettingsUpdateDelegate(const struct FScriptDelegate& LobbyMemberSettingsUpdateDelegate);
	void OnLobbyMemberSettingsUpdate(struct FActiveLobbyInfo* LobbyInfo, int MemberIndex);
	void ClearLobbySettingsUpdateDelegate(const struct FScriptDelegate& LobbySettingsUpdateDelegate);
	void AddLobbySettingsUpdateDelegate(const struct FScriptDelegate& LobbySettingsUpdateDelegate);
	void OnLobbySettingsUpdate(struct FActiveLobbyInfo* LobbyInfo);
	void ClearJoinLobbyCompleteDelegate(const struct FScriptDelegate& JoinLobbyCompleteDelegate);
	void AddJoinLobbyCompleteDelegate(const struct FScriptDelegate& JoinLobbyCompleteDelegate);
	void OnJoinLobbyComplete(bool bWasSuccessful, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* LobbyId, const struct FString& Error);
	void ClearFindLobbiesCompleteDelegate(const struct FScriptDelegate& FindLobbiesCompleteDelegate);
	void AddFindLobbiesCompleteDelegate(const struct FScriptDelegate& FindLobbiesCompleteDelegate);
	void OnFindLobbiesComplete(bool bWasSuccessful, TArray<struct FBasicLobbyInfo>* LobbyList);
	void ClearLobbySessionCreatedDelegate(const struct FScriptDelegate& LobbySessionCreatedDelegate);
	void AddLobbySessionCreatedDelegate(const struct FScriptDelegate& LobbySessionCreatedDelegate);
	void OnLobbySessionCreated();
	void ClearLobbyErrorDelegate(const struct FScriptDelegate& LobbyErrorDelegate);
	void AddLobbyErrorDelegate(const struct FScriptDelegate& LobbyErrorDelegate);
	void OnLobbyError(const struct FString& Error);
	void ClearCreateLobbyCompleteDelegate(const struct FScriptDelegate& CreateLobbyCompleteDelegate);
	void AddCreateLobbyCompleteDelegate(const struct FScriptDelegate& CreateLobbyCompleteDelegate);
	void OnCreateLobbyComplete(bool bWasSuccessful, struct FUniqueLobbyId* LobbyId, const struct FString& Error);
	void OnExit();
	void Init();
	void Construct();
	void EventLobbyInviteComplete(bool bSucceeded, const struct FUniqueNetId& InviteeID, const struct FString& Error);
	void EventShowInviteUI();
};

// Class ProjectX.OnlineMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UOnlineMessage_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineMessage_X");
		return ptr;
	}



};

// Class ProjectX.PartyMessage_X
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class UPartyMessage_X : public UOnlineMessage_X
{
public:
	struct FUniqueNetId                                Sender;                                                    // 0x0060(0x0048) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_X");
		return ptr;
	}



	bool BroadcastOn(const struct FUniqueLobbyId& LobbyId);
	bool Broadcast();
};

// Class ProjectX.PartyMessage_SearchStatus_X
// 0x000C (FullSize[0x00B4] - InheritedSize[0x00A8])
class UPartyMessage_SearchStatus_X : public UPartyMessage_X
{
public:
	struct FName                                       SearchState;                                               // 0x00A8(0x0008)
	unsigned long                                      bIsSearching : 1;                                          // 0x00B0(0x0001) BIT_FIELD


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_SearchStatus_X");
		return ptr;
	}



	class UPartyMessage_SearchStatus_X* SetIsSearching(bool bValue);
	class UPartyMessage_SearchStatus_X* SetSearchState(const struct FName& InSearchState);
};

// Class ProjectX.PartyMessage_LobbySettings_X
// 0x0004 (FullSize[0x00AC] - InheritedSize[0x00A8])
class UPartyMessage_LobbySettings_X : public UPartyMessage_X
{
public:
	int                                                BuildID;                                                   // 0x00A8(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_LobbySettings_X");
		return ptr;
	}



	class UPartyMessage_LobbySettings_X* SetBuildID(int InBuildID);
};

// Class ProjectX.PartyMessage_Kick_X
// 0x0049 (FullSize[0x00F1] - InheritedSize[0x00A8])
class UPartyMessage_Kick_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                KickPlayer;                                                // 0x00A8(0x0048) (NeedCtorLink)
	TEnumAsByte<Engine_ELobbyKickReason>               KickReason;                                                // 0x00F0(0x0001)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_Kick_X");
		return ptr;
	}



	class UPartyMessage_Kick_X* SetReason(TEnumAsByte<Engine_ELobbyKickReason> InKickReason);
	class UPartyMessage_Kick_X* SetKicked(const struct FUniqueNetId& InPlayer);
};

// Class ProjectX.PartyMessage_LocalPlayers_X
// 0x0058 (FullSize[0x0100] - InheritedSize[0x00A8])
class UPartyMessage_LocalPlayers_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                PrimaryMemberId;                                           // 0x00A8(0x0048) (NeedCtorLink)
	TArray<struct FSimplePartyMember>                  Members;                                                   // 0x00F0(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_LocalPlayers_X");
		return ptr;
	}



	void AddMember(const struct FPartyMember& Member);
	class UPartyMessage_LocalPlayers_X* AddPlayer(const struct FUniqueNetId& PlayerID, const struct FString& PlayerName);
	class UPartyMessage_LocalPlayers_X* AddOnlinePlayer(class UOnlinePlayer_X* Player);
	class UPartyMessage_LocalPlayers_X* SetPrimaryMemberId(const struct FUniqueNetId& InPrimaryMemberId);
	class UPartyMessage_LocalPlayers_X* AddOnlinePlayers();
};

// Class ProjectX.PartyMessage_MatchmakingAvailability_X
// 0x0004 (FullSize[0x00AC] - InheritedSize[0x00A8])
class UPartyMessage_MatchmakingAvailability_X : public UPartyMessage_X
{
public:
	int                                                MatchmakeRestrictions;                                     // 0x00A8(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_MatchmakingAvailability_X");
		return ptr;
	}



	class UPartyMessage_MatchmakingAvailability_X* SetMatchmakeRestrictions(int InRestrictions);
};

// Class ProjectX.PartyMessage_JoinGame_X
// 0x0068 (FullSize[0x0110] - InheritedSize[0x00A8])
class UPartyMessage_JoinGame_X : public UPartyMessage_X
{
public:
	struct FPartyJoinMatchSettings                     Settings;                                                  // 0x00A8(0x0068) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_JoinGame_X");
		return ptr;
	}



	class UPartyMessage_JoinGame_X* SetSettings(struct FPartyJoinMatchSettings* InSettings);
};

// Class ProjectX.PartyMessage_InviteToTrade_X
// 0x0048 (FullSize[0x00F0] - InheritedSize[0x00A8])
class UPartyMessage_InviteToTrade_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                InviteMemberId;                                            // 0x00A8(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_InviteToTrade_X");
		return ptr;
	}



	class UPartyMessage_InviteToTrade_X* SetInviteMemberId(const struct FUniqueNetId& InMemberId);
};

// Class ProjectX.PartyMessage_ReadyToConfirmTrade_X
// 0x0048 (FullSize[0x00F0] - InheritedSize[0x00A8])
class UPartyMessage_ReadyToConfirmTrade_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                TradingMemberId;                                           // 0x00A8(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_ReadyToConfirmTrade_X");
		return ptr;
	}



	class UPartyMessage_ReadyToConfirmTrade_X* SetTradingMemberId(const struct FUniqueNetId& InTradingMemberId);
};

// Class ProjectX.PartyMessage_ReadyToLockTrade_X
// 0x004C (FullSize[0x00F4] - InheritedSize[0x00A8])
class UPartyMessage_ReadyToLockTrade_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                TradingMemberId;                                           // 0x00A8(0x0048) (NeedCtorLink)
	unsigned long                                      bReady : 1;                                                // 0x00F0(0x0001) BIT_FIELD


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_ReadyToLockTrade_X");
		return ptr;
	}



	class UPartyMessage_ReadyToLockTrade_X* SetReadyToTrade(bool bInReadyToTrade);
	class UPartyMessage_ReadyToLockTrade_X* SetTradingMemberId(const struct FUniqueNetId& InTradingMemberId);
};

// Class ProjectX.OnlinePlayerRegionRestrictions_X
// 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
class UOnlinePlayerRegionRestrictions_X : public UOnline_X
{
public:
	TArray<TEnumAsByte<ProjectX_ERegionRestriction>>   Restrictions;                                              // 0x0098(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayerRegionRestrictions_X");
		return ptr;
	}



	TEnumAsByte<ProjectX_ERegionRestriction> __OnlinePlayerRegionRestrictions_X__HandleLoginChanged_2FCDB0BE44E3AC3D1817E4A3AAAFBE39(const struct FName& S);
	bool IsRestricted(TEnumAsByte<ProjectX_ERegionRestriction> Restriction);
	void HandleLoginChanged(class UOnlinePlayerAuthentication_X* Auth, TArray<TEnumAsByte<ProjectX_ERegionRestriction>>* MapLocal_2EEA001F41B79986317F499868D0435A);
	void OnExit();
	void OnInit();
};

// Class ProjectX.PartyMessage_InviteToTradeError_X
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UPartyMessage_InviteToTradeError_X : public UPartyMessage_X
{
public:
	struct FName                                       ErrorTypeName;                                             // 0x00A8(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_InviteToTradeError_X");
		return ptr;
	}



	class UPartyMessage_InviteToTradeError_X* SetError(class UErrorType* Type);
};

// Class ProjectX.__OnlineGameParty_X__HandleConfirmJoinGame_ConnectionValid_82C85BBD46BB03BD62DDE0B9719F4F60
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class U__OnlineGameParty_X__HandleConfirmJoinGame_ConnectionValid_82C85BBD46BB03BD62DDE0B9719F4F60 : public UObject
{
public:
	struct FJoinMatchSettings                          Settings;                                                  // 0x0060(0x0020) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameParty_X__HandleConfirmJoinGame_ConnectionValid_82C85BBD46BB03BD62DDE0B9719F4F60");
		return ptr;
	}



	void __OnlineGameParty_X__HandleConfirmJoinGame_ConnectionValid_82C85BBD46BB03BD62DDE0B9719F4F60(const struct FServerReservationData& Reservation);
};

// Class ProjectX.__OnlineGameParty_X__CreatePartyInternal_865BEC404D738CE4F20EA3B9EA85C33B
// 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
class U__OnlineGameParty_X__CreatePartyInternal_865BEC404D738CE4F20EA3B9EA85C33B : public UObject
{
public:
	unsigned char                                      LobbyInterface[0x10];                                      // 0x0060(0x0010) UNKNOWN PROPERTY: InterfaceProperty ProjectX.__OnlineGameParty_X__CreatePartyInternal_865BEC404D738CE4F20EA3B9EA85C33B.LobbyInterface
	int                                                LocalPlayerNum;                                            // 0x0070(0x0004)
	unsigned char                                      UnknownData_ARDW[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             Handler;                                                   // 0x0078(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_848S[0xC];                                     // 0x0074(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameParty_X__CreatePartyInternal_865BEC404D738CE4F20EA3B9EA85C33B");
		return ptr;
	}



	void __OnlineGameParty_X__CreatePartyInternal_865BEC404D738CE4F20EA3B9EA85C33B(class UError* ConnectionError);
};

// Class ProjectX.PartySequence_InvitedToPsyNetParty_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPartySequence_InvitedToPsyNetParty_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartySequence_InvitedToPsyNetParty_X");
		return ptr;
	}



	void JoinPsyNetPartyCallback(int LocalPlayerNum, struct FUniqueLobbyId* InLobbyId);
	class UAsyncTask* HandlePlayerInvited(struct FUniqueLobbyId* InLobbyId, struct FUniqueNetId* InviterId, bool bAccepted);
	void HandlePlayerInvitedPrompt(struct FUniqueLobbyId* InLobbyId, struct FUniqueNetId* InviterId, bool bAccepted);
	void HandlePlayerInvitedSilent(struct FUniqueLobbyId* InLobbyId, struct FUniqueNetId* InviterId);
	void Init();
};

// Class ProjectX.PartySequence_InvitedToPlatformParty_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPartySequence_InvitedToPlatformParty_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartySequence_InvitedToPlatformParty_X");
		return ptr;
	}



	void HandleJoinPlatformLobby(bool bWasSuccessful, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* LobbyUID, const struct FString& Error);
	void JoinPlatformPartyCallback(int LocalPlayerNum, struct FUniqueLobbyId* InLobbyId);
	void HandlePlayerInvited(struct FUniqueLobbyId* InLobbyId, struct FUniqueNetId* FriendId, bool bAccepted);
	void Init();
};

// Class ProjectX.PartySequence_PsyNetPartyUpgrade_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPartySequence_PsyNetPartyUpgrade_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartySequence_PsyNetPartyUpgrade_X");
		return ptr;
	}



	void HandleJoinPsyNetLobby(bool bWasSuccessful, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* LobbyUID, const struct FString& Error);
	void TryUpgrade(struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* PlatformLobbyUID);
};

// Class ProjectX.RankedConfig_X
// 0x0048 (FullSize[0x00C0] - InheritedSize[0x0078])
class URankedConfig_X : public UOnlineConfig_X
{
public:
	int                                                ReconnectTimeoutSeconds;                                   // 0x0078(0x0004) (Edit)
	unsigned char                                      UnknownData_VH1Q[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        SkillTierToSeasonRewardLevel;                              // 0x0080(0x0010) (Edit, NeedCtorLink)
	TArray<int>                                        SeasonRewardRequiredWinsPerLevel;                          // 0x0090(0x0010) (Edit, NeedCtorLink)
	unsigned long                                      bCheckReservationID : 1;                                   // 0x00A0(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData_TGLN[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      SeasonEndTimeSeconds[0x8];                                 // 0x00A4(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RankedConfig_X.SeasonEndTimeSeconds
	int                                                MaximumRankDisparity;                                      // 0x00B0(0x0004) (Edit)
	int                                                PlacementMatchesNeededToReceiveRank;                       // 0x00B4(0x0004) (Edit)
	int                                                HighestTierNewPlayersCanPlayWith;                          // 0x00B8(0x0004) (Edit)
	int                                                HighestMuNewPlayersCanHave;                                // 0x00BC(0x0004) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RankedConfig_X");
		return ptr;
	}



	bool HasSeasonEnded();
	int GetSeasonTimeRemaining();
};

// Class ProjectX.DownloadedPlaylistsData_X
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UDownloadedPlaylistsData_X : public UObject
{
public:
	TArray<class UGameSettingPlaylist_X*>              Playlists;                                                 // 0x0060(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DownloadedPlaylistsData_X");
		return ptr;
	}



};

// Class ProjectX.IOnlineGamePlaylists_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UIOnlineGamePlaylists_X : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.IOnlineGamePlaylists_X");
		return ptr;
	}



	bool IsNonStandardPlaylistName(const struct FName& PlaylistName);
	bool IsStandardPlaylistName(const struct FName& PlaylistName);
	bool IsUnrankedPlaylistName(const struct FName& PlaylistName);
	bool IsRankedPlaylistName(const struct FName& PlaylistName);
	struct FName IdToName(int PlaylistId);
	int NameToId(const struct FName& PlaylistName);
	TArray<struct FName> GetAccessiblePlaylists(TArray<struct FName>* SelectedPlaylists);
};

// Class ProjectX.RPC_PlayerSearchPrivateMatch_X
// 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
class URPC_PlayerSearchPrivateMatch_X : public URPC_X
{
public:
	struct FString                                     Region;                                                    // 0x00E8(0x0010) (NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PlayerSearchPrivateMatch_X");
		return ptr;
	}



	class URPC_PlayerSearchPrivateMatch_X* SetRegion(const struct FString& InRegion);
};

// Class ProjectX.RPC_PlayerCancelPrivateMatch_X
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class URPC_PlayerCancelPrivateMatch_X : public URPC_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PlayerCancelPrivateMatch_X");
		return ptr;
	}



};

// Class ProjectX.RegionPingMessage_X
// 0x0004 (FullSize[0x0064] - InheritedSize[0x0060])
class URegionPingMessage_X : public UObject
{
public:
	unsigned long                                      bIsResponse : 1;                                           // 0x0060(0x0001) BIT_FIELD


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RegionPingMessage_X");
		return ptr;
	}



	class URegionPingMessage_X* SetIsResponse();
};

// Class ProjectX.RegionPingData_X
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class URegionPingData_X : public UObject
{
public:
	struct FName                                       Address;                                                   // 0x0060(0x0008)
	int                                                PingsSent;                                                 // 0x0068(0x0004)
	int                                                PingsReceived;                                             // 0x006C(0x0004)
	float                                              LowestPing;                                                // 0x0070(0x0004)
	float                                              LastSendTime;                                              // 0x0074(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RegionPingData_X");
		return ptr;
	}



};

// Class ProjectX.RegionPinger_X
// 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
class URegionPinger_X : public UComponent
{
public:
	float                                              MaxPing;                                                   // 0x0070(0x0004) (Edit)
	int                                                PingsPerRegion;                                            // 0x0074(0x0004) (Edit)
	float                                              DelayBetweenPings;                                         // 0x0078(0x0004) (Edit)
	unsigned char                                      UnknownData_JV4J[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class URegionPingData_X*>                   ActivePings;                                               // 0x0080(0x0010) (NeedCtorLink)
	class UUdpPingBeaconClient_X*                      PingBeacon;                                                // 0x0090(0x0008) (ExportObject, Component, EditInline)
	int                                                TickIndex;                                                 // 0x0098(0x0004)
	unsigned char                                      UnknownData_PZO5[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class URegionPingData_X*>                   PingResults;                                               // 0x00A0(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __EventRegionsPinged__Delegate;                            // 0x00B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_GAUR[0xC];                                     // 0x00B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RegionPinger_X");
		return ptr;
	}



	class URegionPingData_X* __RegionPinger_X__PingRegions_BA317C674D3430007E0238B170D8B7AE(const struct FString& Address, class URegionPingData_X** ObjectInitializer_902244A843BE2160C192238942055D9E);
	void HandlePong(class UUdpPingBeaconClient_X* _, const struct FName& Address, float DeltaSeconds);
	void SendPing(int Idx);
	void Tick(float _);
	void StopPingBeacon();
	void StartPingBeacon();
	void PingRegions(TArray<struct FString>* Addresses, TArray<class URegionPingData_X*>* MapLocal_652261014D343AD76B9F5AA93202A435);
	void EventRegionsPinged(class URegionPinger_X* Pinger);
};

// Class ProjectX.OnlineGameReservations_AssignTeamsByParty_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UOnlineGameReservations_AssignTeamsByParty_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameReservations_AssignTeamsByParty_X");
		return ptr;
	}



	int PartySort(const struct FPartyByTeam& Left, const struct FPartyByTeam& Right);
	void AssignTeams(int TeamSize, TArray<struct FReservationData>* TestPlayers);
};

// Class ProjectX.PsyNetService_NewGame_X
// 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
class UPsyNetService_NewGame_X : public UPsyNetService_ReservationBase_X
{
public:
	int                                                Playlist;                                                  // 0x00B0(0x0004)
	unsigned long                                      IsBotMatch : 1;                                            // 0x00B4(0x0001) BIT_FIELD
	TArray<struct FString>                             BotNames;                                                  // 0x00B8(0x0010) (NeedCtorLink)
	TArray<struct FPsyNetBeaconPartyReservation>       Parties;                                                   // 0x00C8(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_NewGame_X");
		return ptr;
	}



	struct FPsyNetBeaconReservation GetReservation();
};

// Class ProjectX.__EpicLogin_X__TriggerAuthTicketDelegate_0EE3E61E463B5FC3E7CEC290CE46980F
// 0x0060 (FullSize[0x00C0] - InheritedSize[0x0060])
class U__EpicLogin_X__TriggerAuthTicketDelegate_0EE3E61E463B5FC3E7CEC290CE46980F : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_U0N0[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FUniqueNetId                                NetId;                                                     // 0x0078(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__EpicLogin_X__TriggerAuthTicketDelegate_0EE3E61E463B5FC3E7CEC290CE46980F");
		return ptr;
	}



	void __EpicLogin_X__TriggerAuthTicketDelegate_0EE3E61E463B5FC3E7CEC290CE46980F(bool bSuccess, const struct FString& AuthTicket);
};

// Class ProjectX.__EpicLogin_X__HandleLoginChanged_B081173F4E7FD69131C45B8429CB9248
// 0x0001 (FullSize[0x0061] - InheritedSize[0x0060])
class U__EpicLogin_X__HandleLoginChanged_B081173F4E7FD69131C45B8429CB9248 : public UObject
{
public:
	unsigned char                                      InLocalPlayerNum;                                          // 0x0060(0x0001)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__EpicLogin_X__HandleLoginChanged_B081173F4E7FD69131C45B8429CB9248");
		return ptr;
	}



	void __EpicLogin_X__HandleLoginChanged_B081173F4E7FD69131C45B8429CB9248();
};

// Class ProjectX.__EpicLogin_X__RequestNintendoAccountAuthorization_9923821F440F5498E79C2D848A1D9F8F
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__EpicLogin_X__RequestNintendoAccountAuthorization_9923821F440F5498E79C2D848A1D9F8F : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_TWD1[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__EpicLogin_X__RequestNintendoAccountAuthorization_9923821F440F5498E79C2D848A1D9F8F");
		return ptr;
	}



	void __EpicLogin_X__RequestNintendoAccountAuthorization_9923821F440F5498E79C2D848A1D9F8F(const struct FString& NintendoAccountToken);
};

// Class ProjectX.__EpicLogin_X__UpdateTwoFactorAuthenticationStatus_32B732D047611144492AC78B80CA3D6F
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__EpicLogin_X__UpdateTwoFactorAuthenticationStatus_32B732D047611144492AC78B80CA3D6F : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_DQ13[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__EpicLogin_X__UpdateTwoFactorAuthenticationStatus_32B732D047611144492AC78B80CA3D6F");
		return ptr;
	}



	void ____EpicLogin_X__UpdateTwoFactorAuthenticationStatus_32B732D047611144492AC78B80CA3D6F____EpicLogin_X__UpdateTwoFactorAuthenticationStatus_32B732D047611144492AC78B80CA3D6F_56C2D1C04951FF76024A0A9456BF9F56(const struct FString& Ticket, const struct FString& Id, class UError* Err);
	void __EpicLogin_X__UpdateTwoFactorAuthenticationStatus_32B732D047611144492AC78B80CA3D6F(bool bSuccess, const struct FString& AuthTicket);
};

// Class ProjectX.RPC_GetAntiAddictionData_X
// 0x0050 (FullSize[0x0138] - InheritedSize[0x00E8])
class URPC_GetAntiAddictionData_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x00E8(0x0048) (NeedCtorLink, PrivateWrite)
	unsigned long                                      bUnderAge : 1;                                             // 0x0130(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned long                                      bShowMessage : 1;                                          // 0x0130(0x0001) BIT_FIELD (Transient, PrivateWrite)
	int                                                HoursPlayed;                                               // 0x0134(0x0004) (Transient, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetAntiAddictionData_X");
		return ptr;
	}



	class URPC_GetAntiAddictionData_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX._ReservationTypes_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class U_ReservationTypes_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX._ReservationTypes_X");
		return ptr;
	}



};

// Class ProjectX.BlogConfig_X
// 0x0020 (FullSize[0x0098] - InheritedSize[0x0078])
class UBlogConfig_X : public UOnlineConfig_X
{
public:
	TArray<class UBlogTile_X*>                         Entries;                                                   // 0x0078(0x0010) (NeedCtorLink)
	struct FString                                     MotD;                                                      // 0x0088(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.BlogConfig_X");
		return ptr;
	}



	int __BlogConfig_X__Apply_5E4D9FB1471F7097F7B129BD1C116D07(class UBlogTile_X* L, class UBlogTile_X* R);
	void __BlogConfig_X__Apply_6B4BCA0D49A13536FF8248AE6617EDDB(class UBlogTile_X* X);
	void Apply();
};

// Class ProjectX.EOSMetricsConfig_X
// 0x0014 (FullSize[0x008C] - InheritedSize[0x0078])
class UEOSMetricsConfig_X : public UOnlineConfig_X
{
public:
	struct FString                                     DataRouterURL;                                             // 0x0078(0x0010) (Edit, NeedCtorLink)
	float                                              PingDelayTime;                                             // 0x0088(0x0004) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EOSMetricsConfig_X");
		return ptr;
	}



};

// Class ProjectX.RPC_JoinMatch_X
// 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
class URPC_JoinMatch_X : public URPC_X
{
public:
	struct FName                                       JoinType;                                                  // 0x00E8(0x0008)
	struct FString                                     ServerName;                                                // 0x00F0(0x0010) (NeedCtorLink)
	struct FString                                     Password;                                                  // 0x0100(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_JoinMatch_X");
		return ptr;
	}



};

// Class ProjectX.____OnlinePlayerStorageQueue_X__HandleStorageSuccess_C9FB861E4720BBF9D916E093C6BC4161____OnlinePlayerStorageQueue_X__HandleStorageSuccess_1A8FD8374EFC1B38AAF7D18F6F525C30_9FFA291B49A5A99817A9EAB73E41DC5B
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class U____OnlinePlayerStorageQueue_X__HandleStorageSuccess_C9FB861E4720BBF9D916E093C6BC4161____OnlinePlayerStorageQueue_X__HandleStorageSuccess_1A8FD8374EFC1B38AAF7D18F6F525C30_9FFA291B49A5A99817A9EAB73E41DC5B : public UObject
{
public:
	struct FSetPlayerStorageResultItem                 R;                                                         // 0x0060(0x0010)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.____OnlinePlayerStorageQueue_X__HandleStorageSuccess_C9FB861E4720BBF9D916E093C6BC4161____OnlinePlayerStorageQueue_X__HandleStorageSuccess_1A8FD8374EFC1B38AAF7D18F6F525C30_9FFA291B49A5A99817A9EAB73E41DC5B");
		return ptr;
	}



	bool ____OnlinePlayerStorageQueue_X__HandleStorageSuccess_C9FB861E4720BBF9D916E093C6BC4161____OnlinePlayerStorageQueue_X__HandleStorageSuccess_1A8FD8374EFC1B38AAF7D18F6F525C30_9FFA291B49A5A99817A9EAB73E41DC5B(const struct FPendingStorage& P);
};

// Class ProjectX.AdHocBeacon_X
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UAdHocBeacon_X : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0060(0x0008) (Const, Native, NoExport)
	struct FPointer                                    pAdHoc;                                                    // 0x0068(0x0008) (Const, Native, Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AdHocBeacon_X");
		return ptr;
	}



	int GetNodeCountMax();
	void AdHocJoinMatch();
	void AdHocCreateMatch();
	bool AdHocIsActive();
	void AdHocDisconnectFromAccessPoint();
	void AdHocConnectToAccessPoint(int ScanResultIndex);
	void AdHocScanForAccessPoints();
	void AdHocBecomeStation();
	void AdHocRejectStation(int NetworkNodeIndex);
	void AdHocBecomeAccessPoint();
	void AdHocSetAdvertiseData(const struct FString& AdvertiseData);
	void AdHocDestroy();
	void AdHocCreate();
	void AdHocCreateWithUsername(const struct FString& Username);
	void Construct();
};

// Class ProjectX.EOS_AccountSummaryResponse
// 0x0050 (FullSize[0x00C0] - InheritedSize[0x0070])
class UEOS_AccountSummaryResponse : public UEOS_GetAccountsResponse
{
public:
	TArray<struct FEOSAccountInfo>                     Friends;                                                   // 0x0070(0x0010) (NeedCtorLink)
	TArray<struct FEOSAccountInfo>                     Incoming;                                                  // 0x0080(0x0010) (NeedCtorLink)
	TArray<struct FEOSAccountInfo>                     Outgoing;                                                  // 0x0090(0x0010) (NeedCtorLink)
	TArray<struct FEOSAccountInfo>                     BlockList;                                                 // 0x00A0(0x0010) (NeedCtorLink)
	struct FAccountSettings                            Settings;                                                  // 0x00B0(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EOS_AccountSummaryResponse");
		return ptr;
	}



};

// Class ProjectX.EOS_ManageBlockListResponse
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UEOS_ManageBlockListResponse : public UObject
{
public:
	struct FString                                     AccountId;                                                 // 0x0060(0x0010) (NeedCtorLink)
	struct FString                                     Created;                                                   // 0x0070(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EOS_ManageBlockListResponse");
		return ptr;
	}



};

// Class ProjectX.EOS_ManageFriendsListResponse
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UEOS_ManageFriendsListResponse : public UObject
{
public:
	struct FString                                     Status;                                                    // 0x0060(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EOS_ManageFriendsListResponse");
		return ptr;
	}



};

// Class ProjectX.EOSMetricEvent_X
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UEOSMetricEvent_X : public UObject
{
public:
	struct FName                                       EventName;                                                 // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EOSMetricEvent_X");
		return ptr;
	}



};

// Class ProjectX.EOSMetrics_X
// 0x0058 (FullSize[0x00B8] - InheritedSize[0x0060])
class UEOSMetrics_X : public UObject
{
public:
	class UPsyNet_X*                                   PsyNet;                                                    // 0x0060(0x0008)
	class UEOSMetricsConfig_X*                         EOSMetricsConfig;                                          // 0x0068(0x0008) (Edit)
	class ULocalPlayer_X*                              LocalPlayer;                                               // 0x0070(0x0008) (PrivateWrite)
	unsigned long                                      bCrashing : 1;                                             // 0x0078(0x0001) BIT_FIELD (PrivateWrite)
	unsigned char                                      UnknownData_I7VD[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EMGuid;                                                    // 0x0080(0x0010) (NeedCtorLink, PrivateWrite)
	struct FString                                     QueryParamsTemplate;                                       // 0x0090(0x0010) (NeedCtorLink, PrivateWrite)
	struct FMetricEventJsonStruct                      CurrentEvents;                                             // 0x00A0(0x0010) (NeedCtorLink, PrivateWrite)
	class UEOSMetricEvent_X*                           LatestPresenceEvent;                                       // 0x00B0(0x0008) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EOSMetrics_X");
		return ptr;
	}



	void __EOSMetrics_X__Init_3FB32C6E485507CD09BA72ACA5B5F03A(class UEOSMetricsConfig_X* EpicMetric);
	struct FString GetUserIdNative(const struct FUniqueNetId& LocalId, const struct FString& EpicId);
	void AddPresenceEvent(class UEOSMetricEvent_X* InEvent);
	void AddEvent(class UEOSMetricEvent_X* InEvent);
	void HandleCrash();
	struct FString GetUploadType();
	struct FString GetUserId();
	struct FString GetURL();
	void SendPing();
	void Init(class ULocalPlayer_X* InLocalPlayer);
};

// Class ProjectX.LocalPlayer_X
// 0x0008 (FullSize[0x04D8] - InheritedSize[0x04D0])
class ULocalPlayer_X : public ULocalPlayer
{
public:
	class UOnlinePlayer_X*                             OnlinePlayer;                                              // 0x04D0(0x0008) (Transient, ProtectedWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LocalPlayer_X");
		return ptr;
	}



	bool SpawnPlayActor(const struct FString& URL, struct FString* OutError);
	void NotifyServerConnectionOpen();
	void NotifyOnValidPlayerController(const struct FScriptDelegate& Callback, class UClass* PCClass);
	void OnRemoved();
	void OnCreated();
};

// Class ProjectX.OnlinePlayer_X
// 0x01C0 (FullSize[0x0258] - InheritedSize[0x0098])
class UOnlinePlayer_X : public UOnline_X
{
public:
	class UOnlinePlayerFriends_X*                      Friends;                                                   // 0x0098(0x0008) (Edit, ProtectedWrite)
	class UOnlinePlayerAuthentication_X*               Authentication;                                            // 0x00A0(0x0008) (Edit, PrivateWrite)
	class UPsyNetConnection_X*                         PsyNetConnection;                                          // 0x00A8(0x0008) (Edit, PrivateWrite)
	class UOnlinePlayerStorage_X*                      Storage;                                                   // 0x00B0(0x0008) (Edit, PrivateWrite)
	class UOnlinePlayerRegionRestrictions_X*           RegionRestrictions;                                        // 0x00B8(0x0008) (Edit, PrivateWrite)
	struct FString                                     PlayerName;                                                // 0x00C0(0x0010) (Transient, NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                  // 0x00D0(0x0048) (Transient, NeedCtorLink, ProtectedWrite)
	struct FUniqueNetId                                CleanPlayerID;                                             // 0x0118(0x0048) (Transient, NeedCtorLink, ProtectedWrite)
	TEnumAsByte<Engine_ELoginStatus>                   LoginStatus;                                               // 0x0160(0x0001) (Transient, ProtectedWrite)
	unsigned char                                      UnknownData_CGVC[0x3];                                     // 0x0161(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LocalPlayerNum;                                            // 0x0164(0x0004) (Transient)
	unsigned long                                      bLoggingIn : 1;                                            // 0x0168(0x0001) BIT_FIELD (PrivateWrite)
	unsigned long                                      bLoggingOut : 1;                                           // 0x0168(0x0001) BIT_FIELD (PrivateWrite)
	unsigned char                                      UnknownData_EIP0[0x4];                                     // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UError*                                      LoginError;                                                // 0x0170(0x0008) (Transient, PrivateWrite)
	struct FString                                     CachedEpicID;                                              // 0x0178(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	class UError*                                      LoginStatusError;                                          // 0x0188(0x0008)
	class UError*                                      BannedError;                                               // 0x0190(0x0008)
	struct FScriptDelegate                             __EventLoginComplete__Delegate;                            // 0x0198(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_HV2Y[0xC];                                     // 0x0198(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventLogoutComplete__Delegate;                           // 0x01B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_RIT2[0xC];                                     // 0x01B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventLoginStatusChanged__Delegate;                       // 0x01C8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_KTRO[0xC];                                     // 0x01C8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventCountryUpdated__Delegate;                           // 0x01E0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_SK3Y[0xC];                                     // 0x01E0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventCanPlayOnlineChanged__Delegate;                     // 0x01F8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_E8LJ[0xC];                                     // 0x01F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventShowKeyboardComplete__Delegate;                     // 0x0210(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_V2C3[0xC];                                     // 0x0210(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventOnlineNameChanged__Delegate;                        // 0x0228(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_8RPV[0xC];                                     // 0x0228(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventRemoved__Delegate;                                  // 0x0240(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_1WY0[0xC];                                     // 0x0240(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayer_X");
		return ptr;
	}



	void __OnlinePlayer_X__OnInit_D5F59FF944A64688437D36A3FEA72ECB(class UOnlinePlayerAuthentication_X* _);
	void __OnlinePlayer_X__UpdatePsyNetEnabled_30757D8949EB1113A6CAD884454E178B(class UBanMessage_X* _);
	void GetPlayersLikesDislikes(class UGameSettingPlaylist_X* Playlist, TArray<struct FName>* PlayerLikes, TArray<struct FName>* PlayerDislikes);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool IsGuestAccount();
	void SetPlayerName(const struct FString& InName);
	void UpdateSplitscreenId();
	bool IsUpdateRequired();
	struct FString GetOnlineName();
	struct FString GetLocalName();
	struct FString GetRemoteName(int LocalPlayerIndex);
	void HandleCanPlayOnlineChanged(unsigned char LocalUserNum);
	TEnumAsByte<Engine_EFeaturePrivilegeLevel> CanPlayOnline();
	void HandlePlayerCountryReceived(const struct FUniqueNetId& InPlayerId, const struct FString& Country);
	void GetPlayerCountry(const struct FScriptDelegate& Handler);
	TEnumAsByte<Engine_EFeaturePrivilegeLevel> CanCommunicateText(bool bTryToResolve);
	void OpenErrorDialog(TEnumAsByte<Engine_EPS4ErrorDialog> ErrorCode);
	void OpenPS4DisplayMode(TEnumAsByte<Engine_EPS4DisplayMode> DisplayMode, TArray<struct FString> Targets, int ServiceLabel);
	void ResetControllerColor(int InControllerID);
	void SetControllerColor(int InControllerID, const struct FColor& NewColor);
	void PostActivityFeedMessage(const struct FString& Id, TArray<struct FString> StringReplaceList);
	TArray<unsigned long> GetSyncedAchievements(unsigned char LocalUserNum);
	void UnlockAchievement(unsigned char LocalUserNum, int AchievementId, float PercentComplete);
	void UpdateStat(const struct FName& StatName, int Points);
	void HandleShowKeyboardComplete(bool bWasSuccessful);
	void HideKeyboard();
	bool ShowKeyboard(const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, const struct FString& DefaultText, int MaxLength, const struct FScriptDelegate& OnCompleteDelegate, int LocalPlayerNumOverride);
	void OnNewGame();
	void HandleControllerChange(int InControllerID, bool bIsConnected);
	void HandleUserLoginStatusChange(TEnumAsByte<Engine_ELoginStatus> NewStatus, const struct FUniqueNetId& NewId);
	bool IsLoggedIn(bool bRequireOnlineLogin);
	void HandleLogoutComplete(bool bWasSuccessful);
	void HandleLoginChanged(unsigned char PlayerNum);
	struct FString GetEpicAccountId();
	struct FString GetSanitizedPlayerName();
	void HandleLoginFailed(unsigned char PlayerNum, TEnumAsByte<Engine_EOnlineServerConnectionStatus> ErrorCode);
	void Logout(const struct FScriptDelegate& Callback);
	void Login(const struct FString& LoginName, const struct FString& LoginPassword, const struct FScriptDelegate& Callback);
	void OnRemoved();
	void InitPlayer();
	bool IsPrimaryPlayer();
	void HandlePsyNetDisconnect(class UPsyNetConnection_X* Connection);
	void UpdatePsyNetEnabled();
	void HandleBanned(class UOnlinePlayerAuthentication_X* Auth);
	void HandleAuthLoginChange(class UOnlinePlayerAuthentication_X* Auth);
	void OnInit();
	void Construct();
	class UOnlineGame_X* GetOnlineGame();
	void EventRemoved(class UOnlinePlayer_X* Player);
	void EventOnlineNameChanged(class UOnlinePlayer_X* Player);
	void EventShowKeyboardComplete(const struct FString& NewText, bool bCanceled);
	void EventCanPlayOnlineChanged(class UOnlinePlayer_X* Player);
	void EventCountryUpdated(const struct FString& Country);
	void EventLoginStatusChanged(class UOnlinePlayer_X* Player);
	void EventLogoutComplete(class UOnlinePlayer_X* Player);
	void EventLoginComplete(class UOnlinePlayer_X* Player, class UError* Error);
};

// Class ProjectX.EpicFriendsPlugin_X
// 0x00D8 (FullSize[0x0138] - InheritedSize[0x0060])
class UEpicFriendsPlugin_X : public UObject
{
public:
	struct FString                                     ServerURL;                                                 // 0x0060(0x0010) (NeedCtorLink)
	struct FString                                     ProductionServerURL;                                       // 0x0070(0x0010) (Config, NeedCtorLink)
	struct FString                                     AddFriendURL;                                              // 0x0080(0x0010) (Config, NeedCtorLink)
	struct FString                                     RemoveFriendURL;                                           // 0x0090(0x0010) (Config, NeedCtorLink)
	struct FString                                     OutgoingFriendRequestsURL;                                 // 0x00A0(0x0010) (Config, NeedCtorLink)
	struct FString                                     IncomingFriendRequestsURL;                                 // 0x00B0(0x0010) (Config, NeedCtorLink)
	struct FString                                     BlockPlayerURL;                                            // 0x00C0(0x0010) (Config, NeedCtorLink)
	struct FString                                     BlockListURL;                                              // 0x00D0(0x0010) (Config, NeedCtorLink)
	struct FString                                     AccountSummaryURL;                                         // 0x00E0(0x0010) (Config, NeedCtorLink)
	struct FScriptDelegate                             __HTTPRequestCallback__Delegate;                           // 0x00F0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_B92T[0xC];                                     // 0x00F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __AddFriendCallback__Delegate;                             // 0x0108(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_N06A[0xC];                                     // 0x0108(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __GetOutgoingFriendsCallback__Delegate;                    // 0x0120(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_716L[0xC];                                     // 0x0120(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EpicFriendsPlugin_X");
		return ptr;
	}



	class UError* ConvertError(class UEOS_ErrorResponse* ErrorResponse);
	bool SendHTTPRequest(const struct FString& Verb, const struct FString& URL, bool AddContentTypeHeader, class UClass* ResponseClass, const struct FScriptDelegate& Callback);
	bool GetAccountSummary();
	bool GetOutgoingFriendRequestsWithCustomCallback(const struct FScriptDelegate& Callback);
	bool GetOutgoingFriendRequests();
	bool GetIncomingFriendRequests();
	bool GetBlockList();
	bool Unblock(const struct FUniqueNetId& UserId);
	bool bLock(const struct FUniqueNetId& UserId);
	bool RejectFriendRequest(const struct FUniqueNetId& FriendId);
	bool AcceptFriendRequest(const struct FUniqueNetId& FriendId);
	bool RemoveFriend(const struct FUniqueNetId& FriendId);
	bool AddFriendWithCustomCallback(const struct FUniqueNetId& FriendId, const struct FScriptDelegate& Callback);
	bool AddFriend(const struct FUniqueNetId& FriendId);
	void Construct();
	void GetOutgoingFriendsCallback(class UEOS_GetAccountsResponse* Response, class UError* Error);
	void AddFriendCallback(class UEOS_ManageFriendsListResponse* Response, struct FString* FriendId, class UError* Error);
	void HandleAccountSummaryResponse(class UEOS_AccountSummaryResponse* Response, class UError* Error);
	void HandleGetOutgoingInvitesResponse(class UEOS_GetAccountsResponse* Response, class UError* Error);
	void HandleGetIncomingInvitesResponse(class UEOS_GetAccountsResponse* Response, class UError* Error);
	void HandleGetBlockListResponse(class UEOS_GetAccountsResponse* Response, class UError* Error);
	void HandleUnblockPlayerResponse(class UEOS_ManageBlockListResponse* Response, class UError* Error);
	void HandleBlockPlayerResponse(class UEOS_ManageBlockListResponse* Response, class UError* Error);
	void HandleRejectFriendRequestResponse(class UEOS_ManageFriendsListResponse* Response, struct FString* FriendId, class UError* Error);
	void HandleAcceptFriendRequestResponse(class UEOS_ManageFriendsListResponse* Response, struct FString* FriendId, class UError* Error);
	void HandleRemoveFriendResponse(class UEOS_ManageFriendsListResponse* Response, struct FString* FriendId, class UError* Error);
	void HandleAddFriendResponse(class UEOS_ManageFriendsListResponse* Response, struct FString* FriendId, class UError* Error);
	void HTTPRequestCallback(class UObject* Response, class UError* Error);
};

// Class ProjectX.OnlinePlayerAuthentication_X
// 0x0140 (FullSize[0x01D8] - InheritedSize[0x0098])
class UOnlinePlayerAuthentication_X : public UOnline_X
{
public:
	class URPC_LoginAuthPlayer_X*                      LoginRPC;                                                  // 0x0098(0x0008) (Transient)
	class URPC_LoginAuthPlayer_X*                      LoginSuccessRPC;                                           // 0x00A0(0x0008) (Transient, PrivateWrite)
	struct FUniqueNetId                                LoggedInPlayerId;                                          // 0x00A8(0x0048) (Transient, NeedCtorLink, PrivateWrite)
	struct FString                                     LoggedInPlayerName;                                        // 0x00F0(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FString                                     PlayerUID;                                                 // 0x0100(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FString                                     Platform;                                                  // 0x0110(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	unsigned long                                      bLoggedIn : 1;                                             // 0x0120(0x0001) BIT_FIELD (PrivateWrite)
	unsigned long                                      bPlatformTokenAuthenticationFailed : 1;                    // 0x0120(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned long                                      bSkipAuth : 1;                                             // 0x0120(0x0001) BIT_FIELD (PrivateWrite)
	unsigned long                                      bLastChanceAuthBan : 1;                                    // 0x0120(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownData_2ISV[0x4];                                     // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UError*                                      AuthLoginError;                                            // 0x0128(0x0008) (PrivateWrite)
	class UBanMessage_X*                               BanMessage;                                                // 0x0130(0x0008) (Transient, PrivateWrite)
	class UPsyTagComponent_X*                          PsyTagInfo;                                                // 0x0138(0x0008) (ExportObject, Component, EditInline)
	struct FString                                     EncryptedAuthTicket;                                       // 0x0140(0x0010) (Transient, NeedCtorLink)
	struct FString                                     EpicAuthTicket;                                            // 0x0150(0x0010) (Transient, NeedCtorLink)
	int                                                AuthRequestFailureMax;                                     // 0x0160(0x0004) (Config)
	int                                                AuthRequestRetryTime;                                      // 0x0164(0x0004) (Const)
	int                                                AuthRequestFailureCount;                                   // 0x0168(0x0004) (Transient)
	unsigned char                                      UnknownData_8QG5[0x4];                                     // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AuthenticatedName;                                         // 0x0170(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	class UEpicLogin_X*                                EpicLogin;                                                 // 0x0180(0x0008) (ProtectedWrite)
	class UError*                                      PrimaryAccountNotSetError;                                 // 0x0188(0x0008)
	struct FScriptDelegate                             __EventLoginChanged__Delegate;                             // 0x0190(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_WVKY[0xC];                                     // 0x0190(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventBanned__Delegate;                                   // 0x01A8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_00LZ[0xC];                                     // 0x01A8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventLoginResult__Delegate;                              // 0x01C0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_W3MF[0xC];                                     // 0x01C0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayerAuthentication_X");
		return ptr;
	}



	void OnEpicLoginInitialized();
	void OnEpicLoginInitializedTimeout();
	void RequestEpicAuthTicket();
	void HandleEpicAuthTicket(const struct FString& AuthTicket, const struct FString& EpicAccountId, class UError* Error);
	void __OnlinePlayerAuthentication_X__OnInit_9E60B7E749D9A47491B791B20DF27DD6();
	struct FString GetDebugName();
	void GotoAuthState(const struct FName& AuthStateName);
	bool IsLoginAttemptActive();
	struct FName GetFeatureSet();
	struct FString GetBuildRegion();
	void HandleAuthTicket(bool bSuccess, const struct FString& AuthTicket);
	void RequestAuthTicket();
	bool RequiresEpicAuthTicket();
	bool RequiresAuthTicket();
	void ReLogin();
	void Logout();
	void SetAuthLoginError(class UError* E);
	void UpdateLoginState();
	class UError* GetAuthLoginError();
	void UpdateAuthLoginError();
	void HandlePsyNetLoginChanged(class UOnlinePlayerAuthentication_X* Auth);
	void HandleLinkStatusChanged(bool B);
	void HandleConnectionChanged(class UPsyNetConnection_X* C);
	void HandleLoginStatusChanged(class UOnlinePlayer_X* Player);
	void OnLoginFail(class UError* Error);
	void OnLoginFailRPC(class URPC_LoginAuthPlayer_X* RPC);
	void OnLoginSuccessRPC(class URPC_LoginAuthPlayer_X* RPC);
	void SendLoginRPC();
	void PsyNetLogin(const struct FScriptDelegate& Callback);
	void OnRemoved();
	void OnInit();
	void EventLoginResult(class UOnlinePlayerAuthentication_X* Auth);
	void EventBanned(class UOnlinePlayerAuthentication_X* Auth);
	void EventLoginChanged(class UOnlinePlayerAuthentication_X* Auth);
};

// Class ProjectX.EpicLogin_X
// 0x0118 (FullSize[0x0178] - InheritedSize[0x0060])
class UEpicLogin_X : public UObject
{
public:
	struct FString                                     PinGrantCode;                                              // 0x0060(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     PinGrantURL;                                               // 0x0070(0x0010) (NeedCtorLink, DataBinding)
	unsigned char                                      PinGrantExpiration[0x8];                                   // 0x0080(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.EpicLogin_X.PinGrantExpiration
	unsigned long                                      bLoggedIn : 1;                                             // 0x0088(0x0001) BIT_FIELD (DataBinding)
	unsigned long                                      bSetAsPrimaryAccount : 1;                                  // 0x0088(0x0001) BIT_FIELD
	unsigned long                                      bPollDuringAccountLinking : 1;                             // 0x0088(0x0001) BIT_FIELD (DataBinding, PrivateWrite)
	unsigned long                                      bPinGrantRequestInProgress : 1;                            // 0x0088(0x0001) BIT_FIELD
	unsigned long                                      bLoginInProgress : 1;                                      // 0x0088(0x0001) BIT_FIELD
	unsigned long                                      bAccountCreationInProgress : 1;                            // 0x0088(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_XA5E[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ParentalConsentURL;                                        // 0x0090(0x0010) (NeedCtorLink, DataBinding)
	int                                                LoginFailureCount;                                         // 0x00A0(0x0004)
	unsigned char                                      UnknownData_GJEN[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UError*                                      LoginError;                                                // 0x00A8(0x0008)
	unsigned char                                      LoginErrorTimestamp[0x8];                                  // 0x00B0(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.EpicLogin_X.LoginErrorTimestamp
	class UEpicConfig_X*                               EpicConfig;                                                // 0x00B8(0x0008) (PrivateWrite)
	struct FString                                     CreateAccountURL;                                          // 0x00C0(0x0010) (Config, NeedCtorLink)
	struct FScriptDelegate                             __EventLoginSucceeded__Delegate;                           // 0x00D0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_B6W5[0xC];                                     // 0x00D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventLoginFailed__Delegate;                              // 0x00E8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_R9WF[0xC];                                     // 0x00E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventReceivedPinGrantCode__Delegate;                     // 0x0100(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_J0W9[0xC];                                     // 0x0100(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventLoginError__Delegate;                               // 0x0118(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_SOTH[0xC];                                     // 0x0118(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventReceivedEpicAuthTicket__Delegate;                   // 0x0130(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_FJ4S[0xC];                                     // 0x0130(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventInitialized__Delegate;                              // 0x0148(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_6F1B[0xC];                                     // 0x0148(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventCreatedEpicGamesAccount__Delegate;                  // 0x0160(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_CJCV[0xC];                                     // 0x0160(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EpicLogin_X");
		return ptr;
	}



	void __EpicLogin_X__HandleLoginChanged_6A7A92F241D2A98A5421B0AACD27F94C(const struct FString& Ticket, const struct FString& Id, class UError* Err);
	void __EpicLogin_X__HandleLoginFailed_DBC001C04F8639048D37B3AD22E03FCE(const struct FString& Ticket, const struct FString& Id, class UError* Err);
	void __EpicLogin_X__UpdateTwoFactorAuthenticationStatus_F5CFFF57443503A9E7AB468C08CA389E(const struct FString& Ticket, const struct FString& Id, class UError* Err);
	void __EpicLogin_X__CreateEpicGamesAccount_165D0E864A16B7D5DBC46A82ABCCA223(class UWebRequest_X* Response);
	void __EpicLogin_X__CreateEpicGamesAccount_B133DA43410772B7DF92FD825516AC36(const struct FString& _, const struct FString& __, class UError* Error);
	void __EpicLogin_X__RequestNintendoAccountAuthorization_49D735604A12FD8BFE506C949E2C6F28(class UError* _);
	void HandleRequestPinGrantTimeout();
	void HandleLoginTimeout();
	void ClearRequestPinGrantCallbacks();
	void ClearLoginCallbacks();
	void HandleReceivedPinGrantCode(TEnumAsByte<Engine_EPinGrantResult> Result, unsigned char InLocalPlayerNum, const struct FString& Code, const struct FString& URL, int SecondsUntilExpiration);
	void HandleCompletedPinGrant();
	void RequestPinGrantCode();
	void RequestNintendoAccountAuthorization(const struct FScriptDelegate& Callback);
	bool Login(const struct FString& PlatformAuthTicket);
	void CreateEpicGamesAccount();
	void UpdateTwoFactorAuthenticationStatus(const struct FScriptDelegate& Callback);
	void RetryAuth();
	void HandleInternetConnectionChanged(bool bConnected);
	void HandleKickedByEpic();
	void HandleAuthTicketExpired();
	void HandleUnderageUserDetected(unsigned char InLocalPlayerNum, const struct FString& InParentalConsentURL);
	void HandleLoginResult(class UOnlinePlayerAuthentication_X* Auth);
	void HandleLoginFailed(unsigned char InLocalPlayerNum, TEnumAsByte<Engine_EOnlineServerConnectionStatus> Error);
	void HandleLoginChanged(unsigned char InLocalPlayerNum);
	void ClearLoginError();
	void SetLoginError(class UErrorType* Error);
	void TriggerAuthTicketDelegate(const struct FScriptDelegate& Callback);
	void ClearReceivedAuthTicketDelegate(const struct FScriptDelegate& Callback);
	bool RequestEpicAuthTicket(const struct FScriptDelegate& Callback);
	bool RequiresEpicAuthTicket();
	bool IsLoggedIn();
	void NotifyWhenInitialized(const struct FScriptDelegate& Callback);
	void OnRemoved();
	void HandleEOSInitialized();
	void HandleEpicConfigSet();
	bool DevAssert(bool bTrueStatement, const struct FString& ErrorMessage);
	void EventCreatedEpicGamesAccount();
	void EventInitialized();
	void EventReceivedEpicAuthTicket(const struct FString& AuthTicket, const struct FString& AccountId, class UError* Error);
	void EventLoginError(class UEpicLogin_X* EpicLogin, class UErrorType* Error);
	void EventReceivedPinGrantCode();
	void EventLoginFailed();
	void EventLoginSucceeded();
};

// Class ProjectX.EpochTimers_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UEpochTimers_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EpochTimers_X");
		return ptr;
	}



	bool IsActive(const struct FScriptDelegate& Callback);
	void ClearAll(class UObject* Obj);
	void Clear(const struct FScriptDelegate& Callback, const struct FScriptDelegate& Callback2);
	void SetWindow(const struct FScriptDelegate& StartCallback, const struct FScriptDelegate& EndCallback);
	void SetTime(const struct FScriptDelegate& Callback);
	void Set(const struct FScriptDelegate& Callback);
};

// Class ProjectX.InterpComponent_X
// 0x00DB (FullSize[0x0178] - InheritedSize[0x009D])
class UInterpComponent_X : public UActorComponent
{
public:
	unsigned char                                      UnknownData_4C66[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMatrix                                     InterpStart;                                               // 0x00A0(0x0040) (Const, Transient)
	struct FMatrix                                     InterpEnd;                                                 // 0x00E0(0x0040) (Const, Transient)
	struct FMatrix                                     InterpLocalToWorld;                                        // 0x0120(0x0040) (Const, Transient)
	float                                              InterpStartTime;                                           // 0x0160(0x0004) (Transient)
	float                                              InterpEndTime;                                             // 0x0164(0x0004) (Transient)
	TArray<struct FAttachment>                         Attachments;                                               // 0x0168(0x0010) (Const, Component, DuplicateTransient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.InterpComponent_X");
		return ptr;
	}



	void DetachComponent(class UActorComponent* Component);
	void AttachComponent(class UActorComponent* Component, const struct FVector& RelativeLocation, const struct FRotator& RelativeRotation, const struct FVector& RelativeScale);
};

// Class ProjectX.IReservationConnection_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UIReservationConnection_X : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.IReservationConnection_X");
		return ptr;
	}



};

// Class ProjectX.JsonTests_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UJsonTests_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.JsonTests_X");
		return ptr;
	}



	bool ToJsonAndBack(class UObject* Target);
	void RunJsonTests(int RandomSeed);
};

// Class ProjectX.LanBeacon_X
// 0x0034 (FullSize[0x00A4] - InheritedSize[0x0070])
class ULanBeacon_X : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0070(0x0008) (Const, Native, NoExport)
	struct FPointer                                    LanBeacon;                                                 // 0x0078(0x0008) (Const, Native, Transient)
	int                                                LanAnnouncePort;                                           // 0x0080(0x0004) (Const, Config)
	unsigned char                                      UnknownData_VQXP[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      QueryNonce[0x8];                                           // 0x0084(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.LanBeacon_X.QueryNonce
	TEnumAsByte<Engine_ELanBeaconState>                BeaconState;                                               // 0x0090(0x0001) (Const)
	unsigned char                                      UnknownData_BFD5[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UOnlineMessageComponent_X*                   MessageComponent;                                          // 0x0098(0x0008) (Const, ExportObject, Component, EditInline)
	int                                                MaxPacketSize;                                             // 0x00A0(0x0004) (Const)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LanBeacon_X");
		return ptr;
	}



	bool BroadcastMessage(class UObject* Message);
	bool BroadcastData(TArray<unsigned char>* Data);
	void Stop();
	bool Start(TEnumAsByte<Engine_ELanBeaconState> InitialState);
};

// Class ProjectX.BoxCollisionShape_X
// 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
class UBoxCollisionShape_X : public UExplosionCollisionShapes_X
{
public:
	struct FVector                                     StartSize;                                                 // 0x0080(0x000C) (Edit)
	struct FVector                                     EndSize;                                                   // 0x008C(0x000C) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.BoxCollisionShape_X");
		return ptr;
	}



};

// Class ProjectX.GoalCollisionShape_X
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UGoalCollisionShape_X : public UExplosionCollisionShapes_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GoalCollisionShape_X");
		return ptr;
	}



};

// Class ProjectX.SphereCollisionShape_X
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class USphereCollisionShape_X : public UExplosionCollisionShapes_X
{
public:
	float                                              StartRadius;                                               // 0x0080(0x0004) (Edit)
	float                                              EndRadius;                                                 // 0x0084(0x0004) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SphereCollisionShape_X");
		return ptr;
	}



};

// Class ProjectX.ActivateAnimSeriesComponent_X
// 0x000C (FullSize[0x00B0] - InheritedSize[0x00A4])
class UActivateAnimSeriesComponent_X : public UActorComponent_X
{
public:
	unsigned char                                      UnknownData_BRO0[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       AnimNodeName;                                              // 0x00A8(0x0008) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ActivateAnimSeriesComponent_X");
		return ptr;
	}



	void SetAnimSeriesActiveInComponent(class USkeletalMeshComponent* SKC, bool bActive);
	void SetAnimSeriesActive(bool bActive);
	void Detached();
	void Attached();
};

// Class ProjectX.OnlineGameParty_X
// 0x04C8 (FullSize[0x0560] - InheritedSize[0x0098])
class UOnlineGameParty_X : public UOnline_X
{
public:
	TArray<struct FPartyMember>                        PartyMembers;                                              // 0x0098(0x0010) (Transient, NeedCtorLink, ProtectedWrite)
	struct FUniqueLobbyId                              PartyID;                                                   // 0x00A8(0x0010) (Transient, PrivateWrite)
	struct FUniqueNetId                                PartyLeader;                                               // 0x00B8(0x0048) (Transient, NeedCtorLink, PrivateWrite)
	int                                                MaxPartySize;                                              // 0x0100(0x0004) (Const)
	unsigned char                                      UnknownData_UMZT[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UOnlineMessageComponent_X*                   MessageComponent;                                          // 0x0108(0x0008) (Const, ExportObject, Component, EditInline)
	class UPartyMessage_SearchStatus_X*                PendingSearchStatus;                                       // 0x0110(0x0008) (Transient)
	class UPartyMessage_SearchStatus_X*                NullSearchStatus;                                          // 0x0118(0x0008)
	int                                                PartyTimeout;                                              // 0x0120(0x0004) (Edit, Const)
	int                                                CurrentPartySize;                                          // 0x0124(0x0004) (Transient, PrivateWrite)
	unsigned long                                      LastbSearchingStatus : 1;                                  // 0x0128(0x0001) BIT_FIELD (Transient)
	unsigned long                                      LastLockStatus : 1;                                        // 0x0128(0x0001) BIT_FIELD (Transient)
	unsigned long                                      bPendingIncomingTradeInvite : 1;                           // 0x0128(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned long                                      bTradeLocked : 1;                                          // 0x0128(0x0001) BIT_FIELD (PrivateWrite)
	struct FName                                       LastSearchState;                                           // 0x012C(0x0008) (Transient)
	unsigned char                                      UnknownData_5MAA[0x4];                                     // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPartyJoinMatchSettings                     MatchSettings;                                             // 0x0138(0x0068) (Transient, NeedCtorLink)
	struct FUniqueNetId                                PendingTradeInvite;                                        // 0x01A0(0x0048) (Transient, NeedCtorLink, PrivateWrite)
	TEnumAsByte<ProjectX_EPartyProcessingStatus>       ProcessingStatus;                                          // 0x01E8(0x0001) (Transient, PrivateWrite)
	unsigned char                                      UnknownData_KV0E[0x7];                                     // 0x01E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     NotInSameOnlineGameError;                                  // 0x01F0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     MissingLicenseAgreementError;                              // 0x0200(0x0010) (Const, Localized, NeedCtorLink)
	class UPartySequence_InvitedToPlatformParty_X*     SequenceInvitedToPlatformParty;                            // 0x0210(0x0008) (PrivateWrite)
	class UPartySequence_PsyNetPartyUpgrade_X*         SequencePsyNetPartyUpgrade;                                // 0x0218(0x0008) (PrivateWrite)
	class UPartySequence_InvitedToPsyNetParty_X*       SequenceInvitedToPsyNetParty;                              // 0x0220(0x0008) (PrivateWrite)
	class UPartyConfig_X*                              PartyConfig;                                               // 0x0228(0x0008) (Edit)
	class UPsyNetConfig_X*                             Config;                                                    // 0x0230(0x0008) (Edit)
	unsigned char                                      PlatformLobbyInterface[0x10];                              // 0x0238(0x0010) UNKNOWN PROPERTY: InterfaceProperty ProjectX.OnlineGameParty_X.PlatformLobbyInterface
	class UParties_X*                                  PsyNetLobbyInterface;                                      // 0x0248(0x0008) (PrivateWrite)
	int                                                CreatePartyLocalPlayerNum;                                 // 0x0250(0x0004) (PrivateWrite)
	unsigned char                                      UnknownData_6UQ4[0x4];                                     // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCrossplayConfig_X*                          CrossplayConfig;                                           // 0x0258(0x0008)
	class UFindServerTask_X*                           FindServerTask;                                            // 0x0260(0x0008)
	struct FString                                     JoinLobbyError;                                            // 0x0268(0x0010) (NeedCtorLink, PrivateWrite)
	struct FScriptDelegate                             __EventPartyCreated__Delegate;                             // 0x0278(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_J9P5[0xC];                                     // 0x0278(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnPartyInviteAccepted__Delegate;                         // 0x0290(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_G6RY[0xC];                                     // 0x0290(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlayerInvited__Delegate;                            // 0x02A8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_O5UU[0xC];                                     // 0x02A8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlayerInvitedSilent__Delegate;                      // 0x02C0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_2JCA[0xC];                                     // 0x02C0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPartyChanged__Delegate;                             // 0x02D8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_43FX[0xC];                                     // 0x02D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPartySizeChanged__Delegate;                         // 0x02F0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_P7PV[0xC];                                     // 0x02F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPartyLeaderChanged__Delegate;                       // 0x0308(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_E6BB[0xC];                                     // 0x0308(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventSearchStatusChanged__Delegate;                      // 0x0320(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_2Z1S[0xC];                                     // 0x0320(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPartyError__Delegate;                               // 0x0338(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_K8VN[0xC];                                     // 0x0338(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPartyJoinGameError__Delegate;                       // 0x0350(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_IIBY[0xC];                                     // 0x0350(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPartyJoinGameSuccess__Delegate;                     // 0x0368(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_4AFA[0xC];                                     // 0x0368(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPartyDestroyed__Delegate;                           // 0x0380(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_1QHA[0xC];                                     // 0x0380(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventConfirmJoinGameMessage__Delegate;                   // 0x0398(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_S0JC[0xC];                                     // 0x0398(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventLeaderLeftOnlineGame__Delegate;                     // 0x03B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_P2PL[0xC];                                     // 0x03B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventProcessingStatusChanged__Delegate;                  // 0x03C8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_U31K[0xC];                                     // 0x03C8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDisableCrossPlayChanged__Delegate;                  // 0x03E0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_5Q6Y[0xC];                                     // 0x03E0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlayerTradingChanged__Delegate;                     // 0x03F8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_DCK4[0xC];                                     // 0x03F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventInviteToTrade__Delegate;                            // 0x0410(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_XZ2V[0xC];                                     // 0x0410(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventAcceptedInviteToTrade__Delegate;                    // 0x0428(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_1Q2P[0xC];                                     // 0x0428(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventCloseInviteToTrade__Delegate;                       // 0x0440(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_2O3Y[0xC];                                     // 0x0440(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventRemotePlayerReadyToLock__Delegate;                  // 0x0458(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_YASC[0xC];                                     // 0x0458(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventRemotePlayerNotReadyToLock__Delegate;               // 0x0470(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_QZCR[0xC];                                     // 0x0470(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventRemotePlayerReadyToConfirm__Delegate;               // 0x0488(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_TK3O[0xC];                                     // 0x0488(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventTradeConfirmed__Delegate;                           // 0x04A0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_R03O[0xC];                                     // 0x04A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventAnotherInviteToTrade__Delegate;                     // 0x04B8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_DQ7Z[0xC];                                     // 0x04B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlayerInMatchChanged__Delegate;                     // 0x04D0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_FNN3[0xC];                                     // 0x04D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlayerIsCurrentlyTrading__Delegate;                 // 0x04E8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_8XL8[0xC];                                     // 0x04E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventStartedJoinFriend__Delegate;                        // 0x0500(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_99SF[0xC];                                     // 0x0500(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventAddPartyMember__Delegate;                           // 0x0518(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_ACW4[0xC];                                     // 0x0518(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventRemovePartyMember__Delegate;                        // 0x0530(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_73IO[0xC];                                     // 0x0530(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __bTradeLocked__ChangeNotify;                              // 0x0548(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_A2LN[0xC];                                     // 0x0548(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameParty_X");
		return ptr;
	}



	void __OnlineGameParty_X__HandleJoinLobby_33408A2C4B81A264F876A7BC9114F01C();
	void __OnlineGameParty_X__UpdatePartyInfo_FEE8E4AB4799B986E6120DA254DDFF04(const struct FPartyMember& PM);
	bool __OnlineGameParty_X__UpdatePartyInfo_E0DC5EEC47A5E81672F932ABB769DD7C(const struct FLobbyMember& LM);
	bool __OnlineGameParty_X__BroadcastAllLocalPlayers_8C72138F49D7B4C9850167AE8393145C(const struct FPartyMember& PM);
	struct FUniqueNetId __OnlineGameParty_X__GetPlayersWithPrimaryMemberID_EBE903CF4CBAE453F0423A9D3CE692A9(const struct FPartyMember& Member);
	void __bTradeLocked__ChangeNotifyFunc();
	void HandlePlatformPartyIdChanged(class UPartyPlatformSession_X* Session);
	void HandleSetPlatformPartyMessage(class UOnlineMessageComponent_X* Component, class UPartyMessage_SetPlatformParty_X* Message);
	void RequestRejoinPartyInfo();
	class UError* CheckForPlayerInviteError(const struct FUniqueNetId& PlayerID);
	void SendPartyInvite(const struct FUniqueNetId& PlayerID);
	void HandlePartyConfigChanged();
	void HandleMessageForMetrics(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void HandlePlayerTradeComplete(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void SendPlayerTradeComplete();
	void SendPlayerTradeCompleteAndClear(bool bWasCanceled);
	void ConfirmTrade();
	void HandleReadyToConfirmTrade(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void ReadyToConfirmTrade();
	void LockTrade();
	void UnlockTrade();
	void HandleReadyToLockTrade(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void ReadyToLockTrade(bool bReady);
	void SetPartyMemberLockedTrade(int PartyMemberIndex, bool bLocked);
	void SetPartyMessageHandlerTradeProductUpdate(bool bAddHandler);
	void ClearLocalTradingPlayer(bool bWasCanceled);
	bool ClearTradingPartyMember(struct FPartyMember* TradingMember);
	bool ClearTradingPlayer(const struct FUniqueNetId& PartyMemberID);
	void ClearAllTradingPlayers();
	void HandleAcceptInviteToTrade(class UOnlineMessageComponent_X* Component, class UObject* Message);
	bool CanAcceptTrade();
	void NotifyPlayerTradeAcceptanceFailed(struct FUniqueNetId* TradingMemberId);
	void AcceptInviteToTrade(const struct FUniqueNetId& Inviter, bool bAccepted);
	struct FUniqueNetId GetTradingPartner(struct FUniqueNetId* StructInitializer_E7B07BBB48C220680910A5B89380E6F8, struct FUniqueNetId* StructInitializer_5AFC536644CE350881BAA6B9D335CBDE);
	struct FGuid ResolveGuids(struct FGuid* A, struct FGuid* B);
	void ClearPendingTrade(struct FUniqueNetId* StructInitializer_56BB84844CE264B4A147278821D2060E);
	void SetPendingTrade(struct FUniqueNetId* PendingTarget);
	struct FGuid GetTradingPlayerTradeID();
	struct FUniqueNetId GetTradingPlayerID();
	struct FString GetTradingPlayerName();
	void HandleInviteToTradeMessage(class UOnlineMessageComponent_X* Component, class UPartyMessage_InviteToTrade_X* Message);
	void InvitePlayerToTrade(const struct FUniqueNetId& InMemberId);
	bool IsPlayerTrading(const struct FUniqueNetId& InMemberId);
	struct FUniqueNetId GetPlayerTradingTarget(const struct FUniqueNetId& InMemberId);
	void SetPlayersTrading(const struct FUniqueNetId& InMemberId1, const struct FUniqueNetId& InMemberId2, bool bTrading);
	void ClearPartyMemberTradingInfo(int MemberIndex, struct FUniqueNetId* StructInitializer_8E5EC7B344691544FCD8DCBC26C51761, struct FGuid* StructInitializer_8613268F49DB151EE182AD9242A1B41A);
	struct FString GetMemberName(const struct FUniqueNetId& InMemberId);
	TArray<struct FUniqueNetId> GetPlayersWithPrimaryMemberID(const struct FUniqueNetId& InPrimaryID, TArray<struct FPartyMember>* FilterLocal_9E8682714B02DAE1FFBC0190E6E20CA5, TArray<struct FUniqueNetId>* MapLocal_ED7C00E542B628A43036EE8AE351179B);
	TArray<struct FUniqueNetId> GetLocalMemberIDs();
	TArray<struct FUniqueNetId> GetOrderedPartyMemberIDs();
	TArray<struct FUniqueNetId> GetPartyMemberIDs();
	void HandleSessionCreated();
	bool IsProcessing();
	void SetProcessingStatus(TEnumAsByte<ProjectX_EPartyProcessingStatus> Status);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	struct FString GetPlayerRatingString(const struct FUniqueNetId& PlayerID, int Playlist);
	void OnPartyError(class UError* Error);
	void HandlePartyError(const struct FString& Error);
	void OnPartyChanged(TEnumAsByte<ProjectX_EPartyProcessingStatus> NewProcessingStatus);
	bool TryGetValueInt(TArray<struct FLobbyMetaData>* MetaData, const struct FString& Key, int* Value);
	bool PartyHasDisableCrossPlay();
	void KickForCrossplayDisabled(const struct FUniqueNetId& MemberId);
	bool HasMultiplePlatforms();
	void KickCrossplayDisabledMembers();
	void SetCrossPlayTextChatForMember(const struct FUniqueNetId& PartyMemberID, TEnumAsByte<Engine_ECrossPlatformChatState> CrossChatState);
	void BroadcastCrossTextChatState();
	void HandleCrossPlatformTextChatMessage(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void SetDisableCrossPlayForMember(const struct FUniqueNetId& PartyMemberID, bool bDisableCrossPlay);
	void HandleDisableCrossPlayMessage(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void BroadcastDisableCrossPlay();
	struct FString GetAnyLoggedInRestrictionPlayerName();
	struct FString GetAnyAppOwnerRestrictionPlayerName();
	struct FString GetMatchmakingRestrictionPlayerName(TEnumAsByte<ProjectX_EPartyMatchmakingRestriction> Restriction);
	struct FString GetMatchmakingRestrictionError();
	bool IsPlayerInMainMenu(const struct FUniqueNetId& MemberId);
	bool IsPlayerInMatch(const struct FUniqueNetId& MemberId);
	void SetAvailableForMatchmakingForMember(const struct FUniqueNetId& PartyMemberID, int MatchmakeRestrictions);
	void HandleMatchmakingAvailability(class UOnlineMessageComponent_X* Component, class UObject* Message);
	int BuildMatchmakingRestrictions();
	void BroadcastMatchmakingAvailabilityDelayed();
	void BroadcastMatchmakingAvailability();
	void BroadcastAllLocalPlayers(TArray<struct FPartyMember>* FilterLocal_12336A5C4A883029D27CDD84857B23C9, TArray<struct FPartyMember>* FilterLocal_FF09561543D81A3E203B178792960546);
	void BroadcastLocalPlayersDelayed();
	void BroadcastLocalPlayers();
	bool ShouldLeavePartyOnDisconnect();
	void HandlePsyNetLoginChanged(class UOnlinePlayerAuthentication_X* Auth);
	void HandleLocalPlayerLoginStatusChanged(class UOnlinePlayer_X* Player);
	void HandleLocalPlayerLeave(class ULocalPlayer* Player);
	void UpdatePartyMember(class ULocalPlayer_X* Player);
	void HandleOnlinePlayerNameChanged(class UOnlinePlayer_X* Player);
	void HandleLocalPlayerJoin(class ULocalPlayer* Player);
	void ProcessLocalPlayersMessage(class UPartyMessage_LocalPlayers_X* Message);
	void HandleLocalPlayers(class UOnlineMessageComponent_X* Component, class UObject* ObjMessage);
	bool AllowSplitScreenPlayer(int ControllerId, class UError** OutError);
	bool HasPartyMembers();
	int GetPartySize();
	void HandleClientReservationMessage_ConnectionValid(const struct FServerReservationData& Reservation, const struct FJoinMatchSettings& Settings);
	void HandleClientReservationMessage(class UClientReservationMessage_X* Message);
	void HandleSearchStatus(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void BroadcastSearchStatus();
	class UPartyMessage_SearchStatus_X* GetSearchStatusMessage();
	bool TogglePartyLock();
	int GetMaxPartySize();
	bool AllowPartySize(int InSize);
	bool IsPartyOverFull();
	bool AllowNewMember();
	void UpdatePartyLock();
	void HandleFindGameStateChanged(const struct FName& NewState);
	void ClearLastServerAddress(struct FPartyJoinMatchSettings* StructInitializer_4D7BA76345F07F5626237F8089631991, struct FPartyMemberServer* StructInitializer_3A86232A42976A76B4B54B9080566F6A, struct FPartyMemberServer* StructInitializer_CF0187804CAC5B58A5747BBD9FFF8DE9);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	void OnNewSettingsChosen(int PlaylistId);
	void OnNewGame();
	void SetMatchmakingSearching(bool bState);
	void SetSearchState(const struct FName& SearchState);
	int GetLocalMemberIndex();
	struct FUniqueNetId GetLocalMemberId();
	bool IsMemberLocal(const struct FUniqueNetId& MemberId);
	bool HasRemoteMember();
	void OnPartyLeaderChanged();
	class UError* GetKickedFromPartyError(TEnumAsByte<Engine_ELobbyKickReason> Reason);
	void KickedFromParty(TEnumAsByte<Engine_ELobbyKickReason> Reason);
	void HandleKickMessage(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void HandleLobbySettingsUpdateMessage(class UOnlineMessageComponent_X* Component, class UPartyMessage_LobbySettings_X* LobbySettingsMessage);
	void HandleLobbyDestroyed(struct FUniqueLobbyId* LobbyId, TEnumAsByte<Engine_ELobbyKickReason> Reason);
	void HandleLobbyReceiveBinaryData(struct FActiveLobbyInfo* LobbyInfo, int MemberIndex, TArray<unsigned char>* Data);
	void RemoveAllPartyMembers();
	void RemovePartyMemberByLocalPlayer(class ULocalPlayer* Player);
	void RemovePartyMemberByIDWithNotify(const struct FUniqueNetId& MemberId);
	void RemovePartyMemberByID(const struct FUniqueNetId& MemberId);
	int AddPartyMember(const struct FUniqueNetId& PrimaryMemberId, const struct FUniqueNetId& MemberId, const struct FString& MemberName, int ControllerId);
	void OnEditExistingPartyMember(int PartyMemberIdx);
	void OnAddNewPartyMember(int PartyMemberIdx);
	void UpdatePartyInfo(struct FActiveLobbyInfo* Lobby, TArray<struct FPartyMember>* FilterLocal_5C573FB14C36BA56741374B731377C07);
	void UpdatePartyLeader(struct FActiveLobbyInfo* Lobby);
	void HandleLobbySettingsUpdated(struct FActiveLobbyInfo* Lobby);
	void OnNewLobby();
	void BroadcastPartyInfo();
	void HandleJoinLobby_ConnectionValid();
	void HandleJoinLobby(bool bWasSuccessful, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* LobbyUID, const struct FString& Error);
	class UError* GetJoinPartyError(struct FActiveLobbyInfo* LobbyInfo);
	class UError* CheckForJoinPartyError(struct FActiveLobbyInfo* LobbyInfo);
	void BroadcastStateDelayed();
	void BroadcastState();
	void CheckForJoiningPlayerKick(const struct FUniqueNetId& PlayerID);
	void HandleLobbyMemberStatusUpdate(struct FActiveLobbyInfo* LobbyInfo, int MemberIndex, int InstigatorIndex, const struct FString& Status);
	void CancelJoinGameFromPartyDestroyed(class UOnlineGameParty_X* PartyObject);
	void HandlePartyJoinGameComplete(bool bSuccess, const struct FString& FailReason);
	void HandleFindServerError(class UError* Error);
	void HandleFindServer(const struct FServerReservationData& Reservation, const struct FJoinMatchSettings& Settings);
	void HandleConfirmJoinGame_ConnectionValid(const struct FPartyJoinMatchSettings& InSettings, struct FServerReservationData* StructInitializer_55DFC2FA424F1408F59DE38490B47726);
	void HandleConfirmJoinGame(const struct FPartyJoinMatchSettings& InSettings);
	bool JoinFriend(const struct FUniqueNetId& PartyMemberID);
	bool WantsToFollowTheLeaderOutOfGame();
	bool IsInSameMatch(const struct FUniqueNetId& PartyMemberA, const struct FUniqueNetId& PartymemberB);
	void HandlePartyJoinGame(class UOnlineMessageComponent_X* Component, class UPartyMessage_JoinGame_X* Message);
	bool CanBroadcastMatchmakingMessages();
	void BroadcastCancelJoinMessage();
	void BroadcastPartyServer();
	void HandleServerReserved();
	void HandleJoinGameComplete(bool bSuccess, const struct FString& FailReason);
	struct FPartyMemberServer GetPartyMemberServer(struct FPartyMemberServer* StructInitializer_D4AA447C4B16B80995732B9F42B32742);
	void HandlePartyMemberJoinGame(class UOnlineMessageComponent_X* Component, class UPartyMessage_PartyMemberJoinGame_X* MessageObject);
	bool ClearServersForPostGameRankedMatch();
	bool SetPartyMemberJoinGame(struct FUniqueNetId* PlayerID, struct FPartyMemberServer* Server);
	void BroadcastPartyMemberServer(const struct FPartyMemberServer& Server);
	void BroadcastLobbySettings(const struct FActiveLobbyInfo& LobbyInfo);
	bool SetLeader(const struct FUniqueNetId& NewLeader);
	bool IsPrimaryPlayerIndex(int MemberIdx);
	bool IsPrimaryPlayer(struct FUniqueNetId* PlayerID);
	bool IsPlayerInParty(struct FUniqueNetId* PlayerID);
	bool KickPlayer(const struct FUniqueNetId& PlayerID, TEnumAsByte<Engine_ELobbyKickReason> Reason);
	bool ShowPlatformInviteUI(unsigned char LocalUserNum);
	struct FString GetShowPlatformInviteUIError();
	bool CanShowPlatformInviteUI();
	bool ShowInviteUI(unsigned char LocalUserNum);
	bool LeaveParty(const struct FString& Reason, struct FUniqueLobbyId* StructInitializer_2B043B7D4F00EB8BDDBF0B80F1E8BC6B);
	bool IsInCurrentGame(const struct FUniqueNetId& MemberId);
	bool IsPartyLeader();
	bool IsInPartyID(const struct FUniqueLobbyId& InPartyId);
	bool IsInParty(struct FUniqueLobbyId* StructInitializer_F1FC941D45B36DF88EEA189180C35E08);
	void JoinParty(int LocalPlayerNum, struct FUniqueLobbyId* InPartyId);
	void CheckPartyTimeout();
	void StartPartyTimeout();
	void OnPartyCreated(bool bWasSuccessful, struct FUniqueLobbyId* InPartyId, const struct FString& Error);
	void CreatePartyInternal_ConnectionChecked(class UError* ConnectionError, int LocalPlayerNum, const struct FScriptDelegate& Handler);
	void CreatePartyInternal(int LocalPlayerNum, const struct FScriptDelegate& Handler);
	void CreatePlatformParty(int LocalPlayerNum, const struct FScriptDelegate& Handler);
	void CreateParty(int LocalPlayerNum, const struct FScriptDelegate& Handler);
	void GetCreatePartyLobbyInterface();
	bool ShouldCreatePsyNetParty();
	void SetLobbyInterfacePsyNet();
	void SetLobbyInterfacePlatform();
	void ShortCircuitPartyInvitedPrompt(struct FUniqueLobbyId* InLobbyId, struct FUniqueNetId* InviterId);
	void HandlePartySizeTracker(class UOnlineGameParty_X* PartyObject);
	void HandlePrimaryPlayerIdChanged(class UOnlineGameAccount_X* InAccount, const struct FUniqueNetId& PlayerID);
	class UPartyMetrics_X* GetMetrics();
	void SetLobbyInterface();
	bool IsUsingPsyNetParty();
	void InitLobbyInterfaces();
	void OnExit();
	void OnInit();
	void EventRemovePartyMember(class UOnlineGameParty_X* PartyObject, const struct FUniqueNetId& InMemberId);
	void EventAddPartyMember(class UOnlineGameParty_X* PartyObject, const struct FUniqueNetId& InMemberId);
	void EventStartedJoinFriend();
	void EventPlayerIsCurrentlyTrading(class UOnlineGameParty_X* PartyObject, const struct FUniqueNetId& InMemberId);
	void EventPlayerInMatchChanged(class UOnlineGameParty_X* PartyObject, const struct FUniqueNetId& InMemberId);
	void EventAnotherInviteToTrade(class UOnlineGameParty_X* PartyObject, const struct FUniqueNetId& InMemberId);
	void EventTradeConfirmed(class UOnlineGameParty_X* PartyObject);
	void EventRemotePlayerReadyToConfirm(class UOnlineGameParty_X* PartyObject);
	void EventRemotePlayerNotReadyToLock(class UOnlineGameParty_X* PartyObject);
	void EventRemotePlayerReadyToLock(class UOnlineGameParty_X* PartyObject);
	void EventCloseInviteToTrade(class UOnlineGameParty_X* PartyObject, bool bWasCanceled);
	void EventAcceptedInviteToTrade(class UOnlineGameParty_X* PartyObject);
	void EventInviteToTrade(class UOnlineGameParty_X* PartyObject, const struct FUniqueNetId& Sender, const struct FUniqueNetId& Recipient);
	void EventPlayerTradingChanged(class UOnlineGameParty_X* PartyObject, const struct FUniqueNetId& InMemberId, bool bIsPlayerTrading);
	void EventDisableCrossPlayChanged(class UOnlineGameParty_X* PartyObject);
	void EventProcessingStatusChanged(class UOnlineGameParty_X* PartyObject);
	void EventLeaderLeftOnlineGame(class UOnlineGameParty_X* PartyObject);
	void EventConfirmJoinGameMessage(class UOnlineGameParty_X* PartyObject);
	void EventPartyDestroyed(class UOnlineGameParty_X* PartyObject);
	void EventPartyJoinGameSuccess(class UOnlineGameParty_X* PartyObject);
	void EventPartyJoinGameError(class UOnlineGameParty_X* PartyObject, const struct FString& LocalizedErrorString);
	void EventPartyError(class UOnlineGameParty_X* PartyObject, class UError* Error);
	void EventSearchStatusChanged(class UOnlineGameParty_X* PartyObject, class UPartyMessage_SearchStatus_X* StatusMessage);
	void EventPartyLeaderChanged(class UOnlineGameParty_X* PartyObject, const struct FUniqueNetId& NewLeader);
	void EventPartySizeChanged(class UOnlineGameParty_X* PartyObject, int NewSize, int OldSize);
	void EventPartyChanged(class UOnlineGameParty_X* PartyObject);
	void EventPlayerInvitedSilent(class UOnlineGameParty_X* PartyObject, struct FUniqueLobbyId* InPartyId, struct FUniqueNetId* InviterId, const struct FScriptDelegate& Callback);
	void EventPlayerInvited(class UOnlineGameParty_X* PartyObject, struct FUniqueLobbyId* InPartyId, struct FUniqueNetId* FriendId, const struct FScriptDelegate& Callback);
	void OnPartyInviteAccepted(int LocalPlayerNum, struct FUniqueLobbyId* InPartyId);
	void EventPartyCreated(class UOnlineGameParty_X* PartyObject, bool bWasSuccessful);
};

// Class ProjectX.OnlineGameAccount_X
// 0x0040 (FullSize[0x00D8] - InheritedSize[0x0098])
class UOnlineGameAccount_X : public UOnline_X
{
public:
	class UOnlinePlayer_X*                             PrimaryPlayer;                                             // 0x0098(0x0008) (Transient, PrivateWrite)
	float                                              UpdateCurrentGameTaskTimer;                                // 0x00A0(0x0004) (Edit)
	int                                                CurrentPlaylistId;                                         // 0x00A4(0x0004) (Transient, PrivateWrite)
	struct FScriptDelegate                             __EventPrimaryPlayerIdChanged__Delegate;                   // 0x00A8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_4CGQ[0xC];                                     // 0x00A8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventCurrentPlaylistSet__Delegate;                       // 0x00C0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_5C80[0xC];                                     // 0x00C0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameAccount_X");
		return ptr;
	}



	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void OnMainMenuOpened();
	int GetNumLocalPlayers();
	void SendUpdatePlayerCurrentGameRPC();
	void SendUpdatePlayerCurrentGameRequest();
	void UpdateCurrentGame();
	void ClearCurrentPlaylist();
	void SetCurrentPlaylist(int PlaylistId);
	void HandleActiveServerChanged();
	void HandlePsyNetConnectionChanged(class UPsyNetConnection_X* C);
	void HandlePlayerLoginStatusChanged(class UOnlinePlayer_X* Player);
	void OnPrimaryPlayerIdChanged();
	void SetPrimaryPlayer(class UOnlinePlayer_X* Player);
	void OnInit();
	void EventCurrentPlaylistSet(class UOnlineGameAccount_X* InAccount, class UGameSettingPlaylist_X* NewPlaylist);
	void EventPrimaryPlayerIdChanged(class UOnlineGameAccount_X* InAccount, const struct FUniqueNetId& PlayerID);
};

// Class ProjectX.OnlineClubCache_X
// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
class UOnlineClubCache_X : public UComponent
{
public:
	TArray<class UClubDetails_X*>                      ClubDetailsCache;                                          // 0x0070(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __EventClubUpdated__Delegate;                              // 0x0080(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_CO2G[0xC];                                     // 0x0080(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineClubCache_X");
		return ptr;
	}



	void __OnlineClubCache_X__ClearAllExcept_ADC749244D28EF9CBA17F2ACE4952269(class UClubDetails_X* C);
	void ClearAllExcept();
	void Clear();
	void Destroy();
	void Add(class UClubDetails_X* ClubDetails);
	void GetPlayerClubID(const struct FUniqueNetId& PlayerID);
	class UClubDetails_X* GetPlayerClubDetails(const struct FUniqueNetId& PlayerID);
	class UClubDetails_X* GetClubDetails();
	void NotifyWhenClubUpdated(const struct FScriptDelegate& Callback);
	void EventClubUpdated(class UOnlineClubCache_X* Cache, class UClubDetails_X* ClubDetails);
};

// Class ProjectX.RPC_GetPartyMemberSkill_X
// 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
class URPC_GetPartyMemberSkill_X : public URPC_X
{
public:
	TArray<struct FUniqueNetId>                        PlayerIDs;                                                 // 0x00E8(0x0010) (NeedCtorLink, PrivateWrite)
	TArray<struct FPartyMemberSkill>                   Players;                                                   // 0x00F8(0x0010) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetPartyMemberSkill_X");
		return ptr;
	}



	void OnSuccess();
	void AddPlayerIDsToResponse();
	class URPC_GetPartyMemberSkill_X* AddPlayer(const struct FUniqueNetId& PlayerID);
};

// Class ProjectX.OnlineGame_Base_X
// 0x00E0 (FullSize[0x0178] - InheritedSize[0x0098])
class UOnlineGame_Base_X : public UOnline_X
{
public:
	struct FString                                     OnlineSubPlayerInterfaceName;                              // 0x0098(0x0010) (Edit, Config, NeedCtorLink)
	struct FString                                     OnlineSubGameInterfaceName;                                // 0x00A8(0x0010) (Edit, Config, NeedCtorLink)
	class UOnlineGameSettings_X*                       DefaultGameSettingsArchetype;                              // 0x00B8(0x0008) (Edit)
	class UOnlineGameSettings_X*                       DefaultGameSettings;                                       // 0x00C0(0x0008)
	class UOnlineGameSettings_X*                       GameSettings;                                              // 0x00C8(0x0008) (Transient)
	class UOnlineGamePlaylists_X*                      Playlists;                                                 // 0x00D0(0x0008) (Edit)
	class UOnlineImageDownloaderWeb*                   ImageDownloader;                                           // 0x00D8(0x0008)
	class UOnlineGameDLC_X*                            DLC;                                                       // 0x00E0(0x0008) (Edit)
	class UOnlineGameSkill_X*                          Skill;                                                     // 0x00E8(0x0008) (Edit)
	struct FString                                     StartServerCommand;                                        // 0x00F0(0x0010) (Edit, Const, NeedCtorLink)
	class UWebCache_X*                                 WebCache;                                                  // 0x0100(0x0008)
	class UWebImageCache_X*                            WebImageCache;                                             // 0x0108(0x0008)
	class UPsyNetStaticData_X*                         PsyNetStaticData;                                          // 0x0110(0x0008) (ExportObject, Component, EditInline)
	unsigned long                                      bLockGameSettings : 1;                                     // 0x0118(0x0001) BIT_FIELD (Transient)
	unsigned long                                      bUseEnvironmentZone : 1;                                   // 0x0118(0x0001) BIT_FIELD (Config)
	TEnumAsByte<Engine_EOnlineServerConnectionStatus>  CurrentConnectionStatus;                                   // 0x011C(0x0001) (Transient, PrivateWrite)
	unsigned char                                      UnknownData_MFEA[0x3];                                     // 0x011D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ServerName;                                                // 0x0120(0x0010) (Transient, NeedCtorLink, ProtectedWrite)
	struct FString                                     CachedOptions;                                             // 0x0130(0x0010) (Transient, NeedCtorLink, ProtectedWrite)
	class UOnlineConfigDispatcher_X*                   OnlineConfigDispatcher;                                    // 0x0140(0x0008) (Transient)
	class UOnlineGameWordFilter_X*                     WordFilter;                                                // 0x0148(0x0008) (Transient, PrivateWrite)
	TArray<class UOnline_X*>                           OnlineComponents;                                          // 0x0150(0x0010) (NeedCtorLink, ProtectedWrite)
	struct FScriptDelegate                             __EventInternetConnectionChanged__Delegate;                // 0x0160(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_WTE0[0xC];                                     // 0x0160(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGame_Base_X");
		return ptr;
	}



	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool HasInternetConnection();
	int GetBeaconPort();
	struct FString GetBeaconExternalHostAddress(bool bWithPort);
	struct FString GetBeaconLocalHostAddress(bool bWithPort);
	int GetUdpPort();
	struct FString GetUdpExternalHostAddress(bool bWithPort);
	struct FString GetUdpLocalHostAddress(bool bWithPort);
	void HandleInternetConnectionChanged(bool bConnected);
	void HandleConnectionStatusChanged(TEnumAsByte<Engine_EOnlineServerConnectionStatus> ConnectionStatus);
	void SetDefaultSearchType(class UClass* OnlineSearchClass);
	void KickAllPlayers(const struct FString& Reason);
	void DelayedShutdownServer();
	void OnExit();
	int GetPlaylistPlayerCount(class UGameSettingPlaylist_X* Playlist);
	void OnNewSettingsChosen(int PlaylistId);
	void UpdateGameSettingsPlayerCount(int NumPlayers);
	void UpdateGameSettings(class UOnlineGameSettings_X* InGameSettings, const struct FString& Options);
	class UOnlineGameSettings_X* CreateOnlineGameSettings(const struct FString& Options);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	void InitOnlineSubsystemInterfaces();
	void OnInit();
	void Construct();
	void EventInternetConnectionChanged(bool bConnected);
};

// Class ProjectX.OnlineGameServer_X
// 0x0008 (FullSize[0x0180] - InheritedSize[0x0178])
class UOnlineGameServer_X : public UOnlineGame_Base_X
{
public:
	class UPsyNetConnection_X*                         PsyNetConnection;                                          // 0x0178(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameServer_X");
		return ptr;
	}



	void OnInit();
};

// Class ProjectX.OnlineGameLanServer_X
// 0x00E0 (FullSize[0x0260] - InheritedSize[0x0180])
class UOnlineGameLanServer_X : public UOnlineGameServer_X
{
public:
	class UOnlineGameLanReservations_X*                Reservations;                                              // 0x0180(0x0008) (Edit)
	struct U_Types_X_FCustomMatchSettings              CustomMatch;                                               // 0x0188(0x0090) (Transient, NeedCtorLink, PrivateWrite)
	struct FUniqueNetId                                CustomMatchOwner;                                          // 0x0218(0x0048) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameLanServer_X");
		return ptr;
	}



	void StartReservationTimeout();
	void PlayerLoggedOut(class APlayerReplicationInfo* PRI);
	bool AllowSplitscreenJoin(const struct FUniqueNetId& PrimaryPlayerId, const struct FUniqueNetId& PlayerID, const struct FString& PlayerName, struct FString* Error);
	void PlayerLoggedIn(class APlayerReplicationInfo* PRI);
	void AllowPlayerLogin(const struct FString& Options, const struct FUniqueNetId& PlayerID, struct FString* ErrorMessage);
	void TravelToMap(const struct FString& ServerCommand);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	void GoToNextMap();
	void ClearSettings();
	void HandleReservationsTimeout();
	struct U_Types_X_FCustomMatchSettings GetCustomMatchSettings();
	struct FUniqueNetId GetCustomMatchOwner();
	void UpdateCustomMatchOwner(const struct FUniqueNetId& NewOwner);
	void SetupPrivateMatch(const struct U_Types_X_FCustomMatchSettings& Settings, const struct FUniqueNetId& Creator);
	void OnInit();
};

// Class ProjectX.IOnlineGameHost_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UIOnlineGameHost_X : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.IOnlineGameHost_X");
		return ptr;
	}



	struct FUniqueNetId GetCustomMatchOwner();
	struct U_Types_X_FCustomMatchSettings GetCustomMatchSettings();
	bool AllowSplitscreenJoin(const struct FUniqueNetId& PrimaryPlayerId, const struct FUniqueNetId& PlayerID, const struct FString& PlayerName, struct FString* Error);
	void PlayerLoggedOut(class APlayerReplicationInfo* PRI);
	void PlayerLoggedIn(class APlayerReplicationInfo* PRI);
	void AllowPlayerLogin(const struct FString& Options, const struct FUniqueNetId& PlayerID, struct FString* ErrorMessage);
};

// Class ProjectX.OnlineGameJoinGame_X
// 0x03D8 (FullSize[0x0470] - InheritedSize[0x0098])
class UOnlineGameJoinGame_X : public UOnline_X
{
public:
	int                                                JoinCountdownTime;                                         // 0x0098(0x0004) (Edit)
	unsigned char                                      UnknownData_CUVX[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     FailCommand;                                               // 0x00A0(0x0010) (Edit, NeedCtorLink)
	struct FString                                     LoadingScreenCommand;                                      // 0x00B0(0x0010) (Edit, NeedCtorLink)
	class UShakeComponent_X*                           JoinGameShake;                                             // 0x00C0(0x0008) (Edit, ExportObject, Component, EditInline)
	class UReservationBeacon_X*                        ReservationBeacon;                                         // 0x00C8(0x0008) (ExportObject, Component, EditInline)
	struct FString                                     WaitingForPlayersString;                                   // 0x00D0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     ReservationNotRespondingString;                            // 0x00E0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     ReservationFullString;                                     // 0x00F0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     PartyTeamReservationFullString;                            // 0x0100(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     NoFriendJoinPrivateMatchString;                            // 0x0110(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     BeaconTimedOutString;                                      // 0x0120(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     NotAllPlayersJoinedString;                                 // 0x0130(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     CanceledString;                                            // 0x0140(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     SecurityKeyAcquisitionFailed;                              // 0x0150(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     SecurityKeyVerificationFailed;                             // 0x0160(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     SendingReservationMessage;                                 // 0x0170(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     JoiningPartyLeadersGame;                                   // 0x0180(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     InvalidPassword;                                           // 0x0190(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     WrongPlaylistString;                                       // 0x01A0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     WrongRankedMatchString;                                    // 0x01B0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     MatchEndedString;                                          // 0x01C0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     CrossplayDisabled;                                         // 0x01D0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     AnotherPlayerCanceled;                                     // 0x01E0(0x0010) (Const, Localized, NeedCtorLink)
	struct FActiveServerData                           ActiveServer;                                              // 0x01F0(0x00C0) (Transient, NeedCtorLink, PrivateWrite)
	unsigned long                                      bUseNetworkNextDriver : 1;                                 // 0x02B0(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_SSND[0x4];                                     // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FJoinMatchSettings                          Settings;                                                  // 0x02B8(0x0020) (Transient, NeedCtorLink, PrivateWrite)
	struct FString                                     PendingFailMessage;                                        // 0x02D8(0x0010) (Transient, NeedCtorLink)
	TArray<class UPlayer*>                             JoinedPlayers;                                             // 0x02E8(0x0010) (Transient, NeedCtorLink)
	struct U_Types_X_FCustomMatchSettings              CustomMatch;                                               // 0x02F8(0x0090) (NeedCtorLink, PrivateWrite)
	TArray<class URPC_GenerateKeys_X*>                 GenerateKeysRPCs;                                          // 0x0388(0x0010) (Transient, NeedCtorLink)
	struct FScriptDelegate                             __EventJoinGameComplete__Delegate;                         // 0x0398(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_GQ2A[0xC];                                     // 0x0398(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventStatusUpdate__Delegate;                             // 0x03B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_THSJ[0xC];                                     // 0x03B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventCountdownStarted__Delegate;                         // 0x03C8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_3H5P[0xC];                                     // 0x03C8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventCountdownEnded__Delegate;                           // 0x03E0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_DU05[0xC];                                     // 0x03E0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventActiveServerChanged__Delegate;                      // 0x03F8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_Y21L[0xC];                                     // 0x03F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventServerReserved__Delegate;                           // 0x0410(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_TH42[0xC];                                     // 0x0410(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPasswordRequired__Delegate;                         // 0x0428(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_COXK[0xC];                                     // 0x0428(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventJoiningGame__Delegate;                              // 0x0440(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_MLTN[0xC];                                     // 0x0440(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventMaxPlayersChanged__Delegate;                        // 0x0458(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_W3WZ[0xC];                                     // 0x0458(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameJoinGame_X");
		return ptr;
	}



	void HandleCanPlayOnline(class UPrivilegeCheck_X* PrivilegeCheck);
	void RemoveKeysRPC(class URPC_X* RPC);
	void SendGenerateKeysRPCs();
	void HandleGenerateKeys(class URPC_GenerateKeys_X* RPC);
	void SetNetworkKeys(class URPC_GenerateKeys_X* RPC);
	void GoToNextState();
	void HandleCancelJoin(class UObject* Message);
	void SendReservation();
	void SendReservationMessage();
	class UMatchmakingMetrics_X* GetMetrics();
	void HandleConnection(class UReservationBeacon_X* Beacon);
	void HandleDisconnection(class UReservationBeacon_X* Beacon);
	void JoinServer(class UReservationsReadyMessage_X* Message);
	void TravelToServer();
	class UAddReservationMessage_X* CreateReservationMessage();
	void SendServerReservedEvent();
	void StartConnectToServer();
	void CheckAllLocalPlayersHaveJoined(class UPlayer* JoinedPlayer);
	void HandleInternetConnectionChanged(bool bConnected);
	void OnAllPlayersJoined();
	void MigrateToNewServer(const struct FServerConnectionInfo& ConnectionInfo);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool IsInTransition();
	void SendPing();
	void GotoJoinGameState(const struct FName& NewStateName);
	void HandleConnectionResponse(class UObject* Message);
	void HandleReservationResponse(class UObject* Message);
	void HandleConnectionFailed(TEnumAsByte<Engine_EProgressMessageType> MessageType, const struct FString& Title, const struct FString& Message);
	void OnJoinGameComplete(bool bSuccess, const struct FString& FailReason);
	void SetActiveServerData(struct FActiveServerData* NewValue);
	void ClearActiveServerData();
	void HandleGameInfoSpawned(class AGameInfo_X* InGameInfo);
	bool IsJoiningGame();
	void CancelJoin();
	bool StartJoinCustomMatch(const struct FServerReservationData& Reservation, struct U_Types_X_FCustomMatchSettings* InSettings, const struct FJoinMatchSettings& JoinSettings);
	bool StartJoinPrivateMatch(const struct FServerReservationData& Reservation, struct U_Types_X_FCustomMatchSettings* InSettings, const struct FJoinMatchSettings& JoinSettings);
	bool StartJoin(const struct FServerReservationData& Reservation, const struct FJoinMatchSettings& JoinSettings);
	void OnInit();
	void EventMaxPlayersChanged(class UOnlineGameJoinGame_X* OnlineGameJoinGame, int MaxPlayers);
	void EventJoiningGame(class UOnlineGameJoinGame_X* OnlineGameJoinGame);
	void EventPasswordRequired();
	void EventServerReserved();
	void EventActiveServerChanged();
	void EventCountdownEnded();
	void EventCountdownStarted();
	void EventStatusUpdate(const struct FString& NewStatus);
	void EventJoinGameComplete(bool bSuccess, const struct FString& FailReason);
};

// Class ProjectX.PreExitEvent_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPreExitEvent_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PreExitEvent_X");
		return ptr;
	}



};

// Class ProjectX.Explosion_X
// 0x0018 (FullSize[0x0280] - InheritedSize[0x0268])
class AExplosion_X : public AActor
{
public:
	class UExplosionComponent_X*                       ExplosionComponent;                                        // 0x0268(0x0008) (Edit, ExportObject, Component, EditInline)
	class AFXActor_X*                                  FXActorArchetype;                                          // 0x0270(0x0008) (Edit, Net, RepNotify)
	class AFXActor_X*                                  FXActor;                                                   // 0x0278(0x0008) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Explosion_X");
		return ptr;
	}



	void Destroyed();
	void ForceNetRelevant();
	void SetFXActorArchetype(class AFXActor_X* A);
	void SpawnFX();
	void SetExplosionHandler(TArray<class UExplosionHitHandler_X*> InExplosionHandlers, const struct FBox& GoalBox, class UActorComponent_X* ExplosionGoal);
	void PostBeginPlay();
	void ReplicatedEvent(const struct FName& VarName);
};

// Class ProjectX.SeqAct_TriggerFXActor_X
// 0x0010 (FullSize[0x0170] - InheritedSize[0x0160])
class USeqAct_TriggerFXActor_X : public USequenceAction
{
public:
	class UFXActorEvent_X*                             Event;                                                     // 0x0160(0x0008) (Edit)
	class AActor*                                      AttachTo;                                                  // 0x0168(0x0008) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SeqAct_TriggerFXActor_X");
		return ptr;
	}



};

// Class ProjectX.GameInfo_MapProfiler_X
// 0x0000 (FullSize[0x04C8] - InheritedSize[0x04C8])
class AGameInfo_MapProfiler_X : public AGameInfo_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GameInfo_MapProfiler_X");
		return ptr;
	}



	void GenericPlayerInitialization(class AController* C);
	class APlayerController* SpawnPlayerController(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
};

// Class ProjectX.PlaylistSettings_X
// 0x00B8 (FullSize[0x0118] - InheritedSize[0x0060])
class UPlaylistSettings_X : public UObject
{
public:
	struct FString                                     Title;                                                     // 0x0060(0x0010) (Edit, NeedCtorLink)
	struct FString                                     Description;                                               // 0x0070(0x0010) (Edit, NeedCtorLink)
	int                                                PlaylistId;                                                // 0x0080(0x0004) (Edit)
	int                                                PlayerCount;                                               // 0x0084(0x0004) (Edit)
	unsigned long                                      bStandard : 1;                                             // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bRanked : 1;                                               // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bCheckRankedMatchReservationID : 1;                        // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bSolo : 1;                                                 // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bHidden : 1;                                               // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bExtraMode : 1;                                            // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bPrivate : 1;                                              // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bTournament : 1;                                           // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bApplyQuitPenalty : 1;                                     // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAllowForfeit : 1;                                         // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bDisableRankedReconnect : 1;                               // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bIgnoreAssignTeams : 1;                                    // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bKickOnMigrate : 1;                                        // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAllowBotFills : 1;                                        // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bIsMicroEventPlaylist : 1;                                 // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bHasVariablePlayerCount : 1;                               // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bNew : 1;                                                  // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAllowClubs : 1;                                           // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAllowStayAsParty : 1;                                     // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData_8OSH[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlaylistImageURL;                                          // 0x0090(0x0010) (Edit, NeedCtorLink)
	struct FString                                     PlaylistImageTexture;                                      // 0x00A0(0x0010) (Edit, NeedCtorLink)
	struct FString                                     PlaylistIconActiveURL;                                     // 0x00B0(0x0010) (Edit, NeedCtorLink)
	struct FString                                     PlaylistIconInactiveURL;                                   // 0x00C0(0x0010) (Edit, NeedCtorLink)
	class UTimeWindow*                                 PlaylistTimeWindow;                                        // 0x00D0(0x0008) (Edit)
	TArray<class UPresetMutators_X*>                   PresetMutators;                                            // 0x00D8(0x0010) (Edit, NeedCtorLink)
	struct FName                                       MapName;                                                   // 0x00E8(0x0008) (Edit)
	struct FString                                     ServerCommand;                                             // 0x00F0(0x0010) (Edit, NeedCtorLink)
	struct FName                                       MapSetName;                                                // 0x0100(0x0008) (Edit)
	TArray<int>                                        PopulationBuckets;                                         // 0x0108(0x0010) (Edit, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PlaylistSettings_X");
		return ptr;
	}



};

// Class ProjectX.GFxModal_X
// 0x0068 (FullSize[0x00C8] - InheritedSize[0x0060])
class UGFxModal_X : public UObject
{
public:
	struct FString                                     ActionScriptModalName;                                     // 0x0060(0x0010) (Edit, Const, NeedCtorLink)
	class UGFxObject*                                  GFxPopup;                                                  // 0x0070(0x0008)
	TArray<struct FScriptDelegate>                     Callbacks;                                                 // 0x0078(0x0010) (Transient, NeedCtorLink)
	struct FString                                     ConfirmString;                                             // 0x0088(0x0010) (Edit, Const, Localized, NeedCtorLink)
	struct FScriptDelegate                             __ClickDelegate__Delegate;                                 // 0x0098(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_DCNG[0xC];                                     // 0x0098(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventClosed__Delegate;                                   // 0x00B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_4EAG[0xC];                                     // 0x00B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxModal_X");
		return ptr;
	}



	class UGFxModal_X* NotifyOnClosed(const struct FScriptDelegate& Callback);
	void Close();
	void FlashAddButton(const struct FString& Label);
	void FlashAddCancelButton(const struct FString& LocalizedText);
	void HandleButtonClicked(int Index);
	class UGFxModal_X* AddButtonCallback(int Index, const struct FScriptDelegate& OnClick);
	class UGFxModal_X* AddButton(const struct FString& Label, const struct FScriptDelegate& OnClick);
	class UGFxModal_X* AddCancelButton(const struct FString& LocalizedText, const struct FScriptDelegate& OnClick);
	class UGFxModal_X* SetCancellable(bool bCancellable);
	class UGFxModal_X* SetDefaultSelectedButtonIndex(int buttonIndex);
	class UGFxModal_X* SetIcon(const struct FString& IconName);
	class UGFxModal_X* SetBody(const struct FString& LocalizedText);
	class UGFxModal_X* SetTitle(const struct FString& LocalizedText);
	void SetGFxObject(class UGFxObject* Obj);
	void EventClosed(class UGFxModal_X* Modal);
	void ClickDelegate(class UGFxModal_X* Modal);
};

// Class ProjectX.GRI_X
// 0x03B8 (FullSize[0x0690] - InheritedSize[0x02D8])
class AGRI_X : public AGameReplicationInfo
{
public:
	int                                                ReplicatedGamePlaylist;                                    // 0x02D8(0x0004) (Net, Transient, RepNotify, PrivateWrite)
	int                                                ReplicatedGameMutatorIndex;                                // 0x02DC(0x0004) (Net, Transient, RepNotify, PrivateWrite)
	struct FReplicatedReservationData                  Reservations[0x8];                                         // 0x02E0(0x0300) (Net, Transient, NeedCtorLink, RepNotify, PrivateWrite)
	unsigned char                                      GameServerID[0x8];                                         // 0x05E0(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.GRI_X.GameServerID
	unsigned long                                      bGameStarted : 1;                                          // 0x05E8(0x0001) BIT_FIELD (Net, Transient, RepNotify, PrivateWrite)
	unsigned long                                      bGameEnded : 1;                                            // 0x05E8(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownData_S6Z9[0x4];                                     // 0x05EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MatchGUID;                                                 // 0x05F0(0x0010) (Net, NeedCtorLink, RepNotify, PrivateWrite)
	struct FScriptDelegate                             __EventSpawned__Delegate;                                  // 0x0600(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_QA6X[0xC];                                     // 0x0600(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventGameDataSelected__Delegate;                         // 0x0618(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_DPVX[0xC];                                     // 0x0618(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventReservationsUpdated__Delegate;                      // 0x0630(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_1O7M[0xC];                                     // 0x0630(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventServerNameChanged__Delegate;                        // 0x0648(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_ZZLD[0xC];                                     // 0x0648(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventGameStarted__Delegate;                              // 0x0660(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_EFK2[0xC];                                     // 0x0660(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventMatchGUIDChanged__Delegate;                         // 0x0678(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_MBU9[0xC];                                     // 0x0678(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GRI_X");
		return ptr;
	}



	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void SetMatchGUID(const struct FString& Id);
	void HandleMatchGUIDChanged(class UOnlineGameDedicatedServer_X* OnlineGameDS);
	bool IsPlaylistRanked();
	class UGameSettingPlaylist_X* GetPlaylist();
	bool PlayerIsInCurrentGame(const struct FUniqueNetId& MemberId);
	struct FString GetReservationDebugString(const struct FReplicatedReservationData& Data);
	class UOnlineGameDedicatedServer_X* GetOnlineGameDedicated();
	class UOnlineGame_Base_X* GetOnlineGameBase();
	class UOnlineGame_X* GetOnlineGame();
	bool HasSelectedGameData();
	void SetGameStarted();
	void SetOfflineGameData(const struct FName& PlaylistName);
	void NotifyOnGameDataSelected(const struct FScriptDelegate& Callback);
	void SetGameData(int NewPlaylistID, int MutatorIndex);
	void HandleGamePlaylistSet(class UOnlineGameDedicatedServer_X* DedicatedServer);
	void OnReservationsUpdated();
	void SetReservations(TArray<struct FReplicatedReservationData> InReservations, struct FReplicatedReservationData* StructInitializer_04092EC242346EC78CBACEA947A5F67D);
	struct FReplicatedReservationData ConvertReservation(const struct FReservationData& Data, struct FReplicatedReservationData* StructInitializer_8E51D9FA4C9EE329429CA297AF56EEFE);
	void UpdateReservations(TArray<struct FReplicatedReservationData>* MapLocal_1B04D666486A926CF3C7F2B06EE0E909);
	void ReplicatedEvent(const struct FName& VarName);
	void PostBeginPlay();
	void EventMatchGUIDChanged(class AGRI_X* GRI);
	void EventGameStarted(class AGRI_X* GRI);
	void EventServerNameChanged(class AGRI_X* GRI);
	void EventReservationsUpdated(class AGRI_X* GRI);
	void EventGameDataSelected(int PlaylistId, int MutatorIndex);
	void EventSpawned(class AGRI_X* GRI);
};

// Class ProjectX.LanMessage_X
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class ULanMessage_X : public UOnlineMessage_X
{
public:
	unsigned char                                      Nonce[0x8];                                                // 0x0060(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.LanMessage_X.Nonce


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LanMessage_X");
		return ptr;
	}



	bool Broadcast();
	class ULanMessage_X* SetNonce();
};

// Class ProjectX.LanMessage_HostQuery_X
// 0x0098 (FullSize[0x0100] - InheritedSize[0x0068])
class ULanMessage_HostQuery_X : public ULanMessage_X
{
public:
	struct U_Types_X_FCustomMatchSettings              Filter;                                                    // 0x0068(0x0090) (NeedCtorLink)
	int                                                BuildID;                                                   // 0x00F8(0x0004)
	unsigned long                                      bHost : 1;                                                 // 0x00FC(0x0001) BIT_FIELD


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LanMessage_HostQuery_X");
		return ptr;
	}



	class ULanMessage_HostQuery_X* SetHost(bool bValue);
	class ULanMessage_HostQuery_X* SetBuildID(int InBuildID);
	class ULanMessage_HostQuery_X* SetFilter(const struct U_Types_X_FCustomMatchSettings& InFilter);
};

// Class ProjectX.LanMessage_HostResponse_X
// 0x00D0 (FullSize[0x0138] - InheritedSize[0x0068])
class ULanMessage_HostResponse_X : public ULanMessage_X
{
public:
	struct FServerResult                               Result;                                                    // 0x0068(0x00B0) (NeedCtorLink)
	struct FString                                     ServerId;                                                  // 0x0118(0x0010) (NeedCtorLink)
	struct FString                                     MetaData;                                                  // 0x0128(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LanMessage_HostResponse_X");
		return ptr;
	}



	struct FString GetDebugString();
	class ULanMessage_HostResponse_X* SetMetaData(const struct FString& InMetaData);
	class ULanMessage_HostResponse_X* SetServerID(const struct FString& InServerID);
	class ULanMessage_HostResponse_X* SetResult(const struct FServerResult& InResult);
};

// Class ProjectX.LanMessage_Ping_X
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class ULanMessage_Ping_X : public ULanMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LanMessage_Ping_X");
		return ptr;
	}



};

// Class ProjectX.MatchEndedMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UMatchEndedMessage_X : public UBeaconMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MatchEndedMessage_X");
		return ptr;
	}



};

// Class ProjectX.MaterialEffect_X
// 0x0038 (FullSize[0x00C8] - InheritedSize[0x0090])
class UMaterialEffect_X : public UMaterialEffect
{
public:
	struct FName                                       TimeParamName;                                             // 0x0090(0x0008) (Edit)
	float                                              FadeInTime;                                                // 0x0098(0x0004) (Edit)
	float                                              FadeInFalloff;                                             // 0x009C(0x0004) (Edit)
	float                                              FadeOutTime;                                               // 0x00A0(0x0004) (Edit)
	float                                              FadeOutFalloff;                                            // 0x00A4(0x0004) (Edit)
	float                                              ActiveTime;                                                // 0x00A8(0x0004) (Edit)
	float                                              ValueMin;                                                  // 0x00AC(0x0004) (Edit)
	float                                              ValueMax;                                                  // 0x00B0(0x0004) (Edit)
	unsigned char                                      UnknownData_Q6JB[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceConstant*                   MatInst;                                                   // 0x00B8(0x0008) (Transient)
	TEnumAsByte<ProjectX_EMaterialEffectStage>         Stage;                                                     // 0x00C0(0x0001) (Transient)
	unsigned char                                      UnknownData_L5FJ[0x3];                                     // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StageTime;                                                 // 0x00C4(0x0004) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MaterialEffect_X");
		return ptr;
	}



	struct FString GetActiveEffects();
	bool HasAnyEffectsActive();
	float GetMaterialParameterValue(const struct FName& MaterialParamName);
	void SetMaterialParameterLinearColorValue(const struct FName& MaterialParamName, const struct FLinearColor& NewValue);
	void SetMaterialParameterValue(const struct FName& MaterialParamName, float NewValue);
	void HandleParametersChanged();
	void UpdateFade(float Alpha);
	void SetStage(TEnumAsByte<ProjectX_EMaterialEffectStage> NewStage);
	bool Tick(float dt);
	void End();
	void Start();
	void Init();
	bool IsInitialized();
};

// Class ProjectX.EpicConfig_X
// 0x0058 (FullSize[0x00D0] - InheritedSize[0x0078])
class UEpicConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bPollDuringAccountLinking : 1;                             // 0x0078(0x0001) BIT_FIELD (Edit)
	int                                                SecondsBetweenPolling;                                     // 0x007C(0x0004) (Edit)
	int                                                SecondsBeforeRequestsTimeout;                              // 0x0080(0x0004) (Edit)
	int                                                SecondsToWaitBeforeRetryingAuth;                           // 0x0084(0x0004) (Edit)
	int                                                SecondsToWaitBeforeUpdatingFriendsList;                    // 0x0088(0x0004) (Edit)
	unsigned char                                      UnknownData_F221[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ULocalizedAccountLinkURL*>            AccountLinkURLOverrides;                                   // 0x0090(0x0010) (Edit, NeedCtorLink)
	struct FString                                     DefaultAccountLinkURL;                                     // 0x00A0(0x0010) (Edit, NeedCtorLink)
	struct FString                                     SandboxId;                                                 // 0x00B0(0x0010) (Edit, Config, NeedCtorLink)
	struct FString                                     DeploymentId;                                              // 0x00C0(0x0010) (Edit, Config, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EpicConfig_X");
		return ptr;
	}



	void Apply();
};

// Class ProjectX.OnlineClubProvider_X
// 0x0068 (FullSize[0x00C8] - InheritedSize[0x0060])
class UOnlineClubProvider_X : public UObject
{
public:
	class UOnlineClubCache_X*                          Cache;                                                     // 0x0060(0x0008) (ExportObject, Component, EditInline)
	TArray<class URPC_GetClubDetails_X*>               SyncingClubs;                                              // 0x0068(0x0010) (NeedCtorLink)
	TArray<class URPC_GetPlayerClubDetails_X*>         SyncingPlayers;                                            // 0x0078(0x0010) (NeedCtorLink)
	TArray<struct FPlayerClubSyncResult>               PlayerClubSyncResults;                                     // 0x0088(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __EventSyncComplete__Delegate;                             // 0x0098(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_G6RW[0xC];                                     // 0x0098(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlayerSynced__Delegate;                             // 0x00B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_L8RT[0xC];                                     // 0x00B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineClubProvider_X");
		return ptr;
	}



	void ClubSynced(class UClubDetails_X* Club);
	bool IsSyncing();
	void NotifyWhenSyncComplete(const struct FScriptDelegate& Callback);
	struct FPlayerClubSyncResult GetPlayerClubSyncResult(const struct FUniqueNetId& PlayerID, struct FPlayerClubSyncResult* StructInitializer_1742D7324AAE064D45E1C4AB44EA7F91);
	void SetPlayerClubSyncResult(const struct FUniqueNetId& PlayerID, class UError* Error, struct FPlayerClubSyncResult* StructInitializer_A900BEE44AEA8660866AA6BE958A5986);
	void HandlePlayerSynced(class URPC_GetPlayerClubDetails_X* RPC);
	class UTAsyncResult__ClubDetails_X* SyncPlayerClubDetails(const struct FUniqueNetId& PlayerID);
	class UTAsyncResult__ClubDetails_X* GetPlayerClubDetails(const struct FUniqueNetId& PlayerID);
	void HandleClubSynced(class URPC_GetClubDetails_X* RPC);
	class UTAsyncResult__ClubDetails_X* SyncClubDetails();
	class UTAsyncResult__ClubDetails_X* GetClubDetails();
	void EventPlayerSynced(class UOnlineClubProvider_X* Provider, const struct FUniqueNetId& PlayerID);
	void EventSyncComplete(class UOnlineClubProvider_X* Provider);
};

// Class ProjectX.OnlineConfigDispatcher_X
// 0x0004 (FullSize[0x0064] - InheritedSize[0x0060])
class UOnlineConfigDispatcher_X : public UObject
{
public:
	unsigned long                                      bDebug : 1;                                                // 0x0060(0x0001) BIT_FIELD (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineConfigDispatcher_X");
		return ptr;
	}



	struct FString GetDebugString(class UOnlineConfig_X* Config);
	void UndoConfigObject(class UOnlineConfig_X* Config);
	void ApplyConfigObject(class UOnlineConfig_X* Config);
	void Construct();
};

// Class ProjectX.WebCache_X
// 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
class UWebCache_X : public UObject
{
public:
	TArray<struct FCachedDataRequest>                  Requests;                                                  // 0x0060(0x0010) (Transient, Component, NeedCtorLink)
	struct FScriptDelegate                             __CachedDataCallback__Delegate;                            // 0x0070(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_X4Y0[0xC];                                     // 0x0070(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.WebCache_X");
		return ptr;
	}



	struct FString GetRequestDebugString(const struct FCachedDataRequest& Request);
	void HandleWebRequest(class UWebRequest_X* WebRequest);
	void DownloadData(const struct FString& URL, const struct FString& ETag, class UStringMap* Headers, bool bZipResponse);
	void HandleLoadFromCache(class ULocalCache_X* Cache, class UCachedWebData_X* CacheObject, class UError* Error);
	void RaiseUrlEmptyError(const struct FScriptDelegate& Callback);
	void SyncDataInternal(const struct FString& URL, const struct FScriptDelegate& Callback, bool bZipResponse, class UStringMap* Headers);
	void SyncDataZipped(const struct FString& URL, const struct FScriptDelegate& Callback, class UStringMap* Headers);
	void SyncData(const struct FString& URL, const struct FScriptDelegate& Callback, class UStringMap* Headers);
	struct FString GetCachedPath(const struct FString& URL);
	void CachedDataCallback(class UCachedWebData_X* CachedData);
};

// Class ProjectX.WebImageCache_X
// 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
class UWebImageCache_X : public UObject
{
public:
	class UImageDecoder*                               Decoder;                                                   // 0x0060(0x0008)
	class UStringObjectMap*                            Downloads;                                                 // 0x0068(0x0008) (ExportObject, Component, EditInline)
	struct FScriptDelegate                             __ImageSyncCallback__Delegate;                             // 0x0070(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_RKF9[0xC];                                     // 0x0070(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.WebImageCache_X");
		return ptr;
	}



	void SyncImageURL(const struct FString& URL, const struct FScriptDelegate& Callback);
	void HandleImageDecoded(class UWebImageDownload_X* Download, const struct FImageLayout& Image);
	void SetDownloadError(class UWebImageDownload_X* Download, class UError* Error);
	void HandleImageData(class UWebImageDownload_X* Download, class UCachedWebData_X* Data);
	class UWebImageDownload_X* StartSync(const struct FString& URL);
	void HandleUncachedImageDownload(class UTAsyncResult__Texture2DDynamic* Task, class UTexture2DDynamic* Texture);
	class UTAsyncResult__Texture2DDynamic* SyncUncachedImage(const struct FString& URL, bool bSRGB, TArray<struct FString>* ArrayInitializer_F683634F49517AA8C496A0A6616574E7);
	class UWebImageDownload_X* GetDownload(const struct FString& URL);
	class UTAsyncResult__Texture2DDynamic* SyncImageSRGB(const struct FString& URL);
	class UTAsyncResult__Texture2DDynamic* SyncImage(const struct FString& URL);
	void Construct();
	void ImageSyncCallback(class UTexture2DDynamic* Texture);
};

// Class ProjectX.OnlineGameWordFilter_X
// 0x0020 (FullSize[0x00B8] - InheritedSize[0x0098])
class UOnlineGameWordFilter_X : public UOnline_X
{
public:
	TArray<struct FWordFilterPair>                     Filtered;                                                  // 0x0098(0x0010) (Transient, NeedCtorLink)
	class UWordFilterConfig_X*                         Config;                                                    // 0x00A8(0x0008) (Edit)
	class UPsyNetWordFilter_X*                         PsyNetWordFilter;                                          // 0x00B0(0x0008) (ExportObject, Component, EditInline)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameWordFilter_X");
		return ptr;
	}



	struct FString SanitizePhraseAndNotify(const struct FString& Comment, const struct FScriptDelegate& Callback);
	struct FString SanitizePhrase(const struct FString& Comment);
	class UError* CreateError(struct FWordFilterResult* Result, TEnumAsByte<ProjectX_EWordFilterUsage> Usage);
	bool IsChat(TEnumAsByte<ProjectX_EWordFilterUsage> Usage);
	void HandleCommentSanitized(const struct FString& Id, struct FWordFilterResult* Result);
	bool StartWordFilterTask(TEnumAsByte<ProjectX_EWordFilterUsage> Usage, const struct FString& Comment, const struct FScriptDelegate& SanitizeDelegate, const struct FUniqueNetId& PlayerID);
	struct FString InternalSanitize(const struct FString& Comment, const struct FScriptDelegate& Callback, const struct FScriptDelegate& ErrorCallback, TEnumAsByte<ProjectX_EWordFilterUsage> Usage, const struct FUniqueNetId& PlayerID);
	bool IsPending(const struct FString& Comment);
	struct FString Sanitize(TEnumAsByte<ProjectX_EWordFilterUsage> Usage, const struct FString& Comment, const struct FScriptDelegate& Callback, const struct FScriptDelegate& ErrorCallback, const struct FUniqueNetId& PlayerID);
	struct FString SanitizePlayerName(TEnumAsByte<Core_EOnlinePlatform> PlayerPlatform, const struct FString& PlayerName, const struct FScriptDelegate& Callback, const struct FScriptDelegate& ErrorCallback, const struct FUniqueNetId& PlayerID);
	void OnMainMenuOpened();
};

// Class ProjectX.OnlineGameWordFilterProcessor_X
// 0x0030 (FullSize[0x00C8] - InheritedSize[0x0098])
class UOnlineGameWordFilterProcessor_X : public UOnline_X
{
public:
	float                                              ResponseDelay;                                             // 0x0098(0x0004) (Const)
	unsigned char                                      UnknownData_GKKS[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FWordFilterRequest>                  SanitizeCallbacks;                                         // 0x00A0(0x0010) (Transient, NeedCtorLink)
	struct FScriptDelegate                             __OnSanitizeStringComplete__Delegate;                      // 0x00B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_1Q6G[0xC];                                     // 0x00B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameWordFilterProcessor_X");
		return ptr;
	}



	void TriggerCallbacks(int Index);
	void ProcessSanitizedDelayed();
	void HandleWordSanitized(class UWebRequest_X* Request);
	bool SanitizeString(const struct FString& Comment, const struct FScriptDelegate& SanitizeDelegate);
	void OnSanitizeStringComplete(const struct FString& Original, const struct FString& Sanitized);
};

// Class ProjectX.OnlineGamePrivileges_X
// 0x0048 (FullSize[0x00E0] - InheritedSize[0x0098])
class UOnlineGamePrivileges_X : public UOnline_X
{
public:
	TArray<class UPrivilegeCheck_X*>                   PendingChecks;                                             // 0x0098(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	unsigned long                                      bIsCheckingPrivileges : 1;                                 // 0x00A8(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownData_PZAT[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             __EventCheckingPrivilegesChanged__Delegate;                // 0x00B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_5M4P[0xC];                                     // 0x00AC(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPrivilegeCheckRestriction__Delegate;                // 0x00C8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_1CHA[0xC];                                     // 0x00C8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGamePrivileges_X");
		return ptr;
	}



	bool IsCheckingPrivileges();
	void RemoveCallback(const struct FScriptDelegate& Callback);
	void HandlePrivilegeCheckFinished(class UPrivilegeCheck_X* PrivilegeCheck);
	class UPrivilegeCheck_X* CreatePrivilegeCheck(int ControllerId, const struct FScriptDelegate& Callback);
	void TryToUseUGC(int ControllerId, const struct FScriptDelegate& Callback);
	void TryToPlayOnline(int ControllerId, const struct FScriptDelegate& Callback);
	void TryToUsePsyNet(int ControllerId, const struct FScriptDelegate& Callback);
	void TryToViewLeaderboards(int ControllerId, const struct FScriptDelegate& Callback);
	void TryToBrowseInternet(int ControllerId, const struct FScriptDelegate& Callback);
	void EventPrivilegeCheckRestriction(class UPrivilegeCheck_X* Check);
	void EventCheckingPrivilegesChanged(class UOnlineGamePrivileges_X* PrivilegesObject);
};

// Class ProjectX.RPC_GetGameServerPingList_X
// 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
class URPC_GetGameServerPingList_X : public URPC_X
{
public:
	TArray<struct FRegionSecret>                       Regions;                                                   // 0x00E8(0x0010) (NeedCtorLink, PrivateWrite)
	TArray<struct FGetGameServerPingListData>          Servers;                                                   // 0x00F8(0x0010) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetGameServerPingList_X");
		return ptr;
	}



	class URPC_GetGameServerPingList_X* SetRegionSecrets(TArray<struct FRegionSecret>* InRegions);
	void OnSuccess();
};

// Class ProjectX.OnlineGameRegions_X
// 0x0098 (FullSize[0x0130] - InheritedSize[0x0098])
class UOnlineGameRegions_X : public UOnline_X
{
public:
	float                                              PingRegionsCacheTime;                                      // 0x0098(0x0004) (Edit)
	float                                              LastPingRegionsTime;                                       // 0x009C(0x0004) (Transient)
	int                                                RegionIdxPingCur;                                          // 0x00A0(0x0004)
	unsigned char                                      UnknownData_KXE0[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class URegionConfig_X*                             Config;                                                    // 0x00A8(0x0008) (PrivateWrite)
	TArray<class URegionPing_X*>                       RegionPings;                                               // 0x00B0(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	TArray<struct FCachedRegionPing>                   CachedRegionPings;                                         // 0x00C0(0x0010) (Transient, NeedCtorLink, ProtectedWrite)
	class UTcpMessageBeacon*                           Beacon;                                                    // 0x00D0(0x0008) (ExportObject, Component, EditInline)
	class UBeaconConfig_X*                             BeaconConfig;                                              // 0x00D8(0x0008)
	unsigned long                                      bWaitingToPingRegions : 1;                                 // 0x00E0(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned long                                      bPingingRegions : 1;                                       // 0x00E0(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownData_PTBT[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             __EventRegionsSynced__Delegate;                            // 0x00E8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_48X2[0xC];                                     // 0x00E4(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventRegionsPinged__Delegate;                            // 0x0100(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_I6S8[0xC];                                     // 0x0100(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventRegionsError__Delegate;                             // 0x0118(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_S64E[0xC];                                     // 0x0118(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameRegions_X");
		return ptr;
	}



	struct FString __OnlineGameRegions_X__HandleGetPingRegionPingsRPC_5426E1A64EEB05DABE4BC18BA73DA3AA(class URegionPing_X* R);
	bool __OnlineGameRegions_X__HandleGetPingRegionPingsRPC_3E3821E14F0FDDD8BB1736A4E31D03CC(class URegionPing_X* R);
	void __OnlineGameRegions_X__HandleGetPingRegionPingsRPC_D77DD5CA4843D2D76ABD2AB20A21B3EB(const struct FGetGameServerPingListData& Server);
	void __OnlineGameRegions_X__HandleGetPingRegionPingsRPC_9EAD7AAB4DA4BB398C7BBD880E573A20(class URegionPing_X* RegionPing);
	bool __OnlineGameRegions_X__HandlePingMessage_0C5CAC694B8F90EDEAA3E186DDF3AC8B(class URegionPing_X* RegionPing);
	struct FString GetLocalizedName(const struct FString& RegionID);
	bool Exists(const struct FString& RegionID);
	void SetCachedRegionPings(TArray<struct FCachedRegionPing>* InCachedRegionPings);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void NotifyWhenSynced(const struct FScriptDelegate& Callback);
	struct FString GetRegionDebugString(class URegionPing_X* RegionPing);
	struct FString GetRegionsDebugString(TArray<struct FString>* MapLocal_CBA90E6C47576F29172ABE8FF18FAD8E);
	int SortRegionDelegate(class URegionPing_X* A, class URegionPing_X* B);
	void FinalizeRegionPing(class URegionPing_X* RegionPing);
	void OnAllRegionsPinged();
	void HandlePingMessage(class UTcpConnection* Connection, class URegionPingMessage_X* PingMessage);
	void HandleBeaconMessage(class UTcpConnection* Connection, class UObject* Message);
	void PingRegionsPieceWise(int PingCount);
	void HandleRegionPinged(class URegionPingData_X* Data);
	void HandleRegionsPinged(class URegionPinger_X* Pinger);
	void HandleGetPingRegionPingsRPC(class URPC_GetGameServerPingList_X* RPC, TArray<class URegionPing_X*>* FilterLocal_C8377B94410919F65F17C4AB2CC64393, TArray<struct FString>* MapLocal_4D7E9CB64C5996FC99F665B24D1F5248);
	void PingRegions(const struct FScriptDelegate& Callback);
	void UpdateRegionPings();
	void OnRegionsSynced();
	void AddRegionPing(class URegion_X* Region, class URegionPing_X** ObjectInitializer_0D981FA34BD9349DF7C403A3297A4812);
	class URegionPing_X* GetRegionPing(const struct FString& RegionID);
	void OnInit();
	void EventRegionsError(class UOnlineGameRegions_X* RegionsObj, class UError* Error);
	void EventRegionsPinged(class UOnlineGameRegions_X* RegionsObj);
	void EventRegionsSynced(class UOnlineGameRegions_X* RegionsObj);
};

// Class ProjectX.OnlineGameInvite_X
// 0x0118 (FullSize[0x01B0] - InheritedSize[0x0098])
class UOnlineGameInvite_X : public UOnline_X
{
public:
	struct FUniqueNetId                                FriendJoinPlayerID;                                        // 0x0098(0x0048) (Transient, NeedCtorLink, PrivateWrite)
	struct FString                                     UnableToFindFriendsGameString;                             // 0x00E0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     AlreadyInSameServerString;                                 // 0x00F0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     FriendNotJoinable;                                         // 0x0100(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     GameInviteBeaconAddress;                                   // 0x0110(0x0010) (Transient, NeedCtorLink)
	struct FString                                     GameInviteCredentials;                                     // 0x0120(0x0010) (Transient, NeedCtorLink)
	struct FName                                       ActionRequired;                                            // 0x0130(0x0008) (Transient)
	struct FScriptDelegate                             __EventGameInviteAccepted__Delegate;                       // 0x0138(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_10J4[0xC];                                     // 0x0138(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventGameInviteComplete__Delegate;                       // 0x0150(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_UNOG[0xC];                                     // 0x0150(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventConfirmationRequired__Delegate;                     // 0x0168(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_Z9CQ[0xC];                                     // 0x0168(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPasswordRequired__Delegate;                         // 0x0180(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_XVW6[0xC];                                     // 0x0180(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetPartyInviteAccepted__Delegate;                // 0x0198(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_5VQZ[0xC];                                     // 0x0198(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameInvite_X");
		return ptr;
	}



	void HandleJoinGameComplete(bool bSuccess, const struct FString& FailReason);
	void HandlePasswordRequired();
	void HandleTaskSuccess(const struct FServerReservationData& Reservation);
	void __OnlineGameInvite_X__BeginState_DEFEE96C44631131B46C668B15BBBB0E(class UError* Error);
	void OnGameInviteComplete(bool bSuccess, const struct FString& FailReason);
	void JoinGameInviteGame(const struct FJoinMatchSettings& Settings, struct FServerReservationData* StructInitializer_C2B557EF4A315EE77159D7B7FB95FBAA);
	void OnGameInviteAccepted(struct FOnlineGameSearchResult* InviteResult, const struct FString& ErrorString);
	void OnInit();
	void EventPsyNetPartyInviteAccepted(const struct FString& PartyID);
	void EventPasswordRequired();
	void EventConfirmationRequired(const struct FName& ConfirmationReason);
	void EventGameInviteComplete(bool bSuccess, const struct FString& FailReason);
	void EventGameInviteAccepted();
};

// Class ProjectX.OnlineGameVoice_X
// 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
class UOnlineGameVoice_X : public UOnline_X
{
public:
	struct FScriptDelegate                             __EventPlayerTalking__Delegate;                            // 0x0098(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_KJ9M[0xC];                                     // 0x0098(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameVoice_X");
		return ptr;
	}



	unsigned char GetControllerID(class APlayerReplicationInfo* PRI);
	int GetNumTalkers();
	bool IsRemotePlayerTalking(class APlayerReplicationInfo* PRI);
	void HandlePlayerTalkingStateChange(const struct FUniqueNetId& PlayerID, bool bTalking);
	void UnregisterTalker(class UOnlinePlayer_X* Player);
	void RegisterTalker(class UOnlinePlayer_X* Player);
	void OnInit();
	void EventPlayerTalking(class UOnlineGameVoice_X* SelfRef, const struct FUniqueNetId& PlayerID, bool bTalking);
};

// Class ProjectX.RPC_GetPopulation_X
// 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
class URPC_GetPopulation_X : public URPC_X
{
public:
	TArray<struct FGetPopulationData>                  Playlists;                                                 // 0x00E8(0x0010) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetPopulation_X");
		return ptr;
	}



};

// Class ProjectX.OnlineGamePopulation_X
// 0x0040 (FullSize[0x00D8] - InheritedSize[0x0098])
class UOnlineGamePopulation_X : public UOnline_X
{
public:
	float                                              UpdatePopulationDelay;                                     // 0x0098(0x0004) (Edit)
	float                                              LastUpdatePopulationTime;                                  // 0x009C(0x0004) (Transient, PrivateWrite)
	class URPC_X*                                      GetPopulationRPC;                                          // 0x00A0(0x0008) (Transient, PrivateWrite)
	int                                                TotalPlayers;                                              // 0x00A8(0x0004) (Transient, PrivateWrite)
	unsigned char                                      UnknownData_6R04[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGetPopulationData>                  Populations;                                               // 0x00B0(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FScriptDelegate                             __EventGetPlaylistPopulations__Delegate;                   // 0x00C0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_TVI2[0xC];                                     // 0x00C0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGamePopulation_X");
		return ptr;
	}



	int __OnlineGamePopulation_X__HandleGotAllPopulationPlaylistsRPC_6A244763484167759287BCB48EFA7B5A(const struct FGetPopulationData& P);
	bool __OnlineGamePopulation_X__HandleGotAllPopulationPlaylistsRPC_7C2C0EE441C04C36E3DB2B9ABD406CCB(const struct FGetPopulationData& P);
	void HandleGotAllPopulationPlaylistsRPC(class URPC_GetPopulation_X* RPC, TArray<struct FGetPopulationData>* FilterLocal_7D80DFD6418DBDAFBA45CABB7A1FDDF6, TArray<int>* MapLocal_07760DF84183A5D1ED1772B477A85D9D, int* ReduceLocal_2D28465F4376425CF2D8A9B2A5579B13);
	void GetPlaylistPopulations(const struct FScriptDelegate& Callback);
	void EventGetPlaylistPopulations(class UOnlineGamePopulation_X* PopulationsObject);
};

// Class ProjectX.OnlineGameLanBrowser_X
// 0x0148 (FullSize[0x01E0] - InheritedSize[0x0098])
class UOnlineGameLanBrowser_X : public UOnline_X
{
public:
	struct FString                                     StartSearchFailString;                                     // 0x0098(0x0010) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     SearchingString;                                           // 0x00A8(0x0010) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     FoundServerString;                                         // 0x00B8(0x0010) (Edit, Const, Localized, NeedCtorLink)
	struct U_Types_X_FCustomMatchSettings              Filter;                                                    // 0x00C8(0x0090) (Transient, NeedCtorLink)
	unsigned long                                      bIsHostQuery : 1;                                          // 0x0158(0x0001) BIT_FIELD (Transient)
	float                                              SearchTimeout;                                             // 0x015C(0x0004) (Edit, Const)
	class ULanBeacon_X*                                LanBeacon;                                                 // 0x0160(0x0008) (ExportObject, Component, EditInline)
	struct FScriptDelegate                             __EventSearchNewResponse__Delegate;                        // 0x0168(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_NJFN[0xC];                                     // 0x0168(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventSearchStatus__Delegate;                             // 0x0180(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_QQQL[0xC];                                     // 0x0180(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventSearchStateChanged__Delegate;                       // 0x0198(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_84WC[0xC];                                     // 0x0198(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventSearchComplete__Delegate;                           // 0x01B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_AY8N[0xC];                                     // 0x01B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventSearchError__Delegate;                              // 0x01C8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_MQ1C[0xC];                                     // 0x01C8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameLanBrowser_X");
		return ptr;
	}



	void HandleGameStarted(class AGRI_X* GRI);
	void PerformSearch();
	void UpdateStatusMessage();
	void HandleSearchTimeout();
	void HandleStatusUpdate(const struct FString& NewStatus);
	void HandleJoinGameComplete(bool bSuccess, const struct FString& FailReason);
	void CreateLanGame(struct FServerResult* HostResponse, const struct U_Types_X_FCustomMatchSettings& MatchSettings, struct FServerReservationData* StructInitializer_01842A1545A3F1F603D70A9B0A718259);
	void HandleHostResponse(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void OnSearchComplete(bool bCancelled);
	void OnSearchError(const struct FString& Message);
	bool IsSearching();
	void Cancel();
	bool StartSearch(const struct U_Types_X_FCustomMatchSettings& InFilter, bool bHostQuery);
	class UOnlineGameLanBrowser_X* ClearCompleteDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* ClearNewResponseDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* ClearStateChangedDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* ClearStatusDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* ClearErrorDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* SetCompleteDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* SetNewResponseDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* SetStateChangedDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* SetStatusDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* SetErrorDelegate(const struct FScriptDelegate& Callback);
	void OnInit();
	void EventSearchError(const struct FString& NewStatus);
	void EventSearchComplete(bool bCancelled);
	void EventSearchStateChanged(const struct FName& SearchState);
	void EventSearchStatus(const struct FString& NewStatus);
	void EventSearchNewResponse(struct FServerResult* Result);
};

// Class ProjectX.OnlineGameServerBrowser_X
// 0x0130 (FullSize[0x01C8] - InheritedSize[0x0098])
class UOnlineGameServerBrowser_X : public UOnline_X
{
public:
	struct FString                                     PreferredRegion;                                           // 0x0098(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct U_Types_X_FCustomMatchSettings              Filter;                                                    // 0x00A8(0x0090) (Transient, NeedCtorLink, PrivateWrite)
	struct FString                                     StartSearchFailString;                                     // 0x0138(0x0010) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     NoResultsFound;                                            // 0x0148(0x0010) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     NotLoggedInToPsynet;                                       // 0x0158(0x0010) (Edit, Const, Localized, NeedCtorLink)
	struct FScriptDelegate                             __EventSearchComplete__Delegate;                           // 0x0168(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_RH22[0xC];                                     // 0x0168(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventSearchError__Delegate;                              // 0x0180(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_PGJT[0xC];                                     // 0x0180(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventBrowserError__Delegate;                             // 0x0198(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_V75Y[0xC];                                     // 0x0198(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventSearchCompleteReservation__Delegate;                // 0x01B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_WJS9[0xC];                                     // 0x01B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameServerBrowser_X");
		return ptr;
	}



	void HandleGameStarted(class AGRI_X* GRI);
	void HandleGameServerList(class URPC_CustomGameServerGet_X* RPC);
	void HandleSearchError(class UError* Error);
	void PerformSearch();
	void HandleTaskFail(class UError* Error);
	void HandleTaskSuccess(const struct FServerReservationData& Reservation);
	struct FString GetRegionsString();
	void OnSearchComplete(TArray<struct FServerResult>* Results);
	void OnSearchError(const struct FString& Message);
	bool IsSearching();
	void Cancel();
	bool StartSearch(const struct U_Types_X_FCustomMatchSettings& InFilter, const struct FString& InPreferredRegion);
	class UOnlineGameServerBrowser_X* SetCompleteReservationDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameServerBrowser_X* SetCompleteDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameServerBrowser_X* SetErrorDelegate(const struct FScriptDelegate& Callback);
	void EventSearchCompleteReservation(struct FServerReservationData* Reservation);
	void EventBrowserError(class UOnlineGameServerBrowser_X* Browser, class UError* Error);
	void EventSearchError(const struct FString& NewStatus);
	void EventSearchComplete(TArray<struct FServerResult>* Results);
};

// Class ProjectX.OnlineGameMatchmakingBase_X
// 0x0080 (FullSize[0x0118] - InheritedSize[0x0098])
class UOnlineGameMatchmakingBase_X : public UOnline_X
{
public:
	class UCheckReservation_X*                         CheckReservation;                                          // 0x0098(0x0008) (Transient)
	class UAsyncTask*                                  StartMatchmakingTask;                                      // 0x00A0(0x0008) (Transient)
	struct FString                                     PingingRegionsString;                                      // 0x00A8(0x0010) (Const, Localized, NeedCtorLink)
	struct FScriptDelegate                             __EventFindGameComplete__Delegate;                         // 0x00B8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_9L83[0xC];                                     // 0x00B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventFindGameStatus__Delegate;                           // 0x00D0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_SI82[0xC];                                     // 0x00D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventFindGameError__Delegate;                            // 0x00E8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_0U44[0xC];                                     // 0x00E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventFindGameStateChanged__Delegate;                     // 0x0100(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_G70W[0xC];                                     // 0x0100(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameMatchmakingBase_X");
		return ptr;
	}



	void HandleRegionsPinged(class UOnlineGameRegions_X* InRegions);
	void HandleGameStarted(class AGRI_X* GRI);
	void HandleStatusUpdate(const struct FString& NewStatus);
	void HandleJoinGameComplete(bool bSuccess, const struct FString& FailReason);
	struct FName GetMatchmakingStateName();
	class UMatchmakingMetrics_X* GetMetrics();
	class UCheckReservation_X* CreateCheckReservation();
	void GotoMatchmakingState(const struct FName& StateName);
	void ClearStartMatchmakingRPC();
	void ClearCheckReservation();
	void OnSearchComplete(bool bCanceled);
	void Cancel();
	bool IsSearching();
	class UOnlineGameMatchmakingBase_X* AddFindGameStateChangedDelegate(const struct FScriptDelegate& NewDelegate);
	class UOnlineGameMatchmakingBase_X* AddFindGameCompleteDelegate(const struct FScriptDelegate& HandleFindGameComplete);
	class UOnlineGameMatchmakingBase_X* AddFindGameErrorDelegate(const struct FScriptDelegate& HandleFindGameError);
	class UOnlineGameMatchmakingBase_X* AddFindGameStatusChangedDelegate(const struct FScriptDelegate& HandleFindGameStatusChanged);
	void EventFindGameStateChanged(const struct FName& NewState);
	void EventFindGameError(const struct FString& NewStatus);
	void EventFindGameStatus(const struct FString& NewStatus);
	void EventFindGameComplete(bool bCancelled);
};

// Class ProjectX.OnlineGamePrivateMatch_X
// 0x0120 (FullSize[0x0238] - InheritedSize[0x0118])
class UOnlineGamePrivateMatch_X : public UOnlineGameMatchmakingBase_X
{
public:
	struct FString                                     PreferredRegion;                                           // 0x0118(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FString                                     SearchingString;                                           // 0x0128(0x0010) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     StartSearchFailString;                                     // 0x0138(0x0010) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     FoundServerString;                                         // 0x0148(0x0010) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     AlreadyJoiningGameString;                                  // 0x0158(0x0010) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     TimeoutString;                                             // 0x0168(0x0010) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     WrongRegionString;                                         // 0x0178(0x0010) (Edit, Const, Localized, NeedCtorLink)
	struct U_Types_X_FCustomMatchSettings              Settings;                                                  // 0x0188(0x0090) (Transient, NeedCtorLink, PrivateWrite)
	float                                              SearchTimeout;                                             // 0x0218(0x0004) (Edit, Const)
	unsigned char                                      UnknownData_ANBG[0x4];                                     // 0x021C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             __EventPrivateMatchError__Delegate;                        // 0x0220(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_1IMR[0xC];                                     // 0x021C(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGamePrivateMatch_X");
		return ptr;
	}



	void UpdateStatusMessage();
	void HandleError(class UError* Error);
	void StartCheckingReservations();
	void HandleStartSearch(class UAsyncTask* Task);
	void OnReceiveGameServer(const struct FServerReservationData& Reservation);
	void HandleSearchTimeout();
	void ResetPrivateMatchSettings();
	void UpdatePrivateMatchSettings(const struct U_Types_X_FCustomMatchSettings& InSettings);
	void OnPrivateMatchError(const struct FString& Message);
	bool StartSearch(const struct FString& InPreferredRegion, const struct U_Types_X_FCustomMatchSettings& InSettings);
	void EventPrivateMatchError(class UOnlineGamePrivateMatch_X* InPrivateMatch, class UError* Error);
};

// Class ProjectX.OnlineGameMatchmaking_X
// 0x00F0 (FullSize[0x0208] - InheritedSize[0x0118])
class UOnlineGameMatchmaking_X : public UOnlineGameMatchmakingBase_X
{
public:
	TArray<int>                                        PreferredPlaylists;                                        // 0x0118(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	TArray<struct FString>                             PreferredRegions;                                          // 0x0128(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FString                                     SearchingString;                                           // 0x0138(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     StartSearchFailString;                                     // 0x0148(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     FoundServerString;                                         // 0x0158(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     PlaylistsHaveChangedString;                                // 0x0168(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     RegionsHaveChangedString;                                  // 0x0178(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     MatchmakingAttemptString;                                  // 0x0188(0x0010) (Const, Localized, NeedCtorLink)
	float                                              MatchmakingStartTime;                                      // 0x0198(0x0004) (Transient, PrivateWrite)
	int                                                MatchmakingBanTime;                                        // 0x019C(0x0004) (PrivateWrite)
	unsigned long                                      bIgnoreSkill : 1;                                          // 0x01A0(0x0001) BIT_FIELD (Transient, PrivateWrite)
	float                                              MatchmakingDisabledDuration;                               // 0x01A4(0x0004) (Edit)
	float                                              MatchmakingDisabledUntilTime;                              // 0x01A8(0x0004) (Transient, PrivateWrite)
	unsigned char                                      UnknownData_CXX5[0x4];                                     // 0x01AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LastReservationID;                                         // 0x01B0(0x0010) (Transient, NeedCtorLink)
	struct FScriptDelegate                             __EventStartSearch__Delegate;                              // 0x01C0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_OCMV[0xC];                                     // 0x01C0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventMatchmakingError__Delegate;                         // 0x01D8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_SKU5[0xC];                                     // 0x01D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventMatchmakingCanceledOnPartySizeChanged__Delegate;    // 0x01F0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_KH4X[0xC];                                     // 0x01F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameMatchmaking_X");
		return ptr;
	}



	bool AddRecommendedServers(float PingThreshold, float PingIncrement, float MaxPing);
	void RecordStart(bool bUseRecommendedRegions);
	void StartMatchmaking();
	void UpdateMatchmaking();
	void SendMatchmakingState();
	void HandleError(class UError* Error);
	void HandleMatchmakingStartSuccessRPC(class URPC_StartMatchmaking_X* RPC);
	void HandleStartSearch(class UAsyncTask* Task);
	void OnReceiveGameServer(const struct FServerReservationData& Reservation);
	void SetupForTimeConstraints();
	void OnPlaylistTimeEnded();
	struct FString __OnlineGameMatchmaking_X__StartSearch_2615C1F04E1EE6923E21B29F0D27BD65(class URegionPing_X* R);
	struct FString __OnlineGameMatchmaking_X__GetLocalizedPlaylistsString_D11ED0744E4E8780B519809720B24414(int Playlist);
	struct FString __OnlineGameMatchmaking_X__GetLocalizedRegionsString_E5E0EFD546CFC503467090B38A081FD3(class USuperRegion_X* SuperRegion);
	class USuperRegion_X* __OnlineGameMatchmaking_X__GetLocalizedRegionsString_75D07032482426FC1B74A2B180413688(class URegion_X* R);
	struct FString __OnlineGameMatchmaking_X__GetDebugSuperRegionString_0D1D1E094BD394D64A275DB7126E21E9(class URegionPing_X* R);
	struct FString __OnlineGameMatchmaking_X__AddRecommendedServers_06EE3A3445C5C38004BAB59153C50DAE(class URegionPing_X* R);
	struct FString __OnlineGameMatchmaking_X__AddRecommendedServers_26BAA5C84323FDC77E8E19BC89206403(class URegionPing_X* R);
	bool __OnlineGameMatchmaking_X__RecordStart_2104A77C4669B6EF3B5E5990CD5762D2(class URegionPing_X* R);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool IsMatchmakingDisabled();
	void SetSkillIgnored(bool bIgnore);
	void ToggleSkill();
	void ClearMatchmakingBanTime();
	void SetMatchmakingBanTime(int Duration);
	void HandlePartyLeaderChanged(class UOnlineGameParty_X* PartyObject, const struct FUniqueNetId& NewLeader);
	void HandlePartySizeChanged(class UOnlineGameParty_X* PartyObject, int NewSize, int OldSize);
	void HandlePartyDestroyed(class UOnlineGameParty_X* PartyObject);
	void OnFindGameWarning(const struct FString& FailReason);
	void GetGameServerID();
	int SortPlaylists(int A, int B);
	struct FString GetPartyMembersString();
	TArray<class URegionPing_X*> GetSubRegionPings(const struct FString& SuperRegionID, TArray<class URegionPing_X*>* FilterLocal_6E97C8424F83063986FEFDAE39B40DE6);
	struct FString GetDebugSuperRegionString(class USuperRegion_X* SuperRegion, TArray<struct FString>* MapLocal_CF42103646F2B5B6C1745282768F7EAA);
	struct FString GetLocalizedRegionsString(TArray<class URegion_X*>* MapLocal_65D04B4A44EDD200725494AC3D0025DB, TArray<class USuperRegion_X*>* MapLocal_AE5376154680ADB7E1D60A82611BA425, TArray<class USuperRegion_X*>* FilterLocal_21919FFE4F5FDEB0FBF732AD2FCD022C, TArray<class USuperRegion_X*>* DistinctLocal_358C501241A7A965BE6B7FB240485EFC, TArray<struct FString>* MapLocal_1F75BA7A4E75A7C1A8E32E8B639CFA5A);
	struct FString GetRegionsString();
	struct FString GetLocalizedPlaylistsString(TArray<struct FString>* MapLocal_EEA8067B4681BB67982AD38E7C38CC4E);
	struct FString GetPlaylistsString();
	void OnExit();
	void OnSearchComplete(bool bCanceled);
	void HandleInternetConnectionChanged(bool bConnected);
	class UError* StartSearch(TArray<int> InPreferredPlaylists, TArray<struct FString> InPreferredSuperRegions, TArray<int>* SortLocal_3DBE5B104B68C06DFF4968B97AFBCA0D, TArray<int>* FilterLocal_81D66CA645F3891D35A1C6B4211E710B, TArray<class URegionPing_X*>* MapManyLocal_9F5BC218446709488E0BCD9634E95465, TArray<struct FString>* MapLocal_1C8C11DB48AC632B6CBF86B5CA722469);
	bool VerifyPlaylist(int InPlaylistID);
	void OnInit();
	void EventMatchmakingCanceledOnPartySizeChanged(class UOnlineGameMatchmaking_X* InMatchMaking);
	void EventMatchmakingError(class UOnlineGameMatchmaking_X* InMatchMaking, class UError* Error);
	void EventStartSearch(class UOnlineGameMatchmakingBase_X* InMatchMaking);
};

// Class ProjectX.UdpLanBrowser_X
// 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
class UUdpLanBrowser_X : public ULanBrowser_X
{
public:
	float                                              SearchTimeout;                                             // 0x0060(0x0004) (Edit, Const)
	unsigned char                                      UnknownData_SYD7[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULanBeacon_X*                                LanBeacon;                                                 // 0x0068(0x0008) (ExportObject, Component, EditInline)
	class UTAsyncResult__array_LanServerRecord_X*      SearchTask;                                                // 0x0070(0x0008)
	TArray<class ULanServerRecord_X*>                  SearchResults;                                             // 0x0078(0x0010) (NeedCtorLink)
	class UUdpLanServer_X*                             LocalServer;                                               // 0x0088(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.UdpLanBrowser_X");
		return ptr;
	}



	class UAsyncTask* JoinServer(const struct FString& ServerId, const struct FString& Options);
	void HandleSearchTimeout();
	void HandleHostResponse(class UOnlineMessageComponent_X* Component, class ULanMessage_HostResponse_X* Response);
	void SearchTaskDisposed();
	class UTAsyncResult__array_LanServerRecord_X* GetServerList();
	void DestroyServer();
	class UAsyncTask* SetServerMetaData(const struct FString& MetaData);
	class UAsyncTask* CreateServer(const struct FString& MetaData);
};

// Class ProjectX.SystemMetrics_X
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class USystemMetrics_X : public UMetricsGroup_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SystemMetrics_X");
		return ptr;
	}



	void Specs(const struct FOSMetrics& OS, const struct FCpuMetrics& CPU, const struct FMemoryMetrics& Memory, const struct FVideoCardMetrics& Video, const struct FNetworkAdapterMetrics& Network);
	void RecordSpecs();
};

// Class ProjectX.__OnlineGame_X__CheckPsyNetConnection_BA3A34244C8220B1904F64993B8F1129
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__OnlineGame_X__CheckPsyNetConnection_BA3A34244C8220B1904F64993B8F1129 : public UObject
{
public:
	class UAsyncTask*                                  Task;                                                      // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGame_X__CheckPsyNetConnection_BA3A34244C8220B1904F64993B8F1129");
		return ptr;
	}



	void __OnlineGame_X__CheckPsyNetConnection_BA3A34244C8220B1904F64993B8F1129(class UOnlinePlayerAuthentication_X* Auth);
};

// Class ProjectX.RPC_GetPublicIP_X
// 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
class URPC_GetPublicIP_X : public URPC_X
{
public:
	struct FString                                     IP;                                                        // 0x00E8(0x0010) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetPublicIP_X");
		return ptr;
	}



};

// Class ProjectX.OnlineGameVersion_X
// 0x0004 (FullSize[0x009C] - InheritedSize[0x0098])
class UOnlineGameVersion_X : public UOnline_X
{
public:
	unsigned long                                      bUpdateRequired : 1;                                       // 0x0098(0x0001) BIT_FIELD (Transient, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameVersion_X");
		return ptr;
	}



	void __OnlineGameVersion_X__OnInit_4716246A4188957DF0125D83460B4A6F(class UOnlineGameServerBrowser_X* _, class UError* Error);
	void __OnlineGameVersion_X__OnInit_F60D459E491528E633C525B47DBA55EE(class UOnlineGamePrivateMatch_X* _, class UError* Error);
	void __OnlineGameVersion_X__OnInit_3DB73C93456C1FB29D96BABD2013A2AC(class UOnlineGameRegions_X* _, class UError* Error);
	void __OnlineGameVersion_X__OnInit_AEE806BD4D6CDDE0E01102921370B66B(class UOnlineGameMatchmaking_X* _, class UError* Error);
	void HandleError(class UError* Error);
	void OnInit();
};

// Class ProjectX.UrlConfig_X
// 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
class UUrlConfig_X : public UObject
{
public:
	struct FString                                     CDN;                                                       // 0x0060(0x0010) (Config, NeedCtorLink)
	struct FString                                     ESportsURL;                                                // 0x0070(0x0010) (NeedCtorLink)
	struct FString                                     ChinaPaymentURL;                                           // 0x0080(0x0010) (Config, NeedCtorLink)
	struct FString                                     CrossPlatformSupportURL;                                   // 0x0090(0x0010) (Config, NeedCtorLink)
	struct FString                                     LegalTextWebFolder;                                        // 0x00A0(0x0010) (Config, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.UrlConfig_X");
		return ptr;
	}



};

// Class ProjectX.RPC_UpdatePlayerPlaylist_X
// 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
class URPC_UpdatePlayerPlaylist_X : public URPC_X
{
public:
	int                                                Playlist;                                                  // 0x00E8(0x0004) (PrivateWrite)
	int                                                NumLocalPlayers;                                           // 0x00EC(0x0004) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_UpdatePlayerPlaylist_X");
		return ptr;
	}



	class URPC_UpdatePlayerPlaylist_X* SetNumLocalPlayers(int InNumLocalPlayers);
	class URPC_UpdatePlayerPlaylist_X* SetPlaylist(int InPlaylist);
};

// Class ProjectX.OnlineGameDedicatedServerRegistration_X
// 0x002C (FullSize[0x00C4] - InheritedSize[0x0098])
class UOnlineGameDedicatedServerRegistration_X : public UOnline_X
{
public:
	class UServerConfig_X*                             MyConfig;                                                  // 0x0098(0x0008) (Edit)
	class UCacheTimer_X*                               HeartbeatTimer;                                            // 0x00A0(0x0008) (Edit, ExportObject, Component, EditInline)
	int                                                GameTimeTimer;                                             // 0x00A8(0x0004) (Edit)
	int                                                GameTimeSeconds;                                           // 0x00AC(0x0004) (Transient, PrivateWrite)
	class URPC_CreateGameServer_X*                     CreateGameServerRPC;                                       // 0x00B0(0x0008) (Transient)
	class URPC_UpdateGameServer_X*                     UpdateGameServerRPC;                                       // 0x00B8(0x0008) (Transient)
	float                                              PsyNetDisconnectShutdownTime;                              // 0x00C0(0x0004) (Edit, Const)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameDedicatedServerRegistration_X");
		return ptr;
	}



	void __OnlineGameDedicatedServerRegistration_X__HandleCreateServerSucces_5F3BA0704771C66CC93F6DA0336C5FD2(class UCacheTimer_X* Timer);
	void HandleCrashed();
	class UServerMetrics_X* GetServerMetrics();
	struct FString GetExclusivePlatformString(TEnumAsByte<Core_EOnlinePlatform> Platform);
	void UpdateGameTime(int TimeSeconds);
	bool ShouldShutdownWhenEmpty();
	void TimerShutdownWhenEmpty();
	void HandleUpdateServerFailed(class URPC_UpdateGameServer_X* RPC);
	void HandleUpdateServerSucces(class URPC_UpdateGameServer_X* RPC);
	void HandleCreateServerFailed(class URPC_CreateGameServer_X* RPC);
	void HandlePerConDisconnect(class UPsyNetConnection_X* _);
	void HandlePerConConnect(class UPsyNetConnection_X* Connection);
	void ConnectToPerCon();
	void HandleCreateServerSucces(class URPC_CreateGameServer_X* RPC, struct U_Types_X_FCustomMatchSettings* StructInitializer_0F9A616B4C8844FF69DE17B7D47EE385);
	void SetServerNotJoinable();
	void SendUpdateServerRPC();
	struct FString GetServerType();
	void SendCreateServerRPC();
	void SendUpdateRequest();
	void UpdateServer();
	void ForceUpdateServer();
	void ForceUpdateServerOnMapPreLoad(const struct FString& MapName);
	void HandleConfigUpdate();
	void UnregisterServer();
	void RegisterServer();
	void OnInit();
};

// Class ProjectX.MatchmakingMetrics_X
// 0x0014 (FullSize[0x0094] - InheritedSize[0x0080])
class UMatchmakingMetrics_X : public UMetricsGroup_X
{
public:
	float                                              StartTime;                                                 // 0x0080(0x0004)
	struct FGuid                                       MMGuid;                                                    // 0x0084(0x0010)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MatchmakingMetrics_X");
		return ptr;
	}



	void SendReservationRetryFail();
	void SendReservationRetrySuccess();
	void SendReservationRetry();
	void RankedReconnect(const struct FString& ServerName, const struct FGuid& MatchMakingGuid);
	void FoundServer(const struct FString& Address, const struct FString& ServerName, int Playlist, const struct FString& ReservationID, bool bFromNotification, float ElapsedTime, const struct FGuid& MatchMakingGuid);
	void RecordFoundServer(struct FServerReservationData* Reservation, bool bFromNotification, const struct FGuid& MatchMakingGuid);
	void Cancel(float ElapsedTime, const struct FGuid& MatchMakingGuid);
	void RecordCancel(const struct FGuid& MatchMakingGuid);
	void ErrorID(int Error, const struct FGuid& MatchMakingGuid);
	void ErrorUnknown(const struct FString& Message, const struct FGuid& MatchMakingGuid);
	void RecordError(const struct FString& Error, const struct FGuid& MatchMakingGuid);
	void Start(TArray<class URegionPing_X*> Regions, TArray<int> Playlists, bool bDisableCrossPlay, bool bUseRecommendedRegions, const struct FGuid& MatchMakingGuid);
};

// Class ProjectX.DSPendingMessage_X
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class UDSPendingMessage_X : public UObject
{
public:
	class UDSR_DSMessage_X*                            Message;                                                   // 0x0060(0x0008)
	float                                              TimeoutTime;                                               // 0x0068(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DSPendingMessage_X");
		return ptr;
	}



};

// Class ProjectX.DSR_DSMessage_X
// 0x0040 (FullSize[0x00D0] - InheritedSize[0x0090])
class UDSR_DSMessage_X : public UPsyNetClientService_X
{
public:
	struct FString                                     PlayerID;                                                  // 0x0090(0x0010) (Transient, NeedCtorLink)
	struct FString                                     ReservationID;                                             // 0x00A0(0x0010) (Transient, NeedCtorLink)
	struct FString                                     MessageType;                                               // 0x00B0(0x0010) (Transient, NeedCtorLink)
	struct FString                                     MessagePayload;                                            // 0x00C0(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DSR_DSMessage_X");
		return ptr;
	}



};

// Class ProjectX.ReservationsMetrics_X
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UReservationsMetrics_X : public UMetricsGroup_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsMetrics_X");
		return ptr;
	}



	void PlayerReservationWithNoPsyNetBeaconError(const struct FUniqueNetId& PlayerID);
	void ServerMigrationPlayersAlreadySetError();
	void ServerMigrationPlaylistNotSetError();
	void TournamentMigrationMessageInvalidTournamentPlaylistError();
	void TournamentMigrationMessageWhileActiveError();
	void JoinExternalMatchReservationWhileInactiveError();
	void CreateExternalMatchReservationWhileActiveError();
	void DsrServerToServerFailedDeserializeError(const struct FString& MessageType);
	void JoinTournamentReservationWhileInactiveError();
	void CreateTournamentReservationInvalidPlaylistError();
	void CreateTournamentReservationWhileActiveError();
	void JoinPrivateReservationWhileInactiveError();
	void CreatePrivateReservationWhileActiveError();
	void BackfillReservationWhileInactiveError();
	void NewGameReservationWhileActiveError();
	void SplitscreenIdMismatchError(const struct FUniqueNetId& PrimaryPlayerId, const struct FUniqueNetId& SplitscreenPlayerId);
	void PartyLeaderInDuelError(const struct FUniqueNetId& PlayerID);
	void PlayerReservationWrongIdError(const struct FUniqueNetId& PlayerID, const struct FString& AttemptedId);
	void JoinWhileInactiveError();
	void DsrConnectionTimeoutError();
	void DsrClientFailedDeserializeError(const struct FString& MessageType);
	void DsrUnreservedServerError(const struct FString& MessageType);
	void DsrServerFailedDeserializeError(const struct FUniqueNetId& PlayerID, const struct FString& MessageType);
	void DsrMissingReservationError(const struct FUniqueNetId& PlayerID);
	void DsrMissingConnectionError();
	void PlayerCanceled();
	void NotAllPlayersJoinedError();
	void GetKeysInvalidOriginError();
	void GetKeysFailedError();
	void ReservationsFullError();
	void PlatformExclusiveReservationError();
	void WrongReservationRankedMatchError();
	void WrongReservationPlaylistError();
	void InvalidReservationPlaylistError();
	void RankedReconnect();
	void RankedReconnectFinished();
	void PrivateMatchFinished();
	void FriendJoin();
	void FriendJoinEmptyError();
	void FriendJoinRankedError();
	void AddReservation(const struct FUniqueNetId& PlayerID, int Playlist, const struct FString& ReservationID);
	void FirstReservation(int Playlist, const struct FString& ReservationID);
};

// Class ProjectX.DSR_ClientMessage_X
// 0x0030 (FullSize[0x00C0] - InheritedSize[0x0090])
class UDSR_ClientMessage_X : public UPsyNetClientService_X
{
public:
	struct FString                                     ReservationID;                                             // 0x0090(0x0010) (Transient, NeedCtorLink)
	struct FString                                     MessageType;                                               // 0x00A0(0x0010) (Transient, NeedCtorLink)
	struct FString                                     MessagePayload;                                            // 0x00B0(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DSR_ClientMessage_X");
		return ptr;
	}



};

// Class ProjectX.InitialServerToClientMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UInitialServerToClientMessage_X : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.InitialServerToClientMessage_X");
		return ptr;
	}



	struct FString GetDSRToken();
	struct FString GetReservationID();
};

// Class ProjectX.DSR_DSToDSMessage_X
// 0x0020 (FullSize[0x00B0] - InheritedSize[0x0090])
class UDSR_DSToDSMessage_X : public UPsyNetClientService_X
{
public:
	struct FString                                     MessageType;                                               // 0x0090(0x0010) (Transient, NeedCtorLink)
	struct FString                                     MessagePayload;                                            // 0x00A0(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DSR_DSToDSMessage_X");
		return ptr;
	}



};

// Class ProjectX.RPC_ServerToServer_X
// 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
class URPC_ServerToServer_X : public URPC_X
{
public:
	unsigned char                                      ServerId[0x8];                                             // 0x00E8(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_ServerToServer_X.ServerId
	struct FString                                     MessageType;                                               // 0x00F0(0x0010) (NeedCtorLink)
	struct FString                                     MessagePayload;                                            // 0x0100(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_ServerToServer_X");
		return ptr;
	}



};

// Class ProjectX.__PsyNetBeacon_X__SendMessageToServer_5752378C4CEFD1B4CF38C084DCBA3540
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class U__PsyNetBeacon_X__SendMessageToServer_5752378C4CEFD1B4CF38C084DCBA3540 : public UObject
{
public:
	class URPC_RelayToServer_X*                        RPC;                                                       // 0x0060(0x0008)
	class UPsyNetBeaconConnection_X*                   Connection;                                                // 0x0068(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PsyNetBeacon_X__SendMessageToServer_5752378C4CEFD1B4CF38C084DCBA3540");
		return ptr;
	}



	void __PsyNetBeacon_X__SendMessageToServer_5752378C4CEFD1B4CF38C084DCBA3540(class URPC_X* _);
};

// Class ProjectX.RPC_RelayToServer_X
// 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
class URPC_RelayToServer_X : public URPC_X
{
public:
	struct FString                                     DSConnectToken;                                            // 0x00E8(0x0010) (NeedCtorLink)
	struct FString                                     ReservationID;                                             // 0x00F8(0x0010) (NeedCtorLink)
	struct FString                                     MessageType;                                               // 0x0108(0x0010) (NeedCtorLink)
	struct FString                                     MessagePayload;                                            // 0x0118(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_RelayToServer_X");
		return ptr;
	}



};

// Class ProjectX.__PsyNetBeacon_X__SendMessageToClients_043CC369433D49B1807F149AC71DD571
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__PsyNetBeacon_X__SendMessageToClients_043CC369433D49B1807F149AC71DD571 : public UObject
{
public:
	class UPsyNetBeaconConnection_X*                   Connection;                                                // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PsyNetBeacon_X__SendMessageToClients_043CC369433D49B1807F149AC71DD571");
		return ptr;
	}



	bool __PsyNetBeacon_X__SendMessageToClients_043CC369433D49B1807F149AC71DD571(class URPC_RelayToClient_X* OtherRPC);
};

// Class ProjectX.QueuedOfflineMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UQueuedOfflineMessage_X : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.QueuedOfflineMessage_X");
		return ptr;
	}



	int GetOfflineTimeToLiveSeconds();
};

// Class ProjectX.RPC_RelayToClient_X
// 0x0048 (FullSize[0x0130] - InheritedSize[0x00E8])
class URPC_RelayToClient_X : public URPC_X
{
public:
	TArray<struct FString>                             PlayerIDs;                                                 // 0x00E8(0x0010) (NeedCtorLink)
	struct FString                                     ReservationID;                                             // 0x00F8(0x0010) (NeedCtorLink)
	struct FString                                     MessageType;                                               // 0x0108(0x0010) (NeedCtorLink)
	struct FString                                     MessagePayload;                                            // 0x0118(0x0010) (NeedCtorLink)
	unsigned long                                      AllowPartialSuccess : 1;                                   // 0x0128(0x0001) BIT_FIELD
	unsigned long                                      QueueOffline : 1;                                          // 0x0128(0x0001) BIT_FIELD
	int                                                OfflineTTLSeconds;                                         // 0x012C(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_RelayToClient_X");
		return ptr;
	}



};

// Class ProjectX.PsyNetServiceProvider_X
// 0x0038 (FullSize[0x0098] - InheritedSize[0x0060])
class UPsyNetServiceProvider_X : public UObject
{
public:
	class UPsyNetClientServiceCollection_X*            ServiceCollection;                                         // 0x0060(0x0008) (PrivateWrite)
	class UPsyNetServiceSubscriptions_X*               Subscriptions;                                             // 0x0068(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	TArray<class UPsyNetChannel_X*>                    Channels;                                                  // 0x0070(0x0010) (NeedCtorLink, PrivateWrite)
	struct FScriptDelegate                             __EventServiceExecuted__Delegate;                          // 0x0080(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_5APB[0xC];                                     // 0x0080(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetServiceProvider_X");
		return ptr;
	}



	void FinalizeServiceTask(class UPsyNetClientService_X* Service, class UTAsyncResult__PsyNetClientService_X* Task, class UError* Error);
	void PrintServiceResult(const struct FString& ServiceName, class UError* Error);
	class UTAsyncResult__PsyNetClientService_X* ExecuteServiceMessage(class UPsyNetConnection_X* Connection, class UPsyNetMessage_X* Message);
	bool IsServiceRequest(class UPsyNetMessage_X* Message);
	class UTAsyncResult__PsyNetClientService_X* ExecuteNotification(class UPsyNetConnection_X* Connection, class UPsyNetMessage_X* Message);
	void SetResponse(class UPsyNetClientService_X* Service, class UError* Error, class UPsyNetMessage_X* Response);
	class UTAsyncResult__PsyNetClientService_X* ExecuteRequest(class UPsyNetConnection_X* Connection, class UPsyNetMessage_X* Request, class UPsyNetMessage_X* Response);
	void HandleChannelClosed(class UPsyNetChannel_X* Channel);
	class UPsyNetChannel_X* CreateChannel(const struct FString& ChannelName);
	void Unsubscribe(const struct FScriptDelegate& Callback);
	void Subscribe(class UClass* ServiceClass, const struct FScriptDelegate& Callback);
	void Construct();
	void EventServiceExecuted(class UPsyNetServiceProvider_X* ServiceProvider, class UPsyNetClientService_X* Service);
};

// Class ProjectX.OnlineGameLanReservations_X
// 0x0030 (FullSize[0x00C8] - InheritedSize[0x0098])
class UOnlineGameLanReservations_X : public UOnline_X
{
public:
	class ULanBeacon_X*                                LanBeacon;                                                 // 0x0098(0x0008) (ExportObject, Component, EditInline)
	class UReservationBeacon_X*                        Beacon;                                                    // 0x00A0(0x0008) (ExportObject, Component, EditInline)
	float                                              ReservationTimeout;                                        // 0x00A8(0x0004) (Edit)
	unsigned long                                      bServerTraveling : 1;                                      // 0x00AC(0x0001) BIT_FIELD (Transient, PrivateWrite)
	struct FScriptDelegate                             __EventReservationsTimeout__Delegate;                      // 0x00B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_2OOI[0xC];                                     // 0x00B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameLanReservations_X");
		return ptr;
	}



	void HandleReservationDisconnected(class UTcpConnection* Connection);
	void HackForceNotServerTravelling();
	void SetServerTraveling(bool bTraveling);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	int GetNumPlayers();
	void AllowPlayerLogin(const struct FString& Options, const struct FUniqueNetId& PlayerID, struct FString* ErrorMessage);
	void PlayerLoggedOut(class APlayerReplicationInfo* PRI);
	void PlayerLoggedIn(class APlayerReplicationInfo* PRI);
	void Reset();
	void CheckReservationTimeout();
	bool HandlePublicReservation(class UTcpConnection* Connection, class UAddReservationMessagePublic_X* Message);
	void HandlePublicReservationMessage(class UTcpConnection* Connection, class UObject* Message);
	void StartReservationTimeout();
	bool HandlePrivateReservation(class UTcpConnection* Connection, class UAddReservationMessagePrivate_X* Message);
	void HandlePrivateReservationMessage(class UTcpConnection* Connection, class UObject* Message);
	void HandlePingMessage(class UTcpConnection* Connection, class UObject* Message);
	void HandleLanQueryMessage(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void OnInit();
	void EventReservationsTimeout();
};

// Class ProjectX.BugMetrics_X
// 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
class UBugMetrics_X : public UMetricsGroup_X
{
public:
	TArray<struct FName>                               ReportedIDs;                                               // 0x0080(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.BugMetrics_X");
		return ptr;
	}



	void Report(const struct FName& Id, const struct FString& Details, const struct FString& Trace);
	void BugReport(const struct FName& Id, const struct FString& Details);
	void StaticReport(const struct FName& Id, const struct FString& Details);
};

// Class ProjectX.RPC_GetLeaderboardValueForUserBase_X
// 0x0064 (FullSize[0x014C] - InheritedSize[0x00E8])
class URPC_GetLeaderboardValueForUserBase_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x00E8(0x0048) (NeedCtorLink, PrivateWrite)
	struct FString                                     LeaderboardId;                                             // 0x0130(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	unsigned long                                      bHasSkill : 1;                                             // 0x0140(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned long                                      bHasValue : 1;                                             // 0x0140(0x0001) BIT_FIELD (Transient, PrivateWrite)
	int                                                Value;                                                     // 0x0144(0x0004) (Transient, PrivateWrite)
	float                                              MMR;                                                       // 0x0148(0x0004) (Transient, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetLeaderboardValueForUserBase_X");
		return ptr;
	}



	class URPC_GetLeaderboardValueForUserBase_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.RPC_GetSkillLeaderboardValueForUser_X
// 0x0008 (FullSize[0x0154] - InheritedSize[0x014C])
class URPC_GetSkillLeaderboardValueForUser_X : public URPC_GetLeaderboardValueForUserBase_X
{
public:
	unsigned char                                      UnknownData_QC4E[0x4];                                     // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Playlist;                                                  // 0x0150(0x0004) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetSkillLeaderboardValueForUser_X");
		return ptr;
	}



	class URPC_GetSkillLeaderboardValueForUser_X* SetPlaylist(int InPlaylist);
};

// Class ProjectX.RPC_GetLeaderboardValueForUser_X
// 0x0014 (FullSize[0x0160] - InheritedSize[0x014C])
class URPC_GetLeaderboardValueForUser_X : public URPC_GetLeaderboardValueForUserBase_X
{
public:
	unsigned char                                      UnknownData_GZRJ[0x4];                                     // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Stat;                                                      // 0x0150(0x0010) (NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetLeaderboardValueForUser_X");
		return ptr;
	}



	class URPC_GetLeaderboardValueForUser_X* SetStat(const struct FString& InStat);
};

// Class ProjectX.PartyMessage_PartyMemberJoinGame_X
// 0x0058 (FullSize[0x0100] - InheritedSize[0x00A8])
class UPartyMessage_PartyMemberJoinGame_X : public UPartyMessage_X
{
public:
	struct FPartyMemberServer                          Server;                                                    // 0x00A8(0x0058) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_PartyMemberJoinGame_X");
		return ptr;
	}



	class UPartyMessage_PartyMemberJoinGame_X* SetPartyMemberServer(struct FPartyMemberServer* InServer);
};

// Class ProjectX.PartyMessage_DisableCrossPlay_X
// 0x0004 (FullSize[0x00AC] - InheritedSize[0x00A8])
class UPartyMessage_DisableCrossPlay_X : public UPartyMessage_X
{
public:
	unsigned long                                      bDisableCrossPlay : 1;                                     // 0x00A8(0x0001) BIT_FIELD


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_DisableCrossPlay_X");
		return ptr;
	}



	class UPartyMessage_DisableCrossPlay_X* SetDisableCrossPlay(bool InDisableCrossplay);
};

// Class ProjectX.PartyMessage_CrossPlayTextChat_X
// 0x0001 (FullSize[0x00A9] - InheritedSize[0x00A8])
class UPartyMessage_CrossPlayTextChat_X : public UPartyMessage_X
{
public:
	TEnumAsByte<Engine_ECrossPlatformChatState>        CrossChatState;                                            // 0x00A8(0x0001)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_CrossPlayTextChat_X");
		return ptr;
	}



	class UPartyMessage_CrossPlayTextChat_X* SetCrossPlayTextChatState(TEnumAsByte<Engine_ECrossPlatformChatState> InCrossChatState);
};

// Class ProjectX.PartyMessage_PlayerTradeComplete_X
// 0x0048 (FullSize[0x00F0] - InheritedSize[0x00A8])
class UPartyMessage_PlayerTradeComplete_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                TradingMemberId;                                           // 0x00A8(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_PlayerTradeComplete_X");
		return ptr;
	}



	class UPartyMessage_PlayerTradeComplete_X* SetTradingMemberId(const struct FUniqueNetId& InMemberId);
};

// Class ProjectX.__OnlineGameParty_X__JoinParty_C26D26D7497662F168BCFD9B808F2BB9
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__OnlineGameParty_X__JoinParty_C26D26D7497662F168BCFD9B808F2BB9 : public UObject
{
public:
	int                                                LocalPlayerNum;                                            // 0x0060(0x0004)
	unsigned char                                      UnknownData_MFE9[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUniqueLobbyId                              InPartyId;                                                 // 0x0068(0x0010)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameParty_X__JoinParty_C26D26D7497662F168BCFD9B808F2BB9");
		return ptr;
	}



	void __OnlineGameParty_X__JoinParty_C26D26D7497662F168BCFD9B808F2BB9(class UPrivilegeCheck_X* PrivilegeCheck);
};

// Class ProjectX.__OnlineGameParty_X__UpdatePartyInfo_181C0AB3403D6466B9293A950F4CB37A
// 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
class U__OnlineGameParty_X__UpdatePartyInfo_181C0AB3403D6466B9293A950F4CB37A : public UObject
{
public:
	struct FActiveLobbyInfo                            Lobby;                                                     // 0x0060(0x0030) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameParty_X__UpdatePartyInfo_181C0AB3403D6466B9293A950F4CB37A");
		return ptr;
	}



	bool __OnlineGameParty_X__UpdatePartyInfo_181C0AB3403D6466B9293A950F4CB37A(const struct FPartyMember& PM);
};

// Class ProjectX.PartyPlatformSession_X
// 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
class UPartyPlatformSession_X : public UObject
{
public:
	struct FUniqueLobbyId                              PartyID;                                                   // 0x0060(0x0010) (PrivateWrite)
	struct FScriptDelegate                             __EventPartyIdChanged__Delegate;                           // 0x0070(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_52DG[0xC];                                     // 0x0070(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyPlatformSession_X");
		return ptr;
	}



	void ClearPlatformParty(struct FUniqueLobbyId* StructInitializer_833F3146446B170E906FD7B76FD2BFB4);
	void LeaveParty();
	void BroadcastPlatformParty(class UPartyMessage_SetPlatformParty_X** ObjectInitializer_8CF153884DCFB4C6FE0C3FBF3EB9E115);
	void HandleJoinPlatformParty(const struct FUniqueLobbyId& InPartyId);
	bool IsInParty();
	void EventPartyIdChanged(class UPartyPlatformSession_X* Session);
};

// Class ProjectX.ClientReservationMessage_X
// 0x0080 (FullSize[0x00E0] - InheritedSize[0x0060])
class UClientReservationMessage_X : public UBeaconMessage_X
{
public:
	struct FServerReservationData                      Reservation;                                               // 0x0060(0x0080) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ClientReservationMessage_X");
		return ptr;
	}



	struct FString GetDSRToken();
	struct FString GetReservationID();
};

// Class ProjectX.__OnlineGameParty_X__BroadcastAllLocalPlayers_AB089E094C8F57509006FBB3DD2A16C3
// 0x0178 (FullSize[0x01D8] - InheritedSize[0x0060])
class U__OnlineGameParty_X__BroadcastAllLocalPlayers_AB089E094C8F57509006FBB3DD2A16C3 : public UObject
{
public:
	struct FPartyMember                                Primary;                                                   // 0x0060(0x0178) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameParty_X__BroadcastAllLocalPlayers_AB089E094C8F57509006FBB3DD2A16C3");
		return ptr;
	}



	bool __OnlineGameParty_X__BroadcastAllLocalPlayers_AB089E094C8F57509006FBB3DD2A16C3(const struct FPartyMember& PM);
};

// Class ProjectX.PartyConfig_X
// 0x0004 (FullSize[0x007C] - InheritedSize[0x0078])
class UPartyConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bCompressMessages : 1;                                     // 0x0078(0x0001) BIT_FIELD (Config)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyConfig_X");
		return ptr;
	}



};

// Class ProjectX.__OnlineGameParty_X__HandleClientReservationMessage_38E7B8DB42F937AFE8332FA03ECFFBD4
// 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
class U__OnlineGameParty_X__HandleClientReservationMessage_38E7B8DB42F937AFE8332FA03ECFFBD4 : public UObject
{
public:
	class UClientReservationMessage_X*                 Message;                                                   // 0x0060(0x0008)
	struct FJoinMatchSettings                          Settings;                                                  // 0x0068(0x0020) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameParty_X__HandleClientReservationMessage_38E7B8DB42F937AFE8332FA03ECFFBD4");
		return ptr;
	}



	void __OnlineGameParty_X__HandleClientReservationMessage_38E7B8DB42F937AFE8332FA03ECFFBD4();
};

// Class ProjectX.RPC_GetPlayerSkill_X
// 0x00A8 (FullSize[0x0190] - InheritedSize[0x00E8])
class URPC_GetPlayerSkill_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x00E8(0x0048) (NeedCtorLink, PrivateWrite)
	TArray<struct FPlayerSkillRating>                  Skills;                                                    // 0x0130(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FPlayerSeasonRewardProgress                 RewardLevels;                                              // 0x0140(0x0050) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetPlayerSkill_X");
		return ptr;
	}



	class URPC_GetPlayerSkill_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
	void OnSuccess();
	void AddPlayerIDToResponse();
};

// Class ProjectX.RPC_RecordMatchResults_X
// 0x0084 (FullSize[0x016C] - InheritedSize[0x00E8])
class URPC_RecordMatchResults_X : public URPC_X
{
public:
	struct FString                                     MatchGUID;                                                 // 0x00E8(0x0010) (NeedCtorLink)
	struct FSkillMatchData                             Match;                                                     // 0x00F8(0x0020)
	struct FString                                     MatchName;                                                 // 0x0118(0x0010) (NeedCtorLink)
	TArray<struct FSkillMatchPlayer>                   Winners;                                                   // 0x0128(0x0010) (NeedCtorLink)
	TArray<struct FSkillMatchPlayer>                   Losers;                                                    // 0x0138(0x0010) (NeedCtorLink)
	struct FGuid                                       AppSessionID;                                              // 0x0148(0x0010)
	struct FGuid                                       LevelSessionID;                                            // 0x0158(0x0010)
	unsigned long                                      bIsBotMatch : 1;                                           // 0x0168(0x0001) BIT_FIELD


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_RecordMatchResults_X");
		return ptr;
	}



	int GetPartyIndex(TArray<struct FUniqueNetId>* PartyIDs, const struct FUniqueNetId& LeaderID);
	void InitSkillMatchPlayers(class UMatchData_X* MatchData);
	struct FSkillMatchPlayer InitSkillMatchPlayer(TArray<struct FUniqueNetId>* PartyIDs, class UMatchData_X* MatchData, class UMatchPlayerData_X* Player);
	class URPC_RecordMatchResults_X* SetMetrics(class UMetricsSystem_X* MetricsSystem);
	class URPC_RecordMatchResults_X* SetMatchName(const struct FString& InName);
	class URPC_RecordMatchResults_X* SetMatch(class UMatchData_X* InMatch);
	class URPC_RecordMatchResults_X* SetIsBotMatch(bool bBotMatch);
	class URPC_RecordMatchResults_X* SetMatchGUID(const struct FString& InGuid);
};

// Class ProjectX.RPC_UpdateSkills_X
// 0x0034 (FullSize[0x01A0] - InheritedSize[0x016C])
class URPC_UpdateSkills_X : public URPC_RecordMatchResults_X
{
public:
	unsigned char                                      UnknownData_A5C0[0x4];                                     // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Playlist;                                                  // 0x0170(0x0004)
	unsigned char                                      UnknownData_KVOO[0x4];                                     // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FUpdatedPlayerSkillRating>           NewSkills;                                                 // 0x0178(0x0010) (Transient, NeedCtorLink)
	TArray<struct FPlayerSeasonRewardProgress>         NewRewardLevels;                                           // 0x0188(0x0010) (Transient, NeedCtorLink)
	class UMatchData_X*                                MatchData;                                                 // 0x0198(0x0008) (Transient, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_UpdateSkills_X");
		return ptr;
	}



	class URPC_RecordMatchResults_X* SetMatch(class UMatchData_X* InMatch);
};

// Class ProjectX.MatchPlayerData_X
// 0x010C (FullSize[0x016C] - InheritedSize[0x0060])
class UMatchPlayerData_X : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0060(0x0048) (NeedCtorLink, DataBinding)
	struct FString                                     PlayerName;                                                // 0x00A8(0x0010) (NeedCtorLink, DataBinding)
	unsigned char                                      ConnectTimestamp[0x8];                                     // 0x00B8(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.MatchPlayerData_X.ConnectTimestamp
	unsigned char                                      JoinTimestamp[0x8];                                        // 0x00C0(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.MatchPlayerData_X.JoinTimestamp
	unsigned char                                      LeaveTimestamp[0x8];                                       // 0x00C8(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.MatchPlayerData_X.LeaveTimestamp
	struct FUniqueNetId                                PartyLeaderID;                                             // 0x00D0(0x0048) (NeedCtorLink)
	unsigned long                                      bAbandoned : 1;                                            // 0x0118(0x0001) BIT_FIELD
	unsigned long                                      bMvp : 1;                                                  // 0x0118(0x0001) BIT_FIELD (DataBinding)
	int                                                LastTeam;                                                  // 0x011C(0x0004) (DataBinding)
	float                                              SecondsPlayed;                                             // 0x0120(0x0004)
	int                                                Goals;                                                     // 0x0124(0x0004) (DataBinding)
	int                                                Assists;                                                   // 0x0128(0x0004) (DataBinding)
	int                                                Saves;                                                     // 0x012C(0x0004) (DataBinding)
	int                                                Shots;                                                     // 0x0130(0x0004) (DataBinding)
	int                                                Demolishes;                                                // 0x0134(0x0004) (DataBinding)
	int                                                Score;                                                     // 0x0138(0x0004) (DataBinding)
	int                                                OwnGoals;                                                  // 0x013C(0x0004) (DataBinding)
	int                                                ClubID;                                                    // 0x0140(0x0004)
	struct FMatchSkillUpdate                           Skills;                                                    // 0x0144(0x0024)
	int                                                ActorID;                                                   // 0x0168(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MatchPlayerData_X");
		return ptr;
	}



	void SetSkills(const struct FUpdatedPlayerSkillRating& Update);
};

// Class ProjectX.RPC_TestPlayerID_X
// 0x0090 (FullSize[0x0178] - InheritedSize[0x00E8])
class URPC_TestPlayerID_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x00E8(0x0048) (NeedCtorLink)
	struct FUniqueNetId                                ResponsePlayerID;                                          // 0x0130(0x0048) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_TestPlayerID_X");
		return ptr;
	}



	void OnSuccess();
	void Init();
};

// Class ProjectX.PsyNetService_Reservation_X
// 0x0080 (FullSize[0x0110] - InheritedSize[0x0090])
class UPsyNetService_Reservation_X : public UPsyNetClientService_X
{
public:
	struct FCheckReservationResponse                   Reservation;                                               // 0x0090(0x0080) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_Reservation_X");
		return ptr;
	}



	struct FServerReservationData GetReservation();
};

// Class ProjectX.RPC_PartyInfo_X
// 0x0090 (FullSize[0x0178] - InheritedSize[0x00E8])
class URPC_PartyInfo_X : public URPC_X
{
public:
	TArray<struct FPartyInvite>                        Invites;                                                   // 0x00E8(0x0010) (Transient, NeedCtorLink)
	struct FPsyNetPartyMember                          Member;                                                    // 0x00F8(0x0080) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyInfo_X");
		return ptr;
	}



};

// Class ProjectX.RPC_ClubDetailsBase_X
// 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
class URPC_ClubDetailsBase_X : public URPC_X
{
public:
	class UClubDetails_X*                              ClubDetails;                                               // 0x00E8(0x0008) (Transient)
	class UTAsyncResult__ClubDetails_X*                ClubDetailsTask;                                           // 0x00F0(0x0008) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_ClubDetailsBase_X");
		return ptr;
	}



	class UClubDetails_X* __RPC_ClubDetailsBase_X__CreateClubDetailsTask_11E293BF49952F344B0961BEB9F1752A();
	class UTAsyncResult__ClubDetails_X* CreateClubDetailsTask();
};

// Class ProjectX.RPC_GetPlayerClubDetails_X
// 0x0048 (FullSize[0x0140] - InheritedSize[0x00F8])
class URPC_GetPlayerClubDetails_X : public URPC_ClubDetailsBase_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x00F8(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetPlayerClubDetails_X");
		return ptr;
	}



	class URPC_GetPlayerClubDetails_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.__OnlineClubProvider_X__SyncClubDetails_A46550DA49C996C8D68F59BC585F3AA5
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class U__OnlineClubProvider_X__SyncClubDetails_A46550DA49C996C8D68F59BC585F3AA5 : public UObject
{
public:
	unsigned char                                      ClubID[0x8];                                               // 0x0060(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.__OnlineClubProvider_X__SyncClubDetails_A46550DA49C996C8D68F59BC585F3AA5.ClubID
	class URPC_GetClubDetails_X*                       RPC;                                                       // 0x0068(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineClubProvider_X__SyncClubDetails_A46550DA49C996C8D68F59BC585F3AA5");
		return ptr;
	}



	void __OnlineClubProvider_X__SyncClubDetails_CEB60F574B21B1DD450DC7B27270578C(class URPC_X* _);
	bool __OnlineClubProvider_X__SyncClubDetails_A46550DA49C996C8D68F59BC585F3AA5(class URPC_GetClubDetails_X* R);
};

// Class ProjectX.__OnlineClubProvider_X__HandleClubSynced_7BF3C5CE4D133EC53614B2A1A3047592
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__OnlineClubProvider_X__HandleClubSynced_7BF3C5CE4D133EC53614B2A1A3047592 : public UObject
{
public:
	class URPC_GetClubDetails_X*                       RPC;                                                       // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineClubProvider_X__HandleClubSynced_7BF3C5CE4D133EC53614B2A1A3047592");
		return ptr;
	}



	void __OnlineClubProvider_X__HandleClubSynced_7BF3C5CE4D133EC53614B2A1A3047592(const struct FClubMember& Member);
};

// Class ProjectX.__OnlineClubProvider_X__SyncPlayerClubDetails_AE946F224AB4B10590D9958FCD73EB5B
// 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
class U__OnlineClubProvider_X__SyncPlayerClubDetails_AE946F224AB4B10590D9958FCD73EB5B : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0060(0x0048) (NeedCtorLink)
	class URPC_GetPlayerClubDetails_X*                 RPC;                                                       // 0x00A8(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineClubProvider_X__SyncPlayerClubDetails_AE946F224AB4B10590D9958FCD73EB5B");
		return ptr;
	}



	void __OnlineClubProvider_X__SyncPlayerClubDetails_0156DCF54E4A87F0861BE09DCCCBF630(class URPC_X* _);
	bool __OnlineClubProvider_X__SyncPlayerClubDetails_AE946F224AB4B10590D9958FCD73EB5B(class URPC_GetPlayerClubDetails_X* R);
};

// Class ProjectX.OnlineClubServerList_X
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UOnlineClubServerList_X : public UObject
{
public:
	TArray<class UClubServerResult_X*>                 Servers;                                                   // 0x0060(0x0010) (NeedCtorLink)
	class URPC_GetClubPrivateMatches_X*                RPC;                                                       // 0x0070(0x0008) (PrivateWrite)
	class UError*                                      Error;                                                     // 0x0078(0x0008) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineClubServerList_X");
		return ptr;
	}



	void __OnlineClubServerList_X__Refresh_A95077DC47171D2C1269A093D74941C3(class URPC_X* _);
	void __OnlineClubServerList_X__Refresh_3D3E061346C1CB487A038690B809CC15(class URPC_X* _);
	void __OnlineClubServerList_X__Refresh_454EDDA44FAB95275AF4E380B47A2ADD(class URPC_X* _);
	class UAsyncTask* Refresh();
};

// Class ProjectX.RPC_GetClubPrivateMatches_X
// 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
class URPC_GetClubPrivateMatches_X : public URPC_X
{
public:
	TArray<class UClubServerResult_X*>                 Servers;                                                   // 0x00E8(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetClubPrivateMatches_X");
		return ptr;
	}



};

// Class ProjectX.PlayerTitleConfig_X
// 0x0030 (FullSize[0x00A8] - InheritedSize[0x0078])
class UPlayerTitleConfig_X : public UOnlineConfig_X
{
public:
	TArray<struct FPlayerTitleCategory>                Categories;                                                // 0x0078(0x0010) (Edit, NeedCtorLink)
	TArray<struct FPlayerTitleData>                    Titles;                                                    // 0x0088(0x0010) (Edit, NeedCtorLink)
	struct FString                                     DefaultColorHexCode;                                       // 0x0098(0x0010) (Const, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PlayerTitleConfig_X");
		return ptr;
	}



	struct FPlayerTitleData InitTitleColors(const struct FPlayerTitleData& Data);
	struct FPlayerTitleData GetTitleData(const struct FName& TitleId, struct FPlayerTitleData* StructInitializer_EF03431548490FC8B63D3680B156B768);
	struct FPlayerTitleCategory GetCategory(const struct FName& CategoryID, struct FPlayerTitleCategory* StructInitializer_C6BCDE45474D722A9A7664BB3E7676E7);
	void Apply(struct FPlayerTitleCategory* StructInitializer_0C7148DD4257E3F3A5728DA1B30C17B2, struct FPlayerTitleCategory* StructInitializer_A0760DF5460078A135CA62845E0A16BB, struct FPlayerTitleData* StructInitializer_E4991F4C4A283EBE6898A3BC35FB6BDC, struct FPlayerTitleData* StructInitializer_F1DAB5544C36DFC29F69CB9D2D034C32, TArray<struct FPlayerTitleData>* MapLocal_48F856B54FFDE713E7A9A392207ABEA8);
};

// Class ProjectX.RPC_FilterContent_X
// 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
class URPC_FilterContent_X : public URPC_X
{
public:
	TArray<struct FString>                             Content;                                                   // 0x00E8(0x0010) (NeedCtorLink)
	TArray<struct FString>                             FilteredContent;                                           // 0x00F8(0x0010) (Transient, NeedCtorLink)
	TArray<struct FScriptDelegate>                     Callbacks;                                                 // 0x0108(0x0010) (Transient, NeedCtorLink)
	TArray<struct FUniqueNetId>                        PlayerIDs;                                                 // 0x0118(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_FilterContent_X");
		return ptr;
	}



	class URPC_FilterContent_X* AddComment(const struct FString& Comment, const struct FScriptDelegate& Callback, const struct FUniqueNetId& PlayerID);
};

// Class ProjectX.PartyMessage_GetPlatformPartyResponse_X
// 0x0058 (FullSize[0x0100] - InheritedSize[0x00A8])
class UPartyMessage_GetPlatformPartyResponse_X : public UPartyMessage_X
{
public:
	struct FUniqueLobbyId                              PlatformPartyID;                                           // 0x00A8(0x0010)
	struct FUniqueNetId                                OriginalSender;                                            // 0x00B8(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_GetPlatformPartyResponse_X");
		return ptr;
	}



};

// Class ProjectX.__PartySequence_CreateParty_X__CreateParty_83B0CA3147393AD7260D7D9F857508E1
// 0x0019 (FullSize[0x0079] - InheritedSize[0x0060])
class U__PartySequence_CreateParty_X__CreateParty_83B0CA3147393AD7260D7D9F857508E1 : public UObject
{
public:
	TArray<struct FLobbyMetaData>                      InitialSettings;                                           // 0x0060(0x0010) (NeedCtorLink)
	int                                                LocalPlayerNum;                                            // 0x0070(0x0004)
	int                                                MaxPlayers;                                                // 0x0074(0x0004)
	TEnumAsByte<Engine_ELobbyVisibility>               Type;                                                      // 0x0078(0x0001)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PartySequence_CreateParty_X__CreateParty_83B0CA3147393AD7260D7D9F857508E1");
		return ptr;
	}



	void __PartySequence_CreateParty_X__CreateParty_83B0CA3147393AD7260D7D9F857508E1(class URPC_PartyCreate_X* RPC, struct FLobbyMetaData* StructInitializer_40D583964F1FE9C00F00AD80D6D4BF42, struct FLobbyMetaData* StructInitializer_AFDD1BFF499451DCF0CADBBAC56CBE05, struct FUniqueLobbyId* StructInitializer_640FC4074E4572F6610436996AD26692);
};

// Class ProjectX.__PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedSilent_C705065A490063513BC3678787905A60
// 0x0058 (FullSize[0x00B8] - InheritedSize[0x0060])
class U__PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedSilent_C705065A490063513BC3678787905A60 : public UObject
{
public:
	struct FUniqueLobbyId                              InLobbyId;                                                 // 0x0060(0x0010)
	struct FUniqueNetId                                InviterId;                                                 // 0x0070(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedSilent_C705065A490063513BC3678787905A60");
		return ptr;
	}



	void __PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedSilent_C705065A490063513BC3678787905A60();
};

// Class ProjectX.__PartySequence_JoinParty_X__HandleGetPlatformPartyMessage_3AD1FB144C1445757B4487838E2E2BE6
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__PartySequence_JoinParty_X__HandleGetPlatformPartyMessage_3AD1FB144C1445757B4487838E2E2BE6 : public UObject
{
public:
	class UPartyMessage_GetPlatformParty_X*            Message;                                                   // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PartySequence_JoinParty_X__HandleGetPlatformPartyMessage_3AD1FB144C1445757B4487838E2E2BE6");
		return ptr;
	}



	bool __PartySequence_JoinParty_X__HandleGetPlatformPartyMessage_3AD1FB144C1445757B4487838E2E2BE6(const struct FPartyMember& M);
};

// Class ProjectX.PsyTagErrors_X
// 0x0030 (FullSize[0x00B0] - InheritedSize[0x0080])
class UPsyTagErrors_X : public UErrorList
{
public:
	class UErrorType*                                  PsyTagProfane;                                             // 0x0080(0x0008) (Const)
	class UErrorType*                                  PsyTagUnavailable;                                         // 0x0088(0x0008) (Const)
	class UErrorType*                                  PsyTagInvalidCharacters;                                   // 0x0090(0x0008) (Const)
	class UErrorType*                                  PsyTagInvalidWhitespace;                                   // 0x0098(0x0008) (Const)
	class UErrorType*                                  PsyTagInvalidParameters;                                   // 0x00A0(0x0008) (Const)
	class UErrorType*                                  PsyTagCrossPlatformDisabled;                               // 0x00A8(0x0008) (Const)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyTagErrors_X");
		return ptr;
	}



};

// Class ProjectX.PsyTagSearchResult_X
// 0x0094 (FullSize[0x00F4] - InheritedSize[0x0060])
class UPsyTagSearchResult_X : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0060(0x0048) (NeedCtorLink)
	struct FString                                     PlayerName;                                                // 0x00A8(0x0010) (NeedCtorLink)
	struct FPsyTag                                     PsyTag;                                                    // 0x00B8(0x0018) (NeedCtorLink)
	unsigned char                                      PsyTagLastUpdatedTime[0x8];                                // 0x00D0(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.PsyTagSearchResult_X.PsyTagLastUpdatedTime
	struct FString                                     PresenceState;                                             // 0x00D8(0x0010) (NeedCtorLink)
	unsigned char                                      LastLoginTime[0x8];                                        // 0x00E8(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.PsyTagSearchResult_X.LastLoginTime
	int                                                NumFriendsInCommon;                                        // 0x00F0(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyTagSearchResult_X");
		return ptr;
	}



};

// Class ProjectX.RPC_SearchPsyTag_X
// 0x0048 (FullSize[0x0130] - InheritedSize[0x00E8])
class URPC_SearchPsyTag_X : public URPC_X
{
public:
	struct FString                                     PsyTagName;                                                // 0x00E8(0x0010) (NeedCtorLink)
	int                                                PsyTagCode;                                                // 0x00F8(0x0004)
	int                                                PageIndex;                                                 // 0x00FC(0x0004)
	int                                                PageSize;                                                  // 0x0100(0x0004)
	unsigned char                                      UnknownData_D02A[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SortType;                                                  // 0x0108(0x0010) (NeedCtorLink)
	int                                                TotalRows;                                                 // 0x0118(0x0004) (Transient)
	unsigned char                                      UnknownData_XLT5[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPsyTagSearchResult_X*>               MatchedPlayers;                                            // 0x0120(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_SearchPsyTag_X");
		return ptr;
	}



	class UErrorType* OverrideErrorType(class UErrorType* ErrorType);
	class URPC_SearchPsyTag_X* SetPage(int InPage);
	class URPC_SearchPsyTag_X* SetTag(const struct FString& InName, int InCode);
};

// Class ProjectX.__TAsyncResult__Texture2DDynamic__NotifyOnResult_41D1BC0943890406F19E52912206AEC0
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__TAsyncResult__Texture2DDynamic__NotifyOnResult_41D1BC0943890406F19E52912206AEC0 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_O2YG[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__Texture2DDynamic__NotifyOnResult_41D1BC0943890406F19E52912206AEC0");
		return ptr;
	}



	void __TAsyncResult__Texture2DDynamic__NotifyOnResult_41D1BC0943890406F19E52912206AEC0();
};

// Class ProjectX.__TAsyncResult__Texture2DDynamic__NotifyOnResultComplete_02FEB01E4148FB4BCF061D8F8F31F220
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__TAsyncResult__Texture2DDynamic__NotifyOnResultComplete_02FEB01E4148FB4BCF061D8F8F31F220 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_TUHR[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__Texture2DDynamic__NotifyOnResultComplete_02FEB01E4148FB4BCF061D8F8F31F220");
		return ptr;
	}



	void __TAsyncResult__Texture2DDynamic__NotifyOnResultComplete_02FEB01E4148FB4BCF061D8F8F31F220(class UError* Err);
};

// Class ProjectX.__TAsyncResult__Texture2DDynamic__SetResultWhen_FD79B42F47ECE0DD88DD849009D1555C
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__TAsyncResult__Texture2DDynamic__SetResultWhen_FD79B42F47ECE0DD88DD849009D1555C : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                         // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_GPYK[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__Texture2DDynamic__SetResultWhen_FD79B42F47ECE0DD88DD849009D1555C");
		return ptr;
	}



	void __TAsyncResult__Texture2DDynamic__SetResultWhen_FD79B42F47ECE0DD88DD849009D1555C();
};

// Class ProjectX.__TAsyncResult__Texture2DDynamic__Copy_E91ABB914885E11F0EB266B9A993C2EE
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__TAsyncResult__Texture2DDynamic__Copy_E91ABB914885E11F0EB266B9A993C2EE : public UObject
{
public:
	class UTAsyncResult__Texture2DDynamic*             Instance;                                                  // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__Texture2DDynamic__Copy_E91ABB914885E11F0EB266B9A993C2EE");
		return ptr;
	}



	void __TAsyncResult__Texture2DDynamic__Copy_E91ABB914885E11F0EB266B9A993C2EE(class UTexture2DDynamic* R, class UError* E);
};

// Class ProjectX.WebImageDownload_X
// 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
class UWebImageDownload_X : public UObject
{
public:
	struct FString                                     URL;                                                       // 0x0060(0x0010) (NeedCtorLink)
	unsigned long                                      bSRGB : 1;                                                 // 0x0070(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_SPGE[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2DDynamic*                           Texture;                                                   // 0x0078(0x0008)
	class UTAsyncResult__Texture2DDynamic*             AsyncResult;                                               // 0x0080(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.WebImageDownload_X");
		return ptr;
	}



};

// Class ProjectX.__WebImageCache_X__SyncUncachedImage_E20ABC4B4E051F7B52C14EBF36DADF95
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__WebImageCache_X__SyncUncachedImage_E20ABC4B4E051F7B52C14EBF36DADF95 : public UObject
{
public:
	class UTAsyncResult__Texture2DDynamic*             Task;                                                      // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__WebImageCache_X__SyncUncachedImage_E20ABC4B4E051F7B52C14EBF36DADF95");
		return ptr;
	}



	void __WebImageCache_X__SyncUncachedImage_E20ABC4B4E051F7B52C14EBF36DADF95(const struct FOnlineImageDownload& ImageInfo);
};

// Class ProjectX.__WebImageCache_X__StartSync_C71882504BA1B8468411968C494F79C6
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__WebImageCache_X__StartSync_C71882504BA1B8468411968C494F79C6 : public UObject
{
public:
	class UWebImageDownload_X*                         Download;                                                  // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__WebImageCache_X__StartSync_C71882504BA1B8468411968C494F79C6");
		return ptr;
	}



	void __WebImageCache_X__StartSync_C71882504BA1B8468411968C494F79C6(class UCachedWebData_X* Data);
};

// Class ProjectX.__WebImageCache_X__HandleImageData_58F7EC0343ED7731263D67BD1212656D
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__WebImageCache_X__HandleImageData_58F7EC0343ED7731263D67BD1212656D : public UObject
{
public:
	class UWebImageDownload_X*                         Download;                                                  // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__WebImageCache_X__HandleImageData_58F7EC0343ED7731263D67BD1212656D");
		return ptr;
	}



	void __WebImageCache_X__HandleImageData_58F7EC0343ED7731263D67BD1212656D(const struct FString& _, const struct FImageLayout& Image);
};

// Class ProjectX.StatusObserver_X
// 0x0040 (FullSize[0x00A0] - InheritedSize[0x0060])
class UStatusObserver_X : public UObject
{
public:
	TArray<class UTriggerInfo*>                        TriggerTypes;                                              // 0x0060(0x0010) (NeedCtorLink)
	TArray<class UClass*>                              AcceptedTypes;                                             // 0x0070(0x0010) (Const, NeedCtorLink)
	unsigned long                                      bInitComplete : 1;                                         // 0x0080(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_GME2[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             __bInitComplete__ChangeNotify;                             // 0x0088(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_IQPR[0xC];                                     // 0x0084(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.StatusObserver_X");
		return ptr;
	}



	class UTriggerInfo* __StatusObserver_X__Init_460AF64C459EB20F08EE7C945A6FB5F1(class UClass* T);
	void __bInitComplete__ChangeNotifyFunc();
	void DebugPrintTriggers();
	void DebugPrint();
	bool ObservesTriggerType(class UStatusTrigger_X* InTrigger);
	void UpdateTriggers(class UClass* InType);
	void UnRegisterTriggers(TArray<class UStatusTrigger_X*>* InTriggers, TArray<class UStatusTrigger_X*>* FilterLocal_24C7830F44D463560AA9A3ABB9F1A261);
	void RegisterTriggers(TArray<class UStatusTrigger_X*>* InTriggers, TArray<class UStatusTrigger_X*>* FilterLocal_A8FBC44D4CBB70999DA92BBEC563D387);
	void AddCallback(class UClass* InType, const struct FScriptDelegate& InCallback);
	class UTriggerInfo* FindByAcceptedType(class UClass* InType);
	void SetInitComplete();
	void Init(class ULocalPlayer_X* LP, TArray<class UClass*>* DistinctLocal_E7E9861D4792025B16031E9BAD6E7456, TArray<class UTriggerInfo*>* MapLocal_44290F5846A7D04D73AD32941A622DF9);
};

// Class ProjectX.TriggerInfo
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class UTriggerInfo : public UObject
{
public:
	class UClass*                                      AcceptedType;                                              // 0x0060(0x0008)
	TArray<class UStatusTrigger_X*>                    Triggers;                                                  // 0x0068(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                  // 0x0078(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_VP3K[0xC];                                     // 0x0078(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __UpdateTrigger__Delegate;                                 // 0x0090(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_Q62F[0xC];                                     // 0x0090(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TriggerInfo");
		return ptr;
	}



	class UTriggerInfo* SetType(class UClass* InType);
	void UpdateTrigger(class UStatusTrigger_X* InTrigger);
};

// Class ProjectX.StatusTrigger_X
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UStatusTrigger_X : public UObject
{
public:
	unsigned long                                      bTriggered : 1;                                            // 0x0060(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_YURB[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             EventPropertyChange;                                       // 0x0068(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_I5K4[0xC];                                     // 0x0064(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.StatusTrigger_X");
		return ptr;
	}



	void EventPropertyChangeFunc();
	void EvaluateCondition(bool InConditionalValue);
	bool IsTriggered();
	void ToggleTriggered();
	void DebugPrintInfo(const struct FString& AddedInfo);
	void DebugPrint();
};

// Class ProjectX.__StatusObserver_X__FindByAcceptedType_AC01CEEA4794F209CB802FB2EE554122
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__StatusObserver_X__FindByAcceptedType_AC01CEEA4794F209CB802FB2EE554122 : public UObject
{
public:
	class UClass*                                      InType;                                                    // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__StatusObserver_X__FindByAcceptedType_AC01CEEA4794F209CB802FB2EE554122");
		return ptr;
	}



	bool __StatusObserver_X__FindByAcceptedType_AC01CEEA4794F209CB802FB2EE554122(class UTriggerInfo* TT);
};

// Class ProjectX.__StatusObserver_X__ObservesTriggerType_98469A6B478A46870FD0508B945B7EDB
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__StatusObserver_X__ObservesTriggerType_98469A6B478A46870FD0508B945B7EDB : public UObject
{
public:
	class UStatusTrigger_X*                            InTrigger;                                                 // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__StatusObserver_X__ObservesTriggerType_98469A6B478A46870FD0508B945B7EDB");
		return ptr;
	}



	bool __StatusObserver_X__ObservesTriggerType_98469A6B478A46870FD0508B945B7EDB(class UClass* C);
};

// Class ProjectX.__RegionConfig_X__GetSubRegions_7193063F4CBAD547CB8A80B57ACAFECD
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class U__RegionConfig_X__GetSubRegions_7193063F4CBAD547CB8A80B57ACAFECD : public UObject
{
public:
	struct FString                                     SuperRegionID;                                             // 0x0060(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__RegionConfig_X__GetSubRegions_7193063F4CBAD547CB8A80B57ACAFECD");
		return ptr;
	}



	bool __RegionConfig_X__GetSubRegions_7193063F4CBAD547CB8A80B57ACAFECD(class URegion_X* R);
};

// Class ProjectX.RPC_ClearClubInvites_X
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class URPC_ClearClubInvites_X : public URPC_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_ClearClubInvites_X");
		return ptr;
	}



};

// Class ProjectX.RPC_ClearFriendInvites_X
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class URPC_ClearFriendInvites_X : public URPC_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_ClearFriendInvites_X");
		return ptr;
	}



};

// Class ProjectX.RPC_FileStorage_GetFileDownloadUrl_X
// 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
class URPC_FileStorage_GetFileDownloadUrl_X : public URPC_X
{
public:
	struct FString                                     Path;                                                      // 0x00E8(0x0010) (NeedCtorLink)
	struct FString                                     URL;                                                       // 0x00F8(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_FileStorage_GetFileDownloadUrl_X");
		return ptr;
	}



};

// Class ProjectX.RPC_FileStorage_GetFileUploadUrl_X
// 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
class URPC_FileStorage_GetFileUploadUrl_X : public URPC_X
{
public:
	struct FString                                     Path;                                                      // 0x00E8(0x0010) (NeedCtorLink)
	struct FString                                     ContentType;                                               // 0x00F8(0x0010) (NeedCtorLink)
	struct FString                                     URL;                                                       // 0x0108(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_FileStorage_GetFileUploadUrl_X");
		return ptr;
	}



};

// Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__NotifyOnResult_59019A674EA2162F1067EC9E2F0CED1C
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__TAsyncResult__PsyTagCheckResult_X__NotifyOnResult_59019A674EA2162F1067EC9E2F0CED1C : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_K6BB[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__NotifyOnResult_59019A674EA2162F1067EC9E2F0CED1C");
		return ptr;
	}



	void __TAsyncResult__PsyTagCheckResult_X__NotifyOnResult_59019A674EA2162F1067EC9E2F0CED1C();
};

// Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__NotifyOnResultComplete_594A59404599D9CB7CD47A8C1C400047
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__TAsyncResult__PsyTagCheckResult_X__NotifyOnResultComplete_594A59404599D9CB7CD47A8C1C400047 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_AZCP[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__NotifyOnResultComplete_594A59404599D9CB7CD47A8C1C400047");
		return ptr;
	}



	void __TAsyncResult__PsyTagCheckResult_X__NotifyOnResultComplete_594A59404599D9CB7CD47A8C1C400047(class UError* Err);
};

// Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__SetResultWhen_BD48206446D5FE7F98FA029041FB7966
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__TAsyncResult__PsyTagCheckResult_X__SetResultWhen_BD48206446D5FE7F98FA029041FB7966 : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                         // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_P3JD[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__SetResultWhen_BD48206446D5FE7F98FA029041FB7966");
		return ptr;
	}



	void __TAsyncResult__PsyTagCheckResult_X__SetResultWhen_BD48206446D5FE7F98FA029041FB7966();
};

// Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__Copy_1B3A5A2346D599150E6AEF9912570F21
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__TAsyncResult__PsyTagCheckResult_X__Copy_1B3A5A2346D599150E6AEF9912570F21 : public UObject
{
public:
	class UTAsyncResult__PsyTagCheckResult_X*          Instance;                                                  // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__Copy_1B3A5A2346D599150E6AEF9912570F21");
		return ptr;
	}



	void __TAsyncResult__PsyTagCheckResult_X__Copy_1B3A5A2346D599150E6AEF9912570F21(class UPsyTagCheckResult_X* R, class UError* E);
};

// Class ProjectX.ClientNetMetrics_X
// 0x006C (FullSize[0x00CC] - InheritedSize[0x0060])
class UClientNetMetrics_X : public UObject
{
public:
	float                                              RecordPeriod;                                              // 0x0060(0x0004)
	float                                              LastRecordTime;                                            // 0x0064(0x0004)
	TEnumAsByte<ProjectX_ENetworkNextState>            PrevNetworkNextState;                                      // 0x0068(0x0001)
	unsigned char                                      UnknownData_1AF9[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNetworkNextStats                           PrevNetworkNextStats;                                      // 0x006C(0x0018)
	struct FNetPacketStats                             OldStats;                                                  // 0x0084(0x001C)
	TArray<float>                                      GamePings;                                                 // 0x00A0(0x0010) (NeedCtorLink)
	class UGameServerPinger_X*                         Pinger;                                                    // 0x00B0(0x0008) (ExportObject, Component, EditInline)
	TArray<float>                                      PsyPings;                                                  // 0x00B8(0x0010) (NeedCtorLink)
	int                                                PsyPacketsLost;                                            // 0x00C8(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ClientNetMetrics_X");
		return ptr;
	}



	void __ClientNetMetrics_X__StartRecording_3B1EF86B4EB104621D3C128E3A608CDF(class UGameServerPinger_X* _);
	void __ClientNetMetrics_X__StartRecording_E5B1D0EA4F4CE0E35B7EFD96E744FB38(class UGameServerPinger_X* _, float DelaySeconds);
	struct FPingStats CalcPingStats(TArray<float>* Pings, float* ReduceLocal_0300E32843176AB3995F46A4CE5AE292);
	void Record();
	void RecordTimer();
	void StopRecording();
	void StartRecording();
	void Construct();
};

// Class ProjectX.GameServerPinger_X
// 0x0048 (FullSize[0x00B8] - InheritedSize[0x0070])
class UGameServerPinger_X : public UComponent
{
public:
	class UBeaconConfig_X*                             Config;                                                    // 0x0070(0x0008)
	struct FName                                       Address;                                                   // 0x0078(0x0008)
	class UUdpPingBeaconClient_X*                      PingBeacon;                                                // 0x0080(0x0008) (ExportObject, Component, EditInline)
	struct FScriptDelegate                             __EventPong__Delegate;                                     // 0x0088(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_E001[0xC];                                     // 0x0088(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventLost__Delegate;                                     // 0x00A0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_T3ML[0xC];                                     // 0x00A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GameServerPinger_X");
		return ptr;
	}



	void HandleLost(class UUdpPingBeaconClient_X* _, const struct FName& __);
	void HandlePong(class UUdpPingBeaconClient_X* _, const struct FName& __, float DeltaSeconds);
	void SendPing();
	void StopPinging();
	void StartPinging();
	void SetAddress(const struct FString& InAddress);
	void EventLost(class UGameServerPinger_X* Pinger);
	void EventPong(class UGameServerPinger_X* Pinger, float DeltaSeconds);
};

// Class ProjectX.NetMetricsSystem_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNetMetricsSystem_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetMetricsSystem_X");
		return ptr;
	}



	void Exit(class UPreExitEvent_X* Event, class UClientNetMetrics_X* Metrics);
	void RecordGamePing(class UNetworkPingEvent_X* Ping, class UClientNetMetrics_X* Metrics);
	void PlayerRemoved(class UClientNetMetrics_X* Metrics);
	void PlayerAdded(class UPrimaryPlayer* PP, class UNetMode_DedicatedClient* NetMode, class APlayerReplicationInfo* PRI);
};

// Class ProjectX.NetModeBase
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNetModeBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetModeBase");
		return ptr;
	}



};

// Class ProjectX.NetMode_DedicatedClient
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNetMode_DedicatedClient : public UNetModeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetMode_DedicatedClient");
		return ptr;
	}



};

// Class ProjectX.NetworkPingEvent_X
// 0x0004 (FullSize[0x0064] - InheritedSize[0x0060])
class UNetworkPingEvent_X : public UObject
{
public:
	float                                              DeltaSeconds;                                              // 0x0060(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetworkPingEvent_X");
		return ptr;
	}



};

// Class ProjectX.NetMode_Authoritative
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNetMode_Authoritative : public UNetModeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetMode_Authoritative");
		return ptr;
	}



};

// Class ProjectX.NetMode_Client
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNetMode_Client : public UNetModeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetMode_Client");
		return ptr;
	}



};

// Class ProjectX.NetMode_DedicatedServer
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNetMode_DedicatedServer : public UNetModeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetMode_DedicatedServer");
		return ptr;
	}



};

// Class ProjectX.NetMode_ListenServer
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNetMode_ListenServer : public UNetModeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetMode_ListenServer");
		return ptr;
	}



};

// Class ProjectX.NetMode_Server
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNetMode_Server : public UNetModeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetMode_Server");
		return ptr;
	}



};

// Class ProjectX.NetMode_Standalone
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNetMode_Standalone : public UNetModeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetMode_Standalone");
		return ptr;
	}



};

// Class ProjectX.NetModeReplicator_X
// 0x0000 (FullSize[0x0268] - InheritedSize[0x0268])
class ANetModeReplicator_X : public AReplicationInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetModeReplicator_X");
		return ptr;
	}



};

// Class ProjectX.NetModeSystem_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNetModeSystem_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetModeSystem_X");
		return ptr;
	}



	void AddModes(TArray<class UClass*>* NetModes);
	void HandleDedicatedClient(class ANetModeReplicator_X* _, class UNetMode_Client* NetMode, TArray<class UClass*>* ArrayInitializer_141F48D64144948A7FFC678F8332E47A);
	void LevelUnloaded(class AWorldInfo* WorldInfo);
	void LevelLoaded(class AWorldInfo* WorldInfo, TArray<class UClass*>* ArrayInitializer_B6B5CEF64A83AF63D13D8FB34D2DF67E, TArray<class UClass*>* ArrayInitializer_5EC6887045D624AD6D2958B8F93B1D55, TArray<class UClass*>* ArrayInitializer_FC7FAC27454706EF8DE9D0A14E370A28, TArray<class UClass*>* ArrayInitializer_FA99ED314176B804FACB87AB8E6B8529);
};

// Class ProjectX.Platform_Console
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPlatform_Console : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Platform_Console");
		return ptr;
	}



};

// Class ProjectX.Platform_DedicatedServer
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPlatform_DedicatedServer : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Platform_DedicatedServer");
		return ptr;
	}



};

// Class ProjectX.Platform_Dingo
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPlatform_Dingo : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Platform_Dingo");
		return ptr;
	}



};

// Class ProjectX.Platform_GameClient
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPlatform_GameClient : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Platform_GameClient");
		return ptr;
	}



};

// Class ProjectX.Platform_LanServer
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPlatform_LanServer : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Platform_LanServer");
		return ptr;
	}



};

// Class ProjectX.Platform_NNX
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPlatform_NNX : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Platform_NNX");
		return ptr;
	}



};

// Class ProjectX.Platform_Orbis
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPlatform_Orbis : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Platform_Orbis");
		return ptr;
	}



};

// Class ProjectX.Platform_PC
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPlatform_PC : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Platform_PC");
		return ptr;
	}



};

// Class ProjectX.Platform_Server
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPlatform_Server : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Platform_Server");
		return ptr;
	}



};

// Class ProjectX.PlatformSystem_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPlatformSystem_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PlatformSystem_X");
		return ptr;
	}



	void AddPlatforms(TArray<class UClass*>* Platforms);
	void AddServer(class UClass* PlatformClass, TArray<class UClass*>* ArrayInitializer_3D60F57B46F897F150EA8AA9CC4CE731);
	void AddConsole(class UClass* PlatformClass, TArray<class UClass*>* ArrayInitializer_6EE73BF947E5FAF040CF6182E722DD4B);
	void Init(class UGameEngine* Engine, TArray<class UClass*>* ArrayInitializer_879C78A5414C99F464459BBC0A530A64);
};

// Class ProjectX.DecodeObject_X
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UDecodeObject_X : public UObject
{
public:
	int                                                Checksum;                                                  // 0x0060(0x0004) (ProtectedWrite)
	unsigned char                                      UnknownData_IRC5[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UError*                                      Error;                                                     // 0x0068(0x0008) (ProtectedWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DecodeObject_X");
		return ptr;
	}



	void Decode(class UObject* OutObj);
};

// Class ProjectX.DecodeObjectJson_X
// 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
class UDecodeObjectJson_X : public UDecodeObject_X
{
public:
	class UJSONSerializer_X*                           JsonSerializer;                                            // 0x0070(0x0008) (PrivateWrite)
	struct FString                                     Stream;                                                    // 0x0078(0x0010) (NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DecodeObjectJson_X");
		return ptr;
	}



	void Decode(class UObject* OutObj);
	class UDecodeObjectJson_X* SetStream(struct FString* InStream);
};

// Class ProjectX.DecodeObjectTypes_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UDecodeObjectTypes_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DecodeObjectTypes_X");
		return ptr;
	}



};

// Class ProjectX.DecodeObjectUObject_X
// 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
class UDecodeObjectUObject_X : public UDecodeObject_X
{
public:
	class UObjectSerializer_X*                         ObjectSerializer;                                          // 0x0070(0x0008) (PrivateWrite)
	TArray<unsigned char>                              Stream;                                                    // 0x0078(0x0010) (NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DecodeObjectUObject_X");
		return ptr;
	}



	void Decode(class UObject* OutObj);
	class UDecodeObjectUObject_X* SetStream(struct FString* InStream, int RequestChecksum);
};

// Class ProjectX.EncodeObject_X
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UEncodeObject_X : public UObject
{
public:
	TEnumAsByte<ProjectX_EObjectEncoding>              Encoding;                                                  // 0x0060(0x0001) (PrivateWrite)
	unsigned char                                      UnknownData_2M5V[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Checksum;                                                  // 0x0064(0x0004) (ProtectedWrite)
	struct FString                                     Encoded;                                                   // 0x0068(0x0010) (NeedCtorLink, ProtectedWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EncodeObject_X");
		return ptr;
	}



};

// Class ProjectX.EncodeObjectJson_X
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class UEncodeObjectJson_X : public UEncodeObject_X
{
public:
	class UJSONSerializer_X*                           JsonSerializer;                                            // 0x0078(0x0008) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EncodeObjectJson_X");
		return ptr;
	}



	class UEncodeObject_X* Encode(class UObject* inObj);
};

// Class ProjectX.EncodeObjectUObject_X
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class UEncodeObjectUObject_X : public UEncodeObject_X
{
public:
	class UObjectSerializer_X*                         ObjectSerializer;                                          // 0x0078(0x0008) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EncodeObjectUObject_X");
		return ptr;
	}



	class UEncodeObject_X* Encode(class UObject* inObj);
};

// Class ProjectX.EncodeObjectTypes_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UEncodeObjectTypes_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EncodeObjectTypes_X");
		return ptr;
	}



};

// Class ProjectX.LocalizedAccountLinkURL
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class ULocalizedAccountLinkURL : public UObject
{
public:
	struct FString                                     Language;                                                  // 0x0060(0x0010) (NeedCtorLink)
	struct FString                                     URL;                                                       // 0x0070(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LocalizedAccountLinkURL");
		return ptr;
	}



};

// Class ProjectX.__EpicFriendsPlugin_X__RemoveFriend_DD997C414CD6D2F76BC926873612B30E
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class U__EpicFriendsPlugin_X__RemoveFriend_DD997C414CD6D2F76BC926873612B30E : public UObject
{
public:
	struct FUniqueNetId                                FriendId;                                                  // 0x0060(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__EpicFriendsPlugin_X__RemoveFriend_DD997C414CD6D2F76BC926873612B30E");
		return ptr;
	}



	void __EpicFriendsPlugin_X__RemoveFriend_DD997C414CD6D2F76BC926873612B30E(class UEOS_ManageFriendsListResponse* R, class UError* E);
};

// Class ProjectX.__EpicFriendsPlugin_X__RejectFriendRequest_C4E14B5F45DB048FD78BF7AFF4F379E3
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class U__EpicFriendsPlugin_X__RejectFriendRequest_C4E14B5F45DB048FD78BF7AFF4F379E3 : public UObject
{
public:
	struct FUniqueNetId                                FriendId;                                                  // 0x0060(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__EpicFriendsPlugin_X__RejectFriendRequest_C4E14B5F45DB048FD78BF7AFF4F379E3");
		return ptr;
	}



	void __EpicFriendsPlugin_X__RejectFriendRequest_C4E14B5F45DB048FD78BF7AFF4F379E3(class UEOS_ManageFriendsListResponse* R, class UError* E);
};

// Class ProjectX.__EpicFriendsPlugin_X__SendHTTPRequest_1978A0AE4C1853352446EDABE83218BA
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class U__EpicFriendsPlugin_X__SendHTTPRequest_1978A0AE4C1853352446EDABE83218BA : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_XZNX[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UClass*                                      ResponseClass;                                             // 0x0078(0x0008)
	struct FString                                     Verb;                                                      // 0x0080(0x0010) (NeedCtorLink)
	unsigned long                                      AddContentTypeHeader : 1;                                  // 0x0090(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_OR6S[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     URL;                                                       // 0x0098(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__EpicFriendsPlugin_X__SendHTTPRequest_1978A0AE4C1853352446EDABE83218BA");
		return ptr;
	}



	void ____EpicFriendsPlugin_X__SendHTTPRequest_1978A0AE4C1853352446EDABE83218BA____EpicFriendsPlugin_X__SendHTTPRequest_CBD0F226408A00A417B763BA6F5890BC_0E3E7E8B44BA82C253FC3DB90E7D8B50(class UWebRequest_X* Response);
	void __EpicFriendsPlugin_X__SendHTTPRequest_CBD0F226408A00A417B763BA6F5890BC(bool bSuccess, const struct FString& EpicAuthTicket);
	void __EpicFriendsPlugin_X__SendHTTPRequest_1978A0AE4C1853352446EDABE83218BA(class UWebRequest_X* Response);
};

// Class ProjectX.__EpicFriendsPlugin_X__GetOutgoingFriendRequestsWithCustomCallback_8D3C133D4F5FD298958880BC75DC9CC9
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__EpicFriendsPlugin_X__GetOutgoingFriendRequestsWithCustomCallback_8D3C133D4F5FD298958880BC75DC9CC9 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_FTLQ[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__EpicFriendsPlugin_X__GetOutgoingFriendRequestsWithCustomCallback_8D3C133D4F5FD298958880BC75DC9CC9");
		return ptr;
	}



	void __EpicFriendsPlugin_X__GetOutgoingFriendRequestsWithCustomCallback_8D3C133D4F5FD298958880BC75DC9CC9(class UEOS_GetAccountsResponse* R, class UError* E);
};

// Class ProjectX.LinkedAccountMap_X
// 0x0050 (FullSize[0x00C0] - InheritedSize[0x0070])
class ULinkedAccountMap_X : public UComponent
{
public:
	struct FMap_Mirror                                 PlayerMap;                                                 // 0x0070(0x0050) (Native)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LinkedAccountMap_X");
		return ptr;
	}



	bool Contains(struct FUniqueNetId* Key);
	void Clear(int ExpectedElements);
	void Remove(struct FUniqueNetId* Key);
	struct FUniqueNetId Get(struct FUniqueNetId* Key);
	void Set(struct FUniqueNetId* Key, struct FUniqueNetId* Value);
	int Count();
	void AllValues(struct FUniqueNetId* OutFriend, int StartIndex, int MaxValues);
};

// Class ProjectX.LocalCache_X
// 0x0080 (FullSize[0x00E0] - InheritedSize[0x0060])
class ULocalCache_X : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0060(0x0008) (Const, Native, NoExport)
	TArray<struct FPointer>                            ImportTasks;                                               // 0x0068(0x0010) (Native, Transient, AlwaysInit)
	TArray<struct FCacheImportCallbackData>            ImportCallbacks;                                           // 0x0078(0x0010) (Transient, NeedCtorLink)
	TArray<struct FPointer>                            ExportTasks;                                               // 0x0088(0x0010) (Native, Transient, AlwaysInit)
	TArray<struct FCacheExportCallbackData>            ExportCallbacks;                                           // 0x0098(0x0010) (Transient, NeedCtorLink)
	unsigned long                                      bDebug : 1;                                                // 0x00A8(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData_CR1V[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             __EventImportFinished__Delegate;                           // 0x00B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_805Q[0xC];                                     // 0x00AC(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventExportFinished__Delegate;                           // 0x00C8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_XBNT[0xC];                                     // 0x00C8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LocalCache_X");
		return ptr;
	}



	TEnumAsByte<Core_EFlushResult> Flush(float TimeoutSeconds);
	bool HasActiveTasks();
	void ExportObjectAsync(class UObject* CacheObject, const struct FString& Path, const struct FScriptDelegate& Callback);
	void ImportObjectAsync(class UObject* CacheObject, const struct FString& Path, const struct FScriptDelegate& Callback);
	class UError* ImportObject(class UObject* CacheObject, const struct FString& Path);
	void EventExportFinished(class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error);
	void EventImportFinished(class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error);
};

// Class ProjectX.MapFlythroughProfiler_X
// 0x0058 (FullSize[0x02C0] - InheritedSize[0x0268])
class AMapFlythroughProfiler_X : public AActor
{
public:
	float                                              Accel;                                                     // 0x0268(0x0004) (Edit)
	float                                              TurnRate;                                                  // 0x026C(0x0004) (Edit)
	float                                              ProfileTime;                                               // 0x0270(0x0004) (Edit)
	float                                              FinishTime;                                                // 0x0274(0x0004) (Transient)
	float                                              Speed;                                                     // 0x0278(0x0004) (Transient)
	struct FRenderProfile                              Profile;                                                   // 0x027C(0x0028) (Transient)
	unsigned char                                      UnknownData_GC38[0x4];                                     // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             __EventFinished__Delegate;                                 // 0x02A8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_J26I[0xC];                                     // 0x02A4(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MapFlythroughProfiler_X");
		return ptr;
	}



	void SetupPlayers();
	void PostBeginPlay();
	void EventFinished(class AMapFlythroughProfiler_X* Profiler);
};

// Class ProjectX.ContentConfig_X
// 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
class UContentConfig_X : public UOnlineConfig_X
{
public:
	TArray<struct FContentPair>                        ContentMap;                                                // 0x0078(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ContentConfig_X");
		return ptr;
	}



	void Undo();
	void Apply();
	bool IsEncryptionKeySetAtIndex(const struct FEncryptedKeyIndex& KeyIndex);
	bool EncryptedKeyIndexIsValid(const struct FEncryptedKeyIndex& KeyIndex);
	struct FEncryptedKeyIndex FindKeyIndex(const struct FName& ContentKeyName);
	void UndoNative();
	void ApplyNative();
};

// Class ProjectX.OnlineGameSearch_X
// 0x0044 (FullSize[0x0198] - InheritedSize[0x0154])
class UOnlineGameSearch_X : public UOnlineGameSearch
{
public:
	unsigned char                                      UnknownData_JGK4[0x4];                                     // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             InclusiveGameTagsArray;                                    // 0x0158(0x0010) (Transient, NeedCtorLink)
	TArray<struct FString>                             ExclusiveGameTagsArray;                                    // 0x0168(0x0010) (Transient, NeedCtorLink)
	struct FString                                     MapName;                                                   // 0x0178(0x0010) (Transient, NeedCtorLink)
	struct FString                                     GameTagsDelimiter;                                         // 0x0188(0x0010) (Edit, Const, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameSearch_X");
		return ptr;
	}



	bool GetStringProperty(int PropertyId, struct FString* Value);
	struct FString GetExclusiveGameTags();
	struct FString GetInclusiveGameTags();
	void SetMap(const struct FString& inMapName);
	void SetExclusiveGameTags(TArray<struct FString> inGameTagsArray);
	void SetInclusiveGameTags(TArray<struct FString> inGameTagsArray);
};

// Class ProjectX.OnlineGameSettings_X
// 0x0048 (FullSize[0x00E8] - InheritedSize[0x00A0])
class UOnlineGameSettings_X : public USettings
{
public:
	int                                                NumPublicConnections;                                      // 0x00A0(0x0004)
	int                                                NumOpenPublicConnections;                                  // 0x00A4(0x0004)
	TArray<class UGameSettingCategory_X*>              GameSettingCategories;                                     // 0x00A8(0x0010) (Edit, NeedCtorLink)
	unsigned long                                      bOffline : 1;                                              // 0x00B8(0x0001) BIT_FIELD (Transient)
	int                                                MinimumPlayersRequired;                                    // 0x00BC(0x0004) (PrivateWrite)
	int                                                NumSecondsWaitingForPlayers;                               // 0x00C0(0x0004)
	int                                                SearchScore;                                               // 0x00C4(0x0004)
	float                                              LogTime;                                                   // 0x00C8(0x0004) (Transient, DataBinding, PrivateWrite)
	unsigned char                                      UnknownData_37Q9[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             __EventNumPlayersUpdated__Delegate;                        // 0x00D0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_FXXL[0xC];                                     // 0x00CC(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameSettings_X");
		return ptr;
	}



	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool Equals(class UOnlineGameSettings_X* OtherGameSettings);
	void CalculateMinAndMaxNumPlayers();
	void CopyFrom(class UOnlineGameSettings_X* OtherGameSettings);
	class UGameSettingPlaylist_X* GetPlaylist();
	bool IsValid();
	void RemoveMismatchedTags(class UOnlineGameSettings_X* OtherGameSettings);
	class UGameSettingCategory_X* GetGameSettingCategoryByName(const struct FName& CategoryName);
	void SetIntProperty(int PropertyId, int Value);
	void SetGameTag(const struct FName& NewGameTag);
	void UpdateFromURL(struct FString* URL, class AGameInfo* Game);
	bool HasSetting(const struct FName& SettingName);
	void GetActiveGameSettings(TArray<class UGameSetting_X*>* GameSettings);
	class UGameSetting_X* GetGameSetting(const struct FString& SettingName, class UGameSettingCategory_X** Category);
	struct FString GetGameTags();
	bool GetStringProperty(int PropertyId, struct FString* Value);
	void Init();
	void EventNumPlayersUpdated(class UOnlineGameSettings_X* GameSettings, int NewMinimumPlayersRequired);
};

// Class ProjectX.OnlineLegalText_X
// 0x0040 (FullSize[0x00B0] - InheritedSize[0x0070])
class UOnlineLegalText_X : public UComponent
{
public:
	struct FString                                     Folder;                                                    // 0x0070(0x0010) (Edit, NeedCtorLink)
	class UCachedWebData_X*                            CachedData;                                                // 0x0080(0x0008) (Transient, PrivateWrite)
	struct FString                                     AppendedPath;                                              // 0x0088(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FScriptDelegate                             __EventNewText__Delegate;                                  // 0x0098(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_5KJE[0xC];                                     // 0x0098(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineLegalText_X");
		return ptr;
	}



	void __OnlineLegalText_X__Sync_43A9EA3749F97E0B88EEB5871467F54E(class UUrlConfig_X* UrlConfig);
	void HandleWebText(class UCachedWebData_X* InCachedData);
	struct FString GetWebUrl(class UUrlConfig_X* UrlConfig);
	struct FString GetPlatformString();
	struct FString GetRelativeUrl(bool bUseAppendedPath);
	struct FString GetFileSystemUrl();
	struct FString GetText();
	void Sync(const struct FString& InAppendPath);
	void EventNewText(class UOnlineLegalText_X* Text);
};

// Class ProjectX.OnlineMessageComponent_X
// 0x0038 (FullSize[0x00A8] - InheritedSize[0x0070])
class UOnlineMessageComponent_X : public UComponent
{
public:
	class USerializer_X*                               Serializer;                                                // 0x0070(0x0008) (Edit)
	class UCompression_X*                              Compressor;                                                // 0x0078(0x0008) (Edit)
	TArray<struct FOnlineMessageHandler>               MessageHandlers;                                           // 0x0080(0x0010) (Const, Transient, NeedCtorLink)
	struct FScriptDelegate                             __MessageReceivedDelegate__Delegate;                       // 0x0090(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_0T9T[0xC];                                     // 0x0090(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineMessageComponent_X");
		return ptr;
	}



	class UOnlineMessageComponent_X* EnableCompression(bool bEnabled);
	class UOnlineMessageComponent_X* SetSerializer(class USerializer_X* InSerializer);
	void InvokeHandlers(class UObject* Message);
	class UObject* DeserializeMessage(TArray<unsigned char>* Data, class UObject* MessageOuter);
	bool SerializeMessage(class UObject* Message, TArray<unsigned char>* OutData);
	class UOnlineMessage_X* CreateMessage(class UClass* MessageClass, class UObject* MessageOuter);
	void RemoveMessageHandler(const struct FScriptDelegate& Callback);
	void AddMessageHandler(class UClass* MessageClass, const struct FScriptDelegate& Callback);
	void MessageReceivedDelegate(class UOnlineMessageComponent_X* Component, class UObject* Message);
};

// Class ProjectX.ParameterDispenser_X
// 0x0068 (FullSize[0x00D8] - InheritedSize[0x0070])
class UParameterDispenser_X : public UComponent
{
public:
	struct FPointer                                    VfTable_IISetParameter;                                    // 0x0070(0x0008) (Const, Native, NoExport)
	TArray<struct FNameParamPair>                      NameParams;                                                // 0x0078(0x0010) (Edit, NeedCtorLink, PrivateWrite)
	TArray<struct FFloatParamPair>                     FloatParams;                                               // 0x0088(0x0010) (Edit, NeedCtorLink, PrivateWrite)
	TArray<struct FVectorParamPair>                    VectorParams;                                              // 0x0098(0x0010) (Edit, NeedCtorLink, PrivateWrite)
	TArray<struct FColorParamPair>                     ColorParams;                                               // 0x00A8(0x0010) (Edit, NeedCtorLink, PrivateWrite)
	TArray<struct FActorParamPair>                     ActorParams;                                               // 0x00B8(0x0010) (Edit, NeedCtorLink, PrivateWrite)
	unsigned char                                      AllComponents[0x10];                                       // 0x00C8(0x0010) UNKNOWN PROPERTY: ArrayProperty ProjectX.ParameterDispenser_X.AllComponents


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ParameterDispenser_X");
		return ptr;
	}



	void Inherit(class UParameterDispenser_X* Other);
	void ResetMaterials();
	void ApplyAllParameters();
	class AActor* GetActorParameter(const struct FName& Key);
	void SetActorParameter(const struct FName& Key, class AActor* Value);
	void SetLinearColorParameter(const struct FName& Key, const struct FLinearColor& Value);
	void SetVectorParameter(const struct FName& Key, const struct FVector& Value);
	void SetFloatParameter(const struct FName& Key, float Value);
	void SetNameParameter(const struct FName& Key, const struct FName& Value);
	void RemoveComponent();
	void AddComponent();
};

// Class ProjectX.ParticleModuleBeamTarget_X
// 0x0004 (FullSize[0x0110] - InheritedSize[0x010C])
class UParticleModuleBeamTarget_X : public UParticleModuleBeamTarget
{
public:
	unsigned char                                      UnknownData_9N5B[0x4];                                     // 0x010C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ParticleModuleBeamTarget_X");
		return ptr;
	}



};

// Class ProjectX.ParticleModuleLocationBoneSocket_X
// 0x0004 (FullSize[0x00B0] - InheritedSize[0x00AC])
class UParticleModuleLocationBoneSocket_X : public UParticleModuleLocationBoneSocket
{
public:
	unsigned char                                      UnknownData_RWTV[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ParticleModuleLocationBoneSocket_X");
		return ptr;
	}



};

// Class ProjectX.ParticleModuleLocationSkelVertSurface_X
// 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
class UParticleModuleLocationSkelVertSurface_X : public UParticleModuleLocationSkelVertSurface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ParticleModuleLocationSkelVertSurface_X");
		return ptr;
	}



};

// Class ProjectX.ParticleModuleWind_X
// 0x0050 (FullSize[0x00C0] - InheritedSize[0x0070])
class UParticleModuleWind_X : public UParticleModuleWorldForcesBase
{
public:
	struct FRawDistributionFloat                       StrengthScaleOverLife;                                     // 0x0070(0x0028) (Edit, Component, NeedCtorLink)
	struct FRawDistributionFloat                       AccelerationOverLife;                                      // 0x0098(0x0028) (Edit, Component, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ParticleModuleWind_X");
		return ptr;
	}



};

// Class ProjectX.Pawn_X
// 0x0044 (FullSize[0x0558] - InheritedSize[0x0514])
class APawn_X : public APawn
{
public:
	unsigned char                                      UnknownData_PO8M[0x4];                                     // 0x0514(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GravityScale;                                              // 0x0518(0x0004) (Edit)
	unsigned char                                      UnknownData_D6SD[0x4];                                     // 0x051C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AController*                                 PreviousController;                                        // 0x0520(0x0008) (Transient)
	struct FScriptDelegate                             __EventDestroyed__Delegate;                                // 0x0528(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_AODD[0xC];                                     // 0x0528(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventAnimEnd__Delegate;                                  // 0x0540(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_08BF[0xC];                                     // 0x0540(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Pawn_X");
		return ptr;
	}



	bool IsSameTeam(class APawn* Other);
	void Destroyed();
	float GetGravityZ();
	void OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void OnControllerChanged();
	void PossessedBy(class AController* C);
	void UpdateControllerRef();
	void ReplicatedEvent(const struct FName& VarName);
	void EventAnimEnd(class APawn_X* ForPawn, class UAnimNodeSequence* SeqNode);
	void EventDestroyed(class APawn_X* Pawn);
};

// Class ProjectX.PerCon_X
// 0x0038 (FullSize[0x0098] - InheritedSize[0x0060])
class UPerCon_X : public UObject
{
public:
	class UPsyNetConfig_X*                             Config;                                                    // 0x0060(0x0008)
	struct FString                                     URL;                                                       // 0x0068(0x0010) (NeedCtorLink)
	TEnumAsByte<ProjectX_EPerConStatus>                Status;                                                    // 0x0078(0x0001) (PrivateWrite)
	unsigned char                                      UnknownData_HFAZ[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             __EventStatusChanged__Delegate;                            // 0x0080(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_SSMC[0xC];                                     // 0x0079(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PerCon_X");
		return ptr;
	}



	bool UseWebSocket(bool bRpcWebSocket);
	void HandleConfigChanged();
	void SetStatus(TEnumAsByte<ProjectX_EPerConStatus> InStatus);
	void SetEnabled(bool bEnable);
	void EventStatusChanged(class UPerCon_X* PerCon);
};

// Class ProjectX.PhysicalMaterialProperty_X
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UPhysicalMaterialProperty_X : public UPhysicalMaterialPropertyBase
{
public:
	struct FName                                       SurfaceType;                                               // 0x0060(0x0008) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PhysicalMaterialProperty_X");
		return ptr;
	}



};

// Class ProjectX.PlayerInput_X
// 0x0180 (FullSize[0x0478] - InheritedSize[0x02F8])
class UPlayerInput_X : public UPlayerInput
{
public:
	float                                              GamepadDeadzone;                                           // 0x02F8(0x0004) (Config)
	unsigned char                                      UnknownData_B6A4[0x4];                                     // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGamepadDeadzoneSettings>            GamepadDeadzones;                                          // 0x0300(0x0010) (Config, NeedCtorLink)
	float                                              KeyboardAxisBlendTime;                                     // 0x0310(0x0004) (Config)
	unsigned char                                      UnknownData_LRY2[0x4];                                     // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKeyboardAxisBlendSettings>          KeyboardAxisBlendTimes;                                    // 0x0318(0x0010) (Config, NeedCtorLink)
	struct FName                                       CurrentKey;                                                // 0x0328(0x0008) (Const, Transient)
	struct FName                                       ActiveDPadButton;                                          // 0x0330(0x0008) (Const, Transient)
	struct FName                                       LastDoubleTapKey;                                          // 0x0338(0x0008) (Const, Transient)
	TArray<struct FName>                               DisabledActions;                                           // 0x0340(0x0010) (Const, Transient, NeedCtorLink)
	TArray<struct FName>                               DisabledActionsUntilNextUse;                               // 0x0350(0x0010) (Const, Transient, NeedCtorLink)
	TArray<struct FBindingAction>                      Actions;                                                   // 0x0360(0x0010) (NeedCtorLink)
	class UControlPreset_X*                            ControlPreset;                                             // 0x0370(0x0008)
	TArray<struct FPlayerBinding>                      PCBindings;                                                // 0x0378(0x0010) (Config, NeedCtorLink)
	TArray<struct FPlayerBinding>                      GamepadBindings;                                           // 0x0388(0x0010) (Config, NeedCtorLink)
	TArray<struct FPlayerBinding>                      SteamInputBindings;                                        // 0x0398(0x0010) (Config, NeedCtorLink)
	float                                              TapTime;                                                   // 0x03A8(0x0004) (Config)
	float                                              DoubleTapTime;                                             // 0x03AC(0x0004) (Config)
	TArray<struct FPointer>                            HeldBindings;                                              // 0x03B0(0x0010) (Native, Transient)
	unsigned long                                      bDebugInput : 1;                                           // 0x03C0(0x0001) BIT_FIELD (Transient)
	unsigned long                                      bAbsorbCurrentKeyPress : 1;                                // 0x03C0(0x0001) BIT_FIELD (Const, Transient)
	unsigned char                                      UnknownData_5XIJ[0x4];                                     // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      RawAxisValues[0x50];                                       // 0x03C4(0x0050) UNKNOWN PROPERTY: MapProperty ProjectX.PlayerInput_X.RawAxisValues
	struct FScriptDelegate                             __EventActionToggled__Delegate;                            // 0x0418(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_90QX[0xC];                                     // 0x0418(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventBindingsChanged__Delegate;                          // 0x0430(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_PL9R[0xC];                                     // 0x0430(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventSetBindingsToUserBindings__Delegate;                // 0x0448(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_DZST[0xC];                                     // 0x0448(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventInitialized__Delegate;                              // 0x0460(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_MMGN[0xC];                                     // 0x0460(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PlayerInput_X");
		return ptr;
	}



	void PrintDebugInfo(class UDebugDrawer* Drawer);
	struct FName GetKeyForActionArray(const struct FName& Action, TArray<struct FPlayerBinding>* PlayerBindings);
	void AbsorbCurrentKeyPress();
	void SetBindings(TArray<struct FPlayerBinding>* PC, TArray<struct FPlayerBinding>* Gamepad);
	void ClearDisableActionUntilNextUseList();
	void DisableActionUntilNextUse(const struct FName& ActionName);
	void ClearDisabledActions();
	void RemoveFromDisabledActions(const struct FName& ActionName);
	void AddToDisabledActions(const struct FName& ActionName);
	void ReleaseKey(const struct FName& Key, bool bTriggerEvents);
	struct FString GetUIKey(const struct FName& KeyName);
	void ShutdownInputSystem();
	void InitInputSystem();
	void ResetInput();
	float GetRawSplitAxisValue(const struct FName& AxisNegative, const struct FName& AxisPositive);
	float GetRawAxisValue(const struct FName& AxisName);
	class UControlPreset_X* GetControlPreset(const struct FName& PresetName);
	void SetControlPreset(const struct FName& PresetName);
	void ResetActiveBindingsToProfileBindings();
	void ResetBindingsToDefault();
	void EventInitialized(class UPlayerInput_X* PlayerInput);
	void EventSetBindingsToUserBindings(class UPlayerInput_X* PlayerInput);
	void EventBindingsChanged(class UPlayerInput_X* PlayerInput);
	void EventActionToggled(class UPlayerInput_X* PlayerInput, const struct FName& ActionName, bool bEnabled);
};

// Class ProjectX.PointLightComponent_X
// 0x0010 (FullSize[0x0274] - InheritedSize[0x0264])
class UPointLightComponent_X : public UPointLightComponent
{
public:
	unsigned char                                      UnknownData_Y3T1[0x4];                                     // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDistributionFloatConstantCurve*             BrightnessOverTime;                                        // 0x0268(0x0008) (Edit, ExportObject, Component, EditInline)
	float                                              AttachTime;                                                // 0x0270(0x0004) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PointLightComponent_X");
		return ptr;
	}



};

// Class ProjectX.PsyNet_X
// 0x00F0 (FullSize[0x0150] - InheritedSize[0x0060])
class UPsyNet_X : public UObject
{
public:
	TEnumAsByte<ProjectX_EDatabaseEnvironment>         Environment;                                               // 0x0060(0x0001) (Transient, PrivateWrite)
	unsigned char                                      UnknownData_TCH0[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EnvironmentName;                                           // 0x0068(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FPsyNetKeys                                 Keys;                                                      // 0x0078(0x0030) (Const, Transient, NeedCtorLink)
	class UStringMap*                                  Headers;                                                   // 0x00A8(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class UPsyNetServiceSubscriptions_X*               Services;                                                  // 0x00B0(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class UPsyNetConnection_X*                         PrimaryEnabledConnection;                                  // 0x00B8(0x0008) (PrivateWrite)
	class UPsyNetConnection_X*                         PrimaryAuthedConnection;                                   // 0x00C0(0x0008) (PrivateWrite)
	class UPsyNetConnection_X*                         AnonymousConnection;                                       // 0x00C8(0x0008) (PrivateWrite)
	float                                              LastReportCheaterTime;                                     // 0x00D0(0x0004)
	unsigned long                                      bUsePsynetEnvironment : 1;                                 // 0x00D4(0x0001) BIT_FIELD (Config)
	struct FScriptDelegate                             __EventPrimaryConnectionEnabled__Delegate;                 // 0x00D8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_XE5S[0xC];                                     // 0x00D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPrimaryConnectionDisabled__Delegate;                // 0x00F0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_2O2Y[0xC];                                     // 0x00F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPrimaryPlayerLoggedIn__Delegate;                    // 0x0108(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_388Q[0xC];                                     // 0x0108(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPrimaryPlayerLoggedOut__Delegate;                   // 0x0120(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_90SD[0xC];                                     // 0x0120(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventCheaterReported__Delegate;                          // 0x0138(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_H30P[0xC];                                     // 0x0138(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNet_X");
		return ptr;
	}



	void ReportCheater(const struct FUniqueNetId& Id, const struct FString& Reason);
	struct FString AssignQWordToString();
	void AssignStringToQWord(const struct FString& S);
	float GetRetryDelay(int Failures, TArray<float> Delays);
	void ConnectionChangedIP(const struct FUniqueNetId& PlayerID);
	void NetworkError(const struct FUniqueNetId& PlayerID, const struct FString& Reason);
	void InitHeaders();
	void NotifyWhenLoggedIn(const struct FScriptDelegate& LoginCallback, const struct FScriptDelegate& LogoutCallback);
	void NotifyWhenPrimaryConnectionEnabled(const struct FScriptDelegate& EnabledCallback, const struct FScriptDelegate& DisabledCallback);
	void SetPrimaryAuthedConnection(class UPsyNetConnection_X* Connection, class UPrimaryAuthLoggedIn_TA** ObjectInitializer_9719B3D244CDDB0CCDFB2FA9ECF4C566);
	void SetPrimaryEnabledConnection(class UPsyNetConnection_X* Connection);
	void HandleConnectionChanged(class UPsyNetConnection_X* Connection);
	class UPsyNetConnection_X* GetPrimaryConnection();
	void HandleServiceExecuted(class UPsyNetServiceProvider_X* P, class UPsyNetClientService_X* Service);
	void Init();
	void Flush(float TimeoutSeconds);
	class URPC_X* QueueRPC(class URPC_X* RPC);
	class URPC_X* RPC(class UClass* RPCClass);
	class UPsyNet_X* GetInstance();
	void EventCheaterReported();
	void EventPrimaryPlayerLoggedOut();
	void EventPrimaryPlayerLoggedIn();
	void EventPrimaryConnectionDisabled();
	void EventPrimaryConnectionEnabled();
};

// Class ProjectX.PsyNetBeaconConnection_X
// 0x002C (FullSize[0x008C] - InheritedSize[0x0060])
class UPsyNetBeaconConnection_X : public UObject
{
public:
	struct FPointer                                    VfTable_IIReservationConnection_X;                         // 0x0060(0x0008) (Const, Native, NoExport)
	struct FString                                     ReservationID;                                             // 0x0068(0x0010) (NeedCtorLink)
	struct FString                                     ConnectionID;                                              // 0x0078(0x0010) (NeedCtorLink)
	float                                              TimeoutTime;                                               // 0x0088(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetBeaconConnection_X");
		return ptr;
	}



};

// Class ProjectX.PsyNetClientServiceCollection_X
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UPsyNetClientServiceCollection_X : public UObject
{
public:
	TArray<class UPsyNetClientService_X*>              ServiceArchetypes;                                         // 0x0060(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetClientServiceCollection_X");
		return ptr;
	}



	class UPsyNetClientService_X* GetServiceArchetype(const struct FString& ServiceName, int Version);
	void CollectServiceArchetypes();
	void Construct();
};

// Class ProjectX.PsyNetConnection_X
// 0x0170 (FullSize[0x01D0] - InheritedSize[0x0060])
class UPsyNetConnection_X : public UObject
{
public:
	class UPsyNet_X*                                   PsyNet;                                                    // 0x0060(0x0008)
	class UOnlineSubsystem*                            OnlineSub;                                                 // 0x0068(0x0008)
	class UPsyNetConfig_X*                             Config;                                                    // 0x0070(0x0008)
	class UPsyNetRetryConfig_X*                        RetryConfig;                                               // 0x0078(0x0008)
	class UPsyNetUrl_X*                                URL;                                                       // 0x0080(0x0008)
	class UStringMap*                                  Headers;                                                   // 0x0088(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class UPsyNetRequestQue_X*                         RequestQue;                                                // 0x0090(0x0008) (PrivateWrite)
	class URPCQueue_X*                                 RPCQueue;                                                  // 0x0098(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class UPsyNetServiceProvider_X*                    ServiceProvider;                                           // 0x00A0(0x0008) (PrivateWrite)
	class UPsyNetMessengerHttp_X*                      HttpMessenger;                                             // 0x00A8(0x0008) (PrivateWrite)
	class UPsyNetMessengerWebSocket_X*                 PerConMessenger;                                           // 0x00B0(0x0008) (PrivateWrite)
	class UPerCon_X*                                   PerCon;                                                    // 0x00B8(0x0008) (PrivateWrite)
	class UPerConMetrics_X*                            PerConMetrics;                                             // 0x00C0(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	unsigned long                                      bAuthorized : 1;                                           // 0x00C8(0x0001) BIT_FIELD (PrivateWrite)
	unsigned long                                      bConnected : 1;                                            // 0x00C8(0x0001) BIT_FIELD (PrivateWrite)
	unsigned long                                      bFreshConnection : 1;                                      // 0x00C8(0x0001) BIT_FIELD (PrivateWrite)
	unsigned long                                      bPerConConnected : 1;                                      // 0x00C8(0x0001) BIT_FIELD (PrivateWrite)
	float                                              ConnectedChangeTime;                                       // 0x00CC(0x0004) (PrivateWrite)
	class UError*                                      DisabledError;                                             // 0x00D0(0x0008) (PrivateWrite)
	TArray<class UError*>                              DisabledErrorStack;                                        // 0x00D8(0x0010) (NeedCtorLink)
	class UError*                                      MaintenanceError;                                          // 0x00E8(0x0008)
	class UError*                                      DuplicateLoginError;                                       // 0x00F0(0x0008)
	class UError*                                      NoInternetError;                                           // 0x00F8(0x0008)
	class UError*                                      NoUrlError;                                                // 0x0100(0x0008)
	class UError*                                      AuthDisabledError;                                         // 0x0108(0x0008)
	TArray<float>                                      AuthRetryDelays;                                           // 0x0110(0x0010) (Edit, NeedCtorLink)
	int                                                ConsecutiveAuthFailures;                                   // 0x0120(0x0004)
	unsigned char                                      UnknownData_XL41[0x4];                                     // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             __EventConnected__Delegate;                                // 0x0128(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_RLCM[0xC];                                     // 0x0124(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDisconnected__Delegate;                             // 0x0140(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_Q31O[0xC];                                     // 0x0140(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventConnectFailed__Delegate;                            // 0x0158(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_VITM[0xC];                                     // 0x0158(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPerConConnected__Delegate;                          // 0x0170(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_8AVN[0xC];                                     // 0x0170(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPerConDisconnected__Delegate;                       // 0x0188(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_VVF3[0xC];                                     // 0x0188(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventEnabled__Delegate;                                  // 0x01A0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_VDKB[0xC];                                     // 0x01A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDisabled__Delegate;                                 // 0x01B8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_LMPV[0xC];                                     // 0x01B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetConnection_X");
		return ptr;
	}



	void SendPingMessage();
	void WatchPerConConnection(const struct FScriptDelegate& OnConnected, const struct FScriptDelegate& OnDisconnected);
	void StopWatchConnection(const struct FScriptDelegate& OnConnected, const struct FScriptDelegate& OnDisconnected);
	void WatchConnection(const struct FScriptDelegate& OnConnected, const struct FScriptDelegate& OnDisconnected);
	void WatchEnabled(const struct FScriptDelegate& OnEnabled, const struct FScriptDelegate& OnDisabled);
	void Dispose();
	void UpdateLinkConnection(bool bHasConnection);
	void ClearDuplicateLoginError();
	void OnDuplicateLogin();
	void HandleDuplicateLoginMessage(class UPsyNetClientService_X* Service);
	void HandleWebSocketDisconnect(class UPsyNetMessengerWebSocket_X* WS, int Code, const struct FString& Reason);
	void HandleWebSocketConnect(class UPsyNetMessengerWebSocket_X* WS);
	void HandleWebSocketStartConnectFail(class UPsyNetMessengerWebSocket_X* WS);
	void UpdateConnectionState();
	void ClearAuthDisabledError();
	void SetAuthDisabledError(class UError* Error);
	void ConditionalSetAuthRetryDelay(const struct FString& Service, class UError* Error);
	void HandleErrorRPC(class URPCQueue_X* InQueue, class URPC_X* InRPC, class UError* Error);
	bool IsEnabled();
	void UpdateDisabledError(class UError** Error, class UErrorType* Type, bool bIsError);
	void AddDisabledError(class UError* Error);
	void RemoveDisabledError(class UError* Error);
	TEnumAsByte<Core_EFlushResult> Flush(float TimeoutSeconds);
	class URPC_X* QueueRPC(class URPC_X* RPC);
	class URPC_X* RPC(class UClass* RPCClass);
	bool ProcessServiceCall(class UPsyNetMessage_X* Message);
	void ProcessMessage(class UPsyNetMessage_X* Message);
	void UpdatePsyTime(class UPsyNetMessage_X* Message);
	void ReceiveMessage(class UPsyNetMessage_X* Message);
	class UTAsyncResult__PsyNetMessage_X* SendRequest(class UPsyNetMessage_X* Request);
	class UAsyncTask* SendMessage(class UPsyNetMessage_X* Message);
	void RemoveHeader(const struct FString& Key);
	void SetHeader(const struct FString& Key, const struct FString& Value);
	void SetAuthorized(bool bAuth);
	class UStringMap* BuildHandshakeHeaders();
	class UPsyNetMessenger_X* GetMessenger();
	void CreatePerConMessenger();
	void CreateHttpMessenger(const struct FString& InURL);
	void KillPerConMessenger();
	void KillHttpMessenger();
	void KillMessengers();
	void CreateMessengers();
	void InitMessengers();
	void InitServiceProvider();
	void HandlePerConStatusChanged(class UPerCon_X* P);
	void InitPerCon();
	void InitRPCQueue();
	void InitRequestQue();
	void InitHeaders();
	void UpdateNoUrlError();
	void HandleUrlChanged();
	struct FString GetPsyNetURL();
	void Construct();
	void EventDisabled(class UPsyNetConnection_X* Connection);
	void EventEnabled(class UPsyNetConnection_X* Connection);
	void EventPerConDisconnected(class UPsyNetConnection_X* Connection);
	void EventPerConConnected(class UPsyNetConnection_X* Connection);
	void EventConnectFailed(class UPsyNetConnection_X* Connection);
	void EventDisconnected(class UPsyNetConnection_X* Connection);
	void EventConnected(class UPsyNetConnection_X* Connection);
};

// Class ProjectX.PsyNetErrorType_X
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UPsyNetErrorType_X : public UErrorType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetErrorType_X");
		return ptr;
	}



};

// Class ProjectX.PsyNetMessage_X
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UPsyNetMessage_X : public UObject
{
public:
	class UStringMap*                                  Headers;                                                   // 0x0060(0x0008) (Const, ExportObject, Component, EditInline)
	TArray<unsigned char>                              Body;                                                      // 0x0068(0x0010) (NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetMessage_X");
		return ptr;
	}



	struct FString GetBodyText();
	void SetBodyText(const struct FString& Value);
	void SetBody(TArray<unsigned char>* Value);
};

// Class ProjectX.PsyNetMessenger_X
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UPsyNetMessenger_X : public UObject
{
public:
	struct FScriptDelegate                             __EventMessageReceived__Delegate;                          // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_OGM7[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetMessenger_X");
		return ptr;
	}



	void Dispose();
	void EventMessageReceived(class UPsyNetMessage_X* Message);
	class UAsyncTask* SendMessage(class UPsyNetMessage_X* Message);
	void Connect();
};

// Class ProjectX.PsyNetMessengerHttp_X
// 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
class UPsyNetMessengerHttp_X : public UPsyNetMessenger_X
{
public:
	struct FString                                     URL;                                                       // 0x0078(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetMessengerHttp_X");
		return ptr;
	}



	void CopyHeadersToMessage(class UWebRequest_X* From, class UPsyNetMessage_X* To);
	void CopyHeadersToRequest(class UPsyNetMessage_X* From, class UWebRequest_X* To);
	void HandleWebRequestComplete(const struct FString& PsyRequestID, class UWebRequest_X* Request, class UAsyncTask* Task);
	class UAsyncTask* SendMessage(class UPsyNetMessage_X* Message);
};

// Class ProjectX.PsyNetMessengerWebSocket_X
// 0x00B8 (FullSize[0x0130] - InheritedSize[0x0078])
class UPsyNetMessengerWebSocket_X : public UPsyNetMessenger_X
{
public:
	float                                              MessageSendTimeout;                                        // 0x0078(0x0004) (Edit)
	unsigned char                                      UnknownData_2SVP[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStringMap*                                  HandshakeHeaders;                                          // 0x0080(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	struct FString                                     URL;                                                       // 0x0088(0x0010) (NeedCtorLink, PrivateWrite)
	class UWebSocketConnection_X*                      Connection;                                                // 0x0098(0x0008) (PrivateWrite)
	TArray<struct FQueuedPsyNetMessage>                QueuedMessages;                                            // 0x00A0(0x0010) (NeedCtorLink)
	class UPsyNetConfig_X*                             PsyNetConfig;                                              // 0x00B0(0x0008)
	struct FScriptDelegate                             __EventStartConnect__Delegate;                             // 0x00B8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_QJOQ[0xC];                                     // 0x00B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventStartConnectFail__Delegate;                         // 0x00D0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_CA27[0xC];                                     // 0x00D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventConnected__Delegate;                                // 0x00E8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_VE6E[0xC];                                     // 0x00E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDisconnected__Delegate;                             // 0x0100(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_MZJB[0xC];                                     // 0x0100(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventInvalidMessageReceived__Delegate;                   // 0x0118(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_WZIU[0xC];                                     // 0x0118(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetMessengerWebSocket_X");
		return ptr;
	}



	void __PsyNetMessengerWebSocket_X__SendQueuedMessages_B471681B4D41556D7B2148BC9BEEE793(const struct FQueuedPsyNetMessage& QueuedMessage);
	void Dispose();
	void HandleReceivedBunch(class UTcpConnection* C);
	void SerializeMessage(class UPsyNetMessage_X* Message);
	void FailQueuedMessages(class UError* Error);
	void TimeoutQueuedMessages();
	void SendMessageWithTask(class UPsyNetMessage_X* Message, class UAsyncTask* Task);
	void SendQueuedMessages();
	void QueueMessage(class UPsyNetMessage_X* Message, class UAsyncTask* Task);
	void StripHandshakeHeaders(class UPsyNetMessage_X* Message);
	class UAsyncTask* SendMessage(class UPsyNetMessage_X* Message);
	void HandleDisconnected(class UWebSocketConnection_X* InConnection);
	void HandleConnected(class UWebSocketConnection_X* InConnection);
	void Disconnect();
	void Connect();
	bool IsConnected();
	void Init(const struct FString& InURL, class UStringMap* InHandshakeHeaders);
	void EventInvalidMessageReceived(class UPsyNetMessengerWebSocket_X* Messenger, const struct FString& MessageSubstring);
	void EventDisconnected(class UPsyNetMessengerWebSocket_X* Messenger, int Code, const struct FString& Reason);
	void EventConnected(class UPsyNetMessengerWebSocket_X* Messenger);
	void EventStartConnectFail(class UPsyNetMessengerWebSocket_X* Messenger);
	void EventStartConnect(class UPsyNetMessengerWebSocket_X* Messenger);
};

// Class ProjectX.PsyNetServiceSerializer_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPsyNetServiceSerializer_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetServiceSerializer_X");
		return ptr;
	}



	struct FString SerializeResponse(class UPsyNetClientService_X* Service);
	void DeserializeRequest(const struct FString& JSON, class UPsyNetClientService_X* Service);
};

// Class ProjectX.PsyNetServiceSubscriptions_X
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UPsyNetServiceSubscriptions_X : public UComponent
{
public:
	TArray<struct FServiceSubscription>                Subscriptions;                                             // 0x0070(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetServiceSubscriptions_X");
		return ptr;
	}



	void NotifyServiceExecuted(class UPsyNetClientService_X* Service);
	void UnsubscribeAll(class UObject* Listener);
	void Unsubscribe(const struct FScriptDelegate& Callback);
	void Subscribe(class UClass* ServiceClass, const struct FScriptDelegate& Callback);
};

// Class ProjectX.PsyNetStaticData_X
// 0x00C8 (FullSize[0x0138] - InheritedSize[0x0070])
class UPsyNetStaticData_X : public UComponent
{
public:
	struct FString                                     PsyConfigTemplateURL;                                      // 0x0070(0x0010) (Edit, Config, NeedCtorLink)
	float                                              LocalCacheTimeoutSeconds;                                  // 0x0080(0x0004) (Edit, Config)
	float                                              SyncDataTimeoutSeconds;                                    // 0x0084(0x0004) (Edit, Config)
	class UPsyNet_X*                                   PsyNet;                                                    // 0x0088(0x0008)
	class UOnlineSubsystem*                            OnlineSub;                                                 // 0x0090(0x0008)
	class UWebConfig_X*                                WebConfig;                                                 // 0x0098(0x0008)
	unsigned long                                      bDebug : 1;                                                // 0x00A0(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bLoaded : 1;                                               // 0x00A0(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned long                                      bBlockingSync : 1;                                         // 0x00A0(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownData_MHYP[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCacheTimer_X*                               CacheTimer;                                                // 0x00A8(0x0008) (Edit, ExportObject, Component, EditInline)
	class UOnlineResource_X*                           WebData;                                                   // 0x00B0(0x0008) (Edit, ExportObject, Component, EditInline)
	TArray<class UObject*>                             DefaultObjects;                                            // 0x00B8(0x0010) (Edit, NeedCtorLink)
	TArray<class UObject*>                             DownloadedObjects;                                         // 0x00C8(0x0010) (Transient, NeedCtorLink)
	TArray<class UObject*>                             RegisteredObjects;                                         // 0x00D8(0x0010) (Transient, NeedCtorLink)
	class UStopwatch*                                  SyncDataStopwatch;                                         // 0x00E8(0x0008) (ExportObject, Component, EditInline)
	struct FString                                     PsyConfigQueryParams;                                      // 0x00F0(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FString                                     PsyConfigSecret;                                           // 0x0100(0x0010) (Const, NeedCtorLink)
	struct FString                                     PsyConfigAltEnv;                                           // 0x0110(0x0010) (Const, NeedCtorLink)
	struct FScriptDelegate                             __EventLoaded__Delegate;                                   // 0x0120(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_IQJI[0xC];                                     // 0x0120(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetStaticData_X");
		return ptr;
	}



	void __PsyNetStaticData_X__Init_A3041D5348734C62E1C28A9331FE4ED0(class UObject* _);
	void __PsyNetStaticData_X__Init_D546E7FD43B95DF50A1154BA3E44899F(class UObject* _);
	void __PsyNetStaticData_X__Init_EBABBB354EAE4128971871BC6474F563();
	void __PsyNetStaticData_X__HandleGetURL_62B4CABB47080447B8BF4C893A5EBDBA(class UOnlineResource_X* _);
	class UPsyNetStaticDataMetrics_X* GetMetrics();
	void UpdateRegisteredObjects();
	bool LoadFromUTF8(TArray<unsigned char>* SignedData);
	bool LoadFromSignedUTF8WithSignature(TArray<unsigned char>* SignedData, const struct FString& Signature);
	bool LoadFromSignedUTF8(TArray<unsigned char>* SignedData);
	void InstantiateObjects();
	void HandleDataChanged(class UOnlineResource_X* Resource);
	struct FString GetPlatform();
	struct FString GetPsyConfigUrl(const struct FString& Template);
	void HandleGetURL(const struct FString& URL);
	void Sync();
	void HandleCacheExpired(class UCacheTimer_X* Timer);
	void UpdateLinkConnection(bool bHasConnection);
	void UpdateCacheTimerEnabled();
	bool ShouldEnableCacheTimer();
	void HandleWebConfigChanged();
	void AddQueryParam(const struct FString& Param);
	void Init();
	void EventLoaded(class UPsyNetStaticData_X* Data);
};

// Class ProjectX.PsyNetUrl_X
// 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
class UPsyNetUrl_X : public UObject
{
public:
	unsigned long                                      bUseSubsystemURL : 1;                                      // 0x0060(0x0001) BIT_FIELD (Edit, Config)
	unsigned char                                      UnknownData_W9OE[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     URL;                                                       // 0x0068(0x0010) (Edit, Config, NeedCtorLink)
	struct FString                                     URLv2;                                                     // 0x0078(0x0010) (Edit, Config, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetUrl_X");
		return ptr;
	}



	struct FString GetURL(TEnumAsByte<ProjectX_EDatabaseEnvironment> Environment);
};

// Class ProjectX.RadialBlurComponent_X
// 0x0008 (FullSize[0x0118] - InheritedSize[0x0110])
class URadialBlurComponent_X : public URadialBlurComponent
{
public:
	float                                              FadeTime;                                                  // 0x0110(0x0004) (Edit)
	float                                              FadeFalloff;                                               // 0x0114(0x0004) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RadialBlurComponent_X");
		return ptr;
	}



};

// Class ProjectX.RandomStream_X
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class URandomStream_X : public UObject
{
public:
	struct FRandomStream_Mirror                        Stream;                                                    // 0x0060(0x0004) (Native)
	int                                                CurrentSeed;                                               // 0x0064(0x0004) (Transient, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RandomStream_X");
		return ptr;
	}



	void SetCurrentSeed(int NewSeed);
	float GetNextValue();
};

// Class ProjectX.RPC_RecordMetrics_X
// 0x0038 (FullSize[0x0120] - InheritedSize[0x00E8])
class URPC_RecordMetrics_X : public URPC_X
{
public:
	struct FGuid                                       AppSessionID;                                              // 0x00E8(0x0010)
	struct FGuid                                       LevelSessionID;                                            // 0x00F8(0x0010)
	float                                              CurrentTimeSeconds;                                        // 0x0108(0x0004)
	int                                                FirstEventIndex;                                           // 0x010C(0x0004)
	TArray<struct FMetricsEvent>                       Events;                                                    // 0x0110(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_RecordMetrics_X");
		return ptr;
	}



};

// Class ProjectX.RPCQueue_X
// 0x0100 (FullSize[0x0170] - InheritedSize[0x0070])
class URPCQueue_X : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0070(0x0008) (Const, Native, NoExport)
	float                                              AuthTimeoutSeconds;                                        // 0x0078(0x0004) (Edit)
	unsigned char                                      UnknownData_PQHE[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class URPCConfig_X*                                RPCConfig;                                                 // 0x0080(0x0008) (Edit)
	class UPsyNetRetryConfig_X*                        RetryConfig;                                               // 0x0088(0x0008) (Edit)
	class UPsyNetUrl_X*                                PsyNetUrl;                                                 // 0x0090(0x0008) (Edit)
	TArray<struct FPendingRPC>                         PendingRPCs;                                               // 0x0098(0x0010) (Const, NeedCtorLink)
	TArray<class URPCBatch_X*>                         PendingBatches;                                            // 0x00A8(0x0010) (NeedCtorLink)
	struct FMap_Mirror                                 ServiceFailureDelayTimes;                                  // 0x00B8(0x0050) (Const, Native)
	unsigned long                                      bAuthorized : 1;                                           // 0x0108(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_0JDS[0x4];                                     // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             __EventRPCSuccess__Delegate;                               // 0x0110(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_VMDQ[0xC];                                     // 0x010C(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventRPCError__Delegate;                                 // 0x0128(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_OP6A[0xC];                                     // 0x0128(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventBatchError__Delegate;                               // 0x0140(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_SJ1R[0xC];                                     // 0x0140(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __SendRequestDelegate__Delegate;                           // 0x0158(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_N9CR[0xC];                                     // 0x0158(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPCQueue_X");
		return ptr;
	}



	void OnError(class URPC_X* RPC, class UError* Error);
	class UPsyNetMetrics_X* GetPsyNetMetrics();
	void RecordBatchMetrics(class URPCBatch_X* Batch);
	void HandleBatchComplete(class URPCBatch_X* Batch, class UPsyNetMessage_X* Response, class UError* Error);
	void CreateBatchSingleRPC(struct FPendingRPC* RPC, class UPsyNetMessage_X* Message);
	void CreateBatch(TArray<struct FPendingRPC>* BatchRPCs, class UPsyNetMessage_X* Message);
	void SignatureMismatch(int ServiceID);
	void FailAllPending(class UError* Error);
	void FailPending(class URPC_X* RPC, class UError* Error);
	void TickReceive();
	void TickSend();
	void QueueRPC(class URPC_X* RPC);
	class UTAsyncResult__PsyNetMessage_X* SendRequestDelegate(class UPsyNetMessage_X* Message);
	void EventBatchError(class URPCQueue_X* RPCQueue, class UError* Error);
	void EventRPCError(class URPCQueue_X* RPCQueue, class URPC_X* RPC, class UError* Error);
	void EventRPCSuccess(class URPCQueue_X* RPCQueue, class URPC_X* RPC);
};

// Class ProjectX.RPCBatch_X
// 0x006C (FullSize[0x00CC] - InheritedSize[0x0060])
class URPCBatch_X : public UObject
{
public:
	float                                              SendTime;                                                  // 0x0060(0x0004)
	unsigned char                                      UnknownData_02GR[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPendingRPC>                         Requests;                                                  // 0x0068(0x0010) (NeedCtorLink)
	TArray<struct FRPCResponse>                        Responses;                                                 // 0x0078(0x0010) (NeedCtorLink)
	struct FRPCError                                   Error;                                                     // 0x0088(0x0020) (NeedCtorLink)
	class UObject*                                     Result;                                                    // 0x00A8(0x0008)
	class UPsyNetMessage_X*                            RequestMessage;                                            // 0x00B0(0x0008)
	class UPsyNetMessage_X*                            ResponseMessage;                                           // 0x00B8(0x0008)
	class UError*                                      ResponseError;                                             // 0x00C0(0x0008)
	unsigned long                                      bUseRpcV2 : 1;                                             // 0x00C8(0x0001) BIT_FIELD


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPCBatch_X");
		return ptr;
	}



};

// Class ProjectX.RuntimeParameterBase_X
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class URuntimeParameterBase_X : public UObject
{
public:
	struct FName                                       ParameterName;                                             // 0x0060(0x0008) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RuntimeParameterBase_X");
		return ptr;
	}



};

// Class ProjectX.RuntimeParameter_Speed_X
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class URuntimeParameter_Speed_X : public URuntimeParameterBase_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RuntimeParameter_Speed_X");
		return ptr;
	}



};

// Class ProjectX.RuntimeParameters_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class URuntimeParameters_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RuntimeParameters_X");
		return ptr;
	}



};

// Class ProjectX.SeqAct_NonNativeUpdate_X
// 0x0000 (FullSize[0x0160] - InheritedSize[0x0160])
class USeqAct_NonNativeUpdate_X : public USequenceAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SeqAct_NonNativeUpdate_X");
		return ptr;
	}



	bool Update(float dt);
};

// Class ProjectX.SequenceCondition_X
// 0x0000 (FullSize[0x0140] - InheritedSize[0x0140])
class USequenceCondition_X : public USequenceCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SequenceCondition_X");
		return ptr;
	}



	void Activated();
};

// Class ProjectX.Serializer_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class USerializer_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Serializer_X");
		return ptr;
	}



	void DeserializeObject(class UObject* Target, TArray<unsigned char>* InData);
	void SerializeObject(class UObject* Target, TArray<unsigned char>* OutData);
};

// Class ProjectX.JSONSerializer_X
// 0x0004 (FullSize[0x0064] - InheritedSize[0x0060])
class UJSONSerializer_X : public USerializer_X
{
public:
	unsigned long                                      bDebug : 1;                                                // 0x0060(0x0001) BIT_FIELD (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.JSONSerializer_X");
		return ptr;
	}



	bool Validate(const struct FString& Stream);
	struct FString func();
	void DecodeObject(class UObject* Target, struct FString* Stream);
	void EncodeObject(class UObject* Target, struct FString* Stream);
	void DeserializeObject(class UObject* Target, TArray<unsigned char>* InData);
	void SerializeObject(class UObject* Target, TArray<unsigned char>* OutData);
};

// Class ProjectX.ObjectSerializer_X
// 0x0004 (FullSize[0x0064] - InheritedSize[0x0060])
class UObjectSerializer_X : public USerializer_X
{
public:
	unsigned long                                      bPersistent : 1;                                           // 0x0060(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bDebug : 1;                                                // 0x0060(0x0001) BIT_FIELD (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ObjectSerializer_X");
		return ptr;
	}



	void DeserializeObject(class UObject* Target, TArray<unsigned char>* InData);
	void SerializeObject(class UObject* Target, TArray<unsigned char>* OutData);
};

// Class ProjectX.OnlineGame_X
// 0x0118 (FullSize[0x0290] - InheritedSize[0x0178])
class UOnlineGame_X : public UOnlineGame_Base_X
{
public:
	class UOnlineGameAccount_X*                        Account;                                                   // 0x0178(0x0008) (Edit)
	class UOnlineGameMatchmaking_X*                    Matchmaking;                                               // 0x0180(0x0008) (Edit)
	class UOnlineGamePrivateMatch_X*                   PrivateMatch;                                              // 0x0188(0x0008) (Edit)
	class UOnlineGameServerBrowser_X*                  ServerBrowser;                                             // 0x0190(0x0008) (Edit)
	class UOnlineGameLanBrowser_X*                     LanBrowser;                                                // 0x0198(0x0008) (Edit)
	class UOnlineGameLeaderboards_X*                   Leaderboards;                                              // 0x01A0(0x0008) (Edit)
	class UOnlineGamePopulation_X*                     Population;                                                // 0x01A8(0x0008) (Transient, PrivateWrite)
	class UOnlineGameVoice_X*                          Voice;                                                     // 0x01B0(0x0008) (Transient, PrivateWrite)
	class UOnlineGameParty_X*                          Party;                                                     // 0x01B8(0x0008) (Edit)
	class UOnlineGameInvite_X*                         GameInvite;                                                // 0x01C0(0x0008) (Edit)
	class UOnlineGameJoinGame_X*                       JoinGame;                                                  // 0x01C8(0x0008) (Edit)
	class UOnlineGameRegions_X*                        Regions;                                                   // 0x01D0(0x0008) (Edit)
	class UOnlineGamePrivileges_X*                     Privileges;                                                // 0x01D8(0x0008)
	class UOnlineGameWordFilterProcessor_X*            WordFilterProcessor;                                       // 0x01E0(0x0008) (Transient, PrivateWrite)
	class UOnlineGameVersion_X*                        GameVersion;                                               // 0x01E8(0x0008) (Edit)
	class UOnlinePlayer_X*                             PlayerArchetype;                                           // 0x01F0(0x0008) (Edit)
	TArray<class UOnlinePlayer_X*>                     OnlinePlayers;                                             // 0x01F8(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	class UOnlineLegalText_X*                          Eula;                                                      // 0x0208(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class UOnlineLegalText_X*                          PrivacyPolicy;                                             // 0x0210(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class UOnlineLegalText_X*                          ToS;                                                       // 0x0218(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class UOnlineLegalText_X*                          SCT;                                                       // 0x0220(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class UOnlineLegalText_X*                          PaymentServices;                                           // 0x0228(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	unsigned long                                      bRequestPublicIP : 1;                                      // 0x0230(0x0001) BIT_FIELD (Config)
	unsigned char                                      UnknownData_BGXL[0x4];                                     // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PublicIP;                                                  // 0x0238(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FScriptDelegate                             __EventConnectionError__Delegate;                          // 0x0248(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_0RGF[0xC];                                     // 0x0248(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlayerPsyNetLogin__Delegate;                        // 0x0260(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_P249[0xC];                                     // 0x0260(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlayerPsyNetLogout__Delegate;                       // 0x0278(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_2U9T[0xC];                                     // 0x0278(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGame_X");
		return ptr;
	}



	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void HandlePublicIPComplete(class URPC_GetPublicIP_X* RPC);
	void HandlePsyNetLogin(class UPsyNetConnection_X* Connection);
	void NotifyPlayerPsyNetLogout(const struct FScriptDelegate& Callback);
	void NotifyPlayerPsyNetLogin(const struct FScriptDelegate& Callback);
	bool IsSignedIn(int ControllerId);
	bool CheckUpToDate(class UError** Error);
	bool CheckNotTooYoung(class UError** Error);
	class UError* GetPsyNetLoginError(class UOnlinePlayer_X* OnlinePlayer);
	void HandleLoginCompleted(class UOnlinePlayerAuthentication_X* Auth, class UAsyncTask* Task);
	class UAsyncTask* CheckPsyNetConnection();
	bool RequiresSystemNetworkErrorHandling();
	bool ValidateUserOnlineAccount();
	bool CheckInternetConnection(class UError** Error);
	bool IsOnlinePlayerID(const struct FUniqueNetId& PlayerID);
	class UOnlinePlayer_X* GetOnlinePlayerByID(const struct FUniqueNetId& PlayerID);
	void OnNewSettingsChosen(int PlaylistId);
	struct FUniqueNetId GetPrimaryPlayerID();
	class UOnlinePlayer_X* GetPrimaryPlayer();
	void RemoveOnlinePlayer(class ULocalPlayer_X* LocalPlayer);
	void AddOnlinePlayer(class UOnlinePlayer_X* OnlinePlayer);
	class UOnlinePlayer_X* CreateOnlinePlayer(class ULocalPlayer_X* LocalPlayer);
	void SetPlayedWith(const struct FUniqueNetId& PlayerID);
	void GetPlayerAvatars(TArray<struct FUniqueNetId> PlayerIDs, const struct FScriptDelegate& ReadOnlineAvatarCompleteDelegate, TEnumAsByte<Engine_EAvatarSize> Size, struct FUniqueNetId* StructInitializer_F301565F4802051B6104649DCA24614D);
	void ClearPendingAvatarDownloads();
	void SetVoiceVolume(float NewValue);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	void OnMainMenuOpened();
	void HandlePlayerLogin(class UOnlinePlayer_X* OnlinePlayer, class UError* Error);
	void HandlePsyNetLoginChanged(class UOnlinePlayerAuthentication_X* Auth);
	void SyncLegal(const struct FString& InAppendedPath);
	bool IsLoggedInToPsyNet(class UOnlinePlayer_X* OnlinePlayer);
	void OnInit();
	void EventPlayerPsyNetLogout(class UOnlinePlayer_X* Player);
	void EventPlayerPsyNetLogin(class UOnlinePlayer_X* Player);
	void EventConnectionError(class UError* Error, class UOnlinePlayer_X* Player);
};

// Class ProjectX.PresetMutators_X
// 0x0038 (FullSize[0x0098] - InheritedSize[0x0060])
class UPresetMutators_X : public UObject
{
public:
	TArray<struct FCategorySettingPair>                PresetTags;                                                // 0x0060(0x0010) (NeedCtorLink)
	TArray<struct FName>                               RequiresMaps;                                              // 0x0070(0x0010) (NeedCtorLink)
	unsigned long                                      bLockSettings : 1;                                         // 0x0080(0x0001) BIT_FIELD
	unsigned long                                      bHideSettings : 1;                                         // 0x0080(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_L4O2[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OverrideName;                                              // 0x0088(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PresetMutators_X");
		return ptr;
	}



};

// Class ProjectX.OnlineGameDedicatedServer_X
// 0x0230 (FullSize[0x03B0] - InheritedSize[0x0180])
class UOnlineGameDedicatedServer_X : public UOnlineGameServer_X
{
public:
	unsigned char                                      GameServerID[0x8];                                         // 0x0180(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.OnlineGameDedicatedServer_X.GameServerID
	struct FString                                     GameServerHost;                                            // 0x0188(0x0010) (Transient, NeedCtorLink, ProtectedWrite)
	int                                                EnvironmentZone;                                           // 0x0198(0x0004) (Transient, ProtectedWrite)
	unsigned char                                      UnknownData_PI5S[0x4];                                     // 0x019C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UOnlineGameStats_X*                          GameStats;                                                 // 0x01A0(0x0008) (Transient)
	class UOnlineGameDedicatedServerRegistration_X*    Registration;                                              // 0x01A8(0x0008) (Edit)
	class UOnlineGameReservations_X*                   Reservations;                                              // 0x01B0(0x0008) (Edit)
	class UClanforgeReservation_X*                     Clanforge;                                                 // 0x01B8(0x0008) (Transient, PrivateWrite)
	struct FString                                     Region;                                                    // 0x01C0(0x0010) (Transient, NeedCtorLink, ProtectedWrite)
	int                                                CurrentPlaylistId;                                         // 0x01D0(0x0004) (ProtectedWrite)
	int                                                MutatorIndex;                                              // 0x01D4(0x0004) (ProtectedWrite)
	float                                              AverageMMR;                                                // 0x01D8(0x0004) (Transient, ProtectedWrite)
	float                                              AverageConservativeMMR;                                    // 0x01DC(0x0004) (Transient, ProtectedWrite)
	int                                                MachineId;                                                 // 0x01E0(0x0004) (Transient, PrivateWrite)
	unsigned char                                      UnknownData_5Q0U[0x4];                                     // 0x01E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct U_Types_X_FCustomMatchSettings              CustomMatch;                                               // 0x01E8(0x0090) (Transient, NeedCtorLink, PrivateWrite)
	struct FUniqueNetId                                CustomMatchOwner;                                          // 0x0278(0x0048) (Transient, NeedCtorLink, PrivateWrite)
	unsigned char                                      CustomMatchClubID[0x8];                                    // 0x02C0(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.OnlineGameDedicatedServer_X.CustomMatchClubID
	unsigned long                                      bQueuedShutdown : 1;                                       // 0x02C8(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned long                                      bFindingReplacementServer : 1;                             // 0x02C8(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned long                                      bHasValidMigrationServer : 1;                              // 0x02C8(0x0001) BIT_FIELD (ProtectedWrite)
	unsigned long                                      bDisableMatchmakingBan : 1;                                // 0x02C8(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned long                                      bBotTest : 1;                                              // 0x02C8(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned long                                      bUseNetworkNextDriver : 1;                                 // 0x02C8(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_8PWD[0x4];                                     // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ReplacementServerID[0x8];                                  // 0x02CC(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.OnlineGameDedicatedServer_X.ReplacementServerID
	class UServerPlayerTracker_X*                      PlayerTracker;                                             // 0x02D8(0x0008) (ExportObject, Component, EditInline)
	class UClass*                                      MatchRecorderClass;                                        // 0x02E0(0x0008) (Edit)
	class UMatchRecorder_X*                            MatchRecorder;                                             // 0x02E8(0x0008)
	class UMatchLog_X*                                 MatchLog;                                                  // 0x02F0(0x0008)
	class UServerConfig_X*                             Config;                                                    // 0x02F8(0x0008) (Edit)
	class UPsyNetConfig_X*                             PsyNetConfig;                                              // 0x0300(0x0008)
	struct FScriptDelegate                             __EventFoundNewDedicatedServerForPlayers__Delegate;        // 0x0308(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_MF5G[0xC];                                     // 0x0308(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventAverageMMRChanged__Delegate;                        // 0x0320(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_PTRZ[0xC];                                     // 0x0320(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlaylistSet__Delegate;                              // 0x0338(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_I4E4[0xC];                                     // 0x0338(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPrivateMatchSettingsChanged__Delegate;              // 0x0350(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_4WBK[0xC];                                     // 0x0350(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventInactive__Delegate;                                 // 0x0368(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_2ES9[0xC];                                     // 0x0368(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventActive__Delegate;                                   // 0x0380(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_W2TC[0xC];                                     // 0x0380(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventMatchGUIDChanged__Delegate;                         // 0x0398(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_BGHW[0xC];                                     // 0x0398(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameDedicatedServer_X");
		return ptr;
	}



	void HandlePsyNetDataLoaded(class UPsyNetStaticData_X* D);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	class URPC_RecordMatch_X* SendRecordMatchRPC();
	void ReportMatch();
	void HandleTrackerPlayerRemoved(class UServerPlayerTracker_X* Tracker, const struct FUniqueNetId& PlayerID);
	void CreateMatchRecorder();
	void HandleTrackerPlayerAdded(class UServerPlayerTracker_X* Tracker, const struct FUniqueNetId& PlayerID);
	struct FString MatchGUID();
	struct FName GetCurrentMapName();
	void ClearMatchmakingBan(const struct FUniqueNetId& PlayerID);
	void IssueMatchmakingBan(const struct FUniqueNetId& PlayerID, const struct FString& Reason);
	unsigned char GetTeamNum(const struct FUniqueNetId& PlayerID);
	bool KickPlayersOnGameEventDestroyed();
	bool IsBotMatch();
	bool CanIssueMatchmakingBan();
	bool IsRankedMatch();
	class UGameSettingPlaylist_X* GetPlaylist();
	void OnExit();
	void OnMigrationStarted();
	bool DidRematchVotePass();
	void HandleNewServerIPRPC(class URPC_CheckReplacementDedicatedServer_X* RPC, struct FServerConnectionInfo* StructInitializer_194E422748A8629F4743C49C5B20DCD0, class UConnectionInfoMessage_X** ObjectInitializer_E77B0D284B4E53A93089EBA7B8F30D4C);
	void CheckNewServerIP();
	void CheckNewServerTimeout();
	void CheckStartShutdown(int GameTimeRemaining);
	bool AllowServerMigration();
	void UpdateGameTime(int TimeSeconds);
	void FindNewDedicatedServerForPlayers(const struct FScriptDelegate& InDelegate);
	bool IsInactive();
	int GetTeamScore(int TeamIdx);
	bool IsInPostGameLobby();
	void UpdateOnlineGame();
	bool AllowSplitscreenJoinRankedMatch();
	bool AllowSplitscreenJoin(const struct FUniqueNetId& PrimaryPlayerId, const struct FUniqueNetId& PlayerID, const struct FString& PlayerName, struct FString* Error);
	void PlayerLoggedOut(class APlayerReplicationInfo* PRI);
	void PlayerLoggedIn(class APlayerReplicationInfo* PRI);
	void AllowPlayerLogin(const struct FString& Options, const struct FUniqueNetId& PlayerID, struct FString* ErrorMessage);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	void TravelToMap(const struct FString& ServerCommand);
	void GotoPrivateMatchMap(const struct FName& MapName, int GameMode, const struct FString& GameTags);
	void GotoNextPrivateMatchMap();
	void OnPrivateEventDestroyed();
	struct FString GetStartServerCommand();
	struct FName GetNextRandomMapName(int GameMode, bool bStandardOnly);
	struct FName GetNextMapName(int GameMode, bool bStandardOnly);
	struct U_Types_X_FCustomMatchSettings GetCustomMatchSettings();
	struct FUniqueNetId GetCustomMatchOwner();
	void UpdateCustomMatchOwner(const struct FUniqueNetId& NewOwner);
	void SetCustomSettings(const struct U_Types_X_FCustomMatchSettings& Settings);
	void SetupPrivateMatch(const struct U_Types_X_FCustomMatchSettings& Settings, const struct FUniqueNetId& Creator);
	void GoToNextMap();
	struct FName GetNextMutatorMapName();
	void GoToMap(const struct FString& MapName);
	struct FString GetPlaylistTags();
	void UpdateAverageMMR();
	void SetCustomMatchClubID();
	void ClearSettings(struct FUniqueNetId* StructInitializer_3D627F3C433AD3E04BEBA3A0359BF7D0, struct U_Types_X_FCustomMatchSettings* StructInitializer_54A42DA047D2D5C40D253F86AC4B42C5);
	void SetPlaylist(int PlaylistId);
	void HandleReservationsUpdated();
	void InitClanforge();
	void OnInit();
	void EventMatchGUIDChanged(class UOnlineGameDedicatedServer_X* Server);
	void EventActive(class UOnlineGameDedicatedServer_X* Server);
	void EventInactive(class UOnlineGameDedicatedServer_X* Server);
	void EventPrivateMatchSettingsChanged(class UOnlineGameDedicatedServer_X* Server, const struct U_Types_X_FCustomMatchSettings& NewSettings);
	void EventPlaylistSet(class UOnlineGameDedicatedServer_X* Server);
	void EventAverageMMRChanged(class UOnlineGameDedicatedServer_X* Server);
	void EventFoundNewDedicatedServerForPlayers(class UConnectionInfoMessage_X* Message);
};

// Class ProjectX.OnlineGameDLC_X
// 0x0040 (FullSize[0x00D8] - InheritedSize[0x0098])
class UOnlineGameDLC_X : public UOnline_X
{
public:
	int                                                SyncInterval;                                              // 0x0098(0x0004) (Edit)
	float                                              PlayerOwnershipSyncInterval;                               // 0x009C(0x0004)
	TArray<struct FPlayerDLCInfo>                      PlayerDLCInfos;                                            // 0x00A0(0x0010) (NeedCtorLink)
	TArray<struct FSteamWebRequestData>                SteamWebRequests;                                          // 0x00B0(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FScriptDelegate                             __EventValidationReady__Delegate;                          // 0x00C0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_OW24[0xC];                                     // 0x00C0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameDLC_X");
		return ptr;
	}



	bool DoesPlayerOwnDLC(struct FUniqueNetId* PlayerID, struct FName* DLCName);
	void HandleGetPublisherAppOwnership(class UWebRequest_X* Request);
	bool PlatformRequiresDLCVerification(TEnumAsByte<Core_EOnlinePlatform> Platform);
	void OnMatchFinished();
	void SyncPlayerDLC(const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& Callback);
	void UpdatePlayerDLCInfo(int PlayerInfoIndex);
	int CreatePlayerDLCInfo(struct FUniqueNetId* PlayerID);
	bool IsPlayerReadyForValidation(struct FUniqueNetId* PlayerID);
	void EventValidationReady();
};

// Class ProjectX.OnlineGameLeaderboards_X
// 0x0090 (FullSize[0x0128] - InheritedSize[0x0098])
class UOnlineGameLeaderboards_X : public UOnline_X
{
public:
	int                                                NumResults;                                                // 0x0098(0x0004) (Edit)
	unsigned char                                      UnknownData_XIUJ[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCachedLeaderboardData>              CachedLeaderboards;                                        // 0x00A0(0x0010) (Transient, NeedCtorLink)
	int                                                NumFriendsLeaderboardRequests;                             // 0x00B0(0x0004) (Transient)
	struct FName                                       CurrentLeaderboardID;                                      // 0x00B4(0x0008) (Transient)
	int                                                CurrentFriendIndex;                                        // 0x00BC(0x0004) (Transient)
	unsigned long                                      bGlobalLeaderboards : 1;                                   // 0x00C0(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownData_9IU6[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class URPC_X*                                      GetLoaderboardPlayerValueRPC;                              // 0x00C8(0x0008) (Transient)
	TArray<class URPC_X*>                              LeaderboardRequests;                                       // 0x00D0(0x0010) (Transient, NeedCtorLink)
	struct FScriptDelegate                             __OnGetLeaderboardPlayerValue__Delegate;                   // 0x00E0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_XIZ8[0xC];                                     // 0x00E0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventNewLeaderboard__Delegate;                           // 0x00F8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_KJ6S[0xC];                                     // 0x00F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventGetLeaderboardFailed__Delegate;                     // 0x0110(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_LIUJ[0xC];                                     // 0x0110(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameLeaderboards_X");
		return ptr;
	}



	void __OnlineGameLeaderboards_X__ClearPreviousTasks_39D6B80D455302634B8191B16E8ED3A6(class URPC_X* RPC);
	void ClearPreviousTasks();
	bool IsSkillLeaderboard(const struct FString& NewLeaderboardID, int* Playlist);
	TArray<struct FLeaderboardData> SortLeaderboardDataMMR(TArray<struct FLeaderboardData> Leaderboard);
	TArray<struct FLeaderboardData> SortLeaderboardData(TArray<struct FLeaderboardData> Leaderboard);
	void HandleGetLeaderboardFriendsRPC(class URPC_GetLeaderboardRankForUsersBase_X* RPC);
	void DispatchLeaderboardFriendsRequest();
	void GetLeaderboardsForAllFriends(const struct FName& LeaderboardId);
	void GetLeaderboardFriends(class UOnlinePlayer_X* OnlinePlayer, const struct FName& NewLeaderboardID, const struct FScriptDelegate& NewDelegate, const struct FScriptDelegate& FailedDelegate);
	void RequestClearPendingAvatarDownloads();
	void HandleGetLeaderboardRPC(class URPC_GetLeaderboardBase_X* RPC);
	void GetLeaderboard(const struct FName& NewLeaderboardID, bool bGlobal, const struct FScriptDelegate& NewDelegate, const struct FScriptDelegate& FailedDelegate);
	bool GetCachedLeaderboardData(const struct FName& LeaderboardId, TArray<struct FLeaderboardData>* LeaderboardDataList);
	int CalcDivision(float TopValue, float Value);
	void GetRankForPrimaryPlayer(const struct FName& LeaderboardId, int Value, int* Rank, int* Division);
	void HandleGetLeaderboardPlayerValueRPC(class URPC_GetLeaderboardValueForUserBase_X* RPC);
	void GetLeaderboardPlayerValue(const struct FName& NewLeaderboardID, const struct FScriptDelegate& NewDelegate);
	void EventGetLeaderboardFailed(class UError* Error);
	void EventNewLeaderboard(const struct FName& NewLeaderboardID, TArray<struct FLeaderboardData>* NewLeaderboardData);
	void OnGetLeaderboardPlayerValue(class UOnlineGameLeaderboards_X* LeaderboardsRef, struct FLeaderboardData* PlayerLeaderboardData, const struct FName& LeaderboardId, class UError* Error);
};

// Class ProjectX.OnlineGameReservations_X
// 0x0118 (FullSize[0x01B0] - InheritedSize[0x0098])
class UOnlineGameReservations_X : public UOnline_X
{
public:
	float                                              ExtraMapLoadTime;                                          // 0x0098(0x0004) (Edit)
	float                                              WaitForReservationsTimeout;                                // 0x009C(0x0004) (Edit)
	float                                              InitialReservationTimeoutSeconds;                          // 0x00A0(0x0004) (Edit)
	float                                              InitialMigrationTimeoutSeconds;                            // 0x00A4(0x0004) (Edit)
	unsigned long                                      bAllowPrivateMatchCrossPlayDisable : 1;                    // 0x00A8(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bSkipReservationCheck : 1;                                 // 0x00A8(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned long                                      bSinglePlayerMatchmaking : 1;                              // 0x00A8(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned long                                      bServerTraveling : 1;                                      // 0x00A8(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned long                                      bScrambleTeams : 1;                                        // 0x00A8(0x0001) BIT_FIELD (Transient)
	unsigned long                                      bMatchStarted : 1;                                         // 0x00A8(0x0001) BIT_FIELD (Transient)
	unsigned long                                      bLockTeams : 1;                                            // 0x00A8(0x0001) BIT_FIELD (Transient)
	unsigned long                                      bIsBotMatch : 1;                                           // 0x00A8(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned long                                      bMigrationInProgress : 1;                                  // 0x00A8(0x0001) BIT_FIELD (Transient, ProtectedWrite)
	unsigned char                                      UnknownData_L2E8[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UReservationBeacon_X*                        Beacon;                                                    // 0x00B0(0x0008) (ExportObject, Component, EditInline)
	class UUdpPingBeaconServer_X*                      PingBeacon;                                                // 0x00B8(0x0008) (ExportObject, Component, EditInline)
	TArray<struct FReservationData>                    Players;                                                   // 0x00C0(0x0010) (Transient, NeedCtorLink)
	TArray<struct FTeamPairHistory>                    TeamPairHistories;                                         // 0x00D0(0x0010) (Transient, NeedCtorLink)
	TArray<struct FString>                             BotNames;                                                  // 0x00E0(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	class UCrossplayConfig_X*                          Crossplay;                                                 // 0x00F0(0x0008) (Edit)
	class UMapPrefsConfig_X*                           MapPrefsConfig;                                            // 0x00F8(0x0008) (Edit)
	class UBeaconConfig_X*                             BeaconConfig;                                              // 0x0100(0x0008) (Edit)
	TArray<struct FPendingReservation>                 PendingReservations;                                       // 0x0108(0x0010) (NeedCtorLink)
	class UTAsyncResult__ClubDetails_X*                GetClubTask;                                               // 0x0118(0x0008)
	struct FString                                     RankedMatchReservationID;                                  // 0x0120(0x0010) (NeedCtorLink)
	TArray<struct FUniqueNetId>                        RankedMatchPushedPlayerIDs;                                // 0x0130(0x0010) (Transient, NeedCtorLink)
	class UOnlineClubProvider_X*                       Clubs;                                                     // 0x0140(0x0008)
	struct FString                                     JoinName;                                                  // 0x0148(0x0010) (NeedCtorLink, PrivateWrite)
	struct FString                                     JoinPassword;                                              // 0x0158(0x0010) (NeedCtorLink, PrivateWrite)
	struct FScriptDelegate                             __EventReservationsUpdated__Delegate;                      // 0x0168(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_L3H1[0xC];                                     // 0x0168(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventMigrationJoinOccurred__Delegate;                    // 0x0180(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_P5KC[0xC];                                     // 0x0180(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __bMatchStarted__ChangeNotify;                             // 0x0198(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_XCCF[0xC];                                     // 0x0198(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameReservations_X");
		return ptr;
	}



	void __OnlineGameReservations_X__OnInit_0875D7B842F71F7F7D90CFB123FA8A61(class UObject* Message);
	void __OnlineGameReservations_X__OnInit_9F2227DA46125C530F5A399CF4FD0BE7(class UObject* Message);
	void __OnlineGameReservations_X__OnInit_4628BD2145C20F51C5B7C99E71B974C3(class UObject* Message);
	bool __OnlineGameReservations_X__SetPlayersWithMigrationData_BDBB1B50423B52EF830DFC9507B038EB(const struct FMigrationReservationData& P);
	struct FUniqueNetId __OnlineGameReservations_X__HandlePsyNetBeaconReservation_9FA9EC234F9515FFC9D714B4F8F74C3B(const struct FPsyNetBeaconPlayerReservation& P);
	void __OnlineGameReservations_X__HandlePublicReservation_8B71B72F4D1790BD55498384156A3E47(const struct FReservationData& P);
	void __OnlineGameReservations_X__HandlePublicReservation_90F40EDD43CCB4E05F3B0892987DF5AB(const struct FReservationData& P);
	bool __OnlineGameReservations_X__HasTimeoutPlayers_DA8B590B4A7B47812FC9F18747F9DEB7(const struct FReservationData& P);
	bool __OnlineGameReservations_X__HasMultipleReservedTeams_B63B1C31404D3A52ED14A8BD696F6DF8(int TeamID);
	int __OnlineGameReservations_X__HasMultipleReservedTeams_6CD27030493C8B553861609C9E97C859(const struct FReservationData& P);
	bool __OnlineGameReservations_X__AllPlayersReserved_A2A4D6664E69A2C15BDED9B4250E4740(const struct FReservationData& P);
	bool __OnlineGameReservations_X__AllPlayersInGame_881DCD874F3387DBA1A62C96BA085BFC(const struct FReservationData& P);
	void __OnlineGameReservations_X__SetServerTraveling_8E17852240C8609DDC8CEDB7AB1963D7(const struct FPendingReservation& P);
	struct FUniqueNetId __OnlineGameReservations_X__GetPlayerIDs_4C978DF0443F2A0F360F0EBEC7FB81DB(const struct FReservationData& Player);
	void __bMatchStarted__ChangeNotifyFunc();
	TArray<struct FUniqueNetId> GetPlayerIDs(TArray<struct FUniqueNetId>* MapLocal_CE78A83045701B15DB2F6C8B74837CEF);
	float GetMapLoadTimeout(TEnumAsByte<Core_EOnlinePlatform> Platform);
	void GetAccumulatedPrefs(TArray<struct FName>* Likes, TArray<struct FName>* Dislikes);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	class UReservationsMetrics_X* GetMetrics();
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	bool HasSplitscreenPlayers();
	void SetParty(const struct FUniqueNetId& MemberId, const struct FUniqueNetId& PartyID);
	struct FUniqueNetId GetPartyID(const struct FUniqueNetId& PlayerID);
	unsigned char GetTeamNum(const struct FUniqueNetId& PlayerID);
	struct FString GetPlayersPlatformsString();
	struct FString GetPlatformsString(TArray<TEnumAsByte<Core_EOnlinePlatform>>* Platforms);
	TArray<TEnumAsByte<Core_EOnlinePlatform>> GetPlayerPlatforms();
	bool CanPlayTogether(TEnumAsByte<Core_EOnlinePlatform> Platform1, TEnumAsByte<Core_EOnlinePlatform> Platform2);
	bool CanAcceptReservationsForPlatform(class UAddReservationMessagePublic_X* Message);
	bool ShouldCheckPlatformRestrictions(class UAddReservationMessagePublic_X* Message);
	TEnumAsByte<Core_EOnlinePlatform> GetExclusivePlatform();
	bool CanAcceptReservations(class UAddReservationMessagePublic_X* Message);
	void GetPlayerCounts(int* Team0Reserved, int* Team0Joined, int* Team1Reserved, int* Team1Joined);
	void NotifyReservationsUpdated();
	void OnReservationsUpdated();
	void CheckMapLoadTimeout();
	void StartMapLoadTimeout();
	void SyncSkills();
	void HackForceNotServerTravelling();
	void SwapTeams();
	void SetServerTraveling(bool bTraveling);
	void CloseConnection(int Index);
	void RemoveReservationIndex(int Index);
	int AddSpecialReservation(const struct FUniqueNetId& PlayerID, const struct FString& PlayerName, const struct FUniqueNetId& PartyID);
	void HandleTeamChanged(class APRI_X* PRI);
	void RemoveReservation(const struct FUniqueNetId& PlayerID);
	void PlayerLoggedOut(class APlayerReplicationInfo* PRI);
	void PlayerLoggedIn(class APlayerReplicationInfo* PRI);
	void AllowPlayerLogin(const struct FString& Options, const struct FUniqueNetId& PlayerID, struct FString* ErrorMessage);
	bool AllPlayersInGame();
	bool AllPlayersReserved();
	bool HasGameEnded();
	bool HasGameStarted();
	bool CanStartMatch();
	bool HasMultipleReservedTeams(TArray<int>* MapLocal_F522558C45796A715DA4339FD8DE9869, TArray<int>* FilterLocal_23A7CCA7444D360D6556338DCD48F48C, TArray<int>* DistinctLocal_09C3E3A6451652A7C71C15A376938C39);
	bool HasTimeoutPlayers();
	bool HasJoiningPlayers();
	bool CanGoInactive();
	bool IsEmpty();
	bool IsNearlyFull();
	bool IsFull();
	int GetNumReservedPlayers();
	bool IsCustomMatch();
	void HandleReservationDisconnected(class UReservationBeacon_X* _);
	void ClearTeamHistory();
	void ClearReservations();
	void Reset();
	void RecordTeamHistory(TArray<struct FReservationData>* TestPlayers, TArray<struct FTeamPairHistory>* History);
	void ScrambleTeams();
	void UpdateTeams();
	void AssignTeamsByPartySize();
	bool AssignScrambledTeams(int TeamSize, TArray<struct FTeamPairHistory>* History, TArray<struct FReservationData>* TestPlayers);
	bool AssignTeams(int TeamSize, TArray<struct FReservationData>* TestPlayers, bool bKeepTeams);
	void HandleSkillSynced(class UOnlineGameSkill_X* SkillSystem, const struct FUniqueNetId& PlayerID, class UError* Error);
	bool AllowSplitscreenJoin(const struct FUniqueNetId& PrimaryPlayerId, const struct FUniqueNetId& PlayerID, const struct FString& PlayerName, struct FString* Error);
	bool IsCheatingSplitscreenReservation(class UAddReservationMessage_X* Message);
	bool IsCheatingSplitscreen(const struct FUniqueNetId& PrimaryPlayerId, const struct FUniqueNetId& SplitscreenPlayerId);
	struct FReservationData CreateReservationData(const struct FUniqueNetId& PlayerID, const struct FString& PlayerName, const struct FUniqueNetId& PartyID, TEnumAsByte<ProjectX_EReservationStatus> Status);
	void HandlePlayerCancel(class UObject* Message);
	struct FUniqueNetId GetConnectionPlayerID(struct FUniqueNetId* StructInitializer_3740FBD2414D9CF2B9482292B11E1D5B);
	void InitialReservationTimeout();
	void NotAllPlayersJoined();
	void DisconnectExistingPlayers(class UAddReservationMessage_X* ReservationMessage);
	void SetPlayers(TArray<struct FReservationData>* TempPlayers);
	void HandleClubSyncComplete(class UOnlineClubProvider_X* _);
	TArray<struct FReservationData> AddPlayersFromReservationMessage(class UAddReservationMessage_X* ReservationMessage, struct FReservationData* StructInitializer_DF1D6C0848D230907EC22E802F152E33);
	bool IsUnique(TArray<struct FName>* Prefs);
	void ForcePrivateMatch(const struct U_Types_X_FCustomMatchSettings& InSettings, struct FUniqueNetId* StructInitializer_6A1A2E8B41ED3269398C3EA0CF76CA2E);
	void SetClubServer(class UClubDetails_X* Details);
	void StartPrivateMatch(const struct U_Types_X_FCustomMatchSettings& MatchSettings, const struct FUniqueNetId& Creator);
	bool HandlePrivateReservation(class UAddReservationMessagePrivate_X* Message, struct FPendingReservation* StructInitializer_5E5C0AAE442DD2FF8FACB08AD88D6480);
	void ProcessReservationMessage(class UAddReservationMessage_X* Message);
	void StartMatch();
	class UReservationsReadyMessage_X* CreateReadyMessage();
	void SendReadyMessage(const struct FUniqueNetId& PlayerID, class UReservationsReadyMessage_X* Message);
	void NotifyReady(const struct FUniqueNetId& PlayerID);
	void BroadcastReady();
	bool ShouldSyncSkills();
	bool IsSoloPlaylist(int PlaylistId);
	bool ShouldCheckRankedMatchReservationID();
	bool CheckRankedMatchReservation(struct FString* InReservationID, const struct FUniqueNetId& PlayerID);
	bool HandlePublicReservation(class UAddReservationMessagePublic_X* Message, struct FPendingReservation* StructInitializer_8FCC59B440804415E3A3BCB1D44E2B62);
	void HandleBeaconReservationMessage(class UAddReservationMessage_X* Message);
	bool IsCheatingReservationMessage(class UAddReservationMessage_X* Message);
	void RecordReservation(class UAddReservationMessage_X* Message);
	void HandleRegionPingMessage(class URegionPingMessage_X* Message);
	void HandlePingMessage(class UPingMessage_X* Message);
	void HandleMatchStartedChanged();
	class UObject* CreateClientReservationMessage(struct FServerReservationData* Reservation, struct FUniqueNetId* PlayerID, class UClientReservationMessage_X** ObjectInitializer_7BAF663E46368B337152B7BE71769CC8);
	void HandlePsyNetBeaconReservation(const struct FPsyNetBeaconReservation& Reservation, float ConnectionTimeoutSeconds, TArray<struct FUniqueNetId>* MapLocal_9EFD3A1D40F55F5AC6EC15BD27080C42, struct FServerReservationData* StructInitializer_D53EAE3C4BD60D532DD686A42C25F6FD);
	void NotifyMigrationStarted(class UMigrationStartedMessage_X** ObjectInitializer_EFEF1BD04CC5D0850B890AAFC2B36502);
	void SetPlayersWithMigrationData(TArray<struct FMigrationReservationData> MigratedPlayers, TArray<struct FMigrationReservationData>* FilterLocal_762EE14C466FE6307D33E592390639ED);
	TArray<struct FMigrationReservationData> GetMigrationReservationData();
	class UServerToServerMessage_X* GetMatchInfoMessage(class UMatchInfoMessage_X** ObjectInitializer_9D98D23047709123485564BD9B5DE229);
	void NotifyNewReplacementServer();
	void HandleNewServerConnectionInfo(class UConnectionInfoMessage_X* Message);
	void HandleMigrationStartedMessage(class UMigrationStartedMessage_X* Message);
	void SendMigratedServerConnectionInfo(struct FServerConnectionInfo* StructInitializer_1CC8CE764DB642107E8B3690172D3B79, class UConnectionInfoMessage_X** ObjectInitializer_A4A2CFAA4EDB5079C891079DBB9FCADC);
	void SetJoinNameAndPassword(const struct FString& InJoinName, const struct FString& InJoinPassword);
	void HandleServerMigrationMessage(class UMatchInfoMessage_X* Message);
	void HandleReconnectReservation(class UPsyNetService_Reconnect_X* Notification);
	void HandleFriendJoinReservation(class UPsyNetService_FriendJoin_X* Notification);
	void HandleJoinPrivateReservation(class UPsyNetService_JoinPrivate_X* Notification);
	void HandleCreatePrivateReservation(class UPsyNetService_CreatePrivate_X* Notification);
	void HandleBackfillReservation(class UPsyNetService_Backfill_X* Notification);
	void HandleNewGameReservation(class UPsyNetService_NewGame_X* Notification);
	void HandlePsyNetReservation(class UPsyNetService_DSReservation_X* Notification);
	void InitUdpBeacon();
	void StartBeacons();
	void OnInit();
	void EventMigrationJoinOccurred();
	void EventReservationsUpdated();
};

// Class ProjectX.OnlineGameStats_X
// 0x0014 (FullSize[0x00AC] - InheritedSize[0x0098])
class UOnlineGameStats_X : public UOnline_X
{
public:
	struct FString                                     MatchGUID;                                                 // 0x0098(0x0010) (NeedCtorLink)
	int                                                PlaylistId;                                                // 0x00A8(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameStats_X");
		return ptr;
	}



	void UploadStats(const struct FString& StatType, TArray<struct FUploadStatDataSet>* DataSet);
	void SetPlaylistID(int InID);
	void SetMatchGUID(const struct FString& InGuid);
};

// Class ProjectX.TickableStateObject_X
// 0x0028 (FullSize[0x008C] - InheritedSize[0x0064])
class UTickableStateObject_X : public UStateObject_X
{
public:
	unsigned char                                      UnknownData_6WQP[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0068(0x0008) (Const, Native, NoExport)
	unsigned long                                      bTickWhenGamePaused : 1;                                   // 0x0070(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAutoTick : 1;                                             // 0x0070(0x0001) BIT_FIELD (Edit, Const)
	unsigned char                                      UnknownData_Z9K0[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTimerData>                          Timers;                                                    // 0x0078(0x0010) (Const, NeedCtorLink)
	float                                              LatentFloat;                                               // 0x0088(0x0004) (Const)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TickableStateObject_X");
		return ptr;
	}



	void Sleep(float Seconds);
	void Tick(float DeltaTime);
	void ProcessState(float DeltaSeconds);
	void UpdateTimers(float DeltaSeconds);
	void NativeTick(float DeltaTime);
	void Destroy();
	void SetTickable(bool bTick);
	bool IsTimerActive(const struct FName& inTimerFunc, class UObject* inObj);
	void PauseTimer(bool bPause, const struct FName& inTimerFunc, class UObject* inObj);
	void ClearAllTimers(class UObject* inObj);
	void ClearTimer(const struct FName& inTimerFunc, class UObject* inObj);
	void SetStateTimer(float InRate, bool inbLoop, const struct FName& inTimerFunc);
	void SetTimer(float InRate, bool inbLoop, const struct FName& inTimerFunc, class UObject* inObj);
};

// Class ProjectX.SystemInfo_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class USystemInfo_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SystemInfo_X");
		return ptr;
	}



	struct FString GetComputerName();
	void GetNetworkInfo(TArray<struct FString>* Types);
	void GetOSInfo(struct FString* Type, struct FString* Bit);
	void GetVideoCardInfo(struct FString* CardName, int* RAM);
	void GetMemoryInfo(float* Physical, float* PageFile, float* Virtual, int* Used, int* Allocated);
	void GetCPUInfo(struct FString* Type, struct FString* Description, struct FString* Cores, struct FString* Threads);
	bool IsSupported();
};

// Class ProjectX.TickActorComponent_X
// 0x0033 (FullSize[0x00D0] - InheritedSize[0x009D])
class UTickActorComponent_X : public UActorComponent
{
public:
	unsigned char                                      UnknownData_ZOKD[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTimerData>                          Timers;                                                    // 0x00A0(0x0010) (Const, NeedCtorLink)
	unsigned long                                      bTick : 1;                                                 // 0x00B0(0x0001) BIT_FIELD (Const)
	unsigned char                                      UnknownData_OHOS[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             __EventTick__Delegate;                                     // 0x00B8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_GTX7[0xC];                                     // 0x00B4(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TickActorComponent_X");
		return ptr;
	}



	void SetTickable(bool bWantsTick);
	void ClearAllTimers(class UObject* inObj);
	void ClearTimer(const struct FName& inTimerFunc, class UObject* inObj);
	void SetTimer(float InRate, bool inbLoop, const struct FName& inTimerFunc, class UObject* inObj);
	void EventTick(float DeltaTime);
};

// Class ProjectX.Timers_X
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UTimers_X : public UObject
{
public:
	class UTickComponent_X*                            TickComponent;                                             // 0x0060(0x0008) (ExportObject, Transient, Component, EditInline)
	struct FScriptDelegate                             __TickDelegate__Delegate;                                  // 0x0068(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_BXOS[0xC];                                     // 0x0068(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Timers_X");
		return ptr;
	}



	void ClearTick(const struct FScriptDelegate& Callback);
	void SetTick(const struct FScriptDelegate& Callback);
	bool IsActive(const struct FScriptDelegate& Callback);
	float GetElapsedTime(const struct FScriptDelegate& Callback);
	float GetRemainingTime(const struct FScriptDelegate& Callback);
	float GetRate(const struct FScriptDelegate& Callback);
	void ClearAll(class UObject* Obj);
	void Clear(const struct FScriptDelegate& Callback);
	void SetStateTimer(const struct FScriptDelegate& Callback, float Rate, bool bLoop);
	void Set(const struct FScriptDelegate& Callback, float Rate, bool bLoop);
	void TickDelegate(float DeltaTime);
};

// Class ProjectX.RenderProfiler_X
// 0x0040 (FullSize[0x02A8] - InheritedSize[0x0268])
class ARenderProfiler_X : public AActor
{
public:
	float                                              TimePerPrimitive;                                          // 0x0268(0x0004) (Edit)
	unsigned char                                      UnknownData_7M1Z[0x4];                                     // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPrimitiveComponentProfile>          PrimitiveProfiles;                                         // 0x0270(0x0010) (Transient, Component, NeedCtorLink)
	int                                                CurrentIndex;                                              // 0x0280(0x0004) (Transient)
	unsigned long                                      bInclusive : 1;                                            // 0x0284(0x0001) BIT_FIELD (Transient)
	float                                              PrimitiveTime;                                             // 0x0288(0x0004) (Transient)
	unsigned char                                      UnknownData_NV5Y[0x4];                                     // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             __EventFinished__Delegate;                                 // 0x0290(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_SZ35[0xC];                                     // 0x028C(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RenderProfiler_X");
		return ptr;
	}



	void SetupPlayers();
	void PostBeginPlay();
	void EventFinished(class ARenderProfiler_X* Profiler);
};

// Class ProjectX.RetryDelay_X
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class URetryDelay_X : public UObject
{
public:
	struct FName                                       Id;                                                        // 0x0060(0x0008)
	TArray<float>                                      DelaySeconds;                                              // 0x0068(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RetryDelay_X");
		return ptr;
	}



};

// Class ProjectX.RetryPolicy_X
// 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
class URetryPolicy_X : public UObject
{
public:
	TArray<struct FName>                               Errors;                                                    // 0x0060(0x0010) (NeedCtorLink)
	struct FName                                       RetryDelay;                                                // 0x0070(0x0008)
	TArray<struct FString>                             Services;                                                  // 0x0078(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RetryPolicy_X");
		return ptr;
	}



	bool AppliesTo(const struct FString& Service, const struct FName& Error);
};

// Class ProjectX.RPC_CrashReport_X
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class URPC_CrashReport_X : public URPC_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_CrashReport_X");
		return ptr;
	}



};

// Class ProjectX.MigrationStartedMessage_X
// 0x00F0 (FullSize[0x0158] - InheritedSize[0x0068])
class UMigrationStartedMessage_X : public UServerToServerMessage_X
{
public:
	unsigned long                                      bRematch : 1;                                              // 0x0068(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_XUFP[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct U_Types_X_FCustomMatchSettings              PrivateMatchSettings;                                      // 0x0070(0x0090) (NeedCtorLink)
	struct FUniqueNetId                                PrivateMatchCreator;                                       // 0x0100(0x0048) (NeedCtorLink)
	TArray<struct FMigrationReservationData>           MigratingPlayers;                                          // 0x0148(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MigrationStartedMessage_X");
		return ptr;
	}



};

// Class ProjectX.MapPrefsConfig_X
// 0x000C (FullSize[0x0084] - InheritedSize[0x0078])
class UMapPrefsConfig_X : public UOnlineConfig_X
{
public:
	float                                              PreferenceWeight;                                          // 0x0078(0x0004) (Edit)
	int                                                MaxLikes;                                                  // 0x007C(0x0004) (Edit)
	int                                                MaxDislikes;                                               // 0x0080(0x0004) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MapPrefsConfig_X");
		return ptr;
	}



};

// Class ProjectX.PRI_X
// 0x0048 (FullSize[0x0458] - InheritedSize[0x0410])
class APRI_X : public APlayerReplicationInfo
{
public:
	struct FScriptDelegate                             __EventPlayerNameChanged__Delegate;                        // 0x0410(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_QCLS[0xC];                                     // 0x0410(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventUniqueIdChanged__Delegate;                          // 0x0428(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_O3L7[0xC];                                     // 0x0428(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDestroyed__Delegate;                                // 0x0440(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_COFF[0xC];                                     // 0x0440(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PRI_X");
		return ptr;
	}



	void Destroyed();
	void OnUniqueIdChanged();
	void SetUniqueId(const struct FUniqueNetId& PlayerUniqueId);
	void UnregisterPlayerFromSession();
	void RegisterPlayerWithSession();
	void AddPlayerHistoryKey(class UOnlineRecentPlayersList* PlayersList);
	void OnOwnerChanged();
	void SetPlayerName(const struct FString& S);
	void ReplicatedEvent(const struct FName& VarName);
	void EventDestroyed(class APRI_X* PRI);
	void EventUniqueIdChanged(class APRI_X* PRI);
	void EventPlayerNameChanged(class APRI_X* PRI);
};

// Class ProjectX.ClubSettings_X
// 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
class UClubSettings_X : public UObject
{
public:
	struct FString                                     ClubName;                                                  // 0x0060(0x0010) (NeedCtorLink)
	struct FString                                     ClubTag;                                                   // 0x0070(0x0010) (NeedCtorLink)
	int                                                PrimaryColor;                                              // 0x0080(0x0004)
	int                                                AccentColor;                                               // 0x0084(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ClubSettings_X");
		return ptr;
	}



	bool IsAccentColorSet();
	bool IsPrimaryColorSet();
	class UClubSettings_X* Create(const struct FString& InName, const struct FString& InTag, int InPrimaryColor, int InSecondaryColor);
};

// Class ProjectX.PsyTagComponent_X
// 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
class UPsyTagComponent_X : public UComponent
{
public:
	struct FPsyTag                                     PsyTag;                                                    // 0x0070(0x0018) (NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyTagComponent_X");
		return ptr;
	}



	void HandleClaimTagSuccess(class UPsyTagCheckResult_X* Result);
	class UTAsyncResult__PsyTagCheckResult_X* ClaimTag(const struct FString& NewTagName);
	void SetPsyTag(const struct FPsyTag& InPsyTag);
};

// Class ProjectX.PsyTagCheckResult_X
// 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
class UPsyTagCheckResult_X : public UObject
{
public:
	struct FPsyTag                                     PsyTag;                                                    // 0x0060(0x0018) (NeedCtorLink)
	unsigned long                                      bValid : 1;                                                // 0x0078(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_JAYC[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ErrorMessage;                                              // 0x0080(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyTagCheckResult_X");
		return ptr;
	}



	void SetPsyTag(const struct FPsyTag& InPsyTag);
};

// Class ProjectX.RPC_CheckPsyTag_X
// 0x0058 (FullSize[0x0140] - InheritedSize[0x00E8])
class URPC_CheckPsyTag_X : public URPC_X
{
public:
	struct FString                                     PsyTagName;                                                // 0x00E8(0x0010) (NeedCtorLink)
	struct FPsyTag                                     PsyTag;                                                    // 0x00F8(0x0018) (Transient, NeedCtorLink)
	unsigned long                                      bIsValid : 1;                                              // 0x0110(0x0001) BIT_FIELD (Transient)
	unsigned long                                      bIsProfane : 1;                                            // 0x0110(0x0001) BIT_FIELD (Transient)
	unsigned long                                      bIsAvailable : 1;                                          // 0x0110(0x0001) BIT_FIELD (Transient)
	unsigned long                                      bIsUpdated : 1;                                            // 0x0110(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownData_ZU38[0x4];                                     // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             InvalidCharacters;                                         // 0x0118(0x0010) (Transient, NeedCtorLink)
	TArray<struct FString>                             SuggestedNames;                                            // 0x0128(0x0010) (Transient, NeedCtorLink)
	class UTAsyncResult__PsyTagCheckResult_X*          CheckTask;                                                 // 0x0138(0x0008) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_CheckPsyTag_X");
		return ptr;
	}



	bool __RPC_CheckPsyTag_X__GetTagCheckError_C5DE289649897CAF37E1A18FDD24DE09(const struct FString& S);
	class UErrorType* OverrideErrorType(class UErrorType* ErrorType);
	class URPC_CheckPsyTag_X* SetPsyTagName(const struct FString& InName);
	struct FString GetTagCheckError();
	class UPsyTagCheckResult_X* CreateTaskResult();
	class UTAsyncResult__PsyTagCheckResult_X* CreatePsyTagTask();
};

// Class ProjectX.RPC_ClaimPsyTag_X
// 0x0000 (FullSize[0x0140] - InheritedSize[0x0140])
class URPC_ClaimPsyTag_X : public URPC_CheckPsyTag_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_ClaimPsyTag_X");
		return ptr;
	}



};

// Class ProjectX.TAsyncResult__PsyTagCheckResult_X
// 0x0050 (FullSize[0x0120] - InheritedSize[0x00D0])
class UTAsyncResult__PsyTagCheckResult_X : public UAsyncTask
{
public:
	class UPsyTagCheckResult_X*                        Result;                                                    // 0x00D0(0x0008) (PrivateWrite)
	struct FScriptDelegate                             __EventResult__Delegate;                                   // 0x00D8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_N8UJ[0xC];                                     // 0x00D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventResultComplete__Delegate;                           // 0x00F0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_YH34[0xC];                                     // 0x00F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __ResultDelegate__Delegate;                                // 0x0108(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_1L5J[0xC];                                     // 0x0108(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TAsyncResult__PsyTagCheckResult_X");
		return ptr;
	}



	class UTAsyncResult__PsyTagCheckResult_X* CreateResultError(class UError* InError);
	class UTAsyncResult__PsyTagCheckResult_X* CreateResult(class UPsyTagCheckResult_X* InResult);
	class UTAsyncResult__PsyTagCheckResult_X* Copy();
	void ClearCallbacks();
	class UTAsyncResult__PsyTagCheckResult_X* SetResultWhen(class UAsyncTask* Other, const struct FScriptDelegate& GetResultDelegate);
	class UTAsyncResult__PsyTagCheckResult_X* SetResult(class UPsyTagCheckResult_X* InResult, class UError* InError);
	class UTAsyncResult__PsyTagCheckResult_X* NotifyOnResultComplete(const struct FScriptDelegate& Callback);
	class UTAsyncResult__PsyTagCheckResult_X* NotifyOnResult(const struct FScriptDelegate& Callback);
	class UPsyTagCheckResult_X* ResultDelegate();
	void EventResultComplete(class UPsyTagCheckResult_X* OutResult, class UError* OutError);
	void EventResult(class UPsyTagCheckResult_X* OutResult);
};

// Class ProjectX.PsyNetService_FriendChatReceived_X
// 0x0068 (FullSize[0x00F8] - InheritedSize[0x0090])
class UPsyNetService_FriendChatReceived_X : public UPsyNetClientService_X
{
public:
	struct FUniqueNetId                                FromPlayerID;                                              // 0x0090(0x0048) (NeedCtorLink)
	struct FString                                     Message;                                                   // 0x00D8(0x0010) (NeedCtorLink)
	unsigned long                                      IsLocalMessage : 1;                                        // 0x00E8(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_NUNS[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      TimeStamp[0x8];                                            // 0x00EC(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.PsyNetService_FriendChatReceived_X.TimeStamp


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_FriendChatReceived_X");
		return ptr;
	}



};

// Class ProjectX.RPC_PsyNetReadFriends_X
// 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
class URPC_PsyNetReadFriends_X : public URPC_X
{
public:
	TArray<struct FPsyNetPersonaData>                  Friends;                                                   // 0x00E8(0x0010) (Transient, NeedCtorLink)
	TArray<struct FOnlineFriend>                       FriendsData;                                               // 0x00F8(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PsyNetReadFriends_X");
		return ptr;
	}



	void OnSuccess(TArray<struct FOnlineFriend>* MapLocal_9FE263B94C285F0DC55D71AEE3CB5CC5);
};

// Class ProjectX.PsyNetFriends_X
// 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
class UPsyNetFriends_X : public UOnlineFriendMap_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetFriends_X");
		return ptr;
	}



};

// Class ProjectX.__OnlinePlayerFriends_X__UnblockPlayer_27D415F6402D24B80DD229A4BDFC3FB2
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__OnlinePlayerFriends_X__UnblockPlayer_27D415F6402D24B80DD229A4BDFC3FB2 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_VX4D[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlinePlayerFriends_X__UnblockPlayer_27D415F6402D24B80DD229A4BDFC3FB2");
		return ptr;
	}



	void __OnlinePlayerFriends_X__UnblockPlayer_4454CBA04804EF6CFF608197DCDA7F1A(class URPC_UnblockPlayer_X* RPC);
	void __OnlinePlayerFriends_X__UnblockPlayer_27D415F6402D24B80DD229A4BDFC3FB2(class URPC_UnblockPlayer_X* RPC);
};

// Class ProjectX.RPC_PartyChangeOwner_X
// 0x00C8 (FullSize[0x01C0] - InheritedSize[0x00F8])
class URPC_PartyChangeOwner_X : public URPC_PartyBase_X
{
public:
	struct FUniqueNetId                                NewOwnerId;                                                // 0x00F8(0x0048) (NeedCtorLink)
	struct FPsyNetPartyInfo                            Info;                                                      // 0x0140(0x0070) (Transient, NeedCtorLink)
	TArray<struct FPsyNetPartyMember>                  Members;                                                   // 0x01B0(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyChangeOwner_X");
		return ptr;
	}



	class URPC_PartyChangeOwner_X* SetNewOwnerId(const struct FUniqueNetId& InNewOwnerId);
};

// Class ProjectX.PartySequence_InviteToParty_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPartySequence_InviteToParty_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartySequence_InviteToParty_X");
		return ptr;
	}



	void __PartySequence_InviteToParty_X__InviteToPsyNetParty_3D8D6D494B5D7BFF528A2AA53BA3FAEA(class URPC_PartySendInvite_X* RPC);
	void __PartySequence_InviteToParty_X__InviteToPsyNetParty_C6F3D74A4141A9AC6BCA5FAB6454E99E(class URPC_PartySendInvite_X* RPC);
	bool InviteToPsyNetParty(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID);
	bool InviteToParty(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID);
};

// Class ProjectX.RPC_PartyKickMember_X
// 0x0011 (FullSize[0x0109] - InheritedSize[0x00F8])
class URPC_PartyKickMember_X : public URPC_PartyBase_X
{
public:
	TArray<struct FString>                             Members;                                                   // 0x00F8(0x0010) (NeedCtorLink)
	TEnumAsByte<Engine_ELobbyKickReason>               KickReason;                                                // 0x0108(0x0001)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyKickMember_X");
		return ptr;
	}



	class URPC_PartyKickMember_X* SetReason(TEnumAsByte<Engine_ELobbyKickReason> InReason);
	class URPC_PartyKickMember_X* AddMember(const struct FString& InMemberId);
};

// Class ProjectX.PsyNetService_Party_X
// 0x00D8 (FullSize[0x0168] - InheritedSize[0x0090])
class UPsyNetService_Party_X : public UPsyNetClientService_X
{
public:
	struct FString                                     PartyID;                                                   // 0x0090(0x0010) (NeedCtorLink)
	struct FString                                     NotificationType;                                          // 0x00A0(0x0010) (NeedCtorLink)
	struct FString                                     Content;                                                   // 0x00B0(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                FromUserId;                                                // 0x00C0(0x0048) (NeedCtorLink)
	struct FString                                     FromUserName;                                              // 0x0108(0x0010) (NeedCtorLink)
	int                                                CreatedAt;                                                 // 0x0118(0x0004)
	unsigned char                                      UnknownData_T4A7[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUniqueNetId                                ForUserId;                                                 // 0x0120(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_Party_X");
		return ptr;
	}



};

// Class ProjectX.PsyNetService_PartyUserInvited_X
// 0x0000 (FullSize[0x0168] - InheritedSize[0x0168])
class UPsyNetService_PartyUserInvited_X : public UPsyNetService_Party_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PartyUserInvited_X");
		return ptr;
	}



};

// Class ProjectX.PsyNetService_PartySystem_X
// 0x0000 (FullSize[0x0168] - InheritedSize[0x0168])
class UPsyNetService_PartySystem_X : public UPsyNetService_Party_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PartySystem_X");
		return ptr;
	}



};

// Class ProjectX.PsyNetService_PartyUserJoined_X
// 0x0000 (FullSize[0x0168] - InheritedSize[0x0168])
class UPsyNetService_PartyUserJoined_X : public UPsyNetService_Party_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PartyUserJoined_X");
		return ptr;
	}



};

// Class ProjectX.PsyNetService_PartyUserKicked_X
// 0x0101 (FullSize[0x0191] - InheritedSize[0x0090])
class UPsyNetService_PartyUserKicked_X : public UPsyNetClientService_X
{
public:
	struct FString                                     PartyID;                                                   // 0x0090(0x0010) (NeedCtorLink)
	struct FString                                     NotificationType;                                          // 0x00A0(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                Content;                                                   // 0x00B0(0x0048) (NeedCtorLink)
	struct FUniqueNetId                                FromUserId;                                                // 0x00F8(0x0048) (NeedCtorLink)
	int                                                CreatedAt;                                                 // 0x0140(0x0004)
	unsigned char                                      UnknownData_BXRB[0x4];                                     // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUniqueNetId                                ForUserId;                                                 // 0x0148(0x0048) (NeedCtorLink)
	TEnumAsByte<Engine_ELobbyKickReason>               KickReason;                                                // 0x0190(0x0001)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PartyUserKicked_X");
		return ptr;
	}



};

// Class ProjectX.PsyNetService_PartyUserLeft_X
// 0x0000 (FullSize[0x0168] - InheritedSize[0x0168])
class UPsyNetService_PartyUserLeft_X : public UPsyNetService_Party_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PartyUserLeft_X");
		return ptr;
	}



};

// Class ProjectX.PsyNetService_PartyUserDisconnected_X
// 0x0000 (FullSize[0x0168] - InheritedSize[0x0168])
class UPsyNetService_PartyUserDisconnected_X : public UPsyNetService_Party_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PartyUserDisconnected_X");
		return ptr;
	}



};

// Class ProjectX.PsyNetService_PartyOwnerChanged_X
// 0x0100 (FullSize[0x0190] - InheritedSize[0x0090])
class UPsyNetService_PartyOwnerChanged_X : public UPsyNetClientService_X
{
public:
	struct FString                                     PartyID;                                                   // 0x0090(0x0010) (NeedCtorLink)
	struct FString                                     NotificationType;                                          // 0x00A0(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                Content;                                                   // 0x00B0(0x0048) (NeedCtorLink)
	struct FUniqueNetId                                FromUserId;                                                // 0x00F8(0x0048) (NeedCtorLink)
	int                                                CreatedAt;                                                 // 0x0140(0x0004)
	unsigned char                                      UnknownData_6MS8[0x4];                                     // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUniqueNetId                                ForUserId;                                                 // 0x0148(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PartyOwnerChanged_X");
		return ptr;
	}



};

// Class ProjectX.PsyNetService_PartyChat_X
// 0x0000 (FullSize[0x0168] - InheritedSize[0x0168])
class UPsyNetService_PartyChat_X : public UPsyNetService_Party_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PartyChat_X");
		return ptr;
	}



};

// Class ProjectX.PerConMetrics_X
// 0x001C (FullSize[0x009C] - InheritedSize[0x0080])
class UPerConMetrics_X : public UMetricsGroup_X
{
public:
	int                                                StartConnectFailCount;                                     // 0x0080(0x0004)
	int                                                ConnectFailCount;                                          // 0x0084(0x0004)
	int                                                DisconnectCount;                                           // 0x0088(0x0004)
	int                                                RPCErrorCount;                                             // 0x008C(0x0004)
	int                                                InvalidMessageCount;                                       // 0x0090(0x0004)
	unsigned long                                      bConnected : 1;                                            // 0x0094(0x0001) BIT_FIELD
	float                                              StartTime;                                                 // 0x0098(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PerConMetrics_X");
		return ptr;
	}



	void ServiceError(const struct FUniqueNetId& PlayerID, int Count, const struct FString& Service, const struct FName& Error);
	void InvalidMessageError(const struct FUniqueNetId& PlayerID, int Count, const struct FString& Substring);
	void DisconnectedError(const struct FUniqueNetId& PlayerID, int Count, int Code, const struct FString& Reason, float ElapsedSeconds);
	void Connected(const struct FUniqueNetId& PlayerID, float ElapsedSeconds);
	void ConnectError(const struct FUniqueNetId& PlayerID, int Count, int Code, const struct FString& Reason, float ElapsedSeconds);
	void StartConnectError(const struct FUniqueNetId& PlayerID, int Count);
	void StartConnect(const struct FUniqueNetId& PlayerID);
	void Disabled(const struct FUniqueNetId& PlayerID);
	void Enabled(const struct FUniqueNetId& PlayerID);
	void HandleRPCError(class URPCQueue_X* InQueue, class URPC_X* RPC, class UError* Error);
	void HandleInvalidMessage(class UPsyNetMessengerWebSocket_X* InMessenger, const struct FString& Substring);
	void HandleDisconnected(class UPsyNetMessengerWebSocket_X* Socket, int Code, const struct FString& Reason);
	void HandleConnected(class UPsyNetMessengerWebSocket_X* Socket);
	void HandleStartConnectFail(class UPsyNetMessengerWebSocket_X* Socket);
	void HandleStartConnect(class UPsyNetMessengerWebSocket_X* Socket);
	void HandleStatusChanged(class UPerCon_X* PerCon);
	struct FUniqueNetId GetPlayerID(struct FUniqueNetId* StructInitializer_FAD74E5E46AAF54B204FB6A74870917A);
	void SetMessenger(class UPsyNetMessengerWebSocket_X* PerConMessenger);
	void Construct();
};

// Class ProjectX.PsyNetRequestQue_X
// 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
class UPsyNetRequestQue_X : public UObject
{
public:
	float                                              RequestTimeout;                                            // 0x0060(0x0004) (Edit)
	unsigned char                                      UnknownData_V3QN[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPsyNetRequest>                      Requests;                                                  // 0x0068(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __SendMessageDelegate__Delegate;                           // 0x0078(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_P8G7[0xC];                                     // 0x0078(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetRequestQue_X");
		return ptr;
	}



	void FailAllPending(class UError* Error);
	void TimeoutRequests();
	bool ProcessResponseMessage(class UPsyNetMessage_X* Message);
	void RemoveRequest(const struct FName& RequestID);
	void SetRequestComplete(const struct FName& RequestID, class UPsyNetMessage_X* Response, class UError* Error);
	class UTAsyncResult__PsyNetMessage_X* SendRequest(class UPsyNetMessage_X* Message);
	class UAsyncTask* SendMessageDelegate(class UPsyNetMessage_X* Message);
};

// Class ProjectX.PsyNetService_DuplicateLogin_X
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UPsyNetService_DuplicateLogin_X : public UPsyNetClientService_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_DuplicateLogin_X");
		return ptr;
	}



};

// Class ProjectX.__PsyNetConnection_X__ProcessServiceCall_D18FFA01431DAA414C130EAE8C81F82E
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__PsyNetConnection_X__ProcessServiceCall_D18FFA01431DAA414C130EAE8C81F82E : public UObject
{
public:
	class UPsyNetMessage_X*                            Response;                                                  // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PsyNetConnection_X__ProcessServiceCall_D18FFA01431DAA414C130EAE8C81F82E");
		return ptr;
	}



	void __PsyNetConnection_X__ProcessServiceCall_D18FFA01431DAA414C130EAE8C81F82E(class UError* _);
};

// Class ProjectX.__PsyNetMessengerHttp_X__SendMessage_30470D9846BCBC174FB48196ADBD7AFF
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__PsyNetMessengerHttp_X__SendMessage_30470D9846BCBC174FB48196ADBD7AFF : public UObject
{
public:
	struct FString                                     PsyRequestID;                                              // 0x0060(0x0010) (NeedCtorLink)
	class UAsyncTask*                                  Task;                                                      // 0x0070(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PsyNetMessengerHttp_X__SendMessage_30470D9846BCBC174FB48196ADBD7AFF");
		return ptr;
	}



	void __PsyNetMessengerHttp_X__SendMessage_30470D9846BCBC174FB48196ADBD7AFF(class UWebRequest_X* Request);
};

// Class ProjectX.__PsyNetRequestQue_X__SendRequest_45EADF3C4635C59BB4E91B9FA5DD57E5
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__PsyNetRequestQue_X__SendRequest_45EADF3C4635C59BB4E91B9FA5DD57E5 : public UObject
{
public:
	struct FName                                       RequestID;                                                 // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PsyNetRequestQue_X__SendRequest_45EADF3C4635C59BB4E91B9FA5DD57E5");
		return ptr;
	}



	void __PsyNetRequestQue_X__SendRequest_45EADF3C4635C59BB4E91B9FA5DD57E5();
};

// Class ProjectX.PsyNetService_AAS_X
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UPsyNetService_AAS_X : public UPsyNetClientService_X
{
public:
	int                                                AdtTime;                                                   // 0x0090(0x0004)
	int                                                OnlineHours;                                               // 0x0094(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_AAS_X");
		return ptr;
	}



	int GetOnlineHours();
};

// Class ProjectX.PsyNetService_Echo_X
// 0x0020 (FullSize[0x00B0] - InheritedSize[0x0090])
class UPsyNetService_Echo_X : public UPsyNetClientService_X
{
public:
	struct FString                                     RequestString;                                             // 0x0090(0x0010) (NeedCtorLink)
	struct FString                                     ResponseString;                                            // 0x00A0(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_Echo_X");
		return ptr;
	}



	void Execute();
};

// Class ProjectX.__OnlinePlayerStorageQueue_X__MapResultItem_19495AEE46D256E05DA7DC908C605D56
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class U__OnlinePlayerStorageQueue_X__MapResultItem_19495AEE46D256E05DA7DC908C605D56 : public UObject
{
public:
	struct FSetPlayerStorageResultItem                 Item;                                                      // 0x0060(0x0010)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlinePlayerStorageQueue_X__MapResultItem_19495AEE46D256E05DA7DC908C605D56");
		return ptr;
	}



	bool __OnlinePlayerStorageQueue_X__MapResultItem_19495AEE46D256E05DA7DC908C605D56(const struct FPendingStorage& P);
};

// Class ProjectX.__OnlinePlayerStorageQueue_X__GetStorageMaxSizeBytes_2A9D82854901B97E5AC959819540CC17
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__OnlinePlayerStorageQueue_X__GetStorageMaxSizeBytes_2A9D82854901B97E5AC959819540CC17 : public UObject
{
public:
	struct FName                                       Category;                                                  // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlinePlayerStorageQueue_X__GetStorageMaxSizeBytes_2A9D82854901B97E5AC959819540CC17");
		return ptr;
	}



	bool __OnlinePlayerStorageQueue_X__GetStorageMaxSizeBytes_2A9D82854901B97E5AC959819540CC17(const struct FStorageMaxSize& C);
};

// Class ProjectX.__OnlinePlayerStorageSync_X__SyncObjects_C9424ABE411B3A236ED7628630F51C1E
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__OnlinePlayerStorageSync_X__SyncObjects_C9424ABE411B3A236ED7628630F51C1E : public UObject
{
public:
	class UAsyncTask*                                  ResponseTask;                                              // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlinePlayerStorageSync_X__SyncObjects_C9424ABE411B3A236ED7628630F51C1E");
		return ptr;
	}



	void __OnlinePlayerStorageSync_X__SyncObjects_C9424ABE411B3A236ED7628630F51C1E(class URPC_X* RPC);
};

// Class ProjectX.DynamicValue_X
// 0x0024 (FullSize[0x0084] - InheritedSize[0x0060])
class UDynamicValue_X : public UObject
{
public:
	float                                              DefaultValue;                                              // 0x0060(0x0004) (Edit)
	unsigned long                                      bClampMax : 1;                                             // 0x0064(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bClampMin : 1;                                             // 0x0064(0x0001) BIT_FIELD (Edit)
	float                                              MaxValue;                                                  // 0x0068(0x0004) (Edit)
	float                                              MinValue;                                                  // 0x006C(0x0004) (Edit)
	TArray<class UDynamicValueModifier_X*>             Modifiers;                                                 // 0x0070(0x0010) (NeedCtorLink, PrivateWrite)
	float                                              CachedValue;                                               // 0x0080(0x0004) (ProtectedWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DynamicValue_X");
		return ptr;
	}



	void PrintDebugInfo(class UDebugDrawer* Drawer);
	struct FString GetDebugValue();
	float GetValue();
	void Tick(float DeltaTime);
	void RemoveAllModifiers();
	void RemoveModifier(class UDynamicValueModifier_X* Mod);
	class UDynamicValueModifier_X* AddModifier(class UDynamicValueModifier_X* Mod);
	void Construct();
};

// Class ProjectX.SmoothDynamicValue_X
// 0x0010 (FullSize[0x0094] - InheritedSize[0x0084])
class USmoothDynamicValue_X : public UDynamicValue_X
{
public:
	unsigned char                                      UnknownData_ZSYL[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LerpUpSpeed;                                               // 0x0088(0x0004) (Edit)
	float                                              LerpDownSpeed;                                             // 0x008C(0x0004) (Edit)
	float                                              SmoothedCachedValue;                                       // 0x0090(0x0004) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SmoothDynamicValue_X");
		return ptr;
	}



	struct FString GetDebugValue();
	float GetValue();
	void Tick(float DeltaTime);
	void Construct();
};

// Class ProjectX.TAsyncResult__array_ClubInvite_X
// 0x0058 (FullSize[0x0128] - InheritedSize[0x00D0])
class UTAsyncResult__array_ClubInvite_X : public UAsyncTask
{
public:
	TArray<class UClubInvite_X*>                       Result;                                                    // 0x00D0(0x0010) (NeedCtorLink, PrivateWrite)
	struct FScriptDelegate                             __EventResult__Delegate;                                   // 0x00E0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_0S4A[0xC];                                     // 0x00E0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventResultComplete__Delegate;                           // 0x00F8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_G3X2[0xC];                                     // 0x00F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __ResultDelegate__Delegate;                                // 0x0110(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_1EYK[0xC];                                     // 0x0110(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TAsyncResult__array_ClubInvite_X");
		return ptr;
	}



	class UTAsyncResult__array_ClubInvite_X* CreateResultError(class UError* InError);
	class UTAsyncResult__array_ClubInvite_X* CreateResult(TArray<class UClubInvite_X*> InResult);
	class UTAsyncResult__array_ClubInvite_X* Copy();
	void ClearCallbacks();
	class UTAsyncResult__array_ClubInvite_X* SetResultWhen(class UAsyncTask* Other, const struct FScriptDelegate& GetResultDelegate);
	class UTAsyncResult__array_ClubInvite_X* SetResult(TArray<class UClubInvite_X*> InResult, class UError* InError);
	class UTAsyncResult__array_ClubInvite_X* NotifyOnResultComplete(const struct FScriptDelegate& Callback);
	class UTAsyncResult__array_ClubInvite_X* NotifyOnResult(const struct FScriptDelegate& Callback);
	TArray<class UClubInvite_X*> ResultDelegate();
	void EventResultComplete(TArray<class UClubInvite_X*> OutResult, class UError* OutError);
	void EventResult(TArray<class UClubInvite_X*> OutResult);
};

// Class ProjectX.PsyNetService_DSReservation_X
// 0x0048 (FullSize[0x00D8] - InheritedSize[0x0090])
class UPsyNetService_DSReservation_X : public UPsyNetClientService_X
{
public:
	struct FPsyNetBeaconReservation                    Reservation;                                               // 0x0090(0x0048) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_DSReservation_X");
		return ptr;
	}



};

// Class ProjectX.TimersComponent_X
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UTimersComponent_X : public UComponent
{
public:
	TArray<struct FTimerData>                          Timers;                                                    // 0x0070(0x0010) (Const, Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TimersComponent_X");
		return ptr;
	}



	void UpdateTimers(float DeltaSeconds);
	bool IsActive(const struct FScriptDelegate& Callback);
	float GetElapsedTime(const struct FScriptDelegate& Callback);
	float GetRemainingTime(const struct FScriptDelegate& Callback);
	float GetRate(const struct FScriptDelegate& Callback);
	void ClearAll(class UObject* Obj);
	void Clear(const struct FScriptDelegate& Callback);
	void SetStateTimer(const struct FScriptDelegate& Callback, float Rate, bool bLoop);
	void Set(const struct FScriptDelegate& Callback, float Rate, bool bLoop);
};

// Class ProjectX.TickComponent_X
// 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
class UTickComponent_X : public UTimersComponent_X
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0080(0x0008) (Const, Native, NoExport)
	unsigned long                                      bTickWhenGamePaused : 1;                                   // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bTick : 1;                                                 // 0x0088(0x0001) BIT_FIELD (Const)
	unsigned char                                      UnknownData_CP1Q[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             __TickDelegate__Delegate;                                  // 0x0090(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_RMPB[0xC];                                     // 0x008C(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TickComponent_X");
		return ptr;
	}



	void SetTickable(bool bWantsTick);
	void TickDelegate(float DeltaTime);
};

// Class ProjectX.UIStrings_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UUIStrings_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.UIStrings_X");
		return ptr;
	}



	struct FString FormatAsNumber(int Number, const struct FString& Delimiter);
};

// Class ProjectX.WebRequest_X
// 0x0078 (FullSize[0x00D8] - InheritedSize[0x0060])
class UWebRequest_X : public UObject
{
public:
	unsigned long                                      bZipRequest : 1;                                           // 0x0060(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bZipResponse : 1;                                          // 0x0060(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bLogRequest : 1;                                           // 0x0060(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bLogResponse : 1;                                          // 0x0060(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bConnectionReset : 1;                                      // 0x0060(0x0001) BIT_FIELD (Const, Transient)
	TEnumAsByte<ProjectX_EWebRequestState>             RequestState;                                              // 0x0064(0x0001) (Const, Transient)
	unsigned char                                      UnknownData_FKD1[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     URL;                                                       // 0x0068(0x0010) (Const, Transient, NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequest;                                               // 0x0078(0x0008) (Transient, PrivateWrite)
	class UHttpResponseInterface*                      HttpResponse;                                              // 0x0080(0x0008) (Const, Transient, PrivateWrite)
	TArray<unsigned char>                              Content;                                                   // 0x0088(0x0010) (Const, Transient, NeedCtorLink)
	struct FString                                     StringContent;                                             // 0x0098(0x0010) (Const, Transient, NeedCtorLink)
	TArray<unsigned char>                              ResponseData;                                              // 0x00A8(0x0010) (Const, Transient, NeedCtorLink)
	class UError*                                      Error;                                                     // 0x00B8(0x0008) (Const, Transient)
	struct FScriptDelegate                             __EventCompleted__Delegate;                                // 0x00C0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_QJCP[0xC];                                     // 0x00C0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.WebRequest_X");
		return ptr;
	}



	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void SetError(class UError* InError);
	bool HasInternetConnection();
	void HandleHttpRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void ConstructHttpRequest();
	struct FString GetResponseHeader(const struct FString& Key);
	struct FString GetResponseString();
	bool HasNewData();
	bool IsSuccess();
	bool IsError();
	bool IsComplete();
	bool IsSent();
	class UHttpRequestInterface* GetHttpRequest();
	class UWebRequest_X* Send(const struct FString& InURL, const struct FScriptDelegate& OnCompleteCallback);
	void PrepareRequest(const struct FString& InURL);
	void SetContentFromString(const struct FString& ContentString);
	void SetContent(TArray<unsigned char>* ContentBytes);
	struct FString GetETag();
	void SetETag(const struct FString& ETag);
	class UWebRequest_X* SetVerb(const struct FString& InVerb);
	class UWebRequest_X* SetHeader(const struct FString& Key, const struct FString& Value);
	class UWebRequest_X* AddPlayerIDParam(const struct FUniqueNetId& PlayerID);
	class UWebRequest_X* AddStringParam(const struct FString& Key, const struct FString& Value);
	class UWebRequest_X* AddFloatParam(const struct FString& Key, float Value);
	class UWebRequest_X* AddQwordParam(const struct FString& Key);
	class UWebRequest_X* AddIntParam(const struct FString& Key, int Value);
	TEnumAsByte<Core_EFlushResult> FlushWebRequests(float TimeoutSeconds);
	class UWebRequest_X* Create();
	void EventCompleted(class UWebRequest_X* Request);
};

// Class ProjectX.WordFilterTypes_X
// 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
class UWordFilterTypes_X : public UObject
{
public:
	struct FScriptDelegate                             __CommentSanitizedDelegate__Delegate;                      // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_H8MJ[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __CommentErrorDelegate__Delegate;                          // 0x0078(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_I3IN[0xC];                                     // 0x0078(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.WordFilterTypes_X");
		return ptr;
	}



	void SortRequestTimeAscending(TArray<struct FWordFilterPair>* Filtered);
	void SortPendingFront(TArray<struct FWordFilterPair>* Filtered);
	void CommentErrorDelegate(const struct FString& OriginalPhrase, class UError* Error);
	void CommentSanitizedDelegate(const struct FString& Original, const struct FString& Sanitized);
};

// Class ProjectX.AnimNodeBlendBase_X
// 0x0020 (FullSize[0x018C] - InheritedSize[0x016C])
class UAnimNodeBlendBase_X : public UAnimNodeBlendList
{
public:
	unsigned char                                      UnknownData_9I7D[0x4];                                     // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BlendTime;                                                 // 0x0170(0x0004) (Edit)
	unsigned char                                      UnknownData_EWB6[0x4];                                     // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      ChildBlendTimes;                                           // 0x0178(0x0010) (Edit, NeedCtorLink)
	unsigned long                                      bRebuildChildren : 1;                                      // 0x0188(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bChildrenUpdated : 1;                                      // 0x0188(0x0001) BIT_FIELD (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AnimNodeBlendBase_X");
		return ptr;
	}



	void SetActiveChildNamed(const struct FName& ChildName, bool bForce);
	float GetAnimDuration(int ChildIndex);
	float GetBlendTime(int ChildIndex, bool bGetDefault);
};

// Class ProjectX.AnimNodeSeries_X
// 0x001C (FullSize[0x01A8] - InheritedSize[0x018C])
class UAnimNodeSeries_X : public UAnimNodeBlendBase_X
{
public:
	unsigned char                                      UnknownData_7CR5[0x4];                                     // 0x018C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned long                                      bActive : 1;                                               // 0x0190(0x0001) BIT_FIELD (Transient)
	unsigned long                                      bInitialized : 1;                                          // 0x0190(0x0001) BIT_FIELD (Const, Transient)
	unsigned char                                      UnknownData_UTX6[0x4];                                     // 0x0194(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimNodeSequence*                           IntroAnim;                                                 // 0x0198(0x0008) (Const, Transient)
	class UAnimNodeSequence*                           OutroAnim;                                                 // 0x01A0(0x0008) (Const, Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AnimNodeSeries_X");
		return ptr;
	}



};

// Class ProjectX.AnimNodeSequence_X
// 0x0018 (FullSize[0x01C0] - InheritedSize[0x01A8])
class UAnimNodeSequence_X : public UAnimNodeSequence
{
public:
	float                                              AnimSetBlendTime;                                          // 0x01A8(0x0004) (Edit)
	unsigned long                                      bResetOnRelevant : 1;                                      // 0x01AC(0x0001) BIT_FIELD (Edit)
	class UAnimSequence*                               PrevAnimSeq;                                               // 0x01B0(0x0008) (Transient)
	int                                                PrevAnimLinkupIndex;                                       // 0x01B8(0x0004) (Transient)
	float                                              BlendTimeLeft;                                             // 0x01BC(0x0004) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AnimNodeSequence_X");
		return ptr;
	}



};

// Class ProjectX.AnimNodePose_X
// 0x0000 (FullSize[0x01C0] - InheritedSize[0x01C0])
class UAnimNodePose_X : public UAnimNodeSequence_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AnimNodePose_X");
		return ptr;
	}



	void PlayAnim(bool bLoop, float InRate, float StartTime);
};

// Class ProjectX.AnimNotify_PlayParticleEffect_X
// 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
class UAnimNotify_PlayParticleEffect_X : public UAnimNotify_PlayParticleEffect
{
public:
	class UParticleSystemComponent*                    PSC;                                                       // 0x0098(0x0008) (ExportObject, Component, EditInline)
	class UAnimNodeSequence*                           CachedAnimSequence;                                        // 0x00A0(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AnimNotify_PlayParticleEffect_X");
		return ptr;
	}



	void OnParticleSystemFinished(class UParticleSystemComponent* Component);
	void NotifyEnd(class AActor* Owner, class UAnimNodeSequence* AnimSeqInstigator);
	void Notify(class AActor* Owner, class UAnimNodeSequence* AnimSeqInstigator);
};

// Class ProjectX.PsyNetBeacon_X
// 0x0080 (FullSize[0x00F0] - InheritedSize[0x0070])
class UPsyNetBeacon_X : public UComponent
{
public:
	float                                              ConnectionTimeoutSeconds;                                  // 0x0070(0x0004) (Config)
	unsigned char                                      UnknownData_BMM1[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPsyNetConnection_X*                         PsyNetConnection;                                          // 0x0078(0x0008)
	TArray<class UPsyNetBeaconConnection_X*>           Connections;                                               // 0x0080(0x0010) (NeedCtorLink)
	TArray<class UDSPendingMessage_X*>                 PendingMessages;                                           // 0x0090(0x0010) (NeedCtorLink)
	class UPsyNetConfig_X*                             PsyNetConfig;                                              // 0x00A0(0x0008)
	struct FScriptDelegate                             __EventConnected__Delegate;                                // 0x00A8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_K0DG[0xC];                                     // 0x00A8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDisconnected__Delegate;                             // 0x00C0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_TXJ0[0xC];                                     // 0x00C0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventMessageReceived__Delegate;                          // 0x00D8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_WMLE[0xC];                                     // 0x00D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetBeacon_X");
		return ptr;
	}



	void SerializeMessage(class UObject* Message, struct FString* OutMessageType, struct FString* OutMessagePayload);
	class UObject* DeserializeMessage(const struct FString& MessageType, const struct FString& MessagePayload);
	void TimeoutPendingMessages();
	void TimeoutConnections();
	void Tick();
	bool IsGameClient();
	void IssuePendingMessages(class UPsyNetBeaconConnection_X* Connection);
	void AddPendingMessage(class UDSR_DSMessage_X* Message, class UDSPendingMessage_X** ObjectInitializer_CAC4FE074E6F65D69F92628C152D8134);
	void OnMessageReceived(class UPsyNetBeaconConnection_X* Connection, class UObject* Message);
	void ClientHandleMessage(class UDSR_ClientMessage_X* Message);
	void ServerProcessMessage(class UPsyNetBeaconConnection_X* Connection, class UDSR_DSMessage_X* Message);
	void ServerHandleServerMessage(class UDSR_DSToDSMessage_X* Message);
	void ServerHandleMessage(class UDSR_DSMessage_X* Message);
	void HandleClientRpcFail(class UError* Error, class UPsyNetBeaconConnection_X* Connection);
	void ServerSendMessageToServer(class UObject* Message);
	void SendMessageToServer(class UPsyNetBeaconConnection_X* Connection, class UObject* Message);
	void SendMessageToClients(TArray<class UPsyNetBeaconConnection_X*> ToConnections, class UObject* Message, TArray<class URPC_RelayToClient_X*>* ArrayInitializer_C518706B4673D962839E48AB5EB7A0A4);
	class UPsyNetBeaconConnection_X* FindConnection(const struct FString& ReservationID, const struct FString& ConnectionID);
	void ServerHandleReservation(class UPsyNetService_DSReservation_X* Notification);
	void Close();
	void CloseConnection(class UPsyNetBeaconConnection_X* Connection);
	void BroadcastMessage(class UObject* Message);
	void SendMessage(class UPsyNetBeaconConnection_X* Connection, class UObject* Message, TArray<class UPsyNetBeaconConnection_X*>* ArrayInitializer_D40777254A69F3A40CCFE2BB5013A7B0);
	class UPsyNetBeaconConnection_X* ReserveConnection(const struct FString& ReservationID, const struct FString& ConnectionID, float OverrideConnectionTimeoutSeconds, class UPsyNetBeaconConnection_X** ObjectInitializer_A53FE2F640F4A1DDB2BAF4B6EB241FF1);
	void SetPsyNetConnection(class UPsyNetConnection_X* InPsyNetConnection);
	void EventMessageReceived(class UPsyNetBeaconConnection_X* Connection, class UObject* Message);
	void EventDisconnected(class UPsyNetBeacon_X* Beacon, class UPsyNetBeaconConnection_X* Connection);
	void EventConnected(class UPsyNetBeacon_X* Beacon, class UPsyNetBeaconConnection_X* Connection);
};

// Class ProjectX.TcpBeacon
// 0x0070 (FullSize[0x00E0] - InheritedSize[0x0070])
class UTcpBeacon : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0070(0x0008) (Const, Native, NoExport)
	int                                                MaxConnections;                                            // 0x0078(0x0004) (Config)
	unsigned char                                      UnknownData_9PRD[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ConnectionClassName;                                       // 0x0080(0x0010) (Config, NeedCtorLink)
	class UClass*                                      ConnectionClass;                                           // 0x0090(0x0008)
	struct FPointer                                    ListenSocket;                                              // 0x0098(0x0008) (Const, Native, Transient)
	TArray<class UTcpConnection*>                      Connections;                                               // 0x00A0(0x0010) (Const, Transient, NeedCtorLink)
	struct FScriptDelegate                             __EventConnected__Delegate;                                // 0x00B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_9EGX[0xC];                                     // 0x00B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDisconnected__Delegate;                             // 0x00C8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_80XY[0xC];                                     // 0x00C8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TcpBeacon");
		return ptr;
	}



	void ReceivedBunch(class UTcpConnection* Connection);
	void OnDisconnected(class UTcpConnection* Connection);
	void OnConnected(class UTcpConnection* Connection);
	void OnConnectionRemoved(class UTcpConnection* Connection);
	void OnConnectionAdded(class UTcpConnection* Connection);
	class UTcpConnection* GetConnection(const struct FString& Address);
	void Close();
	bool BeginListen();
	class UTcpConnection* BeginConnect(const struct FString& Address);
	void EventDisconnected(class UTcpBeacon* Beacon, class UTcpConnection* Connection);
	void EventConnected(class UTcpBeacon* Beacon, class UTcpConnection* Connection);
};

// Class ProjectX.TcpMessageBeacon
// 0x0020 (FullSize[0x0100] - InheritedSize[0x00E0])
class UTcpMessageBeacon : public UTcpBeacon
{
public:
	class UOnlineMessageComponent_X*                   MessageComponent;                                          // 0x00E0(0x0008) (Const, ExportObject, Component, EditInline)
	struct FScriptDelegate                             __EventMessageReceived__Delegate;                          // 0x00E8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_3UKY[0xC];                                     // 0x00E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TcpMessageBeacon");
		return ptr;
	}



	void BroadcastMessage(class UObject* Message);
	void SendMessage(class UTcpConnection* Connection, class UObject* Message);
	void EventMessageReceived(class UTcpConnection* Connection, class UObject* Message);
};

// Class ProjectX.TcpConnection
// 0x00E0 (FullSize[0x0140] - InheritedSize[0x0060])
class UTcpConnection : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0060(0x0008) (Const, Native, NoExport)
	struct FPointer                                    VfTable_IIReservationConnection_X;                         // 0x0068(0x0008) (Const, Native, NoExport)
	float                                              InitialConnectionTimeout;                                  // 0x0070(0x0004) (Config)
	float                                              ConnectionTimeout;                                         // 0x0074(0x0004) (Config)
	struct FPointer                                    Socket;                                                    // 0x0078(0x0008) (Const, Native, Transient)
	TEnumAsByte<ProjectX_ETcpConnectionState>          ConnectionState;                                           // 0x0080(0x0001) (Const, Transient)
	TEnumAsByte<ProjectX_EWebSocketState>              WebSocketState;                                            // 0x0081(0x0001) (Const, Transient)
	unsigned char                                      UnknownData_78E1[0x2];                                     // 0x0082(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LastReceiveTime;                                           // 0x0084(0x0004) (Const, Transient)
	TArray<unsigned char>                              InBytes;                                                   // 0x0088(0x0010) (Const, Transient, NeedCtorLink)
	TArray<unsigned char>                              OutBytes;                                                  // 0x0098(0x0010) (Const, Transient, NeedCtorLink)
	TArray<int>                                        OutMessageLengths;                                         // 0x00A8(0x0010) (Const, Transient, NeedCtorLink)
	TArray<unsigned char>                              QueuedWebSocketBytes;                                      // 0x00B8(0x0010) (Const, Transient, NeedCtorLink)
	TArray<int>                                        QueuedWebSocketMessageLengths;                             // 0x00C8(0x0010) (Const, Transient, NeedCtorLink)
	TArray<unsigned char>                              InBytesDecoded;                                            // 0x00D8(0x0010) (Const, Transient, NeedCtorLink)
	TArray<unsigned char>                              BunchBytes;                                                // 0x00E8(0x0010) (Const, Transient, NeedCtorLink)
	struct FScriptDelegate                             __EventConnected__Delegate;                                // 0x00F8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_4CXJ[0xC];                                     // 0x00F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDisconnected__Delegate;                             // 0x0110(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_ALK1[0xC];                                     // 0x0110(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventReceivedBunch__Delegate;                            // 0x0128(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_LPQJ[0xC];                                     // 0x0128(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TcpConnection");
		return ptr;
	}



	void OnDisconnected();
	void OnConnected();
	void Close();
	struct FString GetRemoteAddress();
	struct FString GetAddress();
	void EventReceivedBunch(class UTcpConnection* Connection);
	void EventDisconnected(class UTcpConnection* Connection);
	void EventConnected(class UTcpConnection* Connection);
};

// Class ProjectX.WebSocketConnection_X
// 0x001C (FullSize[0x015C] - InheritedSize[0x0140])
class UWebSocketConnection_X : public UTcpConnection
{
public:
	float                                              PingInterval;                                              // 0x0140(0x0004) (Config)
	unsigned char                                      UnknownData_NJY8[0x4];                                     // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ClosedReason;                                              // 0x0148(0x0010) (Const, NeedCtorLink)
	int                                                ClosedCode;                                                // 0x0158(0x0004) (Const)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.WebSocketConnection_X");
		return ptr;
	}



	void PretendClose(int Code, const struct FString& Reason);
	void Close();
	bool BeginWebSocketConnect(const struct FString& Address, class UStringMap* HandshakeHeaders);
	bool BeginConnect(const struct FString& Address);
};

// Class ProjectX.UdpPingBeaconBase_X
// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
class UUdpPingBeaconBase_X : public UComponent
{
public:
	struct FPointer                                    Beacon;                                                    // 0x0070(0x0008) (Const, Native)
	struct FPointer                                    Thread;                                                    // 0x0078(0x0008) (Const, Native)
	struct FPointer                                    Runnable;                                                  // 0x0080(0x0008) (Const, Native)
	int                                                SocketErrorLogDelaySeconds;                                // 0x0088(0x0004) (Config)
	unsigned long                                      bThreaded : 1;                                             // 0x008C(0x0001) BIT_FIELD (Config)
	class UBeaconConfig_X*                             Config;                                                    // 0x0090(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.UdpPingBeaconBase_X");
		return ptr;
	}



	void TickSocket(float DeltaTime);
	void SetTickSocket(bool bTick);
	void Close();
};

// Class ProjectX.UdpPingBeaconClient_X
// 0x0030 (FullSize[0x00C8] - InheritedSize[0x0098])
class UUdpPingBeaconClient_X : public UUdpPingBeaconBase_X
{
public:
	struct FScriptDelegate                             __EventPong__Delegate;                                     // 0x0098(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_4N6T[0xC];                                     // 0x0098(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventLost__Delegate;                                     // 0x00B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_UU2K[0xC];                                     // 0x00B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.UdpPingBeaconClient_X");
		return ptr;
	}



	void TickPongs(float DeltaTime);
	void SetTickPongs(bool bTick);
	void Close();
	void SendPing(const struct FName& Address);
	bool InitClient();
	class UUdpPingBeaconClient_X* GetInstance();
	void EventLost(class UUdpPingBeaconClient_X* TheBeacon, const struct FName& Address);
	void EventPong(class UUdpPingBeaconClient_X* TheBeacon, const struct FName& Address, float DeltaSeconds);
};

// Class ProjectX.UdpPingBeaconServer_X
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UUdpPingBeaconServer_X : public UUdpPingBeaconBase_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.UdpPingBeaconServer_X");
		return ptr;
	}



	bool InitServer(int Port);
};

// Class ProjectX.NetworkNextDriver_X
// 0x0058 (FullSize[0x0268] - InheritedSize[0x0210])
class UNetworkNextDriver_X : public UNetDriver
{
public:
	unsigned char                                      UnknownData_V4QZ[0x58];                                    // 0x0210(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetworkNextDriver_X");
		return ptr;
	}



};

// Class ProjectX.NetworkNextConnection_X
// 0x0020 (FullSize[0xB208] - InheritedSize[0xB1E8])
class UNetworkNextConnection_X : public UNetConnection
{
public:
	unsigned char                                      UnknownData_Q9PI[0x20];                                    // 0xB1E8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetworkNextConnection_X");
		return ptr;
	}



};

// Class ProjectX.NetworkNextDriverProxy_X
// 0x0000 (FullSize[0x0288] - InheritedSize[0x0288])
class UNetworkNextDriverProxy_X : public UTcpNetDriver
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetworkNextDriverProxy_X");
		return ptr;
	}



};

// Class ProjectX.NetworkNextConnectionProxy_X
// 0x0000 (FullSize[0xB210] - InheritedSize[0xB210])
class UNetworkNextConnectionProxy_X : public UTcpipConnection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetworkNextConnectionProxy_X");
		return ptr;
	}



};

// Class ProjectX.PrivilegeCheck_X
// 0x0088 (FullSize[0x00E8] - InheritedSize[0x0060])
class UPrivilegeCheck_X : public UObject
{
public:
	TArray<int>                                        ControllerIDs;                                             // 0x0060(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	unsigned long                                      bHasRestriction : 1;                                       // 0x0070(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned long                                      bFinished : 1;                                             // 0x0070(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownData_4OLT[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UError*                                      FailReason;                                                // 0x0078(0x0008) (Transient, PrivateWrite)
	TArray<TEnumAsByte<Engine_EFeaturePrivilege>>      PendingPrivileges;                                         // 0x0080(0x0010) (Transient, NeedCtorLink)
	int                                                FailedControllerID;                                        // 0x0090(0x0004) (Transient)
	TEnumAsByte<Engine_EFeaturePrivilege>              FailedPrivilege;                                           // 0x0094(0x0001) (Transient)
	TEnumAsByte<Engine_EFeaturePrivilegeLevel>         FailedPrivilegeLevel;                                      // 0x0095(0x0001) (Transient, PrivateWrite)
	unsigned char                                      UnknownData_JNLT[0x2];                                     // 0x0096(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        PendingControllerIDs;                                      // 0x0098(0x0010) (Transient, NeedCtorLink)
	TArray<struct FScriptDelegate>                     CheckDelegates;                                            // 0x00A8(0x0010) (Transient, NeedCtorLink)
	struct FScriptDelegate                             EventFinished;                                             // 0x00B8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_5M4U[0xC];                                     // 0x00B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __CheckDelegate__Delegate;                                 // 0x00D0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_CVHJ[0xC];                                     // 0x00D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PrivilegeCheck_X");
		return ptr;
	}



	bool HasFeatureRestriction(int* OutControllerID, TEnumAsByte<Engine_EFeaturePrivilege>* OutFailedPrivilege);
	void OnFinished();
	void Fail(const struct FString& Reason);
	void HandlePrivilege(unsigned char LocalUserNum, TEnumAsByte<Engine_EFeaturePrivilege> Privilege, TEnumAsByte<Engine_EFeaturePrivilegeLevel> Level, class UError* InFailReason);
	void CheckPrivilege();
	void CheckPsyNetComplete(class UError* ConnectionError);
	void CheckPsyNet();
	void ValidateUserOnlineAccount();
	void CheckInternet();
	class UPrivilegeCheck_X* RequirePrivilege(TEnumAsByte<Engine_EFeaturePrivilege> Privilege);
	class UPrivilegeCheck_X* RequirePsyNet();
	class UPrivilegeCheck_X* RequireUserOnlineAccount();
	class UPrivilegeCheck_X* RequireInternet();
	void StartNextCheck();
	void Start();
	void Init(int ControllerId);
	void CheckDelegate();
};

// Class ProjectX.CameraUtils_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UCameraUtils_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CameraUtils_X");
		return ptr;
	}



	void UpdateAspectRatioFOV(struct FCameraOrientation* OutPOV, float AspectRatio);
	void BlendPOVs(const struct FCameraOrientation& FromPOV, const struct FCameraOrientation& ToPOV, struct FCameraOrientation* OutPOV, float Percent);
	float GetBlendPercent(const struct FViewTargetTransitionParams& BlendParams, float Time);
	bool IsPointInView(const struct FVector& Point, const struct FVector& ViewStart, const struct FRotator& ViewRotation, float FOV);
	float GetFrustumDistanceFromWidth(float FOV, float Width, float AspectRatio);
	float GetFrustumDistanceFromHeight(float FOV, float Height);
	void GetFrustumSize(float Dist, float FOV, float AspectRatio, float* OutWidth, float* OutHeight);
	void CalculateDistanceRotation(const struct FVector& Focus, const struct FVector& Origin, float* OutDistance, struct FRotator* OutRotation);
};

// Class ProjectX.CameraModifier_CameraShake_X
// 0x0004 (FullSize[0x00A0] - InheritedSize[0x009C])
class UCameraModifier_CameraShake_X : public UCameraModifier_CameraShake
{
public:
	unsigned char                                      UnknownData_DJZL[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CameraModifier_CameraShake_X");
		return ptr;
	}



	void ModifyCameraShakeScale(class UCameraShake* Shake, float NewScale);
	void RemoveCameraShake(class UCameraShake* Shake);
};

// Class ProjectX.CameraState_CamActor_X
// 0x0180 (FullSize[0x020C] - InheritedSize[0x008C])
class UCameraState_CamActor_X : public UCameraState_X
{
public:
	unsigned char                                      UnknownData_AR91[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned long                                      bUseOverridePostProcess : 1;                               // 0x0090(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData_NO7N[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACameraActor*                                CamActor;                                                  // 0x0098(0x0008) (Transient)
	struct FPostProcessSettings                        PrevPost;                                                  // 0x00A0(0x0168) (Transient, NeedCtorLink)
	float                                              PrevPostAlpha;                                             // 0x0208(0x0004) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CameraState_CamActor_X");
		return ptr;
	}



	void UpdatePOV(float DeltaTime, struct FCameraOrientation* OutPOV);
	void EndCameraState();
	void BeginCameraState();
	struct FViewTargetTransitionParams GetBlendParams(class UCameraState_X* PrevState);
	bool ShouldExecute();
};

// Class ProjectX.CDN_X
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UCDN_X : public UObject
{
public:
	struct FString                                     URL;                                                       // 0x0060(0x0010) (Config, NeedCtorLink)
	struct FString                                     BlogURL;                                                   // 0x0070(0x0010) (Config, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CDN_X");
		return ptr;
	}



};

// Class ProjectX.HUD_X
// 0x0018 (FullSize[0x0320] - InheritedSize[0x0308])
class AHUD_X : public AHUD
{
public:
	class UObject*                                     ShowDebugObject;                                           // 0x0308(0x0008) (Transient)
	class UDebugDrawer_X*                              DebugDrawer;                                               // 0x0310(0x0008) (Transient)
	class UTexture*                                    DebugTexture;                                              // 0x0318(0x0008) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.HUD_X");
		return ptr;
	}



	void SetShowDebugObject(class UObject* inObj);
	void ShowDebugInfo(float* out_YL, float* out_YPos);
	void ShowDebug(const struct FName& DebugType);
	void DebugCategory(const struct FName& DebugType);
	void DebugCategorySwitch(bool bForward);
	void DrawPauseScreen();
	bool ShouldShowConsoleMessage(const struct FConsoleMessage& InConsoleMessage);
	void DrawDebugTexture();
	void DrawHUD();
};

// Class ProjectX.__CheatManager_X__RandomSleep_CD87E1F14BCDFB21F60FA8977C911251
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class U__CheatManager_X__RandomSleep_CD87E1F14BCDFB21F60FA8977C911251 : public UObject
{
public:
	float                                              MinDelay;                                                  // 0x0060(0x0004)
	float                                              MaxDelay;                                                  // 0x0064(0x0004)
	float                                              MinSleep;                                                  // 0x0068(0x0004)
	float                                              MaxSleep;                                                  // 0x006C(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__CheatManager_X__RandomSleep_CD87E1F14BCDFB21F60FA8977C911251");
		return ptr;
	}



	void __CheatManager_X__RandomSleep_CD87E1F14BCDFB21F60FA8977C911251();
};

// Class ProjectX.DebugDrawer_X
// 0x0040 (FullSize[0x0100] - InheritedSize[0x00C0])
class UDebugDrawer_X : public UDebugDrawer
{
public:
	float                                              TextScale;                                                 // 0x00C0(0x0004) (Edit)
	unsigned char                                      UnknownData_86KT[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCanvas*                                     Canvas;                                                    // 0x00C8(0x0008) (Transient)
	TArray<struct FName>                               DebugCategories;                                           // 0x00D0(0x0010) (Transient, NeedCtorLink)
	TArray<struct FName>                               PossibleDebugCategories;                                   // 0x00E0(0x0010) (Transient, NeedCtorLink)
	float                                              CharWidth;                                                 // 0x00F0(0x0004) (Transient)
	float                                              LastWidestElement;                                         // 0x00F4(0x0004) (Transient)
	unsigned long                                      bHideDebug : 1;                                            // 0x00F8(0x0001) BIT_FIELD (Transient)
	float                                              OffsetX;                                                   // 0x00FC(0x0004) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DebugDrawer_X");
		return ptr;
	}



	void DrawHeader();
	void DrawSpacer(float Height);
	void DrawBackground(float Width, float Height);
	void FinishDrawDebug();
	void StartDrawDebug(class UCanvas* C);
	void PrintText(const struct FString& Text, const struct FColor& InColor);
	void PrintProperty(const struct FString& PropertyName, const struct FString& Value);
	void PrintSeperater();
	void UpdateCanvasIndentation();
	void EndSection();
	void StartSection();
	void SetPos(float X, float Y);
	bool ShouldDisplayDebug(const struct FName& Category);
};

// Class ProjectX.ConnectionInfoMessage_X
// 0x0040 (FullSize[0x00A8] - InheritedSize[0x0068])
class UConnectionInfoMessage_X : public UServerToServerMessage_X
{
public:
	struct FServerConnectionInfo                       ConnectionInfo;                                            // 0x0068(0x0040) (NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ConnectionInfoMessage_X");
		return ptr;
	}



	bool IsConnectionInfoValid(struct FServerConnectionInfo* ServerInfo);
};

// Class ProjectX.ServerPlayerTracker_X
// 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
class UServerPlayerTracker_X : public UComponent
{
public:
	TArray<struct FUniqueNetId>                        Players;                                                   // 0x0070(0x0010) (NeedCtorLink)
	TArray<class UAddReservationMessage_X*>            Messages;                                                  // 0x0080(0x0010) (NeedCtorLink)
	class UOnlineGameReservations_X*                   Reservations;                                              // 0x0090(0x0008)
	struct FScriptDelegate                             __EventPlayerAdded__Delegate;                              // 0x0098(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_BSK8[0xC];                                     // 0x0098(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlayerRemoved__Delegate;                            // 0x00B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_Z95V[0xC];                                     // 0x00B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ServerPlayerTracker_X");
		return ptr;
	}



	TArray<struct FUniqueNetId> __ServerPlayerTracker_X__Refresh_96316AE04FF9B48914CC9695C1C49317(class UAddReservationMessage_X* Message);
	struct FUniqueNetId __ServerPlayerTracker_X__Refresh_73592A984155CE83D10C448B88927B96(const struct FReservationData& P);
	bool __ServerPlayerTracker_X__Refresh_71E439A047CFC22952EB7AA8C6A5D0A4(const struct FReservationData& P);
	struct FString GetPlayerName(const struct FUniqueNetId& PlayerID);
	void Reset();
	void Refresh(TArray<struct FReservationData>* FilterLocal_C5A6560042243AD17CE218941B5C4FD9, TArray<struct FUniqueNetId>* MapLocal_92F98FFE4A875C10C90CC393F1320EAD, TArray<struct FUniqueNetId>* MapManyLocal_8C24180D419304024435F0A2C48D69BA, TArray<struct FUniqueNetId>* UnionLocal_FEA4A6094E3FA4DBF9C436B4B4C5B8F5, TArray<struct FUniqueNetId>* DifferenceLocal_8CF05F4144C494E381393A89EAFA90B1, TArray<struct FUniqueNetId>* DifferenceLocal_A5C5AF974ED4D9DD8A2286B473DDAEF0);
	void RemoveReservationMessage(class UAddReservationMessage_X* Message);
	void AddReservationMessage(class UAddReservationMessage_X* Message);
	void RemovePlayer(const struct FUniqueNetId& PlayerID);
	void AddPlayer(const struct FUniqueNetId& PlayerID);
	void EventPlayerRemoved(class UServerPlayerTracker_X* Tracker, const struct FUniqueNetId& PlayerID);
	void EventPlayerAdded(class UServerPlayerTracker_X* Tracker, const struct FUniqueNetId& PlayerID);
};

// Class ProjectX.OnlinePlayerPermissions_X
// 0x0040 (FullSize[0x00A0] - InheritedSize[0x0060])
class UOnlinePlayerPermissions_X : public UObject
{
public:
	float                                              SyncDelay;                                                 // 0x0060(0x0004) (Edit)
	unsigned char                                      UnknownData_82DW[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FUniqueNetId>                        PendingPlayerRequests;                                     // 0x0068(0x0010) (NeedCtorLink)
	TArray<struct FPlayerPermissionsList>              PlayerPermissions;                                         // 0x0078(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __EventUpdated__Delegate;                                  // 0x0088(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_UCF2[0xC];                                     // 0x0088(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayerPermissions_X");
		return ptr;
	}



	bool HasPermission(const struct FUniqueNetId& PlayerID, TEnumAsByte<ProjectX_EOnlinePlayerPermission> Permission);
	void HandlePlayerPermissions(class URPC_GetPlayerPermissions_X* RPC);
	void SendRequest();
	void SyncPermissions(const struct FUniqueNetId& PlayerID);
	void EventUpdated(class UOnlinePlayerPermissions_X* Permissions);
};

// Class ProjectX.CacheTimer_X
// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
class UCacheTimer_X : public UComponent
{
public:
	float                                              CacheTimeoutSeconds;                                       // 0x0070(0x0004) (Edit)
	float                                              CacheExpireTime;                                           // 0x0074(0x0004) (Transient, PrivateWrite)
	unsigned long                                      bEnabled : 1;                                              // 0x0078(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownData_3F8B[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             __EventExpired__Delegate;                                  // 0x0080(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_EUYZ[0xC];                                     // 0x007C(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CacheTimer_X");
		return ptr;
	}



	float GetRandomCacheTimeoutTime();
	void OnExpired();
	void OnDisabled();
	void OnEnabled();
	void SetEnabled(bool bEnableExpiration);
	void Reset(float TimeoutTime);
	bool IsExpired();
	void EventExpired(class UCacheTimer_X* Timer);
};

// Class ProjectX.MatchRecorder_X
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UMatchRecorder_X : public UObject
{
public:
	class UClass*                                      MatchDataClass;                                            // 0x0060(0x0008) (Edit)
	class UClass*                                      PlayerDataClass;                                           // 0x0068(0x0008) (Edit)
	class UMatchData_X*                                Match;                                                     // 0x0070(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MatchRecorder_X");
		return ptr;
	}



	bool __MatchRecorder_X__GetAbandonedPlayers_E9BEDC0144B90464134399BB1B86EEA0(class UMatchPlayerData_X* P);
	struct FUniqueNetId __MatchRecorder_X__GetAbandonedPlayerIDs_B20B38C54E5ADEDF5013BB9C505D13D2(class UMatchPlayerData_X* P);
	void Finished();
	void UpdateServer(class UOnlineGameDedicatedServer_X* Server);
	class UMatchPlayerData_X* CreatePlayer(const struct FUniqueNetId& PlayerID, const struct FString& PlayerName);
	TArray<struct FUniqueNetId> GetAbandonedPlayerIDs(TArray<class UMatchPlayerData_X*>* ArrayResultLocal_D9BE216D406286E0F03928A65B7576FD, TArray<struct FUniqueNetId>* MapLocal_301C21D344938FAB233311AB43E993DB);
	TArray<class UMatchPlayerData_X*> GetAbandonedPlayers(TArray<class UMatchPlayerData_X*>* FilterLocal_550CB9494C59D8E724D11AB58F388B08);
	class UMatchPlayerData_X* GetPlayerData(const struct FUniqueNetId& PlayerID);
	void RemovePlayer(const struct FUniqueNetId& PlayerID);
	void ReservePlayer(const struct FUniqueNetId& PlayerID, const struct FUniqueNetId& PartyID);
	void AddPlayer(const struct FUniqueNetId& PlayerID, const struct FString& PlayerName);
	struct FString MatchGUID();
	void Construct();
};

// Class ProjectX.MatchData_X
// 0x00E8 (FullSize[0x0148] - InheritedSize[0x0060])
class UMatchData_X : public UObject
{
public:
	struct FString                                     MatchGUID;                                                 // 0x0060(0x0010) (NeedCtorLink)
	unsigned char                                      RecordStartTimestamp[0x8];                                 // 0x0070(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.MatchData_X.RecordStartTimestamp
	unsigned char                                      RecordEndTimestamp[0x8];                                   // 0x0078(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.MatchData_X.RecordEndTimestamp
	unsigned char                                      MatchStartTimestamp[0x8];                                  // 0x0080(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.MatchData_X.MatchStartTimestamp
	unsigned char                                      MatchEndTimestamp[0x8];                                    // 0x0088(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.MatchData_X.MatchEndTimestamp
	struct FName                                       MapName;                                                   // 0x0090(0x0008) (DataBinding)
	int                                                Playlist;                                                  // 0x0098(0x0004) (DataBinding)
	unsigned char                                      UnknownData_RN3Y[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               Mutators;                                                  // 0x00A0(0x0010) (NeedCtorLink)
	unsigned long                                      bIsBotMatch : 1;                                           // 0x00B0(0x0001) BIT_FIELD
	unsigned long                                      bClubVsClub : 1;                                           // 0x00B0(0x0001) BIT_FIELD
	unsigned long                                      bOverTime : 1;                                             // 0x00B0(0x0001) BIT_FIELD (DataBinding)
	unsigned long                                      bNoContest : 1;                                            // 0x00B0(0x0001) BIT_FIELD (DataBinding)
	unsigned long                                      bForfeit : 1;                                              // 0x00B0(0x0001) BIT_FIELD (DataBinding)
	int                                                ClubID;                                                    // 0x00B4(0x0004)
	struct FUniqueNetId                                CustomMatchCreatorPlayerID;                                // 0x00B8(0x0048) (NeedCtorLink)
	struct FString                                     CustomServerName;                                          // 0x0100(0x0010) (NeedCtorLink)
	struct FString                                     CustomServerPassword;                                      // 0x0110(0x0010) (NeedCtorLink)
	float                                              SecondsPlayed;                                             // 0x0120(0x0004) (DataBinding)
	float                                              OvertimeSecondsPlayed;                                     // 0x0124(0x0004) (DataBinding)
	int                                                WinningTeam;                                               // 0x0128(0x0004) (DataBinding)
	int                                                Team0Score;                                                // 0x012C(0x0004) (DataBinding)
	int                                                Team1Score;                                                // 0x0130(0x0004) (DataBinding)
	unsigned char                                      UnknownData_Y0J4[0x4];                                     // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMatchPlayerData_X*>                  Players;                                                   // 0x0138(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MatchData_X");
		return ptr;
	}



};

// Class ProjectX.PartyErrors_X
// 0x0128 (FullSize[0x01A8] - InheritedSize[0x0080])
class UPartyErrors_X : public UErrorList
{
public:
	class UErrorType*                                  CreatePartyFailed;                                         // 0x0080(0x0008) (Const)
	class UErrorType*                                  CreatePartyFailedTeamFull;                                 // 0x0088(0x0008) (Const)
	class UErrorType*                                  CreatePlayerFailedPartyFull;                               // 0x0090(0x0008) (Const)
	class UErrorType*                                  InvitePlayerToPartyFailedPartyFull;                        // 0x0098(0x0008) (Const)
	class UErrorType*                                  JoinPartyFailedPartyFull;                                  // 0x00A0(0x0008) (Const)
	class UErrorType*                                  JoinPartyFailedPartyMatchmaking;                           // 0x00A8(0x0008) (Const)
	class UErrorType*                                  JoinPartyFailedPartyInGame;                                // 0x00B0(0x0008) (Const)
	class UErrorType*                                  KickedFromParty;                                           // 0x00B8(0x0008) (Const)
	class UErrorType*                                  PartyDestroyedConnectionError;                             // 0x00C0(0x0008) (Const)
	class UErrorType*                                  PartyDestroyedSignedOut;                                   // 0x00C8(0x0008) (Const)
	class UErrorType*                                  JoinPartyFailed;                                           // 0x00D0(0x0008) (Const)
	class UErrorType*                                  JoinPartyFailedNotAllowed;                                 // 0x00D8(0x0008) (Const)
	class UErrorType*                                  JoinPartyFailedNotJoinable;                                // 0x00E0(0x0008) (Const)
	class UErrorType*                                  PartyBuildID;                                              // 0x00E8(0x0008) (Const)
	class UErrorType*                                  PartyNotFound;                                             // 0x00F0(0x0008) (Const)
	class UErrorType*                                  UserNotOwner;                                              // 0x00F8(0x0008) (Const)
	class UErrorType*                                  PartyIsFull;                                               // 0x0100(0x0008) (Const)
	class UErrorType*                                  CannotAddToParty;                                          // 0x0108(0x0008) (Const)
	class UErrorType*                                  UserListInvalid;                                           // 0x0110(0x0008) (Const)
	class UErrorType*                                  InvalidOwner;                                              // 0x0118(0x0008) (Const)
	class UErrorType*                                  ChatDisabled;                                              // 0x0120(0x0008) (Const)
	class UErrorType*                                  MissingOrExpiredInvite;                                    // 0x0128(0x0008) (Const)
	class UErrorType*                                  MemberNotFound;                                            // 0x0130(0x0008) (Const)
	class UErrorType*                                  PartyIdConflict;                                           // 0x0138(0x0008) (Const)
	class UErrorType*                                  CannotKickSelf;                                            // 0x0140(0x0008) (Const)
	class UErrorType*                                  RegionRestrictedTrade;                                     // 0x0148(0x0008) (Const)
	class UErrorType*                                  CannotCrossPlatformTrade;                                  // 0x0150(0x0008) (Const)
	class UErrorType*                                  CannotCrossPlayInvite;                                     // 0x0158(0x0008) (Const)
	class UErrorType*                                  RestrictedPlatformInvite;                                  // 0x0160(0x0008) (Const)
	class UErrorType*                                  PlatformNotSupported;                                      // 0x0168(0x0008) (Const)
	class UErrorType*                                  KickedCrossplayDisabled;                                   // 0x0170(0x0008) (Const)
	class UErrorType*                                  KickedLeaderPartyUp;                                       // 0x0178(0x0008) (Const)
	class UErrorType*                                  VoterDisconnected;                                         // 0x0180(0x0008) (Const)
	class UErrorType*                                  VoteEnded;                                                 // 0x0188(0x0008) (Const)
	class UErrorType*                                  UsePlatformPartySystem;                                    // 0x0190(0x0008) (Const)
	class UErrorType*                                  InvitationRejected;                                        // 0x0198(0x0008) (Const)
	class UErrorType*                                  SplitScreenNotAllowedInLan;                                // 0x01A0(0x0008) (Const)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyErrors_X");
		return ptr;
	}



};

// Class ProjectX.FindServerTask_X
// 0x0028 (FullSize[0x00F8] - InheritedSize[0x00D0])
class UFindServerTask_X : public UAsyncTask
{
public:
	float                                              SearchTimeout;                                             // 0x00D0(0x0004) (Edit)
	unsigned char                                      UnknownData_PEZC[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class URPC_X*                                      RPC;                                                       // 0x00D8(0x0008)
	struct FScriptDelegate                             __EventResult__Delegate;                                   // 0x00E0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_E5TH[0xC];                                     // 0x00E0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.FindServerTask_X");
		return ptr;
	}



	void HandleClientReservationMessage(class UClientReservationMessage_X* Message);
	void HandleSearchTimeout();
	void HandleJoinMatchError(class URPC_X* InRPC);
	void Cleanup();
	void Init(class URPC_X* InRPC);
	class UFindServerTask_X* NotifyOnResult(const struct FScriptDelegate& Callback);
	class UFindServerTask_X* FindUsingRPC(class URPC_X* InRPC);
	class UFindServerTask_X* FindUsingNamePassword(const struct FString& JoinName, const struct FString& JoinPassword, const struct FName& ReservationType, class URPC_JoinMatch_X** ObjectInitializer_B2751DDF4261B34A879C4F9BBC459165);
	void EventResult(const struct FServerReservationData& OutResult);
};

// Class ProjectX.ReservationsFullMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UReservationsFullMessage_X : public UBeaconMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsFullMessage_X");
		return ptr;
	}



};

// Class ProjectX.ReservationsTeamFullMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UReservationsTeamFullMessage_X : public UBeaconMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsTeamFullMessage_X");
		return ptr;
	}



};

// Class ProjectX.ReservationsWaitingMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UReservationsWaitingMessage_X : public UBeaconMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsWaitingMessage_X");
		return ptr;
	}



};

// Class ProjectX.ReservationsReadyMessage_X
// 0x004C (FullSize[0x00AC] - InheritedSize[0x0060])
class UReservationsReadyMessage_X : public UBeaconMessage_X
{
public:
	struct FString                                     ServerAddress;                                             // 0x0060(0x0010) (NeedCtorLink)
	struct FString                                     BeaconAddress;                                             // 0x0070(0x0010) (NeedCtorLink)
	struct FString                                     PingAddress;                                               // 0x0080(0x0010) (NeedCtorLink)
	TArray<int>                                        ProductIDs;                                                // 0x0090(0x0010) (NeedCtorLink)
	class UNetworkEncryptionKey*                       Keys;                                                      // 0x00A0(0x0008)
	unsigned long                                      bUseNetworkNextDriver : 1;                                 // 0x00A8(0x0001) BIT_FIELD


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsReadyMessage_X");
		return ptr;
	}



	class UReservationsReadyMessage_X* SetKeys(class UNetworkEncryptionKey* InKeys);
	class UReservationsReadyMessage_X* SetProductIDs(TArray<int> InProductIDs);
	class UReservationsReadyMessage_X* SetPingAddress(const struct FString& InAddress);
	class UReservationsReadyMessage_X* SetBeaconAddress(const struct FString& InAddress);
	class UReservationsReadyMessage_X* SetServerAddress(const struct FString& InAddress);
};

// Class ProjectX.ReservationsTimedOutMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UReservationsTimedOutMessage_X : public UBeaconMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsTimedOutMessage_X");
		return ptr;
	}



};

// Class ProjectX.ReservationsPrivateMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UReservationsPrivateMessage_X : public UBeaconMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsPrivateMessage_X");
		return ptr;
	}



};

// Class ProjectX.ReservationsPasswordMessage_X
// 0x0001 (FullSize[0x0061] - InheritedSize[0x0060])
class UReservationsPasswordMessage_X : public UBeaconMessage_X
{
public:
	TEnumAsByte<ProjectX_EPasswordFailureReason>       Reason;                                                    // 0x0060(0x0001)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsPasswordMessage_X");
		return ptr;
	}



	class UReservationsPasswordMessage_X* SetReason(TEnumAsByte<ProjectX_EPasswordFailureReason> InReason);
};

// Class ProjectX.ReservationsWrongPlaylistMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UReservationsWrongPlaylistMessage_X : public UBeaconMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsWrongPlaylistMessage_X");
		return ptr;
	}



};

// Class ProjectX.ReservationsWrongRankedMatchMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UReservationsWrongRankedMatchMessage_X : public UBeaconMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsWrongRankedMatchMessage_X");
		return ptr;
	}



};

// Class ProjectX.ReservationsKeysFailedMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UReservationsKeysFailedMessage_X : public UBeaconMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsKeysFailedMessage_X");
		return ptr;
	}



};

// Class ProjectX.ReservationCrossplayDisabledMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UReservationCrossplayDisabledMessage_X : public UBeaconMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationCrossplayDisabledMessage_X");
		return ptr;
	}



};

// Class ProjectX.ReservationsMaxPlayersMessage_X
// 0x0004 (FullSize[0x0064] - InheritedSize[0x0060])
class UReservationsMaxPlayersMessage_X : public UBeaconMessage_X
{
public:
	int                                                MaxPlayerCount;                                            // 0x0060(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsMaxPlayersMessage_X");
		return ptr;
	}



	class UReservationsMaxPlayersMessage_X* SetMaxPlayerCount(int inMaxPlayerCount);
};

// Class ProjectX.PingMessage_X
// 0x0004 (FullSize[0x0064] - InheritedSize[0x0060])
class UPingMessage_X : public UBeaconMessage_X
{
public:
	unsigned long                                      bIsResponse : 1;                                           // 0x0060(0x0001) BIT_FIELD


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PingMessage_X");
		return ptr;
	}



	class UPingMessage_X* SetIsResponse();
};

// Class ProjectX.RPC_KeysBase_X
// 0x005C (FullSize[0x0144] - InheritedSize[0x00E8])
class URPC_KeysBase_X : public URPC_X
{
public:
	struct FString                                     ServerHost;                                                // 0x00E8(0x0010) (NeedCtorLink)
	int                                                ServerPort;                                                // 0x00F8(0x0004)
	unsigned char                                      UnknownData_6EDE[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              Key;                                                       // 0x0100(0x0010) (Transient, NeedCtorLink)
	TArray<unsigned char>                              IV;                                                        // 0x0110(0x0010) (Transient, NeedCtorLink)
	TArray<unsigned char>                              HMACKey;                                                   // 0x0120(0x0010) (Transient, NeedCtorLink)
	TArray<unsigned char>                              SessionId;                                                 // 0x0130(0x0010) (Transient, NeedCtorLink)
	unsigned long                                      bPrimaryPlayer : 1;                                        // 0x0140(0x0001) BIT_FIELD (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_KeysBase_X");
		return ptr;
	}



	class URPC_KeysBase_X* SetPrimaryPlayer();
	class URPC_KeysBase_X* SetServerAddress(const struct FString& ServerAddress);
};

// Class ProjectX.RPC_GenerateKeys_X
// 0x0004 (FullSize[0x0148] - InheritedSize[0x0144])
class URPC_GenerateKeys_X : public URPC_KeysBase_X
{
public:
	unsigned char                                      UnknownData_0CXA[0x4];                                     // 0x0144(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GenerateKeys_X");
		return ptr;
	}



};

// Class ProjectX.CancelJoinMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UCancelJoinMessage_X : public UBeaconMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CancelJoinMessage_X");
		return ptr;
	}



};

// Class ProjectX.__OnlineGameMatchmaking_X__OnReceiveGameServer_D8ADF92744E9BC5B8F5FCC9C4DDE7DBD
// 0x0080 (FullSize[0x00E0] - InheritedSize[0x0060])
class U__OnlineGameMatchmaking_X__OnReceiveGameServer_D8ADF92744E9BC5B8F5FCC9C4DDE7DBD : public UObject
{
public:
	struct FServerReservationData                      Reservation;                                               // 0x0060(0x0080) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameMatchmaking_X__OnReceiveGameServer_D8ADF92744E9BC5B8F5FCC9C4DDE7DBD");
		return ptr;
	}



	bool __OnlineGameMatchmaking_X__OnReceiveGameServer_D8ADF92744E9BC5B8F5FCC9C4DDE7DBD(const struct FString& R);
};

// Class ProjectX.__OnlineGameMatchmaking_X__AddRecommendedServers_E3B205FE4A49669D0D8CC8BA1A575F59
// 0x0004 (FullSize[0x0064] - InheritedSize[0x0060])
class U__OnlineGameMatchmaking_X__AddRecommendedServers_E3B205FE4A49669D0D8CC8BA1A575F59 : public UObject
{
public:
	float                                              AccPingThreshold;                                          // 0x0060(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameMatchmaking_X__AddRecommendedServers_E3B205FE4A49669D0D8CC8BA1A575F59");
		return ptr;
	}



	bool __OnlineGameMatchmaking_X__AddRecommendedServers_E3B205FE4A49669D0D8CC8BA1A575F59(class URegionPing_X* R);
};

// Class ProjectX.SuperRegion_X
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class USuperRegion_X : public UObject
{
public:
	struct FString                                     Id;                                                        // 0x0060(0x0010) (NeedCtorLink)
	struct FString                                     Label;                                                     // 0x0070(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SuperRegion_X");
		return ptr;
	}



};

// Class ProjectX.RegionConfig_X
// 0x0020 (FullSize[0x0098] - InheritedSize[0x0078])
class URegionConfig_X : public UOnlineConfig_X
{
public:
	TArray<class USuperRegion_X*>                      SuperRegions;                                              // 0x0078(0x0010) (NeedCtorLink)
	TArray<class URegion_X*>                           Regions;                                                   // 0x0088(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RegionConfig_X");
		return ptr;
	}



	struct FRegionSecret __RegionConfig_X__GetRegionSecrets_D001CD1145F7F4748D3018BF1042FD89(class URegion_X* R, struct FRegionSecret* StructInitializer_666CBDC8458A39229FDD66AB87D7AA6F);
	bool __RegionConfig_X__GetRegionSecrets_95D5AE43444D83BF0D5FCB9F533AA06C(class URegion_X* R);
	TArray<struct FRegionSecret> GetRegionSecrets(TArray<class URegion_X*>* FilterLocal_C1C2E45948DAD852E44FFFBEB35578B7, TArray<struct FRegionSecret>* MapLocal_8EDEB2DF42FFDC23C960F797C98321EA);
	TArray<class URegion_X*> GetSubRegions(const struct FString& SuperRegionID, TArray<class URegion_X*>* FilterLocal_0542EB0C44827220761A5A91159BA3C1);
	class URegion_X* FindRegion(const struct FString& RegionID);
	class USuperRegion_X* FindSuperRegion(const struct FString& SuperRegionID);
	void Apply(class USuperRegion_X** ObjectInitializer_267C841F44C5A2C6980BC2A4D8D3E1B7);
};

// Class ProjectX.Region_X
// 0x0040 (FullSize[0x00A0] - InheritedSize[0x0060])
class URegion_X : public UObject
{
public:
	struct FString                                     SuperRegionID;                                             // 0x0060(0x0010) (NeedCtorLink)
	struct FString                                     Id;                                                        // 0x0070(0x0010) (NeedCtorLink)
	struct FString                                     Label;                                                     // 0x0080(0x0010) (NeedCtorLink)
	struct FString                                     Secret;                                                    // 0x0090(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Region_X");
		return ptr;
	}



};

// Class ProjectX.__OnlineGameMatchmaking_X__GetSubRegionPings_6E062E0E4DF2556EDD2B819C583DBD6B
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class U__OnlineGameMatchmaking_X__GetSubRegionPings_6E062E0E4DF2556EDD2B819C583DBD6B : public UObject
{
public:
	struct FString                                     SuperRegionID;                                             // 0x0060(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameMatchmaking_X__GetSubRegionPings_6E062E0E4DF2556EDD2B819C583DBD6B");
		return ptr;
	}



	bool __OnlineGameMatchmaking_X__GetSubRegionPings_6E062E0E4DF2556EDD2B819C583DBD6B(class URegionPing_X* R);
};

// Class ProjectX.__OnlineGameSkill_X__HandleSyncedPlayerSkill_8FC8525146E16E00FA50E49E74B4FD42
// 0x0058 (FullSize[0x00B8] - InheritedSize[0x0060])
class U__OnlineGameSkill_X__HandleSyncedPlayerSkill_8FC8525146E16E00FA50E49E74B4FD42 : public UObject
{
public:
	TArray<struct FPlayerSkillRating>                  PlayerSkillRatings;                                        // 0x0060(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                  // 0x0070(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameSkill_X__HandleSyncedPlayerSkill_8FC8525146E16E00FA50E49E74B4FD42");
		return ptr;
	}



	void __OnlineGameSkill_X__HandleSyncedPlayerSkill_8FC8525146E16E00FA50E49E74B4FD42(int RankedPlaylistID, struct FPlayerSkillRating* StructInitializer_150BD3464EC2B73A43A2518E974ECBE9);
};

// Class ProjectX.RPC_RemoveFromClub_X
// 0x0048 (FullSize[0x0140] - InheritedSize[0x00F8])
class URPC_RemoveFromClub_X : public URPC_ClubDetailsBase_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x00F8(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_RemoveFromClub_X");
		return ptr;
	}



	class URPC_RemoveFromClub_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.RPC_SetClubOwner_X
// 0x0048 (FullSize[0x0140] - InheritedSize[0x00F8])
class URPC_SetClubOwner_X : public URPC_ClubDetailsBase_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x00F8(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_SetClubOwner_X");
		return ptr;
	}



	class URPC_SetClubOwner_X* SetNewOwner(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.RPC_GetClubInvites_X
// 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
class URPC_GetClubInvites_X : public URPC_X
{
public:
	TArray<class UClubInvite_X*>                       ClubInvites;                                               // 0x00E8(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetClubInvites_X");
		return ptr;
	}



	TArray<class UClubInvite_X*> __RPC_GetClubInvites_X__CreateClubInvitesTask_555585574BF0B0A96F9B7DA20A73162B();
	class UTAsyncResult__array_ClubInvite_X* CreateClubInvitesTask();
};

// Class ProjectX.RPC_AcceptClubInvite_X
// 0x0004 (FullSize[0x00FC] - InheritedSize[0x00F8])
class URPC_AcceptClubInvite_X : public URPC_ClubDetailsBase_X
{
public:
	int                                                ClubID;                                                    // 0x00F8(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_AcceptClubInvite_X");
		return ptr;
	}



	class URPC_AcceptClubInvite_X* SetClubID();
};

// Class ProjectX.RPC_RejectClubInvite_X
// 0x0004 (FullSize[0x00EC] - InheritedSize[0x00E8])
class URPC_RejectClubInvite_X : public URPC_X
{
public:
	int                                                ClubID;                                                    // 0x00E8(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_RejectClubInvite_X");
		return ptr;
	}



	class URPC_RejectClubInvite_X* SetClubID();
};

// Class ProjectX.__OnlineClubManager_X__LeaveClub_937BEAD846DD1CE64E3CDD83B36B7716
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__OnlineClubManager_X__LeaveClub_937BEAD846DD1CE64E3CDD83B36B7716 : public UObject
{
public:
	unsigned char                                      ClubID[0x8];                                               // 0x0060(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.__OnlineClubManager_X__LeaveClub_937BEAD846DD1CE64E3CDD83B36B7716.ClubID


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineClubManager_X__LeaveClub_937BEAD846DD1CE64E3CDD83B36B7716");
		return ptr;
	}



	void __OnlineClubManager_X__LeaveClub_937BEAD846DD1CE64E3CDD83B36B7716();
};

// Class ProjectX.RPC_LeaveClub_X
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class URPC_LeaveClub_X : public URPC_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_LeaveClub_X");
		return ptr;
	}



};

// Class ProjectX.RPC_GetClubDetails_X
// 0x0004 (FullSize[0x00FC] - InheritedSize[0x00F8])
class URPC_GetClubDetails_X : public URPC_ClubDetailsBase_X
{
public:
	int                                                ClubID;                                                    // 0x00F8(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetClubDetails_X");
		return ptr;
	}



	class URPC_GetClubDetails_X* SetClubID();
};

// Class ProjectX.__ServerPlayerTracker_X__AddPlayer_324B5FE24566751CA177A89767FE8281
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class U__ServerPlayerTracker_X__AddPlayer_324B5FE24566751CA177A89767FE8281 : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0060(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__ServerPlayerTracker_X__AddPlayer_324B5FE24566751CA177A89767FE8281");
		return ptr;
	}



	bool __ServerPlayerTracker_X__AddPlayer_324B5FE24566751CA177A89767FE8281(const struct FUniqueNetId& P);
};

// Class ProjectX.__TAsyncResult__array_ClubInvite_X__NotifyOnResult_38BC8E554EFCE6F77C76BE827993EEB7
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__TAsyncResult__array_ClubInvite_X__NotifyOnResult_38BC8E554EFCE6F77C76BE827993EEB7 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_NFOF[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__array_ClubInvite_X__NotifyOnResult_38BC8E554EFCE6F77C76BE827993EEB7");
		return ptr;
	}



	void __TAsyncResult__array_ClubInvite_X__NotifyOnResult_38BC8E554EFCE6F77C76BE827993EEB7();
};

// Class ProjectX.__TAsyncResult__array_ClubInvite_X__NotifyOnResultComplete_5D1ED4B34EBF986F339BF1A3EDE57A90
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__TAsyncResult__array_ClubInvite_X__NotifyOnResultComplete_5D1ED4B34EBF986F339BF1A3EDE57A90 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_OO3X[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__array_ClubInvite_X__NotifyOnResultComplete_5D1ED4B34EBF986F339BF1A3EDE57A90");
		return ptr;
	}



	void __TAsyncResult__array_ClubInvite_X__NotifyOnResultComplete_5D1ED4B34EBF986F339BF1A3EDE57A90(class UError* Err);
};

// Class ProjectX.__TAsyncResult__array_ClubInvite_X__SetResultWhen_66468DD844073F88363CE6AA19071975
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__TAsyncResult__array_ClubInvite_X__SetResultWhen_66468DD844073F88363CE6AA19071975 : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                         // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_JN4D[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__array_ClubInvite_X__SetResultWhen_66468DD844073F88363CE6AA19071975");
		return ptr;
	}



	void __TAsyncResult__array_ClubInvite_X__SetResultWhen_66468DD844073F88363CE6AA19071975();
};

// Class ProjectX.__TAsyncResult__array_ClubInvite_X__Copy_DB8979484DDAF86F19B680BB2F252B73
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__TAsyncResult__array_ClubInvite_X__Copy_DB8979484DDAF86F19B680BB2F252B73 : public UObject
{
public:
	class UTAsyncResult__array_ClubInvite_X*           Instance;                                                  // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__array_ClubInvite_X__Copy_DB8979484DDAF86F19B680BB2F252B73");
		return ptr;
	}



	void __TAsyncResult__array_ClubInvite_X__Copy_DB8979484DDAF86F19B680BB2F252B73(TArray<class UClubInvite_X*> R, class UError* E);
};

// Class ProjectX.__TAsyncResult__array_LanServerRecord_X__NotifyOnResult_9775065848D26368B53A2597BAFC75F4
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__TAsyncResult__array_LanServerRecord_X__NotifyOnResult_9775065848D26368B53A2597BAFC75F4 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_JW1G[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__array_LanServerRecord_X__NotifyOnResult_9775065848D26368B53A2597BAFC75F4");
		return ptr;
	}



	void __TAsyncResult__array_LanServerRecord_X__NotifyOnResult_9775065848D26368B53A2597BAFC75F4();
};

// Class ProjectX.__TAsyncResult__array_LanServerRecord_X__NotifyOnResultComplete_23BDBE0C4ED89F801A41D8B84942D294
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__TAsyncResult__array_LanServerRecord_X__NotifyOnResultComplete_23BDBE0C4ED89F801A41D8B84942D294 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_3M3N[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__array_LanServerRecord_X__NotifyOnResultComplete_23BDBE0C4ED89F801A41D8B84942D294");
		return ptr;
	}



	void __TAsyncResult__array_LanServerRecord_X__NotifyOnResultComplete_23BDBE0C4ED89F801A41D8B84942D294(class UError* Err);
};

// Class ProjectX.__TAsyncResult__array_LanServerRecord_X__SetResultWhen_29C68E9B4E2EF371FA166D8B54286442
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__TAsyncResult__array_LanServerRecord_X__SetResultWhen_29C68E9B4E2EF371FA166D8B54286442 : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                         // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_XRX7[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__array_LanServerRecord_X__SetResultWhen_29C68E9B4E2EF371FA166D8B54286442");
		return ptr;
	}



	void __TAsyncResult__array_LanServerRecord_X__SetResultWhen_29C68E9B4E2EF371FA166D8B54286442();
};

// Class ProjectX.__TAsyncResult__array_LanServerRecord_X__Copy_159E429244D389CE32E128BFBB314894
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__TAsyncResult__array_LanServerRecord_X__Copy_159E429244D389CE32E128BFBB314894 : public UObject
{
public:
	class UTAsyncResult__array_LanServerRecord_X*      Instance;                                                  // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__array_LanServerRecord_X__Copy_159E429244D389CE32E128BFBB314894");
		return ptr;
	}



	void __TAsyncResult__array_LanServerRecord_X__Copy_159E429244D389CE32E128BFBB314894(TArray<class ULanServerRecord_X*> R, class UError* E);
};

// Class ProjectX.__TAsyncResult__ClubDetails_X__NotifyOnResult_A50FE8074969951D2940E19A2D2970C3
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__TAsyncResult__ClubDetails_X__NotifyOnResult_A50FE8074969951D2940E19A2D2970C3 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_7GTK[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__ClubDetails_X__NotifyOnResult_A50FE8074969951D2940E19A2D2970C3");
		return ptr;
	}



	void __TAsyncResult__ClubDetails_X__NotifyOnResult_A50FE8074969951D2940E19A2D2970C3();
};

// Class ProjectX.__TAsyncResult__ClubDetails_X__NotifyOnResultComplete_1957EA414C5E21C2C3A7858B09AA4E97
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__TAsyncResult__ClubDetails_X__NotifyOnResultComplete_1957EA414C5E21C2C3A7858B09AA4E97 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_QNNW[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__ClubDetails_X__NotifyOnResultComplete_1957EA414C5E21C2C3A7858B09AA4E97");
		return ptr;
	}



	void __TAsyncResult__ClubDetails_X__NotifyOnResultComplete_1957EA414C5E21C2C3A7858B09AA4E97(class UError* Err);
};

// Class ProjectX.__TAsyncResult__ClubDetails_X__SetResultWhen_DA393F464AFDD3B6B4F0B68C794949AB
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__TAsyncResult__ClubDetails_X__SetResultWhen_DA393F464AFDD3B6B4F0B68C794949AB : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                         // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_VUVI[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__ClubDetails_X__SetResultWhen_DA393F464AFDD3B6B4F0B68C794949AB");
		return ptr;
	}



	void __TAsyncResult__ClubDetails_X__SetResultWhen_DA393F464AFDD3B6B4F0B68C794949AB();
};

// Class ProjectX.__TAsyncResult__ClubDetails_X__Copy_095318474EDDC98FB8F130AFFBEA7116
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__TAsyncResult__ClubDetails_X__Copy_095318474EDDC98FB8F130AFFBEA7116 : public UObject
{
public:
	class UTAsyncResult__ClubDetails_X*                Instance;                                                  // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__ClubDetails_X__Copy_095318474EDDC98FB8F130AFFBEA7116");
		return ptr;
	}



	void __TAsyncResult__ClubDetails_X__Copy_095318474EDDC98FB8F130AFFBEA7116(class UClubDetails_X* R, class UError* E);
};

// Class ProjectX.__TAsyncResult__PsyNetClientService_X__NotifyOnResult_6941405B40E9B04781512AAB40E61697
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__TAsyncResult__PsyNetClientService_X__NotifyOnResult_6941405B40E9B04781512AAB40E61697 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_CSQ8[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyNetClientService_X__NotifyOnResult_6941405B40E9B04781512AAB40E61697");
		return ptr;
	}



	void __TAsyncResult__PsyNetClientService_X__NotifyOnResult_6941405B40E9B04781512AAB40E61697();
};

// Class ProjectX.__TAsyncResult__PsyNetClientService_X__NotifyOnResultComplete_2227A90E4473A9DD9FE8449614C6CBD3
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__TAsyncResult__PsyNetClientService_X__NotifyOnResultComplete_2227A90E4473A9DD9FE8449614C6CBD3 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_SQ28[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyNetClientService_X__NotifyOnResultComplete_2227A90E4473A9DD9FE8449614C6CBD3");
		return ptr;
	}



	void __TAsyncResult__PsyNetClientService_X__NotifyOnResultComplete_2227A90E4473A9DD9FE8449614C6CBD3(class UError* Err);
};

// Class ProjectX.__TAsyncResult__PsyNetClientService_X__SetResultWhen_CDD7496C41B1C7B5ACD4DFA92A1BFC12
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__TAsyncResult__PsyNetClientService_X__SetResultWhen_CDD7496C41B1C7B5ACD4DFA92A1BFC12 : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                         // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_D55Z[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyNetClientService_X__SetResultWhen_CDD7496C41B1C7B5ACD4DFA92A1BFC12");
		return ptr;
	}



	void __TAsyncResult__PsyNetClientService_X__SetResultWhen_CDD7496C41B1C7B5ACD4DFA92A1BFC12();
};

// Class ProjectX.__TAsyncResult__PsyNetClientService_X__Copy_92B0D0B8430A638912A8AFB9B3613CE5
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__TAsyncResult__PsyNetClientService_X__Copy_92B0D0B8430A638912A8AFB9B3613CE5 : public UObject
{
public:
	class UTAsyncResult__PsyNetClientService_X*        Instance;                                                  // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyNetClientService_X__Copy_92B0D0B8430A638912A8AFB9B3613CE5");
		return ptr;
	}



	void __TAsyncResult__PsyNetClientService_X__Copy_92B0D0B8430A638912A8AFB9B3613CE5(class UPsyNetClientService_X* R, class UError* E);
};

// Class ProjectX.__TAsyncResult__PsyNetMessage_X__NotifyOnResult_EE07909245403F7777E196AFE8406A41
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__TAsyncResult__PsyNetMessage_X__NotifyOnResult_EE07909245403F7777E196AFE8406A41 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_DGXD[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyNetMessage_X__NotifyOnResult_EE07909245403F7777E196AFE8406A41");
		return ptr;
	}



	void __TAsyncResult__PsyNetMessage_X__NotifyOnResult_EE07909245403F7777E196AFE8406A41();
};

// Class ProjectX.__TAsyncResult__PsyNetMessage_X__NotifyOnResultComplete_1BE727A043DE0394B4DA9E8391F1E1EC
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__TAsyncResult__PsyNetMessage_X__NotifyOnResultComplete_1BE727A043DE0394B4DA9E8391F1E1EC : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_OGIX[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyNetMessage_X__NotifyOnResultComplete_1BE727A043DE0394B4DA9E8391F1E1EC");
		return ptr;
	}



	void __TAsyncResult__PsyNetMessage_X__NotifyOnResultComplete_1BE727A043DE0394B4DA9E8391F1E1EC(class UError* Err);
};

// Class ProjectX.__TAsyncResult__PsyNetMessage_X__SetResultWhen_9D6441894FEF04F49C9A1097E86F736B
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__TAsyncResult__PsyNetMessage_X__SetResultWhen_9D6441894FEF04F49C9A1097E86F736B : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                         // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_3T6K[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyNetMessage_X__SetResultWhen_9D6441894FEF04F49C9A1097E86F736B");
		return ptr;
	}



	void __TAsyncResult__PsyNetMessage_X__SetResultWhen_9D6441894FEF04F49C9A1097E86F736B();
};

// Class ProjectX.__TAsyncResult__PsyNetMessage_X__Copy_310BAF87409A29D92EF9E488B0B9A2E1
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__TAsyncResult__PsyNetMessage_X__Copy_310BAF87409A29D92EF9E488B0B9A2E1 : public UObject
{
public:
	class UTAsyncResult__PsyNetMessage_X*              Instance;                                                  // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyNetMessage_X__Copy_310BAF87409A29D92EF9E488B0B9A2E1");
		return ptr;
	}



	void __TAsyncResult__PsyNetMessage_X__Copy_310BAF87409A29D92EF9E488B0B9A2E1(class UPsyNetMessage_X* R, class UError* E);
};

// Class ProjectX.TAsyncResult__Texture2DDynamic
// 0x0050 (FullSize[0x0120] - InheritedSize[0x00D0])
class UTAsyncResult__Texture2DDynamic : public UAsyncTask
{
public:
	class UTexture2DDynamic*                           Result;                                                    // 0x00D0(0x0008) (PrivateWrite)
	struct FScriptDelegate                             __EventResult__Delegate;                                   // 0x00D8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_0LDR[0xC];                                     // 0x00D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventResultComplete__Delegate;                           // 0x00F0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_OVHU[0xC];                                     // 0x00F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __ResultDelegate__Delegate;                                // 0x0108(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_RYTO[0xC];                                     // 0x0108(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TAsyncResult__Texture2DDynamic");
		return ptr;
	}



	class UTAsyncResult__Texture2DDynamic* CreateResultError(class UError* InError);
	class UTAsyncResult__Texture2DDynamic* CreateResult(class UTexture2DDynamic* InResult);
	class UTAsyncResult__Texture2DDynamic* Copy();
	void ClearCallbacks();
	class UTAsyncResult__Texture2DDynamic* SetResultWhen(class UAsyncTask* Other, const struct FScriptDelegate& GetResultDelegate);
	class UTAsyncResult__Texture2DDynamic* SetResult(class UTexture2DDynamic* InResult, class UError* InError);
	class UTAsyncResult__Texture2DDynamic* NotifyOnResultComplete(const struct FScriptDelegate& Callback);
	class UTAsyncResult__Texture2DDynamic* NotifyOnResult(const struct FScriptDelegate& Callback);
	class UTexture2DDynamic* ResultDelegate();
	void EventResultComplete(class UTexture2DDynamic* OutResult, class UError* OutError);
	void EventResult(class UTexture2DDynamic* OutResult);
};

// Class ProjectX.PartyMessage_GetPlatformParty_X
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UPartyMessage_GetPlatformParty_X : public UPartyMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_GetPlatformParty_X");
		return ptr;
	}



};

// Class ProjectX.__PartySequence_InvitedToPlatformParty_X__HandlePlayerInvited_84DAF6214D2133B49341C2B739D49F29
// 0x0058 (FullSize[0x00B8] - InheritedSize[0x0060])
class U__PartySequence_InvitedToPlatformParty_X__HandlePlayerInvited_84DAF6214D2133B49341C2B739D49F29 : public UObject
{
public:
	struct FUniqueLobbyId                              InLobbyId;                                                 // 0x0060(0x0010)
	struct FUniqueNetId                                FriendId;                                                  // 0x0070(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PartySequence_InvitedToPlatformParty_X__HandlePlayerInvited_84DAF6214D2133B49341C2B739D49F29");
		return ptr;
	}



	void __PartySequence_InvitedToPlatformParty_X__HandlePlayerInvited_84DAF6214D2133B49341C2B739D49F29();
};

// Class ProjectX.__PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedPrompt_8A4EC15541F588D4071D6B97D4C25FB2
// 0x0058 (FullSize[0x00B8] - InheritedSize[0x0060])
class U__PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedPrompt_8A4EC15541F588D4071D6B97D4C25FB2 : public UObject
{
public:
	struct FUniqueLobbyId                              InLobbyId;                                                 // 0x0060(0x0010)
	struct FUniqueNetId                                InviterId;                                                 // 0x0070(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedPrompt_8A4EC15541F588D4071D6B97D4C25FB2");
		return ptr;
	}



	void __PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedPrompt_8A4EC15541F588D4071D6B97D4C25FB2();
};

// Class ProjectX.PartyMessage_AcceptInviteToTrade_X
// 0x005C (FullSize[0x0104] - InheritedSize[0x00A8])
class UPartyMessage_AcceptInviteToTrade_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                InviteMemberId;                                            // 0x00A8(0x0048) (NeedCtorLink)
	unsigned long                                      bInviteAccepted : 1;                                       // 0x00F0(0x0001) BIT_FIELD
	struct FGuid                                       TradeId;                                                   // 0x00F4(0x0010)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_AcceptInviteToTrade_X");
		return ptr;
	}



	class UPartyMessage_AcceptInviteToTrade_X* SetTradeId(const struct FGuid& InTradeId);
	class UPartyMessage_AcceptInviteToTrade_X* SetInviteAccepted(bool bInInviteAccepted);
	class UPartyMessage_AcceptInviteToTrade_X* SetInviteMemberId(const struct FUniqueNetId& InMemberId);
};

// Class ProjectX.PartyMessage_SetPlatformParty_X
// 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
class UPartyMessage_SetPlatformParty_X : public UPartyMessage_X
{
public:
	struct FUniqueLobbyId                              PlatformPartyID;                                           // 0x00A8(0x0010)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_SetPlatformParty_X");
		return ptr;
	}



};

// Class ProjectX.PartyMetrics_X
// 0x000C (FullSize[0x008C] - InheritedSize[0x0080])
class UPartyMetrics_X : public UMetricsGroup_X
{
public:
	struct FPartyMetricsData                           PartyData;                                                 // 0x0080(0x000C) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMetrics_X");
		return ptr;
	}



	void PartyChannelError(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID, int MissingMessageID);
	void PartyMessage(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID, const struct FName& MessageType);
	void PartyChanged(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID, bool bLeader, int PartySize, int LocalPlayers, int RemotePlayers);
	struct FPartyMetricsData CreatePartyMetricsData(class UOnlineGameParty_X* Party);
	void RecordPartyChanged(class UOnlineGameParty_X* Party);
	void PartyError(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID, const struct FString& Error);
	void PartyKickRemotePlayer(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID, const struct FString& Reason);
	void PartyKickLocalPlayer(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID, const struct FString& Reason);
	void PartyLeave(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID, const struct FString& Reason);
	void PartyCreationError(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID, const struct FString& Error);
	void PartyCreated(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID);
};

// Class ProjectX.__OnlineGameParty_X__HandleConfirmJoinGame_2B9968F3472953D15FFBD4B3FD55D102
// 0x0068 (FullSize[0x00C8] - InheritedSize[0x0060])
class U__OnlineGameParty_X__HandleConfirmJoinGame_2B9968F3472953D15FFBD4B3FD55D102 : public UObject
{
public:
	struct FPartyJoinMatchSettings                     InSettings;                                                // 0x0060(0x0068) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameParty_X__HandleConfirmJoinGame_2B9968F3472953D15FFBD4B3FD55D102");
		return ptr;
	}



	void __OnlineGameParty_X__HandleConfirmJoinGame_2B9968F3472953D15FFBD4B3FD55D102();
};

// Class ProjectX.PartyJoinedEvent_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPartyJoinedEvent_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyJoinedEvent_X");
		return ptr;
	}



};

// Class ProjectX.__OnlineGameParty_X__GetPlayersWithPrimaryMemberID_DC753B7B4C199E77CE61AA900142F36B
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class U__OnlineGameParty_X__GetPlayersWithPrimaryMemberID_DC753B7B4C199E77CE61AA900142F36B : public UObject
{
public:
	struct FUniqueNetId                                InPrimaryID;                                               // 0x0060(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameParty_X__GetPlayersWithPrimaryMemberID_DC753B7B4C199E77CE61AA900142F36B");
		return ptr;
	}



	bool __OnlineGameParty_X__GetPlayersWithPrimaryMemberID_DC753B7B4C199E77CE61AA900142F36B(const struct FPartyMember& Member);
};

// Class ProjectX.__OnlineGameParty_X__HasMultiplePlatforms_79ABAF4A42D6280C53A4BC941AEE02CB
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class U__OnlineGameParty_X__HasMultiplePlatforms_79ABAF4A42D6280C53A4BC941AEE02CB : public UObject
{
public:
	TArray<TEnumAsByte<Core_EOnlinePlatform>>          PartyLeaderCrossPlayGroup;                                 // 0x0060(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameParty_X__HasMultiplePlatforms_79ABAF4A42D6280C53A4BC941AEE02CB");
		return ptr;
	}



	bool __OnlineGameParty_X__HasMultiplePlatforms_79ABAF4A42D6280C53A4BC941AEE02CB(const struct FPartyMember& P);
};

// Class ProjectX.__OnlineGameSkill_X__ClearSkill_3B17562545B3BAC717555DA051F42E51
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class U__OnlineGameSkill_X__ClearSkill_3B17562545B3BAC717555DA051F42E51 : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0060(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameSkill_X__ClearSkill_3B17562545B3BAC717555DA051F42E51");
		return ptr;
	}



	void __OnlineGameSkill_X__ClearSkill_3B17562545B3BAC717555DA051F42E51(class UPlaylistSkillCache_X* P);
};

// Class ProjectX.__OnlineGameSkill_X__ClearPartyMembersSkill_82C205794E5F61D6C80097A310C9C763
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class U__OnlineGameSkill_X__ClearPartyMembersSkill_82C205794E5F61D6C80097A310C9C763 : public UObject
{
public:
	struct FUniqueNetId                                PrimaryPlayerId;                                           // 0x0060(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameSkill_X__ClearPartyMembersSkill_82C205794E5F61D6C80097A310C9C763");
		return ptr;
	}



	bool __OnlineGameSkill_X__ClearPartyMembersSkill_82C205794E5F61D6C80097A310C9C763(const struct FPartyMember& Member);
};

// Class ProjectX.RPC_UpdateLeaderboard_X
// 0x0024 (FullSize[0x010C] - InheritedSize[0x00E8])
class URPC_UpdateLeaderboard_X : public URPC_X
{
public:
	TArray<struct FUploadStatDataSet>                  Updates;                                                   // 0x00E8(0x0010) (NeedCtorLink, PrivateWrite)
	struct FString                                     MatchGUID;                                                 // 0x00F8(0x0010) (NeedCtorLink, PrivateWrite)
	int                                                PlaylistId;                                                // 0x0108(0x0004) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_UpdateLeaderboard_X");
		return ptr;
	}



	class URPC_UpdateLeaderboard_X* SetPlaylistID(int InID);
	class URPC_UpdateLeaderboard_X* SetMatchGUID(const struct FString& InGuid);
	class URPC_UpdateLeaderboard_X* SetUpdates(TArray<struct FUploadStatDataSet>* InUpdates);
};

// Class ProjectX.WordFilterConfig_X
// 0x0030 (FullSize[0x00A8] - InheritedSize[0x0078])
class UWordFilterConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bSanitizeEntirePhrase : 1;                                 // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned long                                      PsyNetFilterEnabled : 1;                                   // 0x0078(0x0001) BIT_FIELD (Edit)
	int                                                NameHistoryCacheLength;                                    // 0x007C(0x0004) (Edit)
	TArray<TEnumAsByte<ProjectX_EWordFilterUsage>>     IgnoreFilterList;                                          // 0x0080(0x0010) (Edit, Config, NeedCtorLink)
	TArray<TEnumAsByte<ProjectX_EWordFilterUsage>>     PlatformFilterList;                                        // 0x0090(0x0010) (Edit, Config, NeedCtorLink)
	float                                              PsyNetWordFilterBatchDelay;                                // 0x00A0(0x0004) (Edit)
	int                                                PsyNetWordFilterBatchMaxSize;                              // 0x00A4(0x0004) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.WordFilterConfig_X");
		return ptr;
	}



};

// Class ProjectX.__OnlineGameWordFilter_X__InternalSanitize_AB7848BE43E6457FB82C61A5C403A8E9
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class U__OnlineGameWordFilter_X__InternalSanitize_AB7848BE43E6457FB82C61A5C403A8E9 : public UObject
{
public:
	struct FString                                     Id;                                                        // 0x0060(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameWordFilter_X__InternalSanitize_AB7848BE43E6457FB82C61A5C403A8E9");
		return ptr;
	}



	void __OnlineGameWordFilter_X__InternalSanitize_AB7848BE43E6457FB82C61A5C403A8E9(const struct FWordFilterResult& Result);
};

// Class ProjectX.PsyNetWordFilter_X
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UPsyNetWordFilter_X : public UComponent
{
public:
	class UWordFilterConfig_X*                         Config;                                                    // 0x0070(0x0008) (Edit)
	class URPC_FilterContent_X*                        PendingFilterRPC;                                          // 0x0078(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetWordFilter_X");
		return ptr;
	}



	void __PsyNetWordFilter_X__WordFilterSanitizeString_66C117BC491B1455DCE1BF82168DA56C(class URPC_FilterContent_X* RPC);
	void HandlePsyNetWordFilterFail(class URPC_FilterContent_X* RPC, struct FWordFilterResult* StructInitializer_0344081748830B386427A0992217361E);
	void HandlePsyNetWordFilterSuccess(class URPC_FilterContent_X* RPC, struct FWordFilterResult* StructInitializer_E1C513A94078596B777A52B1C25DC37A);
	void HandlePsyNetWordFilter(class URPC_FilterContent_X* RPC);
	void SendPendingFilterRPC();
	bool WordFilterSanitizeString(const struct FString& Comment, const struct FScriptDelegate& SanitizeDelegate, const struct FUniqueNetId& PlayerID);
};

// Class ProjectX.BanMessage_X
// 0x00A8 (FullSize[0x0108] - InheritedSize[0x0060])
class UBanMessage_X : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0060(0x0048) (NeedCtorLink, DataBinding)
	TEnumAsByte<ProjectX_EBanType>                     BanType;                                                   // 0x00A8(0x0001) (DataBinding)
	TEnumAsByte<ProjectX_ESeverityType>                SeverityType;                                              // 0x00A9(0x0001) (DataBinding)
	unsigned char                                      UnknownData_3V57[0x6];                                     // 0x00AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Title;                                                     // 0x00B0(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     Body;                                                      // 0x00C0(0x0010) (NeedCtorLink, DataBinding)
	int                                                BannedMinutes;                                             // 0x00D0(0x0004) (DataBinding)
	unsigned long                                      bContributedToBan : 1;                                     // 0x00D4(0x0001) BIT_FIELD (DataBinding)
	TArray<struct FString>                             Citations;                                                 // 0x00D8(0x0010) (NeedCtorLink)
	float                                              BannedUntilTime;                                           // 0x00E8(0x0004) (DataBinding)
	unsigned char                                      UnknownData_ANT8[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             __EventBanEnded__Delegate;                                 // 0x00F0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_9NQJ[0xC];                                     // 0x00EC(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.BanMessage_X");
		return ptr;
	}



	void __BanMessage_X__Init_34BC2876402E28C203363E92B7A9FF44();
	bool IsPermanentlyBanned();
	bool IsBanned();
	int GetMinutesRemaining();
	float GetSecondsRemaining();
	void Init();
	void EventBanEnded(class UBanMessage_X* BanMessage);
};

// Class ProjectX.RPC_LoginAuthPlayer_X
// 0x0110 (FullSize[0x01F8] - InheritedSize[0x00E8])
class URPC_LoginAuthPlayer_X : public URPC_X
{
public:
	struct FString                                     Platform;                                                  // 0x00E8(0x0010) (NeedCtorLink, PrivateWrite)
	struct FString                                     PlayerName;                                                // 0x00F8(0x0010) (NeedCtorLink, PrivateWrite)
	struct FString                                     PlayerID;                                                  // 0x0108(0x0010) (NeedCtorLink, PrivateWrite)
	struct FString                                     Language;                                                  // 0x0118(0x0010) (NeedCtorLink, PrivateWrite)
	struct FString                                     AuthTicket;                                                // 0x0128(0x0010) (NeedCtorLink, PrivateWrite)
	struct FString                                     BuildRegion;                                               // 0x0138(0x0010) (NeedCtorLink, PrivateWrite)
	struct FName                                       FeatureSet;                                                // 0x0148(0x0008) (PrivateWrite)
	unsigned long                                      bSkipAuth : 1;                                             // 0x0150(0x0001) BIT_FIELD (PrivateWrite)
	unsigned long                                      bSetAsPrimaryAccount : 1;                                  // 0x0150(0x0001) BIT_FIELD (PrivateWrite)
	unsigned long                                      UseWebSocket : 1;                                          // 0x0150(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned long                                      IsLastChanceAuthBan : 1;                                   // 0x0150(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownData_ATLO[0x4];                                     // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EpicAuthTicket;                                            // 0x0158(0x0010) (NeedCtorLink, PrivateWrite)
	struct FString                                     EpicAccountId;                                             // 0x0168(0x0010) (NeedCtorLink, PrivateWrite)
	struct FString                                     SessionId;                                                 // 0x0178(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FString                                     PsyToken;                                                  // 0x0188(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	class UBanMessage_X*                               BanMessage;                                                // 0x0198(0x0008) (Transient, PrivateWrite)
	struct FString                                     VerifiedPlayerName;                                        // 0x01A0(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FString                                     PerConURL;                                                 // 0x01B0(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FString                                     PerConURLv2;                                               // 0x01C0(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FPsyTag                                     PsyTag;                                                    // 0x01D0(0x0018) (Transient, NeedCtorLink, PrivateWrite)
	TArray<struct FName>                               CountryRestrictions;                                       // 0x01E8(0x0010) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_LoginAuthPlayer_X");
		return ptr;
	}



	class URPC_LoginAuthPlayer_X* SetAsPrimaryAccount(bool bInPrimary);
	class URPC_LoginAuthPlayer_X* SetEpicAccountId(const struct FString& InEpicAccountID);
	class URPC_LoginAuthPlayer_X* SetEpicAuthTicket(const struct FString& InEpicAuthTicket);
	class URPC_LoginAuthPlayer_X* SetFeatureSet(const struct FName& InFeatureSet);
	class URPC_LoginAuthPlayer_X* SetBuildRegion(const struct FString& InBuildRegion);
	class URPC_LoginAuthPlayer_X* SetAuthTicket(const struct FString& InAuthTicket);
	class URPC_LoginAuthPlayer_X* SetLanguage(const struct FString& InLanguage);
	class URPC_LoginAuthPlayer_X* SetPlayerID(const struct FString& InPlayerId);
	class URPC_LoginAuthPlayer_X* SetPlayerName(const struct FString& InPlayerName);
	class URPC_LoginAuthPlayer_X* SetPlatform(const struct FString& InPlatform);
};

// Class ProjectX.OnlinePlayerStorage_X
// 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
class UOnlinePlayerStorage_X : public UOnline_X
{
public:
	class UOnlinePlayerStorageQueue_X*                 Queue;                                                     // 0x0098(0x0008) (PrivateWrite)
	class UOnlinePlayerStorageSync_X*                  Sync;                                                      // 0x00A0(0x0008) (PrivateWrite)
	class UOnlinePlayerStorageManifest_X*              Manifest;                                                  // 0x00A8(0x0008) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayerStorage_X");
		return ptr;
	}



	void OnInit();
};

// Class ProjectX.EpicErrors_X
// 0x0098 (FullSize[0x0118] - InheritedSize[0x0080])
class UEpicErrors_X : public UErrorList
{
public:
	class UErrorType*                                  EpicAccountNotFound;                                       // 0x0080(0x0008) (Const)
	class UErrorType*                                  EpicAccountLinkingFailed;                                  // 0x0088(0x0008) (Const)
	class UErrorType*                                  EOSFailedToConnect;                                        // 0x0090(0x0008) (Const)
	class UErrorType*                                  EOSFailedToConnectSplitscreen;                             // 0x0098(0x0008) (Const)
	class UErrorType*                                  NotLoggedInToEOS;                                          // 0x00A0(0x0008) (Const)
	class UErrorType*                                  EOSUpdateRequired;                                         // 0x00A8(0x0008) (Const)
	class UErrorType*                                  PinGrantCodeExpired;                                       // 0x00B0(0x0008) (Const)
	class UErrorType*                                  PrimaryAccountNotSet;                                      // 0x00B8(0x0008) (Const)
	class UErrorType*                                  EpicInvalidPlayer;                                         // 0x00C0(0x0008) (Const)
	class UErrorType*                                  EpicRemoteFriendLimitReached;                              // 0x00C8(0x0008) (Const)
	class UErrorType*                                  EpicMaxOutgoingInvitesReached;                             // 0x00D0(0x0008) (Const)
	class UErrorType*                                  EpicLocalFriendLimitReached;                               // 0x00D8(0x0008) (Const)
	class UErrorType*                                  EpicAccountLookupFailed;                                   // 0x00E0(0x0008) (Const)
	class UErrorType*                                  EpicAccountCreationFailed;                                 // 0x00E8(0x0008) (Const)
	class UErrorType*                                  EpicAccountRestricted;                                     // 0x00F0(0x0008) (Const)
	class UErrorType*                                  EpicPartyInviteFailed;                                     // 0x00F8(0x0008) (Const)
	class UErrorType*                                  IncorrectSaveLoaded;                                       // 0x0100(0x0008) (Const)
	class UErrorType*                                  EpicSocialBanned;                                          // 0x0108(0x0008) (Const)
	class UErrorType*                                  MaxPendingFriendInvitesReached;                            // 0x0110(0x0008) (Const)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EpicErrors_X");
		return ptr;
	}



};

// Class ProjectX.PsyNetService_FriendPsyTagUpdated_X
// 0x0060 (FullSize[0x00F0] - InheritedSize[0x0090])
class UPsyNetService_FriendPsyTagUpdated_X : public UPsyNetClientService_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0090(0x0048) (Const, NeedCtorLink)
	struct FPsyTag                                     PsyTag;                                                    // 0x00D8(0x0018) (Const, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_FriendPsyTagUpdated_X");
		return ptr;
	}



};

// Class ProjectX.OSSConfig_X
// 0x0004 (FullSize[0x007C] - InheritedSize[0x0078])
class UOSSConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bEnablePresence : 1;                                       // 0x0078(0x0001) BIT_FIELD (Edit, Config)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OSSConfig_X");
		return ptr;
	}



};

// Class ProjectX.RPC_PsyNetSendIndividualChat_X
// 0x0058 (FullSize[0x0140] - InheritedSize[0x00E8])
class URPC_PsyNetSendIndividualChat_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x00E8(0x0048) (NeedCtorLink)
	struct FString                                     Message;                                                   // 0x0130(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PsyNetSendIndividualChat_X");
		return ptr;
	}



	class URPC_PsyNetSendIndividualChat_X* SetMessage(const struct FString& InMessage);
	class URPC_PsyNetSendIndividualChat_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.RetryDelayer_X
// 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
class URetryDelayer_X : public UComponent
{
public:
	TArray<float>                                      RetryDelays;                                               // 0x0070(0x0010) (Edit, NeedCtorLink)
	float                                              RepeatBackoff;                                             // 0x0080(0x0004) (Edit)
	int                                                RepeatCycleCount;                                          // 0x0084(0x0004) (Edit)
	unsigned long                                      bRepeatUntilSuccess : 1;                                   // 0x0088(0x0001) BIT_FIELD (Edit)
	int                                                FailedAttempts;                                            // 0x008C(0x0004)
	int                                                FailedCycles;                                              // 0x0090(0x0004)
	unsigned char                                      UnknownData_TV4M[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             __RepeatedDelegate__Delegate;                              // 0x0098(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_JVWU[0xC];                                     // 0x0094(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __NotifyAbandondedDelegate__Delegate;                      // 0x00B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_IBEN[0xC];                                     // 0x00B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RetryDelayer_X");
		return ptr;
	}



	void Abandon();
	void ExecuteNextStep();
	void Cancel();
	void RetryOrAbandon();
	void Start(const struct FScriptDelegate& ToRepeat, const struct FScriptDelegate& Abandoned);
	void NotifyAbandondedDelegate();
	void RepeatedDelegate();
};

// Class ProjectX.RPC_UnblockPlayer_X
// 0x0048 (FullSize[0x0130] - InheritedSize[0x00E8])
class URPC_UnblockPlayer_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x00E8(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_UnblockPlayer_X");
		return ptr;
	}



	class URPC_UnblockPlayer_X* SetUnblockedPlayerId(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.__OnlinePlayerFriends_X__BlockPlayer_D18CE25D4F975D58EAF6C38D608033A8
// 0x0040 (FullSize[0x00A0] - InheritedSize[0x0060])
class U__OnlinePlayerFriends_X__BlockPlayer_D18CE25D4F975D58EAF6C38D608033A8 : public UObject
{
public:
	struct FString                                     BlockedPlayerName;                                         // 0x0060(0x0010) (NeedCtorLink)
	struct FPsyTag                                     BlockedTag;                                                // 0x0070(0x0018) (NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                  // 0x0088(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_RLTT[0xC];                                     // 0x0088(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlinePlayerFriends_X__BlockPlayer_D18CE25D4F975D58EAF6C38D608033A8");
		return ptr;
	}



	void __OnlinePlayerFriends_X__BlockPlayer_0E21BC0D4D7F1B862332968B626EB893(class URPC_BlockPlayer_X* RPC);
	void __OnlinePlayerFriends_X__BlockPlayer_D18CE25D4F975D58EAF6C38D608033A8(class URPC_BlockPlayer_X* RPC, struct FOnlineFriend* StructInitializer_6EDE42ED4ABF1D7B62CE80AA2E71138D);
};

// Class ProjectX.PostProcessManager_X
// 0x0070 (FullSize[0x00D0] - InheritedSize[0x0060])
class UPostProcessManager_X : public UObject
{
public:
	class ULocalPlayer*                                PlayerOwner;                                               // 0x0060(0x0008) (Transient, ProtectedWrite)
	TArray<class UMaterialEffect_X*>                   ActiveEffects;                                             // 0x0068(0x0010) (Transient, NeedCtorLink)
	unsigned long                                      bNeedsReset : 1;                                           // 0x0078(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownData_1BT9[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPPEffectDefaults>                   EffectDefaults;                                            // 0x0080(0x0010) (Edit, NeedCtorLink)
	TArray<struct FPPPersistentEffectDefaults>         PersistentEffectDefaults;                                  // 0x0090(0x0010) (Edit, NeedCtorLink)
	TArray<struct FPPChainInfo>                        ActiveChains;                                              // 0x00A0(0x0010) (Transient, NeedCtorLink)
	TArray<struct FPPChainInfo>                        ChainDefaults;                                             // 0x00B0(0x0010) (Edit, NeedCtorLink)
	TArray<struct FPostProcessOverride>                PostProcessOverrides;                                      // 0x00C0(0x0010) (Edit, NeedCtorLink, ProtectedWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PostProcessManager_X");
		return ptr;
	}



	int GetNextPostProcessOverride();
	void TogglePostProcessSettings(const struct FName& Id, bool bEnabled);
	void SetMaterialEffectValue(const struct FName& EffectName, float NewValue);
	void ResetEffectsToDefaults(bool bRebuildPostProcessChains);
	void ToggleChainNamed(class UPostProcessChain* Chain, const struct FName& ChainName, bool bEnabled);
	void StopChainNamed(const struct FName& ChainName);
	void StartChainNamed(class UPostProcessChain* Chain, const struct FName& ChainName);
	bool RemovePostProcessChain(int OldChain);
	int AddPostProcessChain(class UPostProcessChain* NewChain, const struct FName& ChainName);
	class UMaterialEffect_X* GetEffect(const struct FName& EffectName);
	void TickPostProcess(float dt);
	void ToggleEffect(class UMaterialEffect_X* Effect, bool bEnabled);
	void StopEffectNamed(const struct FName& EffectName);
	void StartEffectNamed(const struct FName& EffectName);
	void ToggleEffectNamed(const struct FName& EffectName, bool bEnabled);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	class UUberPostProcessEffect* GetUberPostProcessEffect();
	class UPostProcessChain* GetPlayerChain();
	void Exit();
	void Init(class APlayerController_X* NewOwner);
};

// Class ProjectX.PsyNetMetrics_X
// 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
class UPsyNetMetrics_X : public UMetricsGroup_X
{
public:
	TArray<struct FServiceMetricsData>                 ServiceData;                                               // 0x0080(0x0010) (NeedCtorLink)
	TArray<struct FServiceErrorData>                   ErrorData;                                                 // 0x0090(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetMetrics_X");
		return ptr;
	}



	void ServiceErrors(TArray<struct FServiceErrorData> Errors);
	void ServiceCalls(TArray<struct FServiceMetricsData> Services);
	void HandleMapChange(const struct FString& M);
	void RecordServiceError(const struct FString& Service, class UError* Error);
	void RecordServiceCall(const struct FString& Service, float Latency);
};

// Class ProjectX.__RPCQueue_X__CreateBatchSingleRPC_BC179C914AAFAD81ECB4D794146DD96D
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__RPCQueue_X__CreateBatchSingleRPC_BC179C914AAFAD81ECB4D794146DD96D : public UObject
{
public:
	class URPCBatch_X*                                 Batch;                                                     // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__RPCQueue_X__CreateBatchSingleRPC_BC179C914AAFAD81ECB4D794146DD96D");
		return ptr;
	}



	void __RPCQueue_X__CreateBatchSingleRPC_BC179C914AAFAD81ECB4D794146DD96D(class UPsyNetMessage_X* Response, class UError* Error);
};

// Class ProjectX.TAsyncResult__PsyNetMessage_X
// 0x0050 (FullSize[0x0120] - InheritedSize[0x00D0])
class UTAsyncResult__PsyNetMessage_X : public UAsyncTask
{
public:
	class UPsyNetMessage_X*                            Result;                                                    // 0x00D0(0x0008) (PrivateWrite)
	struct FScriptDelegate                             __EventResult__Delegate;                                   // 0x00D8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_ZJ52[0xC];                                     // 0x00D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventResultComplete__Delegate;                           // 0x00F0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_FYO6[0xC];                                     // 0x00F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __ResultDelegate__Delegate;                                // 0x0108(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_F214[0xC];                                     // 0x0108(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TAsyncResult__PsyNetMessage_X");
		return ptr;
	}



	class UTAsyncResult__PsyNetMessage_X* CreateResultError(class UError* InError);
	class UTAsyncResult__PsyNetMessage_X* CreateResult(class UPsyNetMessage_X* InResult);
	class UTAsyncResult__PsyNetMessage_X* Copy();
	void ClearCallbacks();
	class UTAsyncResult__PsyNetMessage_X* SetResultWhen(class UAsyncTask* Other, const struct FScriptDelegate& GetResultDelegate);
	class UTAsyncResult__PsyNetMessage_X* SetResult(class UPsyNetMessage_X* InResult, class UError* InError);
	class UTAsyncResult__PsyNetMessage_X* NotifyOnResultComplete(const struct FScriptDelegate& Callback);
	class UTAsyncResult__PsyNetMessage_X* NotifyOnResult(const struct FScriptDelegate& Callback);
	class UPsyNetMessage_X* ResultDelegate();
	void EventResultComplete(class UPsyNetMessage_X* OutResult, class UError* OutError);
	void EventResult(class UPsyNetMessage_X* OutResult);
};

// Class ProjectX.__RPCQueue_X__CreateBatch_742F849A434A0A3A7A7737976156725C
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__RPCQueue_X__CreateBatch_742F849A434A0A3A7A7737976156725C : public UObject
{
public:
	class URPCBatch_X*                                 Batch;                                                     // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__RPCQueue_X__CreateBatch_742F849A434A0A3A7A7737976156725C");
		return ptr;
	}



	void __RPCQueue_X__CreateBatch_742F849A434A0A3A7A7737976156725C(class UPsyNetMessage_X* Response, class UError* Error);
};

// Class ProjectX.RPC_ReportCheater_X
// 0x0058 (FullSize[0x0140] - InheritedSize[0x00E8])
class URPC_ReportCheater_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x00E8(0x0048) (NeedCtorLink, PrivateWrite)
	struct FString                                     Reason;                                                    // 0x0130(0x0010) (NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_ReportCheater_X");
		return ptr;
	}



	class URPC_ReportCheater_X* SetReason(const struct FString& InReason);
	class URPC_ReportCheater_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.PrimaryAuthLoggedIn_TA
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UPrimaryAuthLoggedIn_TA : public UObject
{
public:
	class UPsyNetConnection_X*                         PrimaryAuthedConnection;                                   // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PrimaryAuthLoggedIn_TA");
		return ptr;
	}



};

// Class ProjectX.ReservationsSettingUpMatchMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UReservationsSettingUpMatchMessage_X : public UBeaconMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsSettingUpMatchMessage_X");
		return ptr;
	}



};

// Class ProjectX.__RPC_X__CreateTask_824C210E47B9AE4E739611B9D602A3AB
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__RPC_X__CreateTask_824C210E47B9AE4E739611B9D602A3AB : public UObject
{
public:
	struct FScriptDelegate                             InCallback;                                                // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_CZ2H[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__RPC_X__CreateTask_824C210E47B9AE4E739611B9D602A3AB");
		return ptr;
	}



	void __RPC_X__CreateTask_824C210E47B9AE4E739611B9D602A3AB(class UError* Err);
};

// Class ProjectX.RPC_Test_X
// 0x0170 (FullSize[0x0258] - InheritedSize[0x00E8])
class URPC_Test_X : public URPC_X
{
public:
	struct FString                                     TestParamLocalizedString;                                  // 0x00E8(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     TestParamString;                                           // 0x00F8(0x0010) (NeedCtorLink)
	struct FRPCTestParam                               TestParamStruct;                                           // 0x0108(0x0088) (NeedCtorLink)
	TArray<struct FRPCTestParam>                       TestParamStructs;                                          // 0x0190(0x0010) (NeedCtorLink)
	struct FString                                     TestResultLocalizedString;                                 // 0x01A0(0x0010) (Transient, NeedCtorLink)
	struct FString                                     TestResultString;                                          // 0x01B0(0x0010) (Transient, NeedCtorLink)
	struct FRPCTestParam                               TestResultStruct;                                          // 0x01C0(0x0088) (Transient, NeedCtorLink)
	TArray<struct FRPCTestParam>                       TestResultStructs;                                         // 0x0248(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_Test_X");
		return ptr;
	}



	bool Check(bool Assertion, const struct FString& Message);
	bool CheckParamArraysMatch(TArray<struct FRPCTestParam> A, TArray<struct FRPCTestParam> B, const struct FString& Message);
	bool CheckItemArraysMatch(TArray<struct FRPCTestItem> A, TArray<struct FRPCTestItem> B, const struct FString& Message);
	bool CheckStringArraysMatch(TArray<struct FString> A, TArray<struct FString> B, const struct FString& Message);
	bool CheckItemsMatch(const struct FRPCTestItem& A, const struct FRPCTestItem& B, const struct FString& Message);
	bool CheckParamsMatch(const struct FRPCTestParam& A, const struct FRPCTestParam& B, const struct FString& Message);
	bool ValidateResults();
	void OnComplete();
	TArray<struct FRPCTestParam> GetRandomTestParams();
	struct FRPCTestParam GetRandomTestParam();
	TArray<struct FRPCTestItem> GetRandomTestItems();
	struct FRPCTestItem GetRandomTestItem();
	void Init();
};

// Class ProjectX.TestsHelper_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UTestsHelper_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TestsHelper_X");
		return ptr;
	}



	struct FString GetRandomUppercaseString();
	TArray<struct FString> GetRandomStringArray();
	struct FString GetRandomString();
};

// Class ProjectX.SeqAct_SpawnArchetype_X
// 0x0040 (FullSize[0x01A0] - InheritedSize[0x0160])
class USeqAct_SpawnArchetype_X : public USequenceAction
{
public:
	class AActor*                                      ActorArchetype;                                            // 0x0160(0x0008) (Edit)
	struct FVector                                     Velocity;                                                  // 0x0168(0x000C) (Edit)
	float                                              Speed;                                                     // 0x0174(0x0004) (Edit)
	TArray<class AActor*>                              SpawnOwners;                                               // 0x0178(0x0010) (NeedCtorLink)
	TArray<class AActor*>                              SpawnPoints;                                               // 0x0188(0x0010) (NeedCtorLink)
	class AActor*                                      Spawned;                                                   // 0x0198(0x0008) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SeqAct_SpawnArchetype_X");
		return ptr;
	}



	void Init(class AActor* SpawnedActor);
	void Activated();
};

// Class ProjectX.PsyNetService_Reservation2_X
// 0x0080 (FullSize[0x0110] - InheritedSize[0x0090])
class UPsyNetService_Reservation2_X : public UPsyNetClientService_X
{
public:
	struct FCheckReservationResponse                   Reservation;                                               // 0x0090(0x0080) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_Reservation2_X");
		return ptr;
	}



	struct FServerReservationData GetReservation();
};

// Class ProjectX.RPC_ReservationHeartbeat_X
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class URPC_ReservationHeartbeat_X : public URPC_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_ReservationHeartbeat_X");
		return ptr;
	}



};

// Class ProjectX.__CrossplayConfig_X__GetDisabledCrossplayGroup_5C683D644E13ABE7FF3B4783633D8EE6
// 0x0001 (FullSize[0x0061] - InheritedSize[0x0060])
class U__CrossplayConfig_X__GetDisabledCrossplayGroup_5C683D644E13ABE7FF3B4783633D8EE6 : public UObject
{
public:
	TEnumAsByte<Core_EOnlinePlatform>                  PlayerPlatform;                                            // 0x0060(0x0001)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__CrossplayConfig_X__GetDisabledCrossplayGroup_5C683D644E13ABE7FF3B4783633D8EE6");
		return ptr;
	}



	bool __CrossplayConfig_X__GetDisabledCrossplayGroup_5C683D644E13ABE7FF3B4783633D8EE6(const struct FCrossplayGroup& P);
};

// Class ProjectX.OnlineResource_X
// 0x00A0 (FullSize[0x0110] - InheritedSize[0x0070])
class UOnlineResource_X : public UComponent
{
public:
	struct FString                                     URL;                                                       // 0x0070(0x0010) (Edit, NeedCtorLink)
	TArray<float>                                      RetryDelays;                                               // 0x0080(0x0010) (Edit, NeedCtorLink)
	float                                              CacheSeconds;                                              // 0x0090(0x0004) (Edit)
	unsigned long                                      bZipResponse : 1;                                          // 0x0094(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bSyncing : 1;                                              // 0x0094(0x0001) BIT_FIELD (Transient, PrivateWrite)
	class UStringMap*                                  Headers;                                                   // 0x0098(0x0008) (Edit, ExportObject, Component, EditInline)
	class UCachedWebData_X*                            CachedData;                                                // 0x00A0(0x0008) (Transient, PrivateWrite)
	int                                                RetryCount;                                                // 0x00A8(0x0004) (Transient)
	float                                              LastSyncTime;                                              // 0x00AC(0x0004) (Transient)
	class UPsyNetRetryConfig_X*                        RetryConfig;                                               // 0x00B0(0x0008)
	struct FString                                     ServiceName;                                               // 0x00B8(0x0010) (Const, NeedCtorLink)
	struct FScriptDelegate                             __EventSyncComplete__Delegate;                             // 0x00C8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_479N[0xC];                                     // 0x00C8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventSyncError__Delegate;                                // 0x00E0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_KWOW[0xC];                                     // 0x00E0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDataChanged__Delegate;                              // 0x00F8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_RU89[0xC];                                     // 0x00F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineResource_X");
		return ptr;
	}



	void SetCachedData(class UCachedWebData_X* NewData);
	bool IsValidNewData(class UCachedWebData_X* Data);
	void ClearRetryTimer();
	void SetRetryTimer(float Delay);
	void UpdateRetryDelays(class UError* SyncError);
	void HandleRetryConfigChanged();
	void HandleSync(class UCachedWebData_X* Data);
	void RetrySync();
	void SyncData(const struct FScriptDelegate& Callback);
	void EventDataChanged(class UOnlineResource_X* DataSync);
	void EventSyncError(class UOnlineResource_X* DataSync, class UError* Error);
	void EventSyncComplete(class UOnlineResource_X* DataSync);
};

// Class ProjectX.RPC_GetGenericDataAll_X
// 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
class URPC_GetGenericDataAll_X : public URPC_X
{
public:
	TArray<struct FGetGenericDataAllData>              GenericData;                                               // 0x00E8(0x0010) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetGenericDataAll_X");
		return ptr;
	}



};

// Class ProjectX.RPC_GetPlayerTitles_X
// 0x0058 (FullSize[0x0140] - InheritedSize[0x00E8])
class URPC_GetPlayerTitles_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x00E8(0x0048) (NeedCtorLink, PrivateWrite)
	TArray<struct FString>                             Titles;                                                    // 0x0130(0x0010) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetPlayerTitles_X");
		return ptr;
	}



	class URPC_GetPlayerTitles_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.RPC_ReportLowFPS_X
// 0x0038 (FullSize[0x0120] - InheritedSize[0x00E8])
class URPC_ReportLowFPS_X : public URPC_X
{
public:
	struct FString                                     IP;                                                        // 0x00E8(0x0010) (NeedCtorLink, PrivateWrite)
	int                                                MachineId;                                                 // 0x00F8(0x0004) (PrivateWrite)
	unsigned char                                      UnknownData_34A9[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ServerId[0x8];                                             // 0x00FC(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_ReportLowFPS_X.ServerId
	struct FString                                     ServerName;                                                // 0x0108(0x0010) (NeedCtorLink, PrivateWrite)
	int                                                NumHumans;                                                 // 0x0118(0x0004) (PrivateWrite)
	int                                                NumBots;                                                   // 0x011C(0x0004) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_ReportLowFPS_X");
		return ptr;
	}



	class URPC_ReportLowFPS_X* SetNumBots(int InNumBots);
	class URPC_ReportLowFPS_X* SetNumHumans(int InNumHumans);
	class URPC_ReportLowFPS_X* SetServerName(const struct FString& InServerName);
	class URPC_ReportLowFPS_X* SetServerID();
	class URPC_ReportLowFPS_X* SetMachineID(int InMachineID);
	class URPC_ReportLowFPS_X* SetIP(const struct FString& InIP);
};

// Class ProjectX.RPC_SetPlayerSkill_X
// 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
class URPC_SetPlayerSkill_X : public URPC_X
{
public:
	int                                                Playlist;                                                  // 0x00E8(0x0004) (PrivateWrite)
	float                                              Mu;                                                        // 0x00EC(0x0004) (PrivateWrite)
	float                                              Sigma;                                                     // 0x00F0(0x0004) (PrivateWrite)
	int                                                MatchesPlayed;                                             // 0x00F4(0x0004) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_SetPlayerSkill_X");
		return ptr;
	}



	class URPC_SetPlayerSkill_X* SetSigma(float InSigma);
	class URPC_SetPlayerSkill_X* SetMu(float InMu);
	class URPC_SetPlayerSkill_X* SetPlaylist(int InPlaylist);
};

// Class ProjectX.RPC_SetPlayerSkillTier_X
// 0x000C (FullSize[0x00F4] - InheritedSize[0x00E8])
class URPC_SetPlayerSkillTier_X : public URPC_X
{
public:
	int                                                Playlist;                                                  // 0x00E8(0x0004) (PrivateWrite)
	int                                                Tier;                                                      // 0x00EC(0x0004) (PrivateWrite)
	int                                                MatchesPlayed;                                             // 0x00F0(0x0004) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_SetPlayerSkillTier_X");
		return ptr;
	}



	class URPC_SetPlayerSkillTier_X* SetMatchesPlayed(int InMatchesPlayed);
	class URPC_SetPlayerSkillTier_X* SetTier(int InTier);
	class URPC_SetPlayerSkillTier_X* SetPlaylist(int InPlaylist);
};

// Class ProjectX.RPC_GetPlayerPermissions_X
// 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
class URPC_GetPlayerPermissions_X : public URPC_X
{
public:
	TArray<struct FUniqueNetId>                        PlayerIDs;                                                 // 0x00E8(0x0010) (NeedCtorLink)
	TArray<struct FPlayerPermissionsReponse>           PlayerPermissions;                                         // 0x00F8(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetPlayerPermissions_X");
		return ptr;
	}



	bool GetPermissionFromString(const struct FName& PermissionName, TEnumAsByte<ProjectX_EOnlinePlayerPermission>* Permission);
	TArray<TEnumAsByte<ProjectX_EOnlinePlayerPermission>> ConvertPermissions(TArray<struct FName> PermissionNames);
	struct FPlayerPermissionsList ConvertPlayerPermissions(const struct FUniqueNetId& PlayerID);
	TArray<struct FPlayerPermissionsList> GetPlayerPermissions(TArray<struct FPlayerPermissionsList>* MapLocal_CA0A018B4E942CDCDCEB80868437BBB4);
	class URPC_GetPlayerPermissions_X* SetPlayers(TArray<struct FUniqueNetId>* InPlayerIDs);
};

// Class ProjectX.PauseStaticDataSync_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPauseStaticDataSync_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PauseStaticDataSync_X");
		return ptr;
	}



};

// Class ProjectX.Stopwatch
// 0x0004 (FullSize[0x0074] - InheritedSize[0x0070])
class UStopwatch : public UComponent
{
public:
	float                                              StartTime;                                                 // 0x0070(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Stopwatch");
		return ptr;
	}



	float Elapsed();
	void Start();
};

// Class ProjectX.PsyNetStaticDataMetrics_X
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UPsyNetStaticDataMetrics_X : public UMetricsGroup_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetStaticDataMetrics_X");
		return ptr;
	}



	void SyncDataTime(float Seconds);
};

// Class ProjectX.WebConfig_X
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class UWebConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bCacheWebImages : 1;                                       // 0x0078(0x0001) BIT_FIELD (Edit, Config)
	unsigned long                                      bZipPsyNetStaticData : 1;                                  // 0x0078(0x0001) BIT_FIELD (Edit, Config)
	float                                              PsyNetStaticDataCacheMinutes;                              // 0x007C(0x0004) (Edit, Config)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.WebConfig_X");
		return ptr;
	}



};

// Class ProjectX.RPC_AddPlayerToRole_X
// 0x0004 (FullSize[0x00EC] - InheritedSize[0x00E8])
class URPC_AddPlayerToRole_X : public URPC_X
{
public:
	int                                                RoleID;                                                    // 0x00E8(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_AddPlayerToRole_X");
		return ptr;
	}



	class URPC_AddPlayerToRole_X* SetRole(TEnumAsByte<ProjectX_EOnlinePlayerRole> Role);
};

// Class ProjectX.RPC_RemovePlayerFromRole_X
// 0x0004 (FullSize[0x00EC] - InheritedSize[0x00E8])
class URPC_RemovePlayerFromRole_X : public URPC_X
{
public:
	int                                                RoleID;                                                    // 0x00E8(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_RemovePlayerFromRole_X");
		return ptr;
	}



	class URPC_RemovePlayerFromRole_X* SetRole(TEnumAsByte<ProjectX_EOnlinePlayerRole> Role);
};

// Class ProjectX.RPC_SetSeasonReward_X
// 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
class URPC_SetSeasonReward_X : public URPC_X
{
public:
	int                                                SeasonLevel;                                               // 0x00E8(0x0004)
	int                                                SeasonLevelWins;                                           // 0x00EC(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_SetSeasonReward_X");
		return ptr;
	}



	class URPC_SetSeasonReward_X* SetReward(int Level, int Wins);
};

// Class ProjectX.TAsyncResult__array_LanServerRecord_X
// 0x0058 (FullSize[0x0128] - InheritedSize[0x00D0])
class UTAsyncResult__array_LanServerRecord_X : public UAsyncTask
{
public:
	TArray<class ULanServerRecord_X*>                  Result;                                                    // 0x00D0(0x0010) (NeedCtorLink, PrivateWrite)
	struct FScriptDelegate                             __EventResult__Delegate;                                   // 0x00E0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_V91A[0xC];                                     // 0x00E0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventResultComplete__Delegate;                           // 0x00F8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_6ATI[0xC];                                     // 0x00F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __ResultDelegate__Delegate;                                // 0x0110(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_YKAX[0xC];                                     // 0x0110(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TAsyncResult__array_LanServerRecord_X");
		return ptr;
	}



	class UTAsyncResult__array_LanServerRecord_X* CreateResultError(class UError* InError);
	class UTAsyncResult__array_LanServerRecord_X* CreateResult(TArray<class ULanServerRecord_X*> InResult);
	class UTAsyncResult__array_LanServerRecord_X* Copy();
	void ClearCallbacks();
	class UTAsyncResult__array_LanServerRecord_X* SetResultWhen(class UAsyncTask* Other, const struct FScriptDelegate& GetResultDelegate);
	class UTAsyncResult__array_LanServerRecord_X* SetResult(TArray<class ULanServerRecord_X*> InResult, class UError* InError);
	class UTAsyncResult__array_LanServerRecord_X* NotifyOnResultComplete(const struct FScriptDelegate& Callback);
	class UTAsyncResult__array_LanServerRecord_X* NotifyOnResult(const struct FScriptDelegate& Callback);
	TArray<class ULanServerRecord_X*> ResultDelegate();
	void EventResultComplete(TArray<class ULanServerRecord_X*> OutResult, class UError* OutError);
	void EventResult(TArray<class ULanServerRecord_X*> OutResult);
};

// Class ProjectX.PartySequence_LeaveParty_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPartySequence_LeaveParty_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartySequence_LeaveParty_X");
		return ptr;
	}



	void LeaveParty(struct FUniqueLobbyId* LobbyId);
};

// Class ProjectX.RPC_PartyChat_X
// 0x0010 (FullSize[0x0108] - InheritedSize[0x00F8])
class URPC_PartyChat_X : public URPC_PartyBase_X
{
public:
	struct FString                                     Message;                                                   // 0x00F8(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyChat_X");
		return ptr;
	}



	class URPC_PartyChat_X* SetText(const struct FString& InText);
};

// Class ProjectX.RPC_PartyCreate_X
// 0x0088 (FullSize[0x0170] - InheritedSize[0x00E8])
class URPC_PartyCreate_X : public URPC_X
{
public:
	unsigned long                                      bForcePartyonix : 1;                                       // 0x00E8(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_O43B[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPsyNetPartyInfo                            Info;                                                      // 0x00F0(0x0070) (Transient, NeedCtorLink)
	TArray<struct FPsyNetPartyMember>                  Members;                                                   // 0x0160(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyCreate_X");
		return ptr;
	}



	class URPC_PartyCreate_X* SetRequirePsyNetParty(bool bValue);
};

// Class ProjectX.ClubInvite_X
// 0x0080 (FullSize[0x00E0] - InheritedSize[0x0060])
class UClubInvite_X : public UObject
{
public:
	unsigned char                                      ClubID[0x8];                                               // 0x0060(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.ClubInvite_X.ClubID
	struct FString                                     ClubName;                                                  // 0x0068(0x0010) (NeedCtorLink)
	struct FString                                     ClubTag;                                                   // 0x0078(0x0010) (NeedCtorLink)
	struct FClubMember                                 InvitedBy;                                                 // 0x0088(0x0058) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ClubInvite_X");
		return ptr;
	}



};

// Class ProjectX.ActionQueue_X
// 0x0038 (FullSize[0x00A8] - InheritedSize[0x0070])
class UActionQueue_X : public UComponent
{
public:
	float                                              ActionsPerSecond;                                          // 0x0070(0x0004) (Edit)
	unsigned char                                      UnknownData_J6MW[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FScriptDelegate>                     Queue;                                                     // 0x0078(0x0010) (NeedCtorLink)
	int                                                QueueIndex;                                                // 0x0088(0x0004)
	unsigned char                                      UnknownData_5V93[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             __ActionDelegate__Delegate;                                // 0x0090(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_RISV[0xC];                                     // 0x008C(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ActionQueue_X");
		return ptr;
	}



	void Tick();
	void Add(const struct FScriptDelegate& Callback);
	void ActionDelegate();
};

// Class ProjectX.AppConfig_X
// 0x0004 (FullSize[0x007C] - InheritedSize[0x0078])
class UAppConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bSpinSleep : 1;                                            // 0x0078(0x0001) BIT_FIELD (Edit, Config)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AppConfig_X");
		return ptr;
	}



	void Undo();
	void Apply();
};

// Class ProjectX.ClubErrors_X
// 0x0098 (FullSize[0x0118] - InheritedSize[0x0080])
class UClubErrors_X : public UErrorList
{
public:
	class UErrorType*                                  ClubNotFound;                                              // 0x0080(0x0008) (Const)
	class UErrorType*                                  PlayerAlreadyInClub;                                       // 0x0088(0x0008) (Const)
	class UErrorType*                                  PlayerInSameClub;                                          // 0x0090(0x0008) (Const)
	class UErrorType*                                  PlayerInDifferentClub;                                     // 0x0098(0x0008) (Const)
	class UErrorType*                                  NotClubOwner;                                              // 0x00A0(0x0008) (Const)
	class UErrorType*                                  ClubNameChangeNotAllowed;                                  // 0x00A8(0x0008) (Const)
	class UErrorType*                                  ClubFull;                                                  // 0x00B0(0x0008) (Const)
	class UErrorType*                                  ClubMemberNotFound;                                        // 0x00B8(0x0008) (Const)
	class UErrorType*                                  ClubInviteNotFound;                                        // 0x00C0(0x0008) (Const)
	class UErrorType*                                  ClubInvalidParameters;                                     // 0x00C8(0x0008) (Const)
	class UErrorType*                                  ClubNameInvalid;                                           // 0x00D0(0x0008) (Const)
	class UErrorType*                                  ClubTagInvalid;                                            // 0x00D8(0x0008) (Const)
	class UErrorType*                                  ClubTagPlusNameInvalid;                                    // 0x00E0(0x0008) (Const)
	class UErrorType*                                  ClubMotdInvalid;                                           // 0x00E8(0x0008) (Const)
	class UErrorType*                                  ClubNameTaken;                                             // 0x00F0(0x0008) (Const)
	class UErrorType*                                  ClubOwnerCannotLeaveUnlessEmpty;                           // 0x00F8(0x0008) (Const)
	class UErrorType*                                  CrossPlatformClubsDisabled;                                // 0x0100(0x0008) (Const)
	class UErrorType*                                  ClubInviteCrossPlatformClubsDisabled;                      // 0x0108(0x0008) (Const)
	class UErrorType*                                  ClubBanned;                                                // 0x0110(0x0008) (Const)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ClubErrors_X");
		return ptr;
	}



};

// Class ProjectX.ClubServerResult_X
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class UClubServerResult_X : public UObject
{
public:
	struct FString                                     Host;                                                      // 0x0060(0x0010) (NeedCtorLink)
	int                                                Port;                                                      // 0x0070(0x0004)
	unsigned char                                      UnknownData_O6QX[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ServerName;                                                // 0x0078(0x0010) (NeedCtorLink)
	struct FString                                     CustomServerName;                                          // 0x0088(0x0010) (NeedCtorLink)
	struct FString                                     CustomServerPassword;                                      // 0x0098(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ClubServerResult_X");
		return ptr;
	}



	struct FString GetAddress();
};

// Class ProjectX.ClubUtil_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UClubUtil_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ClubUtil_X");
		return ptr;
	}



	int Wrap(int Column, int Count);
	struct FClubColorSet SwapPrimaryAccentColors(const struct FClubColorSet& Colors, class UColorPalette_X* TeamPalette, class UColorPalette_X* AccentPalette);
	bool AreColorsDifferent(class UColorPalette_X* Palette, int Color0, int Color1);
	TEnumAsByte<ProjectX_EClubColorChange> EnsureDifferentColors(class UColorPalette_X* TeamPalette, class UColorPalette_X* AccentPalette, int DefaultColorID0, int DefaultColorID1, struct FClubColorSet* Set0, struct FClubColorSet* Set1);
	bool IsClubTeam(int TeamSize);
	bool IsClubMatch(int TeamSize);
};

// Class ProjectX.__ClubUtil_X__IsClubTeam_D72003374F100CC2F32724B9B0D69157
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class U__ClubUtil_X__IsClubTeam_D72003374F100CC2F32724B9B0D69157 : public UObject
{
public:
	unsigned char                                      TeamClubs[0x10];                                           // 0x0060(0x0010) UNKNOWN PROPERTY: ArrayProperty ProjectX.__ClubUtil_X__IsClubTeam_D72003374F100CC2F32724B9B0D69157.TeamClubs


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__ClubUtil_X__IsClubTeam_D72003374F100CC2F32724B9B0D69157");
		return ptr;
	}



	bool __ClubUtil_X__IsClubTeam_D72003374F100CC2F32724B9B0D69157();
};

// Class ProjectX.LocalClubData_X
// 0x0024 (FullSize[0x0084] - InheritedSize[0x0060])
class ULocalClubData_X : public UObject
{
public:
	TArray<class UClubDetails_X*>                      Clubs;                                                     // 0x0060(0x0010) (NeedCtorLink)
	TArray<struct FPlayerClubPair>                     Invites;                                                   // 0x0070(0x0010) (NeedCtorLink)
	int                                                NextClubID;                                                // 0x0080(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LocalClubData_X");
		return ptr;
	}



	class UClubDetails_X* GetClubForPlayer(const struct FUniqueNetId& PlayerID);
	class UClubDetails_X* GetClubByID();
	void Save();
	void Load();
};

// Class ProjectX.__LocalClubData_X__GetClubByID_8778E9584CE1332D157F1685DDBBDD7E
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__LocalClubData_X__GetClubByID_8778E9584CE1332D157F1685DDBBDD7E : public UObject
{
public:
	unsigned char                                      Id[0x8];                                                   // 0x0060(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.__LocalClubData_X__GetClubByID_8778E9584CE1332D157F1685DDBBDD7E.Id


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__LocalClubData_X__GetClubByID_8778E9584CE1332D157F1685DDBBDD7E");
		return ptr;
	}



	bool __LocalClubData_X__GetClubByID_8778E9584CE1332D157F1685DDBBDD7E(class UClubDetails_X* C);
};

// Class ProjectX.__LocalClubData_X__GetClubForPlayer_8B4CDFC942AAC7A16A205A8CCE995184
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class U__LocalClubData_X__GetClubForPlayer_8B4CDFC942AAC7A16A205A8CCE995184 : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0060(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__LocalClubData_X__GetClubForPlayer_8B4CDFC942AAC7A16A205A8CCE995184");
		return ptr;
	}



	bool __LocalClubData_X__GetClubForPlayer_8B4CDFC942AAC7A16A205A8CCE995184(class UClubDetails_X* C);
};

// Class ProjectX.__OnlineClubCache_X__GetClubDetails_5D71A0594E65AE46BD34849A7EECCD47
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__OnlineClubCache_X__GetClubDetails_5D71A0594E65AE46BD34849A7EECCD47 : public UObject
{
public:
	unsigned char                                      ClubID[0x8];                                               // 0x0060(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.__OnlineClubCache_X__GetClubDetails_5D71A0594E65AE46BD34849A7EECCD47.ClubID


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineClubCache_X__GetClubDetails_5D71A0594E65AE46BD34849A7EECCD47");
		return ptr;
	}



	bool __OnlineClubCache_X__GetClubDetails_5D71A0594E65AE46BD34849A7EECCD47(class UClubDetails_X* C);
};

// Class ProjectX.__OnlineClubCache_X__GetPlayerClubDetails_2E2A75CC422D85AC17B9549E8AAD225E
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class U__OnlineClubCache_X__GetPlayerClubDetails_2E2A75CC422D85AC17B9549E8AAD225E : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0060(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineClubCache_X__GetPlayerClubDetails_2E2A75CC422D85AC17B9549E8AAD225E");
		return ptr;
	}



	bool __OnlineClubCache_X__GetPlayerClubDetails_2E2A75CC422D85AC17B9549E8AAD225E(class UClubDetails_X* C);
};

// Class ProjectX.OnlineClubManager_X
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UOnlineClubManager_X : public UObject
{
public:
	class UPsyNetConnection_X*                         Connection;                                                // 0x0060(0x0008)
	struct FScriptDelegate                             __EventClubChanged__Delegate;                              // 0x0068(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_Q3PR[0xC];                                     // 0x0068(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineClubManager_X");
		return ptr;
	}



	void OnLeaveClub();
	void OnClubChanged(class UClubDetails_X* Club);
	class UAsyncTask* LeaveClub();
	class UAsyncTask* RejectClubInvite();
	class UTAsyncResult__ClubDetails_X* AcceptClubInvite();
	class UTAsyncResult__array_ClubInvite_X* SyncClubInvites();
	class UTAsyncResult__ClubDetails_X* SetClubOwner(const struct FUniqueNetId& NewOwner);
	class UTAsyncResult__ClubDetails_X* RemoveFromClub(const struct FUniqueNetId& PlayerID);
	class UAsyncTask* InviteToClub(const struct FUniqueNetId& PlayerID);
	class UTAsyncResult__ClubDetails_X* UpdateClubMotD(const struct FString& Text);
	class UTAsyncResult__ClubDetails_X* UpdateClubColors(int Primary, int Accent);
	class UTAsyncResult__ClubDetails_X* UpdateClubName(const struct FString& ClubName, const struct FString& ClubTag);
	void OnClubCreated(class UClubDetails_X* Club, class UError* ActionError);
	class UTAsyncResult__ClubDetails_X* CreateClub(class UClubSettings_X* Settings);
	void EventClubChanged(class UOnlineClubManager_X* Manager);
};

// Class ProjectX.RPC_CreateClub_X
// 0x0028 (FullSize[0x0120] - InheritedSize[0x00F8])
class URPC_CreateClub_X : public URPC_ClubDetailsBase_X
{
public:
	struct FString                                     ClubName;                                                  // 0x00F8(0x0010) (NeedCtorLink)
	struct FString                                     ClubTag;                                                   // 0x0108(0x0010) (NeedCtorLink)
	int                                                PrimaryColor;                                              // 0x0118(0x0004)
	int                                                AccentColor;                                               // 0x011C(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_CreateClub_X");
		return ptr;
	}



	class UErrorType* OverrideErrorType(class UErrorType* ErrorType);
	class URPC_CreateClub_X* SetSettings(class UClubSettings_X* Settings);
};

// Class ProjectX.RPC_UpdateClubName_X
// 0x0020 (FullSize[0x0118] - InheritedSize[0x00F8])
class URPC_UpdateClubName_X : public URPC_ClubDetailsBase_X
{
public:
	struct FString                                     ClubName;                                                  // 0x00F8(0x0010) (NeedCtorLink)
	struct FString                                     ClubTag;                                                   // 0x0108(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_UpdateClubName_X");
		return ptr;
	}



	class UErrorType* OverrideErrorType(class UErrorType* ErrorType);
	class URPC_UpdateClubName_X* SetName(const struct FString& InName, const struct FString& InTag);
};

// Class ProjectX.RPC_UpdateClubColors_X
// 0x0008 (FullSize[0x0100] - InheritedSize[0x00F8])
class URPC_UpdateClubColors_X : public URPC_ClubDetailsBase_X
{
public:
	int                                                PrimaryColor;                                              // 0x00F8(0x0004)
	int                                                AccentColor;                                               // 0x00FC(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_UpdateClubColors_X");
		return ptr;
	}



	class URPC_UpdateClubColors_X* SetColors(int InPrimary, int InAccent);
};

// Class ProjectX.RPC_UpdateClubMotD_X
// 0x0010 (FullSize[0x0108] - InheritedSize[0x00F8])
class URPC_UpdateClubMotD_X : public URPC_ClubDetailsBase_X
{
public:
	struct FString                                     MotD;                                                      // 0x00F8(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_UpdateClubMotD_X");
		return ptr;
	}



	class UErrorType* OverrideErrorType(class UErrorType* ErrorType);
	class URPC_UpdateClubMotD_X* SetMotD(const struct FString& InMotD);
};

// Class ProjectX.ClubDetails_X
// 0x0080 (FullSize[0x0108] - InheritedSize[0x0088])
class UClubDetails_X : public UClubSettings_X
{
public:
	unsigned char                                      ClubID[0x8];                                               // 0x0088(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.ClubDetails_X.ClubID
	struct FUniqueNetId                                OwnerPlayerID;                                             // 0x0090(0x0048) (NeedCtorLink)
	struct FString                                     MotD;                                                      // 0x00D8(0x0010) (NeedCtorLink)
	unsigned long                                      bVerified : 1;                                             // 0x00E8(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_OP34[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      LastUpdatedTime[0x8];                                      // 0x00EC(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.ClubDetails_X.LastUpdatedTime
	TArray<struct FClubMember>                         Members;                                                   // 0x00F8(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ClubDetails_X");
		return ptr;
	}



	struct FString GetMemberDebugString(const struct FClubMember& Member);
	struct FString GetMembersDebugString();
	struct FString GetDebugString();
	bool IsMember(const struct FUniqueNetId& PlayerID);
	bool IsDestroyed();
	void Destroy(struct FUniqueNetId* StructInitializer_DB05A8C0413968B413566FB4445BF8F7);
};

// Class ProjectX.TAsyncResult__ClubDetails_X
// 0x0050 (FullSize[0x0120] - InheritedSize[0x00D0])
class UTAsyncResult__ClubDetails_X : public UAsyncTask
{
public:
	class UClubDetails_X*                              Result;                                                    // 0x00D0(0x0008) (PrivateWrite)
	struct FScriptDelegate                             __EventResult__Delegate;                                   // 0x00D8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_SZZR[0xC];                                     // 0x00D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventResultComplete__Delegate;                           // 0x00F0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_H8CW[0xC];                                     // 0x00F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __ResultDelegate__Delegate;                                // 0x0108(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_JYAX[0xC];                                     // 0x0108(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TAsyncResult__ClubDetails_X");
		return ptr;
	}



	class UTAsyncResult__ClubDetails_X* CreateResultError(class UError* InError);
	class UTAsyncResult__ClubDetails_X* CreateResult(class UClubDetails_X* InResult);
	class UTAsyncResult__ClubDetails_X* Copy();
	void ClearCallbacks();
	class UTAsyncResult__ClubDetails_X* SetResultWhen(class UAsyncTask* Other, const struct FScriptDelegate& GetResultDelegate);
	class UTAsyncResult__ClubDetails_X* SetResult(class UClubDetails_X* InResult, class UError* InError);
	class UTAsyncResult__ClubDetails_X* NotifyOnResultComplete(const struct FScriptDelegate& Callback);
	class UTAsyncResult__ClubDetails_X* NotifyOnResult(const struct FScriptDelegate& Callback);
	class UClubDetails_X* ResultDelegate();
	void EventResultComplete(class UClubDetails_X* OutResult, class UError* OutError);
	void EventResult(class UClubDetails_X* OutResult);
};

// Class ProjectX.__OnlineGameReservations_X__RecordReservation_B2A6338F4B7D6F63314C8EB4C1FAC656
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__OnlineGameReservations_X__RecordReservation_B2A6338F4B7D6F63314C8EB4C1FAC656 : public UObject
{
public:
	class UAddReservationMessage_X*                    Message;                                                   // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameReservations_X__RecordReservation_B2A6338F4B7D6F63314C8EB4C1FAC656");
		return ptr;
	}



	void __OnlineGameReservations_X__RecordReservation_B2A6338F4B7D6F63314C8EB4C1FAC656(const struct FReservationPlayerData& P);
};

// Class ProjectX.__OnlineGameReservations_X__SetPlayersWithMigrationData_0AF95A994708AB4C98FB33B46994EDEC
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__OnlineGameReservations_X__SetPlayersWithMigrationData_0AF95A994708AB4C98FB33B46994EDEC : public UObject
{
public:
	TArray<struct FReservationData>                    CurrentPlayers;                                            // 0x0060(0x0010) (NeedCtorLink)
	class UEngine*                                     GEngine;                                                   // 0x0070(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameReservations_X__SetPlayersWithMigrationData_0AF95A994708AB4C98FB33B46994EDEC");
		return ptr;
	}



	void __OnlineGameReservations_X__SetPlayersWithMigrationData_0C9FDE9646EE35556DB3C49C64694302(const struct FMigrationReservationData& P);
	void __OnlineGameReservations_X__SetPlayersWithMigrationData_0AF95A994708AB4C98FB33B46994EDEC(const struct FMigrationReservationData& P, struct FReservationData* StructInitializer_0F3CEAE642959F3F9349BE91A2E4C50C);
};

// Class ProjectX.__OnlineGameReservations_X__GetMigrationReservationData_079B79E54B90455B7B38F29C328C9F06
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__OnlineGameReservations_X__GetMigrationReservationData_079B79E54B90455B7B38F29C328C9F06 : public UObject
{
public:
	TArray<struct FMigrationReservationData>           CurrentPlayers;                                            // 0x0060(0x0010) (NeedCtorLink)
	class UEngine*                                     GEngine;                                                   // 0x0070(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameReservations_X__GetMigrationReservationData_079B79E54B90455B7B38F29C328C9F06");
		return ptr;
	}



	void __OnlineGameReservations_X__GetMigrationReservationData_079B79E54B90455B7B38F29C328C9F06(const struct FReservationData& P, struct FMigrationReservationData* StructInitializer_507F8D3241C62B763037CCB024BBB71B);
};

// Class ProjectX.RPC_CustomGameServerGet_X
// 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
class URPC_CustomGameServerGet_X : public URPC_X
{
public:
	struct FString                                     ServerName;                                                // 0x00E8(0x0010) (NeedCtorLink, PrivateWrite)
	struct FString                                     Password;                                                  // 0x00F8(0x0010) (NeedCtorLink, PrivateWrite)
	TArray<struct FFindPrivateServerResult>            Servers;                                                   // 0x0108(0x0010) (Transient, NeedCtorLink)
	TArray<struct FServerResult>                       Results;                                                   // 0x0118(0x0010) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_CustomGameServerGet_X");
		return ptr;
	}



	void OnSuccess();
	class URPC_CustomGameServerGet_X* SetPassword(const struct FString& InPassword);
	class URPC_CustomGameServerGet_X* SetServerName(const struct FString& InServerName);
};

// Class ProjectX.PlaylistSkillCache_X
// 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
class UPlaylistSkillCache_X : public UObject
{
public:
	TArray<struct FUpdatedPlayerSkillRating>           Players;                                                   // 0x0060(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	class URankedConfig_X*                             RankedConfig;                                              // 0x0070(0x0008) (Edit)
	struct FScriptDelegate                             __EventPlaylistSkillChanged__Delegate;                     // 0x0078(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_RX9B[0xC];                                     // 0x0078(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PlaylistSkillCache_X");
		return ptr;
	}



	struct FPlayerSkillRating ConvertUpdatedSkillRating(const struct FUpdatedPlayerSkillRating& InUpdatedRating, struct FPlayerSkillRating* StructInitializer_2E52572D44FF533CF31C7EB63769A815);
	int GetPlayerIndex(const struct FUniqueNetId& PlayerID);
	struct FPlayerSkillRating GetPlayerRating(const struct FUniqueNetId& PlayerID);
	struct FUpdatedPlayerSkillRating GetUpdatedPlayerRating(const struct FUniqueNetId& PlayerID);
	void ClearSkill(const struct FUniqueNetId& PlayerID);
	void CacheSkill(const struct FUpdatedPlayerSkillRating& Rating);
	void PreCacheSkill(const struct FPlayerSkillRating& Rating);
	bool AllPlayersAreAroundTheSameRank();
	void EventPlaylistSkillChanged();
};

// Class ProjectX.__MatchRecorder_X__GetPlayerData_F2940D9D4FAB8F5DE62E7A82634E5496
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class U__MatchRecorder_X__GetPlayerData_F2940D9D4FAB8F5DE62E7A82634E5496 : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0060(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__MatchRecorder_X__GetPlayerData_F2940D9D4FAB8F5DE62E7A82634E5496");
		return ptr;
	}



	bool __MatchRecorder_X__GetPlayerData_F2940D9D4FAB8F5DE62E7A82634E5496(class UMatchPlayerData_X* P);
};

// Class ProjectX.LoginResponse_X
// 0x0014 (FullSize[0x0074] - InheritedSize[0x0060])
class ULoginResponse_X : public UObject
{
public:
	struct FString                                     BannedMessage;                                             // 0x0060(0x0010) (Transient, NeedCtorLink)
	int                                                BannedMinutes;                                             // 0x0070(0x0004) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LoginResponse_X");
		return ptr;
	}



};

// Class ProjectX.NetMode_Networked
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNetMode_Networked : public UNetModeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetMode_Networked");
		return ptr;
	}



};

// Class ProjectX.PauseMetricsState_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPauseMetricsState_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PauseMetricsState_X");
		return ptr;
	}



};

// Class ProjectX.__WebCache_X__DownloadData_F2DEDCC44F63097CE6D84D9C990CF674
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__WebCache_X__DownloadData_F2DEDCC44F63097CE6D84D9C990CF674 : public UObject
{
public:
	class UWebRequest_X*                               WebRequest;                                                // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__WebCache_X__DownloadData_F2DEDCC44F63097CE6D84D9C990CF674");
		return ptr;
	}



	void __WebCache_X__DownloadData_F2DEDCC44F63097CE6D84D9C990CF674(const struct FString& Key, const struct FString& Value);
};

// Class ProjectX.LocalCacheTests_X
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class ULocalCacheTests_X : public UObject
{
public:
	struct FString                                     CacheFilePath;                                             // 0x0060(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LocalCacheTests_X");
		return ptr;
	}



	void HandleLocalCacheImported(class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error);
	void ImportTest();
	void HandleLocalCacheExported(class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error);
	void ToCacheAndBack(int RandomSeed);
};

// Class ProjectX.SkelControlBlendTargetComponent_X
// 0x000C (FullSize[0x00B0] - InheritedSize[0x00A4])
class USkelControlBlendTargetComponent_X : public UActorComponent_X
{
public:
	unsigned char                                      UnknownData_GIEO[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SkelControlName;                                           // 0x00A8(0x0008) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SkelControlBlendTargetComponent_X");
		return ptr;
	}



	void SetControlActiveInComponent(class USkeletalMeshComponent* SKC, bool bActive);
	void SetControlActive(bool bActive);
	void Detached();
	void Attached();
};

// Class ProjectX.AprilConfig_X
// 0x001C (FullSize[0x0094] - InheritedSize[0x0078])
class UAprilConfig_X : public UOnlineConfig_X
{
public:
	unsigned char                                      StartTime[0x8];                                            // 0x0078(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.AprilConfig_X.StartTime
	unsigned char                                      EndTime[0x8];                                              // 0x0080(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.AprilConfig_X.EndTime
	unsigned long                                      bChangeRankedIcons : 1;                                    // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bChangePlaylists : 1;                                      // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bChangeCrowd : 1;                                          // 0x0088(0x0001) BIT_FIELD (Edit)
	float                                              HatScale;                                                  // 0x008C(0x0004) (Edit)
	float                                              AntennaScale;                                              // 0x0090(0x0004) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AprilConfig_X");
		return ptr;
	}



	bool IsActive();
};

// Class ProjectX.CameraState_CamActorCinematic_X
// 0x0004 (FullSize[0x0210] - InheritedSize[0x020C])
class UCameraState_CamActorCinematic_X : public UCameraState_CamActor_X
{
public:
	unsigned char                                      UnknownData_CBO5[0x4];                                     // 0x020C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CameraState_CamActorCinematic_X");
		return ptr;
	}



	void UpdatePOV(float DeltaTime, struct FCameraOrientation* OutPOV);
	void EndCameraState();
};

// Class ProjectX.PsyNetService_PersonaInfo_X
// 0x0090 (FullSize[0x0120] - InheritedSize[0x0090])
class UPsyNetService_PersonaInfo_X : public UPsyNetClientService_X
{
public:
	struct FOnlinePersonaData                          FromPlayer;                                                // 0x0090(0x0090) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PersonaInfo_X");
		return ptr;
	}



	struct FOnlineFriend GetData();
};

// Class ProjectX.PsyNetService_FriendAcceptedRequest_X
// 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
class UPsyNetService_FriendAcceptedRequest_X : public UPsyNetService_PersonaInfo_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_FriendAcceptedRequest_X");
		return ptr;
	}



};

// Class ProjectX.PsyNetService_FriendStatusUpdate_X
// 0x0068 (FullSize[0x00F8] - InheritedSize[0x0090])
class UPsyNetService_FriendStatusUpdate_X : public UPsyNetClientService_X
{
public:
	struct FPsyNetOnlineStatus                         FromPlayer;                                                // 0x0090(0x0068) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_FriendStatusUpdate_X");
		return ptr;
	}



	struct FOnlineStatus GetData();
};

// Class ProjectX.PsyNetService_IncomingFriendRequest_X
// 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
class UPsyNetService_IncomingFriendRequest_X : public UPsyNetService_PersonaInfo_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_IncomingFriendRequest_X");
		return ptr;
	}



};

// Class ProjectX.PsyNetService_PlayerUnfriended_X
// 0x0048 (FullSize[0x00D8] - InheritedSize[0x0090])
class UPsyNetService_PlayerUnfriended_X : public UPsyNetClientService_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0090(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PlayerUnfriended_X");
		return ptr;
	}



};

// Class ProjectX.__PsyNetServiceProvider_X__CreateChannel_9FCD054D40A1197AB2854EAD7B3F4EF4
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class U__PsyNetServiceProvider_X__CreateChannel_9FCD054D40A1197AB2854EAD7B3F4EF4 : public UObject
{
public:
	struct FString                                     ChannelName;                                               // 0x0060(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PsyNetServiceProvider_X__CreateChannel_9FCD054D40A1197AB2854EAD7B3F4EF4");
		return ptr;
	}



	bool __PsyNetServiceProvider_X__CreateChannel_9FCD054D40A1197AB2854EAD7B3F4EF4(class UPsyNetChannel_X* C);
};

// Class ProjectX.TAsyncResult__PsyNetClientService_X
// 0x0050 (FullSize[0x0120] - InheritedSize[0x00D0])
class UTAsyncResult__PsyNetClientService_X : public UAsyncTask
{
public:
	class UPsyNetClientService_X*                      Result;                                                    // 0x00D0(0x0008) (PrivateWrite)
	struct FScriptDelegate                             __EventResult__Delegate;                                   // 0x00D8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_Z7D7[0xC];                                     // 0x00D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventResultComplete__Delegate;                           // 0x00F0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_DYJQ[0xC];                                     // 0x00F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __ResultDelegate__Delegate;                                // 0x0108(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_UNML[0xC];                                     // 0x0108(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TAsyncResult__PsyNetClientService_X");
		return ptr;
	}



	class UTAsyncResult__PsyNetClientService_X* CreateResultError(class UError* InError);
	class UTAsyncResult__PsyNetClientService_X* CreateResult(class UPsyNetClientService_X* InResult);
	class UTAsyncResult__PsyNetClientService_X* Copy();
	void ClearCallbacks();
	class UTAsyncResult__PsyNetClientService_X* SetResultWhen(class UAsyncTask* Other, const struct FScriptDelegate& GetResultDelegate);
	class UTAsyncResult__PsyNetClientService_X* SetResult(class UPsyNetClientService_X* InResult, class UError* InError);
	class UTAsyncResult__PsyNetClientService_X* NotifyOnResultComplete(const struct FScriptDelegate& Callback);
	class UTAsyncResult__PsyNetClientService_X* NotifyOnResult(const struct FScriptDelegate& Callback);
	class UPsyNetClientService_X* ResultDelegate();
	void EventResultComplete(class UPsyNetClientService_X* OutResult, class UError* OutError);
	void EventResult(class UPsyNetClientService_X* OutResult);
};

// Class ProjectX.__PsyNetServiceProvider_X__ExecuteRequest_6C569B2749D026E7615470B45CE555D1
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__PsyNetServiceProvider_X__ExecuteRequest_6C569B2749D026E7615470B45CE555D1 : public UObject
{
public:
	class UPsyNetMessage_X*                            Response;                                                  // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PsyNetServiceProvider_X__ExecuteRequest_6C569B2749D026E7615470B45CE555D1");
		return ptr;
	}



	void __PsyNetServiceProvider_X__ExecuteRequest_6C569B2749D026E7615470B45CE555D1(class UPsyNetClientService_X* Result, class UError* Error);
};

// Class ProjectX.__PsyNetServiceProvider_X__ExecuteServiceMessage_C5D9492041FBED14498FD4AE59221B2F
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class U__PsyNetServiceProvider_X__ExecuteServiceMessage_C5D9492041FBED14498FD4AE59221B2F : public UObject
{
public:
	struct FString                                     ServiceName;                                               // 0x0060(0x0010) (NeedCtorLink)
	class UPsyNetClientService_X*                      Service;                                                   // 0x0070(0x0008)
	class UTAsyncResult__PsyNetClientService_X*        Task;                                                      // 0x0078(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PsyNetServiceProvider_X__ExecuteServiceMessage_C5D9492041FBED14498FD4AE59221B2F");
		return ptr;
	}



	void __PsyNetServiceProvider_X__ExecuteServiceMessage_8D4D48484F8EBDCF47EE62A57559CFFF(class UError* Err);
	void __PsyNetServiceProvider_X__ExecuteServiceMessage_C5D9492041FBED14498FD4AE59221B2F(class UPsyNetClientService_X* R, class UError* E);
};

// Class ProjectX.RPC_PartyChatMessage_X
// 0x0010 (FullSize[0x0108] - InheritedSize[0x00F8])
class URPC_PartyChatMessage_X : public URPC_PartyBase_X
{
public:
	struct FString                                     Message;                                                   // 0x00F8(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyChatMessage_X");
		return ptr;
	}



	class URPC_PartyChatMessage_X* SetMessage(const struct FString& InMessage);
};

// Class ProjectX.RPC_PartyJoin_X
// 0x0090 (FullSize[0x0188] - InheritedSize[0x00F8])
class URPC_PartyJoin_X : public URPC_PartyBase_X
{
public:
	struct FString                                     JoinID;                                                    // 0x00F8(0x0010) (NeedCtorLink)
	struct FPsyNetPartyInfo                            Info;                                                      // 0x0108(0x0070) (Transient, NeedCtorLink)
	TArray<struct FPsyNetPartyMember>                  Members;                                                   // 0x0178(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyJoin_X");
		return ptr;
	}



	class URPC_PartyBase_X* SetJoinKey(const struct FString& InJoinKey);
};

// Class ProjectX.RPC_PartyLeave_X
// 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
class URPC_PartyLeave_X : public URPC_PartyBase_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyLeave_X");
		return ptr;
	}



};

// Class ProjectX.TaskGate_X
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UTaskGate_X : public UObject
{
public:
	unsigned long                                      bOpen : 1;                                                 // 0x0060(0x0001) BIT_FIELD (PrivateWrite)
	unsigned char                                      UnknownData_6BEX[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UAsyncTask*>                          Tasks;                                                     // 0x0068(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TaskGate_X");
		return ptr;
	}



	class UAsyncTask* AddWithTimeout(float TimeoutSeconds, class UErrorType* TimeoutError, const struct FString& ErrorMessage);
	class UAsyncTask* Add();
	void CompleteTasks();
	void SetOpen(bool bIsOpen);
};

// Class ProjectX.__TaskGate_X__Add_959F117B4C0A66D9D7FD2BB0C431D64D
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__TaskGate_X__Add_959F117B4C0A66D9D7FD2BB0C431D64D : public UObject
{
public:
	class UAsyncTask*                                  Task;                                                      // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TaskGate_X__Add_959F117B4C0A66D9D7FD2BB0C431D64D");
		return ptr;
	}



	void __TaskGate_X__Add_959F117B4C0A66D9D7FD2BB0C431D64D();
};

// Class ProjectX.__TaskGate_X__AddWithTimeout_E16008F94488EF3F96D8158868156866
// 0x0038 (FullSize[0x0098] - InheritedSize[0x0060])
class U__TaskGate_X__AddWithTimeout_E16008F94488EF3F96D8158868156866 : public UObject
{
public:
	class UAsyncTask*                                  Task;                                                      // 0x0060(0x0008)
	class UErrorType*                                  TimeoutError;                                              // 0x0068(0x0008)
	struct FString                                     ErrorMessage;                                              // 0x0070(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             TimeoutDelegate;                                           // 0x0080(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_DPOJ[0xC];                                     // 0x0080(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TaskGate_X__AddWithTimeout_E16008F94488EF3F96D8158868156866");
		return ptr;
	}



	void __TaskGate_X__AddWithTimeout_720F7E554EE6933A59F1D79EF8817FB5();
	void __TaskGate_X__AddWithTimeout_E16008F94488EF3F96D8158868156866();
};

// Class ProjectX.UdpLanServer_X
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UUdpLanServer_X : public UObject
{
public:
	class ULanBeacon_X*                                Beacon;                                                    // 0x0060(0x0008) (Edit, ExportObject, Component, EditInline)
	struct FString                                     MetaData;                                                  // 0x0068(0x0010) (NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.UdpLanServer_X");
		return ptr;
	}



	void HandleLanQueryMessage(class UOnlineMessageComponent_X* Component, class ULanMessage_HostQuery_X* Query);
	void Destroy();
	class UAsyncTask* SetServerMetaData(const struct FString& InMetaData);
	void Construct();
};

// Class ProjectX.SetPlayerStorageResult_X
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class USetPlayerStorageResult_X : public UObject
{
public:
	TArray<struct FSetPlayerStorageResultItem>         Items;                                                     // 0x0060(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SetPlayerStorageResult_X");
		return ptr;
	}



};

// Class ProjectX.RPC_PlayerStorageSet_X
// 0x0060 (FullSize[0x0148] - InheritedSize[0x00E8])
class URPC_PlayerStorageSet_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x00E8(0x0048) (NeedCtorLink)
	TArray<struct FSetPlayerStorageRequestItem>        Items;                                                     // 0x0130(0x0010) (NeedCtorLink)
	class USetPlayerStorageResult_X*                   Result;                                                    // 0x0140(0x0008) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PlayerStorageSet_X");
		return ptr;
	}



	class UObject* GetResponseObject();
};

// Class ProjectX.OnlinePlayerStorageQueue_X
// 0x0088 (FullSize[0x00E8] - InheritedSize[0x0060])
class UOnlinePlayerStorageQueue_X : public UObject
{
public:
	class UOnlinePlayerStorageConfig_X*                Config;                                                    // 0x0060(0x0008) (Edit)
	TArray<struct FPendingStorage>                     QueuedObjects;                                             // 0x0068(0x0010) (NeedCtorLink)
	TArray<struct FPendingStorage>                     PendingObjects;                                            // 0x0078(0x0010) (NeedCtorLink)
	float                                              DefaultStorageMaxSizeBytes;                                // 0x0088(0x0004) (Edit, Const)
	unsigned char                                      UnknownData_ULHV[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FStorageMaxSize>                     StorageMaxSizes;                                           // 0x0090(0x0010) (Edit, Const, NeedCtorLink)
	struct FScriptDelegate                             __EventStorageSuccess__Delegate;                           // 0x00A0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_EOUE[0xC];                                     // 0x00A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventOutOfSync__Delegate;                                // 0x00B8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_ZQ92[0xC];                                     // 0x00B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventStorageError__Delegate;                             // 0x00D0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_CQ26[0xC];                                     // 0x00D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayerStorageQueue_X");
		return ptr;
	}



	void __OnlinePlayerStorageQueue_X__Construct_A88BF87D42AC4F484FA0C8910D7B4A12(const struct FString& _);
	void __OnlinePlayerStorageQueue_X__SendBatch_Internal_544717F0447F7E2DA06BBEBD2CB808A1(class URPC_X* RPC);
	bool __OnlinePlayerStorageQueue_X__HandleStorageSuccess_29F7497A47103051A965928DFC16A994(const struct FPendingStorage& P);
	void __OnlinePlayerStorageQueue_X__HandleStorageSuccess_A67501C44C05DAC3F07A96A990F6DBE1(const struct FSetPlayerStorageRequestItem& R);
	bool __OnlinePlayerStorageQueue_X__HandleStorageSuccess_8BEF7E8748E5BB6F420A8980738AF0DD(const struct FSetPlayerStorageResultItem& Item);
	void __OnlinePlayerStorageQueue_X__HandleStorageError_21291CC44FC3140E8A2D79B576D8E1DF(const struct FPendingStorage& P);
	bool __OnlinePlayerStorageQueue_X__HandleStorageError_8E6A1FD24B906261CC6B93B6C3F10321(const struct FPendingStorage& P);
	int GetStorageMaxSizeBytes(const struct FName& Category);
	void HandleStorageError(class UError* Error, TArray<struct FPendingStorage>* FilterLocal_04580F8443BAA4F58FBD8499213CDB60);
	struct FPendingStorage MapResultItem(const struct FSetPlayerStorageResultItem& Item, struct FPendingStorage* StructInitializer_97A8FCF341EBB9D499A539A6BDA78BE5);
	void HandleStorageSuccess(class URPC_PlayerStorageSet_X* RPC, TArray<struct FSetPlayerStorageResultItem>* FilterLocal_35872E514D5548FD51273C835F9F21FB, TArray<struct FSetPlayerStorageRequestItem>* FilterLocal_A075D3BB4AAAE670944D0AAB4887B5D1, TArray<struct FSetPlayerStorageResultItem>* DifferenceLocal_473B31584DEABF17B85753B6B055AA8D, TArray<struct FPendingStorage>* MapLocal_82FB35CA4A6F16F02355A6A71CE6EC09);
	void PartitionStorageRequests(TArray<struct FPendingStorage>* OutQueue, TArray<struct FSetPlayerStorageRequestItem>* OutOfDate, struct FSetPlayerStorageRequestItem* StructInitializer_CC73D7CC4E6E1532C3DD6985FA6C1038);
	void SendBatch_Internal(TArray<struct FPendingStorage>* OutQueue);
	void SendBatch(TArray<struct FPendingStorage>* UnionLocal_3BE002BE44B2CA51EFA1D889B691B60E);
	void QueueBatch();
	void SendImmediate(class UObject* DataObj, int ClientTick, TArray<struct FPendingStorage>* ArrayInitializer_F970167A4F3D69933604D9BE631BD840, TArray<struct FPendingStorage>* UnionLocal_C82EC0EA4580D4D96273FDACC5A21C38);
	void UpdateQueuedObject(class UObject* DataObj, int ClientTick);
	void QueueObject(class UObject* DataObj, int ClientTick);
	void Construct();
	void EventStorageError(class UError* Error);
	void EventOutOfSync(TArray<struct FPendingStorage>* FailedObjects);
	void EventStorageSuccess(class UObject* Data, int ServerTick, TEnumAsByte<ProjectX_EObjectEncoding> Encoding);
};

// Class ProjectX.DynamicValueModifier_X
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UDynamicValueModifier_X : public UObject
{
public:
	struct FString                                     DisplayName;                                               // 0x0060(0x0010) (Edit, NeedCtorLink)
	TEnumAsByte<ProjectX_EDynamicValueModType>         Type;                                                      // 0x0070(0x0001) (Edit)
	unsigned char                                      UnknownData_SK58[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Priority;                                                  // 0x0074(0x0004) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DynamicValueModifier_X");
		return ptr;
	}



	struct FString GetDebugValue();
	struct FString GetDebugString();
	bool Expired();
	float GetValue();
	void Tick(float DeltaTime);
};

// Class ProjectX.DynamicValueModifierCurve_X
// 0x0030 (FullSize[0x00A8] - InheritedSize[0x0078])
class UDynamicValueModifierCurve_X : public UDynamicValueModifier_X
{
public:
	struct FInterpCurveFloat                           Curve;                                                     // 0x0078(0x0018) (Edit, NeedCtorLink)
	struct FScriptDelegate                             __GetValueDelegate__Delegate;                              // 0x0090(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_5V9Q[0xC];                                     // 0x0090(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DynamicValueModifierCurve_X");
		return ptr;
	}



	struct FString GetDebugValue();
	float GetValue();
	float GetValueDelegate();
};

// Class ProjectX.DynamicValueModifierDuration_X
// 0x0024 (FullSize[0x009C] - InheritedSize[0x0078])
class UDynamicValueModifierDuration_X : public UDynamicValueModifier_X
{
public:
	float                                              Duration;                                                  // 0x0078(0x0004) (Edit)
	float                                              Value;                                                     // 0x007C(0x0004) (Edit)
	struct FInterpCurveFloat                           CurveValue;                                                // 0x0080(0x0018) (Edit, NeedCtorLink)
	unsigned long                                      bUseCurve : 1;                                             // 0x0098(0x0001) BIT_FIELD (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DynamicValueModifierDuration_X");
		return ptr;
	}



	struct FString GetDebugString();
	float GetValue();
	bool Expired();
	void Tick(float DeltaTime);
};

// Class ProjectX.GetPlayerStorageResult_X
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UGetPlayerStorageResult_X : public UObject
{
public:
	TArray<class UGetPlayerStorageResultItem_X*>       Items;                                                     // 0x0060(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GetPlayerStorageResult_X");
		return ptr;
	}



};

// Class ProjectX.GetPlayerStorageResultItem_X
// 0x0029 (FullSize[0x0089] - InheritedSize[0x0060])
class UGetPlayerStorageResultItem_X : public UObject
{
public:
	struct FName                                       Category;                                                  // 0x0060(0x0008)
	int                                                Tick;                                                      // 0x0068(0x0004)
	unsigned char                                      UnknownData_SCOD[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Data;                                                      // 0x0070(0x0010) (NeedCtorLink)
	int                                                Checksum;                                                  // 0x0080(0x0004)
	unsigned long                                      bChecksumMatch : 1;                                        // 0x0084(0x0001) BIT_FIELD
	TEnumAsByte<ProjectX_EObjectEncoding>              Encoding;                                                  // 0x0088(0x0001)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GetPlayerStorageResultItem_X");
		return ptr;
	}



};

// Class ProjectX.OnlinePlayerStorageManifest_X
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UOnlinePlayerStorageManifest_X : public UObject
{
public:
	TArray<struct FStorageMetadata>                    MetaData;                                                  // 0x0060(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayerStorageManifest_X");
		return ptr;
	}



	bool ChecksumMatches(const struct FName& Category, int Checksum, TEnumAsByte<ProjectX_EObjectEncoding> Encoding);
	void SetChecksum(const struct FName& Category, int Checksum, TEnumAsByte<ProjectX_EObjectEncoding> Encoding);
	int GetIndex(const struct FName& Category);
};

// Class ProjectX.RPC_PlayerStorageGet_X
// 0x0060 (FullSize[0x0148] - InheritedSize[0x00E8])
class URPC_PlayerStorageGet_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x00E8(0x0048) (NeedCtorLink)
	TArray<struct FGetPlayerStorageRequestItem>        Items;                                                     // 0x0130(0x0010) (NeedCtorLink)
	class UGetPlayerStorageResult_X*                   Result;                                                    // 0x0140(0x0008) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PlayerStorageGet_X");
		return ptr;
	}



	void __RPC_PlayerStorageGet_X__OnSuccess_72EA1409412177E254BC4CAD03072DB1(class UGetPlayerStorageResultItem_X* Item);
	bool __RPC_PlayerStorageGet_X__OnSuccess_17CF29E84F898B185B1E1CBA8CF0385F(class UGetPlayerStorageResultItem_X* Item);
	void OnSuccess(TArray<class UGetPlayerStorageResultItem_X*>* FilterLocal_CFA78FF447B5E2223146D884375D0067);
	class UObject* GetResponseObject();
};

// Class ProjectX.OnlinePlayerStorageSync_X
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UOnlinePlayerStorageSync_X : public UObject
{
public:
	struct FScriptDelegate                             __EventSyncSuccess__Delegate;                              // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_73HN[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayerStorageSync_X");
		return ptr;
	}



	void __OnlinePlayerStorageSync_X__HandleSyncSuccess_AF217939459C0BB31879088C17ADE6F4(const struct FOnlinePlayerStorageSyncResult& Result);
	class UObject* InstanceSyncData(class UObject* LocalObject, class UDecodeObject_X* DecodeObj);
	void HandleSyncSuccess(class URPC_PlayerStorageGet_X* RPC, class UAsyncTask* ResponseTask, struct FOnlinePlayerStorageSyncResult* StructInitializer_744161AB4208A64B72E2D5BEC73773EC);
	int CrcObject(TEnumAsByte<ProjectX_EObjectEncoding> Encoding, class UObject* Data);
	struct FGetPlayerStorageRequestItem MapRequestItem(const struct FOnlinePlayerStorageSyncRequest& Request, struct FGetPlayerStorageRequestItem* StructInitializer_B90F3EBD4C1615D3E4DA15825FCFD40A);
	class UAsyncTask* SyncObjects(TArray<struct FOnlinePlayerStorageSyncRequest>* Requests, class URPC_PlayerStorageGet_X** ObjectInitializer_D58779834A0F48DCC4119AB280495B28, TArray<struct FGetPlayerStorageRequestItem>* MapLocal_7E94A6E6450D412DA3985E947D5CBF49);
	void EventSyncSuccess(struct FOnlinePlayerStorageSyncResult* Result);
};

// Class ProjectX.OnlinePlayerStorageConfig_X
// 0x0004 (FullSize[0x007C] - InheritedSize[0x0078])
class UOnlinePlayerStorageConfig_X : public UOnlineConfig_X
{
public:
	float                                              QueueBatchDelay;                                           // 0x0078(0x0004) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayerStorageConfig_X");
		return ptr;
	}



};

// Class ProjectX.SaveLock_X
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class USaveLock_X : public UObject
{
public:
	class UGFxEngine_X*                                GFxEngine;                                                 // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SaveLock_X");
		return ptr;
	}



	bool StaticAllowSave();
	bool AllowSave();
};

// Class ProjectX.EncodeObjectFactory_X
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UEncodeObjectFactory_X : public UObject
{
public:
	class UJSONSerializer_X*                           JsonSerializer;                                            // 0x0060(0x0008) (Edit, PrivateWrite)
	class UObjectSerializer_X*                         ObjectSerializer;                                          // 0x0068(0x0008) (Edit, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EncodeObjectFactory_X");
		return ptr;
	}



	class UDecodeObject_X* DecodeObject(TEnumAsByte<ProjectX_EObjectEncoding> Encoding, struct FString* Stream, int RequestChecksum, class UDecodeObjectJson_X** ObjectInitializer_9D0775A84944CCA215F2AD8E5A033D6C, class UDecodeObjectUObject_X** ObjectInitializer_35E89049495261F7061953B3D0C9FC31);
	class UEncodeObject_X* EncodeObject(TEnumAsByte<ProjectX_EObjectEncoding> Encoding, class UObject* Target, class UEncodeObjectJson_X** ObjectInitializer_31BC293C4603FCCF0D6E88828AB9E06E, class UEncodeObjectUObject_X** ObjectInitializer_97BD87514E3DBC54935ACA9446307B8C);
};

// Class ProjectX.__OnlinePlayerStorageQueue_X__HandleStorageSuccess_C9FB861E4720BBF9D916E093C6BC4161
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__OnlinePlayerStorageQueue_X__HandleStorageSuccess_C9FB861E4720BBF9D916E093C6BC4161 : public UObject
{
public:
	TArray<struct FSetPlayerStorageResultItem>         OutOfSync;                                                 // 0x0060(0x0010) (NeedCtorLink)
	class URPC_PlayerStorageSet_X*                     RPC;                                                       // 0x0070(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlinePlayerStorageQueue_X__HandleStorageSuccess_C9FB861E4720BBF9D916E093C6BC4161");
		return ptr;
	}



	void __OnlinePlayerStorageQueue_X__HandleStorageSuccess_1A8FD8374EFC1B38AAF7D18F6F525C30(const struct FSetPlayerStorageResultItem& R);
	bool __OnlinePlayerStorageQueue_X__HandleStorageSuccess_C9FB861E4720BBF9D916E093C6BC4161(const struct FSetPlayerStorageRequestItem& R);
};

// Class ProjectX.RPC_InviteToClub_X
// 0x0048 (FullSize[0x0130] - InheritedSize[0x00E8])
class URPC_InviteToClub_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x00E8(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_InviteToClub_X");
		return ptr;
	}



	class UErrorType* OverrideErrorType(class UErrorType* ErrorType);
	class URPC_InviteToClub_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.RPC_PartySendInvite_X
// 0x0048 (FullSize[0x0140] - InheritedSize[0x00F8])
class URPC_PartySendInvite_X : public URPC_PartyBase_X
{
public:
	struct FUniqueNetId                                InviteeID;                                                 // 0x00F8(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartySendInvite_X");
		return ptr;
	}



	class URPC_PartySendInvite_X* Invite(const struct FUniqueNetId& InInviteeUserId);
};

// Class ProjectX.RPC_SetClubMotD_X
// 0x0010 (FullSize[0x0130] - InheritedSize[0x0120])
class URPC_SetClubMotD_X : public URPC_CreateClub_X
{
public:
	struct FString                                     Text;                                                      // 0x0120(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_SetClubMotD_X");
		return ptr;
	}



	class URPC_SetClubMotD_X* SetText(const struct FString& InText);
};

// Class ProjectX.RPC_SetRichPresence_X
// 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
class URPC_SetRichPresence_X : public URPC_X
{
public:
	struct FString                                     PresenceInfo;                                              // 0x00E8(0x0010) (NeedCtorLink)
	struct FString                                     PresenceState;                                             // 0x00F8(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_SetRichPresence_X");
		return ptr;
	}



	class URPC_SetRichPresence_X* SetPresenceState(const struct FString& InState);
	class URPC_SetRichPresence_X* SetPresenceInfo(const struct FString& InInfo);
};

// Class ProjectX.RPC_UpdateClub_X
// 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
class URPC_UpdateClub_X : public URPC_CreateClub_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_UpdateClub_X");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
