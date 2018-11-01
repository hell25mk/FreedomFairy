#include "SceneManager.h"
#include "../Inheritance/StationeryScene.h"
#include "../../System/Parameter/Parameter.h"

SceneManager::SceneManager(){

	Parameter parameter;
	stackScene.push(std::make_shared<GameScene>(this, parameter));

}

/*SceneManager::~SceneManager(){

	while(!stackScene.empty()){

		stackScene.pop();

	}

}*/

bool SceneManager::Update(){

	stackScene.top()->Update();

	return true;
}

void SceneManager::Draw(){

	stackScene.top()->Draw();

}

void SceneManager::SceneChange(const eSceneType scene, const Parameter& parameter, const bool stackClear){
}