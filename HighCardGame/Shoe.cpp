#include <iostream>
#include<ctime>
#include"Shoe.h"
using namespace std;


Shoe::Shoe()
{
	number = 0;
	suit = 0;
}
void Shoe::hit(int* cards)//内部で乱数により数を決定して保持
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
	suit = provNumber / 13;
	number = provNumber % 13 + 1;
}
int Shoe::getNumber()//内部で決定した数を返す
{
	return number;
}
void Shoe::showNumber() //保持している数を表示する関数
{
	string suits[4] = {
		"スペード","ハート","ダイヤ","クラブ"
	};
	cout << suits[suit] << number;
}