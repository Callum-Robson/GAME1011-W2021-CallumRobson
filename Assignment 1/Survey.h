#pragma once
#ifndef __SURVEY__
#define __SURVEY__
#include "GamingStudent.h"
#include "NonGamingStudent.h"
#include "Names.h"
using namespace std;

class Survey
{
private:
	int m_numParticipants;
	Person** m_pParticipants;
	
	
public:
	void setNumParticipants(int numParticipants);
	void generate();
	string getName(int i);
	
};

#endif // defined (__SURVEY__)
