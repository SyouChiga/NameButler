//====================================================
// LevelManager : Level管理
// System　Level管理
// author	千賀翔
// data 2019/12/15 作成
//====================================================
#pragma once

#include "BaseManager.h"


namespace Game
{
	class BaseLevel;
	namespace Manager
	{
		class LevelManager : public BaseManager
		{
		public:
			LevelManager();
			~LevelManager();

			virtual void  Init()   override;
			virtual void  Uninit() override;
			virtual void  Update() override;
			virtual void  Draw()   override;

			//現在のレべルのゲット
			Game::BaseLevel* GetLevel();

		private:
			//レベルの切り替え
			void ChangeLevel(Game::BaseLevel* _changeLevel);

		private:
			//現在のレベル
			Game::BaseLevel* level_ = nullptr;
		};
	}
}
