#include "StationeryScene.h"
#include "../../MyLibrary/MyLibrary.h"
#include "../../Object/Manager/ObjectManager.h"
#include "../../Collider/Manager/ColliderManager.h"
#include "../../Object/Player/PlayerCreater.h"
#include "../../Object/Enemy/EnemyCreater.h"
#include "../../System/Score/Manager/ScoreManager.h"
#include "../../UI/Inheritance/StationeryUI.h"

GameScene::GameScene(){
}

GameScene::GameScene(SceneManager* sMgr):BaseScene(sMgr){

	ObjectManager::GetInstance().Create();
	ColliderManager::GetInstance().Create();
	PlayerCreater::GetInstance().Create();
	EnemyCreater::GetInstance().Create();
	ScoreManager::GetInstance().Create();

	PlayerCreater::GetInstance().PlayerCreate();
	sceneUI = new GameUI();

}

GameScene::~GameScene(){

	SELF_DELETE(sceneUI);
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

	sceneUI->Update();

	return true;
}

void GameScene::Draw(){

	ObjectManager::GetInstance().Draw();
	sceneUI->Draw();

}