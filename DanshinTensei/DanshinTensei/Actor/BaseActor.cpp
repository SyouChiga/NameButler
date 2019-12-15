//====================================================
// Actor : ����
//====================================================
#include "BaseActor.h"

using namespace Game;
using namespace Game::Auxiliary;

//==================================
//�@�R���X�g���N�^
//==================================
BaseActor::BaseActor()
{

};

//==================================
//�@�f�X�g���N�^
//==================================
BaseActor::~BaseActor()
{

}

//==================================
//�@Release
//�@�������g���폜
//==================================
void BaseActor::Release()
{
	if (this == nullptr) return;
	this->Uninit();
	delete this;
}

//==================================
//�@Position
//�@Position��Ԃ�
//==================================
const Auxiliary::Vector2& BaseActor::Position()
{
	return vector2_;
}

//==================================
//�@Position
//�@Position��Ԃ�
//==================================
void BaseActor::Position(const Auxiliary::Vector2 _vector2)
{
	vector2_ = _vector2;
}
