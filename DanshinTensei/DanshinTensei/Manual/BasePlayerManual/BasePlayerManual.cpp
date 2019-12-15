//====================================================
//  BasePlayerManual : プレイヤー操作基盤
//====================================================
#include "BasePlayerManual.h"
#include "Pawn/BasePawn.h"

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
BasePlayerManual::BasePlayerManual(BasePawn* _pawn)
{
	if (_pawn == nullptr) return;

	pawn_ = _pawn;
}

//==================================
//　デストラクタ
//==================================
BasePlayerManual::~BasePlayerManual()
{

}