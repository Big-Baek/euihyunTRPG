#include "GameManager.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;



GameManager::GameManager()
{
	string name;
	cout << "�̸� �Է�" << endl;
	cin >> name;
	Charactor* warrior = Charactor::getinstance(name);
	cout << "ȯ���մϴ�";
}

GameManager::~GameManager()
{
}

void GameManager::Battle_start()
{
}
