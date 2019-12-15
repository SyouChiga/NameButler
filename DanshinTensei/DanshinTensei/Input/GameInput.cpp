//====================================================
// GameInput : �⏕
//====================================================

#include <Windows.h>
#include "conioex/conionex_Input/conionexInput.h"
#include "GameInput.h"
using namespace Game;



//==================================
//�@�R���X�g���N�^
//==================================
GameInput::GameInput()
{

};

//==================================
//�@�f�X�g���N�^
//==================================
GameInput::~GameInput()
{

}

//==================================
//�@Init
//==================================
void GameInput::Init()
{
	inputDown_.resize(256);
	inputMomentDown_.resize(256);
	inputRelease_.resize(256);
}

//==================================
//�@Update
//==================================
void GameInput::Update()
{
	//�L�[�{�[�h�̏�Ԃ��擾
			//�L�[�{�[�h���
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
//�@Uninit
//==================================
void GameInput::Uninit()
{

}

//==================================
//�@Release
//�@�������g���폜
//==================================
void GameInput::Release()
{
	if (this == nullptr) return;

	delete this;
}
//==================================
//�@InputDown
//��������
// @ _inputID --> ����ID
// bool --> ���͂������ǂ���
//==================================
bool GameInput::InputDown(unsigned int _inputID)
{
	return (inputDown_[_inputID] & 0x01) ? TRUE : FALSE;
}

//==================================
//�@InputMomentDown
//�������u��
// @ _inputID --> ����ID
// bool --> ���͂������ǂ���
//==================================
bool GameInput::InputMomentDown(unsigned int _inputID)
{
	return (inputMomentDown_[_inputID] & 0x01) ? TRUE : FALSE;
}

//==================================
//�@InputRelease
//�������u��
// @ _inputID --> ����ID
// bool --> ���͂������ǂ���
//==================================
bool GameInput::InputRelease(unsigned int _inputID)
{
	return (inputRelease_[_inputID] & 0x01) ? TRUE : FALSE;
}


