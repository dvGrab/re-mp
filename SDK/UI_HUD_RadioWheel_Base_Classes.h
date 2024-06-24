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
	 * WidgetBlueprintGeneratedClass UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C
	 * Size -> 0x00FC (FullSize[0x07C8] - InheritedSize[0x06CC])
	 */
	class UUI_HUD_RadioWheel_Base_C : public UUI_HUD_WeaponWheel_Base_C
	{
	public:
		unsigned char                                              UnknownData_ZPJ2[0x4];                                   // 0x06CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FRadioWheelColors                                   ColorsOverride;                                          // 0x06D8(0x00F0) Edit, BlueprintVisible, HasGetValueTypeHash

	public:
		void GetWeaponWheelItemOffset(float* NewParam);
		void GetRadioWheelItemOffset(float* NewParam);
		void SetupSections(int32_t NumSections);
		void AddTextToImages(TArray<class FString> Array);
		void SetupImages(TArray<struct FSlotImageStruct>* Images);
		void SetSelection(int32_t Index);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ExecuteUbergraph_UI_HUD_RadioWheel_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
