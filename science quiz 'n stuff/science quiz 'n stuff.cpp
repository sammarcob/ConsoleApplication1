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
	string name;
	int score = 0;
	int input;
	int input2;
	int input3;

	printf("welcome to the Dumber Balance Science Test.\n");
	printf("please input your name:\n");
	cin >> name;

	system("CLS");

	printf("-press any button to start the quiz-\n");
	_getch();
	system("CLS;");
	
	printf("joseph has 20 brain cells, if he loses 3 by talking to sammarco, how many does he have left?\n");
	printf("1. 27\n");
	printf("2. 400\n");
	printf("3. 17\n");
	printf("4. 6467578\n");
	cin >> input;
	if (input == 1)
	{
		score = score - 1;
	}
	else if (input == 2)
	{
		score = score - 1;
	}
	else if (input == 3)
	{
		score = score + 4;
	}
	else
	{
		score = score - 1;
	}
	system("CLS");

	printf("Bozo ate 300 carrots. Why\n");
	printf("1. Because he was hungry\n");
	printf("2. Because he like carrots a lot\n");
	printf("3. Because he was poor and starving\n");
	printf("4. Because he is Bozo\n");
	cin >> input2;
	if (input2 == 1)
	{
		score = score - 1;
	}
	else if (input2 == 2)
	{
		score = score - 1;
	}
	else if (input2 == 3)
	{
		score = score - 1;
	}
	else if (input2 == 4)
	{
		score = score + 4;
	}
	system("CLS");

	printf("if Joseph mixes ammonia and bleach, what does he get\n");
	printf("1. mustard gas\n");
	printf("2. mustard\n");
	printf("3. mustard seeds\n");
	printf("4. ketchup\n");
	cin >> input3;
	if (input3 == 1)
	{
		score = score + 4;
	}
	else if (input3 == 2)
	{
		score = score - 1;
	}
	else if (input3 == 3)
	{
		score = score - 1;
	}
	else
	{
		score = score - 1;
	}
system("CLS");

	if (score < 0)
	{
		printf("great job bozo you got %i points.", score);
		printf("try again next year %s.", name.c_str());
	}
	else if (score > 0)
	{
		printf("you got %i points.\n", score);
		printf("good job %s", name.c_str());
	}
	else
	{
		printf("how\n");
	}
	return 0;
}