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
	 * 		Name   -> PredefinedFunction UBP_ExternalWindow_Rect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ExternalWindow_Rect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ExternalWindow_Rect.BP_ExternalWindow_Rect_C");
		return ptr;
	}

}


