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
	int participants = -1;
	string ready;

	cout << "Welome!\n";
	while (participants < 1 || participants > 500)
	{
		cout << "Enter number of participants, up to 500: ";
		cin >> participants;
		if (participants < 1 || participants > 500)
			cout << "Invalid entry\n";
	}
	surveyOne.setNumParticipants(participants);
	surveyOne.generate();
	while (ready != "YES" && ready != "Yes" && ready != "yes" && ready != "NO" && ready != "No" && ready != "no")
	{
		cout << "Are you ready to process the survey? ";
		cin >> ready;
		if (ready != "YES" && ready != "Yes" && ready != "yes" && ready != "NO" && ready != "No" && ready != "no")
			cout << "Invalid entry\n";
	}
	if (ready == "YES" || ready == "Yes" || ready == "yes")
	{
		cout << endl;
		surveyOne.process();
	}
	else
		cout << "Goodbye!";
	return 0;
}