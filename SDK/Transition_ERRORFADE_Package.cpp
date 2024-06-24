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
	 * 		Name   -> Function Transition_ERRORFADE.Transition_ERRORFADE_C.GetNextState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTATransitionState                                CurrentState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGTATransitionState                                NextState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_ERRORFADE_C::GetNextState(EGTATransitionState CurrentState, EGTATransitionState* NextState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_ERRORFADE.Transition_ERRORFADE_C.GetNextState");
		
		UTransition_ERRORFADE_C_GetNextState_Params params {};
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
	 * 		Name   -> Function Transition_ERRORFADE.Transition_ERRORFADE_C.SetInitialColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTransition_ERRORFADE_C::SetInitialColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_ERRORFADE.Transition_ERRORFADE_C.SetInitialColor");
		
		UTransition_ERRORFADE_C_SetInitialColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_ERRORFADE.Transition_ERRORFADE_C.IsOpaque
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UTransition_ERRORFADE_C::IsOpaque()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_ERRORFADE.Transition_ERRORFADE_C.IsOpaque");
		
		UTransition_ERRORFADE_C_IsOpaque_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_ERRORFADE.Transition_ERRORFADE_C.UpdateToCurrentState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTransition_ERRORFADE_C::UpdateToCurrentState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_ERRORFADE.Transition_ERRORFADE_C.UpdateToCurrentState");
		
		UTransition_ERRORFADE_C_UpdateToCurrentState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_ERRORFADE.Transition_ERRORFADE_C.Update
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_ERRORFADE_C::Update(float dT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_ERRORFADE.Transition_ERRORFADE_C.Update");
		
		UTransition_ERRORFADE_C_Update_Params params {};
		params.dT = dT;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_ERRORFADE.Transition_ERRORFADE_C.GetCurrentFadeCanvas
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTATransitionState                                State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvasPanel*                                OutCanvas                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_ERRORFADE_C::GetCurrentFadeCanvas(EGTATransitionState State, class UCanvasPanel** OutCanvas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_ERRORFADE.Transition_ERRORFADE_C.GetCurrentFadeCanvas");
		
		UTransition_ERRORFADE_C_GetCurrentFadeCanvas_Params params {};
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
	 * 		Name   -> Function Transition_ERRORFADE.Transition_ERRORFADE_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UTransition_ERRORFADE_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_ERRORFADE.Transition_ERRORFADE_C.Construct");
		
		UTransition_ERRORFADE_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_ERRORFADE.Transition_ERRORFADE_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_ERRORFADE_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_ERRORFADE.Transition_ERRORFADE_C.Tick");
		
		UTransition_ERRORFADE_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_ERRORFADE.Transition_ERRORFADE_C.ExecuteUbergraph_Transition_ERRORFADE
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_ERRORFADE_C::ExecuteUbergraph_Transition_ERRORFADE(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_ERRORFADE.Transition_ERRORFADE_C.ExecuteUbergraph_Transition_ERRORFADE");
		
		UTransition_ERRORFADE_C_ExecuteUbergraph_Transition_ERRORFADE_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTransition_ERRORFADE_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransition_ERRORFADE_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Transition_ERRORFADE.Transition_ERRORFADE_C");
		return ptr;
	}

}


