#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_AudioCapture_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AudioCapture.AudioCaptureComponent
// 0x00B0 (0x0670 - 0x05C0)
class UAudioCaptureComponent : public USynthComponent
{
public:
	int                                                JitterLatencyFrames;                                      // 0x05C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xAC];                                      // 0x05C4(0x00AC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AudioCapture.AudioCaptureComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
