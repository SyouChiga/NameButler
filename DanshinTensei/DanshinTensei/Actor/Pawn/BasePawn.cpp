//====================================================
// BasePawn : ��
//====================================================
#include "BasePawn.h"
#include "BaseManual.h"


using namespace Game::Actor;

//==================================
//�@�R���X�g���N�^
//==================================
BasePawn::BasePawn()
{

};

//==================================
//�@�f�X�g���N�^
//==================================
BasePawn::~BasePawn()
{
	if (manual_ != nullptr)
	{
		manual_->Release();
	}
}

//==================================
//�@UpdateManual
// ���[�U�[���g��
//==================================
void BasePawn::UpdateManual()
{
	manual_->UpdateManual();
}
//==================================
//�@Manual
// Manual�̃Z�b�g
//==================================
void BasePawn::Manual(Game::BaseManual* _manual)
{
	manual_ = _manual;
}
