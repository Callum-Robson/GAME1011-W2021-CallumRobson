#pragma once
#ifndef __SURVEY__
#define __SURVEY__
#include "Person.h"
#include "Names.h"
using namespace std;

class Survey
{
private:
	int m_numParticipants;
	Person** m_pParticipants;
	
	
public:
	void setNumParticipants(int numParticipants);
	
};

#endif // defined (__SURVEY__)
