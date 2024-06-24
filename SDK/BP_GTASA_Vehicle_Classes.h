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
	 * BlueprintGeneratedClass BP_GTASA_Vehicle.BP_GTASA_Vehicle_C
	 * Size -> 0x0008 (FullSize[0x04D0] - InheritedSize[0x04C8])
	 */
	class ABP_GTASA_Vehicle_C : public ABP_Vehicle_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void SetLicensePlateDesign(int32_t Param);
		void GetLightMaterials(int32_t LightIndex, class UMaterialInstanceConstant** OnMaterial, class UMaterialInstanceConstant** OffMaterial, class UMaterialInterface** DimMaterial);
		void GetSearchMaterials(TArray<class UMaterialInstanceConstant*>* Materials);
		void SetupVehicleBP();
		void ExecuteUbergraph_BP_GTASA_Vehicle(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
