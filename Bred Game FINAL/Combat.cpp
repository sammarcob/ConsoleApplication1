#include "Combat.h"
#include "Enemy.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>



using namespace std;

Combat::Combat(Enemy _enemy)
{
	enemy = _enemy;
}

void Combat::exicuteCombat(PlayerStats& player)
{
	int choice;
	bool debug = false;

	cout << "A " << enemy.name << " has appeared!\n"; // output name of random enemy

	while (player.Health > 0 && enemy.health > 0)
	{
		if (debug)
		{
			cout << "player attack: " << player.attackDamage << "enemy damage: " << enemy.attackDamage << "enemy stamina: " << enemy.stamina << endl;
		}
		cout << "Health = " << player.Health << endl << "Enemy Health = " << enemy.health << endl << "Stamina = " << player.stamina << "\n\n1. Attack!\n\n2. Block!\n\n3. Relax\n";
		cin >> choice;

		system("CLS");

		int enemyMove = enemy.getMove(); //telkls you what the enemy chooses

		if (choice == 1/*attack*/ && enemyMove == 1/*attack*/)
		{
			printf("You hit eachother!"); 
			
			enemy.health -= player.doDamage();
			player.Health -= enemy.doDamage();
			
			_getch();
			system("CLS");
		}
		else if (choice == 2/*block*/ && enemyMove == 1/*attack*/)
		{
			printf("You manage to block!");
			enemy.doDamage();
			_getch();
			system("CLS");
		}
		else if (choice == 2 && enemyMove == 2)
		{
			cout << "Your attacker blocked!\n";
			Sleep(30);
			cout << "...\n";
			Sleep(30);
			cout << "...\n";
			Sleep(30);
			cout << "...\n";
			Sleep(30);
			cout << "Well this is awkward...\n";
			_getch();
			system("CLS");
		}
		else if (choice == 1 && enemyMove == 2)
		{
			cout << "Your attacker blocked!\n";
			player.doDamage();
			_getch();
			system("CLS");
		}
		else if (choice == 1 && enemyMove == 3)
		{
			cout << "You attack while your enemy is relaxing and the hit lands!\n";
			enemy.health -= player.doDamage();
			enemy.relax();
		}
		else if (choice == 2 && enemyMove == 3)
		{
			cout << "Nothing happens. You're blocking while they're relaxing. What is happening?\n";
			enemy.relax();
		}
		else if (choice == 3 && enemyMove == 3)
		{
			cout << "You both decide to take some time to relax\n";
			player.relax();
			enemy.relax();
		}
		else if (choice == 3 && enemyMove == 1)
		{
			cout << "You get hit while relaxing!\n";
			player.Health -= enemy.doDamage();
		}
		else if (choice == 3 && enemyMove == 2)
		{
			cout << "Nothing happens. You're relaxing while they're blocking. What is happening?\n";
			player.relax();
		}
		

	}
}