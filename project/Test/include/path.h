#pragma once
namespace app_path
{
#ifdef DEBUG
	const wchar_t* dll_path = L"..\\..\\..\\product\\CppDll.dll");
#else
	const wchar_t* dll_path = L"CppDll.dll";
#endif
}