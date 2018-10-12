#include "DxLib.h"
#include "GameMain.h"

bool ProcessLoop();

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int){

	ChangeWindowMode(TRUE); // ウィンドウモードに設定
	SetGraphMode(640, 480, 16);

	DxLib_Init();   // DXライブラリ初期化処理
	SetDrawScreen(DX_SCREEN_BACK);	//描画先を裏画面に設定

	GameMain::GetInstance().Create();

	while(ProcessLoop()){

		if(!GameMain::GetInstance().Update()){
			break;
		}
		GameMain::GetInstance().Draw();

	}

	GameMain::GetInstance().Destroy();

	DxLib_End(); // DXライブラリ終了処理

	return 0;
}

bool ProcessLoop(){

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