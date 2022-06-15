// homework file.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <vector>
using namespace std;

struct Data
{
    string name;
    int age;
    int height;
    int weight;
    string phone;
};

int main()
{
    int done;
    ofstream names;
    
    names.open("names.txt");
    vector<Data> list;
    
    do
    {
        Data temp;
        cout << "enter a name\n";
        cin >> temp.name;
        cout << "enter an age\n";
        cin >> temp.age;
        cout << "enter a height\n";
        cin >> temp.height;
        cout << "enter a weight\n";
        cin >> temp.weight;
        cout << "enter a phone number\n";
        cin >> temp.phone;

        cout << "would you like to enter another?\n1. yes\n2. no\n";
        
        cin >> done;
        
        list.push_back(temp);

    } while (done == 1);

    for (int i = 0; i < list.size(); i++)
    {
        names << list[i].name;
        names << "\t";
        names << list[i].age;
        names << "\t";
        names << list[i].height;
        names << "\t";
        names << list[i].weight;
        names << "\t";
        names << list[i].phone;
        names << "\n";
    }

    vector<Data> outputData;

    names.close();
    ifstream in;
    in.open("names.txt");
    string input;
    

    while (getline(in, input, '\t'))
    {
        Data temp;
        temp.name = input;

        getline(in, input, '\t');
        temp.age = stoi(input);

        getline(in, input, '\t');
        temp.height = stoi(input);

        getline(in, input, '\t');
        temp.weight = stoi(input);

        getline(in, input, '\n');
        temp.phone = input;

        outputData.push_back(temp);
    }

    for (int i = 0; i < outputData.size(); i++)
    {
        cout << outputData[i].name;
        cout << "\t";
        cout << outputData[i].age;
        cout << "\t";
        cout << outputData[i].height;
        cout << "\t";
        cout << outputData[i].weight;
        cout << "\t";
        cout << outputData[i].phone;
        cout << "\n";
    }

}
