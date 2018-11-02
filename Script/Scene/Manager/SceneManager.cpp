#include "SceneManager.h"
#include "../Inheritance/StationeryScene.h"
#include "../../System/Parameter/Parameter.h"
#include "../../Input/Controller.h"
#include "../../System/Error/ErrorMacro.h"

SceneManager::SceneManager(){

	Controller::GetInstance().Create();
	Parameter parameter;
	stackScene.push(std::make_shared<TitleScene>(this, parameter));

}

SceneManager::~SceneManager(){

	while(!stackScene.empty()){

		stackScene.pop();

	}

	Controller::GetInstance().Destroy();

}

bool SceneManager::Update(){

	Controller::GetInstance().Update();
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

	switch(scene){
		case Title:
			stackScene.push(std::make_shared<TitleScene>(this, parameter));
			break;
		case Game:
			stackScene.push(std::make_shared<GameScene>(this, parameter));
			break;
		default:
			ERROR_REPORT("‘¶İ‚µ‚È‚¢ƒV[ƒ“‚ªŒÄ‚Î‚ê‚Ü‚µ‚½");
			break;
	}

}