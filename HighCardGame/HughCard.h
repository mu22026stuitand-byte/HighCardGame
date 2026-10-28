#pragma once
class Player
{
private:
	int	number;
	char name[16];

public:
	Player();//コンストラクタ
	Player(const char* newName);
	void hit();//内部で乱数により数を決定して保持
	int getNumber();//内部で決定した数を返す
	void showNumber(); //保持している数を表示する関数
	void setName(const char* newName);//名前をセット
	void showName();//名前を表示
};