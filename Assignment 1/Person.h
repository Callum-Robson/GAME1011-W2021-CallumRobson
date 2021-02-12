#pragma once
#ifndef __PERSON__
#define __PERSON__
#include <string>
#include <iostream>
#include "Names.h"
using namespace std;

class Person
{
private:
	string m_name;
	int m_age;
public:
	void virtual randomFunction() = 0;
	string virtual getStudentType() = 0;
	void setAge(int age);
	int getAge();
	void setName(string name);
	string getName();
};



#endif // defined (__PERSON__)
