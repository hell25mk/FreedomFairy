//���`

#pragma once

template<class Type> 
class Vector2D{

public:
	Vector2D(){ }
	Vector2D(Type argx, Type argy):x(argx), y(argy){ }
	~Vector2D(){ }

	void Set(const Type argx, const Type argy){

		this->x = argx;
		this->y = argy;

	}
	void Add(const Type argx, const Type argy){

		this->x += argx;
		this->y += argy;

	}
	void Sub(const Type argx, const Type argy){

		this->x -= argx;
		this->y -= argy;

	}

/*#pragma region ���Z�q�I�[�o�[���[�h
	//���Z
	void operator+=(Vector2D pos){

		this->x += pos.x;
		this->y += pos.y;

	}
	void operator+=(Type value){

		this->x += value;
		this->y += value;

	}

	//���Z
	void operator-=(Vector2D pos){

		this->x -= pos.x;
		this->y -= pos.y;

	}
	void operator-=(Type value){

		this->x -= value;
		this->y -= value;

	}

	//��Z
	void operator*=(Vector2D pos){

		this->x *= pos.x;
		this->y *= pos.y;

	}
	void operator*=(Type value){

		this->x *= value;
		this->y *= value;

	}

	//���Z
	void operator/=(Vector2D pos){

		this->x /= pos.x;
		this->y /= pos.y;

	}
	void operator/=(Type value){

		this->x /= value;
		this->y /= value;

	}

	//��]�Z
	void operator%=(Vector2D pos){

		this->x %= pos.x;
		this->y %= pos.y;

	}
	void operator%=(Type value){

		this->x %= value;
		this->y %= value;

	}

	Vector2D operator+(Vector2D pos){

		Vector2D temp;

		temp.x = this->x + pos.x;
		temp.y = this->y + pos.y;

		return temp;
	}
	Vector2D operator-(Vector2D pos){

		Vector2D temp;

		temp.x = this->x - pos.x;
		temp.y = this->y - pos.y;

		return temp;
	}
#pragma endregion*/
	
#pragma region �A�N�Z�T�[
	Type GetX() const{
		return this->x;
	}
	Type GetY() const{
		return this->y;
	}
	int GetDx() const{
		return (int)this->x;
	}
	int GetDy() const{
		return (int)this->y;
	}
#pragma endregion

public:
	Type x;
	Type y;

};

