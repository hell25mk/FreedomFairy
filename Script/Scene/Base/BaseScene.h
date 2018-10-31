#pragma once

class SceneChanger;

class BaseScene{

public:
	BaseScene(SceneChanger* scene, const Parameter& parameter);
	virtual ~BaseScene() = default;
	virtual bool Update() = 0;
	virtual void Draw() = 0;

protected:
	SceneChanger* sceneChanger;

};

