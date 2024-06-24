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
	 * 		Name   -> PredefinedFunction ABP_dyn_f_r_wood_1b_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_dyn_f_r_wood_1b_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_dyn_f_r_wood_1b.BP_dyn_f_r_wood_1b_C");
		return ptr;
	}

}


