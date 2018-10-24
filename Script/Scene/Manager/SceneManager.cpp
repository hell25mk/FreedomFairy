#include "SceneManager.h"
#include "../Inheritance/StationeryScene.h"
#include "../../MyLibrary/MyLibrary.h"

SceneManager::SceneManager(){

	stackScene.push(new GameScene(this));

}

SceneManager::~SceneManager(){

	while(!stackScene.empty()){

		SELF_DELETE(stackScene.top());
		stackScene.pop();

	}

}

bool SceneManager::Update(){

	stackScene.top()->Update();

	return true;
}

void SceneManager::Draw(){

	stackScene.top()->Draw();

}