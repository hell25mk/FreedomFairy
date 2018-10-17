#include "StationeryScene.h"
#include "../../Object/Manager/ObjectManager.h"
#include "../../Object/Enemy/EnemyCreater.h"

GameScene::GameScene(){
}

GameScene::GameScene(SceneManager* sMgr):BaseScene(sMgr){

	ObjectManager::GetInstance().Create();
	enemyCreater = new EnemyCreater();

}

GameScene::~GameScene(){

	delete enemyCreater;
	enemyCreater = nullptr;

	ObjectManager::GetInstance().Destroy();

}

bool GameScene::Update(){

	ObjectManager::GetInstance().Update();
	enemyCreater->Update();

	return true;
}

void GameScene::Draw(){

	ObjectManager::GetInstance().Draw();

}