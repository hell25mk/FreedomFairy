#include "GameMain.h"
#include "../Scene/Manager/SceneManager.h"

void GameMain::Create(){

	sceneManager = new SceneManager();

}

void GameMain::Destroy(){

	delete sceneManager;

}

bool GameMain::Update(){

	if(!sceneManager->Update()){
		return false;
	}

	return true;
}

void GameMain::Draw(){

	sceneManager->Draw();

}