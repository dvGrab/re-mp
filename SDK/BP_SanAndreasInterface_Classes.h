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
	 * BlueprintGeneratedClass BP_SanAndreasInterface.BP_SanAndreasInterface_C
	 * Size -> 0x0000 (FullSize[0x0790] - InheritedSize[0x0790])
	 */
	class UBP_SanAndreasInterface_C : public USanAndreasInterface
	{
	public:
		class AGTAExplosion* SpawnExplosion(const struct FVector& Location, EGTAExplosionType Type, EGTAExplosionSurface Surface, const struct FVector& SurfaceNormal, float Scale, int32_t DebrisCount, class AActor* ExplodingActor, bool bSuppressLight);
		class UClass* GetScalabilityClass();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
