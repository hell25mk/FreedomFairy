#include "StationeryScene.h"
#include "DxLib.h"
#include "../../MyLibrary/MyLibrary.h"
#include "../../Define/Define.h"
#include "../Manager/SceneManager.h"
#include "../../System/Parameter/Parameter.h"
#include "../../Input/Controller.h"

#include "../../Test/TestGameInfomation.h"

ResultScene::ResultScene(SceneManager* scene, const Parameter& param)
	:BaseScene(scene, param),score(TestGameInfomation::Instance().score){

}

bool ResultScene::Update(){

	if(Controller::Instance().Get(Input::eInputType::Shot) == 1){
		SceneChange();
	}

	return true;
}

void ResultScene::Draw() const{

	SetFontSize(36);
	DrawFormatString(100, 100, Define::ColorCode::Color_White, "Score = %8d", score);
	SetFontSize(DEFAULT_FONT_SIZE);

}

void ResultScene::SceneChange(){

	Parameter parameter;
	parameter.Set(ParameterTag_Level, Define::eGameLevel::Easy);

	sceneManager->SceneChange(eSceneType::Title, parameter, true);

}