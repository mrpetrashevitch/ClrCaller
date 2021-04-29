#include "../include/defs.h"
#include <iostream>
#include <Windows.h>


int main()
{
	HMODULE hLib = LoadLibrary(L"..\\..\\..\\product\\CppDll.dll");
	if (!hLib) return 1;
	GetSum pGetSum = (GetSum)GetProcAddress(hLib, "GetSum");
	if (!pGetSum) return 2;
	std::cout << pGetSum(12, "345") << std::endl;
	return 0;
}