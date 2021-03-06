#include "SceneFactory.h"
#include "../Inheritance/StationeryScene.h"
#include "../../System/Parameter/Parameter.h"
#include "../../System/Error/ErrorMacro.h"

std::shared_ptr<BaseScene> SceneFactory::Create(SceneManager* scene, eSceneType type, const Parameter& param){

	switch(type){
		case Title:
			return std::make_shared<TitleScene>(scene, param);
		case Game:
			return std::make_shared<GameScene>(scene, param);
		case Result:
			return std::make_shared<ResultScene>(scene, param);
		default:
			ERROR_REPORT("存在しないシーンが呼ばれました");
			break;
	}

	return nullptr;
}