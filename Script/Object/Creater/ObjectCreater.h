#pragma once

template<class Type>
class Vector2D;

class ObjectCreater{

public:
	ObjectCreater();
	~ObjectCreater();
	bool Update();
	void PlayerCreate();
	void EnemyCreate();
	void BulletCreate(Vector2D<float> &vec, int rad, float moveSpeed, int tag);

private:
	int enemyCreateCount;

};

