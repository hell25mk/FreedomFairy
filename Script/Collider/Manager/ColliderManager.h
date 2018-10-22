#pragma once

#include "../../DesignPattern/Singleton/Singleton.h"
#include <list>

class BaseObject;
class BaseCollider;

class ColliderManager : public Singleton<ColliderManager>{

public:
	friend class Singleton<ColliderManager>;
	virtual void Create() override;
	virtual void Destroy() override;
	bool Update();
	void ListPush(BaseCollider* collider,int tag);
	void AliveCheck();
	void HitCheck();

protected:
	ColliderManager(){ }
	virtual ~ColliderManager(){ }

private:
	std::list<BaseCollider*> listPlayerSideCollider;
	std::list<BaseCollider*> listEnemySideCollider;

};

