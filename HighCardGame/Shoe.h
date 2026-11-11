#pragma once
class Shoe
{
private:
	int suit;
	int	number;
	int provNumber;

public:
	Shoe();//コンストラクタ
	void hit(int* cards);//内部で乱数により数を決定して保持
	int getNumber();//内部で決定した数を返す
	void showNumber(); //保持している数を表示する関数
};