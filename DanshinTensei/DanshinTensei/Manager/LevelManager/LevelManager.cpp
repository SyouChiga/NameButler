//====================================================
// LevelManager : Level�Ǘ�
//====================================================
#include "LevelManager.h"
#include "BaseLevel.h"
#include "Title/TitleLevel.h"
using namespace Game;
using namespace Game::Manager;

//==================================
//�@�R���X�g���N�^
//==================================
LevelManager::LevelManager()
{
	ChangeLevel(new Level::TitleLevel());
};

//==================================
//�@�f�X�g���N�^
//==================================
LevelManager::~LevelManager()
{

}

//==================================
//�@���x���̐؂�ւ�
// @ _changeLevel --> ���x���̐؂�ւ��� 
//==================================
void LevelManager::ChangeLevel(Game::BaseLevel* _changeLevel)
{
	if (level_ != nullptr)
	{
		level_->Uninit();
		level_ = nullptr;
	}

	_changeLevel->Init();

	level_ = _changeLevel;
}

//==================================
//���݂̃��׃��̃Q�b�g
//==================================
Game::BaseLevel* LevelManager::GetLevel()
{
	if (level_ == nullptr) return nullptr;

	return level_;
}

//==================================
//�@Init
//==================================
void LevelManager::Init()
{
	level_->Init();
}

//==================================
//�@Uninit
//==================================
void LevelManager::Uninit()
{
	if (level_ != nullptr)
	{
		level_->Uninit();
		level_ = nullptr;
	}

	this->Release();
}

//==================================
//�@Update
//==================================
void LevelManager::Update()
{
	level_->Update();
}

//==================================
//�@Draw
//==================================
void LevelManager::Draw()
{
	level_->Draw();
}