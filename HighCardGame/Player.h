#pragma once
#include"Shoe.h"
class Player:
protected Shoe
{
private:
	
	const char* name;
	int provNumber;

public:
	Player();//コンストラクタ
	Player(const char* newName);
	void showName();//名前を表示
};