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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UniversalGameSettings.UniversalGameSettings_C.GetCurrentPlatform
	 */
	struct UUniversalGameSettings_C_GetCurrentPlatform_Params
	{
	public:
		int32_t                                                    OutPlatformFlag;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VKCV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UniversalGameSettings.UniversalGameSettings_C.GetOptionForOptionName
	 */
	struct UUniversalGameSettings_C_GetOptionForOptionName_Params
	{
	public:
		class FName                                                OptionName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGTAOptionsItemTemplate                             Option;                                                  // 0x0008(0x0090)  (Parm, OutParm)
		bool                                                       Valid;                                                   // 0x0098(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8UOJ[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UniversalGameSettings.UniversalGameSettings_C.IsOptionAvailableForPlatform
	 */
	struct UUniversalGameSettings_C_IsOptionAvailableForPlatform_Params
	{
	public:
		class FName                                                OptionName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Available;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_91DK[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UniversalGameSettings.UniversalGameSettings_C.IsOptionAvailableForGame
	 */
	struct UUniversalGameSettings_C_IsOptionAvailableForGame_Params
	{
	public:
		class FName                                                OptionName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    GameType;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Available;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RAH6[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UniversalGameSettings.UniversalGameSettings_C.IsOptionVisibleOnDevice
	 */
	struct UUniversalGameSettings_C_IsOptionVisibleOnDevice_Params
	{
	public:
		class FName                                                Option;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UniversalGameSettings.UniversalGameSettings_C.GetAllAvailableFidelityOptions
	 */
	struct UUniversalGameSettings_C_GetAllAvailableFidelityOptions_Params
	{
	public:
		EGTAPlatforms                                              PlatformOverride;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsEditor;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G0HS[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UGTAFidelityOption*>                          ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UniversalGameSettings.UniversalGameSettings_C.GetListOfFidelityOptionNamesFromSettings
	 */
	struct UUniversalGameSettings_C_GetListOfFidelityOptionNamesFromSettings_Params
	{
	public:
		EGTAPlatforms                                              PlatformOverride;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsEditor;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W1EN[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FText>                                        ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UniversalGameSettings.UniversalGameSettings_C.GetPlatformFidelitySettings
	 */
	struct UUniversalGameSettings_C_GetPlatformFidelitySettings_Params
	{
	public:
		EGTAPlatforms                                              PlatformOverride;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Editor;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
		unsigned char                                              UnknownData_JTAV[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGTAFidelitySettings                                PlatformSetting;                                         // 0x0008(0x0020)  (Parm, OutParm)
		bool                                                       Found;                                                   // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UniversalGameSettings.UniversalGameSettings_C.GetFidelityOptionsNum
	 */
	struct UUniversalGameSettings_C_GetFidelityOptionsNum_Params
	{
	public:
		EGTAPlatforms                                              PlatformOverride;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsEditor;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_604X[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UniversalGameSettings.UniversalGameSettings_C.IsRunning4K
	 */
	struct UUniversalGameSettings_C_IsRunning4K_Params
	{
	public:
		bool                                                       kOrGreater;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_USPI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UniversalGameSettings.UniversalGameSettings_C.GetPlatformFidelityOption
	 */
	struct UUniversalGameSettings_C_GetPlatformFidelityOption_Params
	{
	public:
		class FName                                                PlatformName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGTAFidelitySettings                                PlatformSetting;                                         // 0x0008(0x0020)  (Parm, OutParm)
		bool                                                       Found;                                                   // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UJV0[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UniversalGameSettings.UniversalGameSettings_C.GetCurrentFidelityOption
	 */
	struct UUniversalGameSettings_C_GetCurrentFidelityOption_Params
	{
	public:
		int32_t                                                    CurrentSelection;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGTAPlatforms                                              PlatformOverride;                                        // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsEditor;                                                // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2O10[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGTAFidelityOption*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UniversalGameSettings.UniversalGameSettings_C.GetPlatformDefaults
	 */
	struct UUniversalGameSettings_C_GetPlatformDefaults_Params
	{
	public:
		EGTAPlatforms                                              PlatformOverride;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsEditor;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JPC7[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
