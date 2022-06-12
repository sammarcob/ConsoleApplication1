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
	
	

	//add block too?
}
int Enemy::getMove()
{
	int move;

	move = 1 + rand() % 2;
	//1 = attack
	//2 = block

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