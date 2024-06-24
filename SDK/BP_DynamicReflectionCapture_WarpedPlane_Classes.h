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
	 * BlueprintGeneratedClass BP_DynamicReflectionCapture_WarpedPlane.BP_DynamicReflectionCapture_WarpedPlane_C
	 * Size -> 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
	 */
	class ABP_DynamicReflectionCapture_WarpedPlane_C : public AGTARTCapture
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void TimeChanged(bool bEditor);
		void ExecuteUbergraph_BP_DynamicReflectionCapture_WarpedPlane(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
