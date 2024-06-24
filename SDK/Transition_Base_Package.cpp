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
	 * 		Name   -> Function Transition_Base.Transition_Base_C.GetSecondaryUnderImage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTATransitionState                                State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvasPanel*                                OutCanvas                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_Base_C::GetSecondaryUnderImage(EGTATransitionState State, class UCanvasPanel** OutCanvas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.GetSecondaryUnderImage");
		
		UTransition_Base_C_GetSecondaryUnderImage_Params params {};
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
	 * 		Name   -> Function Transition_Base.Transition_Base_C.IsBelowPauseMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsBelow                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTransition_Base_C::IsBelowPauseMenu(bool* IsBelow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.IsBelowPauseMenu");
		
		UTransition_Base_C_IsBelowPauseMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsBelow != nullptr)
			*IsBelow = params.IsBelow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Base.Transition_Base_C.UpdateVolumeFades
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTransition_Base_C::UpdateVolumeFades()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.UpdateVolumeFades");
		
		UTransition_Base_C_UpdateVolumeFades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Base.Transition_Base_C.GetFadeOpacity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Canvas                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UTransition_Base_C::GetFadeOpacity(class UWidget* Canvas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.GetFadeOpacity");
		
		UTransition_Base_C_GetFadeOpacity_Params params {};
		params.Canvas = Canvas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Base.Transition_Base_C.SetFadeOpacity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTATransitionState                                CurrentState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvasPanel*                                Canvas                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_Base_C::SetFadeOpacity(EGTATransitionState CurrentState, class UCanvasPanel* Canvas, float Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.SetFadeOpacity");
		
		UTransition_Base_C_SetFadeOpacity_Params params {};
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
	 * 		Name   -> Function Transition_Base.Transition_Base_C.AutoContinue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTATransitionState                                toState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_Base_C::AutoContinue(EGTATransitionState toState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.AutoContinue");
		
		UTransition_Base_C_AutoContinue_Params params {};
		params.toState = toState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Base.Transition_Base_C.GetIsFading
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UTransition_Base_C::GetIsFading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.GetIsFading");
		
		UTransition_Base_C_GetIsFading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Base.Transition_Base_C.UpdateUptime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_Base_C::UpdateUptime(float dT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.UpdateUptime");
		
		UTransition_Base_C_UpdateUptime_Params params {};
		params.dT = dT;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Base.Transition_Base_C.GetNextState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTATransitionState                                CurrentState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGTATransitionState                                NextState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_Base_C::GetNextState(EGTATransitionState CurrentState, EGTATransitionState* NextState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.GetNextState");
		
		UTransition_Base_C_GetNextState_Params params {};
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
	 * 		Name   -> Function Transition_Base.Transition_Base_C.GetCurrentFadeOpacity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float UTransition_Base_C::GetCurrentFadeOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.GetCurrentFadeOpacity");
		
		UTransition_Base_C_GetCurrentFadeOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Base.Transition_Base_C.RecievedATimeChangeInCurrentState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTATransitionState                                CurrentState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_Base_C::RecievedATimeChangeInCurrentState(EGTATransitionState CurrentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.RecievedATimeChangeInCurrentState");
		
		UTransition_Base_C_RecievedATimeChangeInCurrentState_Params params {};
		params.CurrentState = CurrentState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Base.Transition_Base_C.GetFadeDirectionAndLength
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTATransitionState                                State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Length                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsFadeIn                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTransition_Base_C::GetFadeDirectionAndLength(EGTATransitionState State, float* Length, bool* IsFadeIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.GetFadeDirectionAndLength");
		
		UTransition_Base_C_GetFadeDirectionAndLength_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Length != nullptr)
			*Length = params.Length;
		if (IsFadeIn != nullptr)
			*IsFadeIn = params.IsFadeIn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Base.Transition_Base_C.UpdateToCurrentState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTransition_Base_C::UpdateToCurrentState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.UpdateToCurrentState");
		
		UTransition_Base_C_UpdateToCurrentState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Base.Transition_Base_C.UpdateFade
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTATransitionState                                State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_Base_C::UpdateFade(EGTATransitionState State, float dT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.UpdateFade");
		
		UTransition_Base_C_UpdateFade_Params params {};
		params.State = State;
		params.dT = dT;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Base.Transition_Base_C.Update
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_Base_C::Update(float dT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.Update");
		
		UTransition_Base_C_Update_Params params {};
		params.dT = dT;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Base.Transition_Base_C.UpdateStatic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGTATransitionState                                State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_Base_C::UpdateStatic(float dT, EGTATransitionState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.UpdateStatic");
		
		UTransition_Base_C_UpdateStatic_Params params {};
		params.dT = dT;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Base.Transition_Base_C.GetCurrentFadeCanvas
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTATransitionState                                State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvasPanel*                                OutCanvas                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_Base_C::GetCurrentFadeCanvas(EGTATransitionState State, class UCanvasPanel** OutCanvas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.GetCurrentFadeCanvas");
		
		UTransition_Base_C_GetCurrentFadeCanvas_Params params {};
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
	 * 		Name   -> Function Transition_Base.Transition_Base_C.IsFading
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTATransitionState                                State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UTransition_Base_C::IsFading(EGTATransitionState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.IsFading");
		
		UTransition_Base_C_IsFading_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Base.Transition_Base_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UTransition_Base_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.Construct");
		
		UTransition_Base_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Base.Transition_Base_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_Base_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.Tick");
		
		UTransition_Base_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Base.Transition_Base_C.BP_Continue
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTransition_Base_C::BP_Continue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.BP_Continue");
		
		UTransition_Base_C_BP_Continue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Base.Transition_Base_C.BP_SetTransitionStateFadeTime
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGTATransitionState                                StateToChange                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TimeToFade                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_Base_C::BP_SetTransitionStateFadeTime(EGTATransitionState StateToChange, float TimeToFade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.BP_SetTransitionStateFadeTime");
		
		UTransition_Base_C_BP_SetTransitionStateFadeTime_Params params {};
		params.StateToChange = StateToChange;
		params.TimeToFade = TimeToFade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Base.Transition_Base_C.ForceCurrentFadeOpacity
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              newOpacity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_Base_C::ForceCurrentFadeOpacity(float newOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.ForceCurrentFadeOpacity");
		
		UTransition_Base_C_ForceCurrentFadeOpacity_Params params {};
		params.newOpacity = newOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Base.Transition_Base_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UTransition_Base_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.Destruct");
		
		UTransition_Base_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_Base.Transition_Base_C.ExecuteUbergraph_Transition_Base
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_Base_C::ExecuteUbergraph_Transition_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.ExecuteUbergraph_Transition_Base");
		
		UTransition_Base_C_ExecuteUbergraph_Transition_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTransition_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransition_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Transition_Base.Transition_Base_C");
		return ptr;
	}

}


