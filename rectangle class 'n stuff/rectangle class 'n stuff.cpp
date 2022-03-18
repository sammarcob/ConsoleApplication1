
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
#include "Rectangle.h"
using namespace std;



int main()
{
    rectangle r;
    r.setMeasure(4.5, 5.7);
    cout << "area: " << r.area() << "perimeter: " << r.perimeter() << endl;

    return 0;
}