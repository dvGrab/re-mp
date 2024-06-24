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
	 * 		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.CreateWidgetAndAdd
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      WidgetClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPanelWidget*                                PanelToAddTo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UUI_GTAHUDItem* UTransition_Wasted_Base_C::CreateWidgetAndAdd(class UClass* WidgetClass, class UPanelWidget* PanelToAddTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.CreateWidgetAndAdd");
		
		UTransition_Wasted_Base_C_CreateWidgetAndAdd_Params params {};
		params.WidgetClass = WidgetClass;
		params.PanelToAddTo = PanelToAddTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.ShowMissionFailedExtras
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        TextOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTransition_Wasted_Base_C::ShowMissionFailedExtras(const class FText& TextOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.ShowMissionFailedExtras");
		
		UTransition_Wasted_Base_C_ShowMissionFailedExtras_Params params {};
		params.TextOverride = TextOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.GetNextState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTATransitionState                                CurrentState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGTATransitionState                                NextState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_Wasted_Base_C::GetNextState(EGTATransitionState CurrentState, EGTATransitionState* NextState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.GetNextState");
		
		UTransition_Wasted_Base_C_GetNextState_Params params {};
		params.CurrentState = CurrentState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextState != nullptr)
			*NextState = params.NextState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.SetInitialColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTransition_Wasted_Base_C::SetInitialColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.SetInitialColor");
		
		UTransition_Wasted_Base_C_SetInitialColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.SetMainImage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTransition_Wasted_Base_C::SetMainImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.SetMainImage");
		
		UTransition_Wasted_Base_C_SetMainImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.IsOpaque
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UTransition_Wasted_Base_C::IsOpaque()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.IsOpaque");
		
		UTransition_Wasted_Base_C_IsOpaque_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.UpdateToCurrentState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTransition_Wasted_Base_C::UpdateToCurrentState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.UpdateToCurrentState");
		
		UTransition_Wasted_Base_C_UpdateToCurrentState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.Update
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_Wasted_Base_C::Update(float dT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.Update");
		
		UTransition_Wasted_Base_C_Update_Params params {};
		params.dT = dT;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.GetCurrentFadeCanvas
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTATransitionState                                State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvasPanel*                                OutCanvas                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_Wasted_Base_C::GetCurrentFadeCanvas(EGTATransitionState State, class UCanvasPanel** OutCanvas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.GetCurrentFadeCanvas");
		
		UTransition_Wasted_Base_C_GetCurrentFadeCanvas_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCanvas != nullptr)
			*OutCanvas = params.OutCanvas;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UTransition_Wasted_Base_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.Construct");
		
		UTransition_Wasted_Base_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_Wasted_Base_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.Tick");
		
		UTransition_Wasted_Base_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTransition_Wasted_Base_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.PreConstruct");
		
		UTransition_Wasted_Base_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.CustomFunctionFromString
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionString                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UTransition_Wasted_Base_C::CustomFunctionFromString(const class FString& FunctionString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.CustomFunctionFromString");
		
		UTransition_Wasted_Base_C_CustomFunctionFromString_Params params {};
		params.FunctionString = FunctionString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.CustomFunctionFromStringWithString
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionString                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      VariableString                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UTransition_Wasted_Base_C::CustomFunctionFromStringWithString(const class FString& FunctionString, const class FString& VariableString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.CustomFunctionFromStringWithString");
		
		UTransition_Wasted_Base_C_CustomFunctionFromStringWithString_Params params {};
		params.FunctionString = FunctionString;
		params.VariableString = VariableString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.CustomFunctionFromStringWithColor
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionString                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_Wasted_Base_C::CustomFunctionFromStringWithColor(const class FString& FunctionString, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.CustomFunctionFromStringWithColor");
		
		UTransition_Wasted_Base_C_CustomFunctionFromStringWithColor_Params params {};
		params.FunctionString = FunctionString;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.ExecuteUbergraph_Transition_Wasted_Base
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_Wasted_Base_C::ExecuteUbergraph_Transition_Wasted_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.ExecuteUbergraph_Transition_Wasted_Base");
		
		UTransition_Wasted_Base_C_ExecuteUbergraph_Transition_Wasted_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTransition_Wasted_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransition_Wasted_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Transition_Wasted_Base.Transition_Wasted_Base_C");
		return ptr;
	}

}


