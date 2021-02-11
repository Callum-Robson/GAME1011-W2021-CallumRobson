#pragma once
#ifndef __STUDENT__
#define __STUDENT__
#include "Person.h"


class Student : public Person
{
private:
	string m_collegeName;
	string m_programName;
	int m_currentSemester;
	void randomFunction() override;
	
public:
	//Student(string name, string collegeName, string programName, int currentSemester, int age);
	void virtual randomFunction2() = 0;
	void setCollegeName(string collegeName);
	string getCollegeName();
	void setProgramName(string programName);
	string getProgramName();
	void setCurrentSemester(int currentSemester);
	int getCurrentSemester();
	
	
};



#endif // defined (__STUDENT__)
