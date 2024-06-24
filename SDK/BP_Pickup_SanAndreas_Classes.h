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
	 * BlueprintGeneratedClass BP_Pickup_SanAndreas.BP_Pickup_SanAndreas_C
	 * Size -> 0x0000 (FullSize[0x02E0] - InheritedSize[0x02E0])
	 */
	class ABP_Pickup_SanAndreas_C : public ABP_Pickup_Base_C
	{
	public:
		void GetMeshOverrideData(class UStaticMesh* Mesh, bool* Found, struct FColor* lightColor, float* LightAttenuationRadius);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
