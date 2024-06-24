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
	 * 		Name   -> Function UI_HUDItem_FullScreenText.UI_HUDItem_FullScreenText_C.GetMainContentCanvasSlot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UCanvasPanelSlot*                            ContentCanvasSlot                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_FullScreenText_C::GetMainContentCanvasSlot(class UCanvasPanelSlot** ContentCanvasSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_FullScreenText.UI_HUDItem_FullScreenText_C.GetMainContentCanvasSlot");
		
		UUI_HUDItem_FullScreenText_C_GetMainContentCanvasSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ContentCanvasSlot != nullptr)
			*ContentCanvasSlot = params.ContentCanvasSlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_FullScreenText.UI_HUDItem_FullScreenText_C.SetMainContentOriginalAnchors
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_HUDItem_FullScreenText_C::SetMainContentOriginalAnchors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_FullScreenText.UI_HUDItem_FullScreenText_C.SetMainContentOriginalAnchors");
		
		UUI_HUDItem_FullScreenText_C_SetMainContentOriginalAnchors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_FullScreenText.UI_HUDItem_FullScreenText_C.GetRichText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class URichTextBlock*                              Text                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_FullScreenText_C::GetRichText(class URichTextBlock** Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_FullScreenText.UI_HUDItem_FullScreenText_C.GetRichText");
		
		UUI_HUDItem_FullScreenText_C_GetRichText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_FullScreenText.UI_HUDItem_FullScreenText_C.UpdateOpacity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_FullScreenText_C::UpdateOpacity(float Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_FullScreenText.UI_HUDItem_FullScreenText_C.UpdateOpacity");
		
		UUI_HUDItem_FullScreenText_C_UpdateOpacity_Params params {};
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_FullScreenText.UI_HUDItem_FullScreenText_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_HUDItem_FullScreenText_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_FullScreenText.UI_HUDItem_FullScreenText_C.Construct");
		
		UUI_HUDItem_FullScreenText_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_FullScreenText.UI_HUDItem_FullScreenText_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_FullScreenText_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_FullScreenText.UI_HUDItem_FullScreenText_C.Tick");
		
		UUI_HUDItem_FullScreenText_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_FullScreenText.UI_HUDItem_FullScreenText_C.SetContentText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_FullScreenText_C::SetContentText(const class FText& Text, const struct FLinearColor& FontColorOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_FullScreenText.UI_HUDItem_FullScreenText_C.SetContentText");
		
		UUI_HUDItem_FullScreenText_C_SetContentText_Params params {};
		params.Text = Text;
		params.FontColorOverride = FontColorOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_FullScreenText.UI_HUDItem_FullScreenText_C.SetContentPercentOffset
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              X                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Y                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_FullScreenText_C::SetContentPercentOffset(float X, float Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_FullScreenText.UI_HUDItem_FullScreenText_C.SetContentPercentOffset");
		
		UUI_HUDItem_FullScreenText_C_SetContentPercentOffset_Params params {};
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_FullScreenText.UI_HUDItem_FullScreenText_C.ExecuteUbergraph_UI_HUDItem_FullScreenText
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_FullScreenText_C::ExecuteUbergraph_UI_HUDItem_FullScreenText(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_FullScreenText.UI_HUDItem_FullScreenText_C.ExecuteUbergraph_UI_HUDItem_FullScreenText");
		
		UUI_HUDItem_FullScreenText_C_ExecuteUbergraph_UI_HUDItem_FullScreenText_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HUDItem_FullScreenText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HUDItem_FullScreenText_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUDItem_FullScreenText.UI_HUDItem_FullScreenText_C");
		return ptr;
	}

}


