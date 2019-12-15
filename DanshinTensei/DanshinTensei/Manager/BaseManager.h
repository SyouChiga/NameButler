//====================================================
// BaseManager : ŠÇ—Šî”Õ
// System@ŠÇ—Šî”Õ
// author	ç‰êãÄ
// data 2019/12/15 ì¬
//====================================================
#pragma once


namespace Game
{
	class BaseManager
	{
	public:
		BaseManager();
		virtual ~BaseManager();


		virtual void  Init() = 0;
		virtual void  Uninit() = 0;
		virtual void  Update() = 0;
		virtual void  Draw() = 0;

		//íœ
		virtual void Release();
	private:

	};
}
