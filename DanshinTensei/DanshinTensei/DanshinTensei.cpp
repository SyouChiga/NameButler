//=================================================================================
// DanshinTensei.cpp
// System ゲーム
// Author 千賀　翔
// Data 2019/12/14
//=================================================================================
#include <iostream>
#include <Windows.h>
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include "Pawn/BasePlayer/PlayerField/PlayerField.h"
#include "BasePlayerManual/PlayerFieldManual/PlayerFieldManual.h"

using namespace Game;

int main()
{
	Actor::Pawn::Player::PlayerField* player = BaseActor::CreateReturn<Actor::Pawn::Player::PlayerField>();
	BaseManual::CreateReturn<Manual::Player::PlayerFieldManual>(player);

	while (true)
	{
		player->Update();
	}

	player->Release();

	_CrtDumpMemoryLeaks();
	
}

