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
	 * 		Name   -> PredefinedFunction UDefaults_Mobile_IOS_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaults_Mobile_IOS_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Defaults_Mobile_IOS.Defaults_Mobile_IOS_C");
		return ptr;
	}

}


