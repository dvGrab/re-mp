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
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_MenuBackground_SAMenu.UI_MenuBackground_SAMenu_C.GetBGCharImage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UImage*                                      BGChar                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MenuBackground_SAMenu_C::GetBGCharImage(class UImage** BGChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MenuBackground_SAMenu.UI_MenuBackground_SAMenu_C.GetBGCharImage");
		
		UUI_MenuBackground_SAMenu_C_GetBGCharImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BGChar != nullptr)
			*BGChar = params.BGChar;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MenuBackground_SAMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MenuBackground_SAMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MenuBackground_SAMenu.UI_MenuBackground_SAMenu_C");
		return ptr;
	}

}


