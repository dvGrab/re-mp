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
	 * BlueprintGeneratedClass UniversalGameSettings.UniversalGameSettings_C
	 * Size -> 0x00C8 (FullSize[0x03F0] - InheritedSize[0x0328])
	 */
	class UUniversalGameSettings_C : public UGameterSettings
	{
	public:
		unsigned char                                              GraphicsOptions[0x28];                                   // 0x0328(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              GameplayOptions[0x28];                                   // 0x0350(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ControlsOptions[0x28];                                   // 0x0378(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AudioOptions[0x28];                                      // 0x03A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LanguageOptions[0x28];                                   // 0x03C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void GetCurrentPlatform(int32_t* OutPlatformFlag);
		void GetOptionForOptionName(const class FName& OptionName, struct FGTAOptionsItemTemplate* Option, bool* Valid);
		void IsOptionAvailableForPlatform(const class FName& OptionName, bool* Available);
		void IsOptionAvailableForGame(const class FName& OptionName, int32_t GameType, bool* Available);
		bool IsOptionVisibleOnDevice(const class FName& Option);
		TArray<class UGTAFidelityOption*> GetAllAvailableFidelityOptions(EGTAPlatforms PlatformOverride, bool IsEditor);
		TArray<class FText> GetListOfFidelityOptionNamesFromSettings(EGTAPlatforms PlatformOverride, bool IsEditor);
		void GetPlatformFidelitySettings(EGTAPlatforms PlatformOverride, bool Editor, struct FGTAFidelitySettings* PlatformSetting, bool* Found);
		int32_t GetFidelityOptionsNum(EGTAPlatforms PlatformOverride, bool IsEditor);
		void IsRunning4K(bool* kOrGreater);
		void GetPlatformFidelityOption(const class FName& PlatformName, struct FGTAFidelitySettings* PlatformSetting, bool* Found);
		class UGTAFidelityOption* GetCurrentFidelityOption(int32_t CurrentSelection, EGTAPlatforms PlatformOverride, bool IsEditor);
		class UClass* GetPlatformDefaults(EGTAPlatforms PlatformOverride, bool IsEditor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
