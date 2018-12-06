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
	Singleton() = default;									//外部でのインスタンス作成禁止
	virtual ~Singleton() = default;

private:
	Singleton& operator=(const Singleton& obj) = delete;	//代入演算子禁止
	Singleton& operator=(Singleton&&) = delete;
	Singleton(const Singleton& obj) = default;				//コピーコンストラクタ禁止
	Singleton(Singleton&&) = delete;

};