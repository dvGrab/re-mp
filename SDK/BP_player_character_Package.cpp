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
	 * 		Name   -> Function BP_player_character.BP_Player_Character_C.GetBodyPart
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class USkinnedMeshComponent* ABP_Player_Character_C::GetBodyPart(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_player_character.BP_Player_Character_C.GetBodyPart");
		
		ABP_Player_Character_C_GetBodyPart_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_player_character.BP_Player_Character_C.GetClothingTable
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UGTAClothingTable* ABP_Player_Character_C::GetClothingTable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_player_character.BP_Player_Character_C.GetClothingTable");
		
		ABP_Player_Character_C_GetClothingTable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_player_character.BP_Player_Character_C.GetMeshForAttachment
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class UGTAPoseableComponent* ABP_Player_Character_C::GetMeshForAttachment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_player_character.BP_Player_Character_C.GetMeshForAttachment");
		
		ABP_Player_Character_C_GetMeshForAttachment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_player_character.BP_Player_Character_C.GetSkeletalMesh
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class USkeletalMesh* ABP_Player_Character_C::GetSkeletalMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_player_character.BP_Player_Character_C.GetSkeletalMesh");
		
		ABP_Player_Character_C_GetSkeletalMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_player_character.BP_Player_Character_C.RemoveFat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Player_Character_C::RemoveFat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_player_character.BP_Player_Character_C.RemoveFat");
		
		ABP_Player_Character_C_RemoveFat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_player_character.BP_Player_Character_C.AddFat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Player_Character_C::AddFat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_player_character.BP_Player_Character_C.AddFat");
		
		ABP_Player_Character_C_AddFat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_player_character.BP_Player_Character_C.RemoveMuscle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Player_Character_C::RemoveMuscle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_player_character.BP_Player_Character_C.RemoveMuscle");
		
		ABP_Player_Character_C_RemoveMuscle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_player_character.BP_Player_Character_C.AddMuscle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Player_Character_C::AddMuscle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_player_character.BP_Player_Character_C.AddMuscle");
		
		ABP_Player_Character_C_AddMuscle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_player_character.BP_Player_Character_C.SetupPlayerMorph
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGTAPoseableComponent*                       forComp                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              withFatness                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              withRippedness                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Player_Character_C::SetupPlayerMorph(class UGTAPoseableComponent* forComp, float withFatness, float withRippedness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_player_character.BP_Player_Character_C.SetupPlayerMorph");
		
		ABP_Player_Character_C_SetupPlayerMorph_Params params {};
		params.forComp = forComp;
		params.withFatness = withFatness;
		params.withRippedness = withRippedness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_player_character.BP_Player_Character_C.SetupCharacter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Player_Character_C::SetupCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_player_character.BP_Player_Character_C.SetupCharacter");
		
		ABP_Player_Character_C_SetupCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_player_character.BP_Player_Character_C.GetBoneTransformTweak
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FTransform                                  InTransform                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class FName                                        InBoneName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutShouldRemove                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        TweakType                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FTransform ABP_Player_Character_C::GetBoneTransformTweak(const struct FTransform& InTransform, const class FName& InBoneName, bool* OutShouldRemove, const class FName& TweakType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_player_character.BP_Player_Character_C.GetBoneTransformTweak");
		
		ABP_Player_Character_C_GetBoneTransformTweak_Params params {};
		params.InTransform = InTransform;
		params.InBoneName = InBoneName;
		params.TweakType = TweakType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutShouldRemove != nullptr)
			*OutShouldRemove = params.OutShouldRemove;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_player_character.BP_Player_Character_C.GetOverrideSkeleton
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class USkeleton* ABP_Player_Character_C::GetOverrideSkeleton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_player_character.BP_Player_Character_C.GetOverrideSkeleton");
		
		ABP_Player_Character_C_GetOverrideSkeleton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_player_character.BP_Player_Character_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Player_Character_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_player_character.BP_Player_Character_C.UserConstructionScript");
		
		ABP_Player_Character_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Player_Character_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Player_Character_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_player_character.BP_Player_Character_C");
		return ptr;
	}

}


