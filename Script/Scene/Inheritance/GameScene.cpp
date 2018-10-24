#include "StationeryScene.h"
#include "../../Object/Manager/ObjectManager.h"
#include "../../Collider/Manager/ColliderManager.h"
#include "../../Object/Player/PlayerCreater.h"
#include "../../Object/Enemy/EnemyCreater.h"
#include "../../System/Score/Manager/ScoreManager.h"
#include "../../UI/Manager/UIManager.h"

GameScene::GameScene(){
}

GameScene::GameScene(SceneManager* sMgr):BaseScene(sMgr){

	ObjectManager::GetInstance().Create();
	ColliderManager::GetInstance().Create();
	PlayerCreater::GetInstance().Create();
	EnemyCreater::GetInstance().Create();
	ScoreManager::GetInstance().Create();
	UIManager::GetInstance().Create();

	PlayerCreater::GetInstance().PlayerCreate();

}

GameScene::~GameScene(){

	UIManager::GetInstance().Destroy();
	ScoreManager::GetInstance().Destroy();
	EnemyCreater::GetInstance().Destroy();
	PlayerCreater::GetInstance().Destroy();
	ColliderManager::GetInstance().Destroy();
	ObjectManager::GetInstance().Destroy();

}

bool GameScene::Update(){

	ObjectManager::GetInstance().Update();
	ColliderManager::GetInstance().Update();
	EnemyCreater::GetInstance().Update();
	UIManager::GetInstance().Update();

	return true;
}

void GameScene::Draw(){

	ObjectManager::GetInstance().Draw();
	UIManager::GetInstance().Draw();

}