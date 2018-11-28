#include "SceneFactory.h"
#include "../Base/BaseScene.h"
#include "../Inheritance/StationeryScene.h"
#include "../../../System/Parameter/Parameter.h"
#include "../../../System/Error/ErrorMacro.h"

std::shared_ptr<BaseScene> SceneFactory::Create(SceneManager* scene, eSceneType type, const Parameter& param){

	switch(type){
		case Title:
			return std::make_shared<TitleScene>(scene, param);
		case Game:
			return std::make_shared<GameScene>(scene, param);
		default:
			ERROR_REPORT("‘¶İ‚µ‚È‚¢ƒV[ƒ“‚ªŒÄ‚Î‚ê‚Ü‚µ‚½");
			break;
	}

	return nullptr;
}