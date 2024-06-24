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
	 * 		Name   -> PredefinedFunction AVegas_Persistent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVegas_Persistent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Vegas_Persistent.Vegas_Persistent_C");
		return ptr;
	}

}


