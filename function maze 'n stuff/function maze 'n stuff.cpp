/*
Author: Brooks Sammarco
Project Name: function maze
File Name: function maze 'n stuff.cpp
Purpose: be able to travel freely between 16 different rooms.
Pseudocode: inside a loop, it calls various functions based off of what room you are in.
Maintenance Log:
1/19/22: started on the structs and bools.
1/20/22: finished
*/

#include <iostream>
#include <stdlib.h> 
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <vector>
#include <math.h>
using namespace std;

struct rooms
{
    bool room1 = true;
    bool room2 = false;
    bool room3 = false;
    bool room4 = false;
    bool room5 = false;
    bool room6 = false;
    bool room7 = false;
    bool room8 = false;
    bool room9 = false;
    bool room10 = false;
    bool room11 = false;
    bool room12 = false;
    bool room13 = false;
    bool room14 = false;
    bool room15 = false;
    bool room16 = false;
    string input;
};

void tRoom1(struct rooms& r);
void tRoom2(struct rooms& r);
void tRoom3(struct rooms& r);
void tRoom4(struct rooms& r);
void tRoom5(struct rooms& r);
void tRoom6(struct rooms& r);
void tRoom7(struct rooms& r);
void tRoom8(struct rooms& r);
void tRoom9(struct rooms& r);
void tRoom10(struct rooms& r);
void tRoom11(struct rooms& r);
void tRoom12(struct rooms& r);
void tRoom13(struct rooms& r);
void tRoom14(struct rooms& r);
void tRoom15(struct rooms& r);

int main()
{
    rooms r;

    printf("There are 16 rooms arranged as follows:\n\n 1  2  3  4\n 5  6  7  8\n 9 10 11 12\n13 14 15 16\n");
    _getch();

    while (r.room16 == false)
    {
        system("CLS");
        if (r.room1 == true)
        {
            tRoom1(r);
        }
        else if (r.room2 == true)
        {
            tRoom2(r);
        }
        else if (r.room3 == true)
        {
            tRoom3(r);
        }
        else if (r.room4 == true)
        {
            tRoom4(r);
        }
        else if (r.room5 == true)
        {
            tRoom5(r);
        }
        else if (r.room6 == true)
        {
            tRoom6(r);
        }
        else if (r.room7 == true)
        {
            tRoom7(r);
        }
        else if (r.room8 == true)
        {
            tRoom8(r);
        }
        else if (r.room9 == true)
        {
            tRoom9(r);
        }
        else if (r.room10 == true)
        {
            tRoom10(r);
        }
        else if (r.room11 == true)
        {
            tRoom11(r);
        }
        else if (r.room12 == true)
        {
            tRoom12(r);
        }
        else if (r.room13 == true)
        {
            tRoom13(r);
        }
        else if (r.room14 == true)
        {
            tRoom14(r);
        }
        else if (r.room15 == true)
        {
            tRoom15(r);
        }
        
    }
    printf("you've reached the end of the maze\n");

    return 0;
}

void tRoom1(struct rooms& r)
{
    printf("(1) 2  3  4\n 5  6  7  8\n 9 10 11 12\n13 14 15 16\n\n");
    printf("d = right\ns = down\n");
    cin >> r.input;
    if (r.input == "d")
    {
        r.room2 = true;
    }
    else if (r.input == "s")
    {
        r.room5 = true;
    }
    r.room1 = false;
}

void tRoom2(struct rooms& r)
{
    printf(" 1 (2) 3  4\n 5  6  7  8\n 9 10 11 12\n13 14 15 16\n\n");
    printf("a = left\nd = right\ns = down\n");
    cin >> r.input;
    if (r.input == "a")
    {
        r.room1 = true;
    }
    else if (r.input == "d")
    {
        r.room3 = true;
    }
    else if (r.input == "s")
    {
        r.room6 = true;
    }
    r.room2 = false;
}

void tRoom3(struct rooms& r)
{
    printf(" 1  2 (3) 4\n 5  6  7  8\n 9 10 11 12\n13 14 15 16\n\n");
    printf("a = left\nd = right\ns = down\n");
    cin >> r.input;
    if (r.input == "a")
    {
        r.room2 = true;
    }
    else if (r.input == "d")
    {
        r.room4 = true;
    }
    else if (r.input == "s")
    {
        r.room7 = true;
    }
    r.room3 = false;
}

void tRoom4(struct rooms& r)
{
    printf(" 1  2  3 (4)\n 5  6  7  8\n 9 10 11 12\n13 14 15 16\n\n");
    printf("a = left\ns = down\n");
    cin >> r.input;
    if (r.input == "a")
    {
        r.room3 = true;
    }
    else if (r.input == "s")
    {
        r.room8 = true;
    }
    r.room4 = false;
}

void tRoom5(struct rooms& r)
{
    printf(" 1  2  3  4\n(5) 6  7  8\n 9 10 11 12\n13 14 15 16\n\n");
    printf("w = up\nd = right\ns = down\n");
    cin >> r.input;
    if (r.input == "w")
    {
        r.room1 = true;
    }
    else if (r.input == "d")
    {
        r.room6 = true;
    }
    else if (r.input == "s")
    {
        r.room9 = true;
    }
    r.room5 = false;
}

void tRoom6(struct rooms& r)
{
    printf(" 1  2  3  4\n 5 (6) 7  8\n 9 10 11 12\n13 14 15 16\n\n");
    printf("w = up\na = left\nd = right\ns = down\n");
    cin >> r.input;
    if (r.input == "w")
    {
        r.room2 = true;
    }
    else if (r.input == "a")
    {
        r.room5 = true;
    }
    else if (r.input == "d")
    {
        r.room7 = true;
    }
    else if (r.input == "s")
    {
        r.room10 = true;
    }
    r.room6 = false;
}

void tRoom7(struct rooms& r)
{
    printf(" 1  2  3  4\n 5  6 (7) 8\n 9 10 11 12\n13 14 15 16\n\n");
    printf("w = up\na = left\nd = right\ns = down\n");
    cin >> r.input;
    if (r.input == "w")
    {
        r.room3 = true;
    }
    else if (r.input == "a")
    {
        r.room6 = true;
    }
    else if (r.input == "d")
    {
        r.room8 = true;
    }
    else if (r.input == "s")
    {
        r.room11 = true;
    }
    r.room7 = false;
}

void tRoom8(struct rooms& r)
{
    printf(" 1  2  3  4\n 5  6  7 (8)\n 9 10 11 12\n13 14 15 16\n\n");
    printf("w = up\na = left\ns = down\n");
    cin >> r.input;
    if (r.input == "w")
    {
        r.room4 = true;
    }
    else if (r.input == "a")
    {
        r.room7 = true;
    }
    else if (r.input == "s")
    {
        r.room12 = true;
    }
    r.room8 = false;
}

void tRoom9(struct rooms& r)
{
    printf(" 1  2  3  4\n 5  6  7  8\n(9) 10 11 12\n13 14 15 16\n\n");
    printf("w = up\nd = right\ns = down\n");
    cin >> r.input;
    if (r.input == "w")
    {
        r.room5 = true;
    }
    else if (r.input == "d")
    {
        r.room10 = true;
    }
    else if (r.input == "s")
    {
        r.room13 = true;
    }
    r.room9 = false;
}

void tRoom10(struct rooms& r)
{
    printf(" 1  2  3  4\n 5  6  7  8\n 9 (10) 11 12\n13 14 15 16\n\n");
    printf("w = up\na = left\nd = right\ns = down\n");
    cin >> r.input;
    if (r.input == "w")
    {
        r.room6 = true;
    }
    else if (r.input == "a")
    {
        r.room9 = true;
    }
    else if (r.input == "d")
    {
        r.room11 = true;
    }
    else if (r.input == "s")
    {
        r.room14 = true;
    }
    r.room10 = false;
}

void tRoom11(struct rooms& r)
{
    printf(" 1  2  3  4\n 5  6  7  8\n 9 10 (11) 12\n13 14 15 16\n\n");
    printf("w = up\na = left\nd = right\ns = down\n");
    cin >> r.input;
    if (r.input == "w")
    {
        r.room7 = true;
    }
    else if (r.input == "a")
    {
        r.room10 = true;
    }
    else if (r.input == "d")
    {
        r.room12 = true;
    }
    else if (r.input == "s")
    {
        r.room15 = true;
    }
    r.room11 = false;
}
void tRoom12(struct rooms& r)
{
    printf(" 1  2  3  4\n 5  6  7  8\n 9 10 11(12)\n13 14 15 16\n\n");
    printf("w = up\na = left\ns = down\n");
    cin >> r.input;
    if (r.input == "w")
    {
        r.room8 = true;
    }
    else if (r.input == "a")
    {
        r.room11 = true;
    }
    else if (r.input == "s")
    {
        r.room16 = true;
    }
    r.room12 = false;
}
void tRoom13(struct rooms& r)
{
    printf(" 1  2  3  4\n 5  6  7  8\n 9 10 11 12\n(13)14 15 16\n\n");
    printf("w = up\nd = right\n");
    cin >> r.input;
    if (r.input == "w")
    {
        r.room9 = true;
    }
    else if (r.input == "d")
    {
        r.room14 = true;
    }
    r.room13 = false;
}
void tRoom14(struct rooms& r)
{
    printf(" 1  2  3  4\n 5  6  7  8\n 9 10 11 12\n13(14)15 16\n\n");
    printf("w = up\na = left\nd = right\n");
    cin >> r.input;
    if (r.input == "w")
    {
        r.room10 = true;
    }
    else if (r.input == "a")
    {
        r.room13 = true;
    }
    else if (r.input == "d")
    {
        r.room15 = true;
    }
    r.room14 = false;
}
void tRoom15(struct rooms& r)
{
    printf(" 1  2  3  4\n 5  6  7  8\n 9 10 11 12\n13 14(15)16\n\n");
    printf("w = up\na = left\nd = right\n");
    cin >> r.input;
    if (r.input == "w")
    {
        r.room11 = true;
    }
    else if (r.input == "a")
    {
        r.room14 = true;
    }
    else if (r.input == "d")
    {
        r.room16 = true;
    }
    r.room15 = false;
}
