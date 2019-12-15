//====================================================
// BaseLevel : �i�K���
// System Scene���
// author	�����
// data 2019/12/15 �쐬
//====================================================
#pragma once

#include "GameInput.h"
#include "Pawn/BasePlayer/BasePlayer.h"
namespace Game
{
	class BaseLevel
	{
	public:

		BaseLevel();
		virtual ~BaseLevel();

		virtual void Init() = 0;
		virtual void Uninit() = 0;
		virtual void Update() = 0;
		virtual void Draw() = 0;

		//GameInput�̃Q�b�g:�C���X�^���V���O
		static Game::GameInput* GetGameInput();

		//Player�̃Q�b�g
		const Game::Actor::Pawn::BasePlayer* const GetPlayer();

		//�폜
		virtual void Release();
	protected:
		Game::Actor::Pawn::BasePlayer* player_ = nullptr;
	protected:
		//GameInput�O���[�o��
		static  Game::GameInput* static_gameInput_;
	};
}
