﻿/**
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
	 * 		Name   -> PredefinedFunction ABP_Marker_Diamond_3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Marker_Diamond_3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Marker_Diamond_4.BP_Marker_Diamond_3_C");
		return ptr;
	}

}


