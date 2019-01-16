#include "StationeryScene.h"
#include "DxLib.h"
#include "../../MyLibrary/MyLibrary.h"
#include "../../Define/Define.h"
#include "../Manager/SceneManager.h"
#include "../../System/Parameter/Parameter.h"
#include "../../Input/Controller.h"

TitleScene::TitleScene(SceneManager* scene, const Parameter& param):BaseScene(scene, param){
}

bool TitleScene::Update(){

	if(Controller::Instance().Get(Input::eInputType::Shot) == 1){
		SceneChange();
	}

	return true;
}

void TitleScene::Draw() const{

	SetFontSize(36);
	DrawString(100, 100, "Freedom Fairy", Define::ColorCode::Color_White);
	SetFontSize(DEFAULT_FONT_SIZE);

}

void TitleScene::SceneChange(){

	Parameter parameter;
	parameter.Set(ParameterTag_Level, Define::eGameLevel::Easy);
	
	sceneManager->SceneChange(eSceneType::Game, parameter, false);
	
}