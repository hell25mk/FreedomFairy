#include "SceneManager.h"
#include "../Inheritance/StationeryScene.h"
#include "../../MyLibrary/MyLibrary.h"

SceneManager::SceneManager(){

	stackScene.push(std::make_shared<GameScene>(this));

}

SceneManager::~SceneManager(){

	while(!stackScene.empty()){

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