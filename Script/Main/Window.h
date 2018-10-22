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
	static const unsigned int Window_Height;
	static const unsigned int Window_Width;

};