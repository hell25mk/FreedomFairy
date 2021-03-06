#pragma once

class BaseObject{

public:
	BaseObject() = default;
	virtual ~BaseObject() = default;
	//初期化処理
	virtual void Init(){}
	//削除時の処理
	virtual void Destroy(){ }
	virtual bool Update() = 0;
	virtual void Draw() const = 0;

};