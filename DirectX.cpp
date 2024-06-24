#include "DirectX.h"
#include <d3dx11tex.h>
#include "Engine.h"
#include "Utilities.h"
#include "Game.h"

#define PRESENT_PATTERN "\x48\x89\x6C\x24\x18\x48\x89\x74\x24\x20\x41\x56\x48\x83\xEC\x20\x41\x8B\xE8"
#define PRESENT_MASKING "xxxxxxxxxxxxxxxxxxx"

#define RESIZE_PATTERN "\x48\x89\x5C\x24\x00\x48\x89\x6C\x24\x00\x48\x89\x74\x24\x00\x57\x41\x56\x41\x57\x48\x83\xEC\x30\x44\x8B\xFA"
#define RESIZE_MASKING "xxxx?xxxx?xxxx?xxxxxxxxxxxx"

HRESULT __fastcall ResizeBuffers(IDXGISwapChain* pSwapChain, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags)
{
	if (directx->Targetview)
	{
		ImGui_ImplDX11_Shutdown();
		ImGui::DestroyContext();

		directx->Targetview->Release();
		directx->Targetview = nullptr;
	}

	if (directx->Context)
	{
		directx->Context->Release();
		directx->Context = nullptr;
	}

	if (directx->Device)
	{
		directx->Device->Release();
		directx->Device = nullptr;
	}

	return directx->ResizeBufferPtr(pSwapChain, BufferCount, Width, Height, NewFormat, SwapChainFlags);
}

HRESULT __fastcall Present(IDXGISwapChain* SwapChain, UINT SyncInterval, UINT Flags)
{
	directx->initialize(SwapChain);

	if (GetAsyncKeyState(VK_F5))
		engine->remove_hooks();

	if (directx->Device != nullptr)
	{
		directx->begin();

		directx->text({ 5, 0 }, { 255, 255, 255, 100 }, false, directx->Standart, u8"Testbuild [%s - %s] ", __DATE__, __TIME__);


		auto ped = game->GetPlayerPed(-1);

		if (ped != nullptr)
		{
			auto position = ped->Matrix->Position;

			directx->text({ 50, 50 }, { 255, 0, 0, 255 }, false, directx->Standart, "%f %f %f\n", position.x, position.y, position.z);


			if (GetAsyncKeyState(VK_F1))
			{
				ped->Matrix->Position.x = 287.90f;
				ped->Matrix->Position.y = -38.79f;
				ped->Matrix->Position.z = 1001.51f;
			}
		}

		directx->end(); 
	}

	return directx->PresentPtr(SwapChain, SyncInterval, Flags);
}

void c_directx::begin() {
	ImGui_ImplWin32_NewFrame();
	ImGui_ImplDX11_NewFrame();
	ImGui::NewFrame();
}

void c_directx::end()
{
	ImGui::Render();

	if (this->Context && this->Targetview)
		this->Context->OMSetRenderTargets(1, &this->Targetview, NULL);

	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
}

void c_directx::imgui()
{
	ImGui::CreateContext();

	auto IO = ImGui::GetIO();
	ImFontConfig Config;

	static const ImWchar tahomaRanges[] = {
		0x0020, 0x00FF,
		0x0100, 0x024F,
		0x0250, 0x02FF,
		0x0300, 0x03FF,
		0x0400, 0x044F,
		0x0600, 0x06FF,
		0x0400, 0x052F,
		0x0530, 0x06FF,
		0x0E00, 0x0E7F,
		0x1E00, 0x1FFF,
		0x2000, 0x20CF,
		0x2100, 0x218F,
		0,
	};

	Config.GlyphRanges = tahomaRanges;
	Config.RasterizerMultiply = 1.125f;
	Config.OversampleH = 1;
	Config.OversampleV = 1;

	this->Standart = IO.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\framd.ttf", 15, &Config);
	this->ESP = IO.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\consola.ttf", 12, &Config);
	this->Big = IO.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\consola.ttf", 23, &Config);
	this->Small = IO.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\framd.ttf", 10, &Config);

	IO.IniFilename = nullptr;

	DXGI_SWAP_CHAIN_DESC desc;
	this->Swapchain->GetDesc(&desc);

	if (!ImGui_ImplWin32_Init(desc.OutputWindow))
		printf_s("ImGui_ImplWin32_Init couldnt be initialized.\n");

	if (!ImGui_ImplDX11_Init(this->Device, this->Context))
		printf_s("ImGui_ImlpDX11_Init couldnt be initialized.\n");
}

void c_directx::initialize(IDXGISwapChain* ptr)
{
	if (this->Device != nullptr)
		return;

	this->Swapchain = ptr;

	this->Swapchain->GetDevice(__uuidof(ID3D11Device), (void**)&this->Device);

	this->Device->GetImmediateContext(&this->Context);

	this->Swapchain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&this->BackBuffer);

	this->Device->CreateRenderTargetView(this->BackBuffer, NULL, &this->Targetview);

	this->BackBuffer->Release();

	this->DirectX = LoadLibraryA("d3dx11_43.dll");

	char buf[32];
	for (int i = 50; i >= 30; i--)
	{
		sprintf_s(buf, "D3DCompiler_%d.dll", i);
		HMODULE mod = LoadLibraryA(buf);
	}

	if (this->DirectX)
	{
		this->D3DX11CreateShaderResourceViewFromMemory = (D3DX11CreateShaderResourceViewFromMemory_t)GetProcAddress(this->DirectX, "D3DX11CreateShaderResourceViewFromMemory");

		//	this->load_picture(CursorIcon, sizeof(CursorIcon), ImageIds::CURSOR);
	}

	this->imgui();
}

bool c_directx::hook()
{
	CUtilities* Utilities = new CUtilities();

	auto Handle = (HMODULE)nullptr;

	while (Handle == nullptr) {
		Sleep(1000);
		Handle = reinterpret_cast<HMODULE>(GetModuleHandleA("GameOverlayRenderer64.dll"));
	}

	auto present = Utilities->FindPatternModule((PBYTE)PRESENT_PATTERN, PRESENT_MASKING, Handle);

	this->PresentPtr = (c_directx::PresentType)(present);

	auto resize = Utilities->FindPatternModule((PBYTE)RESIZE_PATTERN, RESIZE_MASKING, Handle);

	this->ResizeBufferPtr = (c_directx::ResizebufferType)(resize);

	DetourRestoreAfterWith();
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourAttach(&(PVOID&)this->PresentPtr, Present);
	DetourAttach(&(PVOID&)this->ResizeBufferPtr, ResizeBuffers);
	DetourTransactionCommit();

	return true;
}

void c_directx::unhook()
{
	DetourRestoreAfterWith();
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourDetach(&(PVOID&)this->PresentPtr, Present);
	DetourDetach(&(PVOID&)this->ResizeBufferPtr, ResizeBuffers);
	DetourTransactionCommit();
}

std::string ConvertWideToUtf8(const std::wstring& wstr)
{
	int count = WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), wstr.length(), NULL, 0, NULL, NULL);
	std::string str(count, 0);
	WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), -1, &str[0], count, NULL, NULL);
	return str;
}

void c_directx::load_picture(unsigned char* Bytes, SIZE_T size, ImageIds id)
{
	D3DX11_IMAGE_LOAD_INFO Info;
	ID3DX11ThreadPump* Pump{ nullptr };

	if (this->D3DX11CreateShaderResourceViewFromMemory)
		this->D3DX11CreateShaderResourceViewFromMemory(this->Device, Bytes, size, &Info, Pump, &this->Images[id], 0);
}

void c_directx::image(CG::FVector2D position, CG::FVector2D size, int id, CG::FLinearColor color)
{
	if (this->D3DX11CreateShaderResourceViewFromMemory)
	{
		auto drawlist = ImGui::GetForegroundDrawList();
		auto Color = IM_COL32(color.R, color.G, color.B, color.A);

		auto x = position.X;
		auto y = position.Y;

		auto width = position.X + size.X;
		auto height = position.Y + size.Y;

		drawlist->AddImage((PVOID)this->Images[id], ImVec2(x, y), ImVec2(width, height), ImVec2(0, 0), ImVec2(1, 1), Color);
	}
}

std::string string_To_UTF8(const std::string& str)
{
	int nwLen = ::MultiByteToWideChar(CP_ACP, 0, str.c_str(), -1, NULL, 0);

	wchar_t* pwBuf = new wchar_t[nwLen + 1];
	ZeroMemory(pwBuf, nwLen * 2 + 2);

	::MultiByteToWideChar(CP_ACP, 0, str.c_str(), str.length(), pwBuf, nwLen);

	int nLen = ::WideCharToMultiByte(CP_UTF8, 0, pwBuf, -1, NULL, NULL, NULL, NULL);

	char* pBuf = new char[nLen + 1];
	ZeroMemory(pBuf, nLen + 1);

	::WideCharToMultiByte(CP_UTF8, 0, pwBuf, nwLen, pBuf, nLen, NULL, NULL);

	std::string retStr(pBuf);

	delete[]pwBuf;
	delete[]pBuf;

	pwBuf = NULL;
	pBuf = NULL;

	return retStr;
}

void c_directx::text(CG::FVector2D position, CG::FLinearColor color, bool centered, ImFont* font, const char* text, ...)
{
	char Message[256];

	va_list arguments;

	va_start(arguments, text);

	vsnprintf(Message, sizeof(Message), text, arguments);

	va_end(arguments);

	ImGui::PushFont(font);

	auto drawlist = ImGui::GetForegroundDrawList();
	auto size = ImGui::CalcTextSize(Message);

	std::string special = string_To_UTF8(Message);

	if (centered)
		position.X = position.X - (size.x / 2.0f);

	drawlist->AddText(ImVec2(position.X + 1, position.Y + 1), IM_COL32(0, 0, 0, color.A), special.c_str());
	drawlist->AddText(ImVec2(position.X, position.Y), IM_COL32(color.R, color.G, color.B, color.A), special.c_str());

	ImGui::PopFont();
}

ImVec2 c_directx::get_text_size(const char* text, ImFont* font)
{
	ImGui::PushFont(font);
	auto value = ImGui::CalcTextSize(text);
	ImGui::PopFont();
	return value;
}

void c_directx::rect(CG::FVector2D position, CG::FVector2D size, CG::FLinearColor color)
{
	auto drawlist = ImGui::GetForegroundDrawList();
	auto Color = IM_COL32(color.R, color.G, color.B, color.A);

	drawlist->AddRect(ImVec2(position.X, position.Y), ImVec2(position.X + size.X, position.Y + size.Y), IM_COL32(0, 0, 0, color.A), 0.0f, 0, 3.0f);
	drawlist->AddRect(ImVec2(position.X, position.Y), ImVec2(position.X + size.X, position.Y + size.Y), Color, 0.0f, 0, 1.0f);
}

void c_directx::filled(CG::FVector2D position, CG::FVector2D size, CG::FLinearColor color, float rounded)
{
	auto drawlist = ImGui::GetForegroundDrawList();

	auto x = position.X;
	auto y = position.Y;

	auto width = position.X + size.X;
	auto height = position.Y + size.Y;

	auto Color = IM_COL32(color.R, color.G, color.B, color.A);

	drawlist->AddRectFilled(ImVec2(x, y), ImVec2(width, height), Color, rounded, 0);
}

void c_directx::filled_multicolor(CG::FVector2D position, CG::FVector2D size, CG::FLinearColor color[4], float rounded)
{
	auto drawlist = ImGui::GetForegroundDrawList();

	auto x = position.X;
	auto y = position.Y;

	auto width = position.X + size.X;
	auto height = position.Y + size.Y;

	ImU32 colors[4];

	for (int i = 0; i < 4; i++)
		colors[i] = IM_COL32(color[i].R, color[i].G, color[i].B, color[i].A);

	drawlist->AddRectFilledMultiColor(ImVec2(x, y), ImVec2(width, height), colors[0], colors[1], colors[2], colors[3]);
}

void c_directx::line(CG::FVector2D from, CG::FVector2D to, CG::FLinearColor color)
{
	auto drawlist = ImGui::GetForegroundDrawList();
	auto Color = IM_COL32(color.R, color.G, color.B, color.A);

	drawlist->AddLine(ImVec2(from.X, from.Y), ImVec2(to.X, to.Y), Color, 1);
}

void c_directx::circle(CG::FVector2D from, CG::FLinearColor color, float radius, int segments)
{
	auto drawlist = ImGui::GetForegroundDrawList();
	auto Color = IM_COL32(color.R, color.G, color.B, color.A);

	drawlist->AddCircle(ImVec2(from.X, from.Y), radius, Color, segments, 1.0f);
}


float c_directx::get_width()
{
	D3D11_VIEWPORT vp;
	UINT nvp = 1;
	this->Context->RSGetViewports(&nvp, &vp);
	return vp.Width;
}

float c_directx::get_height()
{
	D3D11_VIEWPORT vp;
	UINT nvp = 1;
	this->Context->RSGetViewports(&nvp, &vp);
	return vp.Height;
}

ImVec2 c_directx::GetTextSize(const char* text, ImFont* font)
{
	ImGui::PushFont(font);
	auto value = ImGui::CalcTextSize(text);
	ImGui::PopFont();
	return value;
}

void c_directx::triangle(CG::FVector2D top, CG::FVector2D right, CG::FVector2D left, CG::FLinearColor color)
{
	auto drawlist = ImGui::GetForegroundDrawList();
	auto Color = IM_COL32(color.R, color.G, color.B, color.A);

	drawlist->AddTriangleFilled(ImVec2(top.X, top.Y), ImVec2(right.X, right.Y), ImVec2(left.X, left.Y), Color);
}