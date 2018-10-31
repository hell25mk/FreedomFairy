#include <Windows.h>
#include "SystemMain.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int){

	SystemMain systemMain;
	if(systemMain.Init()){
		systemMain.Update();
	}
	systemMain.Final();

	return 0;
}