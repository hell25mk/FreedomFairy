#pragma once

class BaseObject{

public:
	BaseObject() = default;
	virtual ~BaseObject() = default;
	virtual void Init(){}
	virtual bool Update() = 0;
	virtual void Draw() const = 0;

};