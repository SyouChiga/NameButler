//====================================================
// PlayerField : �t�B�[���h��������̎�l��
// System �t�B�[���h�X�e�[�W�𓮂����̎�l��
// author	�����
// data 2019/12/14 �쐬
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