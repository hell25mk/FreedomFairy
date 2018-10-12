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

void GameScene::Update(){

	objManager->Update();

}

void GameScene::Draw(){

	objManager->Draw();

}