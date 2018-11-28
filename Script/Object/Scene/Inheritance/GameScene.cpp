#include "StationeryScene.h"
#include "../../../MyLibrary/MyLibrary.h"
#include "../Manager/SceneManager.h"
#include "../../../System/Parameter/Parameter.h"
#include "../../../Object/ManagerIncluder.h"
#include "../../../System/Debug/Debug.h"
#include "../../../Input/Controller.h"

GameScene::GameScene(SceneManager* scene, const Parameter& param):BaseScene(scene, param){

	gameLevel = param.Get(ParameterTag_Level);

	listObject.push_back(std::make_shared<BackgroundManager>());
	listObject.push_back(std::make_shared<PlayerManager>());
	listObject.push_back(std::make_shared<EnemyManager>());
	listObject.push_back(std::make_shared<BulletManager>());

}

bool GameScene::Update(){

	SceneChange();

	for(auto itr = listObject.begin(), end = listObject.end(); itr != end;){

		(*itr)->Update();

		itr++;

	}

	return true;
}

void GameScene::Draw() const{

	for(auto itr = listObject.begin(), end = listObject.end(); itr != end;){

		(*itr)->Draw();

		itr++;

	}

	Debug::Draw();

}

void GameScene::SceneChange(){

	

}