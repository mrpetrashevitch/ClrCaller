#pragma once
#include "../include/defs.h"

namespace ClrDll
{
	class CSharpClassPtr;

	class DLLEXPORT CsharpCaller
	{
		CSharpClassPtr* _ptr;
	public:
		CsharpCaller();
		~CsharpCaller();
		const char* GetSum(int a, const char* b);
	};
}
