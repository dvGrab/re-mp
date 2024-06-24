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
	 * BlueprintGeneratedClass BP_SpotLight_Exterior.BP_SpotLight_Exterior_C
	 * Size -> 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
	 */
	class ABP_SpotLight_Exterior_C : public ABP_SpotLight_Base_C
	{
	public:
		struct FColor GetCoronaColor();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
