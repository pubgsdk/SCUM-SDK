#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Cal7_62x54mmR_Ammobox_Closed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cal7_62x54mmR_Ammobox_Closed.Cal7_62x54mmR_Ammobox_Closed_C
// 0x0000 (0x0720 - 0x0720)
class ACal7_62x54mmR_Ammobox_Closed_C : public AAmmunitionBoxItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Cal7_62x54mmR_Ammobox_Closed.Cal7_62x54mmR_Ammobox_Closed_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
