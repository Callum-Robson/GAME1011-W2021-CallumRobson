#pragma once
#ifndef __NAMES__
#define __NAMES__
#include <string>
using namespace std;

class Names
{
private:
	const static string m_personNames[500];	
	const static string m_streamingNames[4];
	const static string m_deviceNames[4];
	const static string m_collegeNames[3];
	const static string m_programNames[3];
public:
	static string getStreamingNames(int i);
	static string getDeviceNames(int i);
	static string getCollegeNames(int i);
	static string getProgramNames(int i);
	static string getPersonNames(int i);
	
};
#endif /* defined (__MOUSE_BUTTONS__) */
