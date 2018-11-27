#include "BulletShot.h"
#include "../Manager/BulletManager.h"

BulletShot::BulletShot(BulletManager* bullet){

	bulletManager = bullet;

	bulletManager->Create();

}


BulletShot::~BulletShot(){
}
