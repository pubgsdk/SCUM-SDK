#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_CargoDrop_01_Door_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CargoDrop_01_Door.BP_CargoDrop_01_Door_C
// 0x0000 (0x03E8 - 0x03E8)
class ABP_CargoDrop_01_Door_C : public ARegularDoorStatic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_CargoDrop_01_Door.BP_CargoDrop_01_Door_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif