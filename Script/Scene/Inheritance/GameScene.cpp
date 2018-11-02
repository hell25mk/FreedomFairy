#include "StationeryScene.h"
#include "../../MyLibrary/MyLibrary.h"
#include "../../System/Parameter/Parameter.h"
#include "../../Define/Define.h"
#include "../../Object/Manager/ObjectManager.h"
#include "../../Collider/Manager/ColliderManager.h"
#include "../../System/Score/Manager/ScoreManager.h"
#include "../../Object/Creater/ObjectCreater.h"
#include "../../UI/Manager/UIManager.h"

const char* GameScene::ParameterTag_Stage = "ParameterTagStage";
const char* GameScene::ParameterTag_Level = "ParameterTagLevel";

GameScene::GameScene(SceneChanger* scene, const Parameter& parameter):BaseScene(scene, parameter){

	gameLevel = parameter.Get(ParameterTag_Level);

	ObjectManager::Instance().Create();
	ColliderManager::Instance().Create();
	ScoreManager::Instance().Create();
	UIManager::Instance().Create();

	objectCreater = new ObjectCreater();
	objectCreater->PlayerCreate();

}

GameScene::~GameScene(){

	SELF_DELETE(objectCreater);
	UIManager::Instance().Destroy();
	ScoreManager::Instance().Destroy();
	ColliderManager::Instance().Destroy();
	ObjectManager::Instance().Destroy();

}

bool GameScene::Update(){

	SceneChange();

	UIManager::Instance().Update();
	ObjectManager::Instance().Update();
	ColliderManager::Instance().Update();
	objectCreater->Update();

	return true;
}

void GameScene::Draw() const{

	UIManager::Instance().Draw();
	ObjectManager::Instance().Draw();

}

void GameScene::SceneChange(){

	

}