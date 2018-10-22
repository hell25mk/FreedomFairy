#include "Window.h"
#include "DxLib.h"
#include "GameMain.h"

const unsigned int Window::Window_Height = 480;
const unsigned int Window::Window_Width = 640;
const int Color_Bit = 16;

void Window::Create(){

	ChangeWindowMode(TRUE);			// ウィンドウモードに設定
	SetGraphMode(Window_Width, Window_Height, Color_Bit);

	DxLib_Init();					 // DXライブラリ初期化処理
	SetDrawScreen(DX_SCREEN_BACK);	//描画先を裏画面に設定

}

void Window::Destroy(){

	DxLib_End();			// DXライブラリ終了処理

}

bool Window::Update(){

	GameMain::GetInstance().Create();

	while(ProcessLoop()){

		if(!GameMain::GetInstance().Update()){
			break;
		}
		GameMain::GetInstance().Draw();

	}

	GameMain::GetInstance().Destroy();

	return false;
}

bool Window::ProcessLoop(){

	if(ScreenFlip() != 0){
		return false;
	}
	if(ProcessMessage() != 0){
		return false;
	}
	if(ClearDrawScreen() != 0){
		return false;
	}

	return true;
}

int Window::GetWindowHeight(){

	return Window_Height;
}

int Window::GetWindowWidth(){

	return Window_Width;
}