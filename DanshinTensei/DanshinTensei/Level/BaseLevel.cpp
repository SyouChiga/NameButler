//====================================================
//  BaseLevel : �i�K���
//====================================================
#include "BaseLevel.h"

using namespace Game;

Game::GameInput*  BaseLevel::static_gameInput_ = nullptr;

//==================================
//�@�R���X�g���N�^
//==================================
BaseLevel::BaseLevel()
{
	
};

//==================================
//�@�f�X�g���N�^
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
//�@Player�̃Q�b�g
//==================================
const Actor::Pawn::BasePlayer* const  BaseLevel::GetPlayer()
{
	return player_;
}

//==================================
//�@Release
//==================================
void BaseLevel::Release()
{
	delete this;
}

//==================================
//�@GameInput�̃Q�b�g:�C���X�^���V���O
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
