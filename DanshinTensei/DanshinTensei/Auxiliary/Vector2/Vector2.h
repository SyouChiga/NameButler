//====================================================
// Vector2 : �x�N�g���̓񎟌�
// System �x�N�g���̍��W�ϐ�
// author	�����
// data 2019/12/14 �쐬
//====================================================
#pragma

#include "BaseAuxiliary/BaseAuxiliary.h"

namespace Game
{
	namespace Auxiliary
	{
		class  Vector2 : public  BaseAuxiliary
		{
		public:
			Vector2();
			Vector2(const Vector2& _vector2);
			~Vector2();

			void Init() override;
			//=======================================================================
			// operator
			//========================================================================
			const Vector2 operator + (const Vector2& _vector2);
			const Vector2 operator - (const Vector2& _vector2);
			const Vector2 operator / (const Vector2& _vector2);
			const Vector2 operator * (const Vector2& _vector2);
			const Vector2& operator += (const Vector2& _vector2);
			const Vector2& operator ++ ();
			const Vector2& operator -- ();
			const Vector2& operator -= (const Vector2& _vector2);
			const Vector2& operator /= (const Vector2& _vector2);
			const Vector2& operator *= (const Vector2& _vector2);
			template <class T>
			inline const Vector2& operator = (const T& _float)
			{
				positionX_ = (float)_float;
				positionY_ = (float)_float;

				return *this;
			}
			template <class T>
			inline const Vector2& operator += (const T& _float)
			{
				positionX_ += (float)_float;
				positionY_ += (float)_float;

				return *this;
			}
			template <class T>
			inline const Vector2& operator -= (const T& _float)
			{
				positionX_ -= (float)_float;
				positionY_ -= (float)_float;

				return *this;
			}
			template <class T>
			inline const Vector2& operator /= (const T& _float)
			{
				positionX_ /= (float)_float;
				positionY_ /= (float)_float;

				return *this;
			}
			template <class T>
			inline const Vector2& operator *= (const T& _float)
			{
				positionX_ *= (float)_float;
				positionY_ *= (float)_float;

				return *this;
			}
			//========================================================================


		private:
			//���W�␔������
			float positionX_ = 0.0f;
			float positionY_ = 0.0f;
		};
	}
}