#include "GameMain.h"
#include "../Scene/Manager/SceneManager.h"
#include "DxLib.h"
#include "../FPS/FPS.h"

const int Color_White = GetColor(255, 255, 255);

void GameMain::Create(){

	FPS::GetInstance().Create();
	sceneManager = new SceneManager();

}

void GameMain::Destroy(){

	delete sceneManager;
	FPS::GetInstance().Destroy();

}

bool GameMain::Update(){

	FPS::GetInstance().Update();

	if(!sceneManager->Update()){
		return false;
	}
	
	FPS::GetInstance().Wait();

	return true;
}

void GameMain::Draw(){

	sceneManager->Draw();

	SetFontSize(18);
	DrawFormatString(530, 460, Color_White, "%.2ffps", FPS::GetInstance().GetFPSValue());
	SetFontSize(DEFAULT_FONT_SIZE);

}