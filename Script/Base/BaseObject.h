#pragma once

class BaseObject{

public:
	BaseObject() = default;
	virtual ~BaseObject() = default;
	//‰Šú‰»ˆ—
	virtual void Init(){}
	//íœ‚Ìˆ—
	virtual void Destroy(){ }
	virtual bool Update() = 0;
	virtual void Draw() const = 0;

};