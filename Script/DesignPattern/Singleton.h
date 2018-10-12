#pragma once

template <class Type> 
class Singleton{

public:
	static Type& GetInstance(){

		static Type instance;

		return instance;
	}
	virtual void Create(){}
	virtual void Destroy(){}

protected:
	Singleton(){ }			//�O���ł̃C���X�^���X�쐬�֎~
	virtual ~Singleton(){ }

private:
	void operator=(const Singleton& obj){ }	//������Z�q�֎~
	Singleton(const Singleton &obj){ }		//�R�s�[�R���X�g���N�^�֎~

};