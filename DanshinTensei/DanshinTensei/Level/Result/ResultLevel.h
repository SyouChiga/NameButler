//====================================================
// ResultLevel : Result�i�K
// System Result�̂Ƃ�
// author	�����
// data 2019/12/15 �쐬
//====================================================
#pragma once

#include "BaseLevel.h"

namespace Game
{
	namespace Level
	{
		class ResultLevel : public BaseLevel
		{
		public:
			ResultLevel();
			~ResultLevel();

			virtual void Init()   override;
			virtual void Uninit() override;
			virtual void Update() override;
			virtual void Draw()   override;

		private:

		};
	}
}