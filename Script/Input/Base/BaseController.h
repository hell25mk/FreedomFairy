/*****************************************************************************************************
-----ファイル概要-----

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

