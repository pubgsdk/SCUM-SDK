#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Tree_Bark_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tree_Bark.Tree_Bark_C
// 0x0000 (0x0720 - 0x0720)
class ATree_Bark_C : public AEquipmentItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Tree_Bark.Tree_Bark_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
