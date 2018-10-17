#pragma once

#include "../../DesignPattern/Singleton/Singleton.h"
#include <list>

class BaseCollider;

class ColliderManager : public Singleton<ColliderManager>{

public:
	friend class Singleton<ColliderManager>;
	virtual void Create() override;
	virtual void Destroy() override;
	bool Update();
	void ListPush(BaseCollider* collider,int tag);

protected:
	ColliderManager(){ }
	virtual ~ColliderManager(){ }

private:
	std::list<BaseCollider*> listPlayerCollider;
	std::list<BaseCollider*> listEnemyCollider;
	std::list<BaseCollider*> listBulletCollider;

};

