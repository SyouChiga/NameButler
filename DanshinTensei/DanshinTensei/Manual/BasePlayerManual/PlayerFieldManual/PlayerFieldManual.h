//====================================================
// PlayerFieldmanual : �v���C���[���t�B�[���h�������
// System �t�B�[���h�œ����A�v���C���[�̑���
// author	�����
// data 2019/12/14 �쐬
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