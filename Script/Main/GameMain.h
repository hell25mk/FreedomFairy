#pragma once

#include "../DesignPattern/Singleton/Singleton.h"

class Keyboard;
class SceneManager;

class GameMain : public Singleton<GameMain>{

public:
	friend class Singleton<GameMain>;
	virtual void Create() override;
	virtual void Destroy() override;
	bool Update();
	void Draw();

protected:
	GameMain(){ }
	virtual ~GameMain(){ }

private:
	SceneManager* sceneManager;
	Keyboard* keyboard;

};

