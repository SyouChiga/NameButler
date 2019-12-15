//====================================================
// BaseManager : ว๎ี
// System@ว๎ี
// author	็๊ใฤ
// data 2019/12/15 ์ฌ
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

		//ํ
		virtual void Release();
	private:

	};
}
