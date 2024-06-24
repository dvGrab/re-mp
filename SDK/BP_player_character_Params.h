#pragma once

/**
 * Name: GTA-SA-DEF
 * Version: 0.0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_player_character.BP_Player_Character_C.GetBodyPart
	 */
	struct ABP_Player_Character_C_GetBodyPart_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GZI0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkinnedMeshComponent*                               ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_player_character.BP_Player_Character_C.GetClothingTable
	 */
	struct ABP_Player_Character_C_GetClothingTable_Params
	{
	public:
		class UGTAClothingTable*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_player_character.BP_Player_Character_C.GetMeshForAttachment
	 */
	struct ABP_Player_Character_C_GetMeshForAttachment_Params
	{
	public:
		class UGTAPoseableComponent*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_player_character.BP_Player_Character_C.GetSkeletalMesh
	 */
	struct ABP_Player_Character_C_GetSkeletalMesh_Params
	{
	public:
		class USkeletalMesh*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_player_character.BP_Player_Character_C.RemoveFat
	 */
	struct ABP_Player_Character_C_RemoveFat_Params
	{	};

	/**
	 * Function BP_player_character.BP_Player_Character_C.AddFat
	 */
	struct ABP_Player_Character_C_AddFat_Params
	{	};

	/**
	 * Function BP_player_character.BP_Player_Character_C.RemoveMuscle
	 */
	struct ABP_Player_Character_C_RemoveMuscle_Params
	{	};

	/**
	 * Function BP_player_character.BP_Player_Character_C.AddMuscle
	 */
	struct ABP_Player_Character_C_AddMuscle_Params
	{	};

	/**
	 * Function BP_player_character.BP_Player_Character_C.SetupPlayerMorph
	 */
	struct ABP_Player_Character_C_SetupPlayerMorph_Params
	{
	public:
		class UGTAPoseableComponent*                               forComp;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      withFatness;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      withRippedness;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_player_character.BP_Player_Character_C.SetupCharacter
	 */
	struct ABP_Player_Character_C_SetupCharacter_Params
	{	};

	/**
	 * Function BP_player_character.BP_Player_Character_C.GetBoneTransformTweak
	 */
	struct ABP_Player_Character_C_GetBoneTransformTweak_Params
	{
	public:
		struct FTransform                                          InTransform;                                             // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		class FName                                                InBoneName;                                              // 0x0030(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutShouldRemove;                                         // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WU84[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                TweakType;                                               // 0x003C(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X5GX[0xC];                                   // 0x0044(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0050(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_player_character.BP_Player_Character_C.GetOverrideSkeleton
	 */
	struct ABP_Player_Character_C_GetOverrideSkeleton_Params
	{
	public:
		class USkeleton*                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_player_character.BP_Player_Character_C.UserConstructionScript
	 */
	struct ABP_Player_Character_C_UserConstructionScript_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
