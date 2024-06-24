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
	 * 		Name   -> Function UI_HUDItem_TitleText.UI_HUDItem_TitleText_C.UpdateMainText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FLinearColor                                SpecifiedColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_TitleText_C::UpdateMainText(const class FText& InText, const struct FLinearColor& SpecifiedColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText.UI_HUDItem_TitleText_C.UpdateMainText");
		
		UUI_HUDItem_TitleText_C_UpdateMainText_Params params {};
		params.InText = InText;
		params.SpecifiedColor = SpecifiedColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText.UI_HUDItem_TitleText_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_HUDItem_TitleText_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText.UI_HUDItem_TitleText_C.Construct");
		
		UUI_HUDItem_TitleText_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText.UI_HUDItem_TitleText_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_TitleText_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText.UI_HUDItem_TitleText_C.Tick");
		
		UUI_HUDItem_TitleText_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText.UI_HUDItem_TitleText_C.SetContentText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_TitleText_C::SetContentText(const class FText& Text, const struct FLinearColor& FontColorOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText.UI_HUDItem_TitleText_C.SetContentText");
		
		UUI_HUDItem_TitleText_C_SetContentText_Params params {};
		params.Text = Text;
		params.FontColorOverride = FontColorOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText.UI_HUDItem_TitleText_C.OnSynchronizeProperties
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_HUDItem_TitleText_C::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText.UI_HUDItem_TitleText_C.OnSynchronizeProperties");
		
		UUI_HUDItem_TitleText_C_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText.UI_HUDItem_TitleText_C.SetContentPercentOffset
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              X                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Y                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_TitleText_C::SetContentPercentOffset(float X, float Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText.UI_HUDItem_TitleText_C.SetContentPercentOffset");
		
		UUI_HUDItem_TitleText_C_SetContentPercentOffset_Params params {};
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText.UI_HUDItem_TitleText_C.SetPosition
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              X                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Y                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Xmax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Ymax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_TitleText_C::SetPosition(float X, float Y, float Xmax, float Ymax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText.UI_HUDItem_TitleText_C.SetPosition");
		
		UUI_HUDItem_TitleText_C_SetPosition_Params params {};
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
	 * 		Name   -> Function UI_HUDItem_TitleText.UI_HUDItem_TitleText_C.SetImage
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_TitleText_C::SetImage(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText.UI_HUDItem_TitleText_C.SetImage");
		
		UUI_HUDItem_TitleText_C_SetImage_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText.UI_HUDItem_TitleText_C.SetImageColor
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               forceVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUDItem_TitleText_C::SetImageColor(const struct FLinearColor& Color, bool forceVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText.UI_HUDItem_TitleText_C.SetImageColor");
		
		UUI_HUDItem_TitleText_C_SetImageColor_Params params {};
		params.Color = Color;
		params.forceVisible = forceVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText.UI_HUDItem_TitleText_C.ExecuteUbergraph_UI_HUDItem_TitleText
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_TitleText_C::ExecuteUbergraph_UI_HUDItem_TitleText(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText.UI_HUDItem_TitleText_C.ExecuteUbergraph_UI_HUDItem_TitleText");
		
		UUI_HUDItem_TitleText_C_ExecuteUbergraph_UI_HUDItem_TitleText_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HUDItem_TitleText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HUDItem_TitleText_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUDItem_TitleText.UI_HUDItem_TitleText_C");
		return ptr;
	}

}


