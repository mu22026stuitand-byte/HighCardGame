#include <iostream>
#include<ctime>
#include"Player.h"
using namespace std;


Player::Player()
{
	number = 0;
	suit = 0;
	provSuit = 0;
	provNumber = 0;
	Player("Noname");
}
Player::Player(const char* newName)
{
	number = 0;
	suit = 0;
	provSuit = 0;
	provNumber = 0;
	if (newName == nullptr)
	{
		return;
	}
	else
	{
	name = newName;
	}
	
}

void Player::hit()//内部で乱数により数を決定して保持
{
	do
	{
		provSuit  = rand() % 4;
		provNumber = rand() % 13;//0～12のどれか
	} while (!cards[provSuit][provNumber]);

	cards[provSuit][provNumber] = true;
	suit = provSuit;
	number = provNumber;
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
