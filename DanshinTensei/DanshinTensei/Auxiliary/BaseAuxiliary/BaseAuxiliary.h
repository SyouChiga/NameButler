//====================================================
// BaseAuxiliary : �⏕
// System �⏕�ϐ��̃x�[�X�N���X
// author	�����
// data 2019/12/14 �쐬
//====================================================

#pragma once

namespace Game
{
	class BaseAuxiliary
	{
	public:
		BaseAuxiliary();
		virtual ~BaseAuxiliary();

		//Init�N���X
		virtual void Init() = 0;
		//�폜�N���X
		virtual void Release();
	public:
		template<class T>
		//�����N���X
		static T* CreateReturn()
		{
			T* p = new T();
			p->Init();
			return p;
		};
		template<class T, class ...Args>
		//�����N���X
		static T* CreateReturn(Args...args)
		{
			T* p = new T(args...);
			p->Init();
			return p;
		};
	};
}