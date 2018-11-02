#pragma once

#include <Windows.h>

class Error{

public:
	static void Finish(const char* message, LPCTSTR lpszFuncName, int lineN);

};

