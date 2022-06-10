#pragma once

class Enemy
{
public:
	Enemy();
	int health;
	int attackDamage;
	void takeDamage(int damage);
	float blockChance;
	float dodgeChance;


private:

};