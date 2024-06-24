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
	 * 		Name   -> Function SimpleControllerMappingText.SimpleControllerMappingText_C.SetTextColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSlateColor                                 InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USimpleControllerMappingText_C::SetTextColor(const struct FSlateColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleControllerMappingText.SimpleControllerMappingText_C.SetTextColor");
		
		USimpleControllerMappingText_C_SetTextColor_Params params {};
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function SimpleControllerMappingText.SimpleControllerMappingText_C.SetAlignment
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHorizontalAlignment                               HorizontalAlignment                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EVerticalAlignment                                 VerticalAlignment                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EControllerButtonIDDefinitions                     ControllerButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USimpleControllerMappingText_C::SetAlignment(EHorizontalAlignment HorizontalAlignment, EVerticalAlignment VerticalAlignment, EControllerButtonIDDefinitions ControllerButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleControllerMappingText.SimpleControllerMappingText_C.SetAlignment");
		
		USimpleControllerMappingText_C_SetAlignment_Params params {};
		params.HorizontalAlignment = HorizontalAlignment;
		params.VerticalAlignment = VerticalAlignment;
		params.ControllerButton = ControllerButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function SimpleControllerMappingText.SimpleControllerMappingText_C.SetTextFont
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSlateFontInfo                              InFontInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void USimpleControllerMappingText_C::SetTextFont(const struct FSlateFontInfo& InFontInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleControllerMappingText.SimpleControllerMappingText_C.SetTextFont");
		
		USimpleControllerMappingText_C_SetTextFont_Params params {};
		params.InFontInfo = InFontInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function SimpleControllerMappingText.SimpleControllerMappingText_C.SetTextValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USimpleControllerMappingText_C::SetTextValue(const class FText& NewText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleControllerMappingText.SimpleControllerMappingText_C.SetTextValue");
		
		USimpleControllerMappingText_C_SetTextValue_Params params {};
		params.NewText = NewText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function SimpleControllerMappingText.SimpleControllerMappingText_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void USimpleControllerMappingText_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleControllerMappingText.SimpleControllerMappingText_C.Construct");
		
		USimpleControllerMappingText_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function SimpleControllerMappingText.SimpleControllerMappingText_C.OnSynchronizeProperties
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void USimpleControllerMappingText_C::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleControllerMappingText.SimpleControllerMappingText_C.OnSynchronizeProperties");
		
		USimpleControllerMappingText_C_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function SimpleControllerMappingText.SimpleControllerMappingText_C.ExecuteUbergraph_SimpleControllerMappingText
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USimpleControllerMappingText_C::ExecuteUbergraph_SimpleControllerMappingText(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleControllerMappingText.SimpleControllerMappingText_C.ExecuteUbergraph_SimpleControllerMappingText");
		
		USimpleControllerMappingText_C_ExecuteUbergraph_SimpleControllerMappingText_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimpleControllerMappingText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimpleControllerMappingText_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SimpleControllerMappingText.SimpleControllerMappingText_C");
		return ptr;
	}

}


