#include "GameMain.h"
#include "../Scene/Manager/SceneManager.h"
#include "../FPS/FPS.h"

void GameMain::Create(){

	sceneManager = new SceneManager();
	fpsManager = new FPS();

}

void GameMain::Destroy(){

	delete fpsManager;
	delete sceneManager;

}

bool GameMain::Update(){

	fpsManager->Update();

	if(!sceneManager->Update()){
		return false;
	}

	fpsManager->Draw();
	fpsManager->Wait();

	return true;
}

void GameMain::Draw(){

	sceneManager->Draw();

}