#pragma once

#include "../../Base/BaseObject.h"
#include <memory>

class Factory{

public:
	virtual std::shared_ptr<BaseObject> Create(){ }

private:
	//派生クラスから呼び出す必要がないのでprivateになっている
	/// <summary>
	/// @brief オブジェクトを生成する仮想関数
	/// </summary>
	/// <returns>生成したオブジェクト</returns>
	virtual std::shared_ptr<BaseObject> CreateObject() = 0;

};