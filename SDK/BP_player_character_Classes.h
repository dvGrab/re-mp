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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_player_character.BP_Player_Character_C
	 * Size -> 0x0160 (FullSize[0x04F0] - InheritedSize[0x0390])
	 */
	class ABP_Player_Character_C : public AGTAPlayerActor
	{
	public:
		class UGTAPoseableComponent*                               Tattoo8;                                                 // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGTAPoseableComponent*                               Tattoo7;                                                 // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGTAPoseableComponent*                               Tattoo6;                                                 // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGTAPoseableComponent*                               Tattoo5;                                                 // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGTAPoseableComponent*                               Tattoo4;                                                 // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGTAPoseableComponent*                               Tattoo3;                                                 // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGTAPoseableComponent*                               Tattoo2;                                                 // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGTAPoseableComponent*                               Tattoo1;                                                 // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGTAPoseableComponent*                               Tattoo9;                                                 // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGTAPoseableComponent*                               watch;                                                   // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGTAPoseableComponent*                               Necklace;                                                // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGTAPoseableComponent*                               Glasses;                                                 // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGTAPoseableComponent*                               hands;                                                   // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGTAPoseableComponent*                               Trousers;                                                // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGTAPoseableComponent*                               shoes;                                                   // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGTAPoseableComponent*                               head;                                                    // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGTAPoseableComponent*                               Hat;                                                     // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGTAPoseableComponent*                               torso;                                                   // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      fatness_1;                                               // 0x0420(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ripped;                                                  // 0x0424(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LeftClavicleTrx;                                         // 0x0428(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RightClavicleTrx;                                        // 0x0434(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGTAClothingTable*                                   Clothing_Table;                                          // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int64_t                                                    Hash;                                                    // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    body_part;                                               // 0x0450(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            RUpperArmRot;                                            // 0x0454(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            LUpperArmRot;                                            // 0x0460(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             rbrow1;                                                  // 0x046C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             lbrow1;                                                  // 0x0478(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             lbrow2;                                                  // 0x0484(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            ThighRot;                                                // 0x0490(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            CalfRot;                                                 // 0x049C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             SpineOffset;                                             // 0x04A8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            FingerRot;                                               // 0x04B4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FTransform                                          UnityTrx;                                                // 0x04C0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		class USkinnedMeshComponent* GetBodyPart(int32_t Index);
		class UGTAClothingTable* GetClothingTable();
		class UGTAPoseableComponent* GetMeshForAttachment();
		class USkeletalMesh* GetSkeletalMesh();
		void RemoveFat();
		void AddFat();
		void RemoveMuscle();
		void AddMuscle();
		void SetupPlayerMorph(class UGTAPoseableComponent* forComp, float withFatness, float withRippedness);
		void SetupCharacter();
		struct FTransform GetBoneTransformTweak(const struct FTransform& InTransform, const class FName& InBoneName, bool* OutShouldRemove, const class FName& TweakType);
		class USkeleton* GetOverrideSkeleton();
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
