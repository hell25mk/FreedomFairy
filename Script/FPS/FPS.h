#pragma once

#include "../DesignPattern/Singleton/Singleton.h"
#include <list>

class FPS{

public:
	FPS();
	void Wait();
	void Draw() const;
	
private:
	void UpdateAverage();
	void Regist();
	unsigned int GetWaitTime() const;
	float RoundPoint(float val, int point);

private:
	std::list<int> list;
	float fps;
	unsigned int counter;

};