#pragma once
#ifndef __GAMING_STUDENT__
#define __GAMING_STUDENT__
#include "Student.h"


class GamingStudent : public Student
{
private:
	string m_gamingDevice;
	int m_hoursGamingContent;
	void randomFunction2() override;
public:
	GamingStudent();
	void setHoursGamingContent(int hours);
	void setGamingDevice(string device);
};


#endif // defined (__GAMING_STUDENT__)
