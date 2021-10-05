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


