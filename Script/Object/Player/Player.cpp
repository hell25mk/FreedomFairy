#include "Player.h"
#include "DxLib.h"
#include "../../MyLibrary/MyLibrary.h"
#include "../../Input/Controller.h"
#include "../../Collider/Inheritance/StationeryCollider.h"
#include "../Creater/ObjectCreater.h"
#include "../../System/HitPoint/HitPoint.h"

const int Game_WidthSize = 420;
const int Game_HeightSize = 480;
const int Hit_Range = 3;

const int Image_AllNum = 12;
const int Image_Size = 48;

Player::Player(){
}

Player::Player(float x, float y):BaseObject(x, y){

	moveVector = 5.0f;
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
	Shot();

	collider->SetVector(vec2);

	return isAlive;
}

void Player::Draw(){

	DrawCircle(vec2.GetDx(), vec2.GetDy(), radius, color, true);	//‰æ‘œ‚É•ÏX‚·‚é‚Ì‚Åíœ—\’è
	collider->Draw();

}

void Player::Move(){

	if(Controller::Instance().Get(Input::eInputType::Slow)){
		moveVector = 2.0f;
	} else{
		moveVector = 5.0f;
	}

	int moveRange = Image_Size / 2;

	if(Controller::Instance().Get(Input::eInputType::Up) && vec2.GetDy() >= 0 + moveRange){
		vec2.Add(0.0f, -moveVector);
	}

	if(Controller::Instance().Get(Input::eInputType::Down) && vec2.GetDy() <= Game_HeightSize - moveRange){
		vec2.Add(0.0f, moveVector);
	}

	if(Controller::Instance().Get(Input::eInputType::Left) && vec2.GetDx() >= 0 + moveRange){
		vec2.Add(-moveVector, 0.0f);
	}

	if(Controller::Instance().Get(Input::eInputType::Right) && vec2.GetDx() <= Game_WidthSize - moveRange){
		vec2.Add(moveVector, 0.0f);
	}

}

void Player::Shot(){

	if(!Controller::Instance().Get(Input::eInputType::Shot)){
		return;
	}

	ObjectCreater objCreate;
	objCreate.BulletCreate(vec2, 5, -15.0f, eTag_Player);

}

void Player::HitAction(){

	//hp->Sub(1);

	if(hp->Get() == 0){
		isAlive = false;
	}

}