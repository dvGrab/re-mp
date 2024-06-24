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
	 * 		Name   -> PredefinedFunction UHUDDrawer_SA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDDrawer_SA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDDrawer_SA.HUDDrawer_SA_C");
		return ptr;
	}

}


