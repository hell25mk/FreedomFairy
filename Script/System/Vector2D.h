/****************************************************
 * @file	Vector2D.h
 ----------------------------------------------------
 * @brief	���W�������e���v���[�g�N���X
 ****************************************************/

#pragma once

template<class Type> 
class Vector2D{

public:
	Vector2D():x(0), y(0){ }
	Vector2D(const Type x, const Type y):x(x), y(y){ }
	~Vector2D() = default;

#pragma region setter
	/// <summary>
	/// @brief x��y�ɑ��
	/// </summary>
	/// <param name="x">x�l</param>
	/// <param name="y">y�l</param>
	void Set(const Type x, const Type y){

		this->x = x;
		this->y = y;

	}

	/// <summary>
	/// @brief x��y�����Z����
	/// </summary>
	/// <param name="x">x�l</param>
	/// <param name="y">y�l</param>
	void Add(const Type x, const Type y){

		this->x += x;
		this->y += y;

	}

	/// <summary>
	/// @brief x��y�����Z����
	/// </summary>
	/// <param name="x">x�l</param>
	/// <param name="y">y�l</param>
	void Sub(const Type x, const Type y){

		this->x -= x;
		this->y -= y;

	}

	/// <summary>
	/// @brief x��y����Z����
	/// </summary>
	/// <param name="x">x�l</param>
	/// <param name="y">y�l</param>
	void Mul(const Type x, const Type y){

		this->x *= x;
		this->y *= y;

	}

	/// <summary>
	/// @brief x��y�����Z����
	/// </summary>
	/// <param name="x">x�l</param>
	/// <param name="y">y�l</param>
	void Div(const Type x, const Type y){

		this->x /= x;
		this->y /= y;

	}
#pragma endregion

#pragma region getter
	/// <summary>
	/// @brief x�l��Ԃ�
	/// </summary>
	/// <returns>�e���v���[�g�̌^�ʂ��x�l��Ԃ�</returns>
	Type GetX() const{
		return this->x;
	}

	/// <summary>
	/// @brief y�l��Ԃ�
	/// </summary>
	/// <returns>�e���v���[�g�̌^�ʂ��y�l��Ԃ�</returns>
	Type GetY() const{
		return this->y;
	}

	/// <summary>
	/// @brief x�l��Ԃ�
	/// </summary>
	/// <returns>int�^�ɃL���X�g����x�l��Ԃ�</returns>
	int GetDx() const{
		return (int)this->x;
	}

	/// <summary>
	/// @brief y�l��Ԃ�
	/// </summary>
	/// <returns>int�^�ɃL���X�g����y�l��Ԃ�</returns>
	int GetDy() const{
		return (int)this->y;
	}
#pragma endregion

public:
	Type x;
	Type y;

};

