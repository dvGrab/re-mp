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
	 * 		Name   -> PredefinedFunction UUI_MenuBackground_SAPause_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MenuBackground_SAPause_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MenuBackground_SAPause.UI_MenuBackground_SAPause_C");
		return ptr;
	}

}


