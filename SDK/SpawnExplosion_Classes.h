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
	 * BlueprintGeneratedClass SpawnExplosion.SpawnExplosion_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USpawnExplosion_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetInvScale(const struct FVector& InScale, class UObject* __WorldContext, struct FVector* InvScale);
		void STATIC_SetupSpawnedExplosion(class AGTAExplosion* Explosion, class AActor* ExplodingActor, class UParticleSystem* DebrisTemplate, bool bSuppressLight, class UObject* __WorldContext);
		void STATIC_DetermineExplosionTransform(const struct FVector& Location, const struct FVector& Normal, float Scale, class AActor* ExplodingActor, class UObject* __WorldContext, struct FTransform* Trx);
		void STATIC_Get_Explosion_to_Spawn(EGTAExplosionType Type, EGTAExplosionSurface Surface, class AActor* ExplodingActor, class UObject* __WorldContext, class UClass** Actor, class UParticleSystem** DebrisParticle);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
