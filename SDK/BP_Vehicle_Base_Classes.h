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
	 * BlueprintGeneratedClass BP_Vehicle_Base.BP_Vehicle_Base_C
	 * Size -> 0x0090 (FullSize[0x04C8] - InheritedSize[0x0438])
	 */
	class ABP_Vehicle_Base_C : public AGTAVehicle
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0438(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USpotLightComponent*                                 HeadLeft;                                                // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USpotLightComponent*                                 TailLeft;                                                // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USpotLightComponent*                                 HeadRight;                                               // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USpotLightComponent*                                 TailRight;                                               // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		int32_t                                                    HeadlightLeftMat;                                        // 0x0460(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    HeadlightRightMat;                                       // 0x0464(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TaillightLeftMat;                                        // 0x0468(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TaillightRightMat;                                       // 0x046C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsScorched;                                              // 0x0470(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDecalMode;                                             // 0x0471(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MF5O[0x6];                                   // 0x0472(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UProceduralMeshComponent*>                    Plates;                                                  // 0x0478(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UClass*                                              PointLightClass;                                         // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UPointLightComponent*>                        SpecialLights;                                           // 0x0490(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    LeftSirenMat;                                            // 0x04A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RightSirenMat;                                           // 0x04A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OtherSirenMat;                                           // 0x04A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Reflect;                                                 // 0x04AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EGQJ[0x3];                                   // 0x04AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeOfLastBreak;                                         // 0x04B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4IZN[0x4];                                   // 0x04B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrentPlateText;                                        // 0x04B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash

	public:
		class UStaticMeshComponent* CreateVelocityGloveComponent(const struct FVector& Center);
		void Hide1stPersonElements();
		void Show1stPersonElements();
		void SetLowCostLights(bool LowCost);
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
		void Get_Vehicle_Light_Materials(int32_t Light_Index, class UMaterialInstanceConstant** On_Material, class UMaterialInstanceConstant** Off_Material, class UMaterialInterface** DimMaterial);
		void GetLightMaterials(int32_t LightIndex, class UMaterialInstanceConstant** OnMaterial, class UMaterialInstanceConstant** OffMaterial, class UMaterialInterface** DimMaterial);
		void GetSearchMaterials(TArray<class UMaterialInstanceConstant*>* Materials);
		void IsBodyMaterial(class UMaterialInterface* Mat, bool* IsBody);
		void EnableLight(bool IsEnabled, bool UseDim, class ULocalLightComponent* LightComp, int32_t materialIndex, class UMaterialInstanceConstant* Material_On, class UMaterialInstanceConstant* Material_Off, class UMaterialInterface* Material_Dim);
		void SetupLight(const class FName& SocketName, class ULocalLightComponent* LightComp, bool FlipX, int32_t* materialIndex, class UMaterialInstanceConstant* MaterialSearch);
		void SetupVehicleBP();
		void SetScorched(bool scorched);
		void SetSpecialCarLights(EFSpecialLightType LightToModify, bool bEnable);
		void MeshBrokenNearby(const struct FVector& EventLocation);
		void CheckIfPhysStateCanBeDestroyed();
		void SetCarLights(bool bLeftHeadlight, bool bRightHeadlight, bool bLeftTaillight, bool bRightTaillight, bool useDimLeftTailLight, bool useDimRightTailLight);
		void ExecuteUbergraph_BP_Vehicle_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
