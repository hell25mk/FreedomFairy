#pragma once

#include "../Base/BaseScene.h"

#pragma region TitleScene
class TitleScene : public BaseScene{

public:
	TitleScene(SceneChanger* scene, const Parameter& parameter);
	virtual ~TitleScene() = default;
	virtual bool Update() override;
	virtual void Draw() const override;

};
#pragma endregion

#pragma region GameScene
class ObjectCreater;

class GameScene : public BaseScene{

public:
	GameScene(SceneChanger* scene, const Parameter& parameter);
	virtual ~GameScene();
	virtual bool Update() override;
	virtual void Draw() const override;

private:
	ObjectCreater* objectCreater;

};
#pragma endregion


