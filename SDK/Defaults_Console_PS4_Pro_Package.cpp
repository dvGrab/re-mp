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
	 * 		Name   -> PredefinedFunction UDefaults_Console_PS4_Pro_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaults_Console_PS4_Pro_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Defaults_Console_PS4_Pro.Defaults_Console_PS4_Pro_C");
		return ptr;
	}

}


