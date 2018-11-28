#pragma once

#include "../../Base/BaseObject.h"
#include <memory>

class Factory{

public:
	virtual std::unique_ptr<BaseObject> Create();

private:
	//�h���N���X����Ăяo���K�v���Ȃ��̂�private�ɂȂ��Ă���
	/// <summary>
	/// @brief �I�u�W�F�N�g�𐶐����鉼�z�֐�
	/// </summary>
	/// <returns>���������I�u�W�F�N�g</returns>
	virtual std::unique_ptr<BaseObject> CreateObject() = 0;

};

class ObjectFactory{



};