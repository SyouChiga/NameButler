//====================================================
// BaseAuxiliary : 補助
// System 補助変数のベースクラス
// author	千賀翔
// data 2019/12/14 作成
//====================================================

#pragma once

namespace Game
{
	class BaseAuxiliary
	{
	public:
		BaseAuxiliary();
		virtual ~BaseAuxiliary();

		//Initクラス
		virtual void Init() = 0;
		//削除クラス
		virtual void Release();
	public:
		template<class T>
		//生成クラス
		static T* CreateReturn()
		{
			T* p = new T();
			p->Init();
			return p;
		};
		template<class T, class ...Args>
		//生成クラス
		static T* CreateReturn(Args...args)
		{
			T* p = new T(args...);
			p->Init();
			return p;
		};
	};
}