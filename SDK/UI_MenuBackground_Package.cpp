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
	 * 		Name   -> Function UI_MenuBackground.UI_MenuBackground_C.GetBGCharImage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UImage*                                      BGChar                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MenuBackground_C::GetBGCharImage(class UImage** BGChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MenuBackground.UI_MenuBackground_C.GetBGCharImage");
		
		UUI_MenuBackground_C_GetBGCharImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BGChar != nullptr)
			*BGChar = params.BGChar;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_MenuBackground.UI_MenuBackground_C.Hide BGChar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowCharacter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MenuBackground_C::Hide_BGChar(bool ShowCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MenuBackground.UI_MenuBackground_C.Hide BGChar");
		
		UUI_MenuBackground_C_Hide_BGChar_Params params {};
		params.ShowCharacter = ShowCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_MenuBackground.UI_MenuBackground_C.ExecuteUbergraph_UI_MenuBackground
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MenuBackground_C::ExecuteUbergraph_UI_MenuBackground(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MenuBackground.UI_MenuBackground_C.ExecuteUbergraph_UI_MenuBackground");
		
		UUI_MenuBackground_C_ExecuteUbergraph_UI_MenuBackground_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MenuBackground_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MenuBackground_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MenuBackground.UI_MenuBackground_C");
		return ptr;
	}

}


