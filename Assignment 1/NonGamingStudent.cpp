#include "NonGamingStudent.h"

void NonGamingStudent::randomFunction2()
{
	cout << "Hello";
	//Placeholder function, just to keep the Student class abstract
}

NonGamingStudent::NonGamingStudent()
{
	setName(Names::getPersonNames(rand() % 500));
	setCollegeName(Names::getCollegeNames(rand() % 3));
	setProgramName(Names::getProgramNames(rand() % 3));
	setCurrentSemester(1 + rand() % 6);
	setAge(17 + rand() % 33);
	setStreamingService(Names::getStreamingNames(rand() % 4));
	setHoursContent(1 + rand() % 12);
}

void NonGamingStudent::setStreamingService(string streamingService)
{
	m_streamingService = streamingService;
}

void NonGamingStudent::setHoursContent(int hours)
{
	m_hoursNonGamingContent = hours;
}
