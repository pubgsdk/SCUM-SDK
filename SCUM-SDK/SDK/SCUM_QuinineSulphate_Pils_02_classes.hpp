#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_QuinineSulphate_Pils_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass QuinineSulphate_Pils_02.QuinineSulphate_Pils_02_C
// 0x0000 (0x0708 - 0x0708)
class AQuinineSulphate_Pils_02_C : public AMedicationItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass QuinineSulphate_Pils_02.QuinineSulphate_Pils_02_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
