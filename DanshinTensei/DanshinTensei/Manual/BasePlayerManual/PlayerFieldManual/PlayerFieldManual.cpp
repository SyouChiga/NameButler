//====================================================
//  PlayerFieldmanual : プレイヤーがフィールドを歩く時
//====================================================
#include <InputEventFlags.h>
#include <Windows.h>
#include "GameInput.h"
#include "PlayerFieldManual.h"
#include "Pawn/BasePawn.h"

using namespace Game;
using namespace Game::Auxiliary;
using namespace Game::Actor;
using namespace Game::Manual;
using namespace Game::Manual::Player;


//==================================
//　コンストラクタ
//==================================
PlayerFieldManual::PlayerFieldManual()
{

}

//==================================
//　コンストラクタ
// @ _pawn --> 動かせるものをセットする
//==================================
PlayerFieldManual::PlayerFieldManual(BasePawn* _pawn)
{
	if (_pawn == nullptr) return;

	pawn_ = _pawn;

	pawn_->Manual(this);
}

//==================================
//　デストラクタ
//==================================
PlayerFieldManual::~PlayerFieldManual()
{

}

//==================================
//　UpdateManual
//　更新操作
//==================================
void PlayerFieldManual::UpdateManual()
{
	
	//positionを取得
	Vector2 local_vector2 = pawn_->Position();

	if (input_->InputDown(VK_SPACE))
	{
		printf("a");
	}

	input_->Update();
}