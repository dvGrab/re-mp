/**
 * Name: GTASA
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
	 * 		Name   -> PredefinedFunction USACollisionCacheCommandlet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USACollisionCacheCommandlet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SanAndreas.SACollisionCacheCommandlet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USanAndreasInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USanAndreasInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SanAndreas.SanAndreasInterface");
		return ptr;
	}

}


