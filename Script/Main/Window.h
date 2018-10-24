#pragma once

#include "../DesignPattern/Singleton/Singleton.h"

class Window : public Singleton<Window>{

public:
	friend class Singleton<Window>;
	virtual void Create() override;
	virtual void Destroy() override;
	bool Update();
	bool ProcessLoop();
	int GetWindowHeight();
	int GetWindowWidth();

protected:
	Window(){ }
	virtual ~Window(){ }

private:
	int windowHeight;
	int windowWidth;
	int colorBitDepth;

};