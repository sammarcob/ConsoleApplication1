#pragma once
#include "Enemy.h"
#include "PlayerStats.h"

class Combat
{
public:
	Combat(Enemy _enemy);
	void exicuteCombat(PlayerStats player);



private:
	Enemy enemy;

};