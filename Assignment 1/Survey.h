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
	int m_gameHoursAverage;
	int m_gamerAgeAverage;
	int m_nonGamerAgeAverage;
	int m_nonGamerhoursAverage;
	string m_popularStreamingService;
	string m_popularGamingDevice;
	
public:
	void setNumParticipants(int numParticipants);
	void generate();
	string getName(int i);
	string getStreamingService(int i);
	string getGamingDevice(int i);
	int getAge(int i);
	int getHours(int i);
	int getHoursGaming(int i);
	void process();
	
	
};

#endif // defined (__SURVEY__)
