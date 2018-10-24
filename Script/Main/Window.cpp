#include "Window.h"
#include "DxLib.h"
#include "GameMain.h"

void Window::Create(){

	windowHeight = 480;
	windowWidth = 640;
	colorBitDepth = 16;

	ChangeWindowMode(true);			// ウィンドウモードに設定
	SetGraphMode(windowWidth, windowHeight, colorBitDepth);

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

	return windowHeight;
}

int Window::GetWindowWidth(){

	return windowWidth;
}