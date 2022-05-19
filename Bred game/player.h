#pragma once

class player
{
public:
	int damageEnemy(npc& npcDamaged);
	int takeDamage(npc& npcDamaged);

private:
	int playerHit;
	int enemyHit;
};