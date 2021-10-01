/*

*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
	srand(0);
	srand((unsigned)time(NULL));

	float minfloat = 0.0;
	float maxfloat = 1.0;
	float f;
	f = (float)rand() / (float)RAND_MAX;
	printf("input a minimum number, then hit enter:\n");
	cin >> minfloat;
	fseek(stdin, 0, SEEK_END);
	printf("input a max number, then hit enter\n");
	cin >> maxfloat;
	fseek(stdin, 0, SEEK_END);
	f = minfloat + rand() % (maxfloat - minfloat);
	printf("%f", f);
}


