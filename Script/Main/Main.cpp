#include <Windows.h>
#include "Window.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int){

	Window::GetInstance().Create();
	Window::GetInstance().Update();
	Window::GetInstance().Destroy();

	return 0;
}