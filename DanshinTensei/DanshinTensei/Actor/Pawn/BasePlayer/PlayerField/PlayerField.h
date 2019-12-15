//====================================================
// PlayerField : フィールドを歩く時の主人公
// System フィールドステージを動く時の主人公
// author	千賀翔
// data 2019/12/14 作成
//====================================================
#pragma once

#include "Pawn/BasePlayer/BasePlayer.h"

namespace Game
{
	namespace Actor
	{
		namespace Pawn
		{
			namespace Player
			{
				class PlayerField : public BasePlayer
				{
				public:
					PlayerField();
					~PlayerField();

					virtual void Init()   override;
					virtual void Update() override;
					virtual void Draw()   override;
					virtual void Uninit() override;

				private:

				};
			}
		}
	}
}