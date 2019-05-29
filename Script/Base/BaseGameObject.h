#pragma once

#include "BaseObject.h"
#include "../System/Vector2D.h"

//�I�u�W�F�N�g���ǂ̃^�C�v����\���^�O
enum ObjectTags{
	eTag_Player,
	eTag_Enemy,
};

class BaseGameObject : public BaseObject{

public:
	BaseGameObject();
	BaseGameObject(float x, float y);
	BaseGameObject(Vector2D<float>& vec);
	virtual ~BaseGameObject() = default;
	//�X�V����
	virtual bool Update() = 0;
	//�`�揈��
	virtual void Draw() const = 0;
	//���W���擾����
	Vector2D<float>& GetVector();
	//�����Ă��邩�̃t���O���Z�b�g����
	void SetAlive(bool alive);

protected:
	Vector2D<float> vec2;
	float moveSpeed;
	bool isAlive;

	int width;
	int height;

	int imageHandle;
	int* imageDivHandle;

};

