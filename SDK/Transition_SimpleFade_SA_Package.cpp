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
	 * 		Name   -> Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.UpdateTextPosition
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InLeft                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InTop                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InRight                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InBottom                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_SimpleFade_SA_C::UpdateTextPosition(float InLeft, float InTop, float InRight, float InBottom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.UpdateTextPosition");
		
		UTransition_SimpleFade_SA_C_UpdateTextPosition_Params params {};
		params.InLeft = InLeft;
		params.InTop = InTop;
		params.InRight = InRight;
		params.InBottom = InBottom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.GetFadeOpacity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Canvas                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UTransition_SimpleFade_SA_C::GetFadeOpacity(class UWidget* Canvas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.GetFadeOpacity");
		
		UTransition_SimpleFade_SA_C_GetFadeOpacity_Params params {};
		params.Canvas = Canvas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.SetFadeOpacity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTATransitionState                                CurrentState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvasPanel*                                Canvas                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_SimpleFade_SA_C::SetFadeOpacity(EGTATransitionState CurrentState, class UCanvasPanel* Canvas, float Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.SetFadeOpacity");
		
		UTransition_SimpleFade_SA_C_SetFadeOpacity_Params params {};
		params.CurrentState = CurrentState;
		params.Canvas = Canvas;
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.GetHudItem
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UUI_GTAHUDItem* UTransition_SimpleFade_SA_C::GetHudItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.GetHudItem");
		
		UTransition_SimpleFade_SA_C_GetHudItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.GetNextState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTATransitionState                                CurrentState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGTATransitionState                                NextState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_SimpleFade_SA_C::GetNextState(EGTATransitionState CurrentState, EGTATransitionState* NextState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.GetNextState");
		
		UTransition_SimpleFade_SA_C_GetNextState_Params params {};
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
	 * 		Name   -> Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.SetInitialColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTransition_SimpleFade_SA_C::SetInitialColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.SetInitialColor");
		
		UTransition_SimpleFade_SA_C_SetInitialColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.IsOpaque
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UTransition_SimpleFade_SA_C::IsOpaque()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.IsOpaque");
		
		UTransition_SimpleFade_SA_C_IsOpaque_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.UpdateToCurrentState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTransition_SimpleFade_SA_C::UpdateToCurrentState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.UpdateToCurrentState");
		
		UTransition_SimpleFade_SA_C_UpdateToCurrentState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.Update
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_SimpleFade_SA_C::Update(float dT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.Update");
		
		UTransition_SimpleFade_SA_C_Update_Params params {};
		params.dT = dT;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.GetCurrentFadeCanvas
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTATransitionState                                State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvasPanel*                                OutCanvas                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_SimpleFade_SA_C::GetCurrentFadeCanvas(EGTATransitionState State, class UCanvasPanel** OutCanvas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.GetCurrentFadeCanvas");
		
		UTransition_SimpleFade_SA_C_GetCurrentFadeCanvas_Params params {};
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
	 * 		Name   -> Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UTransition_SimpleFade_SA_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.Construct");
		
		UTransition_SimpleFade_SA_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_SimpleFade_SA_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.Tick");
		
		UTransition_SimpleFade_SA_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.SetHudItemPosition
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              X                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Y                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Xmax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Ymax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_SimpleFade_SA_C::SetHudItemPosition(float X, float Y, float Xmax, float Ymax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.SetHudItemPosition");
		
		UTransition_SimpleFade_SA_C_SetHudItemPosition_Params params {};
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
	 * 		Name   -> Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.CustomFunctionFromString
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionString                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UTransition_SimpleFade_SA_C::CustomFunctionFromString(const class FString& FunctionString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.CustomFunctionFromString");
		
		UTransition_SimpleFade_SA_C_CustomFunctionFromString_Params params {};
		params.FunctionString = FunctionString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.ExecuteUbergraph_Transition_SimpleFade_SA
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_SimpleFade_SA_C::ExecuteUbergraph_Transition_SimpleFade_SA(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.ExecuteUbergraph_Transition_SimpleFade_SA");
		
		UTransition_SimpleFade_SA_C_ExecuteUbergraph_Transition_SimpleFade_SA_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTransition_SimpleFade_SA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransition_SimpleFade_SA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Transition_SimpleFade_SA.Transition_SimpleFade_SA_C");
		return ptr;
	}

}


