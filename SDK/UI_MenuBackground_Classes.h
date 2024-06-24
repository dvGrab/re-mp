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
	 * WidgetBlueprintGeneratedClass UI_MenuBackground.UI_MenuBackground_C
	 * Size -> 0x0008 (FullSize[0x0298] - InheritedSize[0x0290])
	 */
	class UUI_MenuBackground_C : public UUI_DesignTimeUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper

	public:
		void GetBGCharImage(class UImage** BGChar);
		void Hide_BGChar(bool ShowCharacter);
		void ExecuteUbergraph_UI_MenuBackground(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
