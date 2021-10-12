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
	int MPH;
	float hours;
	float gas;
	float miles;
	float MPG;
	string name;

	printf("please input your first name:\n");
	cin >> name;
	system("CLS");

	printf("hello %s, please input how far in miles you travled:\n", name.c_str());
	cin >> miles;
	printf("%f miles? ok.\n", miles);

	printf("ok %s, now input how long in hours you travled:\n", name.c_str());
	cin >> hours;
	printf("%f hours? ok.\n", hours);

	printf("ok %s, please input the ammount of fuel in gallons your car used throuhout the trip:\n", name.c_str());
	cin >> gas;
	printf("%f gallons? ok.\n", gas);

	MPH = miles / hours;
	MPG = miles / gas;

	_getch();
	system("CLS");

	printf("ok %s, i've done the calculations: \n", name.c_str());
	_getch();
	printf("through the trip, you went about %i MPH\n", MPH);
	printf("on the trip you got about %f miles for every gallon you spent\n", MPG);
	_getch();

	return 0;
}
