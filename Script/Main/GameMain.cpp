#include "GameMain.h"
#include "../Scene/Manager/SceneManager.h"
#include "DxLib.h"
#include "../FPS/FPS.h"

const int Color_White = GetColor(255, 255, 255);

GameMain::GameMain(){

	FPS::Instance().Create();
	sceneManager = new SceneManager();

}

GameMain::~GameMain(){

	delete sceneManager;
	FPS::Instance().Destroy();

}

bool GameMain::GameLoop(){

	FPS::Instance().Update();

	if(!sceneManager->Update()){
		return false;
	}
	
	FPS::Instance().Wait();
	sceneManager->Draw();
	FPS::Instance().Draw();

	return true;
}