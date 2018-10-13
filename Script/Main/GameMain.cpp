#include "GameMain.h"
#include "../Input/Library/Controller.h"
#include "../Input/Library/KeyCode.h"
#include "../Scene/Manager/SceneManager.h"

void GameMain::Create(){

	keyboard = new Keyboard();
	sceneManager = new SceneManager();

}

void GameMain::Destroy(){

	delete sceneManager;
	delete keyboard;

}

bool GameMain::Update(){

	keyboard->Update();

	if(keyboard->Input(keycode::KeyCode_Escape) == 1){
		return false;
	}

	sceneManager->Update();

	return true;
}

void GameMain::Draw(){

	sceneManager->Draw();

}