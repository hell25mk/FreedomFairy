#pragma once

#include "../Base/BaseScene.h"

#pragma region TitleScene
class TitleScene : public BaseScene{

public:
	TitleScene();
	TitleScene(SceneManager* sMgr);
	virtual ~TitleScene();
	virtual bool Update() override;
	virtual void Draw() override;

};
#pragma endregion

#pragma region GameScene
class ObjectCreater;

class GameScene : public BaseScene{

public:
	GameScene();
	GameScene(SceneManager* sMgr);
	virtual ~GameScene();
	virtual bool Update() override;
	virtual void Draw() override;

private:
	ObjectCreater* objectCreater;

};
#pragma endregion


