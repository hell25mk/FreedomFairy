#pragma once

#include "../Base/BaseScene.h"
#include <list>
#include <memory>

#pragma region TitleScene
class TitleScene : public BaseScene{

public:
	TitleScene(SceneManager* scene, const Parameter& param);
	virtual ~TitleScene() = default;
	virtual bool Update() override;
	virtual void Draw() const override;

protected:
	virtual void SceneChange() override;

};
#pragma endregion

#pragma region GameScene
class BaseObject;

namespace{
	constexpr char* ParameterTag_Stage = (char*)"ParameterTagStage";
	constexpr char* ParameterTag_Level = (char*)"ParameterTagLevel";
}

class GameScene : public BaseScene{

public:
	GameScene(SceneManager* scene, const Parameter& param);
	virtual ~GameScene() = default;
	virtual bool Update() override;
	virtual void Draw() const override;

protected:
	virtual void SceneChange() override;

private:
	std::list<std::shared_ptr<BaseObject>> listObject;
	int gameLevel;

};
#pragma endregion


