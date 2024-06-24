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
	 * BlueprintGeneratedClass BP_StreetlightProp.BP_StreetlightProp_C
	 * Size -> 0x0008 (FullSize[0x0378] - InheritedSize[0x0370])
	 */
	class ABP_StreetlightProp_C : public AStreetLightMapActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0370(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		bool SetupBroken(const struct FVector& impulseSrc, const struct FVector& impulseVelocity, const struct FTransform& floorTransform);
		void GetPhysicsFloor(class UStaticMeshComponent** Floor);
		void GetBrokenMesh(class USkeletalMeshComponent** BrokenMesh);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void RemoveFloor();
		void HideBroken();
		void EntityLinked(bool bShouldBeVisible);
		void ExecuteUbergraph_BP_StreetlightProp(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
