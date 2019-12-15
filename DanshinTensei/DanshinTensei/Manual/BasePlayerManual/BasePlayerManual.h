//====================================================
// BasePlayerManual : プレイヤー操作基盤
// System プレイヤーを動かせる
// author	千賀翔
// data 2019/12/14 作成
//====================================================
#pragma once

#include "BaseManual.h"


namespace Game
{
	namespace Manual
	{
		class BasePlayerManual : public BaseManual
		{
		public:
			BasePlayerManual();
			BasePlayerManual(Actor::BasePawn* _pawn);
			virtual ~BasePlayerManual();

			virtual void UpdateManual() = 0;
		private:
			
		};
	}
}