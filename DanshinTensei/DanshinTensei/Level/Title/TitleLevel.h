//====================================================
// TitleLevel : Title�i�K
// System Title�̂Ƃ�
// author	�����
// data 2019/12/15 �쐬
//====================================================
#pragma once

#include "BaseLevel.h"

namespace Game
{
	namespace Level
	{
		class TitleLevel : public BaseLevel
		{
		public:
			TitleLevel();
			~TitleLevel();

			virtual void Init()   override;
			virtual void Uninit() override;
			virtual void Update() override;
			virtual void Draw()   override;

		private:

		};
	}
}