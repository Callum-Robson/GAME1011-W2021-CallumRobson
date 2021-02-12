#pragma once
#ifndef __NON_GAMING_STUDENT__
#define __NON_GAMING_STUDENT__
#include "Student.h"


class NonGamingStudent : public Student
{
private:
	string m_streamingService;
	float m_hoursNonGamingContent;
public:
	NonGamingStudent();
	void setStreamingService(string streamingService);
	string getStreamingService();
	void setHoursContent(int hours);
	int getHoursContent();
	string getStudentType() override;
};

#endif // defined (__NON_GAMING_STUDENT__)