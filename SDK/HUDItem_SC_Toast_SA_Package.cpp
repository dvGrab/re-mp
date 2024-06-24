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
	 * 		Name   -> PredefinedFunction UHUDItem_SC_Toast_SA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDItem_SC_Toast_SA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDItem_SC_Toast_SA.HUDItem_SC_Toast_SA_C");
		return ptr;
	}

}


