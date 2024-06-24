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
	 * WidgetBlueprintGeneratedClass UI_HUD_WeaponWheel_SA.UI_HUD_WeaponWheel_SA_C
	 * Size -> 0x000C (FullSize[0x06D8] - InheritedSize[0x06CC])
	 */
	class UUI_HUD_WeaponWheel_SA_C : public UUI_HUD_WeaponWheel_Base_C
	{
	public:
		unsigned char                                              UnknownData_SSHP[0x4];                                   // 0x06CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06D0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_UI_HUD_WeaponWheel_SA(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
