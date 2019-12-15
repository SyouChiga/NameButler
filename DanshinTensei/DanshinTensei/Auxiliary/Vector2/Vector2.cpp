//====================================================
// Vector2 : ベクトルの二次元
//====================================================

#include "Vector2.h"

using namespace Game::Auxiliary;

//==================================
//　コンストラクタ
//==================================
Vector2::Vector2()
{
	positionX_ = 0.0f;
	positionY_ = 0.0f;
};
//==================================
//　コンストラクタ
// @ _vector2 --> vector2の変数に入れるための
//==================================
Vector2::Vector2(const Vector2& _vector2)
{
	positionX_ = _vector2.positionX_;
	positionY_ = _vector2.positionY_;
}


//==================================
//　デストラクタ
//==================================
Vector2::~Vector2()
{

}

//==================================
//　Init
//==================================
void Vector2::Init()
{

}

//==================================
//　operator
//==================================
const Vector2 Vector2::operator + (const Vector2& _vector2)
{
	Vector2 local_vector2;
	local_vector2.positionX_ = positionX_ + _vector2.positionX_;
	local_vector2.positionY_ = positionY_ + _vector2.positionY_;

	return local_vector2;
}
const Vector2 Vector2::operator - (const Vector2& _vector2)
{
	Vector2 local_vector2;
	local_vector2.positionX_ = positionX_ - _vector2.positionX_;
	local_vector2.positionY_ = positionY_ - _vector2.positionY_;

	return local_vector2;
}
const Vector2 Vector2::operator / (const Vector2& _vector2)
{
	Vector2 local_vector2;
	local_vector2.positionX_ = positionX_ / _vector2.positionX_;
	local_vector2.positionY_ = positionY_ / _vector2.positionY_;

	return local_vector2;
}
const Vector2 Vector2::operator * (const Vector2& _vector2)
{
	Vector2 local_vector2;
	local_vector2.positionX_ = positionX_ * _vector2.positionX_;
	local_vector2.positionY_ = positionY_ * _vector2.positionY_;

	return local_vector2;
}
const Vector2& Vector2:: operator += (const Vector2& _vector2)
{
	positionX_ += _vector2.positionX_;
	positionY_ += _vector2.positionY_;

	return *this;
}
const Vector2& Vector2::operator ++ ()
{
	positionX_ += 1.0f;
	positionY_ += 1.0f;

	return *this;
}
const Vector2& Vector2::operator -- ()
{
	positionX_ -= 1.0f;
	positionY_ -= 1.0f;

	return *this;
}
const Vector2& Vector2::operator -= (const Vector2& _vector2)
{
	positionX_ -= _vector2.positionX_;
	positionY_ -= _vector2.positionY_;

	return *this;
}
const Vector2& Vector2::operator /= (const Vector2& _vector2)
{
	positionX_ /= _vector2.positionX_;
	positionY_ /= _vector2.positionY_;

	return *this;
}
const Vector2& Vector2::operator *= (const Vector2& _vector2)
{
	positionX_ *= _vector2.positionX_;
	positionY_ *= _vector2.positionY_;

	return *this;
}