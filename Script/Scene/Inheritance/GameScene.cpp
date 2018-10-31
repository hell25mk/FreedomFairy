#include "StationeryScene.h"
#include "../../MyLibrary/MyLibrary.h"
#include "../../Object/Manager/ObjectManager.h"
#include "../../Collider/Manager/ColliderManager.h"
#include "../../System/Score/Manager/ScoreManager.h"
#include "../../Object/Creater/ObjectCreater.h"
#include "../../UI/Manager/UIManager.h"

GameScene::GameScene(SceneChanger* scene, const Parameter& parameter):BaseScene(scene,parameter){

	ObjectManager::GetInstance().Create();
	ColliderManager::GetInstance().Create();
	ScoreManager::GetInstance().Create();
	UIManager::GetInstance().Create();

	objectCreater = new ObjectCreater();
	objectCreater->PlayerCreate();

}

GameScene::~GameScene(){

	SELF_DELETE(objectCreater);
	UIManager::GetInstance().Destroy();
	ScoreManager::GetInstance().Destroy();
	ColliderManager::GetInstance().Destroy();
	ObjectManager::GetInstance().Destroy();

}

bool GameScene::Update(){

	UIManager::GetInstance().Update();
	ObjectManager::GetInstance().Update();
	ColliderManager::GetInstance().Update();
	objectCreater->Update();

	return true;
}

void GameScene::Draw(){

	UIManager::GetInstance().Draw();
	ObjectManager::GetInstance().Draw();

}