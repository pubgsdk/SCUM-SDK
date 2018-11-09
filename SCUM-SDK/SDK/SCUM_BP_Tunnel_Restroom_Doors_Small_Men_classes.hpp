#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Tunnel_Restroom_Doors_Small_Men_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Tunnel_Restroom_Doors_Small_Men.BP_Tunnel_Restroom_Doors_Small_Men_C
// 0x0010 (0x03F8 - 0x03E8)
class ABP_Tunnel_Restroom_Doors_Small_Men_C : public ARegularDoorStatic
{
public:
	class UDecalComponent*                             Decal;                                                    // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Tunnel_Door_Frame;                                        // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Tunnel_Restroom_Doors_Small_Men.BP_Tunnel_Restroom_Doors_Small_Men_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
