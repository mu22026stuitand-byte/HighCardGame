#include <iostream>
#include<ctime>
#include"Player.h"
using namespace std;


Player::Player()
{
	number = 0;
	suit = 0;	

	Player("Noname");
}
Player::Player(const char* newName)
{
	number = 0;
	suit = 0;
	if (newName == nullptr)
	{
		return;
	}
	else
	{
		name = newName;
	}
	
}

void Player::hit(int*cards)//内部で乱数により数を決定して保持
{
	int count = 0;
	for (int i = 0;i < 52;i++)
	{
		if (cards[i] == 1)
		{
			count++;
		}
	}
	if (count == 52) {
		for (int i = 0;i < 52;i++) {
			cards[i] = 0;
		}
	}
	do
	{
		provNumber = rand() % 52;//0～51のどれか
	} while (cards[provNumber]);

	cards[provNumber] = 1;
	suit =  provNumber/13;
	number = provNumber%13+1;
}
int Player::getNumber()//内部で決定した数を返す
{
	return number;
}
void Player::showNumber() //保持している数を表示する関数
{
	string suits[4] = {
		"スペード","ハート","ダイヤ","クラブ"
	};
	cout <<suits[suit]<< number;
}
void Player::showName()
{
	cout << name;
}
