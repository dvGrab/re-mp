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
	 * WidgetBlueprintGeneratedClass UI_OptionsList_SaveGame.UI_OptionsList_SaveGame_C
	 * Size -> 0x0008 (FullSize[0x0558] - InheritedSize[0x0550])
	 */
	class UUI_OptionsList_SaveGame_C : public UUI_OptionsList_Game_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0550(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper

	public:
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_UI_OptionsList_SaveGame(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
