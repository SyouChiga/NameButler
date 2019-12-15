//====================================================
// GameInput : 補助
//====================================================

#include <Windows.h>
#include "conioex/conionex_Input/conionexInput.h"
#include "GameInput.h"
using namespace Game;



//==================================
//　コンストラクタ
//==================================
GameInput::GameInput()
{

};

//==================================
//　デストラクタ
//==================================
GameInput::~GameInput()
{

}

//==================================
//　Init
//==================================
void GameInput::Init()
{
	inputDown_.resize(256);
	inputMomentDown_.resize(256);
	inputRelease_.resize(256);
}

//==================================
//　Update
//==================================
void GameInput::Update()
{
	//キーボードの状態を取得
			//キーボード情報
	BYTE keyInput_[256];


	for (unsigned int nCntKey = 0; nCntKey < 256; nCntKey++)
	{
		if (inport(nCntKey))
		{
			keyInput_[nCntKey] = true;
		}
		else
		{
			keyInput_[nCntKey] = false;
		}
		inputMomentDown_[nCntKey] = (inputDown_[nCntKey] ^ keyInput_[nCntKey]) & keyInput_[nCntKey];
		inputRelease_[nCntKey] = (inputDown_[nCntKey] ^ keyInput_[nCntKey]) & ~keyInput_[nCntKey];


		inputDown_[nCntKey] = keyInput_[nCntKey];
	}

	

}

//==================================
//　Uninit
//==================================
void GameInput::Uninit()
{

}

//==================================
//　Release
//　自分自身を削除
//==================================
void GameInput::Release()
{
	if (this == nullptr) return;

	delete this;
}
//==================================
//　InputDown
//押し続け
// @ _inputID --> 入力ID
// bool --> 入力したかどうか
//==================================
bool GameInput::InputDown(unsigned int _inputID)
{
	return (inputDown_[_inputID] & 0x01) ? TRUE : FALSE;
}

//==================================
//　InputMomentDown
//押した瞬間
// @ _inputID --> 入力ID
// bool --> 入力したかどうか
//==================================
bool GameInput::InputMomentDown(unsigned int _inputID)
{
	return (inputMomentDown_[_inputID] & 0x01) ? TRUE : FALSE;
}

//==================================
//　InputRelease
//離した瞬間
// @ _inputID --> 入力ID
// bool --> 入力したかどうか
//==================================
bool GameInput::InputRelease(unsigned int _inputID)
{
	return (inputRelease_[_inputID] & 0x01) ? TRUE : FALSE;
}


