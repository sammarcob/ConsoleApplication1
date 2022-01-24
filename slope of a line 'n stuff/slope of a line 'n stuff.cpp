
/*
Author: Brooks Sammarco
Project Name: slope of a line
File Name: slope of a line 'n stuff.cpp
Purpose: inputs 2 points and finds the slope of the line connecting them
Pseudocode: has you input the x and y coordinates for both points, then runs it through an equation that finds the slope of the two points. it also determines
if the slope in infnite by checking if both points have the same x value. it also checks if the points are in the same place.
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