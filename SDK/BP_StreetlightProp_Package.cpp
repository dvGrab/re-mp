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
	 * 		Name   -> Function BP_StreetlightProp.BP_StreetlightProp_C.SetupBroken
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     impulseSrc                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     impulseVelocity                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  floorTransform                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	bool ABP_StreetlightProp_C::SetupBroken(const struct FVector& impulseSrc, const struct FVector& impulseVelocity, const struct FTransform& floorTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StreetlightProp.BP_StreetlightProp_C.SetupBroken");
		
		ABP_StreetlightProp_C_SetupBroken_Params params {};
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
	 * 		Name   -> Function BP_StreetlightProp.BP_StreetlightProp_C.GetPhysicsFloor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UStaticMeshComponent*                        Floor                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StreetlightProp_C::GetPhysicsFloor(class UStaticMeshComponent** Floor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StreetlightProp.BP_StreetlightProp_C.GetPhysicsFloor");
		
		ABP_StreetlightProp_C_GetPhysicsFloor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Floor != nullptr)
			*Floor = params.Floor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_StreetlightProp.BP_StreetlightProp_C.GetBrokenMesh
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      BrokenMesh                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StreetlightProp_C::GetBrokenMesh(class USkeletalMeshComponent** BrokenMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StreetlightProp.BP_StreetlightProp_C.GetBrokenMesh");
		
		ABP_StreetlightProp_C_GetBrokenMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BrokenMesh != nullptr)
			*BrokenMesh = params.BrokenMesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_StreetlightProp.BP_StreetlightProp_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StreetlightProp_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StreetlightProp.BP_StreetlightProp_C.UserConstructionScript");
		
		ABP_StreetlightProp_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_StreetlightProp.BP_StreetlightProp_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_StreetlightProp_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StreetlightProp.BP_StreetlightProp_C.ReceiveBeginPlay");
		
		ABP_StreetlightProp_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_StreetlightProp.BP_StreetlightProp_C.RemoveFloor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StreetlightProp_C::RemoveFloor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StreetlightProp.BP_StreetlightProp_C.RemoveFloor");
		
		ABP_StreetlightProp_C_RemoveFloor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_StreetlightProp.BP_StreetlightProp_C.HideBroken
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StreetlightProp_C::HideBroken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StreetlightProp.BP_StreetlightProp_C.HideBroken");
		
		ABP_StreetlightProp_C_HideBroken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_StreetlightProp.BP_StreetlightProp_C.EntityLinked
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShouldBeVisible                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_StreetlightProp_C::EntityLinked(bool bShouldBeVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StreetlightProp.BP_StreetlightProp_C.EntityLinked");
		
		ABP_StreetlightProp_C_EntityLinked_Params params {};
		params.bShouldBeVisible = bShouldBeVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_StreetlightProp.BP_StreetlightProp_C.ExecuteUbergraph_BP_StreetlightProp
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StreetlightProp_C::ExecuteUbergraph_BP_StreetlightProp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StreetlightProp.BP_StreetlightProp_C.ExecuteUbergraph_BP_StreetlightProp");
		
		ABP_StreetlightProp_C_ExecuteUbergraph_BP_StreetlightProp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_StreetlightProp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_StreetlightProp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_StreetlightProp.BP_StreetlightProp_C");
		return ptr;
	}

}


