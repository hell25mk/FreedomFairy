#pragma once

#include "../../Base/BaseManager.h"

class BaseCollider;

class ColliderManager : public BaseManager{

public:
	ColliderManager();
	virtual ~ColliderManager() = default;
	virtual bool Update() override;
	virtual void Draw() const override;
	void AppendCollider(std::shared_ptr<BaseCollider> collider);
	void AliveCheck();
	void HitCheck();
	bool Squea(const std::shared_ptr<BaseCollider>& obj1, const std::shared_ptr<BaseCollider>& obj2);

private:
	std::list<std::shared_ptr<BaseCollider>> listPlayerCollider;
	std::list<std::shared_ptr<BaseCollider>> listEnemyCollider;

};

