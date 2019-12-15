//====================================================
// LevelManager : Level管理
//====================================================
#include "LevelManager.h"
#include "BaseLevel.h"
#include "Title/TitleLevel.h"
using namespace Game;
using namespace Game::Manager;

//==================================
//　コンストラクタ
//==================================
LevelManager::LevelManager()
{
	ChangeLevel(new Level::TitleLevel());
};

//==================================
//　デストラクタ
//==================================
LevelManager::~LevelManager()
{

}

//==================================
//　レベルの切り替え
// @ _changeLevel --> レベルの切り替え先 
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
//現在のレべルのゲット
//==================================
Game::BaseLevel* LevelManager::GetLevel()
{
	if (level_ == nullptr) return nullptr;

	return level_;
}

//==================================
//　Init
//==================================
void LevelManager::Init()
{
	level_->Init();
}

//==================================
//　Uninit
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
//　Update
//==================================
void LevelManager::Update()
{
	level_->Update();
}

//==================================
//　Draw
//==================================
void LevelManager::Draw()
{
	level_->Draw();
}