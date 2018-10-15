#include "GameMain.h"
#include "../Scene/Manager/SceneManager.h"
#include "../FPS/FPS.h"

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
	FPS::GetInstance().Draw();

}