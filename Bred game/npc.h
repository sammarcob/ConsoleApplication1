#pragma once
#include <string>
#include <stdio.h>

using namespace std;

class npc
{
public:

	void jelly(int &eHealth, int &eDamage, string &jellyName);
	

	void butter(int eHealth, int eDamage, string butterName);


	void jam(int eHealth, int eDamage, string jamName);


	void chad(int eHealth, int eDamage, string chadName);


	void molassas(int eHealth, int eDamage, string molassasName);


	void peanutButter(int eHealth, int eDamage, string penutbutterName);


	// do stuff with setters getters and private stuff ig

private:
	string jellyName = "";
	int eHealth = 0;
	int eDamage = 0;

};