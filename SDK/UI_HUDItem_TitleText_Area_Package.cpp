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
	 * 		Name   -> PredefinedFunction UUI_HUDItem_TitleText_Area_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HUDItem_TitleText_Area_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUDItem_TitleText_Area.UI_HUDItem_TitleText_Area_C");
		return ptr;
	}

}


