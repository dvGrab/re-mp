﻿#pragma once

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
	 * WidgetBlueprintGeneratedClass UI_Options_Menu_Tab_Game_SA.UI_Options_Menu_Tab_Game_SA_C
	 * Size -> 0x0008 (FullSize[0x05F0] - InheritedSize[0x05E8])
	 */
	class UUI_Options_Menu_Tab_Game_SA_C : public UUI_OptionsMenuTab_Game_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05E8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_UI_Options_Menu_Tab_Game_SA(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
