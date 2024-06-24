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
	 * BlueprintGeneratedClass BP_GTASA_Vehicle_Ambulance.BP_GTASA_Vehicle_Ambulance_C
	 * Size -> 0x0000 (FullSize[0x04D0] - InheritedSize[0x04D0])
	 */
	class ABP_GTASA_Vehicle_Ambulance_C : public ABP_GTASA_Vehicle_C
	{
	public:
		void GetSpecialLightMaterial(int32_t Index, class UMaterialInstanceConstant** On_Mat, class UMaterialInstanceConstant** Off_Mat);
		void GetSirenClass(bool Left, class UClass** LightClass, class FName* Socket);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
