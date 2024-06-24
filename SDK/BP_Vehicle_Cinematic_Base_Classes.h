#pragma once

/**
 * Name: GTASA
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
	 * BlueprintGeneratedClass BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C
	 * Size -> 0x007C (FullSize[0x04BC] - InheritedSize[0x0440])
	 */
	class ABP_Vehicle_Cinematic_Base_C : public AGTAVehicleCinematic
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USpotLightComponent*                                 HeadLeft;                                                // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USpotLightComponent*                                 TailLeft;                                                // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USpotLightComponent*                                 HeadRight;                                               // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USpotLightComponent*                                 TailRight;                                               // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		int32_t                                                    HeadlightLeftMat;                                        // 0x0468(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    HeadlightRightMat;                                       // 0x046C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TaillightLeftMat;                                        // 0x0470(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TaillightRightMat;                                       // 0x0474(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsScorched;                                              // 0x0478(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDecalMode;                                             // 0x0479(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7GAJ[0x6];                                   // 0x047A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UProceduralMeshComponent*>                    Plates;                                                  // 0x0480(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UClass*                                              PointLightClass;                                         // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UPointLightComponent*>                        SpecialLights;                                           // 0x0498(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    LeftSirenMat;                                            // 0x04A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RightSirenMat;                                           // 0x04AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OtherSirenMat;                                           // 0x04B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Reflect;                                                 // 0x04B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B07R[0x3];                                   // 0x04B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeOfLastBreak;                                         // 0x04B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetMeshComp(class USkinnedMeshComponent** MeshComp);
		void GetSpecialLightMaterial(int32_t Index, class UMaterialInstanceConstant** On_Mat, class UMaterialInstanceConstant** Off_Mat);
		void UpdateMaterialForSpecialLight(EFSpecialLightType LightType, bool IsOn);
		void GetLicenseBaseScale(struct FVector2D* Out);
		void Setup_Heli_Spot_Light(class UBP_HelicopterSpotLight_C* SpotLight, class AActor* Target, const class FName& SocketName);
		void GetSirenClass(bool Left, class UClass** LightClass, class FName* Socket);
		void SetupSpecialLight(const class FName& SocketName, class ULocalLightComponent* LightComp, bool FlipX);
		void GetSpecialLightPointer(EFSpecialLightType Type, class UPointLightComponent** Light);
		void UpdateSpecialLight(EFSpecialLightType LightType, bool ShouldEnable);
		void GetSpecialLightInfo(EFSpecialLightType LightType, bool* success, class FName* SocketName, class UClass** ComponentClass);
		void SetTaxiLight(bool bEnabled);
		void GetLicensePlateMI(class UMaterialInstanceConstant** Out_MI);
		void GetLicensePlateScale(struct FVector2D* OutScale);
		void SetLicensePlate(const class FString& WithText);
		void SetupHeadlightOption(const struct FGTAHeadlightSetting& Setting);
		void SetMaterialsAsScorched(TArray<class UMaterialInterface*>* Materials, class UPrimitiveComponent* Mesh);
		void GetVehicleLightMaterials(int32_t Light_Index, class UMaterialInstanceConstant** On_Material, class UMaterialInstanceConstant** Off_Material);
		void GetLightMaterials(int32_t LightIndex, class UMaterialInstanceConstant** OnMaterial, class UMaterialInstanceConstant** OffMaterial);
		void GetSearchMaterials(TArray<class UMaterialInstanceConstant*>* Materials);
		void IsBodyMaterial(class UMaterialInterface* Mat, bool* IsBody);
		void EnableLight(bool IsEnabled, class ULocalLightComponent* LightComp, int32_t materialIndex, class UMaterialInstanceConstant* Material_On, class UMaterialInstanceConstant* Material_Off);
		void SetupLight(const class FName& SocketName, class ULocalLightComponent* LightComp, bool FlipX, int32_t* materialIndex, class UMaterialInstanceConstant* MaterialSearch);
		void SetCarLights(bool bLeftHeadlight, bool bRightHeadlight, bool bLeftTaillight, bool bRightTaillight, bool useDimLeftTailLight, bool useDimRightTailLight);
		void SetupVehicleBP();
		void SetScorched(bool scorched);
		void BoneSetAsDamaged(const class FName& BoneName, bool bDamaged);
		void SetSpecialCarLights(EFSpecialLightType LightToModify, bool bEnable);
		void MeshBrokenNearby(const struct FVector& EventLocation);
		void CheckIfPhysStateCanBeDestroyed();
		void ExecuteUbergraph_BP_Vehicle_Cinematic_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
