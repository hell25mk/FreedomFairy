/*****************************************************************************************************
-----ファイル概要-----

******************************************************************************************************/

#pragma once

class BaseController{

public:
	BaseController();
	virtual ~BaseController();
	virtual bool Update()= 0;
	virtual int Input(int argKeyCode) = 0;

private:

};

