//====================================================
// Actor : ����
//====================================================
#include "GameInput.h"
#include "BaseManual.h"
#include "Pawn/BasePawn.h"
#include "BaseLevel.h"


using namespace Game;
using namespace Game::Actor;

//==================================
//�@�R���X�g���N�^
//==================================
BaseManual::BaseManual()
{
	input_ = Game::BaseLevel::GetGameInput();
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