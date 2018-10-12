#include "GameMain.h"
#include "../Input/Keyboard.h"
#include "../Input/KeyCode.h"
#include "../Scene/Manager/SceneManager.h"

void GameMain::Create(){

	Keyboard::GetInstance().Create();
	sceneManager = new SceneManager();

}

void GameMain::Destroy(){

	delete sceneManager;
	Keyboard::GetInstance().Destroy();

}

bool GameMain::Update(){

	Keyboard::GetInstance().Update();

	if(Keyboard::GetInstance().Input(keycode::KeyCode_Escape) == 1){
		return false;
	}

	sceneManager->Update();

	return true;
}

void GameMain::Draw(){

	sceneManager->Draw();

}