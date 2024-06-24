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
	 * WidgetBlueprintGeneratedClass GameplayOptions.GameplayOptions_C
	 * Size -> 0x0008 (FullSize[0x0538] - InheritedSize[0x0530])
	 */
	class UGameplayOptions_C : public UUI_OptionsList_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0530(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper

	public:
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_GameplayOptions(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
