#include "Player.h"
#include "DxLib.h"
#include "../../Input/Controller.h"
#include "../../Collider/Library/StationeryCollider.h"
#include "../Bullet/BulletCreater.h"

#define SELF_DELETE(p) delete p;p = nullptr;

const int Game_WidthSize = 420;
const int Game_HeightSize = 480;

const int Image_AllNum = 12;
const int Image_Size = 48;

Player::Player(){
}

Player::Player(float x, float y):BaseObject(x, y){

	moveVector = 3.0f;
	isAlive = true;

	radius = 20;
	color = GetColor(255, 255, 255);

	controller = new Controller();
	collider = new CircleCollider(vec2, 5, eTag_Player);


}

Player::~Player(){

	SELF_DELETE(collider);
	SELF_DELETE(controller);

}

bool Player::Update(){

	controller->Update();

	Move();
	Shot();

	collider->SetVector(vec2);

	return isAlive;
}

void Player::Draw(){

	DrawCircle(vec2.GetDx(), vec2.GetDy(), radius, color, true);
	collider->Draw();

}

void Player::Move(){

	int moveRange = Image_Size / 2;

	//上キー入力
	if(controller->Input(PAD_INPUT_UP) && vec2.GetDy() >= 0 + moveRange){
		vec2.Add(0.0f, -moveVector);
	}

	//下キー入力
	if(controller->Input(PAD_INPUT_DOWN) && vec2.GetDy() <= Game_HeightSize - moveRange){
		vec2.Add(0.0f, moveVector);
	}

	//左キー入力
	if(controller->Input(PAD_INPUT_LEFT) && vec2.GetDx() >= 0 + moveRange){
		vec2.Add(-moveVector, 0.0f);
	}

	//右キー入力
	if(controller->Input(PAD_INPUT_RIGHT) && vec2.GetDx() <= Game_WidthSize - moveRange){
		vec2.Add(moveVector, 0.0f);
	}

}

void Player::Shot(){

	//Zキー入力
	if(controller->Input(PAD_INPUT_1)){
		BulletCreater::GetInstance().BulletCreate(vec2, 5, -15.0f, eTag_Player);
	}

}