#include "StationeryScene.h"
#include "../../MyLibrary/MyLibrary.h"
#include "../../System/Parameter/Parameter.h"
#include "../../Object/ObjectIncluder.h"
#include "../../Object/ManagerIncluder.h"
#include "../../Collider/Manager/ColliderManager.h"
#include "../../System/Score/Manager/ScoreManager.h"
#include "../../System/Debug/Debug.h"

const char* GameScene::ParameterTag_Stage = "ParameterTagStage";
const char* GameScene::ParameterTag_Level = "ParameterTagLevel";

GameScene::GameScene(SceneChanger* scene, const Parameter& parameter):BaseScene(scene, parameter){

	gameLevel = parameter.Get(ParameterTag_Level);

	ColliderManager::Instance().Create();
	ScoreManager::Instance().Create();

	listObject.push_back(std::make_shared<BackgroundManager>());
	listObject.push_back(std::make_shared<Player>());
	listObject.push_back(std::make_shared<Board>());
	listObject.push_back(std::make_shared<EnemyManager>());
	listObject.push_back(std::make_shared<BulletManager>());

}

GameScene::~GameScene(){

	ScoreManager::Instance().Destroy();
	ColliderManager::Instance().Destroy();

}

bool GameScene::Update(){

	SceneChange();

	ColliderManager::Instance().Update();

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