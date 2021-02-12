#include "NonGamingStudent.h"

NonGamingStudent::NonGamingStudent()
{
	setName(Names::getPersonNames(rand() % 500));
	setCollegeName(Names::getCollegeNames(rand() % 3));
	setProgramName(Names::getProgramNames(rand() % 2));
	setCurrentSemester(1 + rand() % 6);
	setAge(17 + rand() % 33);
	setStreamingService(Names::getStreamingNames(rand() % 4));
	setHoursContent(1 + rand() % 84);
}

void NonGamingStudent::setStreamingService(string streamingService)
{
	m_streamingService = streamingService;
}

string NonGamingStudent::getStreamingService()
{
	return m_streamingService;
}

int NonGamingStudent::getHoursContent()
{
	return m_hoursNonGamingContent;
}

string NonGamingStudent::getStudentType()
{
	return "NonGaming";
}

void NonGamingStudent::setHoursContent(int hours)
{
	m_hoursNonGamingContent = hours;
}
