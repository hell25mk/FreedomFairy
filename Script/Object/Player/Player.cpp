#include "Player.h"
#include "DxLib.h"
#include "../../Input/Controller.h"
#include "../Bullet/Bullet.h"
#include "../Manager/ObjectManager.h"

const int Game_WidthSize = 420;
const int Game_HeightSize = 480;

const int Image_AllNum = 12;
const int Image_Size = 48;

Player::Player(){
}

Player::Player(float x, float y):BaseObject(x, y){

	controller = new Controller();
	image = new int[Image_AllNum];
	LoadDivGraph("Image/Player/furan.png", Image_AllNum, 3, 4, Image_Size, Image_Size, image);

	moveSpeed = 3.0f;

}

Player::~Player(){

	delete[] image;
	image = nullptr;
	delete controller;
	controller = nullptr;

}

bool Player::Update(){

	controller->Update();

	Move();
	Shot();

	return true;
}

void Player::Draw(){

	DrawRotaGraph(vec2.GetDx(), vec2.GetDy(), 0.7, 0.0, image[10], true);

}

void Player::Move(){

	int moveRange = Image_Size / 2;

	//上キー入力
	if(controller->Input(PAD_INPUT_UP) && vec2.GetDy() >= 0 + moveRange){
		vec2.Add(0.0f, -moveSpeed);
	}

	//下キー入力
	if(controller->Input(PAD_INPUT_DOWN) && vec2.GetDy() <= Game_HeightSize - moveRange){
		vec2.Add(0.0f, moveSpeed);
	}

	//左キー入力
	if(controller->Input(PAD_INPUT_LEFT) && vec2.GetDx() >= 0 + moveRange){
		vec2.Add(-moveSpeed, 0.0f);
	}

	//右キー入力
	if(controller->Input(PAD_INPUT_RIGHT) && vec2.GetDx() <= Game_WidthSize - moveRange){
		vec2.Add(moveSpeed, 0.0f);
	}

}

void Player::Shot(){

	//Zキー入力
	if(controller->Input(PAD_INPUT_1)){
		Bullet* bullet = new Bullet(vec2, -10.0f);
		ObjectManager::GetInstance().ListPush(bullet);
	}

}