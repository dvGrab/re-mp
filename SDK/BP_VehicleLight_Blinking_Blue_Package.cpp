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
	 * 		Name   -> PredefinedFunction UBP_VehicleLight_Blinking_Blue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_VehicleLight_Blinking_Blue_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VehicleLight_Blinking_Blue.BP_VehicleLight_Blinking_Blue_C");
		return ptr;
	}

}


