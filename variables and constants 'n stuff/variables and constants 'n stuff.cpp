/*
Project Name: Variables and Constants 
Author:Brooks Sammarco
File Name: variables and constants 'n stuff.cpp
Purpose: print bools, ints, chars, strings and doubles.
Pseudocode: initializes prints 1 bool, 3 ints, 3 chars, 3 strings and 3 doubles.
Matinence Log:
9/16/21: wrote the ints and strings
9/17/21: wrote the bool, doubles and chars
9/20/21: wrote the constants and comments
*/


#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
using namespace std;


int main()
{
	int y = 5;
	int e = 6;
	int s = 7;
	printf("%i\n", y);
	printf("%i\n", e);
	printf("%i\n", s);
	_getch();
	system("CLS");
	string h = "toast";
	string a = "alsotoast";
	string i = "stilltoast";
	cout<< h << endl;
	cout<< a << endl;
	cout<< i << endl;
	_getch();
	system("CLS"); 
	double k = -3;
	double l = -2;
	double c = -1;
	printf("%lf\n", k);
	printf("%lf\n", l);
	printf("%lf\n", c);
	_getch();
	system("CLS");
	char _32 = 'x';
	char _36 = 'y';
	char _40 = 'z';
	printf("%c\n", _32);
	printf("%c\n", _36);
	printf("%c\n", _40);
	_getch();
	system("CLS");
	printf("this is how many toast i have:");
	_getch();
	bool toast = false;
	cout << ("%i\n", toast);
	_getch();
	system("CLS");
	const float g = 9.8; //acceleration from gravity in m/s²
	const float p = 3.0e8; //speed of light in m/s
	const float n = 6.02214076; //avogadro’s number
	const float j = 1.38064852; //boltzmann's constant
	const float m = 6.62607004; //Planck's Constant
	cout << g << endl;
	cout << p << endl;
	cout << n << endl;
	cout << j << endl;
	cout << m << endl;
	return 0;
}