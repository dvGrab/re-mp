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
	 * 		Name   -> PredefinedFunction ABP_sjmpalmtall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_sjmpalmtall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_sjmpalmtall.BP_sjmpalmtall_C");
		return ptr;
	}

}


