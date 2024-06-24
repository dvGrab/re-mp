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
	 * 		Name   -> PredefinedFunction UBP_RotatingColoredSpotLight_RedWhite_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_RotatingColoredSpotLight_RedWhite_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RotatingColoredSpotLight_RedWhite.BP_RotatingColoredSpotLight_RedWhite_C");
		return ptr;
	}

}


