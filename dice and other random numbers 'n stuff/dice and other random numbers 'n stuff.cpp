// dice and other random numbers 'n stuff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	srand(0);
	srand((unsigned)time(NULL));
	int min = 1;
	int max = 6;
	int _6SidedDie;
	_6SidedDie = min + rand() % (max - min + 1);
	
	cout << "die:" << _6SidedDie << endl;
	
	return 0;
}

