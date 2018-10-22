#include "BulletCreater.h"
#include "Bullet.h"
#include "../Manager/ObjectManager.h"

void BulletCreater::Create(){



}

void BulletCreater::Destroy(){



}

bool BulletCreater::Update(){



	return true;
}

void BulletCreater::BulletCreate(Vector2D<float> vec, int rad, float moveVector, int tag){

	Bullet* bullet = new Bullet(vec, rad, moveVector);
	ObjectManager::GetInstance().ListPush(bullet);

}