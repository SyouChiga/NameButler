//====================================================
// Actor : 役者
// System オブジェクト
// author	千賀翔
// data 2019/12/14 作成
//====================================================
#pragma

#include "Vector2/Vector2.h"

namespace Game
{
	class BaseActor
	{
	public:
		BaseActor();
		virtual ~BaseActor();

		virtual void Init()   = 0;
		virtual void Update() = 0;
		virtual void Draw()   = 0;
		virtual void Uninit() = 0;

		virtual void Release();

	public:

		const Auxiliary::Vector2& Position();
		void  Position(const Auxiliary::Vector2 _vector2);

	public:
		template<class T>
		//生成クラス
		static T* CreateReturn()
		{
			T* p = new T();
			p->Init();
			return p;
		}
		template<class T, class ...Args>
		//生成クラス
		static T* CreateReturn(Args...args)
		{
			T* p = new T(args...);
			p->Init();
			return p;
		}

	protected:
		//座標
		Auxiliary::Vector2 vector2_;
		
	};
}