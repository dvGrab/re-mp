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
	 * 		Name   -> Function BP_HelicopterSpotLight.BP_HelicopterSpotLight_C.AddOffsetToTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     LocationIn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LocationOut                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HelicopterSpotLight_C::AddOffsetToTarget(const struct FVector& LocationIn, struct FVector* LocationOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HelicopterSpotLight.BP_HelicopterSpotLight_C.AddOffsetToTarget");
		
		UBP_HelicopterSpotLight_C_AddOffsetToTarget_Params params {};
		params.LocationIn = LocationIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocationOut != nullptr)
			*LocationOut = params.LocationOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_HelicopterSpotLight.BP_HelicopterSpotLight_C.UpdateLightPosition
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HelicopterSpotLight_C::UpdateLightPosition(float dT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HelicopterSpotLight.BP_HelicopterSpotLight_C.UpdateLightPosition");
		
		UBP_HelicopterSpotLight_C_UpdateLightPosition_Params params {};
		params.dT = dT;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_HelicopterSpotLight.BP_HelicopterSpotLight_C.SetFollowingActor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HelicopterSpotLight_C::SetFollowingActor(class AActor* NewActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HelicopterSpotLight.BP_HelicopterSpotLight_C.SetFollowingActor");
		
		UBP_HelicopterSpotLight_C_SetFollowingActor_Params params {};
		params.NewActor = NewActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_HelicopterSpotLight.BP_HelicopterSpotLight_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HelicopterSpotLight_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HelicopterSpotLight.BP_HelicopterSpotLight_C.ReceiveTick");
		
		UBP_HelicopterSpotLight_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_HelicopterSpotLight.BP_HelicopterSpotLight_C.ExecuteUbergraph_BP_HelicopterSpotLight
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HelicopterSpotLight_C::ExecuteUbergraph_BP_HelicopterSpotLight(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HelicopterSpotLight.BP_HelicopterSpotLight_C.ExecuteUbergraph_BP_HelicopterSpotLight");
		
		UBP_HelicopterSpotLight_C_ExecuteUbergraph_BP_HelicopterSpotLight_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_HelicopterSpotLight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_HelicopterSpotLight_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HelicopterSpotLight.BP_HelicopterSpotLight_C");
		return ptr;
	}

}


