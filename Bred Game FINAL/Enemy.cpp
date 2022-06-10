#include "Enemy.h"
#include "Combat.h"
#include <cstdlib>

Enemy::Enemy()
{
	dodgeChance = 0;
}

void Enemy::takeDamage(int damage)
{
	
	if (dodgeChance < (float)rand() / (float)RAND_MAX)
	{
		//dodge?
	}

	//add block too?
}