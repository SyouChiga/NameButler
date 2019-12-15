//====================================================
//  PlayerFieldmanual : �v���C���[���t�B�[���h�������
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
//�@�R���X�g���N�^
//==================================
PlayerFieldManual::PlayerFieldManual()
{

}

//==================================
//�@�R���X�g���N�^
// @ _pawn --> ����������̂��Z�b�g����
//==================================
PlayerFieldManual::PlayerFieldManual(BasePawn* _pawn)
{
	if (_pawn == nullptr) return;

	pawn_ = _pawn;

	pawn_->Manual(this);
}

//==================================
//�@�f�X�g���N�^
//==================================
PlayerFieldManual::~PlayerFieldManual()
{

}

//==================================
//�@UpdateManual
//�@�X�V����
//==================================
void PlayerFieldManual::UpdateManual()
{
	
	//position���擾
	Vector2 local_vector2 = pawn_->Position();

	if (input_->InputDown(VK_SPACE))
	{
		printf("a");
	}

	input_->Update();
}