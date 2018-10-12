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

void SceneManager::Update(){

	stackScene.top()->Update();

}

void SceneManager::Draw(){

	stackScene.top()->Draw();

}