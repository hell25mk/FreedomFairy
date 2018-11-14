#include "Player.h"
#include "DxLib.h"
#include "../../MyLibrary/MyLibrary.h"
#include "../../Define/Define.h"
#include "../../Input/Controller.h"
#include "../../System/Image/Image.h"
#include "../../Collider/Inheritance/StationeryCollider.h"
#include "../../System/HitPoint/HitPoint.h"
#include "../../System/Debug/Debug.h"

using Key = Input::eInputType;
using Win = Define::Window;

const int Hit_Range = 2;

Player::Player(){

	vec2.Set((float)Win::Center_Px, (float)Win::Out_Height * 0.8f);
	moveSpeed = 4.0f;
	isAlive = true;
	isDrawHitRange = false;

	radius = 15;

	collider = new CircleCollider(vec2, Hit_Range, eTag_Player);
	hp = new HitPoint(1);

	Debug::playerNum = 1;

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

	if(Controller::Instance().Get(Key::Shot)){
		Shot();
	}

	collider->SetVector(vec2);

	return isAlive;
}

void Player::Draw() const{

	DrawRotaGraphF(vec2.GetX(), vec2.GetY(), 1.0, 0.0, Image::Instance().GetImage("Player"), true);
	if(isDrawHitRange){
		collider->Draw();
	}

}

void Player::Move(){

	float moveX = 0, moveY = 0;

	if(Controller::Instance().Get(Key::Up)){
		moveY -= moveSpeed;
	}

	if(Controller::Instance().Get(Key::Down)){
		moveY += moveSpeed;
	}

	if(Controller::Instance().Get(Key::Left)){
		moveX -= moveSpeed;
	}

	if(Controller::Instance().Get(Key::Right)){
		moveX += moveSpeed;
	}

	//Î‚ßˆÚ“®ã2‚ÅŠ„‚é
	if(moveX && moveY){
		moveX /= (float)std::sqrt(2.0);
		moveY /= (float)std::sqrt(2.0);
	}

	//Œ¸‘¬
	if(Controller::Instance().Get(Key::Slow)){
		moveX /= 2;
		moveY /= 2;
		isDrawHitRange = true;
	} else{
		isDrawHitRange = false;
	}

	//ˆÚ“®‰Â”\”ÍˆÍ‚ÌŠm”F
	float px = vec2.GetX(), py = vec2.GetY();
	if(px + moveX - radius < Win::In_Px){
		moveX = 0;
	} else if(px + moveX + radius > Win::In_Px + Win::In_Width){
		moveX = 0;
	}

	if(py + moveY - radius < Win::In_Py){
		moveY = 0;
	} else if(py + moveY + radius > Win::In_Py + Win::In_Height){
		moveY = 0;
	} 

	vec2.Add(moveX , moveY);

}

void Player::Shot(){

	

}

void Player::HitAction(){

	hp->Sub(1);

	if(hp->Get() == 0){
		isAlive = false;
	}

}