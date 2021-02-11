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
		int x = rand() % 2;
		if (x == 1)
			m_pParticipants[i] = new GamingStudent;
		if (x == 0)
			m_pParticipants[i] = new NonGamingStudent;
	}
}

string Survey::getName(int i)
{
	return m_pParticipants[i]->getName();
}

