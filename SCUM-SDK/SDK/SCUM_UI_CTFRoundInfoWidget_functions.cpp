// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CTFRoundInfoWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetRoundStatus
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_CTFRoundInfoWidget_C::GetRoundStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetRoundStatus");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftBoxVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_CTFRoundInfoWidget_C::GetTimeLeftBoxVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftBoxVisibility");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftDescriptionText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_CTFRoundInfoWidget_C::GetTimeLeftDescriptionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftDescriptionText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_CTFRoundInfoWidget_C::GetTimeLeftText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.SetGameEvent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameEventBase*          gameEvent                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CTFRoundInfoWidget_C::SetGameEvent(class AGameEventBase* gameEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.SetGameEvent");

	struct
	{
		class AGameEventBase*          gameEvent;
	} params;

	params.gameEvent = gameEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.ExecuteUbergraph_UI_CTFRoundInfoWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CTFRoundInfoWidget_C::ExecuteUbergraph_UI_CTFRoundInfoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.ExecuteUbergraph_UI_CTFRoundInfoWidget");

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
