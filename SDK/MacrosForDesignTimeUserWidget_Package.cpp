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
	 * 		Name   -> PredefinedFunction UMacrosForDesignTimeUserWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMacrosForDesignTimeUserWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MacrosForDesignTimeUserWidget.MacrosForDesignTimeUserWidget_C");
		return ptr;
	}

}


