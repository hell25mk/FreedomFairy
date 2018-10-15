#include "StationeryScene.h"
#include "../../Object/Manager/ObjectManager.h"

GameScene::GameScene(){
}

GameScene::GameScene(SceneManager* sMgr):BaseScene(sMgr){

	ObjectManager::GetInstance().Create();

}

GameScene::~GameScene(){

	ObjectManager::GetInstance().Destroy();

}

bool GameScene::Update(){

	ObjectManager::GetInstance().Update();

	return true;
}

void GameScene::Draw(){

	ObjectManager::GetInstance().Draw();

}