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
	 * 		Name   -> Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.SetBarColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_HealthBar_SA_Part_C::SetBarColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.SetBarColor");
		
		UUI_HUD_HealthBar_SA_Part_C_SetBarColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.SetTextColor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class URichTextBlock*                              RichTextObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                NewColor                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_HealthBar_SA_Part_C::SetTextColor(class URichTextBlock* RichTextObject, const struct FLinearColor& NewColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.SetTextColor");
		
		UUI_HUD_HealthBar_SA_Part_C_SetTextColor_Params params {};
		params.RichTextObject = RichTextObject;
		params.NewColor = NewColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.UpdateBar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_HealthBar_SA_Part_C::UpdateBar(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.UpdateBar");
		
		UUI_HUD_HealthBar_SA_Part_C_UpdateBar_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.UpdateTimerText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class URichTextBlock*                              TextObject                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SetColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_HealthBar_SA_Part_C::UpdateTimerText(const class FText& Text, class URichTextBlock* TextObject, bool SetColor, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.UpdateTimerText");
		
		UUI_HUD_HealthBar_SA_Part_C_UpdateTimerText_Params params {};
		params.Text = Text;
		params.TextObject = TextObject;
		params.SetColor = SetColor;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_HUD_HealthBar_SA_Part_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.Construct");
		
		UUI_HUD_HealthBar_SA_Part_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.OnSynchronizeProperties
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_HUD_HealthBar_SA_Part_C::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.OnSynchronizeProperties");
		
		UUI_HUD_HealthBar_SA_Part_C_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_HealthBar_SA_Part_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.Tick");
		
		UUI_HUD_HealthBar_SA_Part_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.SetContentText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_HealthBar_SA_Part_C::SetContentText(const class FText& Text, const struct FLinearColor& FontColorOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.SetContentText");
		
		UUI_HUD_HealthBar_SA_Part_C_SetContentText_Params params {};
		params.Text = Text;
		params.FontColorOverride = FontColorOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.SetContentPercentOffset
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              X                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Y                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_HealthBar_SA_Part_C::SetContentPercentOffset(float X, float Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.SetContentPercentOffset");
		
		UUI_HUD_HealthBar_SA_Part_C_SetContentPercentOffset_Params params {};
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.SetPosition
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              X                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Y                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Xmax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Ymax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_HealthBar_SA_Part_C::SetPosition(float X, float Y, float Xmax, float Ymax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.SetPosition");
		
		UUI_HUD_HealthBar_SA_Part_C_SetPosition_Params params {};
		params.X = X;
		params.Y = Y;
		params.Xmax = Xmax;
		params.Ymax = Ymax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.SetImage
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_HealthBar_SA_Part_C::SetImage(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.SetImage");
		
		UUI_HUD_HealthBar_SA_Part_C_SetImage_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.SetImageColor
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               forceVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUD_HealthBar_SA_Part_C::SetImageColor(const struct FLinearColor& Color, bool forceVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.SetImageColor");
		
		UUI_HUD_HealthBar_SA_Part_C_SetImageColor_Params params {};
		params.Color = Color;
		params.forceVisible = forceVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.CustomFunctionWithFloat
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              floatNum                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_HealthBar_SA_Part_C::CustomFunctionWithFloat(const class FString& FunctionName, float floatNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.CustomFunctionWithFloat");
		
		UUI_HUD_HealthBar_SA_Part_C_CustomFunctionWithFloat_Params params {};
		params.FunctionName = FunctionName;
		params.floatNum = floatNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.CustomFunction
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_HealthBar_SA_Part_C::CustomFunction(const class FString& FunctionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.CustomFunction");
		
		UUI_HUD_HealthBar_SA_Part_C_CustomFunction_Params params {};
		params.FunctionName = FunctionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.Reset
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_HUD_HealthBar_SA_Part_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.Reset");
		
		UUI_HUD_HealthBar_SA_Part_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.SetContentTextAdditional
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_HealthBar_SA_Part_C::SetContentTextAdditional(const class FText& Text, const struct FLinearColor& FontColorOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.SetContentTextAdditional");
		
		UUI_HUD_HealthBar_SA_Part_C_SetContentTextAdditional_Params params {};
		params.Text = Text;
		params.FontColorOverride = FontColorOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.ExecuteUbergraph_UI_HUD_HealthBar_SA_Part
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_HealthBar_SA_Part_C::ExecuteUbergraph_UI_HUD_HealthBar_SA_Part(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.ExecuteUbergraph_UI_HUD_HealthBar_SA_Part");
		
		UUI_HUD_HealthBar_SA_Part_C_ExecuteUbergraph_UI_HUD_HealthBar_SA_Part_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HUD_HealthBar_SA_Part_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HUD_HealthBar_SA_Part_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C");
		return ptr;
	}

}


