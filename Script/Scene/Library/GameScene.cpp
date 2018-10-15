#include "StationeryScene.h"
#include "../../Object/Manager/ObjectManager.h"

GameScene::GameScene(){
}

GameScene::GameScene(SceneManager* sMgr):BaseScene(sMgr){

	objManager = new ObjectManager();

}

GameScene::~GameScene(){

	delete objManager;

}

bool GameScene::Update(){

	objManager->Update();

	return true;
}

void GameScene::Draw(){

	objManager->Draw();

}