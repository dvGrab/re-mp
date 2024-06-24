#pragma once

/**
 * Name: GTA-SA-DEF
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
	 * BlueprintGeneratedClass BP_ExteriorWindowLights.BP_ExteriorWindowLights_C
	 * Size -> 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
	 */
	class ABP_ExteriorWindowLights_C : public AGTAWindowLights
	{
	public:
		struct FVector GetChannelMultipliers();
		void ToColorAndIntensity(const struct FLinearColor& FullColor, float BaseIntensity, struct FLinearColor* NormalizedColor, float* NewIntensity);
		class URectLightComponent* SetupRectLight(float Width, float Height, const struct FLinearColor& NewLightColor, const struct FTransform& Trx, class URectLightComponent* Component);
		class UPointLightComponent* SetupPointLight(float Width, float Height, const struct FLinearColor& NewLightColor, const struct FTransform& Trx, class UPointLightComponent* Component);
		class ULightComponent* ConstructLight(int32_t detailSetting, const struct FTransform& Trx, const struct FLinearColor& lightColor, float Width, float Height);
		void ParamsFromEmissiveMat(class UMaterialInstanceConstant* WindowMIC, float Multiplier, struct FWindowLightCollectionParameters* Params, bool* bValid);
		void ParamsFromWindowMat(class UMaterialInstanceConstant* WindowMIC, float Multiplier, struct FWindowLightCollectionParameters* Params, bool* bValid);
		void GetWindowMaterialColorMult(class UMaterialInstanceConstant* WindowMIC, struct FLinearColor* Out, bool* bUseInverseAlphaModulate, class UTexture2D** BaseColor);
		bool IsEmissiveWindowMaterial(class UMaterialInterface* Mat, class UGTAMaterialData* UserData, struct FWindowLightCollectionParameters* Params);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
