#include "ObjectCreater.h"
#include <random>
#include "../Player/Player.h"
#include "../Enemy/Enemy.h"
#include "../Bullet/Bullet.h"

const float Spown_Width = 200.0f;
const float Spown_Height = 400.0f;
const int Create_TimeCount = 10;

ObjectCreater::ObjectCreater():enemyCreateCount(0){
}


ObjectCreater::~ObjectCreater(){
}

bool ObjectCreater::Update(){

	//60ƒtƒŒ[ƒ€–ˆ‚É¶¬
	if(enemyCreateCount % Create_TimeCount == 0){
		this->EnemyCreate();
		enemyCreateCount = 0;
	}

	enemyCreateCount++;

	return true;
}

void ObjectCreater::PlayerCreate(){

	Player* player = new Player(Spown_Width, Spown_Height);

}

void ObjectCreater::EnemyCreate(){

	std::random_device rand;
	std::mt19937 mt(rand());

	std::uniform_int_distribution<> randWidth(0, 400);
	std::uniform_int_distribution<> randHeight(50, 100);

	Enemy* enemy = new Enemy((float)randWidth(mt), (float)-randHeight(mt), 2.0f);

}

void ObjectCreater::BulletCreate(Vector2D<float> &vec, int rad, float moveVector, int tag){

	Bullet* bullet = new Bullet(vec, rad, moveVector);

}