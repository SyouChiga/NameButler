//====================================================
// Actor : ����
//====================================================
#include "GameInput.h"
#include "BaseManual.h"
#include "Pawn/BasePawn.h"

using namespace Game;
using namespace Game::Actor;

//==================================
//�@�R���X�g���N�^
//==================================
BaseManual::BaseManual()
{
	input_ = new GameInput();
	input_->Init();
}
//==================================
//�@�R���X�g���N�^
// @ _pawn --> ����������̂��Z�b�g����
//==================================
BaseManual::BaseManual(BasePawn* _pawn)
{
	if (_pawn == nullptr) return;

	pawn_ = _pawn;
	
}

//==================================
//�@�f�X�g���N�^
//==================================
BaseManual::~BaseManual()
{
	input_->Release();
}

//==================================
//�@Release
//�@�������g���폜
//==================================
void BaseManual::Release()
{
	if (this == nullptr) return;

	delete this;
}