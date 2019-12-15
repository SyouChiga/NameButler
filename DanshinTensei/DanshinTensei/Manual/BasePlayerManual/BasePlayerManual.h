//====================================================
// BasePlayerManual : �v���C���[������
// System �v���C���[�𓮂�����
// author	�����
// data 2019/12/14 �쐬
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