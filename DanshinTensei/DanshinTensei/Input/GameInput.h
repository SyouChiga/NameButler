//====================================================
// GameInput : ���͊��
// System ���̓v���O����
// author	�����
// data 2019/12/15 �쐬
//====================================================
#pragma



#include <vector>


namespace Game
{
	class GameInput
	{
	public:
		GameInput();
		~GameInput();

		void Init()   ;
		void Update() ;
		void Uninit() ;
		
		//�폜
		void Release();

		//��������
		bool InputDown      (unsigned int _inputID);
		//�������u��
		bool InputMomentDown(unsigned int _inputID);
		//�������u��
		bool InputRelease   (unsigned int _inputID);

	protected:


		//��������
		std::vector<int> inputDown_;
		//�������u��
		std::vector<int> inputMomentDown_;
		//�������u��
		std::vector<int> inputRelease_;
	};
}
