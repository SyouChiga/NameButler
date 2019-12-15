//====================================================
// LevelManager : Level�Ǘ�
// System�@Level�Ǘ�
// author	�����
// data 2019/12/15 �쐬
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

			//���݂̃��׃��̃Q�b�g
			Game::BaseLevel* GetLevel();

		private:
			//���x���̐؂�ւ�
			void ChangeLevel(Game::BaseLevel* _changeLevel);

		private:
			//���݂̃��x��
			Game::BaseLevel* level_ = nullptr;
		};
	}
}
