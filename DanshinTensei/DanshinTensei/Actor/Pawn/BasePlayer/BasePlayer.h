//====================================================
// BasePlayer : ��l���̊��
// System ���[�U�[����ԑ��삷��L�����N�^�[
// author	�����
// data 2019/12/14 �쐬
//====================================================
#pragma once

#include "Pawn/BasePawn.h"

namespace Game
{
	namespace Actor
	{
		namespace Pawn
		{
			class BasePlayer : public BasePawn
			{
			public:
				BasePlayer();
				virtual ~BasePlayer();


				virtual void Init() = 0;
				virtual void Update() = 0;
				virtual void Draw() = 0;
				virtual void Uninit() = 0;
			private:

			};
		}
	}
}