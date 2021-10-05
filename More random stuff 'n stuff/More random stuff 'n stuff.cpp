/*
Author: Brooks Sammarco
Project Name: More random stuff
File Name: More random stuff 'n stuff.cpp
Purpose: lets you choose the maximum and minimums for a float, int, and a char
Pseudocode: chooses a random float, then allows you to input a max and min for a random, float, char and int.
Maintenance Log:
10/4/21: started coding (wrote the random float and the chosen max and min int)
10/5/21: finish coding everything and write the maitenance log
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
	srand(0);
	srand((unsigned)time(NULL));

	float minfloat = 0.0;
	float maxfloat = 1.0;
	float f;
	
	int maxint;
	int minint;
	int i;

	char maxchar;
	char minchar;
	char c;

	f = (float)rand() / (float)RAND_MAX;
	printf("Random float(excluside of 1.0): %f\n", f);
	
	_getch();
	system("CLS");
	
	printf("input a maximum number for the int and hit enter:\n");
	cin >> maxint;
	printf("imput a minimum number for the int and hit enter:\n");
	cin >> minint;
	i = minint + rand() % (maxint - minint);
	printf("random int: %i\n", i);
	
	_getch();
	system("CLS");

	printf("input a maximum for the float and hit enter:\n");
	cin >> maxfloat;
	printf("input a minimum for the float and hit enter:\n");
	cin >> minfloat;
	f = minfloat + (float)(rand()) / ((float) RAND_MAX / (maxfloat - minfloat));
	printf("Random float: %f\n", f);
	
	_getch();
	system("CLS");

	printf("input a maximum for the character and hit enter:\n");
	cin >> maxchar;
	printf("input a minimum for the character and hit enter:\n");
	cin >> minchar;
	c = minchar + rand() % (maxchar - minchar + 1);
	printf("random character: %c\n", c);
	
	_getch();

	return 0;
}


