#include "SceneManager.h"
#include "../Factory/SceneFactory.h"
#include "../Inheritance/StationeryScene.h"
#include "../../../System/Parameter/Parameter.h"
#include "../../../Input/Controller.h"
#include "../../../System/Error/ErrorMacro.h"
#include "../../../System/Image/Image.h"

SceneManager::SceneManager(){

	Init();

}

SceneManager::~SceneManager(){

	while(!stackScene.empty()){

		stackScene.pop();

	}

	Controller::Instance().Destroy();

}

void SceneManager::Init(){

	Controller::Instance().Create();
	Parameter parameter;
	Image::Instance().Load();

	SceneChange(eSceneType::Title, parameter, false);

}

bool SceneManager::Update(){

	Controller::Instance().Update();
	stackScene.top()->Update();

	return true;
}

void SceneManager::Draw() const{

	stackScene.top()->Draw();

}

void SceneManager::SceneChange(const eSceneType scene, const Parameter& parameter, const bool stackClear){

	if(stackClear){
		while(!stackScene.empty()){

			stackScene.pop();

		}
	}

	stackScene.push(SceneFactory::Instance().Create(this, scene, parameter));

}