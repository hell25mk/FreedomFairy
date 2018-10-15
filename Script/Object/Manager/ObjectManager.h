/*****************************************************************************************************
-----ファイル概要-----

******************************************************************************************************/

#pragma once

#include <vector>
#include <list>

class BaseObject;

class ObjectManager{

public:
	ObjectManager();
	~ObjectManager();
	bool Update();
	void Draw();

private:
	std::vector<BaseObject*> vectorObject;

};