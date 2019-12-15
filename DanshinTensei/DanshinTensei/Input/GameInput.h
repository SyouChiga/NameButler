//====================================================
// GameInput : “ü—ÍŠî”Õ
// System “ü—ÍƒvƒƒOƒ‰ƒ€
// author	ç‰êãÄ
// data 2019/12/15 ì¬
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
		
		//íœ
		void Release();

		//‰Ÿ‚µ‘±‚¯
		bool InputDown      (unsigned int _inputID);
		//‰Ÿ‚µ‚½uŠÔ
		bool InputMomentDown(unsigned int _inputID);
		//—£‚µ‚½uŠÔ
		bool InputRelease   (unsigned int _inputID);

	protected:


		//‰Ÿ‚µ‘±‚¯
		std::vector<int> inputDown_;
		//‰Ÿ‚µ‚½uŠÔ
		std::vector<int> inputMomentDown_;
		//—£‚µ‚½uŠÔ
		std::vector<int> inputRelease_;
	};
}
