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
	Singleton(){ }			//外部でのインスタンス作成禁止
	virtual ~Singleton(){ }

private:
	void operator=(const Singleton& obj){ }	//代入演算子禁止
	Singleton(const Singleton &obj){ }		//コピーコンストラクタ禁止

};