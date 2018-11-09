#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_SM_WaterPump_01_lp_Blueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SM_WaterPump_01_lp_Blueprint.SM_WaterPump_01_lp_Blueprint_C
// 0x0018 (0x0340 - 0x0328)
class ASM_WaterPump_01_lp_Blueprint_C : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent01;                                    // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshComponent0;                                     // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             SharedRoot;                                               // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SM_WaterPump_01_lp_Blueprint.SM_WaterPump_01_lp_Blueprint_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
