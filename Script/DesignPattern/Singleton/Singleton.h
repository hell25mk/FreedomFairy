#pragma once

template <class Type> 
class Singleton{

public:
	static Type& Instance(){

		static Type instance;

		return instance;
	}
	virtual void Create(){ }
	virtual void Destroy(){ }

protected:
	Singleton() = default;									//�O���ł̃C���X�^���X�쐬�֎~
	virtual ~Singleton() = default;

private:
	Singleton& operator=(const Singleton& obj) = delete;	//������Z�q�֎~
	Singleton& operator=(Singleton&&) = delete;
	Singleton(const Singleton& obj) = default;				//�R�s�[�R���X�g���N�^�֎~
	Singleton(Singleton&&) = delete;

};