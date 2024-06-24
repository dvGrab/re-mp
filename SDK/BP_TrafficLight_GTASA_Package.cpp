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
	 * 		Name   -> PredefinedFunction ABP_TrafficLight_GTASA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TrafficLight_GTASA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrafficLight_GTASA.BP_TrafficLight_GTASA_C");
		return ptr;
	}

}


