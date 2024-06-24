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
	 * 		Name   -> PredefinedFunction UBP_VehicleLight_Dash_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_VehicleLight_Dash_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VehicleLight_Dash.BP_VehicleLight_Dash_C");
		return ptr;
	}

}


