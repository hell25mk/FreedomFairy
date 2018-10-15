/*****************************************************************************************************
-----ファイル概要-----

******************************************************************************************************/

#pragma once

#include <list>

class BaseObject;

class ObjectManager{

public:
	ObjectManager();
	~ObjectManager();
	bool Update();
	void Draw();

private:
	std::list<BaseObject*> listObject;
	std::list<BaseObject*>::iterator listBegin;
	std::list<BaseObject*>::iterator listEnd;

};