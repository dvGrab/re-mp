#include <thread>

#include "SDK.h"
#include "Engine.h"
#include "DirectX.h"
#include "Game.h"
#include "Utilities.h"

c_engine* engine = new c_engine();
c_directx* directx = new c_directx();
c_game* game = new c_game();
CUtilities* utilities = new CUtilities();

BOOL WINAPI DllMain(HINSTANCE Instance, DWORD Reason, LPVOID Void)
{
	switch (Reason)
	{
	case DLL_PROCESS_ATTACH:

		// setup console with IO
		AllocConsole();
		freopen("CONIN$", "r", stdin);
		freopen("CONOUT$", "w", stdout);
		freopen("CONOUT$", "w", stderr);

		// setup game patches and functions
		std::thread cgame(&c_game::initialize, game);
		cgame.detach();

		// setup unreal engine sdk
		std::thread cengine(&c_engine::initialize, engine);
		cengine.detach();

		// setup directx first (of course we do)
		std::thread cdx(&c_directx::hook, directx);
		cdx.detach();

		break;
	}

	return true;
}