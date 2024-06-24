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
	 * 		Name   -> PredefinedFunction AGamefaceGameModeBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGamefaceGameModeBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Gameface.GamefaceGameModeBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModelDataCommandlet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModelDataCommandlet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Gameface.ModelDataCommandlet");
		return ptr;
	}

}


