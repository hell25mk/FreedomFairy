#include "StationeryScene.h"
#include "DxLib.h"
#include "../../MyLibrary/MyLibrary.h"
#include "../../Define/Define.h"
#include "../../System/Parameter/Parameter.h"

TitleScene::TitleScene(SceneChanger* scene, const Parameter& parameter):BaseScene(scene, parameter){
}

bool TitleScene::Update(){

	SceneChange();

	return true;
}

void TitleScene::Draw() const{

	DrawString(100, 100, "弾幕シューティング", Define::Color::Color_White);

}

void TitleScene::SceneChange(){

	if(CheckHitKey(keycode::KeyCode_Z)){
		Parameter parameter;
		parameter.Set(GameScene::ParameterTag_Level, Define::eGameLevel::Easy);
		sceneChanger->SceneChange(eSceneType::Game, parameter, false);
		return;
	}

}