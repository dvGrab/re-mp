/**
 * Name: GTA-SA-DEF
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
	 * 		Name   -> Function BP_Streetlight_Base.BP_Streetlight_Base_C.GetCollisionParticleFX
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UParticleSystem*                             System                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Streetlight_Base_C::GetCollisionParticleFX(class UParticleSystem** System)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Streetlight_Base.BP_Streetlight_Base_C.GetCollisionParticleFX");
		
		ABP_Streetlight_Base_C_GetCollisionParticleFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (System != nullptr)
			*System = params.System;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Streetlight_Base.BP_Streetlight_Base_C.SetupImpostorComponent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UStaticMeshComponent*                        Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Streetlight_Base_C::SetupImpostorComponent(class UStaticMeshComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Streetlight_Base.BP_Streetlight_Base_C.SetupImpostorComponent");
		
		ABP_Streetlight_Base_C_SetupImpostorComponent_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Streetlight_Base.BP_Streetlight_Base_C.UpdateReflectionCorona
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ULightComponent*                             Light                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Streetlight_Base_C::UpdateReflectionCorona(int32_t Index, bool Enabled, class ULightComponent* Light)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Streetlight_Base.BP_Streetlight_Base_C.UpdateReflectionCorona");
		
		ABP_Streetlight_Base_C_UpdateReflectionCorona_Params params {};
		params.Index = Index;
		params.Enabled = Enabled;
		params.Light = Light;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Streetlight_Base.BP_Streetlight_Base_C.SetupBroken
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     impulseSrc                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     impulseVelocity                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  floorTransform                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	bool ABP_Streetlight_Base_C::SetupBroken(const struct FVector& impulseSrc, const struct FVector& impulseVelocity, const struct FTransform& floorTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Streetlight_Base.BP_Streetlight_Base_C.SetupBroken");
		
		ABP_Streetlight_Base_C_SetupBroken_Params params {};
		params.impulseSrc = impulseSrc;
		params.impulseVelocity = impulseVelocity;
		params.floorTransform = floorTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Streetlight_Base.BP_Streetlight_Base_C.ShowLightsInGame
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Streetlight_Base_C::ShowLightsInGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Streetlight_Base.BP_Streetlight_Base_C.ShowLightsInGame");
		
		ABP_Streetlight_Base_C_ShowLightsInGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Streetlight_Base.BP_Streetlight_Base_C.UpdateLightState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Streetlight_Base_C::UpdateLightState(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Streetlight_Base.BP_Streetlight_Base_C.UpdateLightState");
		
		ABP_Streetlight_Base_C_UpdateLightState_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Streetlight_Base.BP_Streetlight_Base_C.GetLights
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class ULocalLightComponent*>                Light                                                      (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_Streetlight_Base_C::GetLights(TArray<class ULocalLightComponent*>* Light)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Streetlight_Base.BP_Streetlight_Base_C.GetLights");
		
		ABP_Streetlight_Base_C_GetLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Light != nullptr)
			*Light = params.Light;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Streetlight_Base.BP_Streetlight_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Streetlight_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Streetlight_Base.BP_Streetlight_Base_C.UserConstructionScript");
		
		ABP_Streetlight_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Streetlight_Base.BP_Streetlight_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Streetlight_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Streetlight_Base.BP_Streetlight_Base_C.ReceiveBeginPlay");
		
		ABP_Streetlight_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Streetlight_Base.BP_Streetlight_Base_C.SetLights
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bLightsOn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForceForEditor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Streetlight_Base_C::SetLights(bool bLightsOn, bool bForceForEditor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Streetlight_Base.BP_Streetlight_Base_C.SetLights");
		
		ABP_Streetlight_Base_C_SetLights_Params params {};
		params.bLightsOn = bLightsOn;
		params.bForceForEditor = bForceForEditor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Streetlight_Base.BP_Streetlight_Base_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Streetlight_Base_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Streetlight_Base.BP_Streetlight_Base_C.ReceiveEndPlay");
		
		ABP_Streetlight_Base_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Streetlight_Base.BP_Streetlight_Base_C.AddCollisionEffects
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		float                                              impulseAmt                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Pos                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Dir                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Streetlight_Base_C::AddCollisionEffects(float impulseAmt, const struct FVector& Pos, const struct FVector& Dir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Streetlight_Base.BP_Streetlight_Base_C.AddCollisionEffects");
		
		ABP_Streetlight_Base_C_AddCollisionEffects_Params params {};
		params.impulseAmt = impulseAmt;
		params.Pos = Pos;
		params.Dir = Dir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Streetlight_Base.BP_Streetlight_Base_C.Dislodged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Streetlight_Base_C::Dislodged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Streetlight_Base.BP_Streetlight_Base_C.Dislodged");
		
		ABP_Streetlight_Base_C_Dislodged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Streetlight_Base.BP_Streetlight_Base_C.ExecuteUbergraph_BP_Streetlight_Base
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Streetlight_Base_C::ExecuteUbergraph_BP_Streetlight_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Streetlight_Base.BP_Streetlight_Base_C.ExecuteUbergraph_BP_Streetlight_Base");
		
		ABP_Streetlight_Base_C_ExecuteUbergraph_BP_Streetlight_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Streetlight_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Streetlight_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Streetlight_Base.BP_Streetlight_Base_C");
		return ptr;
	}

}


