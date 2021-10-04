/*
Author: Brooks Sammarco
Project Name: dice and other random numbers
File Name: dice and other random numbers'n stuff.cpp
Purpose: To create a 6 sided die, a 12 sided die, a random upper case letter and a random float between 0.0 and 5.0. 
Pseudocode: rolls a 6 sided die, prints a random number between 1.0 and 5.0 and a random upper case letter
Maintenance Log:
9/21/21: started writing code
9/23/21: finished writing the code and comments
*/


#include <iostream>
#include <stdlib.h>
#include <time.h>
#include<conio.h>

using namespace std;
int main()
{
	srand(0);
	srand((unsigned)time(NULL));
	int min = 1;
	int max = 6;
	int _6SidedDie;
	_6SidedDie = min + rand() % (max - min + 1);
	
	cout << "6die:" << _6SidedDie << endl;
	_getch();
	system("CLS");
	int minimum = 1;
	int maximum = 12;
	int _12SidedDie;
	_12SidedDie = minimum + rand() % (maximum - minimum + 1);
	cout << "12die:" << _12SidedDie << endl;
	_getch();
	system("CLS");
	float rf;
	rf = (float)rand() * 5 / (float) RAND_MAX;
	cout << "Random float:" << rf << endl;
	_getch();
	system("CLS");
	char rl;
	rl = 'a' + rand() % 26 - 32;
	printf("Random letter: %c\n", rl);
	
	return 0;
}

