//====================================================
// BasePawn : 歩
// System キーボードや、マウスなど、手で動かすもの
// author	千賀翔
// data 2019/12/14 作成
//====================================================
#pragma once
#include "BaseActor.h"



namespace Game
{
	class BaseManual;
	namespace Actor
	{
		class BasePawn : public BaseActor
		{
		public:
			BasePawn();
			virtual ~BasePawn();


			virtual void Init() = 0;
			virtual void Update() = 0;
			virtual void Draw() = 0;
			virtual void Uninit() = 0;

			virtual void Manual(BaseManual* _manual);


		private:
			//ユーザー自身の操作Update
			virtual void UpdateManual();
		protected:
			//手作業するための変数
			BaseManual* manual_ = nullptr;
		};
	}
}