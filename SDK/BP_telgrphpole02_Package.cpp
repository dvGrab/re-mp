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
	 * 		Name   -> PredefinedFunction ABP_telgrphpole02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_telgrphpole02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_telgrphpole02.BP_telgrphpole02_C");
		return ptr;
	}

}


