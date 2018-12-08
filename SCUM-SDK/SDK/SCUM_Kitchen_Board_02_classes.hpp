#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Kitchen_Board_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Kitchen_Board_02.Kitchen_Board_02_C
// 0x0008 (0x0728 - 0x0720)
class AKitchen_Board_02_C : public AEquipmentItem
{
public:
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsule;                              // 0x0720(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Kitchen_Board_02.Kitchen_Board_02_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
