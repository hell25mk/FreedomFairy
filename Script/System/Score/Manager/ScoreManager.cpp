#include "ScoreManager.h"
#include "../Score.h"
#include "../../../MyLibrary/MyLibrary.h"

enum eScoreType{
	High,
	Now,

	eScore_Num,
};

const int Test_HighScore = 100000;

void ScoreManager::Create(){

	vectorScore.resize(eScore_Num);

	int size = vectorScore.size();
	for(int i = 0; i < size; i++){

		vectorScore[i] = new Score();

	}

	vectorScore[High]->SetScore(Test_HighScore);

}

void ScoreManager::Destroy(){

	int size = vectorScore.size();
	for(int i = 0; i < size; i++){

		Self_Delete(vectorScore[i]);

	}

}

void ScoreManager::SetScore(Score* s){

	vectorScore[Now]->AddScore(s->GetScore());

	if(vectorScore[Now]->GetScore() >= vectorScore[High]->GetScore()){
		vectorScore[High]->SetScore(vectorScore[Now]->GetScore());
	}

}

int ScoreManager::GetScore(int n){

	return vectorScore[n]->GetScore();
}