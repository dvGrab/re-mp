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
	 * 		Name   -> Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.OverrideBGImage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSlateBrush                                 InBrush                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_SlotButton_Legend_C::OverrideBGImage(const struct FSlateBrush& InBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.OverrideBGImage");
		
		UUI_SlotButton_Legend_C_OverrideBGImage_Params params {};
		params.InBrush = InBrush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.SetLegendImage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SlotButton_Legend_C::SetLegendImage(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.SetLegendImage");
		
		UUI_SlotButton_Legend_C_SetLegendImage_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.OverrideMainText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_SlotButton_Legend_C::OverrideMainText(const class FText& NewText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.OverrideMainText");
		
		UUI_SlotButton_Legend_C_OverrideMainText_Params params {};
		params.NewText = NewText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.SetFont
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSlateFontInfo                              NewFont                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_SlotButton_Legend_C::SetFont(const struct FSlateFontInfo& NewFont)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.SetFont");
		
		UUI_SlotButton_Legend_C_SetFont_Params params {};
		params.NewFont = NewFont;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.UpdateBGColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SlotButton_Legend_C::UpdateBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.UpdateBGColor");
		
		UUI_SlotButton_Legend_C_UpdateBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.UpdateTextColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SlotButton_Legend_C::UpdateTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.UpdateTextColor");
		
		UUI_SlotButton_Legend_C_UpdateTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.InitSlotButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGameterSettings*                            SettingsObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SlotButton_Legend_C::InitSlotButton(class UGameterSettings* SettingsObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.InitSlotButton");
		
		UUI_SlotButton_Legend_C_InitSlotButton_Params params {};
		params.SettingsObject = SettingsObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SlotButton_Legend_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SlotButton_Legend_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SlotButton_Legend.UI_SlotButton_Legend_C");
		return ptr;
	}

}


