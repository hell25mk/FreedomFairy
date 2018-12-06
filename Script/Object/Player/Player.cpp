#include "Player.h"
#include "DxLib.h"
#include "../../MyLibrary/MyLibrary.h"
#include "../../Define/Define.h"
#include "../../Input/Controller.h"
#include "../../System/Image/Image.h"
#include "../../System/Debug/Debug.h"
#include "../Bullet/Factory/BulletFactory.h"

using Key = Input::eInputType;
namespace Game = Define::GameSize;

Player::Player(float x, float y):BaseGameObject(x,y){

	Init();

}

Player::Player(Vector2D<float>& vec):BaseGameObject(vec){

	Init();

}

void Player::Init(){

	moveSpeed = 4.0f;
	isDrawHitRange = false;

	width = 15;
	height = 15;

	imageHandle = Image::Instance().GetImage("Player");

	Debug::playerNum = 1;
	shotDelayCount = 0;

}

bool Player::Update(){

	Move();

	if(Controller::Instance().Get(Key::Shot)){
		Shot();
	}

	return isAlive;
}

void Player::Draw() const{

	DrawRotaGraphF(vec2.GetX(), vec2.GetY(), 1.0, 0.0, imageHandle, true);

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

	const int ShotDelayTime = 5;

	if(shotDelayCount > ShotDelayTime){
		BulletFactory::Instance().BulletCreate(vec2);
		shotDelayCount = 0;
	}

	shotDelayCount++;

}