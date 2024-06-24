#include "Utilities.h"
#include <stdio.h>

//thanks to some uc guy.

DWORD64 CUtilities::ExtractMovDWORD(DWORD64 dwAddress, DWORD dwOffset, BOOL bRip)
{
	BYTE bResult[0x8] = { 0x0 };
	memcpy(bResult, (PVOID)(dwAddress + dwOffset), 0x4);

	if (bResult[3] == 0xFF)
	{
		bResult[4] = 0xFF;
		bResult[5] = 0xFF;
		bResult[6] = 0xFF;
		bResult[7] = 0xFF;
	}

	return (bRip) ? (*((PDWORD64)bResult) + dwAddress + dwOffset + 0x4) : *((PDWORD64)bResult);
}

DWORD64 CUtilities::ExtractCallDWORD(DWORD64 dwAddress, DWORD dwOffset)
{
	BYTE bResult[0x8] = { 0x0 };
	memcpy(bResult, (PVOID)(dwAddress + dwOffset), 0x4);

	if (bResult[3] == 0xFF)
	{
		bResult[4] = 0xFF;
		bResult[5] = 0xFF;
		bResult[6] = 0xFF;
		bResult[7] = 0xFF;
	}

	return (dwAddress + dwOffset + *((PDWORD64)bResult) + 0x4);
}

BOOL CUtilities::Compare(const BYTE* pData, const BYTE* bMask, const char* szMask)
{
	for (; *szMask; ++szMask, ++pData, ++bMask)
	{
		if (*szMask == 'x' && *pData != *bMask)
			return 0;
	}

	return (*szMask) == NULL;
}

DWORD64 CUtilities::FindPattern(BYTE* bMask, const char* szMask)
{
	MODULEINFO moduleInfo = { 0 };
	GetModuleInformation(GetCurrentProcess(), GetModuleHandle(NULL), &moduleInfo, sizeof(MODULEINFO));

	DWORD64 dwBaseAddress = (DWORD64)moduleInfo.lpBaseOfDll;
	DWORD64 dwModuleSize = (DWORD64)moduleInfo.SizeOfImage;

	for (DWORD64 i = 0; i < dwModuleSize; i++)
	{
		if (Compare((BYTE*)(dwBaseAddress + i), bMask, szMask))
			return (DWORD64)(dwBaseAddress + i);
	}

	return 0;
}

DWORD64 CUtilities::FindPatternModule(BYTE* bMask, const char* szMask, HMODULE Module)
{
	MODULEINFO moduleInfo = { 0 };
	GetModuleInformation(GetCurrentProcess(), Module, &moduleInfo, sizeof(MODULEINFO));

	DWORD64 dwBaseAddress = (DWORD64)moduleInfo.lpBaseOfDll;
	DWORD64 dwModuleSize = (DWORD64)moduleInfo.SizeOfImage;

	for (DWORD64 i = 0; i < dwModuleSize; i++)
	{
		if (Compare((BYTE*)(dwBaseAddress + i), bMask, szMask))
			return (DWORD64)(dwBaseAddress + i);
	}

	return 0;
}

void CUtilities::patch(DWORD64 address, int value, int bytes) {

	auto base = (DWORD64)GetModuleHandle(NULL);

	DWORD d, ds;
	VirtualProtect((void*)(base + address), bytes, PAGE_EXECUTE_READWRITE, &d);
	memset((void*)(base + address), value, bytes);
	VirtualProtect((void*)(base + address), bytes, d, &ds);

	printf_s("Byte patch 0x%x applied at 0x%p.\n", value, (base + address));
}