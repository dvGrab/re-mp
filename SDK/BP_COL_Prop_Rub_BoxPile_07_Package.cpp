/**
 * Name: GTA-SA-DEF
 * Version: 0.0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_COL_Prop_Rub_BoxPile_07_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_COL_Prop_Rub_BoxPile_07_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_COL_Prop_Rub_BoxPile_07.BP_COL_Prop_Rub_BoxPile_07_C");
		return ptr;
	}

}


