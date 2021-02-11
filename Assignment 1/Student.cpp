#include "Student.h"


void Student::randomFunction()
{
	//Placeholder function, just to keep the Person class abstract
}


void Student::setCollegeName(string collegeName)
{
	m_collegeName = collegeName;
}

string Student::getCollegeName()
{
	return m_collegeName;
}

void Student::setProgramName(string programName)
{
	m_programName = programName;
}

string Student::getProgramName()
{
	return m_programName;
}

void Student::setCurrentSemester(int currentSemester)
{
	m_currentSemester = currentSemester;
}

int Student::getCurrentSemester()
{
	return m_currentSemester;
}
