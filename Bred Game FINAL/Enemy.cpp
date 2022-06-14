#include "Enemy.h"
#include "Combat.h"
#include <iostream>
using namespace std;
//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADDING EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEENEMY NAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMES field?
Enemy::Enemy()
{
	
	stamina = 2;
}

void Enemy::takeDamage(int damage)
{
	
	//not needed

	
}
int Enemy::getMove()
{
	int move;

	move = 1 + rand() % 3;
	

	return move;
}
int Enemy::doDamage()
{
	stamina--;
	if (stamina <= -1)
	{
		cout << name << " tried to hit you, but he was too tired\n";
		stamina = 0;
		return 0;
	}
	else
	{
		return attackDamage;
	}
}
int Enemy::relax()
{
	stamina += 2;

	return stamina;
}