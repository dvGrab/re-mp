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
	 * 		Name   -> Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.GetCurrentTextObject
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class URichTextBlock*                              TextBox                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_SubtitleText_C::GetCurrentTextObject(class URichTextBlock** TextBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.GetCurrentTextObject");
		
		UUI_HUDItem_SubtitleText_C_GetCurrentTextObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextBox != nullptr)
			*TextBox = params.TextBox;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.UpdateMainText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FLinearColor                                SpecifiedColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_SubtitleText_C::UpdateMainText(const class FText& InText, const struct FLinearColor& SpecifiedColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.UpdateMainText");
		
		UUI_HUDItem_SubtitleText_C_UpdateMainText_Params params {};
		params.InText = InText;
		params.SpecifiedColor = SpecifiedColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.CreateOrUpdateAdditionalText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_SubtitleText_C::CreateOrUpdateAdditionalText(const class FText& NewText, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.CreateOrUpdateAdditionalText");
		
		UUI_HUDItem_SubtitleText_C_CreateOrUpdateAdditionalText_Params params {};
		params.NewText = NewText;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.RemoveAdditionalText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_HUDItem_SubtitleText_C::RemoveAdditionalText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.RemoveAdditionalText");
		
		UUI_HUDItem_SubtitleText_C_RemoveAdditionalText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.CreateAdditionalText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_HUDItem_SubtitleText_C::CreateAdditionalText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.CreateAdditionalText");
		
		UUI_HUDItem_SubtitleText_C_CreateAdditionalText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.CreateBar
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_HUDItem_SubtitleText_C::CreateBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.CreateBar");
		
		UUI_HUDItem_SubtitleText_C_CreateBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.RemoveProgressBar
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_HUDItem_SubtitleText_C::RemoveProgressBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.RemoveProgressBar");
		
		UUI_HUDItem_SubtitleText_C_RemoveProgressBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.CreateOrUpdateProgressBar
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<float>                                      Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_SubtitleText_C::CreateOrUpdateProgressBar(TArray<float>* Info, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.CreateOrUpdateProgressBar");
		
		UUI_HUDItem_SubtitleText_C_CreateOrUpdateProgressBar_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Info != nullptr)
			*Info = params.Info;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_HUDItem_SubtitleText_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.Construct");
		
		UUI_HUDItem_SubtitleText_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_SubtitleText_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.Tick");
		
		UUI_HUDItem_SubtitleText_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.SetImageColor
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               forceVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUDItem_SubtitleText_C::SetImageColor(const struct FLinearColor& Color, bool forceVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.SetImageColor");
		
		UUI_HUDItem_SubtitleText_C_SetImageColor_Params params {};
		params.Color = Color;
		params.forceVisible = forceVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.SetContentText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_SubtitleText_C::SetContentText(const class FText& Text, const struct FLinearColor& FontColorOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.SetContentText");
		
		UUI_HUDItem_SubtitleText_C_SetContentText_Params params {};
		params.Text = Text;
		params.FontColorOverride = FontColorOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.OnSynchronizeProperties
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_HUDItem_SubtitleText_C::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.OnSynchronizeProperties");
		
		UUI_HUDItem_SubtitleText_C_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.SetContentPercentOffset
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              X                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Y                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_SubtitleText_C::SetContentPercentOffset(float X, float Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.SetContentPercentOffset");
		
		UUI_HUDItem_SubtitleText_C_SetContentPercentOffset_Params params {};
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.CustomFunctionWithFloats
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TArray<float>                                      Floats                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_HUDItem_SubtitleText_C::CustomFunctionWithFloats(const class FString& FunctionName, TArray<float> Floats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.CustomFunctionWithFloats");
		
		UUI_HUDItem_SubtitleText_C_CustomFunctionWithFloats_Params params {};
		params.FunctionName = FunctionName;
		params.Floats = Floats;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.CustomFunctionWithColor
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_SubtitleText_C::CustomFunctionWithColor(const class FString& FunctionName, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.CustomFunctionWithColor");
		
		UUI_HUDItem_SubtitleText_C_CustomFunctionWithColor_Params params {};
		params.FunctionName = FunctionName;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.CustomFunctionWithFloat
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              floatNum                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_SubtitleText_C::CustomFunctionWithFloat(const class FString& FunctionName, float floatNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.CustomFunctionWithFloat");
		
		UUI_HUDItem_SubtitleText_C_CustomFunctionWithFloat_Params params {};
		params.FunctionName = FunctionName;
		params.floatNum = floatNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.SetContentTextAdditional
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_SubtitleText_C::SetContentTextAdditional(const class FText& Text, const struct FLinearColor& FontColorOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.SetContentTextAdditional");
		
		UUI_HUDItem_SubtitleText_C_SetContentTextAdditional_Params params {};
		params.Text = Text;
		params.FontColorOverride = FontColorOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.RefreshAfterSettingsChange
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_HUDItem_SubtitleText_C::RefreshAfterSettingsChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.RefreshAfterSettingsChange");
		
		UUI_HUDItem_SubtitleText_C_RefreshAfterSettingsChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.ClearDataOnHide
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_HUDItem_SubtitleText_C::ClearDataOnHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.ClearDataOnHide");
		
		UUI_HUDItem_SubtitleText_C_ClearDataOnHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.ExecuteUbergraph_UI_HUDItem_SubtitleText
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_SubtitleText_C::ExecuteUbergraph_UI_HUDItem_SubtitleText(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.ExecuteUbergraph_UI_HUDItem_SubtitleText");
		
		UUI_HUDItem_SubtitleText_C_ExecuteUbergraph_UI_HUDItem_SubtitleText_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HUDItem_SubtitleText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HUDItem_SubtitleText_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C");
		return ptr;
	}

}


