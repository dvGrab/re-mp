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
	 * 		Name   -> PredefinedFunction URageUnrealInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URageUnrealInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class rageunreal.RageUnrealInterface");
		return ptr;
	}

}


