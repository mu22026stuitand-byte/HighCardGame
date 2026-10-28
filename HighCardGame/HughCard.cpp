#include <iostream>
#include<ctime>
#include"HughCard.h"
using namespace std;


Player::Player()
{
	number = 0;
	Player::setName("NoName");
}
void::Player::setName(const char* newName)
{
	if (newName == nullptr)
	{
		return;
	}
	strncpy_s(name, newName, sizeof(newName) - 1);
	name[sizeof(name) - 1] = '\0';
}
void Player::hit()//内部で乱数により数を決定して保持
{
	number = rand() % 13 + 1;//1～13のどれか
}
int Player::getNumber()//内部で決定した数を返す
{
	return number;
}
void Player::showNumber() //保持している数を表示する関数
{
	cout << number;
}
void Player::showName()
{
	cout << name;
}
