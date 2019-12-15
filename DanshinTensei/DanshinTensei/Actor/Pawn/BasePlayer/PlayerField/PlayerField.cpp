//====================================================
//  PlayerField : フィールドを歩く時の主人公
//====================================================

#include "PlayerField.h"
#include "BaseManual.h"
using namespace Game::Actor::Pawn::Player;

//==================================
//　コンストラクタ
//==================================
PlayerField::PlayerField()
{
};

//==================================
//　デストラクタ
//==================================
PlayerField::~PlayerField()
{

}

//==================================
//　Init
//==================================
void PlayerField::Init()
{

}

//==================================
//　Update
//==================================
void PlayerField::Update()
{
	manual_->UpdateManual();
}


//==================================
//　Draw
//==================================
void PlayerField::Draw()
{

}


//==================================
//　Uninit
//==================================
void PlayerField::Uninit()
{
	if (manual_ != nullptr)
	{
		manual_->Release();
		manual_ = nullptr;
	}
}

