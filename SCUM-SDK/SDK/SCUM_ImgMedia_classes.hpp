#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ImgMedia_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ImgMedia.ImgMediaSource
// 0x0028 (0x0060 - 0x0038)
class UImgMediaSource : public UBaseMediaSource
{
public:
	struct FFrameRate                                  FrameRateOverride;                                        // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FString                                     ProxyOverride;                                            // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FDirectoryPath                              SequencePath;                                             // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ImgMedia.ImgMediaSource");
		return ptr;
	}


	void SetSequencePath(const struct FString& Path);
	struct FString GetSequencePath();
	void GetProxies(TArray<struct FString>* OutProxies);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
