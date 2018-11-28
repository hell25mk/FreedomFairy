/****************************************************
 * @file	Vector2D.h
 ----------------------------------------------------
 * @brief	座標を扱うテンプレートクラス
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
	/// @brief xとyに代入
	/// </summary>
	/// <param name="x">x値</param>
	/// <param name="y">y値</param>
	void Set(const Type x, const Type y){

		this->x = x;
		this->y = y;

	}

	/// <summary>
	/// @brief xとyを加算する
	/// </summary>
	/// <param name="x">x値</param>
	/// <param name="y">y値</param>
	void Add(const Type x, const Type y){

		this->x += x;
		this->y += y;

	}

	/// <summary>
	/// @brief xとyを減算する
	/// </summary>
	/// <param name="x">x値</param>
	/// <param name="y">y値</param>
	void Sub(const Type x, const Type y){

		this->x -= x;
		this->y -= y;

	}

	/// <summary>
	/// @brief xとyを乗算する
	/// </summary>
	/// <param name="x">x値</param>
	/// <param name="y">y値</param>
	void Mul(const Type x, const Type y){

		this->x *= x;
		this->y *= y;

	}

	/// <summary>
	/// @brief xとyを除算する
	/// </summary>
	/// <param name="x">x値</param>
	/// <param name="y">y値</param>
	void Div(const Type x, const Type y){

		this->x /= x;
		this->y /= y;

	}
#pragma endregion

#pragma region getter
	/// <summary>
	/// @brief x値を返す
	/// </summary>
	/// <returns>テンプレートの型通りのx値を返す</returns>
	Type GetX() const{
		return this->x;
	}

	/// <summary>
	/// @brief y値を返す
	/// </summary>
	/// <returns>テンプレートの型通りのy値を返す</returns>
	Type GetY() const{
		return this->y;
	}

	/// <summary>
	/// @brief x値を返す
	/// </summary>
	/// <returns>int型にキャストしたx値を返す</returns>
	int GetDx() const{
		return (int)this->x;
	}

	/// <summary>
	/// @brief y値を返す
	/// </summary>
	/// <returns>int型にキャストしたy値を返す</returns>
	int GetDy() const{
		return (int)this->y;
	}
#pragma endregion

public:
	Type x;
	Type y;

};

