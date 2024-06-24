/**
 * Name: GTASA
 * Version: 0.0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function MediaPlayerAudioSpawner.MediaPlayerAudioSpawner_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMediaPlayerAudioSpawner_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaPlayerAudioSpawner.MediaPlayerAudioSpawner_C.ReceiveBeginPlay");
		
		AMediaPlayerAudioSpawner_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function MediaPlayerAudioSpawner.MediaPlayerAudioSpawner_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMediaPlayerAudioSpawner_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaPlayerAudioSpawner.MediaPlayerAudioSpawner_C.ReceiveTick");
		
		AMediaPlayerAudioSpawner_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function MediaPlayerAudioSpawner.MediaPlayerAudioSpawner_C.ExecuteUbergraph_MediaPlayerAudioSpawner
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMediaPlayerAudioSpawner_C::ExecuteUbergraph_MediaPlayerAudioSpawner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaPlayerAudioSpawner.MediaPlayerAudioSpawner_C.ExecuteUbergraph_MediaPlayerAudioSpawner");
		
		AMediaPlayerAudioSpawner_C_ExecuteUbergraph_MediaPlayerAudioSpawner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMediaPlayerAudioSpawner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMediaPlayerAudioSpawner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MediaPlayerAudioSpawner.MediaPlayerAudioSpawner_C");
		return ptr;
	}

}


