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
	void takeDamage();
	void giveDamage();
	string getRanPhrase();
	void addPhrase(string newPhrase);
	

private:
	vector <string> phrases;
	string eName;
	int eHealth;
	int eDamage;

};