#include "Player.h"
#include "DxLib.h"
#include "../../MyLibrary/MyLibrary.h"
#include "../../Input/Controller.h"
#include "../../Collider/Inheritance/StationeryCollider.h"
#include "../Creater/ObjectCreater.h"
#include "../../System/HitPoint/HitPoint.h"

using key = Input::eInputType;

const int Game_WidthSize = 420;
const int Game_HeightSize = 480;
const int Hit_Range = 3;

const int Image_AllNum = 12;
const int Image_Size = 48;

Player::Player(){
}

Player::Player(float x, float y):BaseObject(x, y){

	moveSpeed = 9.0f;
	isAlive = true;

	radius = 20;
	color = GetColor(255, 255, 255);		//‰æ‘œ‚É•ÏX‚·‚é‚Ì‚Åíœ—\’è

	collider = new CircleCollider(vec2, Hit_Range, eTag_Player);
	hp = new HitPoint(1);

	ListRegistration(this);

}

Player::~Player(){

	SELF_DELETE(hp);
	collider->SetAliveFlag(false);

}

bool Player::Update(){

	if(collider->GetHitFlag()){
		HitAction();
	}

	Move();

	if(Controller::Instance().Get(key::Shot)){
		Shot();
	}

	collider->SetVector(vec2);

	return isAlive;
}

void Player::Draw() const{

	DrawCircle(vec2.GetDx(), vec2.GetDy(), radius, color, true);	//‰æ‘œ‚É•ÏX‚·‚é‚Ì‚Åíœ—\’è
	collider->Draw();

}

void Player::Move(){

	

	float moveX = 0, moveY = 0;
	int moveRange = Image_Size / 2;

	if(Controller::Instance().Get(key::Up) && vec2.GetDy() >= 0 + moveRange){
		moveY -= moveSpeed;
	}

	if(Controller::Instance().Get(key::Down) && vec2.GetDy() <= Game_HeightSize - moveRange){
		moveY += moveSpeed;
	}

	if(Controller::Instance().Get(key::Left) && vec2.GetDx() >= 0 + moveRange){
		moveX -= moveSpeed;
	}

	if(Controller::Instance().Get(key::Right) && vec2.GetDx() <= Game_WidthSize - moveRange){
		moveX += moveSpeed;
	}

	if(moveX && moveY){
		moveX /= (float)std::sqrt(2.0);
		moveY /= (float)std::sqrt(2.0);
	}

	if(Controller::Instance().Get(key::Slow)){
		moveX /= 2;
		moveY /= 2;
	}

	vec2.Add(moveX, moveY);

}

void Player::Shot(){

	ObjectCreater objCreate;
	objCreate.BulletCreate(vec2, 5, -15.0f, eTag_Player);

}

void Player::HitAction(){

	//hp->Sub(1);

	if(hp->Get() == 0){
		isAlive = false;
	}

}