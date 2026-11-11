#include <iostream>
#include<ctime>
#include"Player.h"
using namespace std;


Player::Player()
{
	Player("Noname");
}
Player::Player(const char* newName)
{
	if (newName == nullptr)
	{
		return;
	}
	else
	{
		name = newName;
	}
	
}

void Player::showName()
{
	cout << name;
}
