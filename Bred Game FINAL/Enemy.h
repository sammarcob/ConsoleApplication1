#pragma once
#include <string>

class Enemy
{
public:
	Enemy();

	void takeDamage(int damage);
	int getMove();
	int doDamage();
	int relax();

	
	std::string name;
	int health;
	int attackDamage;
	
	int stamina = 2;

private:

};