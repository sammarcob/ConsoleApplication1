#pragma once
#include <string>
using namespace std;

class person
{
public:
	person();
	person(string fName, string mName, string lName, int age, string pNum);
	person(person& p);
	void setData(string fName, string mName, string lName, int age, string pNum);
	string getfName();
	string getmName();
	string getlName();
	int getAge();
	string getpNum();
	void setfName(string fName);
	void setmName(string mName);
	void setlName(string lName);
	void setAge(int age);
	void setpNum(string pNum);
private:
	string f;
	string m;
	string l;
	int a;
	string ph;
};
