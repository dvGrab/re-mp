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
	 * BlueprintGeneratedClass BP_GameScalability.BP_GameScalability_C
	 * Size -> 0x0014 (FullSize[0x03E4] - InheritedSize[0x03D0])
	 */
	class ABP_GameScalability_C : public AGTAScalability
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ABP_FastStylizedProceduralSky_C*                     SkyBP;                                                   // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MobileNightBoost;                                        // 0x03E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
