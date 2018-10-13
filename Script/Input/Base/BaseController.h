/*****************************************************************************************************
-----ファイル概要-----

******************************************************************************************************/

#pragma once

class BaseController{

public:
	BaseController();
	virtual ~BaseController();
	virtual void Update()= 0;
	virtual int Input() = 0;

private:

};

