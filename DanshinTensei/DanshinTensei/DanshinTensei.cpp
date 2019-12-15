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
#include <math.h>
#include "BaseLevel.h"
#include "LevelManager/LevelManager.h"

static int mStartTime;      //測定開始時刻
static int mCount;          //カウンタ
static float mFps;          //fps
static const int N = 60;	//平均を取るサンプル数
static const int FPS = 60;	//設定したFPS

using namespace Game;
using namespace Game::Manager;

LevelManager* manager;

bool Update();
void Wait();
int main()
{
	manager = new LevelManager();

	while(Game::BaseLevel::GetGameInput()->InputMomentDown(VK_SPACE) == false)
	{
		Update();	//更新
		Wait();		//待機
	}

	manager->Uninit();

	_CrtDumpMemoryLeaks();
	
}

bool Update() {
	if (mCount == 0) { //1フレーム目なら時刻を記憶
		mStartTime = (int)timeGetTime();
	}
	if (mCount == N) { //60フレーム目なら平均を計算する
		int t = (int)timeGetTime();
		mFps = 1000.f / ((t - mStartTime) / (float)N);
		mCount = 0;
		mStartTime = t;
	}
	manager->Update();
	manager->Draw();
	mCount++;
	return true;
}

void Wait() {
	int tookTime = (int)timeGetTime() - mStartTime;	//かかった時間
	int waitTime = mCount * 1000 / FPS - tookTime;	//待つべき時間
	if (waitTime > 0) {
		Sleep((DWORD)waitTime);	//待機
	}
}