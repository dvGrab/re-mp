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
	 * 		Name   -> PredefinedFunction ABP_newtreeleaves128_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_newtreeleaves128_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_newtreeleaves128.BP_newtreeleaves128_C");
		return ptr;
	}

}


