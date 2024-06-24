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
	 * 		Name   -> PredefinedFunction ABP_vgs_palm01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_vgs_palm01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_vgs_palm01.BP_vgs_palm01_C");
		return ptr;
	}

}


