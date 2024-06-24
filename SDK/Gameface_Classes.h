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
	 * Class Gameface.GamefaceGameModeBase
	 * Size -> 0x0000 (FullSize[0x02C0] - InheritedSize[0x02C0])
	 */
	class AGamefaceGameModeBase : public AGameModeBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Gameface.ModelDataCommandlet
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UModelDataCommandlet : public UCommandlet
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
