#pragma once
#ifndef __GAMING_STUDENT__
#define __GAMING_STUDENT__
#include "Student.h"


class GamingStudent : public Student
{
private:
	string m_gamingDevice;
	int m_hoursGamingContent;
public:
	GamingStudent();
	void setHoursGamingContent(int hours);
	int getHoursGamingContent();
	void setGamingDevice(string device);
	string getGamingDevice();
	string getStudentType() override;
};


#endif // defined (__GAMING_STUDENT__)
