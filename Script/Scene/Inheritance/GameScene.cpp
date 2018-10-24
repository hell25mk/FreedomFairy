#include "StationeryScene.h"
#include "../../MyLibrary/MyLibrary.h"
#include "../../Object/Manager/ObjectManager.h"
#include "../../Collider/Manager/ColliderManager.h"
#include "../../System/Score/Manager/ScoreManager.h"
#include "../../Object/Creater/ObjectCreater.h"
#include "../../UI/Manager/UIManager.h"

GameScene::GameScene(){
}

GameScene::GameScene(SceneManager* sMgr):BaseScene(sMgr){

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

	ObjectManager::GetInstance().Update();
	ColliderManager::GetInstance().Update();
	UIManager::GetInstance().Update();
	objectCreater->Update();

	return true;
}

void GameScene::Draw(){

	ObjectManager::GetInstance().Draw();
	UIManager::GetInstance().Draw();

}