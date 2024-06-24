#include "Engine.h"
#include "DirectX.h"
#include "Game.h"


typedef void(__fastcall* fnPopulateInterior)(int a1, int64_t a2);
fnPopulateInterior PopulateInterior;

void hkPopulateInterior(int a1, int64_t a2)
{
	return;
}

typedef void(__fastcall* fnGenerateWaitingCop)(float* a1, float a2);
fnGenerateWaitingCop GenerateWaitingCop;

void hkGenerateWaitingCop(float* a1, float a2)
{
	return;
}

typedef int64_t(__fastcall* fnInteriorSetupPeds)(int64_t a1, int64_t a2, int64_t* a3);
fnInteriorSetupPeds InteriorSetupPeds;

int64_t hkInteriorSetupPeds(int64_t a1, int64_t a2, int64_t* a3) {
	printf_s("Interior peds called.\n");
	return 0;
}

c_engine::c_engine()
{
	printf_s("c_engine has been initialized.\n");
}

bool c_engine::initialize()
{
	CG::InitSdk();

	if (this->viewport == nullptr) {
		this->viewport = CG::UObject::FindObject<CG::UGTAViewportClient>(VIEWPORT_STR);
		printf_s("c_engine->viewport has been found.\n");
	}

	engine->place_hooks();

	return true;
}

void c_engine::place_hooks()
{
	DetourRestoreAfterWith();
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());

	if (this->viewport)
	{
		DWORD64** address = *reinterpret_cast<DWORD64***>(this->viewport) + 0x39;
		this->postrender_ptr = (c_engine::postrender_type)(*address);
		printf_s("c_engine -> postrender has been used. (0x%p)\n", this->postrender_ptr);

		DetourAttach(&(PVOID&)this->postrender_ptr, postrender);

		auto base = (DWORD64)GetModuleHandle(NULL);

		PopulateInterior = (fnPopulateInterior)(base + 0x11C4540);
		DetourAttach(&(PVOID&)PopulateInterior, hkPopulateInterior);

		GenerateWaitingCop = (fnGenerateWaitingCop)(base + 0x11C2800);
		DetourAttach(&(PVOID&)GenerateWaitingCop, hkGenerateWaitingCop);
	}

	DetourTransactionCommit();
}

void c_engine::remove_hooks()
{
	printf_s("Removing hooks...\n");
	DetourRestoreAfterWith();
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourDetach(&(PVOID&)this->postrender_ptr, postrender);

	DetourDetach(&(PVOID&)PopulateInterior, hkPopulateInterior);
	DetourDetach(&(PVOID&)GenerateWaitingCop, hkGenerateWaitingCop);
	DetourTransactionCommit();

	directx->unhook();
}


CG::ULocalPlayer* c_engine::localplayer() {

	if (viewport == nullptr)
		return nullptr;

	if (viewport->GameInstance == nullptr)
		return nullptr;

	if (viewport->GameInstance->LocalPlayers[0] == nullptr)
		return nullptr;

	return (viewport->GameInstance->LocalPlayers[0]);
}

CG::APlayerController* c_engine::controller() {
	auto localplayer = this->localplayer();

	if (localplayer == nullptr)
		return nullptr;

	return (CG::APlayerController*)localplayer->PlayerController;
}

CG::UWorld* c_engine::world() {
	return this->viewport->World;
}

CG::TArray<CG::ULevel*> c_engine::levels() {
	return this->world()->Levels;
}

bool c_engine::world_to_screen(CG::FVector position, CG::FVector2D* output) {
	if (this->controller())
		return this->controller()->ProjectWorldLocationToScreen(position, output, true);
	else
		return false;
}

typedef int64_t(__fastcall* fnSetWantedLevel)(int level);

fnSetWantedLevel wanted = nullptr;

void postrender(CG::UCanvas* canvas)
{


	return engine->postrender_ptr(canvas);
}