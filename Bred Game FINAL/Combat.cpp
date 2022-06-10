#include "Combat.h"
#include "Enemy.h"
#include <iostream>



using namespace std;

Combat::Combat(Enemy _enemy)
{
	enemy = _enemy;
}

void Combat::exicuteCombat(PlayerStats player)
{
	int choice;
	cout << "  has appeared!\n"; // output name of random enemy

	while (player.Health > 0 && enemy.health > 0)
	{
		cout << "1. Attack!\n\n2. Block!\n";
		cin >> choice;
		system("CLS");

		if (choice == 1)
		{
			enemy.takeDamage(player.attackDamage);
		}
		else if (choice == 2)
		{
			//add dodging
		}

	}
}