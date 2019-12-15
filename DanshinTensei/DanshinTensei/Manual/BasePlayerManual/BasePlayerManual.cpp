//====================================================
//  BasePlayerManual : �v���C���[������
//====================================================
#include "BasePlayerManual.h"
#include "Pawn/BasePawn.h"

using namespace Game;
using namespace Game::Actor;
using namespace Game::Manual;

//==================================
//�@�R���X�g���N�^
//==================================
BasePlayerManual::BasePlayerManual()
{

}

//==================================
//�@�R���X�g���N�^
// @ _pawn --> ����������̂��Z�b�g����
//==================================
BasePlayerManual::BasePlayerManual(BasePawn* _pawn)
{
	if (_pawn == nullptr) return;

	pawn_ = _pawn;
}

//==================================
//�@�f�X�g���N�^
//==================================
BasePlayerManual::~BasePlayerManual()
{

}