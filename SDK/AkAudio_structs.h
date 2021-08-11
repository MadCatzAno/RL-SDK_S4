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

// Enum AkAudio.AkPlaySoundComponent.EAkPlaySoundReceiver
enum class AkAudio_EAkPlaySoundReceiver : uint8_t
{
	PlaySoundReceiver_All          = 0,
	PlaySoundReceiver_Local        = 1,
	PlaySoundReceiver_NonLocal     = 2,
	PlaySoundReceiver_MAX          = 3,

};

// Enum AkAudio.AkDevice.EAkOutputType
enum class AkAudio_EAkOutputType : uint8_t
{
	AkOT_Speakers                  = 0,
	AKOT_Headphones                = 1,
	EAkOutputType_MAX              = 2,

};

// Enum AkAudio.AkDevice.EAkListenerSpacialization
enum class AkAudio_EAkListenerSpacialization : uint8_t
{
	AkLS_3D                        = 0,
	AkLS_Left                      = 1,
	AkLS_Right                     = 2,
	AkLS_MAX                       = 3,

};

// Enum AkAudio.AkDevice.EAkDynamicRangeType
enum class AkAudio_EAkDynamicRangeType : uint8_t
{
	AkDRT_Low                      = 0,
	AkDRT_Medium                   = 1,
	AkDRT_High                     = 2,
	AkDRT_MAX                      = 3,

};

// Enum AkAudio.AkSoundSource.EAkEnvironmentType
enum class AkAudio_EAkEnvironmentType : uint8_t
{
	EnvironmentType_SpatializedAudio = 0,
	EnvironmentType_UnspatializedAudio = 1,
	EnvironmentType_Music          = 2,
	EnvironmentType_None           = 3,
	EnvironmentType_MAX            = 4,

};

// Enum AkAudio.AkParamGroup.EAttenuationType
enum class AkAudio_EAttenuationType : uint8_t
{
	AttenuationType_Default        = 0,
	AttenuationType_None           = 1,
	AttenuationType_MAX            = 2,

};

// Enum AkAudio.AkParamGroup.EReflectionSendType
enum class AkAudio_EReflectionSendType : uint8_t
{
	ReflectionSendType_None        = 0,
	ReflectionSendType_Slapback    = 1,
	ReflectionSendType_ArenaReverb = 2,
	ReflectionSendType_MAX         = 3,

};

// Enum AkAudio.AkBusActor.EBusEmitterType
enum class AkAudio_EBusEmitterType : uint8_t
{
	BusEmitterType_Reflection      = 0,
	BusEmitterType_Reverb          = 1,
	BusEmitterType_None            = 2,
	BusEmitterType_MAX             = 3,

};

// Enum AkAudio.AkBusActor.EPinnedAxisType
enum class AkAudio_EPinnedAxisType : uint8_t
{
	PinnedAxis_X                   = 0,
	PinnedAxis_Y                   = 1,
	PinnedAxis_Z                   = 2,
	PinnedAxis_None                = 3,
	PinnedAxis_MAX                 = 4,

};

// Enum AkAudio.AkSoundSource.EAkCallbackType
enum class AkAudio_EAkCallbackType : uint8_t
{
	AkCallbackType_Marker          = 0,
	AkCallbackType_Duration        = 1,
	AkCallbackType_MAX             = 2,

};

// Enum AkAudio.SeqAct_AkEnvironment.EAkEnvironmentTarget
enum class AkAudio_EAkEnvironmentTarget : uint8_t
{
	AkEnvironmentTarget_LevelDefault = 0,
	AkEnvironmentTarget_Actor      = 1,
	AkEnvironmentTarget_MAX        = 2,

};

// Enum AkAudio.SeqAct_AkPlayMusicWithCues.EMusicSyncType
enum class AkAudio_EMusicSyncType : uint8_t
{
	MusicSyncType_EndOfEvent       = 0,
	MusicSyncType_UserCue          = 1,
	MusicSyncType_MAX              = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AkAudio.AkEnvironments.uint
// 0x0004
struct Fuint
{
	int                                                dummyint;                                                  // 0x0000(0x0004)

};

// ScriptStruct AkAudio.AkEnvironments.AkEnvironment
// 0x0020
struct FAkEnvironment
{
	struct FString                                     Id;                                                        // 0x0000(0x0010) (Edit, NeedCtorLink)
	int                                                Priority;                                                  // 0x0010(0x0004) (Edit)
	float                                              WetValue;                                                  // 0x0014(0x0004) (Edit)
	float                                              DryValue;                                                  // 0x0018(0x0004) (Edit)
	struct Fuint                                       HashedEnvID;                                               // 0x001C(0x0004) (Const)

};

// ScriptStruct AkAudio.AkEnvironments.AkActorEnvironment
// 0x0018
struct FAkActorEnvironment
{
	TArray<struct FAkEnvironment>                      Environments;                                              // 0x0000(0x0010) (NeedCtorLink)
	class AActor*                                      TargetActor;                                               // 0x0010(0x0008)

};

// ScriptStruct AkAudio.AkMusicAnalysis.MusicAnalysisInfo
// 0x001C
struct FMusicAnalysisInfo
{
	float                                              LowEnergy;                                                 // 0x0000(0x0004)
	unsigned char                                      UnknownData_QHQL[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      Frequencies;                                               // 0x0008(0x0010) (NeedCtorLink)
	float                                              HighEnergy;                                                // 0x0018(0x0004)

};

// ScriptStruct AkAudio.AkParamGroup.AkParamSet
// 0x00A0
struct FAkParamSet
{
	struct FMap_Mirror                                 RTCPs;                                                     // 0x0000(0x0050) (Const, Native)
	struct FMap_Mirror                                 Switches;                                                  // 0x0050(0x0050) (Const, Native)

};

// ScriptStruct AkAudio.AkRevPhysicsSimulation.AkRevSimPhysicsControls
// 0x0020
struct FAkRevSimPhysicsControls
{
	float                                              Weight;                                                    // 0x0000(0x0004) (Edit)
	float                                              EngineTorque;                                              // 0x0004(0x0004) (Edit)
	float                                              BreakingHorsePower;                                        // 0x0008(0x0004) (Edit)
	unsigned char                                      UnknownData_SXBR[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      GearRatios;                                                // 0x0010(0x0010) (Edit, NeedCtorLink)

};

// ScriptStruct AkAudio.AkRevPhysicsSimulation.AkRevSimFrame
// 0x0010
struct FAkRevSimFrame
{
	float                                              RPM;                                                       // 0x0000(0x0004)
	int                                                Gear;                                                      // 0x0004(0x0004)
	int                                                RevGear;                                                   // 0x0008(0x0004)
	float                                              Velocity;                                                  // 0x000C(0x0004)

};

// ScriptStruct AkAudio.AkRevPhysicsSimulation.AkRevSimUpdateParams
// 0x0048
struct FAkRevSimUpdateParams
{
	float                                              Throttle;                                                  // 0x0000(0x0004)
	float                                              Brake;                                                     // 0x0004(0x0004)
	float                                              EngineFrictionScale;                                       // 0x0008(0x0004)
	float                                              GroundFrictionScale;                                       // 0x000C(0x0004)
	float                                              ClutchedGearRatio;                                         // 0x0010(0x0004)
	unsigned long                                      bEnableUpShifting : 1;                                     // 0x0014(0x0001) BIT_FIELD
	struct FAkRevSimPhysicsControls                    Controls;                                                  // 0x0018(0x0020) (NeedCtorLink)
	struct FAkRevSimFrame                              frame;                                                     // 0x0038(0x0010)

};

// ScriptStruct AkAudio.AkSoundSource.ActiveSound
// 0x0010
struct FActiveSound
{
	class UAkSoundCue*                                 Sound;                                                     // 0x0000(0x0008)
	int                                                PlayId;                                                    // 0x0008(0x0004)
	int                                                StopId;                                                    // 0x000C(0x0004)

};

// ScriptStruct AkAudio.InterpTrackAkEvent.AkEventTrackKey
// 0x0010
struct FAkEventTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004)
	unsigned char                                      UnknownData_VW2B[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkSoundCue*                                 Event;                                                     // 0x0008(0x0008) (Edit)

};

// ScriptStruct AkAudio.SeqAct_AkPlayMusicWithCues.MusicSyncEvent
// 0x0011
struct FMusicSyncEvent
{
	struct FString                                     CueName;                                                   // 0x0000(0x0010) (NeedCtorLink)
	TEnumAsByte<AkAudio_EMusicSyncType>                CueType;                                                   // 0x0010(0x0001)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
