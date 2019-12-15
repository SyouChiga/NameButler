//====================================================
// Actor : 役者
//====================================================
#include "BaseActor.h"

using namespace Game;
using namespace Game::Auxiliary;

//==================================
//　コンストラクタ
//==================================
BaseActor::BaseActor()
{

};

//==================================
//　デストラクタ
//==================================
BaseActor::~BaseActor()
{

}

//==================================
//　Release
//　自分自身を削除
//==================================
void BaseActor::Release()
{
	if (this == nullptr) return;
	this->Uninit();
	delete this;
}

//==================================
//　Position
//　Positionを返す
//==================================
const Auxiliary::Vector2& BaseActor::Position()
{
	return vector2_;
}

//==================================
//　Position
//　Positionを返す
//==================================
void BaseActor::Position(const Auxiliary::Vector2 _vector2)
{
	vector2_ = _vector2;
}
