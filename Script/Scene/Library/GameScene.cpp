#include "StationeryScene.h"
#include "../../Object/Manager/ObjectManager.h"
#include "../../Collider/Manager/ColliderManager.h"
#include "../../Object/Enemy/EnemyCreater.h"

GameScene::GameScene(){
}

GameScene::GameScene(SceneManager* sMgr):BaseScene(sMgr){

	ObjectManager::GetInstance().Create();
	ColliderManager::GetInstance().Create();
	enemyCreater = new EnemyCreater();

}

GameScene::~GameScene(){

	delete enemyCreater;
	enemyCreater = nullptr;

	ColliderManager::GetInstance().Destroy();
	ObjectManager::GetInstance().Destroy();

}

bool GameScene::Update(){

	ObjectManager::GetInstance().Update();
	ColliderManager::GetInstance().Update();
	enemyCreater->Update();

	return true;
}

void GameScene::Draw(){

	ObjectManager::GetInstance().Draw();

}