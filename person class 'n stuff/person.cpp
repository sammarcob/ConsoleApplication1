#include "person.h"

person::person()
{
	f = "";
	m = "";
	l = "";
	a = 0;
	ph = "";
}
person::person(string fName, string mName, string lName, int age, string pNum)
{
	f = fName;
	m = mName;
	l = lName;
	a = age;
	ph = pNum;
}
person::person(person& p)
{
	f = p.f;
	m = p.m;
	l = p.l;
	a = p.a;
	ph = p.ph;
}
void person::setData(string fName, string mName, string lName, int age, string pNum)
{
	f = fName;
	m = mName;
	l = lName;
	a = age;
	ph = pNum;
}
string person::getfName()
{
	return f;
}
string person::getmName()
{
	return m;
}
string person::getlName()
{
	return l;
}
int person::getAge()
{
	return a;
}
string person::getpNum()
{
	return ph;
}
void person::setfName(string fName)
{
	f = fName;
}
void person::setmName(string mName)
{
	m = mName;
}
void person::setlName(string lName)
{
	l = lName;
}
void person::setAge(int age)
{
	a = age;
}
void person::setpNum(string pNum)
{
	ph = pNum;
}