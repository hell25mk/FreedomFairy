#include "GameMain.h"
#include "../Scene/Manager/SceneManager.h"
#include "DxLib.h"
#include "../FPS/FPS.h"

const int Color_White = GetColor(255, 255, 255);

GameMain::GameMain(){

	FPS::GetInstance().Create();
	sceneManager = new SceneManager();

}

GameMain::~GameMain(){

	delete sceneManager;
	FPS::GetInstance().Destroy();

}

bool GameMain::GameLoop(){

	FPS::GetInstance().Update();

	if(!sceneManager->Update()){
		return false;
	}
	
	FPS::GetInstance().Wait();
	sceneManager->Draw();
	FPS::GetInstance().Draw();

	return true;
}