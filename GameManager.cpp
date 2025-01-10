#include "GameManager.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;



GameManager::GameManager()
{
	string name;
	cout << "이름 입력" << endl;
	cin >> name;
	Charactor* warrior = Charactor::getinstance(name);
	cout << "환영합니다";
}

GameManager::~GameManager()
{
}

void GameManager::Battle_start()
{
}
