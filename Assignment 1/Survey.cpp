#include "Survey.h"

void Survey::setNumParticipants(int numParticipants)
{
	m_numParticipants = numParticipants;
	m_pParticipants = new Person * [m_numParticipants];
}

void Survey::generate()
{
	for (int i = 0; i < m_numParticipants; i++)
	{
		int x = rand() % 3;
		if (x == 2)
		{
			m_pParticipants[i] = new GamingStudent;
			//static_cast<GamingStudent*>(m_pParticipants[i]);
		}
		if (x == 0 || x == 1)
		{
			m_pParticipants[i] = new NonGamingStudent;
			//static_cast<NonGamingStudent*>(m_pParticipants[i]);
		}
	}
}

string Survey::getName(int i)
{
	return m_pParticipants[i]->getName();
}

string Survey::getStreamingService(int i)
{
	return static_cast<NonGamingStudent*>(m_pParticipants[i])->getStreamingService();
}

string Survey::getGamingDevice(int i)
{
	return static_cast<GamingStudent*>(m_pParticipants[i])->getGamingDevice();
}

int Survey::getAge(int i)
{
	return m_pParticipants[i]->getAge();
}

int Survey::getHours(int i)
{
	return static_cast<NonGamingStudent*>(m_pParticipants[i])->getHoursContent();
}

int Survey::getHoursGaming(int i)
{
	return static_cast<GamingStudent*>(m_pParticipants[i])->getHoursGamingContent();
}

void Survey::process()
{
	int gamersTotalParticipants = 0;
	int nonGamersTotalParticipants = 0;
	
	int gamersTotalAge = 0;
	int nonGamersTotalAge = 0;
	
	for (int i = 0; i < m_numParticipants; i++)
	{
		if (m_pParticipants[i]->getStudentType() == "Gaming")
		{
			gamersTotalAge += getAge(i);
			gamersTotalParticipants++;
		}
		if (m_pParticipants[i]->getStudentType() == "NonGaming")
		{
			nonGamersTotalAge += getAge(i);
			nonGamersTotalParticipants++;
		}
	}
	m_gamerAgeAverage = gamersTotalAge / gamersTotalParticipants;
	m_nonGamerAgeAverage = nonGamersTotalAge / nonGamersTotalParticipants;

	int gamersTotalHours = 0;
	int nonGamersTotalHours = 0;

	for (int i = 0; i < m_numParticipants; i++)
	{
		if (m_pParticipants[i]->getStudentType() == "Gaming")
		{
			gamersTotalHours += getHoursGaming(i);
		}
		if (m_pParticipants[i]->getStudentType() == "NonGaming")
		{
			nonGamersTotalHours += getHours(i);
		}
	}
	m_gameHoursAverage = gamersTotalHours / gamersTotalParticipants;
	m_nonGamerhoursAverage = nonGamersTotalHours / nonGamersTotalParticipants;

	int netflixCounter = 0, primeCounter = 0, craveCounter = 0, disneyPlusCounter = 0;
	int ps4Counter = 0, xboxCounter = 0, switchCounter = 0, pcCounter = 0;
	
	for (int i = 0; i < m_numParticipants; i++)
	{	
		if (m_pParticipants[i]->getStudentType() == "Gaming")
		{
			if (getGamingDevice(i) == "PS4")
				ps4Counter++;
			if (getGamingDevice(i) == "Xbox One")
				xboxCounter++;
			if (getGamingDevice(i) == "Nintendo Switch")
				switchCounter++;
			if (getGamingDevice(i) == "PC")
				pcCounter++;
		}
		if (m_pParticipants[i]->getStudentType() == "NonGaming")
		{
			if (getStreamingService(i) == "Netflix")
				netflixCounter++;
			if (getStreamingService(i) == "Prime Video")
				primeCounter++;
			if (getStreamingService(i) == "Crave")
				craveCounter++;
			if (getStreamingService(i) == "Disney+")
				disneyPlusCounter++;
		}
	}
	if (ps4Counter > xboxCounter && ps4Counter > switchCounter && ps4Counter > pcCounter )
	{
		m_popularGamingDevice = "PS4";
	}
	if (xboxCounter > ps4Counter && xboxCounter > switchCounter && ps4Counter > pcCounter)
	{
		m_popularGamingDevice = "Xbox One";
	}
	if (switchCounter > ps4Counter && switchCounter > xboxCounter && switchCounter > pcCounter)
	{
		m_popularGamingDevice = "Nintendo Switch";
	}
	if (pcCounter > ps4Counter && pcCounter > xboxCounter && pcCounter > switchCounter)
	{
		m_popularGamingDevice = "PC";
	}

	if (netflixCounter > primeCounter && netflixCounter > craveCounter && netflixCounter > disneyPlusCounter)
	{
		m_popularStreamingService = "Netflix";
	}
	if (primeCounter > netflixCounter && primeCounter > craveCounter && primeCounter > disneyPlusCounter)
	{
		m_popularStreamingService = "Prime Video";
	}
	if (craveCounter > netflixCounter && craveCounter > primeCounter && craveCounter > disneyPlusCounter)
	{
		m_popularStreamingService = "Crave";
	}
	if (disneyPlusCounter > netflixCounter && disneyPlusCounter > primeCounter && disneyPlusCounter > craveCounter)
	{
		m_popularStreamingService = "Disney+";
	}
	
	cout << "Non-Gaming-Student participants: " << nonGamersTotalParticipants << "\nAverage age: " <<
		m_nonGamerAgeAverage << "\nMost preferred streaming service: " << m_popularStreamingService <<
		"\nAverage weekly hours spent consuming non-gaming entertainment: " << m_nonGamerhoursAverage;
	
	cout << "\n\nGaming-Student participants: " << gamersTotalParticipants << "\nAverage age: " <<
		m_gamerAgeAverage << "\nMost preferred gaming device: " << m_popularGamingDevice <<
		"\nAverage weekly hours spent consuming gaming entertainment: " << m_gameHoursAverage << endl;

}

