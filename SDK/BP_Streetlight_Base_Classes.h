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
	 * BlueprintGeneratedClass BP_Streetlight_Base.BP_Streetlight_Base_C
	 * Size -> 0x0031 (FullSize[0x03A9] - InheritedSize[0x0378])
	 */
	class ABP_Streetlight_Base_C : public ABP_StreetlightProp_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0378(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMaterialInstanceConstant*                           DisabledLightMat;                                        // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceConstant*                           EnabledLightMat;                                         // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsEnabled;                                               // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_03AL[0x3];                                   // 0x0391(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LightMatIndex;                                           // 0x0394(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            CoronaID;                                                // 0x0398(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bDislodged;                                              // 0x03A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetCollisionParticleFX(class UParticleSystem** System);
		void SetupImpostorComponent(class UStaticMeshComponent* Component);
		void UpdateReflectionCorona(int32_t Index, bool Enabled, class ULightComponent* Light);
		bool SetupBroken(const struct FVector& impulseSrc, const struct FVector& impulseVelocity, const struct FTransform& floorTransform);
		void ShowLightsInGame();
		void UpdateLightState(bool Enable);
		void GetLights(TArray<class ULocalLightComponent*>* Light);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void SetLights(bool bLightsOn, bool bForceForEditor);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void AddCollisionEffects(float impulseAmt, const struct FVector& Pos, const struct FVector& Dir);
		void Dislodged();
		void ExecuteUbergraph_BP_Streetlight_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
