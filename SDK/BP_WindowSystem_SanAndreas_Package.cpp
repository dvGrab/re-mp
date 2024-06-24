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
	 * 		Name   -> PredefinedFunction ABP_WindowSystem_SanAndreas_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WindowSystem_SanAndreas_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WindowSystem_SanAndreas.BP_WindowSystem_SanAndreas_C");
		return ptr;
	}

}


