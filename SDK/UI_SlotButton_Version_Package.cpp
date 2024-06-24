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
	 * 		Name   -> Function UI_SlotButton_Version.UI_SlotButton_Version_C.UpdateTextColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SlotButton_Version_C::UpdateTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Version.UI_SlotButton_Version_C.UpdateTextColor");
		
		UUI_SlotButton_Version_C_UpdateTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Version.UI_SlotButton_Version_C.OverrideMainText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_SlotButton_Version_C::OverrideMainText(const class FText& NewText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Version.UI_SlotButton_Version_C.OverrideMainText");
		
		UUI_SlotButton_Version_C_OverrideMainText_Params params {};
		params.NewText = NewText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Version.UI_SlotButton_Version_C.SetMainText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_SlotButton_Version_C::SetMainText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Version.UI_SlotButton_Version_C.SetMainText");
		
		UUI_SlotButton_Version_C_SetMainText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Version.UI_SlotButton_Version_C.SetHeight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SlotButton_Version_C::SetHeight(float NewHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Version.UI_SlotButton_Version_C.SetHeight");
		
		UUI_SlotButton_Version_C_SetHeight_Params params {};
		params.NewHeight = NewHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Version.UI_SlotButton_Version_C.GetSlotButton
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UButton*                                     SlotButton                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SlotButton_Version_C::GetSlotButton(class UButton** SlotButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Version.UI_SlotButton_Version_C.GetSlotButton");
		
		UUI_SlotButton_Version_C_GetSlotButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SlotButton != nullptr)
			*SlotButton = params.SlotButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Version.UI_SlotButton_Version_C.SetBackgroundColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSlateColor                                 InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_SlotButton_Version_C::SetBackgroundColor(const struct FSlateColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Version.UI_SlotButton_Version_C.SetBackgroundColor");
		
		UUI_SlotButton_Version_C_SetBackgroundColor_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SlotButton_Version_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SlotButton_Version_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SlotButton_Version.UI_SlotButton_Version_C");
		return ptr;
	}

}


