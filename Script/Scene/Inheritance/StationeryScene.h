#pragma once

#include "../Base/BaseScene.h"
#include <memory>

#pragma region TitleScene
class TitleScene : public BaseScene{

public:
	TitleScene(SceneChanger* scene, const Parameter& parameter);
	virtual ~TitleScene() = default;
	virtual bool Update() override;
	virtual void Draw() const override;

protected:
	virtual void SceneChange() override;

};
#pragma endregion

#pragma region GameScene
class Player;
class Board;
class BaseBackGround;

class GameScene : public BaseScene{

public:
	GameScene(SceneChanger* scene, const Parameter& parameter);
	virtual ~GameScene();
	virtual bool Update() override;
	virtual void Draw() const override;

public:
	const static char* ParameterTag_Stage;
	const static char* ParameterTag_Level;

protected:
	virtual void SceneChange() override;

private:
	std::shared_ptr<Player> player;
	std::shared_ptr<Board> board;
	std::shared_ptr<BaseBackGround> background;
	std::shared_ptr<BaseBackGround> backgroundSpell;
	int gameLevel;

};
#pragma endregion


