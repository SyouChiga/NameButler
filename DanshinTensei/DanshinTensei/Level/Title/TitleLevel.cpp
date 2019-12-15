//====================================================
//  TitleLevel : Title段階
//====================================================
#include "TitleLevel.h"
#include "Pawn/BasePlayer/PlayerField/PlayerField.h"
#include "BasePlayerManual/PlayerFieldManual/PlayerFieldManual.h"
using namespace Game;
using namespace Game::Level;

//==================================
//　コンストラクタ
//==================================
TitleLevel::TitleLevel()
{

};

//==================================
//　デストラクタ
//==================================
TitleLevel::~TitleLevel()
{

}

//==================================
//　Init
//==================================
void TitleLevel::Init()
{
	player_ = new Actor::Pawn::Player::PlayerField();
	new Game::Manual::Player::PlayerFieldManual(player_);
}

//==================================
//　Uninit
//==================================
void TitleLevel::Uninit()
{
	if (player_ != nullptr)
	{
		player_->Uninit();
	}

	this->Release();
}

//==================================
//　Update
//==================================
void TitleLevel::Update()
{
	player_->Update();
}

//==================================
//　Draw
//==================================
void TitleLevel::Draw()
{
	player_->Draw();
}