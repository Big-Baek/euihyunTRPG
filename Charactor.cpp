#include "Charactor.h"
#include <iostream>
#include <string>


using namespace std;
Charactor::Charactor(string name)//������
{
    this->name = name;
    this->level = 1;
    this->maxHealth = 200;
    this->health = maxHealth;
    this->attack = 30;
    this->experience = 0;
    this->max_experience = 100;
    this->gold = 0;
}

Charactor::~Charactor()
{
    delete instance;
    cout << "�޸� ���� ��ȯ" << endl;
}



Charactor* Charactor::getinstance(string name)
{
    if (instance == nullptr) {
        instance = new Charactor(name);
    }
    return instance;
}

void Charactor::display_Status()
{
    cout << "����: " << level << endl;
    cout << "�ִ�ü��: " << maxHealth << endl;
    cout << "���ݷ�" << attack << endl;
}

void Charactor::LevelUp()
{
    if (level > 10) {
        this->level += 1;
        this->maxHealth += 20;
        this->attack += 5;
    }
}

void Charactor::UseItem()
{
    

}

void Charactor::visitShop()
{
}
