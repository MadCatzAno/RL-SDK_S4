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

// Class XAudio2.XAudio2Device
// 0x00BC (FullSize[0x0460] - InheritedSize[0x03A4])
class UXAudio2Device : public UAudioDevice
{
public:
	unsigned char                                      UnknownData_CLUU[0xBC];                                    // 0x03A4(0x00BC) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class XAudio2.XAudio2Device");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
