//====================================================
// GametLevel : Game�i�K
// System Game�̂Ƃ�
// author	�����
// data 2019/12/15 �쐬
//====================================================
#pragma once

#include "BaseLevel.h"

namespace Game
{
	namespace Level
	{
		class GameLevel : public BaseLevel
		{
		public:
			GameLevel();
			~GameLevel();

			virtual void Init()   override;
			virtual void Uninit() override;
			virtual void Update() override;
			virtual void Draw()   override;

		private:

		};
	}
}
