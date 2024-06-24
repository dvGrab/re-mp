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
	 * Class SanAndreas.SACollisionCacheCommandlet
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class USACollisionCacheCommandlet : public UCommandlet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SanAndreas.SanAndreasInterface
	 * Size -> 0x0050 (FullSize[0x0790] - InheritedSize[0x0740])
	 */
	class USanAndreasInterface : public UGameterface
	{
	public:
		unsigned char                                              UnknownData_G0V2[0x50];                                  // 0x0740(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
