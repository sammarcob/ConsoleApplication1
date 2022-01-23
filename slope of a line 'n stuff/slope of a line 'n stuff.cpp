
/*
Author: Brooks Sammarco
Project Name: personal data
File Name: personal data 'n stuff.cpp
Purpose: collects and varifies personal info
Pseudocode: has a struct that has strings and ints for the data. inside a big while loop, the main function asks for the user to input the data cia cin, then the data
is read back to them before asking if the data is correct. if it is, it breaks and returns 0, if the user says its incorrect, it continues the while loop and has them put the data in again.
Maintenance Log:
1/22/22: wrote it all.
*/

#include <stdlib.h> 
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

struct points
{
	float x1;
	float y1;
	float x2;
	float y2;
	float ySlope;
	float xSlope;
	float slope;
};

int main()
{
	struct points p;
	while (1 < 2)
	{
		printf("enter the x of the first point:\n");
		cin >> p.x1;
		system("CLS");
		printf("enter the y of the first point:\n");
		cin >> p.y1;
		system("CLS");
		printf("enter the x of the second point:\n");
		cin >> p.x2;
		system("CLS");
		printf("enter the y of the second point:\n");
		cin >> p.y2;
		system("CLS");
		if (p.x1 == p.x2 && p.y1 == p.y2)
		{
			printf("you inputed the same points\n");
			_getch();
			system("CLS");
			continue;
		}
		else if (p.x1 == p.x2)
		{
			printf("the slope is infinite\n");
			_getch();
			
			return 0;
		}
		break;
	}
	p.slope = (p.y2 - p.y1) / (p.x2 - p.x1);
	cout << p.slope;


	return 0;
}