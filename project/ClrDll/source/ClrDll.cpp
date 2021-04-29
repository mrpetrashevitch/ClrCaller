#using "..\..\..\product\CsharpLib.dll"
#include <msclr\auto_gcroot.h>
#include "../include/ClrDll.h"

using namespace System::Runtime::InteropServices;
using namespace CSharpLib;

class ClrDll::CSharpClassPtr
{
public: msclr::auto_gcroot<CSharpClass^> CSharpClass;
};

ClrDll::CsharpCaller::CsharpCaller()
{
	_ptr = new CSharpClassPtr();
	_ptr->CSharpClass = gcnew CSharpClass();
}

ClrDll::CsharpCaller::~CsharpCaller()
{
	delete _ptr;
}

const char* ClrDll::CsharpCaller::GetSum(int a, const char* b)
{
	const char* str = (const char*)Marshal::StringToHGlobalAnsi(_ptr->CSharpClass->GetSum(a, gcnew System::String(b))).ToPointer();
	return str;
}


