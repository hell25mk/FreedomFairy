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

	SceneChange();

	UIManager::GetInstance().Update();
	ObjectManager::GetInstance().Update();
	ColliderManager::GetInstance().Update();
	objectCreater->Update();

	return true;
}

void GameScene::Draw() const{

	UIManager::GetInstance().Draw();
	ObjectManager::GetInstance().Draw();

}

void GameScene::SceneChange(){

	

}