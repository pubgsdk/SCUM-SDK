#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Cal_7_92x57mm_AmmoboxOpen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cal_7_92x57mm_AmmoboxOpen.Cal_7_92x57mm_AmmoboxOpen_C
// 0x0000 (0x06F8 - 0x06F8)
class ACal_7_92x57mm_AmmoboxOpen_C : public AAmmunitionBoxItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Cal_7_92x57mm_AmmoboxOpen.Cal_7_92x57mm_AmmoboxOpen_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
