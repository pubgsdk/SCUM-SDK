#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_M16_InsertMagChamber_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_M16_InsertMagChamber.BP_M16_InsertMagChamber_C
// 0x0000 (0x0080 - 0x0080)
class UBP_M16_InsertMagChamber_C : public UInsertMagazine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_M16_InsertMagChamber.BP_M16_InsertMagChamber_C");
		return ptr;
	}


	bool CanExecuteUsingData(const struct FWeaponReloadData& Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
