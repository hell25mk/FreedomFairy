/*****************************************************************************************************
-----ファイル概要-----

******************************************************************************************************/

#pragma once

#include "../../DesignPattern/Singleton/Singleton.h"
#include <list>

class BaseObject;

class ObjectManager : public Singleton<ObjectManager>{

public:
	friend class Singleton<ObjectManager>;
	virtual void Create() override;
	virtual void Destroy() override;
	bool Update();
	void Draw() const;
	void ListPush(BaseObject* obj);

protected:
	ObjectManager(){ }
	virtual ~ObjectManager(){ }

private:
	std::list<BaseObject*> listObject;

};