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

// Class AkAudio.ActorFactoryAkAmbientSound
// 0x000C (FullSize[0x00A8] - InheritedSize[0x009C])
class UActorFactoryAkAmbientSound : public UActorFactory
{
public:
	unsigned char                                      UnknownData_QBHX[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkEvent*                                    AmbientEvent;                                              // 0x00A0(0x0008) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.ActorFactoryAkAmbientSound");
		return ptr;
	}



};

// Class AkAudio.AkAmbientSound
// 0x0010 (FullSize[0x0280] - InheritedSize[0x0270])
class AAkAmbientSound : public AKeypoint
{
public:
	unsigned long                                      bAutoPlay : 1;                                             // 0x0270(0x0001) BIT_FIELD
	unsigned long                                      StopWhenOwnerIsDestroyed : 1;                              // 0x0270(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bIsPlaying : 1;                                            // 0x0270(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownData_IIJJ[0x4];                                     // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkEvent*                                    PlayEvent;                                                 // 0x0278(0x0008) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAmbientSound");
		return ptr;
	}



};

// Class AkAudio.AkBusActor
// 0x0011 (FullSize[0x0279] - InheritedSize[0x0268])
class AAkBusActor : public AActor
{
public:
	class UAkSoundSource*                              SoundSource;                                               // 0x0268(0x0008) (ExportObject, Component, EditInline)
	struct FName                                       TargetBusName;                                             // 0x0270(0x0008)
	TEnumAsByte<AkAudio_EPinnedAxisType>               PinnedAxis;                                                // 0x0278(0x0001)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkBusActor");
		return ptr;
	}



	void RegisterReflectionEmitter(const struct FName& BusName, TEnumAsByte<AkAudio_EBusEmitterType> BusType);
	void SetPinnedAxis(TEnumAsByte<AkAudio_EPinnedAxisType> AxisToPin);
};

// Class AkAudio.AkComponent
// 0x0017 (FullSize[0x00B4] - InheritedSize[0x009D])
class UAkComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_YYSQ[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       BoneName;                                                  // 0x00A0(0x0008) (Edit)
	class UAkEvent*                                    AutoPlayEvent;                                             // 0x00A8(0x0008)
	unsigned long                                      bStopWhenOwnerDestroyed : 1;                               // 0x00B0(0x0001) BIT_FIELD


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkComponent");
		return ptr;
	}



};

// Class AkAudio.AkDevice
// 0x0058 (FullSize[0x00B8] - InheritedSize[0x0060])
class UAkDevice : public UObject
{
public:
	struct FName                                       DynamicRangeSetting_Low_Master;                            // 0x0060(0x0008)
	struct FName                                       DynamicRangeSetting_Medium_Master;                         // 0x0068(0x0008)
	struct FName                                       DynamicRangeSetting_High_Master;                           // 0x0070(0x0008)
	struct FName                                       DynamicRangeSetting_Low_Gameplay;                          // 0x0078(0x0008)
	struct FName                                       DynamicRangeSetting_Medium_Gameplay;                       // 0x0080(0x0008)
	struct FName                                       DynamicRangeSetting_High_Gameplay;                         // 0x0088(0x0008)
	struct FName                                       MasterAudioBusName;                                        // 0x0090(0x0008)
	struct FName                                       GameplayAudioBusName;                                      // 0x0098(0x0008)
	struct FScriptDelegate                             __EventInitialized__Delegate;                              // 0x00A0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_IXS7[0xC];                                     // 0x00A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkDevice");
		return ptr;
	}



	void SetBusEffect(const struct FName& BusName, const struct FName& EffectSetting, int EffectSlot);
	void ResetSlapbackObjects();
	void SetSoundEnvironment(class AActor* Actor, TEnumAsByte<AkAudio_EAkEnvironmentType> EnvironmentType);
	class UAkEnvironments* GetEnvironments();
	void NotifyWhenInitialized(const struct FScriptDelegate& Callback);
	void ProfileStop();
	void ProfileStart();
	void PrintData();
	void SetDynamicRange(TEnumAsByte<AkAudio_EAkDynamicRangeType> Type);
	void SetOutputType(TEnumAsByte<AkAudio_EAkOutputType> Type);
	void SetListenerSpatialization(class ULocalPlayer* Player, TEnumAsByte<AkAudio_EAkListenerSpacialization> Value);
	void SetSplitScreenListenerEnabled(bool bEnable);
	void SetSplitScreenListenerPosition(const struct FVector& Location);
	void UpdateSecondaryOutputs();
	void SetGlobalRTCP(const struct FName& Key, float Value);
	void StopGlobalSound(class UAkSoundCue* Sound);
	void PlayGlobalSound(class UAkSoundCue* Sound);
	void SetState(const struct FName& InStateGroup, const struct FName& InState);
	void SetSwitch(class AActor* SourceActor, const struct FName& Key, const struct FName& Value);
	void SetRTCP(class AActor* SourceActor, const struct FName& Key, float Value);
	void StopAllSounds(class AActor* SourceActor);
	void StopSound(class AActor* SourceActor, class UAkSoundCue* Sound);
	class UAkSoundSource* PlaySound(class AActor* SourceActor, class UAkSoundCue* Sound, const struct FVector& Translation, const struct FRotator& Rotation);
	class UAkSoundSource* GetSoundSource(class AActor* SourceActor, const struct FVector& Translation, const struct FRotator& Rotation);
	void EventInitialized();
};

// Class AkAudio.AkDialogueEvent
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UAkDialogueEvent : public UObject
{
public:
	TArray<class UAkSwitch*>                           Arguments;                                                 // 0x0060(0x0010) (Edit, Const, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkDialogueEvent");
		return ptr;
	}



};

// Class AkAudio.AkEnvironments
// 0x002C (FullSize[0x008C] - InheritedSize[0x0060])
class UAkEnvironments : public UObject
{
public:
	struct FPointer                                    VfTable_FObjectDestructionSubscriber;                      // 0x0060(0x0008) (Const, Native, NoExport)
	TArray<struct FAkEnvironment>                      LevelEnvironments;                                         // 0x0068(0x0010) (NeedCtorLink, PrivateWrite)
	TArray<struct FAkActorEnvironment>                 ActorEnvironments;                                         // 0x0078(0x0010) (NeedCtorLink, PrivateWrite)
	unsigned long                                      bLevelDirty : 1;                                           // 0x0088(0x0001) BIT_FIELD
	unsigned long                                      bActorEnvironmentDirty : 1;                                // 0x0088(0x0001) BIT_FIELD


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkEnvironments");
		return ptr;
	}



	void RemoveActorEnvironment(class AActor* TargetActor, struct FString* EnvironmentID);
	void AddActorEnvironment(class AActor* TargetActor, struct FAkEnvironment* Environment);
	void AddLevelDefault(struct FAkEnvironment* Environment);
};

// Class AkAudio.AkEnvironmentVolume
// 0x0024 (FullSize[0x02C8] - InheritedSize[0x02A4])
class AAkEnvironmentVolume : public AVolume
{
public:
	unsigned char                                      UnknownData_N0QL[0x4];                                     // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAkEnvironment                              Environment;                                               // 0x02A8(0x0020) (Edit, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkEnvironmentVolume");
		return ptr;
	}



};

// Class AkAudio.AkMusicAnalysis
// 0x00B0 (FullSize[0x0110] - InheritedSize[0x0060])
class UAkMusicAnalysis : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0060(0x0008) (Const, Native, NoExport)
	int                                                BPM;                                                       // 0x0068(0x0004)
	unsigned char                                      UnknownData_FZXS[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMusicAnalysisInfo                          MusicInfo;                                                 // 0x0070(0x0020) (NeedCtorLink)
	struct FMusicAnalysisInfo                          MusicInfoSmoothed;                                         // 0x0090(0x0020) (NeedCtorLink)
	float                                              AttackSpeed;                                               // 0x00B0(0x0004) (Edit, Config)
	float                                              ReleaseSpeed;                                              // 0x00B4(0x0004) (Edit, Config)
	unsigned long                                      bDebugPrintMusicAnalysisValues : 1;                        // 0x00B8(0x0001) BIT_FIELD (Edit, Config)
	unsigned char                                      UnknownData_IVM1[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkSoundCue*                                 MusicAnalysisSilentLoop;                                   // 0x00C0(0x0008)
	struct FScriptDelegate                             __EventNewMusicTrack__Delegate;                            // 0x00C8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_IWZ1[0xC];                                     // 0x00C8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventMusicBeat__Delegate;                                // 0x00E0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_ENKJ[0xC];                                     // 0x00E0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventMusicBar__Delegate;                                 // 0x00F8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_YZ8T[0xC];                                     // 0x00F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkMusicAnalysis");
		return ptr;
	}



	void UpdateSmoothedMusicInfo(float DeltaTime);
	void UpdateMusicInfo(struct FMusicAnalysisInfo* NewValues);
	void OnNewTrack(int NewBPM);
	class UAkMusicAnalysis* GetInstance();
	void EventMusicBar();
	void EventMusicBeat();
	void EventNewMusicTrack(int PlayingID, int NewBPM);
};

// Class AkAudio.AkMusicDevice
// 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
class UAkMusicDevice : public UObject
{
public:
	struct FScriptDelegate                             __EventTrackStart__Delegate;                               // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_9XIB[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventTrackEnd__Delegate;                                 // 0x0078(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_9Y36[0xC];                                     // 0x0078(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkMusicDevice");
		return ptr;
	}



	void Seek(class UAkSoundCue* Sound, float PositionSeconds);
	void SetRTCP(const struct FName& Key, float Value);
	void StopPlayingID(int PlayingID);
	void Stop(class UAkSoundCue* Sound);
	int Play(class UAkSoundCue* Sound);
	void EventTrackEnd(int PlayingID);
	void EventTrackStart(int PlayingID, const struct FString& FileMarker);
};

// Class AkAudio.AkParamGroup
// 0x00C1 (FullSize[0x015E] - InheritedSize[0x009D])
class UAkParamGroup : public UActorComponent
{
public:
	unsigned char                                      UnknownData_D7ZJ[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointer                                    VfTable_IISetParameter;                                    // 0x00A0(0x0008) (Const, Native, NoExport)
	struct FAkParamSet                                 StoredParameters;                                          // 0x00A8(0x00A0) (Const, Transient)
	TArray<class UAkSoundSource*>                      SoundSources;                                              // 0x0148(0x0010) (Const, ExportObject, Transient, Component, NeedCtorLink, EditInline)
	int                                                ControllerId;                                              // 0x0158(0x0004) (Transient)
	TEnumAsByte<AkAudio_EReflectionSendType>           SendType;                                                  // 0x015C(0x0001) (Transient)
	TEnumAsByte<AkAudio_EAttenuationType>              AttenuationType;                                           // 0x015D(0x0001) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkParamGroup");
		return ptr;
	}



	void SetSendToSlapbacks(bool bSend);
	void SetControllerId(int InID);
	void EnableObjectAttenuation();
	void DisableObjectAttenuation();
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void UpdateSoundSourceAttenuationScaling();
	void SetActorParameter(const struct FName& Key, class AActor* Value);
	void SetLinearColorParameter(const struct FName& Key, const struct FLinearColor& Value);
	void SetVectorParameter(const struct FName& Key, const struct FVector& Value);
	void SetFloatParameter(const struct FName& Key, float Value);
	void SetNameParameter(const struct FName& Key, const struct FName& Value);
	void GetDebugData(TArray<struct FName>* RTCPKeys, TArray<float>* RTCPValues, TArray<struct FName>* SwitchKeys, TArray<struct FName>* SwitchValues);
	void StopSound(class UAkSoundCue* Sound);
	class UAkSoundSource* PlaySound(class UAkSoundCue* Sound, const struct FVector& Translation, const struct FRotator& Rotation);
	void SetSwitch(const struct FName& Key, const struct FName& Value);
	void SetRTCP(const struct FName& Key, float Value);
};

// Class AkAudio.AkPlaySoundComponent
// 0x00FB (FullSize[0x0198] - InheritedSize[0x009D])
class UAkPlaySoundComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_C16C[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointer                                    VfTable_IISetParameter;                                    // 0x00A0(0x0008) (Const, Native, NoExport)
	class UAkSoundCue*                                 SoundCue;                                                  // 0x00A8(0x0008) (Edit)
	unsigned long                                      bAutoPlay : 1;                                             // 0x00B0(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bKillSoundOnDetach : 1;                                    // 0x00B0(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bWasAttached : 1;                                          // 0x00B0(0x0001) BIT_FIELD (Const, Transient)
	struct FVector                                     Translation;                                               // 0x00B4(0x000C) (Edit, Const)
	struct FRotator                                    Rotation;                                                  // 0x00C0(0x000C) (Edit, Const)
	float                                              ReFireDelay;                                               // 0x00CC(0x0004) (Edit)
	TEnumAsByte<AkAudio_EAkPlaySoundReceiver>          Receiver;                                                  // 0x00D0(0x0001) (Edit)
	unsigned char                                      UnknownData_VS4G[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               RestartSwitches;                                           // 0x00D8(0x0010) (Edit, NeedCtorLink)
	class UAkSoundSource*                              SoundSource;                                               // 0x00E8(0x0008) (Const, ExportObject, Transient, Component, EditInline)
	float                                              LastPlayTime;                                              // 0x00F0(0x0004) (Const, Transient)
	unsigned char                                      UnknownData_F2OL[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAkParamSet                                 StoredParameters;                                          // 0x00F8(0x00A0) (Const, Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkPlaySoundComponent");
		return ptr;
	}



	void SetActorParameter(const struct FName& Key, class AActor* Value);
	void SetLinearColorParameter(const struct FName& Key, const struct FLinearColor& Value);
	void SetVectorParameter(const struct FName& Key, const struct FVector& Value);
	void SetFloatParameter(const struct FName& Key, float Value);
	void SetNameParameter(const struct FName& Key, const struct FName& Value);
	void SetRTCP(const struct FName& Key, float Value);
	void SetSwitch(const struct FName& Key, const struct FName& Value);
	bool IsPlaying();
	void Stop();
	void Play();
};

// Class AkAudio.AkRevPhysicsSimulation
// 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
class UAkRevPhysicsSimulation : public UObject
{
public:
	float                                              EngineGearRatio;                                           // 0x0060(0x0004) (Edit)
	float                                              EngineFriction;                                            // 0x0064(0x0004) (Edit)
	float                                              GroundFriction;                                            // 0x0068(0x0004) (Edit)
	float                                              WindResistancePerVelocity;                                 // 0x006C(0x0004) (Edit)
	float                                              UpShiftingRPM;                                             // 0x0070(0x0004) (Edit)
	float                                              DownShiftRPM;                                              // 0x0074(0x0004) (Edit)
	float                                              InfiniteGearRatioDecreaseAmount;                           // 0x0078(0x0004) (Edit)
	float                                              ThrottleInterpolationTime;                                 // 0x007C(0x0004) (Edit)
	float                                              EngineTorque;                                              // 0x0080(0x0004) (Transient)
	float                                              BrakingForce;                                              // 0x0084(0x0004) (Transient)
	float                                              WindResistance;                                            // 0x0088(0x0004) (Transient)
	float                                              FrictionResistance;                                        // 0x008C(0x0004) (Transient)
	float                                              EngineResistance;                                          // 0x0090(0x0004) (Transient)
	float                                              NetForce;                                                  // 0x0094(0x0004) (Transient)
	struct FScriptDelegate                             __EventGearChange__Delegate;                               // 0x0098(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_TDMI[0xC];                                     // 0x0098(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkRevPhysicsSimulation");
		return ptr;
	}



	void PrintDebugInfo(class UDebugDrawer* Drawer);
	float InterpGearRatio(struct FAkRevSimUpdateParams* SimUpdate, int Gear);
	float GetGearRatio(struct FAkRevSimUpdateParams* SimUpdate);
	float CalcVelocity(float GearRatio, float RPM);
	float CalcRPM(float GearRatio, float Velocity);
	struct FAkRevSimFrame Step(float DeltaTime, struct FAkRevSimUpdateParams* Params);
	void EventGearChange(class UAkRevPhysicsSimulation* Simulation);
};

// Class AkAudio.AkRTPCDecayComponent
// 0x003F (FullSize[0x00DC] - InheritedSize[0x009D])
class UAkRTPCDecayComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_2PGJ[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       RTPC;                                                      // 0x00A0(0x0008) (Edit)
	float                                              GrowValue;                                                 // 0x00A8(0x0004) (Edit)
	float                                              MaxValue;                                                  // 0x00AC(0x0004) (Edit)
	struct FInterpCurveFloat                           DecayPerSecond;                                            // 0x00B0(0x0018) (Edit, NeedCtorLink)
	class UAkSoundSource*                              SoundSource;                                               // 0x00C8(0x0008) (Const, ExportObject, Transient, Component, EditInline)
	float                                              CurrentValue;                                              // 0x00D0(0x0004) (Const, Transient)
	float                                              LastAttachTime;                                            // 0x00D4(0x0004) (Const, Transient)
	unsigned long                                      bWasAttached : 1;                                          // 0x00D8(0x0001) BIT_FIELD (Const, Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkRTPCDecayComponent");
		return ptr;
	}



};

// Class AkAudio.AkSoundCue
// 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
class UAkSoundCue : public UObject
{
public:
	class UAkBank*                                     RequiredBank;                                              // 0x0060(0x0008) (Edit)
	struct FString                                     StartEvent;                                                // 0x0068(0x0010) (Edit, NeedCtorLink)
	struct FString                                     StopEvent;                                                 // 0x0078(0x0010) (Edit, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSoundCue");
		return ptr;
	}



};

// Class AkAudio.AkSoundSource
// 0x00FB (FullSize[0x0198] - InheritedSize[0x009D])
class UAkSoundSource : public UActorComponent
{
public:
	unsigned char                                      UnknownData_87NM[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Translation;                                               // 0x00A0(0x000C) (Edit, Const)
	struct FRotator                                    Rotation;                                                  // 0x00AC(0x000C) (Edit, Const)
	unsigned long                                      bDetachOnComplete : 1;                                     // 0x00B8(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      bRegistered : 1;                                           // 0x00B8(0x0001) BIT_FIELD (Const, Transient)
	unsigned long                                      bUpdateOrientation : 1;                                    // 0x00B8(0x0001) BIT_FIELD (Const, Transient)
	unsigned char                                      UnknownData_AWYB[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMatrix                                     CachedParentToWorld;                                       // 0x00C0(0x0040) (Const, Transient)
	struct FVector                                     WorldLocation;                                             // 0x0100(0x000C) (Const, Transient)
	struct FRotator                                    WorldRotation;                                             // 0x010C(0x000C) (Const, Transient)
	class UAkParamGroup*                               Params;                                                    // 0x0118(0x0008) (Const, ExportObject, Transient, Component, EditInline)
	TArray<struct FActiveSound>                        ActiveSounds;                                              // 0x0120(0x0010) (Const, Transient, NeedCtorLink)
	TEnumAsByte<AkAudio_EAkEnvironmentType>            EnvironmentType;                                           // 0x0130(0x0001) (Transient)
	unsigned char                                      UnknownData_5ZXC[0x7];                                     // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<AkAudio_EAkCallbackType>>       CallbackTypes;                                             // 0x0138(0x0010) (NeedCtorLink)
	struct FPointer                                    SoundSourceId;                                             // 0x0148(0x0008) (Native, Transient)
	struct FScriptDelegate                             __EventFinished__Delegate;                                 // 0x0150(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_LD0J[0xC];                                     // 0x0150(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventMarker__Delegate;                                   // 0x0168(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_202E[0xC];                                     // 0x0168(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDuration__Delegate;                                 // 0x0180(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_ALAX[0xC];                                     // 0x0180(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSoundSource");
		return ptr;
	}



	void SetSubtitlesEnabled(bool bValue);
	void SetAttenuationScaling(TEnumAsByte<AkAudio_EAttenuationType> AttenuationType);
	void ForceUpdatePosition();
	void RegisterReflectionEmitter(const struct FName& BusName, TEnumAsByte<AkAudio_EBusEmitterType> BusType);
	bool IsPlayingAny();
	bool IsPlaying(class UAkSoundCue* Sound);
	void Seek(class UAkSoundCue* Sound, float SeekSeconds);
	void StopAll();
	void Stop(class UAkSoundCue* Sound);
	int Play(class UAkSoundCue* Sound);
	void EventDuration(class UAkSoundSource* Source, int PlayingID, float DurationMS);
	void EventMarker(class UAkSoundSource* Source, int PlayingID, const struct FString& Marker);
	void EventFinished(class UAkSoundSource* Source, int PlayingID);
};

// Class AkAudio.AkSwitch
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UAkSwitch : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSwitch");
		return ptr;
	}



};

// Class AkAudio.InterpTrackAkEvent
// 0x0018 (FullSize[0x00DC] - InheritedSize[0x00C4])
class UInterpTrackAkEvent : public UInterpTrack
{
public:
	unsigned char                                      UnknownData_SCQG[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAkEventTrackKey>                    AkEvents;                                                  // 0x00C8(0x0010) (NeedCtorLink)
	float                                              SeekTimeSeconds;                                           // 0x00D8(0x0004) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackAkEvent");
		return ptr;
	}



};

// Class AkAudio.InterpTrackAkRTPC
// 0x0014 (FullSize[0x00F8] - InheritedSize[0x00E4])
class UInterpTrackAkRTPC : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData_Z4MV[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Param;                                                     // 0x00E8(0x0010) (Edit, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackAkRTPC");
		return ptr;
	}



};

// Class AkAudio.InterpTrackInstAkEvent
// 0x0004 (FullSize[0x0064] - InheritedSize[0x0060])
class UInterpTrackInstAkEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                        // 0x0060(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkEvent");
		return ptr;
	}



};

// Class AkAudio.InterpTrackInstAkRTPC
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UInterpTrackInstAkRTPC : public UInterpTrackInst
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkRTPC");
		return ptr;
	}



};

// Class AkAudio.SeqAct_AkClearBanks
// 0x0000 (FullSize[0x0160] - InheritedSize[0x0160])
class USeqAct_AkClearBanks : public USequenceAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkClearBanks");
		return ptr;
	}



};

// Class AkAudio.SeqAct_AkEnvironment
// 0x0021 (FullSize[0x0181] - InheritedSize[0x0160])
class USeqAct_AkEnvironment : public USequenceAction
{
public:
	struct FAkEnvironment                              Environment;                                               // 0x0160(0x0020) (Edit, NeedCtorLink)
	TEnumAsByte<AkAudio_EAkEnvironmentTarget>          Target;                                                    // 0x0180(0x0001) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkEnvironment");
		return ptr;
	}



};

// Class AkAudio.SeqAct_AkLoadBank
// 0x0014 (FullSize[0x018C] - InheritedSize[0x0178])
class USeqAct_AkLoadBank : public USeqAct_Latent
{
public:
	unsigned long                                      Async : 1;                                                 // 0x0178(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bWaitingCallback : 1;                                      // 0x0178(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownData_JZR6[0x4];                                     // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkBank*                                     Bank;                                                      // 0x0180(0x0008) (Edit)
	int                                                Signal;                                                    // 0x0188(0x0004) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkLoadBank");
		return ptr;
	}



};

// Class AkAudio.SeqAct_AkPlayMusicWithCues
// 0x0018 (FullSize[0x0190] - InheritedSize[0x0178])
class USeqAct_AkPlayMusicWithCues : public USeqAct_Latent
{
public:
	class UAkSoundCue*                                 SoundCue;                                                  // 0x0178(0x0008) (Edit)
	TArray<struct FMusicSyncEvent>                     MusicSyncEvents;                                           // 0x0180(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkPlayMusicWithCues");
		return ptr;
	}



	void TriggerEvents(const struct FString& CueName);
};

// Class AkAudio.SeqAct_AkPlaySound
// 0x000C (FullSize[0x016C] - InheritedSize[0x0160])
class USeqAct_AkPlaySound : public USequenceAction
{
public:
	class UAkSoundCue*                                 SoundCue;                                                  // 0x0160(0x0008) (Edit)
	unsigned long                                      bBGMusic : 1;                                              // 0x0168(0x0001) BIT_FIELD (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkPlaySound");
		return ptr;
	}



	void ToggleSoundFor(class AActor* A, bool bPlay);
	void ToggleSound(bool bPlay);
	void Activated();
};

// Class AkAudio.SeqAct_AkPostEvent
// 0x001C (FullSize[0x0194] - InheritedSize[0x0178])
class USeqAct_AkPostEvent : public USeqAct_Latent
{
public:
	TArray<int>                                        PlayingIDs;                                                // 0x0178(0x0010) (Const, Transient, NeedCtorLink)
	class UAkSoundCue*                                 SoundCue;                                                  // 0x0188(0x0008) (Edit)
	unsigned long                                      bHasSubtitles : 1;                                         // 0x0190(0x0001) BIT_FIELD (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkPostEvent");
		return ptr;
	}



	void HandleSoundCueFinished(class UAkSoundSource* Source, int PlayingID);
};

// Class AkAudio.SeqAct_AkPostTrigger
// 0x0010 (FullSize[0x0170] - InheritedSize[0x0160])
class USeqAct_AkPostTrigger : public USequenceAction
{
public:
	struct FString                                     Trigger;                                                   // 0x0160(0x0010) (Edit, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkPostTrigger");
		return ptr;
	}



};

// Class AkAudio.SeqAct_AkSetRTPCValue
// 0x0018 (FullSize[0x0190] - InheritedSize[0x0178])
class USeqAct_AkSetRTPCValue : public USeqAct_Latent
{
public:
	struct FString                                     Param;                                                     // 0x0178(0x0010) (Edit, NeedCtorLink)
	float                                              Value;                                                     // 0x0188(0x0004) (Edit)
	unsigned long                                      Running : 1;                                               // 0x018C(0x0001) BIT_FIELD (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkSetRTPCValue");
		return ptr;
	}



};

// Class AkAudio.SeqAct_AkSetState
// 0x0020 (FullSize[0x0180] - InheritedSize[0x0160])
class USeqAct_AkSetState : public USequenceAction
{
public:
	struct FString                                     StateGroup;                                                // 0x0160(0x0010) (Edit, NeedCtorLink)
	struct FString                                     State;                                                     // 0x0170(0x0010) (Edit, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkSetState");
		return ptr;
	}



};

// Class AkAudio.SeqAct_AkSetSwitch
// 0x0020 (FullSize[0x0180] - InheritedSize[0x0160])
class USeqAct_AkSetSwitch : public USequenceAction
{
public:
	struct FString                                     SwitchGroup;                                               // 0x0160(0x0010) (Edit, NeedCtorLink)
	struct FString                                     Switch;                                                    // 0x0170(0x0010) (Edit, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkSetSwitch");
		return ptr;
	}



};

// Class AkAudio.SeqAct_AkStartAmbientSound
// 0x0000 (FullSize[0x0160] - InheritedSize[0x0160])
class USeqAct_AkStartAmbientSound : public USequenceAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkStartAmbientSound");
		return ptr;
	}



};

// Class AkAudio.SeqAct_AkStopAll
// 0x0000 (FullSize[0x0160] - InheritedSize[0x0160])
class USeqAct_AkStopAll : public USequenceAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkStopAll");
		return ptr;
	}



};

// Class AkAudio.AkAudioDevice
// 0x00E0 (FullSize[0x0148] - InheritedSize[0x0068])
class UAkAudioDevice : public USubsystem
{
public:
	unsigned char                                      UnknownData_PKND[0x18];                                    // 0x0068(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LowMemoryThreshold;                                        // 0x0080(0x0004) (Config)
	int                                                DefaultEngineMemoryPoolKB;                                 // 0x007C(0x0004) (Config)
	int                                                DefaultMemoryPoolKB;                                       // 0x0078(0x0004) (Config)
	unsigned char                                      UnknownData_1D8G[0xCC];                                    // 0x007C(0x00CC) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioDevice");
		return ptr;
	}



};

// Class AkAudio.AkAmbientSoundActor
// 0x0008 (FullSize[0x0278] - InheritedSize[0x0270])
class AAkAmbientSoundActor : public AKeypoint
{
public:
	class UAkPlaySoundComponent*                       PlaySoundComponent;                                        // 0x0270(0x0008) (Edit, ExportObject, Component, EditInline)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAmbientSoundActor");
		return ptr;
	}



	void OnToggle(class USeqAct_Toggle* Action);
};

// Class AkAudio.SeqEvent_AkMusicCue
// 0x0014 (FullSize[0x0190] - InheritedSize[0x017C])
class USeqEvent_AkMusicCue : public USequenceEvent
{
public:
	unsigned char                                      UnknownData_3198[0x4];                                     // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CueName;                                                   // 0x0180(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqEvent_AkMusicCue");
		return ptr;
	}



};

// Class AkAudio.SeqAct_AkPlaySoundAndSeek
// 0x0018 (FullSize[0x0178] - InheritedSize[0x0160])
class USeqAct_AkPlaySoundAndSeek : public USequenceAction
{
public:
	class UAkSoundCue*                                 SoundCue;                                                  // 0x0160(0x0008) (Edit)
	float                                              StartLocationSeconds;                                      // 0x0168(0x0004) (Edit)
	unsigned char                                      UnknownData_G8TX[0x4];                                     // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkSoundSource*                              SoundSource;                                               // 0x0170(0x0008) (ExportObject, Transient, Component, EditInline)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkPlaySoundAndSeek");
		return ptr;
	}



	void ToggleSoundFor(class AActor* A, bool bPlay);
	void ToggleSound(bool bPlay);
	void Activated();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
