#pragma once

class BaseObject{

public:
	BaseObject() = default;
	virtual ~BaseObject() = default;
	virtual bool Update() = 0;
	virtual void Draw() const = 0;

};