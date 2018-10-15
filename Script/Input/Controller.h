#pragma once

class Controller{

public:
	Controller();
	Controller(int actionTypeNum);
	~Controller();
	bool Update();
	int Input(int requestCode);
	
private:
	int inputState;

};