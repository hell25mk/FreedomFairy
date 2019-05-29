#pragma once

class BaseObject{

public:
	BaseObject() = default;
	virtual ~BaseObject() = default;
	//����������
	virtual void Init(){}
	//�폜���̏���
	virtual void Destroy(){ }
	virtual bool Update() = 0;
	virtual void Draw() const = 0;

};