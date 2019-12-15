//====================================================
// GametLevel : Game’iŠK
// System Game‚Ì‚Æ‚«
// author	ç‰êãÄ
// data 2019/12/15 ì¬
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
