//====================================================
// BasePawn : 歩
//====================================================
#include "BasePawn.h"
#include "BaseManual.h"


using namespace Game::Actor;

//==================================
//　コンストラクタ
//==================================
BasePawn::BasePawn()
{

};

//==================================
//　デストラクタ
//==================================
BasePawn::~BasePawn()
{
	if (manual_ != nullptr)
	{
		manual_->Release();
	}
}

//==================================
//　UpdateManual
// ユーザー自身の
//==================================
void BasePawn::UpdateManual()
{
	manual_->UpdateManual();
}
//==================================
//　Manual
// Manualのセット
//==================================
void BasePawn::Manual(Game::BaseManual* _manual)
{
	manual_ = _manual;
}
