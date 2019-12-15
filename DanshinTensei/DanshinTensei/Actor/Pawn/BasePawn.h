//====================================================
// BasePawn : ��
// System �L�[�{�[�h��A�}�E�X�ȂǁA��œ���������
// author	�����
// data 2019/12/14 �쐬
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
			//���[�U�[���g�̑���Update
			virtual void UpdateManual();
		protected:
			//���Ƃ��邽�߂̕ϐ�
			BaseManual* manual_ = nullptr;
		};
	}
}