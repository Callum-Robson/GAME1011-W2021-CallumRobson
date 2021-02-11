#pragma once
#ifndef __NON_GAMING_STUDENT__
#define __NON_GAMING_STUDENT__
#include "Student.h"


class NonGamingStudent : public Student
{
private:
	string m_streamingService;
	float m_hoursNonGamingContent;
	void randomFunction2() override;
public:
	NonGamingStudent();
	void setStreamingService(string streamingService);
	void setHoursContent(int hours);
};

#endif // defined (__NON_GAMING_STUDENT__)