//====================================================
// Actor : 手作業
// System 動かせるプログラム
// author	千賀翔
// data 2019/12/14 作成
//====================================================
#pragma once

namespace Game
{
	class GameInput;
	namespace Actor
	{
		class BasePawn;
	}
	class BaseManual
	{
	public:
		
		BaseManual(Actor::BasePawn* _pawn);
		BaseManual();
		virtual~BaseManual();

		//更新操作
		virtual void UpdateManual() = 0;

		virtual void Release();

	public:
		template<class T, class ...Args>
		//生成クラス
		static T* CreateReturn(Args...args)
		{
			T* p = new T(args...);
			return p;
		}
	private:
	protected:
		//動かせるもの
		Actor::BasePawn *pawn_ = nullptr;
		//インプット
		GameInput* input_ = nullptr;
	};
}
