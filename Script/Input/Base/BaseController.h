/*****************************************************************************************************
-----�t�@�C���T�v-----

******************************************************************************************************/

#pragma once

enum{
	eAtacck,
};

class BaseController{

public:
	BaseController();
	~BaseController();
	int Update();
	void Draw();

private:
	int bAttack;

};

