#pragma once

class Score{

public:
	Score();
	Score(int s);
	~Score();
	void SetScore(int s);
	int GetScore();
	void AddScore(int s);
	void Release();

private:
	int score;

};

