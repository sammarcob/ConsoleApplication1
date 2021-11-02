/*
Author: Brooks Sammarco
Project Name: Choose you own adventure using if and switch
File Name: choose your own adventure using if and switch 'n stuff.cpp
Purpose: create an adventure that you can go on with at least 9 endings
Pseudocode: starts the story, creates 2 paths, then 2 paths per path, then 2 final paths per path again except for one that has 3 paths
Maintenance Log:
10/28/21: wrote most of the code
10/29/21: finished code and wrote comments
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
	
	printf("you see a guy and he's dancing, what do yuou do?\n 1. shoot him\n 2. shoot him\n");
	cin >> input1;
	if (input1 == 1)
	{
		printf("dang, thats pretty cool\n");
		printf("-press any button to continue\n");
		_getch();
		system("CLS");
		printf("you walk away from the dead guy and come across a big frog who is selling root beer and stuff\n what do you take\n");
		printf("1. root beer\n 2. a cup of windex\n");
		cin >> input2;
		
		if (input2 == 1)
		{
			system("CLS");
			printf("you drink the root beer and it tastes pretty good.\n");
			printf("suddenly the root beer cup grabs your neck and starts choking you\n");
			printf("he starts accusing you of not eating your vegetables\n");
			printf("-press any button to continue-");
			_getch();
			system("CLS");
			printf("you are about to faint. what are your final words before you faint:\n");
			printf("1. tell him that you're his father\n 2. tell him that you always liked sprite more than root beer\n");
			cin >> input3;

			if (input3 == 1)
			{
				system("CLS");
				printf("you tell him that you're his father\n");
				printf("-press any button to continue-\n");
				_getch();
				printf("tears well up in the cup's eyes and he loosens his grip.\n");
				printf("you enbrace your son who is also a cup of root beer\n");
				printf("you live happily ever after with your beverage son\n");
				_getch();
				return 0;
			}
			else if (input3 == 2)
			{
				system("CLS");
				printf("you tell him that you liked sprite more that root beer\n");
				printf("-press any button to continue-\n");
				_getch();
				printf("he tightens his grip and you die\n");
				printf("you float up to heaven where you enjoy your sprite in peace of all of eternity\n");
				_getch();
				return 0;

			}
		}
		else if (input2 == 2)
		{
			system("CLS");
			printf("you happily shlurp down the watery, foamy blue death liquid\n");
			printf("you feel the burn slip through your body.\n");
			printf("-press a button to continue-\n");
			_getch();
			printf("you fall... the frog seems confused but then takes out his gameboy and starts playing a game\n");
			printf("you can hear that its you favorite game Cool Guy tycoon and you are filled with anger that he is playing without you\n");
			printf("what do you do\n");
			printf("1. ignore that you are melting and start punching him\n 2. die a slow, sad death\n");
			cin >> input3;

			if (input3 == 1)
			{
				system("CLS");
				printf("you get up and start punching the frog\n");
				printf("-press any button to continue-\n");
				_getch();
				printf("the frog gets mad and slaps you to the ground and walks away\n");
				printf("you are now a puddle and will always be a puddle for all eternity\n");
				_getch();
				return 0;
			}
			else if (input3 == 2)
			{
				system("CLS");
				printf("you die\n");
				printf("you just die\n");
				printf("good job bozo\n");
				_getch();
				return 0;
			}
		}

	}
	else if (input1 == 2)
	{
		printf("wow now he's like, dead\n");
		printf("-press any button to continue-\n");
		_getch();
		system("CLS");
		printf("a police man shows up and arrests you. what do you do\n");
		printf("1. bribe him not to with a mcdonalds hashbrown\n 2. go silently\n");
		cin >> input2;

		if (input2 == 1)
		{
			system("CLS");
			printf("you tell him that if he lets you go he can have a mcdonalds hashbrown\n");
			printf("he quickly uncuffs you, snatches that hashbrown and runs away\n");
			printf("he leaves his car. what do you do with it\n");
			printf("1. get in and drive away\n 2. kick it\n");
			cin >> input3;

			if (input3 == 1)
			{
				system("CLS");
				printf("you get in the cop car and drive away.\n");
				printf("you are now a police officer\n");
				_getch();
				return 0;
			}
			else if (input3 == 2)
			{
				system("CLS");
				printf("you kick the car and the car\n");
				printf("-press any button to continue-\n");
				_getch();
				printf("the car blows up and you die\n");
				return 0;
			}
		}
		else if (input2 == 2)
		{
			system("CLS");
			printf("you relax and let him cuff you\n");
			printf("he puts you in the car and starts driving to the police station\n");
			printf("you notice that he left his gameboy in the seat next to you. what game do you play?\n");
			printf("1. pokemon\n 2. cool guy tycoon\n 3. burger king app\n");
			cin >> input3;

			if (input3 == 1)
			{
				system("CLS");
				printf("you play pokemon but suddenly you have a heart attack and die\n");
				printf("good job bozo\n");
				return 0;
			}
			else if (input3 == 2)
			{
				system("CLS");
				printf("you start playing the coolest game ever Cool guy Tycoon\n");
				printf("-press any button to continue-\n");
				_getch();
				printf("you win the game good job tycoon good game good job i like tycoon also you are released from prison and cool\n");
				return 0;
			}
			else if (input3 == 3)
			{
				system("CLS");
				printf("you load up burger king app\n-press any button to contunue-\n");
				_getch();
				printf("you order a burger and a slice of cheese.\n");
				printf("suddenly, a burger king delivery van t-bones the police car and you get turned into a puddle\n");
				printf("you are fully awake but you are puddle now\n");
				printf("good job bozo\n");
				_getch();
				return 0;
			}
		}
	}
	else
	{
		printf("wrong awnser bozo\n try again\n");
		return 0;
	}

	return 0;
}
