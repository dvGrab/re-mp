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
	 * 		Name   -> PredefinedFunction ABP_sm_vegvbbig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_sm_vegvbbig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_sm_vegvbbig.BP_sm_vegvbbig_C");
		return ptr;
	}

}


