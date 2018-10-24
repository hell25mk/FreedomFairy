#pragma once

#include "../../DesignPattern/Singleton/Singleton.h"

class BaseUI;

class UIManager : public Singleton<UIManager>{

public:
	friend class Singleton<UIManager>;
	virtual void Create() override;
	virtual void Destroy() override;
	bool Update();
	void Draw();

protected:
	UIManager(){ }
	virtual ~UIManager(){ }

private:
	BaseUI* ui;

};

