// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Team_02_5_Players_Equipment_Set_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Team_02_5_Players_Equipment_Set.Team_02_5_Players_Equipment_Set_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATeam_02_5_Players_Equipment_Set_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Team_02_5_Players_Equipment_Set.Team_02_5_Players_Equipment_Set_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Team_02_5_Players_Equipment_Set.Team_02_5_Players_Equipment_Set_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATeam_02_5_Players_Equipment_Set_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Team_02_5_Players_Equipment_Set.Team_02_5_Players_Equipment_Set_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Team_02_5_Players_Equipment_Set.Team_02_5_Players_Equipment_Set_C.ExecuteUbergraph_Team_02_5_Players_Equipment_Set
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATeam_02_5_Players_Equipment_Set_C::ExecuteUbergraph_Team_02_5_Players_Equipment_Set(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Team_02_5_Players_Equipment_Set.Team_02_5_Players_Equipment_Set_C.ExecuteUbergraph_Team_02_5_Players_Equipment_Set");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
