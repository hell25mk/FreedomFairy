#include "Player.h"
#include "DxLib.h"
#include "../../MyLibrary/MyLibrary.h"
#include "../../Input/Controller.h"
#include "../../Collider/Inheritance/StationeryCollider.h"
#include "../Creater/ObjectCreater.h"

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
	color = GetColor(255, 255, 255);		//�摜�ɕύX����̂ō폜�\��

	controller = new Controller();
	collider = new CircleCollider(vec2, Hit_Range, eTag_Player);

	ListRegistration(this);

}

Player::~Player(){

	collider->SetAliveFlag(false);
	SELF_DELETE(controller);

}

bool Player::Update(){

	if(collider->GetHitFlag()){
		HitAction();
	}

	controller->Update();

	Move();
	Shot();

	collider->SetVector(vec2);

	return isAlive;
}

void Player::Draw(){

	DrawCircle(vec2.GetDx(), vec2.GetDy(), radius, color, true);	//�摜�ɕύX����̂ō폜�\��
	collider->Draw();

}

void Player::Move(){

	if(controller->Input(eInputType::eType_Slow)){
		moveVector = 2.0f;
	} else{
		moveVector = 5.0f;
	}

	int moveRange = Image_Size / 2;

	if(controller->Input(eInputType::eType_Up) && vec2.GetDy() >= 0 + moveRange){
		vec2.Add(0.0f, -moveVector);
	}

	if(controller->Input(eInputType::eType_Down) && vec2.GetDy() <= Game_HeightSize - moveRange){
		vec2.Add(0.0f, moveVector);
	}

	if(controller->Input(eInputType::eType_Left) && vec2.GetDx() >= 0 + moveRange){
		vec2.Add(-moveVector, 0.0f);
	}

	if(controller->Input(eInputType::eType_Right) && vec2.GetDx() <= Game_WidthSize - moveRange){
		vec2.Add(moveVector, 0.0f);
	}

}

void Player::Shot(){

	if(!controller->Input(eInputType::eType_Shot)){
		return;
	}

	ObjectCreater objCreate;
	objCreate.BulletCreate(vec2, 5, -15.0f, eTag_Player);

}

void Player::HitAction(){

	isAlive = false;

}