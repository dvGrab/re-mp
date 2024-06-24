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
	 * BlueprintGeneratedClass BP_BridgeLight.BP_BridgeLight_C
	 * Size -> 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
	 */
	class ABP_BridgeLight_C : public ABP_TowerLight_C
	{
	public:
		struct FColor GetCoronaColor();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
