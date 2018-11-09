// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CraftingInfoInWorld_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CraftingInfoInWorld.UI_CraftingInfoInWorld_C.Init
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   itemCDO                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CraftingInfoInWorld_C::Init(class AItem* itemCDO)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingInfoInWorld.UI_CraftingInfoInWorld_C.Init");

	struct
	{
		class AItem*                   itemCDO;
	} params;

	params.itemCDO = itemCDO;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingInfoInWorld.UI_CraftingInfoInWorld_C.ExecuteUbergraph_UI_CraftingInfoInWorld
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CraftingInfoInWorld_C::ExecuteUbergraph_UI_CraftingInfoInWorld(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingInfoInWorld.UI_CraftingInfoInWorld_C.ExecuteUbergraph_UI_CraftingInfoInWorld");

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
