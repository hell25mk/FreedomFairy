#include "GameMain.h"
#include "../Scene/Manager/SceneManager.h"
#include "../FPS/FPS.h"

GameMain::GameMain(){

	sceneManager = std::make_shared<SceneManager>();

}

bool GameMain::GameLoop(){

	if(!sceneManager->Update()){
		return false;
	}
	sceneManager->Draw();

	fps.Draw();
	fps.Wait();

	return true;
}