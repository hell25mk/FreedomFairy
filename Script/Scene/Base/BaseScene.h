#pragma once

class SceneManager;
class BaseUI;

class BaseScene{

public:
	BaseScene();
	BaseScene(SceneManager* sMgr);
	virtual ~BaseScene();
	virtual bool Update() = 0;
	virtual void Draw() = 0;

protected:
	SceneManager* sceneManager;
	BaseUI* sceneUI;

};

