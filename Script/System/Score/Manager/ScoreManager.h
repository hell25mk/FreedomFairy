#pragma once

#include "../../../DesignPattern/Singleton/Singleton.h"
#include <vector>

class Score;

class ScoreManager : public Singleton<ScoreManager>{

public:
	friend class Singleton<ScoreManager>;
	virtual void Create() override;
	virtual void Destroy() override;
	void SetScore(Score* s);
	int GetScore(int n);

protected:
	ScoreManager(){ }
	virtual ~ScoreManager(){ }

private:
	std::vector<Score*> vectorScore;

};

