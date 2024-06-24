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
	 * 		Name   -> PredefinedFunction ABP_GameScalability_PC_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GameScalability_PC_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameScalability_PC.BP_GameScalability_PC_C");
		return ptr;
	}

}


