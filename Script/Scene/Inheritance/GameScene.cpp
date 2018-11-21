#include "StationeryScene.h"
#include "../../MyLibrary/MyLibrary.h"
#include "../../System/Parameter/Parameter.h"
#include "../../Object/ObjectIncluder.h"
#include "../../Object/Enemy/Manager/EnemyManager.h"
#include "../../Object/Bullet/Manager/BulletManager.h"
#include "../../Collider/Manager/ColliderManager.h"
#include "../../System/Score/Manager/ScoreManager.h"
#include "../../System/Debug/Debug.h"

const char* GameScene::ParameterTag_Stage = "ParameterTagStage";
const char* GameScene::ParameterTag_Level = "ParameterTagLevel";

GameScene::GameScene(SceneChanger* scene, const Parameter& parameter):BaseScene(scene, parameter){

	gameLevel = parameter.Get(ParameterTag_Level);

	ColliderManager::Instance().Create();
	ScoreManager::Instance().Create();

	background = std::make_shared<BackGround01>();
	player = std::make_shared<Player>();
	board = std::make_shared<Board>();
	enemyManager = std::make_shared<EnemyManager>();
	bulletManager = std::make_shared<BulletManager>();

}

GameScene::~GameScene(){

	ScoreManager::Instance().Destroy();
	ColliderManager::Instance().Destroy();

}

bool GameScene::Update(){

	SceneChange();

	ColliderManager::Instance().Update();

	background->Update();
	player->Update();
	board->Update();
	enemyManager->Update();
	bulletManager->Update();

	return true;
}

void GameScene::Draw() const{

	board->Draw();
	background->Draw();
	player->Draw();
	enemyManager->Draw();
	bulletManager->Draw();

	Debug::Draw();

}

void GameScene::SceneChange(){

	

}