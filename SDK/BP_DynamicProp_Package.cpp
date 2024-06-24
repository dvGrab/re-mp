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
	 * 		Name   -> Function BP_DynamicProp.BP_DynamicProp_C.GetOutwardVelocityAmt
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              amt                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DynamicProp_C::GetOutwardVelocityAmt(float* amt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicProp.BP_DynamicProp_C.GetOutwardVelocityAmt");
		
		ABP_DynamicProp_C_GetOutwardVelocityAmt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (amt != nullptr)
			*amt = params.amt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_DynamicProp.BP_DynamicProp_C.GetPhysicsFloorC
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UStaticMeshComponent* ABP_DynamicProp_C::GetPhysicsFloorC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicProp.BP_DynamicProp_C.GetPhysicsFloorC");
		
		ABP_DynamicProp_C_GetPhysicsFloorC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_DynamicProp.BP_DynamicProp_C.ImpulseMultiplier
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DynamicProp_C::ImpulseMultiplier(float* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicProp.BP_DynamicProp_C.ImpulseMultiplier");
		
		ABP_DynamicProp_C_ImpulseMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_DynamicProp.BP_DynamicProp_C.SetupBroken
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     impulseSrc                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     impulseVelocity                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  floorTransform                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	bool ABP_DynamicProp_C::SetupBroken(const struct FVector& impulseSrc, const struct FVector& impulseVelocity, const struct FTransform& floorTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicProp.BP_DynamicProp_C.SetupBroken");
		
		ABP_DynamicProp_C_SetupBroken_Params params {};
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
	 * 		Name   -> Function BP_DynamicProp.BP_DynamicProp_C.GetPhysicsFloor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UStaticMeshComponent*                        Floor                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DynamicProp_C::GetPhysicsFloor(class UStaticMeshComponent** Floor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicProp.BP_DynamicProp_C.GetPhysicsFloor");
		
		ABP_DynamicProp_C_GetPhysicsFloor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Floor != nullptr)
			*Floor = params.Floor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_DynamicProp.BP_DynamicProp_C.GetBrokenMesh
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      BrokenMesh                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DynamicProp_C::GetBrokenMesh(class USkeletalMeshComponent** BrokenMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicProp.BP_DynamicProp_C.GetBrokenMesh");
		
		ABP_DynamicProp_C_GetBrokenMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BrokenMesh != nullptr)
			*BrokenMesh = params.BrokenMesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_DynamicProp.BP_DynamicProp_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DynamicProp_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicProp.BP_DynamicProp_C.UserConstructionScript");
		
		ABP_DynamicProp_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_DynamicProp.BP_DynamicProp_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_DynamicProp_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicProp.BP_DynamicProp_C.ReceiveBeginPlay");
		
		ABP_DynamicProp_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_DynamicProp.BP_DynamicProp_C.RemoveFloor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DynamicProp_C::RemoveFloor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicProp.BP_DynamicProp_C.RemoveFloor");
		
		ABP_DynamicProp_C_RemoveFloor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_DynamicProp.BP_DynamicProp_C.HideBroken
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DynamicProp_C::HideBroken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicProp.BP_DynamicProp_C.HideBroken");
		
		ABP_DynamicProp_C_HideBroken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_DynamicProp.BP_DynamicProp_C.EntityLinked
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShouldBeVisible                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DynamicProp_C::EntityLinked(bool bShouldBeVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicProp.BP_DynamicProp_C.EntityLinked");
		
		ABP_DynamicProp_C_EntityLinked_Params params {};
		params.bShouldBeVisible = bShouldBeVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_DynamicProp.BP_DynamicProp_C.CleanupBreak
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DynamicProp_C::CleanupBreak()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicProp.BP_DynamicProp_C.CleanupBreak");
		
		ABP_DynamicProp_C_CleanupBreak_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_DynamicProp.BP_DynamicProp_C.AddCollisionEffects
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		float                                              impulseAmt                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Pos                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Dir                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DynamicProp_C::AddCollisionEffects(float impulseAmt, const struct FVector& Pos, const struct FVector& Dir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicProp.BP_DynamicProp_C.AddCollisionEffects");
		
		ABP_DynamicProp_C_AddCollisionEffects_Params params {};
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
	 * 		Name   -> Function BP_DynamicProp.BP_DynamicProp_C.ExecuteUbergraph_BP_DynamicProp
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DynamicProp_C::ExecuteUbergraph_BP_DynamicProp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicProp.BP_DynamicProp_C.ExecuteUbergraph_BP_DynamicProp");
		
		ABP_DynamicProp_C_ExecuteUbergraph_BP_DynamicProp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DynamicProp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DynamicProp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DynamicProp.BP_DynamicProp_C");
		return ptr;
	}

}


