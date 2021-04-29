#pragma comment(lib,"ClrDll.lib")
#include "../../ClrDll/include/ClrDll.h"
#define DLLEXPORT __declspec(dllexport)

extern "C"
{
	DLLEXPORT const char* GetSum(int a, const char* b)
	{
		ClrDll::CsharpCaller caller;
		return caller.GetSum(a, b);
	}
}

