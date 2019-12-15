//====================================================
// Actor : ����
// System ��������v���O����
// author	�����
// data 2019/12/14 �쐬
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

		//�X�V����
		virtual void UpdateManual() = 0;

		virtual void Release();

	public:
		template<class T, class ...Args>
		//�����N���X
		static T* CreateReturn(Args...args)
		{
			T* p = new T(args...);
			return p;
		}
	private:
	protected:
		//�����������
		Actor::BasePawn *pawn_ = nullptr;
		//�C���v�b�g
		GameInput* input_ = nullptr;
	};
}
