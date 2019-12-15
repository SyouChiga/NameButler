//====================================================
//  PlayerField : �t�B�[���h��������̎�l��
//====================================================

#include "PlayerField.h"
#include "BaseManual.h"
using namespace Game::Actor::Pawn::Player;

//==================================
//�@�R���X�g���N�^
//==================================
PlayerField::PlayerField()
{
};

//==================================
//�@�f�X�g���N�^
//==================================
PlayerField::~PlayerField()
{

}

//==================================
//�@Init
//==================================
void PlayerField::Init()
{

}

//==================================
//�@Update
//==================================
void PlayerField::Update()
{
	manual_->UpdateManual();
}


//==================================
//�@Draw
//==================================
void PlayerField::Draw()
{

}


//==================================
//�@Uninit
//==================================
void PlayerField::Uninit()
{
	if (manual_ != nullptr)
	{
		manual_->Release();
		manual_ = nullptr;
	}
}

