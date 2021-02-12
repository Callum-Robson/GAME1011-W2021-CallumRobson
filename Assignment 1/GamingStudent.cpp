#include "GamingStudent.h"
void GamingStudent::randomFunction2()
{
	cout << "Hello";
	//Placeholder function, just to keep the Student class abstract
}

GamingStudent::GamingStudent()
{
	setName(Names::getPersonNames(rand() % 500));
	setCollegeName(Names::getCollegeNames(rand()%3));
	setProgramName(Names::getProgramNames(2));
	setCurrentSemester(1 + rand() % 6);
	setAge(17 + rand() % 22);
	setGamingDevice(Names::getDeviceNames(rand() % 4));
	setHoursGamingContent(1 + rand() % 84);
}


int GamingStudent::getHoursGamingContent()
{
	return m_hoursGamingContent;
}

string GamingStudent::getGamingDevice()
{
	return m_gamingDevice;
}

string GamingStudent::getStudentType()
{
	return "Gaming";
}

void GamingStudent::setHoursGamingContent(int hours)
{
	m_hoursGamingContent = hours;
}
void GamingStudent::setGamingDevice(string device)
{
	m_gamingDevice = device;
}

