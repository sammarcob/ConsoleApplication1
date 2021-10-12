/*
Project Name: a little division
Author: Brooks Sammarco
File Name: a little division 'n stuff.cpp
Purpose: write a multiplication, addition, subtraction, division and modulous question for int and float, then 
write 2 mixed problems for division and modulous.
Pseudocode: establishes a ton of ints and floats, then writes 12 questions. a float multiplication, float division,
float addition.
Matinence Log:
9/27/21: wrote all the code
*/


#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
	int a = 6;
	int b = 2;
	int c;
	int d = 5;
	int e = 3;
	int f;
	int g = 1;
	int h = 4;
	int i;
	int s = 2;
	int t = 8;
	int u;
	float j = 8.8;
	float k = 2.2;
	float l;
	float m = 4.4;
	float n = 5.5;
	float o;
	float p = 7.7;
	float q = 8.8;
	float r;
	float v = 2.3;
	float w = 10.1;
	float x;
	printf("int problems:\n");
	_getch();
	c = a * b;
	printf("a*b= %i\n", c);
	f = d - e;
	printf("d-e= %i\n", f);
	i = g + h;
	printf("g+h= %i\n", i);
	u = t / s;
	printf("t/s= %i\n", u);
	c = a % b;
	printf("a%%b= %i", c);
	_getch();
	system("CLS");

	printf("float problems:\n");
	_getch();
	l = j * k;
	printf("j*k= %f\n", l);
	o = n - m;
	printf("n-m= %f\n", o);
	r = p + q;
	printf("p+q= %f\n", r);
	x = w / v;
	printf("w/v= %f\n", x);
	l = (int)w % (int)n;
	printf("w%%n= %f", l);
	_getch();
	system("CLS");

	printf("mixed problems:\n");
	_getch();
	l = j / b;
	printf("j/b= %f\n", l);
	c = d % (int)k;
	printf("d%%k= %i\n", c);
	printf("press any key to continue");
	_getch();
	return 0;
}

