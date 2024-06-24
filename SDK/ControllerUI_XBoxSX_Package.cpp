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
	 * 		Name   -> PredefinedFunction UControllerUI_XBoxSX_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControllerUI_XBoxSX_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ControllerUI_XBoxSX.ControllerUI_XBoxSX_C");
		return ptr;
	}

}


