

#include <stdlib.h> 
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

struct xyPoints
{
    float x;
    float y;
};

float distance(struct xyPoints r[2])
{
    float dist = ((r[0].x - r[1].x) * (r[0].x - r[1].x)) + ((r[0].y - r[1].y) * (r[0].y - r[1].y));
    dist = sqrt(dist);

    return dist;
}


int main()
{
    struct xyPoints r[2];

    printf("First Point:\nX: ");
    cin >> r[0].x;
    printf("Y: ");
    cin >> r[0].y;
    printf("Second point:\nX: ");
    cin >> r[1].x;
    printf("Y: ");
    cin >> r[1].y;
    float dist = distance(r);
    system("CLS");
    cout << "Distance: " << dist;
}

