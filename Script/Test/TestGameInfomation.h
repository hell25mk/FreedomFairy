/*****************************
	ç°ìxè¡Ç∑
	ê‚ëŒê^éóÇ∑ÇÒÇ»
******************************/

#pragma once

#include "../DesignPattern/Singleton/Singleton.h"

class TestGameInfomation : public Singleton<TestGameInfomation>{

public:
	friend class Singleton<TestGameInfomation>;
	virtual void Create() override;
	virtual void Destroy() override;
	void Draw() const;

protected:
	TestGameInfomation(){ }
	virtual ~TestGameInfomation(){ }

public:
	bool isGameMode;
	int score;


};

