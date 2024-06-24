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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum ProceduralMeshComponent.EProcMeshSliceCapOption
	 */
	enum class EProcMeshSliceCapOption : uint8_t
	{
		NoCap                  = 0,
		CreateNewSectionForCap = 1,
		UseLastSectionForCap   = 2,
		MAX                    = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ProceduralMeshComponent.ProcMeshSection
	 * Size -> 0x0040
	 */
	struct FProcMeshSection
	{
	public:
		unsigned char                                              UnknownData_E55Q[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<uint32_t>                                           ProcIndexBuffer;                                         // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FBox                                                SectionLocalBox;                                         // 0x0020(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnableCollision;                                        // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSectionVisible;                                         // 0x003D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_03H5[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProceduralMeshComponent.ProcMeshTangent
	 * Size -> 0x0010
	 */
	struct FProcMeshTangent
	{
	public:
		struct FVector                                             TangentX;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlipTangentY;                                           // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OTM4[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
