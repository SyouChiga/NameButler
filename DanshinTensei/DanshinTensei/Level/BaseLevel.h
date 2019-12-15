//====================================================
// BaseLevel : 段階基盤
// System Scene基盤
// author	千賀翔
// data 2019/12/15 作成
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

		//GameInputのゲット:インスタンシング
		static Game::GameInput* GetGameInput();

		//Playerのゲット
		const Game::Actor::Pawn::BasePlayer* const GetPlayer();

		//削除
		virtual void Release();
	protected:
		Game::Actor::Pawn::BasePlayer* player_ = nullptr;
	protected:
		//GameInputグローバル
		static  Game::GameInput* static_gameInput_;
	};
}
