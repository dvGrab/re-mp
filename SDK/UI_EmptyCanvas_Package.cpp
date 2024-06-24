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
	 * 		Name   -> PredefinedFunction UUI_EmptyCanvas_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EmptyCanvas_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_EmptyCanvas.UI_EmptyCanvas_C");
		return ptr;
	}

}


