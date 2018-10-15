#include "SceneManager.h"
#include "../Library/StationeryScene.h"

SceneManager::SceneManager(){

	stackScene.push(new GameScene(this));

}

SceneManager::~SceneManager(){

	while(!stackScene.empty()){

		delete stackScene.top();
		stackScene.top() = nullptr;
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