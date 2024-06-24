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
	 * BlueprintGeneratedClass BP_Security_Light.BP_Security_Light_C
	 * Size -> 0x0008 (FullSize[0x03C0] - InheritedSize[0x03B8])
	 */
	class ABP_Security_Light_C : public ABP_Streetlight_Spot_C
	{
	public:
		class USpotLightComponent*                                 SpotLight1;                                              // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
