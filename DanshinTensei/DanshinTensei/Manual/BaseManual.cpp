//====================================================
// Actor : 手作業
//====================================================
#include "GameInput.h"
#include "BaseManual.h"
#include "Pawn/BasePawn.h"

using namespace Game;
using namespace Game::Actor;

//==================================
//　コンストラクタ
//==================================
BaseManual::BaseManual()
{
	input_ = new GameInput();
	input_->Init();
}
//==================================
//　コンストラクタ
// @ _pawn --> 動かせるものをセットする
//==================================
BaseManual::BaseManual(BasePawn* _pawn)
{
	if (_pawn == nullptr) return;

	pawn_ = _pawn;
	
}

//==================================
//　デストラクタ
//==================================
BaseManual::~BaseManual()
{
	input_->Release();
}

//==================================
//　Release
//　自分自身を削除
//==================================
void BaseManual::Release()
{
	if (this == nullptr) return;

	delete this;
}