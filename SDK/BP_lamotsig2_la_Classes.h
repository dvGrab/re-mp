﻿#pragma once

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
	 * BlueprintGeneratedClass BP_lamotsig2_la.BP_lamotsig2_la_C
	 * Size -> 0x000F (FullSize[0x03B8] - InheritedSize[0x03A9])
	 */
	class ABP_lamotsig2_la_C : public ABP_Streetlight_Billboard_C
	{
	public:
		unsigned char                                              UnknownData_BAUE[0x7];                                   // 0x03A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPointLightComponent*                                PointLight;                                              // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void GetLights(TArray<class ULocalLightComponent*>* Light);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif