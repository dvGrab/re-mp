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
	 * 		Name   -> PredefinedFunction UControllerUI_XBoxOne_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControllerUI_XBoxOne_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ControllerUI_XBoxOne.ControllerUI_XBoxOne_C");
		return ptr;
	}

}


