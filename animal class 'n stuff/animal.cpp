#include "animal.h"

animal::animal()
{
	n = "";
	w = 0;
	s = "";
}
animal::animal(string name, float weight, string species)
{
	n = name;
	w = weight;
	s = species;
}
animal::animal(animal& a)
{
	n = a.n;
	w = a.w;
	s = a.s;
}
void animal::setData(string name, float weight, string species)
{
	n = name;
	w = weight;
	s = species;
}
string animal::getName()
{
	return n;
}
float animal::getWeight()
{
	return w;
}
string animal::getSpecies()
{
	return s;
}