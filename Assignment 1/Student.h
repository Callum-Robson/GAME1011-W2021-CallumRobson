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
	
public:
	void randomFunction() override;
	void setCollegeName(string collegeName);
	string getCollegeName();
	void setProgramName(string programName);
	string getProgramName();
	void setCurrentSemester(int currentSemester);
	int getCurrentSemester();
	
	
};



#endif // defined (__STUDENT__)
