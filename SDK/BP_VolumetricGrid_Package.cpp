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
	 * 		Name   -> PredefinedFunction ABP_VolumetricGrid_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_VolumetricGrid_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VolumetricGrid.BP_VolumetricGrid_C");
		return ptr;
	}

}


