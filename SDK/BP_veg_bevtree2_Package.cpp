﻿/**
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
	 * 		Name   -> PredefinedFunction ABP_veg_bevtree2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_veg_bevtree2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_veg_bevtree2.BP_veg_bevtree2_C");
		return ptr;
	}

}


