#include "Score.h"
#include "Manager/ScoreManager.h"

Score::Score():score(0){
}

Score::Score(int s){

	score = s;

}

Score::~Score(){
}

void Score::SetScore(int s){

	score = s;

}

int Score::GetScore(){

	return score;
}

void Score::AddScore(int s){

	score += s;

}

void Score::Release(){

	ScoreManager::Instance().SetScore(this);

}