#pragma once
class Player
{
private:
	int suit;
	int	number;
	const char* name;
	int provNumber;

public:
	Player();//コンストラクタ
	Player(const char* newName);
	void hit(int* cards);//内部で乱数により数を決定して保持
	int getNumber();//内部で決定した数を返す
	void showNumber(); //保持している数を表示する関数
	void showName();//名前を表示
};