#pragma once
#include <string>
using namespace std;

class animal
{
public:
	animal();
	animal(string name, float weight, string species);
	animal(animal& a);
	void setData(string name, float weight, string species);
	string getName();
	float getWeight();
	string getSpecies();
	void setName(string name);
	void setWeight(float weight);
	void setSpecies(string species);


private:
	string n;
	float w;
	string s;


};

