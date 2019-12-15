//====================================================
//  BaseLevel : 段階基盤
//====================================================
#include "BaseLevel.h"

using namespace Game;

Game::GameInput*  BaseLevel::static_gameInput_ = nullptr;

//==================================
//　コンストラクタ
//==================================
BaseLevel::BaseLevel()
{
	
};

//==================================
//　デストラクタ
//==================================
BaseLevel::~BaseLevel()
{
	if (static_gameInput_ != nullptr)
	{
		static_gameInput_->Uninit();
		static_gameInput_ = nullptr;
	}
}

//==================================
//　Playerのゲット
//==================================
const Actor::Pawn::BasePlayer* const  BaseLevel::GetPlayer()
{
	return player_;
}

//==================================
//　Release
//==================================
void BaseLevel::Release()
{
	delete this;
}

//==================================
//　GameInputのゲット:インスタンシング
//==================================
Game::GameInput* BaseLevel::GetGameInput()
{
	if (static_gameInput_ == nullptr)
	{
		static_gameInput_ = new GameInput();
		static_gameInput_->Init();
	}

	return static_gameInput_;
}
