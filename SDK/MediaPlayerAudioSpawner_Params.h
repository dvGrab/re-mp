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
	 * Function MediaPlayerAudioSpawner.MediaPlayerAudioSpawner_C.ReceiveBeginPlay
	 */
	struct AMediaPlayerAudioSpawner_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MediaPlayerAudioSpawner.MediaPlayerAudioSpawner_C.ReceiveTick
	 */
	struct AMediaPlayerAudioSpawner_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaPlayerAudioSpawner.MediaPlayerAudioSpawner_C.ExecuteUbergraph_MediaPlayerAudioSpawner
	 */
	struct AMediaPlayerAudioSpawner_C_ExecuteUbergraph_MediaPlayerAudioSpawner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
