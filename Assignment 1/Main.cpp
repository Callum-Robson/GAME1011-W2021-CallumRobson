#include "Survey.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Names.h"
using namespace std;


int main()
{
	srand(time(NULL));
	Survey surveyOne;
	surveyOne.setNumParticipants(500);
	surveyOne.generate();
	for (int i = 0; i < 500; i++)
	{
		cout << surveyOne.getName(i) << endl;
		
	}
	

	return 0;
}