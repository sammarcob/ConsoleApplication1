/*

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
	int input1;
	int input2;
	int input3;

	int score = 0;
	string name;

	printf("please input you name\n");
	cin >> name;
	system("CLS");
	printf("you arwe in Swra Worrs (storm strooper in str wars)\n");
	printf("-press any button to continue-\n");
	_getch();
	system("CLS");

	printf("you see a guy and he's dancing, what do yuou do?\n 1. shoot him 2. shoot him\n");
	cin >> input1;
	if (input1 == 1)
	{
		printf("dang, thats pretty cool\n");
		printf("-press any button to continue\n");
		_getch();
		printf("you walk away from the dead guy and come across a big frog who is selling root beer and stuff\n what do you take\n");
		printf("1. root beer\n 2. a cup of windex\n");
		cin >> 

	}
	else if (input1 == 2)
	{
		printf("wow now he's like, dead\n");
	}
	else
	{
		printf("wrong awnser bozo\n try again\n");
		return 0;
	}

	return 0;
}
