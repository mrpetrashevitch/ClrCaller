#include "../include/defs.h"
#include "../include/path.h"
#include <iostream>
#include <Windows.h>


int main()
{
	HMODULE hLib = LoadLibrary(app_path::dll_path);
	if (!hLib) return 1;
	GetSum pGetSum = (GetSum)GetProcAddress(hLib, "GetSum");
	if (!pGetSum) return 2;
	std::cout << pGetSum(12, "345") << std::endl;
	int a;
	std::cin>>a;
	return 0;
}