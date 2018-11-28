#include "SceneManager.h"
#include "../Factory/SceneFactory.h"
#include "../Inheritance/StationeryScene.h"
#include "../../../System/Parameter/Parameter.h"
#include "../../../Input/Controller.h"
#include "../../../System/Error/ErrorMacro.h"
#include "../../../System/Image/Image.h"

SceneManager::SceneManager(){

	Controller::Instance().Create();
	Parameter parameter;
	Image::Instance().Load();
	
	SceneChange(eSceneType::Title, parameter, false);

}

SceneManager::~SceneManager(){

	while(!stackScene.empty()){

		stackScene.pop();

	}

	Controller::Instance().Destroy();

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

	SceneFactory sceneFactory;

	stackScene.push(sceneFactory.Create(this, scene, parameter));

}