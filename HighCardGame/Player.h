#pragma once
#include"Shoe.h"
class Player:
public Shoe
{
private:
	
	const char* name;
	int provNumber;

public:
	Player();//コンストラクタ
	Player(const char* newName);
	void showName();//名前を表示
};