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
	 * BlueprintGeneratedClass BP_DynamicProp.BP_DynamicProp_C
	 * Size -> 0x0010 (FullSize[0x02E8] - InheritedSize[0x02D8])
	 */
	class ABP_DynamicProp_C : public ADynamicIPLMapActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystem*                                     CollisionEmitter;                                        // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetOutwardVelocityAmt(float* amt);
		class UStaticMeshComponent* GetPhysicsFloorC();
		void ImpulseMultiplier(float* NewParam);
		bool SetupBroken(const struct FVector& impulseSrc, const struct FVector& impulseVelocity, const struct FTransform& floorTransform);
		void GetPhysicsFloor(class UStaticMeshComponent** Floor);
		void GetBrokenMesh(class USkeletalMeshComponent** BrokenMesh);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void RemoveFloor();
		void HideBroken();
		void EntityLinked(bool bShouldBeVisible);
		void CleanupBreak();
		void AddCollisionEffects(float impulseAmt, const struct FVector& Pos, const struct FVector& Dir);
		void ExecuteUbergraph_BP_DynamicProp(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
