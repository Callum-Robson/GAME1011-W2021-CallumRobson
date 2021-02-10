#pragma once
#ifndef __NON_GAMING_STUDENT__
#define __NON_GAMING_STUDENT__
#include "Student.h"


class NonGamingStudent : public Student
{
private:
	string m_streamingService;
	int m_hoursNonGamingContent;

public:
};

#endif // defined (__NON_GAMING_STUDENT__)