#pragma once
#include <string>
#include <stdio.h>
#include <vector>
#include "nd.h"

using namespace std;

class npc
{
public:
	npc();
	npc(string n, int h, int d);
	npc(npc& npc);
	void setData(string n, int h, int d);
	string getName();
	int getHealth();
	int getDamage();
	string getRanPhrase();
	string getRanDeathPhrase();
	string getRanHurtPhrase();
	void addPhrase(string newPhrase);
	void addDeathPhrase(string newDeathPhrase);
	void addHurtPhrase(string newHurtPhrase);
	
private:
	vector <string> phrases;
	vector <string> deathPhrases{"gahhhhhh!!!", "noooooo!!!", "you've killed meeee!!!!"};
	vector <string> hurtPhrases{ "ouch!", "oof!", "That hurt!", "owww!" };
	string eName;
	int eHealth;
	int eDamage;

};