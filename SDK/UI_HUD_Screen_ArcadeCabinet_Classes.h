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
	 * WidgetBlueprintGeneratedClass UI_HUD_Screen_ArcadeCabinet.UI_HUD_Screen_ArcadeCabinet_C
	 * Size -> 0x0008 (FullSize[0x0460] - InheritedSize[0x0458])
	 */
	class UUI_HUD_Screen_ArcadeCabinet_C : public UUI_HUD_Screen_Base_C
	{
	public:
		class UImage*                                              MainIcon;                                                // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void GetMainIcon(class UImage** Image1);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
