//====================================================
// Actor : 手作業
//====================================================
#include "GameInput.h"
#include "BaseManual.h"
#include "Pawn/BasePawn.h"
#include "BaseLevel.h"


using namespace Game;
using namespace Game::Actor;

//==================================
//　コンストラクタ
//==================================
BaseManual::BaseManual()
{
	input_ = Game::BaseLevel::GetGameInput();
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