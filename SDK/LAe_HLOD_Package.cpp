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
	 * 		Name   -> PredefinedFunction ALAe_HLOD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALAe_HLOD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LAe_HLOD.LAe_HLOD_C");
		return ptr;
	}

}


