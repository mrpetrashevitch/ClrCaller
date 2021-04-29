#pragma comment(lib,"ClrDll.lib")
#include "../../ClrDll/include/ClrDll.h"
#include "../include/defs.h"

extern "C"
{
	DLLEXPORT const char* GetSum(int a, const char* b)
	{
		ClrDll::CsharpCaller caller;
		return caller.GetSum(a, b);
	}
}

