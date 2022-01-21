/*
Author: Brooks Sammarco
Project Name: fraction reducer
File Name: fraction reducer 'n stuff.cpp
Purpose: simplifys any fraction you input 
Pseudocode: establishes a greatest common factor of the fraction you input, then uses that to simplify
Maintenance Log:
1/5/22: started (wrote like the cins and stuff
1/6/22: finished the code
*/

#include <iostream>
#include <stdlib.h> 
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <vector>
using namespace std;

int GCF(int num, int den)
{
	int gcf = 1;
	for (int i = den; 0 < i; i--)
	{
		if (num % i == 0 && den % i == 0)
		{
			gcf = i;
			break;
		}
	}
	return gcf;
}

int main()
{
	int num;
	int den;
	
	printf("enter the numerator:\n");
	cin >> num;
	system("CLS");
	printf("enter the denomenator\n");
	cin >> den;
	int gcf = GCF(num, den);
	num /= gcf;
	den /= gcf;
	system("CLS");
	printf("your fraction is %i / %i\n", num, den);
}




