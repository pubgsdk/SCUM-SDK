#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Cal30-06_Ammobox_Open_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cal30-06_Ammobox_Open.Cal30-06_Ammobox_Open_C
// 0x0000 (0x0718 - 0x0718)
class ACal30_06_Ammobox_Open_C : public AAmmunitionBoxItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Cal30-06_Ammobox_Open.Cal30-06_Ammobox_Open_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
