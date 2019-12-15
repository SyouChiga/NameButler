//====================================================
//  BasePlayerManual : プレイヤー操作基盤
//====================================================
#include "BasePlayerManual.h"
#include "Pawn/BasePawn.h"
#include "BaseLevel.h"
using namespace Game;
using namespace Game::Actor;
using namespace Game::Manual;

//==================================
//　コンストラクタ
//==================================
BasePlayerManual::BasePlayerManual()
{
	
}

//==================================
//　コンストラクタ
// @ _pawn --> 動かせるものをセットする
//==================================
BasePlayerManual::BasePlayerManual(Actor::BasePawn* _pawn)
{
	if (_pawn == nullptr) return;

	pawn_ = _pawn;

	
}

//==================================
//　デストラクタ
//==================================
BasePlayerManual::~BasePlayerManual()
{
	if (input_ == nullptr)
	{
		input_->Release();
		input_ = nullptr;
	}
}