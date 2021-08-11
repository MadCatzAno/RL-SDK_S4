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
// Constants
//---------------------------------------------------------------------------

#define CONST_ZeroRotator                                        Rot(0,0,0)
#define CONST_ZeroVector                                         Vect(0,0,0)
#define CONST_UpVector                                           Vect(0,0,1)
#define CONST_RightVector                                        Vect(0,1,0)
#define CONST_ForwardVector                                      Vect(1,0,0)
#define CONST_InvAspectRatio16x9                                 0.56249
#define CONST_InvAspectRatio5x4                                  0.8
#define CONST_InvAspectRatio4x3                                  0.75
#define CONST_AspectRatio16x9                                    1.77778
#define CONST_AspectRatio5x4                                     1.25
#define CONST_AspectRatio4x3                                     1.33333
#define CONST_INDEX_NONE                                         -1
#define CONST_UnrRotToDeg                                        0.00549316540360483
#define CONST_DegToUnrRot                                        182.0444
#define CONST_RadToUnrRot                                        10430.3783504704527
#define CONST_UnrRotToRad                                        0.00009587379924285
#define CONST_DegToRad                                           0.017453292519943296
#define CONST_RadToDeg                                           57.295779513082321600
#define CONST_Pi                                                 3.1415926535897932
#define CONST_MaxQWORD                                           0xFFFFFFFFFFFFFFFF
#define CONST_MinInt                                             0x80000000
#define CONST_MaxInt                                             0x7fffffff
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Core.Object.EEdition
enum class Core_EEdition : uint8_t
{
	Edition_Default                = 0,
	Edition_China                  = 1,
	Edition_MAX                    = 2,

};

// Enum Core.Object.EDebugBreakType
enum class Core_EDebugBreakType : uint8_t
{
	DEBUGGER_NativeOnly            = 0,
	DEBUGGER_ScriptOnly            = 1,
	DEBUGGER_Both                  = 2,
	DEBUGGER_MAX                   = 3,

};

// Enum Core.Object.EAspectRatioAxisConstraint
enum class Core_EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV       = 0,
	AspectRatio_MaintainXFOV       = 1,
	AspectRatio_MajorAxisFOV       = 2,
	AspectRatio_MAX                = 3,

};

// Enum Core.Object.EAutomatedRunResult
enum class Core_EAutomatedRunResult : uint8_t
{
	ARR_Unknown                    = 0,
	ARR_OOM                        = 1,
	ARR_Passed                     = 2,
	ARR_MAX                        = 3,

};

// Enum Core.Object.EInterpCurveMode
enum class Core_EInterpCurveMode : uint8_t
{
	CIM_Linear                     = 0,
	CIM_CurveAuto                  = 1,
	CIM_Constant                   = 2,
	CIM_CurveUser                  = 3,
	CIM_CurveBreak                 = 4,
	CIM_CurveAutoClamped           = 5,
	CIM_MAX                        = 6,

};

// Enum Core.Object.EInterpMethodType
enum class Core_EInterpMethodType : uint8_t
{
	IMT_UseFixedTangentEvalAndNewAutoTangents = 0,
	IMT_UseFixedTangentEval        = 1,
	IMT_UseBrokenTangentEval       = 2,
	IMT_MAX                        = 3,

};

// Enum Core.Object.EAxis
enum class Core_EAxis : uint8_t
{
	AXIS_NONE                      = 0,
	AXIS_X                         = 1,
	AXIS_Y                         = 2,
	AXIS_BLANK                     = 3,
	AXIS_Z                         = 4,
	AXIS_MAX                       = 5,

};

// Enum Core.Object.ETickingGroup
enum class Core_ETickingGroup : uint8_t
{
	TG_PreAsyncWork                = 0,
	TG_DuringAsyncWork             = 1,
	TG_PostAsyncWork               = 2,
	TG_PostUpdateWork              = 3,
	TG_EffectsUpdateWork           = 4,
	TG_MAX                         = 5,

};

// Enum Core.Object.EInputEvent
enum class Core_EInputEvent : uint8_t
{
	IE_Pressed                     = 0,
	IE_Released                    = 1,
	IE_Repeat                      = 2,
	IE_DoubleClick                 = 3,
	IE_Axis                        = 4,
	IE_MAX                         = 5,

};

// Enum Core.Object.AlphaBlendType
enum class Core_EAlphaBlendType : uint8_t
{
	ABT_Linear                     = 0,
	ABT_Cubic                      = 1,
	ABT_Sinusoidal                 = 2,
	ABT_EaseInOutExponent2         = 3,
	ABT_EaseInOutExponent3         = 4,
	ABT_EaseInOutExponent4         = 5,
	ABT_EaseInOutExponent5         = 6,
	ABT_MAX                        = 7,

};

// Enum Core.DistributionVector.EDistributionVectorLockFlags
enum class Core_EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None                     = 0,
	EDVLF_XY                       = 1,
	EDVLF_XZ                       = 2,
	EDVLF_YZ                       = 3,
	EDVLF_XYZ                      = 4,
	EDVLF_MAX                      = 5,

};

// Enum Core.DistributionVector.EDistributionVectorMirrorFlags
enum class Core_EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same                     = 0,
	EDVMF_Different                = 1,
	EDVMF_Mirror                   = 2,
	EDVMF_MAX                      = 3,

};

// Enum Core._Types_Core.OnlinePlatform
enum class Core_EOnlinePlatform : uint8_t
{
	OnlinePlatform_Unknown         = 0,
	OnlinePlatform_Steam           = 1,
	OnlinePlatform_PS4             = 2,
	OnlinePlatform_PS3             = 3,
	OnlinePlatform_Dingo           = 4,
	OnlinePlatform_QQ              = 5,
	OnlinePlatform_OldNNX          = 6,
	OnlinePlatform_NNX             = 7,
	OnlinePlatform_PsyNet          = 8,
	OnlinePlatform_Deleted         = 9,
	OnlinePlatform_WeGame          = 10,
	OnlinePlatform_Epic            = 11,
	OnlinePlatform_MAX             = 12,

};

// Enum Core._Types_Core.EImageType
enum class Core_EImageType : uint8_t
{
	EIT_Unknown                    = 0,
	EIT_JPEG                       = 1,
	EIT_PNG                        = 2,
	EIT_MAX                        = 3,

};

// Enum Core._Types_Core.EInputAPI
enum class Core_EInputAPI : uint8_t
{
	InputAPI_Default               = 0,
	InputAPI_SteamInput            = 1,
	InputAPI_MAX                   = 2,

};

// Enum Core._Types_Core.EFlushResult
enum class Core_EFlushResult : uint8_t
{
	FlushResult_Success            = 0,
	FlushResult_InProgress         = 1,
	FlushResult_TimedOut           = 2,
	FlushResult_MAX                = 3,

};

// Enum Core._Types_Generated.EContentKeyIndex_ContinuousIntegration
enum class Core_EContentKeyIndex_ContinuousIntegration : uint8_t
{
	ContinuousIntegration_A21E529632046B5DAA3373A6051D7164 = 0,
	ContinuousIntegration_8C0B2C5877659E4548B294EA142D4C7A = 1,
	ContinuousIntegration_BC2E369B178A16B81F7B990426A8D59F = 2,
	ContinuousIntegration_0834F4083483791F04893BE705044600 = 3,
	ContinuousIntegration_MAX      = 4,

};

// Enum Core._Types_Generated.EContentKeyIndex_PrimeUpdate35
enum class Core_EContentKeyIndex_PrimeUpdate35 : uint8_t
{
	PrimeUpdate35_904C03345B5306946918E821FFD0557D = 0,
	PrimeUpdate35_7D2BD3C4466DC9DCB376054A00FD8704 = 1,
	PrimeUpdate35_95D345AF6F80E57FF039F0AF309CF397 = 2,
	PrimeUpdate35_8895661B346552E41E98626288616FDB = 3,
	PrimeUpdate35_4936E2EC04B35A4C33132DB942EEFBF9 = 4,
	PrimeUpdate35_E4CE5BA9AE7B7CF44E87C642A1B2075F = 5,
	PrimeUpdate35_AB8CA32A6AC22D1BCD733B45AAF3E516 = 6,
	PrimeUpdate35_82504C8CB31FDBF83749FDB9D4647B22 = 7,
	PrimeUpdate35_0F79BF2A330B5F14F6F1B334BAD190B8 = 8,
	PrimeUpdate35_2FE48155423D40CAD4A7C1E13DFCA010 = 9,
	PrimeUpdate35_85B7C89F12D13A7FC7C1BF63F2223D07 = 10,
	PrimeUpdate35_8C08D9BB2ECFFE7FCB5E1C9ADA0C6915 = 11,
	PrimeUpdate35_30D1E752D5CC3D535314F48E0155BC8B = 12,
	PrimeUpdate35_9DB24424FFE117E4360FB889EC00EBC4 = 13,
	PrimeUpdate35_8B91A692CFC5CEF406CF0B7A5340F490 = 14,
	PrimeUpdate35_A71FDE17430E717C0EA90A81E08C7D09 = 15,
	PrimeUpdate35_F3CB1DE67976A82AF24C37EA7BF28116 = 16,
	PrimeUpdate35_B8FB465286F92DA86FCFFABCD943FC43 = 17,
	PrimeUpdate35_7BD907E5EE245062AD8C8911144583B3 = 18,
	PrimeUpdate35_2F59A5E90E71DA06C07E887054F77C0A = 19,
	PrimeUpdate35_MAX              = 20,

};

// Enum Core._Types_Generated.EContentKeyIndex_PrimeUpdate34
enum class Core_EContentKeyIndex_PrimeUpdate34 : uint8_t
{
	PrimeUpdate34_92E48285E52D9C5376465AFA3C483D21 = 0,
	PrimeUpdate34_798E5021EB2EE0D9150525103009597E = 1,
	PrimeUpdate34_3E57F996CC259382D4F9D60DD3411999 = 2,
	PrimeUpdate34_980D75703713C7B361FA6663369415DD = 3,
	PrimeUpdate34_0BB7B0C3C62B7BC62A8CF5AE4224313F = 4,
	PrimeUpdate34_16684068F60C3BEF59FCA6681DEFC634 = 5,
	PrimeUpdate34_8638D056E206619C71F7358A3112AA75 = 6,
	PrimeUpdate34_119863391AC5E311B66BF5EB49A7E392 = 7,
	PrimeUpdate34_DCA6627ACE5BE1A3D82E699E38B383BA = 8,
	PrimeUpdate34_F44577CDD9D45CBF49CEDC32EE829FC1 = 9,
	PrimeUpdate34_4D75D62B40DE98B190090EB2851E7598 = 10,
	PrimeUpdate34_D0378645638D7FE611F959E71B989E88 = 11,
	PrimeUpdate34_F67C94735DF24D72CE6E0983445EFF94 = 12,
	PrimeUpdate34_677E188D9A579ADE3F2CD3747D225C24 = 13,
	PrimeUpdate34_F7E58DABA865EC58A2D4496DE3C4375F = 14,
	PrimeUpdate34_C2BD319DE1987E7D4DD851CCA2A06FCC = 15,
	PrimeUpdate34_B8CBE903CC7AE40A7F668F6427E57098 = 16,
	PrimeUpdate34_D0A8BEDB5EB633D376B288A6729F2958 = 17,
	PrimeUpdate34_6D8E086B4A152E4BD9059DC67E9A5330 = 18,
	PrimeUpdate34_D93828EBD836F1BEEF0BA345FF2D7D2B = 19,
	PrimeUpdate34_584D6260FEA4A45FBEC3729A47F32A2C = 20,
	PrimeUpdate34_525D1944EF49B6263813E9C33FE9A2E7 = 21,
	PrimeUpdate34_EB7F8E2F3CD896BECB59816B49A8225D = 22,
	PrimeUpdate34_F53E63F89C250939560481ACF2EB4F57 = 23,
	PrimeUpdate34_1EFD13089FD99C03404F686ABB842FC1 = 24,
	PrimeUpdate34_CE1C329C9C4A36B5347CDDFC34E6FE74 = 25,
	PrimeUpdate34_AA31999372C5419377BC328A124FA260 = 26,
	PrimeUpdate34_1FEC83F0FCACE770E7D580C38DBA0B7C = 27,
	PrimeUpdate34_380201BF1433CCFDC60B75AA5A1F27A0 = 28,
	PrimeUpdate34_0B5FB027AD52B9D07E7C6610F51D049B = 29,
	PrimeUpdate34_AAF86940AE1401B7904BB3F1B7F0BF84 = 30,
	PrimeUpdate34_A2EEFC632E25737A361937883AA2B9E3 = 31,
	PrimeUpdate34_25DFE6D61E4B7BB4B8F48EA4C2893C30 = 32,
	PrimeUpdate34_9A1D6F3529477B911753DA025ADE429F = 33,
	PrimeUpdate34_1CA56D0C508FF3D00C3347E82B5396F8 = 34,
	PrimeUpdate34_E648CD9F3659F31EF46715B3FB73EF16 = 35,
	PrimeUpdate34_36892DC2D16FE232BA96D6E8B9E5288E = 36,
	PrimeUpdate34_AED24E43D476A4470C99AABEE2C53673 = 37,
	PrimeUpdate34_32B30CAF516C298774B59FC806B3B6AA = 38,
	PrimeUpdate34_02A902A86328CF57E63A7D1AD763DE60 = 39,
	PrimeUpdate34_C4C41667DE1E754135DE7DB5710A24DD = 40,
	PrimeUpdate34_6AF47E33D558FC35C2FEB7A9D9ACAC59 = 41,
	PrimeUpdate34_9C6ABEFD5E0C4F2DE3A2F7D146FAF952 = 42,
	PrimeUpdate34_F3CA5A2918490945C363517319A0C2EC = 43,
	PrimeUpdate34_8592B9C622C8A3189DB3B4E2C2362142 = 44,
	PrimeUpdate34_AC0C2D53149AD444AEFA1F9F7F29D39E = 45,
	PrimeUpdate34_074B3338DD2160921DB2DF191227F03E = 46,
	PrimeUpdate34_BF336D6E7DAC9A696838C3A788CEA62E = 47,
	PrimeUpdate34_67FB8392992984DA262E637A376E2318 = 48,
	PrimeUpdate34_775260504F332F70DB926CD3CD7E63A7 = 49,
	PrimeUpdate34_258F7CD5F76794C5180F23D0AB71E40C = 50,
	PrimeUpdate34_6177123148139D8930D4DFEA95501359 = 51,
	PrimeUpdate34_A09893A74F7796FC0D23ADDF21E51A68 = 52,
	PrimeUpdate34_72481FA8D257BD5935DC6BFAAFFE37B2 = 53,
	PrimeUpdate34_A8A33573BBF97BC994426669BA945F97 = 54,
	PrimeUpdate34_43A538B20CFD5AE55EBE8327D70618AA = 55,
	PrimeUpdate34_C309EEE625F26444CB456A7C3738519D = 56,
	PrimeUpdate34_40370551AA833BA691B954D5F223D20E = 57,
	PrimeUpdate34_1D49DD289EEBB9EF24BD0DC1DC8790C7 = 58,
	PrimeUpdate34_AAE20A592337576246339356A56D13CC = 59,
	PrimeUpdate34_44C670308CD575930F330390E81F5DFD = 60,
	PrimeUpdate34_7EA963419DAF9F1F789AA0BCFA32504F = 61,
	PrimeUpdate34_418B733466B3543D3FF771D598D8E4F8 = 62,
	PrimeUpdate34_185C6E063F04824C1408EA9670595259 = 63,
	PrimeUpdate34_70F0016A0CCAAB0D71EDF0DA29C52171 = 64,
	PrimeUpdate34_3F24725E47D67DD20FE3AD9F35AEF209 = 65,
	PrimeUpdate34_MAX              = 66,

};

// Enum Core._Types_Generated.EContentKeyIndex_PrimeUpdate33
enum class Core_EContentKeyIndex_PrimeUpdate33 : uint8_t
{
	PrimeUpdate33_9859F4962ED9225261C1735A9B0F6A7F = 0,
	PrimeUpdate33_C212DFEF60853EEB61ACA8181A89A15F = 1,
	PrimeUpdate33_C418C87964E1BB0C7DCB3E70779FB44B = 2,
	PrimeUpdate33_1FEB11B693427C63E457203E461639E3 = 3,
	PrimeUpdate33_4ED08FC09FB52F44407423877E04CACA = 4,
	PrimeUpdate33_DBFAF049AEB30397815B08553C60FB59 = 5,
	PrimeUpdate33_8A88FA4B1CFBE1E21536C648BBD4F23E = 6,
	PrimeUpdate33_F59B6D4EFACF226D4B590EB3B22A9C34 = 7,
	PrimeUpdate33_B435739A7F1C97EF5F1D7554AC117749 = 8,
	PrimeUpdate33_3920915610E4452D9178C330AC20EBFA = 9,
	PrimeUpdate33_BE72EF04B58AF461A7D85A77B48EE37A = 10,
	PrimeUpdate33_E7BE7D7122884CEEF63FBC297632C761 = 11,
	PrimeUpdate33_F23A298C56E7EBF4CF8C6875F03BFE72 = 12,
	PrimeUpdate33_ECB007102C74731082C7272DD98D502A = 13,
	PrimeUpdate33_618F822EFD2AA0D7B69A35C84C600564 = 14,
	PrimeUpdate33_E80A98F4841B3861D085BBE347233903 = 15,
	PrimeUpdate33_5EE9F2BC8C9CA242782C40CF779804CE = 16,
	PrimeUpdate33_3A7BDFD41C45E477C990F83772DDE5FF = 17,
	PrimeUpdate33_ED459D7A6FE5DBCECABA1F93BD49247B = 18,
	PrimeUpdate33_6C677BD35A184A2BB0EBAB421BC55E39 = 19,
	PrimeUpdate33_7ED0D8CF98C35C1549F175290231FC02 = 20,
	PrimeUpdate33_E48D95A331BB274C1F99297A1AEF0A9A = 21,
	PrimeUpdate33_78C0060D1C5191F62C68D4DED6FCE798 = 22,
	PrimeUpdate33_15ABD202609BD1609F930B708BCD7208 = 23,
	PrimeUpdate33_3F18B0F70069D6ADF8C0E2B783B36BC5 = 24,
	PrimeUpdate33_9AF0D8EDFCB91756D4F7048012E922D6 = 25,
	PrimeUpdate33_BE2A12592777B870F55FAD163C043192 = 26,
	PrimeUpdate33_EAA00740DF8EF37816AE479E8CCB20B6 = 27,
	PrimeUpdate33_7110D96C5620E2A3360E3887D254A2D6 = 28,
	PrimeUpdate33_0F7338535499E16C2BF19CB546C7C2A6 = 29,
	PrimeUpdate33_E168E8341CB79082D0D9AA4D1FEC97A8 = 30,
	PrimeUpdate33_5C1562652DB849A2BB8B1779333E573D = 31,
	PrimeUpdate33_2E512914EDDC939A207DE0F77DDA26CF = 32,
	PrimeUpdate33_CEE13EA70861968B6AAA07CFA66162DB = 33,
	PrimeUpdate33_MAX              = 34,

};

// Enum Core._Types_Generated.EContentKeyIndex_PrimeUpdate32
enum class Core_EContentKeyIndex_PrimeUpdate32 : uint8_t
{
	PrimeUpdate32_300CBBF87113F4C1E17912EAAEACCF62 = 0,
	PrimeUpdate32_AC64316796AD89170208EA1ADE72EB53 = 1,
	PrimeUpdate32_9F4361589D74380E0351FCF10A7F2032 = 2,
	PrimeUpdate32_950D6028A559ADDDA77671B90D707A89 = 3,
	PrimeUpdate32_BBCA9FD0992D35DE029D78D34001A3A8 = 4,
	PrimeUpdate32_1BAB656F9A701BF05B8483F5C3E95365 = 5,
	PrimeUpdate32_EB99CF7F2BD77FB03F91DB208B6E3E78 = 6,
	PrimeUpdate32_D1993DE64E44D83188D68A0052953321 = 7,
	PrimeUpdate32_43520ABD8E211AE3EFA707DE4736D7A6 = 8,
	PrimeUpdate32_595CDCCADBF7CF6359DCD9CACA14BF45 = 9,
	PrimeUpdate32_EFEB90A98D01EF42CACDF3C6166A4E6B = 10,
	PrimeUpdate32_B87BF5D0B9F7DE0B688739F591EEC514 = 11,
	PrimeUpdate32_7AB8B7644C5D85D344D09FF1468C412C = 12,
	PrimeUpdate32_45F3ADEBE4EB02ABAF7B13185A766207 = 13,
	PrimeUpdate32_1427133C46AA4BAD6F54BC030AC7F9A9 = 14,
	PrimeUpdate32_61C0088685FFBE4E0D6F438B118E5987 = 15,
	PrimeUpdate32_84190309583ABA308C0C2E6621E37B9E = 16,
	PrimeUpdate32_DE9085DF47CD080E0BC98052B543E1CA = 17,
	PrimeUpdate32_D71B3C1F2C6CCAE81795D360C9E51B87 = 18,
	PrimeUpdate32_FE659BEDDCA2DCBEBFD0D5A71CE5F55E = 19,
	PrimeUpdate32_C4CB8C293E93DB50EC6C29DE36C52B90 = 20,
	PrimeUpdate32_CE0E00A1192764DEF4798337C1ACE048 = 21,
	PrimeUpdate32_D5BAADF84D6B7ACAC93AC22539969043 = 22,
	PrimeUpdate32_70F2913F8A944F8E9F578CE3F8D789B2 = 23,
	PrimeUpdate32_374EBD593462DC7180BD4F2F8785F548 = 24,
	PrimeUpdate32_851BE21BC1A5E102E86B4239FF2C7645 = 25,
	PrimeUpdate32_E32780FE596DDD89FDA1CED46D30BA08 = 26,
	PrimeUpdate32_1C213CD84626E67147C1AAF044BCE949 = 27,
	PrimeUpdate32_AE65305403939F84C0F5DE5775770C7A = 28,
	PrimeUpdate32_0EE4F6E8266F4BAA55F56AA6CAED927E = 29,
	PrimeUpdate32_654A14F505D929128335F21A88B72936 = 30,
	PrimeUpdate32_B80CDD1F4B9BE4A5C31CF96645FDFAD6 = 31,
	PrimeUpdate32_CA43F5822A576ED8067999E2A43C82FC = 32,
	PrimeUpdate32_C5C0A837BAC4698316A50EA505F4345D = 33,
	PrimeUpdate32_F082F05E7D651EDE256CCCC9A0699E15 = 34,
	PrimeUpdate32_D845ECFEEB577D15E6204540A327CD8A = 35,
	PrimeUpdate32_9B27CA53E1CD25849873E3B0DEAA4265 = 36,
	PrimeUpdate32_66EE45220A851279ECFA9ACDBB520988 = 37,
	PrimeUpdate32_MAX              = 38,

};

// Enum Core._Types_Generated.EContentKeyIndex_PrimeUpdate31
enum class Core_EContentKeyIndex_PrimeUpdate31 : uint8_t
{
	PrimeUpdate31_8416552FC13C775C6325D95DAFD2467C = 0,
	PrimeUpdate31_4D7DD3DF13D1A7A874987ED3471E73C8 = 1,
	PrimeUpdate31_880C8C1A2B7E0D89E198FD070B76C948 = 2,
	PrimeUpdate31_85F5966A74411E8888F7228B41775B64 = 3,
	PrimeUpdate31_0F3CBA7F9849D469C134A6FF10453DB2 = 4,
	PrimeUpdate31_F9E087849D5F5873B1D9C2C2A76E8280 = 5,
	PrimeUpdate31_4F3016BFEEF5686ABF5BCC01EDAB34AB = 6,
	PrimeUpdate31_289E688E31D67B07097C3607B0E4B766 = 7,
	PrimeUpdate31_FDFE789EC592F2AE370CBDC6644331EA = 8,
	PrimeUpdate31_3B62BABAB19A41542A3F1A543BA902C7 = 9,
	PrimeUpdate31_2ED307705C547AAE42F52929ED345B54 = 10,
	PrimeUpdate31_88C241C0F02B450B51F0A9AF5DDC359D = 11,
	PrimeUpdate31_94713368AC068D293F842AD501456252 = 12,
	PrimeUpdate31_7EDA3FFCCA3D799DD992CB9E6E1641BA = 13,
	PrimeUpdate31_597E29169FCA2B5E0022CB3C17FD6276 = 14,
	PrimeUpdate31_B403B6BC53473983E71404459C5C329D = 15,
	PrimeUpdate31_DA7EA18B2A78CD2DC80B1647AC96CB4D = 16,
	PrimeUpdate31_3CE5ABD97423D57980D4CE4984D23723 = 17,
	PrimeUpdate31_MAX              = 18,

};

// Enum Core._Types_Generated.EContentKeyIndex_PrimeUpdate30
enum class Core_EContentKeyIndex_PrimeUpdate30 : uint8_t
{
	PrimeUpdate30_1DB64BB9636815EFA9399659109DD68D = 0,
	PrimeUpdate30_9234CF28DDEC42BA6D348267FA446B0A = 1,
	PrimeUpdate30_503AD462D2DCE768AE47BB2329144CAE = 2,
	PrimeUpdate30_213CA336DDB319FD27DEA933E3501CB2 = 3,
	PrimeUpdate30_F7FD01F704F37BC24F42A1F9316D8A1D = 4,
	PrimeUpdate30_3087684ADB9F22472E3AFD9BE5BF94F5 = 5,
	PrimeUpdate30_810B945ECFD25E0822A159B328604ECA = 6,
	PrimeUpdate30_5465981D30DE3D6E327B176D436FEF9D = 7,
	PrimeUpdate30_9A9242C1EC822F5CABB949FFDF01D97A = 8,
	PrimeUpdate30_452F33B1387640B277D05CCF28B27094 = 9,
	PrimeUpdate30_33430E4B5498C30E9942BC67BB35E032 = 10,
	PrimeUpdate30_712FAB1F622E61A50F98B76312770661 = 11,
	PrimeUpdate30_2386DB5AA955DDFF74A6A7AF443249B5 = 12,
	PrimeUpdate30_C5BE8F988BD1FF6A53893EC1B454B272 = 13,
	PrimeUpdate30_ED667588F3F916C76D11EADB27036255 = 14,
	PrimeUpdate30_27C7319E6A9E8651E89204245770107E = 15,
	PrimeUpdate30_966DAC7787B441D0E6195D90634ADFD1 = 16,
	PrimeUpdate30_DF823FCBBF433C11264736998336CFB9 = 17,
	PrimeUpdate30_DC5ABAEFCD0A266C64BF8664FEE15309 = 18,
	PrimeUpdate30_22EC7532DB37341C045127F6263A15FF = 19,
	PrimeUpdate30_28B8BBA8CBF5B1B73BD72127D5ADCCB5 = 20,
	PrimeUpdate30_AA915328B1E7A7251488C75194A90384 = 21,
	PrimeUpdate30_D76E2A921047B235911605B9B008F606 = 22,
	PrimeUpdate30_55026AC8526C9B85A556C370FFCBE521 = 23,
	PrimeUpdate30_84C1F1262EF1E5DC120A7ED88DBFEF15 = 24,
	PrimeUpdate30_A99C4C15B5858BB823253B065BE66BB2 = 25,
	PrimeUpdate30_MAX              = 26,

};

// Enum Core._Types_Generated.EContentKeyIndex_PrimeUpdate29
enum class Core_EContentKeyIndex_PrimeUpdate29 : uint8_t
{
	PrimeUpdate29_AE206DA0E0A3AAD8B6755870B27FA65E = 0,
	PrimeUpdate29_30CA52092D2CEDAA55E764986CC47D60 = 1,
	PrimeUpdate29_350E4C7D232183351C9A7CA19AF1D171 = 2,
	PrimeUpdate29_0F4D063A56589D60F7C667659284EF79 = 3,
	PrimeUpdate29_DF40E515A9C2BC9F9B6459DA06BA12B4 = 4,
	PrimeUpdate29_07DAE5D877865DA3A7B27525C6BCD772 = 5,
	PrimeUpdate29_398C669A96F0D8C7A7CB85C6B7F9D40D = 6,
	PrimeUpdate29_1A0A172C108D12F6B9E2582B8353515A = 7,
	PrimeUpdate29_DFA1AA4962EC1FAF6388A5D29978701F = 8,
	PrimeUpdate29_D376C4CD4EBF103692AC688347D9C907 = 9,
	PrimeUpdate29_82BD9EB94679B73DA8574C6DB2C8737E = 10,
	PrimeUpdate29_6E59D0C3AAAF6C9D2E326F4293999A64 = 11,
	PrimeUpdate29_3F53F796EEBEDA376ACA7199F20CAA63 = 12,
	PrimeUpdate29_C29913CE0063B6A4499E4AFF4C5D56D1 = 13,
	PrimeUpdate29_88F2B75897AE1A5B80B4DCC82C376200 = 14,
	PrimeUpdate29_EF28529F54D54075C40BA9309352A504 = 15,
	PrimeUpdate29_4F3D2425A947760B6BD53B2E51290AE9 = 16,
	PrimeUpdate29_42DC275ACD6AF3B20C30E2A016AECC19 = 17,
	PrimeUpdate29_ADC297BC151083F6529E1A1559605351 = 18,
	PrimeUpdate29_755715CBB92570E53F72C1BEF66C2E93 = 19,
	PrimeUpdate29_907AF3C9F3A0262587FF66ADF42F4D3F = 20,
	PrimeUpdate29_C271DB65745C937C51A4591C915C5AF0 = 21,
	PrimeUpdate29_MAX              = 22,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Core.Object.Rotator
// 0x000C
struct FRotator
{
	int                                                Pitch;                                                     // 0x0000(0x0004) (Edit)
	int                                                Yaw;                                                       // 0x0004(0x0004) (Edit)
	int                                                Roll;                                                      // 0x0008(0x0004) (Edit)

};

// ScriptStruct Core.Object.Vector
// 0x000C
struct FVector
{
	float                                              X;                                                         // 0x0000(0x0004) (Edit)
	float                                              Y;                                                         // 0x0004(0x0004) (Edit)
	float                                              Z;                                                         // 0x0008(0x0004) (Edit)

};

// ScriptStruct Core.Object.Guid
// 0x0010
struct FGuid
{
	int                                                A;                                                         // 0x0000(0x0004)
	int                                                B;                                                         // 0x0004(0x0004)
	int                                                C;                                                         // 0x0008(0x0004)
	int                                                D;                                                         // 0x000C(0x0004)

};

// ScriptStruct Core.Object.LinearColor
// 0x0010
struct FLinearColor
{
	float                                              R;                                                         // 0x0000(0x0004) (Edit)
	float                                              G;                                                         // 0x0004(0x0004) (Edit)
	float                                              B;                                                         // 0x0008(0x0004) (Edit)
	float                                              A;                                                         // 0x000C(0x0004) (Edit)

};

// ScriptStruct Core.Object.Color
// 0x0004
struct FColor
{
	unsigned char                                      B;                                                         // 0x0000(0x0001) (Edit)
	unsigned char                                      G;                                                         // 0x0001(0x0001) (Edit)
	unsigned char                                      R;                                                         // 0x0002(0x0001) (Edit)
	unsigned char                                      A;                                                         // 0x0003(0x0001) (Edit)


	inline FColor()
		: R(0), G(0), B(0), A(0)
	{ }

	inline FColor(float r, float g, float b, float a)
		: R(r),
		  G(g),
		  B(b),
		  A(a)
	{ }

};

// ScriptStruct Core.Object.Vector2D
// 0x0008
struct FVector2D
{
	float                                              X;                                                         // 0x0000(0x0004) (Edit)
	float                                              Y;                                                         // 0x0004(0x0004) (Edit)

};

// ScriptStruct Core.Object.InterpCurvePointVector2D
// 0x002D
struct FInterpCurvePointVector2D
{
	float                                              InVal;                                                     // 0x0000(0x0004) (Edit)
	struct FVector2D                                   OutVal;                                                    // 0x0004(0x0008) (Edit)
	struct FVector2D                                   ArriveTangent;                                             // 0x000C(0x0008) (Edit)
	struct FVector2D                                   LeaveTangent;                                              // 0x0014(0x0008) (Edit)
	struct FVector2D                                   ArriveWeight;                                              // 0x001C(0x0008) (Edit)
	struct FVector2D                                   LeaveWeight;                                               // 0x0024(0x0008) (Edit)
	TEnumAsByte<Core_EInterpCurveMode>                 InterpMode;                                                // 0x002C(0x0001) (Edit)

};

// ScriptStruct Core.Object.InterpCurveVector2D
// 0x0011
struct FInterpCurveVector2D
{
	TArray<struct FInterpCurvePointVector2D>           Points;                                                    // 0x0000(0x0010) (Edit, NeedCtorLink)
	TEnumAsByte<Core_EInterpMethodType>                InterpMethod;                                              // 0x0010(0x0001)

};

// ScriptStruct Core.Object.InterpCurvePointVector
// 0x0041
struct FInterpCurvePointVector
{
	float                                              InVal;                                                     // 0x0000(0x0004) (Edit)
	struct FVector                                     OutVal;                                                    // 0x0004(0x000C) (Edit)
	struct FVector                                     ArriveTangent;                                             // 0x0010(0x000C) (Edit)
	struct FVector                                     LeaveTangent;                                              // 0x001C(0x000C) (Edit)
	struct FVector                                     ArriveWeight;                                              // 0x0028(0x000C) (Edit)
	struct FVector                                     LeaveWeight;                                               // 0x0034(0x000C) (Edit)
	TEnumAsByte<Core_EInterpCurveMode>                 InterpMode;                                                // 0x0040(0x0001) (Edit)

};

// ScriptStruct Core.Object.InterpCurveVector
// 0x0011
struct FInterpCurveVector
{
	TArray<struct FInterpCurvePointVector>             Points;                                                    // 0x0000(0x0010) (Edit, NeedCtorLink)
	TEnumAsByte<Core_EInterpMethodType>                InterpMethod;                                              // 0x0010(0x0001)

};

// ScriptStruct Core.Object.InterpCurvePointFloat
// 0x0019
struct FInterpCurvePointFloat
{
	float                                              InVal;                                                     // 0x0000(0x0004) (Edit)
	float                                              OutVal;                                                    // 0x0004(0x0004) (Edit)
	float                                              ArriveTangent;                                             // 0x0008(0x0004) (Edit)
	float                                              LeaveTangent;                                              // 0x000C(0x0004) (Edit)
	float                                              ArriveWeight;                                              // 0x0010(0x0004) (Edit)
	float                                              LeaveWeight;                                               // 0x0014(0x0004) (Edit)
	TEnumAsByte<Core_EInterpCurveMode>                 InterpMode;                                                // 0x0018(0x0001) (Edit)

};

// ScriptStruct Core.Object.InterpCurveFloat
// 0x0011
struct FInterpCurveFloat
{
	TArray<struct FInterpCurvePointFloat>              Points;                                                    // 0x0000(0x0010) (Edit, NeedCtorLink)
	TEnumAsByte<Core_EInterpMethodType>                InterpMethod;                                              // 0x0010(0x0001)

};

// ScriptStruct Core.Object.Quat
// 0x0010
struct FQuat
{
	float                                              X;                                                         // 0x0000(0x0004) (Edit)
	float                                              Y;                                                         // 0x0004(0x0004) (Edit)
	float                                              Z;                                                         // 0x0008(0x0004) (Edit)
	float                                              W;                                                         // 0x000C(0x0004) (Edit)

};

// ScriptStruct Core.Object.Plane
// 0x0004 (0x0010 - 0x000C)
struct FPlane : public FVector
{
	float                                              W;                                                         // 0x000C(0x0004) (Edit)

};

// ScriptStruct Core.Object.Pointer
// 0x0008
struct FPointer
{
	int                                                Dummy;                                                     // 0x0000(0x0004) (Const, Native)
	unsigned char                                      UnknownData_4WT2[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Core.Object.Matrix
// 0x0040
struct FMatrix
{
	struct FPlane                                      XPlane;                                                    // 0x0000(0x0010) (Edit)
	struct FPlane                                      YPlane;                                                    // 0x0010(0x0010) (Edit)
	struct FPlane                                      ZPlane;                                                    // 0x0020(0x0010) (Edit)
	struct FPlane                                      WPlane;                                                    // 0x0030(0x0010) (Edit)

};

// ScriptStruct Core.DelegateTracker.AsyncDelegateInfo
// 0x0020
struct FAsyncDelegateInfo
{
	int                                                CallbackId;                                                // 0x0000(0x0004)
	unsigned char                                      UnknownData_417H[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             AsyncDelegate;                                             // 0x0008(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_NRUG[0xC];                                     // 0x0004(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};

// ScriptStruct Core.Object.BitArray_Mirror
// 0x0020
struct FBitArray_Mirror
{
	struct FPointer                                    IndirectData;                                              // 0x0000(0x0008) (Const, Native)
	int                                                InlineData[0x4];                                           // 0x0008(0x0010) (Const, Native)
	int                                                NumBits;                                                   // 0x0018(0x0004) (Const, Native)
	int                                                MaxBits;                                                   // 0x001C(0x0004) (Const, Native)

};

// ScriptStruct Core.Object.SparseArray_Mirror
// 0x0038
struct FSparseArray_Mirror
{
	TArray<int>                                        Elements;                                                  // 0x0000(0x0010) (Const, Native)
	struct FBitArray_Mirror                            AllocationFlags;                                           // 0x0010(0x0020) (Const, Native)
	int                                                FirstFreeIndex;                                            // 0x0030(0x0004) (Const, Native)
	int                                                NumFreeIndices;                                            // 0x0034(0x0004) (Const, Native)

};

// ScriptStruct Core.Object.Set_Mirror
// 0x004C
struct FSet_Mirror
{
	struct FSparseArray_Mirror                         Elements;                                                  // 0x0000(0x0038) (Const, Native)
	int                                                InlineHash;                                                // 0x0038(0x0004) (Const, Native)
	unsigned char                                      UnknownData_8ZL1[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointer                                    Hash;                                                      // 0x0040(0x0008) (Const, Native)
	int                                                HashSize;                                                  // 0x0048(0x0004) (Const, Native)

};

// ScriptStruct Core.Object.MultiMap_Mirror
// 0x0050
struct FMultiMap_Mirror
{
	struct FSet_Mirror                                 Pairs;                                                     // 0x0000(0x0050) (Const, Native)

};

// ScriptStruct Core.Object.ThreadSafeCounter
// 0x0004
struct FThreadSafeCounter
{
	int                                                Value;                                                     // 0x0000(0x0004) (Const, Native)

};

// ScriptStruct Core.Object.Double
// 0x0008
struct FDouble
{
	int                                                A;                                                         // 0x0000(0x0004) (Const, Native)
	int                                                B;                                                         // 0x0004(0x0004) (Const, Native)

};

// ScriptStruct Core.Object.IpAddr
// 0x0014
struct FIpAddr
{
	int                                                AddrA;                                                     // 0x0000(0x0004)
	int                                                AddrB;                                                     // 0x0004(0x0004)
	int                                                AddrC;                                                     // 0x0008(0x0004)
	int                                                AddrD;                                                     // 0x000C(0x0004)
	int                                                Port;                                                      // 0x0010(0x0004)

};

// ScriptStruct Core.Object.HatPointer
// 0x0008
struct FHatPointer
{
	unsigned char                                      Dummy[0x8];                                                // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty Core.Object.HatPointer.Dummy

};

// ScriptStruct Core.Object.RawDistribution
// 0x0020
struct FRawDistribution
{
	unsigned char                                      Type;                                                      // 0x0000(0x0001)
	unsigned char                                      Op;                                                        // 0x0001(0x0001)
	unsigned char                                      LookupTableNumElements;                                    // 0x0002(0x0001)
	unsigned char                                      LookupTableChunkSize;                                      // 0x0003(0x0001)
	unsigned char                                      UnknownData_C8FC[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      LookupTable;                                               // 0x0008(0x0010) (NeedCtorLink)
	float                                              LookupTableTimeScale;                                      // 0x0018(0x0004)
	float                                              LookupTableStartTime;                                      // 0x001C(0x0004)

};

// ScriptStruct Core.DistributionFloat.RawDistributionFloat
// 0x0008 (0x0028 - 0x0020)
struct FRawDistributionFloat : public FRawDistribution
{
	class UDistributionFloat*                          Distribution;                                              // 0x0020(0x0008) (Edit, ExportObject, Component, NoClear, EditInline)

};

// ScriptStruct Core.DistributionFloat.MatineeRawDistributionFloat
// 0x0008 (0x0030 - 0x0028)
struct FMatineeRawDistributionFloat : public FRawDistributionFloat
{
	float                                              MatineeValue;                                              // 0x0028(0x0004)
	unsigned long                                      bInMatinee : 1;                                            // 0x002C(0x0001) BIT_FIELD

};

// ScriptStruct Core.DistributionVector.RawDistributionVector
// 0x0008 (0x0028 - 0x0020)
struct FRawDistributionVector : public FRawDistribution
{
	class UDistributionVector*                         Distribution;                                              // 0x0020(0x0008) (Edit, ExportObject, Component, NoClear, EditInline)

};

// ScriptStruct Core.ObjectProvider.ObjectPropertyInjection
// 0x0010
struct FObjectPropertyInjection
{
	class UObject*                                     Subscriber;                                                // 0x0000(0x0008)
	class UObjectProperty*                             Property;                                                  // 0x0008(0x0008)

};

// ScriptStruct Core.ObjectProvider.InterfacePropertyInjection
// 0x0010
struct FInterfacePropertyInjection
{
	class UObject*                                     Subscriber;                                                // 0x0000(0x0008)
	class UInterfaceProperty*                          Property;                                                  // 0x0008(0x0008)

};

// ScriptStruct Core._Types_Core.SceNpOnlineId
// 0x0014
struct FSceNpOnlineId
{
	unsigned char                                      Data[0x10];                                                // 0x0000(0x0010) UNKNOWN PROPERTY: QWordProperty Core._Types_Core.SceNpOnlineId.Data
	unsigned char                                      Term;                                                      // 0x0010(0x0001)
	unsigned char                                      Dummy[0x3];                                                // 0x0011(0x0003)

};

// ScriptStruct Core._Types_Core.SceNpId
// 0x0028
struct FSceNpId
{
	struct FSceNpOnlineId                              Handle;                                                    // 0x0000(0x0018) (Const)
	unsigned char                                      Opt[0x8];                                                  // 0x0018(0x0008) UNKNOWN PROPERTY: QWordProperty Core._Types_Core.SceNpId.Opt
	unsigned char                                      Reserved[0x8];                                             // 0x0020(0x0008) UNKNOWN PROPERTY: QWordProperty Core._Types_Core.SceNpId.Reserved

};

// ScriptStruct Core._Types_Core.UniqueNetId
// 0x0042
struct FUniqueNetId
{
	unsigned char                                      Uid[0x8];                                                  // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty Core._Types_Core.UniqueNetId.Uid
	struct FSceNpId                                    NpId;                                                      // 0x0008(0x0028)
	struct FString                                     EpicAccountId;                                             // 0x0030(0x0010) (NeedCtorLink)
	TEnumAsByte<Core_EOnlinePlatform>                  Platform;                                                  // 0x0040(0x0001)
	unsigned char                                      SplitscreenID;                                             // 0x0041(0x0001)

};

// ScriptStruct Core._Types_Core.EncryptedKeyIndex
// 0x0004
struct FEncryptedKeyIndex
{
	int                                                Index;                                                     // 0x0000(0x0004)

};

// ScriptStruct Core._Types_Core.ProductHashID
// 0x0004
struct FProductHashID
{
	int                                                Id;                                                        // 0x0000(0x0004)

};

// ScriptStruct Core.Object.Map_Mirror
// 0x0050
struct FMap_Mirror
{
	struct FSet_Mirror                                 Pairs;                                                     // 0x0000(0x0050) (Const, Native)

};

// ScriptStruct Core.ObjectProvider.ObjectProviderSubscription
// 0x0024
struct FObjectProviderSubscription
{
	class UClass*                                      ObjClass;                                                  // 0x0000(0x0008)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_BE2Y[0xC];                                     // 0x0008(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned long                                      bFireOnce : 1;                                             // 0x0020(0x0001) BIT_FIELD

};

// ScriptStruct Core.Object.Array_Mirror
// 0x0010
struct FArray_Mirror
{
	struct FPointer                                    Data;                                                      // 0x0000(0x0008) (Const, Native)
	int                                                ArrayNum;                                                  // 0x0008(0x0004) (Const, Native)
	int                                                ArrayMax;                                                  // 0x000C(0x0004) (Const, Native)

};

// ScriptStruct Core.ObjectProvider.ObjectProviderPendingCallback
// 0x0020
struct FObjectProviderPendingCallback
{
	struct FScriptDelegate                             Callback;                                                  // 0x0000(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_A834[0xC];                                     // 0x0000(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UObject*                                     Value;                                                     // 0x0018(0x0008)

};

// ScriptStruct Core.Object.InlinePointerArray_Mirror
// 0x0018
struct FInlinePointerArray_Mirror
{
	struct FPointer                                    InlineData;                                                // 0x0000(0x0008) (Const)
	struct FArray_Mirror                               SecondaryData;                                             // 0x0008(0x0010) (Const)

};

// ScriptStruct Core.Object.Vector4
// 0x0010
struct FVector4
{
	float                                              X;                                                         // 0x0000(0x0004) (Edit)
	float                                              Y;                                                         // 0x0004(0x0004) (Edit)
	float                                              Z;                                                         // 0x0008(0x0004) (Edit)
	float                                              W;                                                         // 0x000C(0x0004) (Edit)

};

// ScriptStruct Core.Object.Cylinder
// 0x0008
struct FCylinder
{
	float                                              Radius;                                                    // 0x0000(0x0004)
	float                                              Height;                                                    // 0x0004(0x0004)

};

// ScriptStruct Core.Object.BoxSphereBounds
// 0x001C
struct FBoxSphereBounds
{
	struct FVector                                     Origin;                                                    // 0x0000(0x000C) (Edit)
	struct FVector                                     BoxExtent;                                                 // 0x000C(0x000C) (Edit)
	float                                              SphereRadius;                                              // 0x0018(0x0004) (Edit)

};

// ScriptStruct Core.Object.TwoVectors
// 0x0018
struct FTwoVectors
{
	struct FVector                                     v1;                                                        // 0x0000(0x000C) (Edit)
	struct FVector                                     v2;                                                        // 0x000C(0x000C) (Edit)

};

// ScriptStruct Core.Object.TAlphaBlend
// 0x0015
struct FTAlphaBlend
{
	float                                              AlphaIn;                                                   // 0x0000(0x0004) (Const)
	float                                              AlphaOut;                                                  // 0x0004(0x0004) (Const)
	float                                              AlphaTarget;                                               // 0x0008(0x0004) (Edit)
	float                                              BlendTime;                                                 // 0x000C(0x0004) (Edit)
	float                                              BlendTimeToGo;                                             // 0x0010(0x0004) (Const)
	TEnumAsByte<Core_EAlphaBlendType>                  BlendType;                                                 // 0x0014(0x0001) (Edit)

};

// ScriptStruct Core.Object.BoneAtom
// 0x0020
struct FBoneAtom
{
	struct FQuat                                       Rotation;                                                  // 0x0000(0x0010)
	struct FVector                                     Translation;                                               // 0x0010(0x000C)
	float                                              Scale;                                                     // 0x001C(0x0004)

};

// ScriptStruct Core.Object.OctreeElementId
// 0x000C
struct FOctreeElementId
{
	struct FPointer                                    Node;                                                      // 0x0000(0x0008) (Const, Native)
	int                                                ElementIndex;                                              // 0x0008(0x0004) (Const, Native)

};

// ScriptStruct Core.Object.RenderCommandFence
// 0x0004
struct FRenderCommandFence
{
	int                                                NumPendingFences;                                          // 0x0000(0x0004) (Const, Native)

};

// ScriptStruct Core.Object.InterpCurvePointLinearColor
// 0x0055
struct FInterpCurvePointLinearColor
{
	float                                              InVal;                                                     // 0x0000(0x0004) (Edit)
	struct FLinearColor                                OutVal;                                                    // 0x0004(0x0010) (Edit)
	struct FLinearColor                                ArriveTangent;                                             // 0x0014(0x0010) (Edit)
	struct FLinearColor                                LeaveTangent;                                              // 0x0024(0x0010) (Edit)
	struct FLinearColor                                ArriveWeight;                                              // 0x0034(0x0010) (Edit)
	struct FLinearColor                                LeaveWeight;                                               // 0x0044(0x0010) (Edit)
	TEnumAsByte<Core_EInterpCurveMode>                 InterpMode;                                                // 0x0054(0x0001) (Edit)

};

// ScriptStruct Core.Object.InterpCurveLinearColor
// 0x0011
struct FInterpCurveLinearColor
{
	TArray<struct FInterpCurvePointLinearColor>        Points;                                                    // 0x0000(0x0010) (Edit, NeedCtorLink)
	TEnumAsByte<Core_EInterpMethodType>                InterpMethod;                                              // 0x0010(0x0001)

};

// ScriptStruct Core.Object.InterpCurvePointQuat
// 0x0061
struct FInterpCurvePointQuat
{
	float                                              InVal;                                                     // 0x0000(0x0004) (Edit)
	unsigned char                                      UnknownData_AN4A[0xC];                                     // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       OutVal;                                                    // 0x0010(0x0010) (Edit)
	struct FQuat                                       ArriveTangent;                                             // 0x0020(0x0010) (Edit)
	struct FQuat                                       LeaveTangent;                                              // 0x0030(0x0010) (Edit)
	struct FQuat                                       ArriveWeight;                                              // 0x0040(0x0010) (Edit)
	struct FQuat                                       LeaveWeight;                                               // 0x0050(0x0010) (Edit)
	TEnumAsByte<Core_EInterpCurveMode>                 InterpMode;                                                // 0x0060(0x0001) (Edit)

};

// ScriptStruct Core.Object.InterpCurveQuat
// 0x0011
struct FInterpCurveQuat
{
	TArray<struct FInterpCurvePointQuat>               Points;                                                    // 0x0000(0x0010) (Edit, NeedCtorLink)
	TEnumAsByte<Core_EInterpMethodType>                InterpMethod;                                              // 0x0010(0x0001)

};

// ScriptStruct Core.Object.InterpCurvePointTwoVectors
// 0x007D
struct FInterpCurvePointTwoVectors
{
	float                                              InVal;                                                     // 0x0000(0x0004) (Edit)
	struct FTwoVectors                                 OutVal;                                                    // 0x0004(0x0018) (Edit)
	struct FTwoVectors                                 ArriveTangent;                                             // 0x001C(0x0018) (Edit)
	struct FTwoVectors                                 LeaveTangent;                                              // 0x0034(0x0018) (Edit)
	struct FTwoVectors                                 ArriveWeight;                                              // 0x004C(0x0018) (Edit)
	struct FTwoVectors                                 LeaveWeight;                                               // 0x0064(0x0018) (Edit)
	TEnumAsByte<Core_EInterpCurveMode>                 InterpMode;                                                // 0x007C(0x0001) (Edit)

};

// ScriptStruct Core.Object.InterpCurveTwoVectors
// 0x0011
struct FInterpCurveTwoVectors
{
	TArray<struct FInterpCurvePointTwoVectors>         Points;                                                    // 0x0000(0x0010) (Edit, NeedCtorLink)
	TEnumAsByte<Core_EInterpMethodType>                InterpMethod;                                              // 0x0010(0x0001)

};

// ScriptStruct Core.Object.Box
// 0x0019
struct FBox
{
	struct FVector                                     Min;                                                       // 0x0000(0x000C) (Edit)
	struct FVector                                     Max;                                                       // 0x000C(0x000C) (Edit)
	unsigned char                                      IsValid;                                                   // 0x0018(0x0001)

};

// ScriptStruct Core.Object.TPOV
// 0x001C
struct FTPOV
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C) (Edit)
	float                                              FOV;                                                       // 0x0018(0x0004) (Edit)

};

// ScriptStruct Core.Object.SHVector
// 0x0030
struct FSHVector
{
	float                                              V[0x9];                                                    // 0x0000(0x0024) (Edit)
	float                                              Padding[0x3];                                              // 0x0024(0x000C)

};

// ScriptStruct Core.Object.SHVectorRGB
// 0x0090
struct FSHVectorRGB
{
	struct FSHVector                                   R;                                                         // 0x0000(0x0030) (Edit)
	struct FSHVector                                   G;                                                         // 0x0030(0x0030) (Edit)
	struct FSHVector                                   B;                                                         // 0x0060(0x0030) (Edit)

};

// ScriptStruct Core.Object.IntPoint
// 0x0008
struct FIntPoint
{
	int                                                X;                                                         // 0x0000(0x0004) (Edit)
	int                                                Y;                                                         // 0x0004(0x0004) (Edit)

};

// ScriptStruct Core.Object.PackedNormal
// 0x0004
struct FPackedNormal
{
	unsigned char                                      X;                                                         // 0x0000(0x0001) (Edit)
	unsigned char                                      Y;                                                         // 0x0001(0x0001) (Edit)
	unsigned char                                      Z;                                                         // 0x0002(0x0001) (Edit)
	unsigned char                                      W;                                                         // 0x0003(0x0001) (Edit)

};

// ScriptStruct Core.Object.IndirectArray_Mirror
// 0x0010
struct FIndirectArray_Mirror
{
	struct FPointer                                    Data;                                                      // 0x0000(0x0008) (Const, Native)
	int                                                ArrayNum;                                                  // 0x0008(0x0004) (Const, Native)
	int                                                ArrayMax;                                                  // 0x000C(0x0004) (Const, Native)

};

// ScriptStruct Core.Object.FColorVertexBuffer_Mirror
// 0x001C
struct FFColorVertexBuffer_Mirror
{
	struct FPointer                                    VfTable;                                                   // 0x0000(0x0008) (Const, Native)
	struct FPointer                                    VertexData;                                                // 0x0008(0x0008) (Const, Native)
	int                                                Data;                                                      // 0x0010(0x0004) (Const)
	int                                                Stride;                                                    // 0x0014(0x0004) (Const)
	int                                                NumVertices;                                               // 0x0018(0x0004) (Const)

};

// ScriptStruct Core.Object.RenderCommandFence_Mirror
// 0x0004
struct FRenderCommandFence_Mirror
{
	int                                                NumPendingFences;                                          // 0x0000(0x0004) (Const, Native, Transient)

};

// ScriptStruct Core.Object.UntypedBulkData_Mirror
// 0x0054
struct FUntypedBulkData_Mirror
{
	struct FPointer                                    VfTable;                                                   // 0x0000(0x0008) (Const, Native)
	int                                                BulkDataFlags;                                             // 0x0008(0x0004) (Const, Native)
	int                                                ElementCount;                                              // 0x000C(0x0004) (Const, Native)
	unsigned char                                      BulkDataOffsetInFile[0x8];                                 // 0x0010(0x0008) UNKNOWN PROPERTY: QWordProperty Core.Object.UntypedBulkData_Mirror.BulkDataOffsetInFile
	int                                                BulkDataSizeOnDisk;                                        // 0x0018(0x0004) (Const, Native)
	int                                                SavedBulkDataFlags;                                        // 0x001C(0x0004) (Const, Native)
	int                                                SavedElementCount;                                         // 0x0020(0x0004) (Const, Native)
	unsigned char                                      UnknownData_LHMX[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      SavedBulkDataOffsetInFile[0x8];                            // 0x0024(0x0008) UNKNOWN PROPERTY: QWordProperty Core.Object.UntypedBulkData_Mirror.SavedBulkDataOffsetInFile
	int                                                SavedBulkDataSizeOnDisk;                                   // 0x0030(0x0004) (Const, Native)
	unsigned char                                      UnknownData_JBZN[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointer                                    BulkData;                                                  // 0x0038(0x0008) (Const, Native)
	int                                                LockStatus;                                                // 0x0040(0x0004) (Const, Native)
	unsigned char                                      UnknownData_RHSL[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointer                                    AttachedAr;                                                // 0x0048(0x0008) (Const, Native)
	int                                                bShouldFreeOnEmpty;                                        // 0x0050(0x0004) (Const, Native)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
