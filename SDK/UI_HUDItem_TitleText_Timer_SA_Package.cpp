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
	 * 		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.HideAdditional
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_HUDItem_TitleText_Timer_SA_C::HideAdditional()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.HideAdditional");
		
		UUI_HUDItem_TitleText_Timer_SA_C_HideAdditional_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CreateNewVerticalEntry
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_HUDItem_TitleText_Timer_SA_C::CreateNewVerticalEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CreateNewVerticalEntry");
		
		UUI_HUDItem_TitleText_Timer_SA_C_CreateNewVerticalEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.UpdateStrings
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              TargetArray                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_HUDItem_TitleText_Timer_SA_C::UpdateStrings(const class FString& Selection, TArray<class FString> TargetArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.UpdateStrings");
		
		UUI_HUDItem_TitleText_Timer_SA_C_UpdateStrings_Params params {};
		params.Selection = Selection;
		params.TargetArray = TargetArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetElementNum
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumItems                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               NeedsWideElement                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUDItem_TitleText_Timer_SA_C::SetElementNum(int32_t NumItems, bool NeedsWideElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetElementNum");
		
		UUI_HUDItem_TitleText_Timer_SA_C_SetElementNum_Params params {};
		params.NumItems = NumItems;
		params.NeedsWideElement = NeedsWideElement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.Set Text for Element
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsMainText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        TextValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               SetColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_TitleText_Timer_SA_C::Set_Text_for_Element(int32_t Index, bool IsMainText, const class FText& TextValue, bool SetColor, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.Set Text for Element");
		
		UUI_HUDItem_TitleText_Timer_SA_C_Set_Text_for_Element_Params params {};
		params.Index = Index;
		params.IsMainText = IsMainText;
		params.TextValue = TextValue;
		params.SetColor = SetColor;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.UpdateTimerText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FLinearColor                                SpecifiedColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URichTextBlock*                              TextToUpdate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_TitleText_Timer_SA_C::UpdateTimerText(const class FText& InText, const struct FLinearColor& SpecifiedColor, class URichTextBlock* TextToUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.UpdateTimerText");
		
		UUI_HUDItem_TitleText_Timer_SA_C_UpdateTimerText_Params params {};
		params.InText = InText;
		params.SpecifiedColor = SpecifiedColor;
		params.TextToUpdate = TextToUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_HUDItem_TitleText_Timer_SA_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.Construct");
		
		UUI_HUDItem_TitleText_Timer_SA_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_TitleText_Timer_SA_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.Tick");
		
		UUI_HUDItem_TitleText_Timer_SA_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetContentText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_TitleText_Timer_SA_C::SetContentText(const class FText& Text, const struct FLinearColor& FontColorOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetContentText");
		
		UUI_HUDItem_TitleText_Timer_SA_C_SetContentText_Params params {};
		params.Text = Text;
		params.FontColorOverride = FontColorOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.OnSynchronizeProperties
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_HUDItem_TitleText_Timer_SA_C::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.OnSynchronizeProperties");
		
		UUI_HUDItem_TitleText_Timer_SA_C_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetContentPercentOffset
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              X                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Y                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_TitleText_Timer_SA_C::SetContentPercentOffset(float X, float Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetContentPercentOffset");
		
		UUI_HUDItem_TitleText_Timer_SA_C_SetContentPercentOffset_Params params {};
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetPosition
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              X                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Y                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Xmax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Ymax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_TitleText_Timer_SA_C::SetPosition(float X, float Y, float Xmax, float Ymax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetPosition");
		
		UUI_HUDItem_TitleText_Timer_SA_C_SetPosition_Params params {};
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
	 * 		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetImage
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_TitleText_Timer_SA_C::SetImage(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetImage");
		
		UUI_HUDItem_TitleText_Timer_SA_C_SetImage_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetImageColor
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               forceVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUDItem_TitleText_Timer_SA_C::SetImageColor(const struct FLinearColor& Color, bool forceVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetImageColor");
		
		UUI_HUDItem_TitleText_Timer_SA_C_SetImageColor_Params params {};
		params.Color = Color;
		params.forceVisible = forceVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithFloat
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              floatNum                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_TitleText_Timer_SA_C::CustomFunctionWithFloat(const class FString& FunctionName, float floatNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithFloat");
		
		UUI_HUDItem_TitleText_Timer_SA_C_CustomFunctionWithFloat_Params params {};
		params.FunctionName = FunctionName;
		params.floatNum = floatNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunction
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_TitleText_Timer_SA_C::CustomFunction(const class FString& FunctionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunction");
		
		UUI_HUDItem_TitleText_Timer_SA_C_CustomFunction_Params params {};
		params.FunctionName = FunctionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetContentTextAdditional
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_TitleText_Timer_SA_C::SetContentTextAdditional(const class FText& Text, const struct FLinearColor& FontColorOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetContentTextAdditional");
		
		UUI_HUDItem_TitleText_Timer_SA_C_SetContentTextAdditional_Params params {};
		params.Text = Text;
		params.FontColorOverride = FontColorOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithStrings
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              Strings                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_HUDItem_TitleText_Timer_SA_C::CustomFunctionWithStrings(const class FString& FunctionName, TArray<class FString> Strings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithStrings");
		
		UUI_HUDItem_TitleText_Timer_SA_C_CustomFunctionWithStrings_Params params {};
		params.FunctionName = FunctionName;
		params.Strings = Strings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithInteger
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            integer                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_TitleText_Timer_SA_C::CustomFunctionWithInteger(const class FString& FunctionName, int32_t integer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithInteger");
		
		UUI_HUDItem_TitleText_Timer_SA_C_CustomFunctionWithInteger_Params params {};
		params.FunctionName = FunctionName;
		params.integer = integer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithColor
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_TitleText_Timer_SA_C::CustomFunctionWithColor(const class FString& FunctionName, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithColor");
		
		UUI_HUDItem_TitleText_Timer_SA_C_CustomFunctionWithColor_Params params {};
		params.FunctionName = FunctionName;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithColors
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TArray<struct FLinearColor>                        Colors                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_HUDItem_TitleText_Timer_SA_C::CustomFunctionWithColors(const class FString& FunctionName, TArray<struct FLinearColor> Colors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithColors");
		
		UUI_HUDItem_TitleText_Timer_SA_C_CustomFunctionWithColors_Params params {};
		params.FunctionName = FunctionName;
		params.Colors = Colors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.ExecuteUbergraph_UI_HUDItem_TitleText_Timer_SA
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_TitleText_Timer_SA_C::ExecuteUbergraph_UI_HUDItem_TitleText_Timer_SA(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.ExecuteUbergraph_UI_HUDItem_TitleText_Timer_SA");
		
		UUI_HUDItem_TitleText_Timer_SA_C_ExecuteUbergraph_UI_HUDItem_TitleText_Timer_SA_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HUDItem_TitleText_Timer_SA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HUDItem_TitleText_Timer_SA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C");
		return ptr;
	}

}


