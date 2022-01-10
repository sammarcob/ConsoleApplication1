/*
Author: Brooks Sammarco
pair programming partner: Slater Swart
Project Name: square root reducer
File Name: square root reducer 'n stuff
Purpose: give you the square roots of any whole number you input
Pseudocode: finds the factor and input, then reduces them both to find the square roots
Maintenance Log:
1/7/22: wrote the rot reducer function 
1/10/22: finished 
*/

#include <iostream>
#include <stdlib.h> 
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <vector>
#include <math.h>
using namespace std;

int rootReducer(int num1)
{
	int factor = 1;
	for (int i = 1; i <= num1; i++)
	{
		if (num1 % (i * i) == 0)
		{
			factor = i;
		}
	}
	return factor;
}

int main()
{
	int num1;
	int factor;
	char sqrtSymbol = 251;
	
	printf("input the number you want to try to reduce\n");
	cin >> num1;
	factor = rootReducer(num1);
	num1 = num1 / factor;
	num1 = num1 / factor;
	system("CLS");
	cout << factor << sqrtSymbol << num1 << endl;
	return 0;
}

