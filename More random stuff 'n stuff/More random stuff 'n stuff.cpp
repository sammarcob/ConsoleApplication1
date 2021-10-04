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



	return 0;
	/*
	f = (float)rand() / (float)RAND_MAX;
	printf("input a minimum number, then hit enter:\n");
	cin >> minfloat;
	fseek(stdin, 0, SEEK_END);
	printf("input a max number, then hit enter\n");
	cin >> maxfloat;
	fseek(stdin, 0, SEEK_END);
	f = minfloat + rand() % (maxfloat - minfloat);
	printf("%f", f);
	*/
}


