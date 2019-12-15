//====================================================
// PlayerFieldmanual : プレイヤーがフィールドを歩く時
// System フィールドで動く、プレイヤーの操作
// author	千賀翔
// data 2019/12/14 作成
//====================================================
#pragma once

#include "BasePlayerManual/BasePlayerManual.h"

namespace Game
{
	namespace Manual
	{
		namespace Player
		{
			class PlayerFieldManual : public BasePlayerManual
			{
			public:
				
				PlayerFieldManual(Actor::BasePawn* _pawn);
				~PlayerFieldManual();

				void UpdateManual() override;

			private:
				PlayerFieldManual();
			};
		}
	}
}