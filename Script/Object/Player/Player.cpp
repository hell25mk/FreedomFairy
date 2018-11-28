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
namespace Game = Define::GameSize;

const int Hit_Range = 2;

Player::Player(float x, float y):BaseGameObject(x,y){

	moveSpeed = 4.0f;
	isDrawHitRange = false;

	width = 15;
	height = 15;

	imageHandle = Image::Instance().GetImage("Player");

	collider = new CircleCollider(vec2, Hit_Range, eTag_Player);
	hp = new HitPoint(1);

	Debug::playerNum = 1;

}

Player::Player(Vector2D<float>& vec):BaseGameObject(vec){

	moveSpeed = 4.0f;
	isDrawHitRange = false;

	width = 15;
	height = 15;

	imageHandle = Image::Instance().GetImage("Player");

	collider = new CircleCollider(vec2, Hit_Range, eTag_Player);
	hp = new HitPoint(1);

	Debug::playerNum = 1;

}

Player::~Player(){

	Self_Delete(hp);
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

	DrawRotaGraphF(vec2.GetX(), vec2.GetY(), 1.0, 0.0, imageHandle, true);
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

	//éŒÇﬂà⁄ìÆéûÅ„2Ç≈äÑÇÈ
	if(moveX && moveY){
		moveX /= (float)std::sqrt(2.0);
		moveY /= (float)std::sqrt(2.0);
	}

	//å∏ë¨
	if(Controller::Instance().Get(Key::Slow)){
		moveX /= 2;
		moveY /= 2;
		isDrawHitRange = true;
	} else{
		isDrawHitRange = false;
	}

	//à⁄ìÆâ¬î\îÕàÕÇÃämîF
	float px = vec2.GetX(), py = vec2.GetY();
	if(px + moveX - width < Game::In_Px){
		moveX = 0;
	} else if(px + moveX + width > Game::In_Px + Game::In_Width){
		moveX = 0;
	}

	if(py + moveY - height < Game::In_Py){
		moveY = 0;
	} else if(py + moveY + height > Game::In_Py + Game::In_Height){
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