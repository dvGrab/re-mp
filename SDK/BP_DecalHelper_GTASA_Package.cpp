/**
 * Name: GTASA
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
	 * 		Name   -> PredefinedFunction ABP_DecalHelper_GTASA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DecalHelper_GTASA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DecalHelper_GTASA.BP_DecalHelper_GTASA_C");
		return ptr;
	}

}


