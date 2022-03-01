
#pragma once
#define _USE_MATH_DEFINES
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <fstream>
#include "ellipse.h"
using namespace std;



int main()
{
    cout << "ellipse test\n";
    ellipse E;
    E.setRadii(3.4, 5.6);
    printf("circumference: %f\n area: %f\n\n", E.circumference, E.area());
    return 0;
}