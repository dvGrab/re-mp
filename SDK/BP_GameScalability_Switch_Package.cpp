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
	 * 		Name   -> PredefinedFunction ABP_GameScalability_Switch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GameScalability_Switch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameScalability_Switch.BP_GameScalability_Switch_C");
		return ptr;
	}

}


