#pragma once
#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;
#include "npc.h"

npc::npc()
{
	eName = "";
	eHealth = 0;
	eDamage = 0;
}
npc::npc(string n, int h, int d)
{
	eName = n;
	eHealth = h;
	eDamage = d;
}
npc::npc(npc& npc)
{
	eName = npc.eName;
	eHealth = npc.eHealth;
	eDamage = npc.eDamage;
}
void npc::setData(string n, int h, int d)
{
	eName = n;
	eHealth = h;
	eDamage = d;
}
string npc::getName()
{
	return eName;
}
int npc::getHealth()
{
	return eHealth;
}
int npc::getDamage()
{
	return eDamage;
}
void npc::takeDamage()
{

}
void npc::giveDamage()
{

}
string npc::getRanPhrase()
{
	if (phrases.size() > 0)
	{
		int i = rand() % phrases.size();
		return phrases[i];
	}
	
}
void npc::addPhrase(string newPhrase)
{
	phrases.push_back(newPhrase);
}