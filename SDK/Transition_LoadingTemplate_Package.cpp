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
	 * 		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.GetSecondaryUnderImage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTATransitionState                                State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvasPanel*                                OutCanvas                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_LoadingTemplate_C::GetSecondaryUnderImage(EGTATransitionState State, class UCanvasPanel** OutCanvas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.GetSecondaryUnderImage");
		
		UTransition_LoadingTemplate_C_GetSecondaryUnderImage_Params params {};
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
	 * 		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.CreateProgressBar
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ULoadingProgressBar_base_C*                  BarCreated                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_LoadingTemplate_C::CreateProgressBar(class ULoadingProgressBar_base_C** BarCreated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.CreateProgressBar");
		
		UTransition_LoadingTemplate_C_CreateProgressBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BarCreated != nullptr)
			*BarCreated = params.BarCreated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.GetNextState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTATransitionState                                CurrentState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGTATransitionState                                NextState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_LoadingTemplate_C::GetNextState(EGTATransitionState CurrentState, EGTATransitionState* NextState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.GetNextState");
		
		UTransition_LoadingTemplate_C_GetNextState_Params params {};
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
	 * 		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.SetInitialColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTransition_LoadingTemplate_C::SetInitialColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.SetInitialColor");
		
		UTransition_LoadingTemplate_C_SetInitialColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.Get Random Image
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UTransition_LoadingTemplate_C::Get_Random_Image()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.Get Random Image");
		
		UTransition_LoadingTemplate_C_Get_Random_Image_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.IsOpaque
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UTransition_LoadingTemplate_C::IsOpaque()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.IsOpaque");
		
		UTransition_LoadingTemplate_C_IsOpaque_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.UpdateToCurrentState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTransition_LoadingTemplate_C::UpdateToCurrentState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.UpdateToCurrentState");
		
		UTransition_LoadingTemplate_C_UpdateToCurrentState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.Update
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_LoadingTemplate_C::Update(float dT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.Update");
		
		UTransition_LoadingTemplate_C_Update_Params params {};
		params.dT = dT;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.GetCurrentFadeCanvas
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTATransitionState                                State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvasPanel*                                OutCanvas                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_LoadingTemplate_C::GetCurrentFadeCanvas(EGTATransitionState State, class UCanvasPanel** OutCanvas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.GetCurrentFadeCanvas");
		
		UTransition_LoadingTemplate_C_GetCurrentFadeCanvas_Params params {};
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
	 * 		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.OnLoaded_1285F34942B424F426C90880E454E273
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_LoadingTemplate_C::OnLoaded_1285F34942B424F426C90880E454E273(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.OnLoaded_1285F34942B424F426C90880E454E273");
		
		UTransition_LoadingTemplate_C_OnLoaded_1285F34942B424F426C90880E454E273_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UTransition_LoadingTemplate_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.Construct");
		
		UTransition_LoadingTemplate_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_LoadingTemplate_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.Tick");
		
		UTransition_LoadingTemplate_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.SetProgress
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_LoadingTemplate_C::SetProgress(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.SetProgress");
		
		UTransition_LoadingTemplate_C_SetProgress_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTransition_LoadingTemplate_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.PreConstruct");
		
		UTransition_LoadingTemplate_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.ExecuteUbergraph_Transition_LoadingTemplate
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTransition_LoadingTemplate_C::ExecuteUbergraph_Transition_LoadingTemplate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.ExecuteUbergraph_Transition_LoadingTemplate");
		
		UTransition_LoadingTemplate_C_ExecuteUbergraph_Transition_LoadingTemplate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTransition_LoadingTemplate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransition_LoadingTemplate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Transition_LoadingTemplate.Transition_LoadingTemplate_C");
		return ptr;
	}

}


