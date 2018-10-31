#include "ScoreManager.h"
#include "../Score.h"
#include "../../../MyLibrary/MyLibrary.h"

enum ScoreType{
	eScore_High,
	eScore_Now,

	eScore_Num,
};

const int Test_HighScore = 100000;

void ScoreManager::Create(){

	vectorScore.resize(eScore_Num);

	int size = vectorScore.size();
	for(int i = 0; i < size; i++){

		vectorScore[i] = new Score();

	}

	vectorScore[eScore_High]->SetScore(Test_HighScore);

}

void ScoreManager::Destroy(){

	int size = vectorScore.size();
	for(int i = 0; i < size; i++){

		SELF_DELETE(vectorScore[i]);

	}

}

void ScoreManager::SetScore(Score* s){

	vectorScore[eScore_Now]->AddScore(s->GetScore());

	if(vectorScore[eScore_Now]->GetScore() >= vectorScore[eScore_High]->GetScore()){
		vectorScore[eScore_High]->SetScore(vectorScore[eScore_Now]->GetScore());
	}

}

int ScoreManager::GetScore(int n){

	return vectorScore[n]->GetScore();
}