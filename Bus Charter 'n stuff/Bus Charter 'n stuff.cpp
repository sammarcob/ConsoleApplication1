/*
Author: Brooks Sammarco
Project Name: Bus Charter
File Name: Bus charter 'n stuff.cpp
Purpose: makes a bus charter to decide the ammount of busses and vans you need for a tour
Pseudocode: writes code that asks for your name, number of people on your tour, then couculates the number of busses you need
			for all the people, then calculates the number of vans you need for the remaining people.
Maintenance Log:
10/6/21: started the code (20 lines)
10/7/21: Finished the code
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{
	int vans;
	int vanpeeps;
	int people;
	int buscap = 60;
	int busSum;
	string name;
	string input;

	printf("what is your first name?\n");
	cin >> name;
	system("CLS");


	printf("input the number of people on the tour %s; \n", name.c_str());
	cin >> people;
	busSum = people / buscap;
	printf("This is how many busses, %s: %i\n", name.c_str(), busSum);
	
	_getch();

	vanpeeps = people % buscap;

	vans = vanpeeps / 7 +1;
	printf("This is how many vans you need for the people not on busses, %s: %i\n", name.c_str(), vans);
	_getch();
	system("CLS");
	printf("you might have one more van than you need, but hey %s, it's always good to have one extra just in case :)\n", name.c_str());

	return 0;
}

