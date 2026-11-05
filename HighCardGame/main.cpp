#include <iostream>
#include<ctime>
#include"Player.h"
using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));
	

	//52枚のカードを管理する配列
	int cards[52] = { 0 };
	//名前を決めっ
	char newname[16];
	cout << "名前を入力" << endl<<">";
	cin >> newname;
	Player player(newname);
	Player CPU("CPU");
	
	//数字を決めいっ
	player.hit(cards);
	CPU.hit(cards);
	
	//プレイヤーの数字を表示じゃ
	player.showName();
	cout << "の数字は";
	player.showNumber();
	cout << endl << endl;
	
	//CPUの表示
	CPU.showName();
	cout << "の数字は";
	CPU.showNumber();
	cout << endl;
	
	//勝敗判定
	if (player.getNumber() > CPU.getNumber())
	{
		player.showName();
		cout << "の勝ち" << endl;
	}
	else if (player.getNumber() < CPU.getNumber())
	{
		CPU.showName();
		cout << "の勝ち" << endl;
	}
	else
	{
		cout << "引き分け" << endl;
	}

}