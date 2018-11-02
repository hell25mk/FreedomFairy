#include "StationeryScene.h"
#include "DxLib.h"
#include "../../MyLibrary/MyLibrary.h"
#include "../../Define/Define.h"
#include "../../System/Parameter/Parameter.h"
#include "../../Input/Controller.h"

TitleScene::TitleScene(SceneChanger* scene, const Parameter& parameter):BaseScene(scene, parameter){
}

bool TitleScene::Update(){

	SceneChange();

	return true;
}

void TitleScene::Draw() const{

	DrawString(100, 100, "�e���V���[�e�B���O", Define::Color::Color_White);

}

void TitleScene::SceneChange(){

	if(Controller::Instance().Get(Input::eInputType::Shot)){
		Parameter parameter;
		parameter.Set(GameScene::ParameterTag_Level, Define::eGameLevel::Easy);
		sceneChanger->SceneChange(eSceneType::Game, parameter, false);
		return;
	}

}