#include "Survey.h"

void Survey::setNumParticipants(int numParticipants)
{
	m_pParticipants = new Person * [numParticipants];
}
