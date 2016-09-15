#include <iostream>
#include "TheAssessment.h"

using namespace std;


int Utility::UtilityLength()
{
	cout << "Problem 1 of Assessment" << endl;
	bool Anything = true;
	//Need to ask the strings length.
	char Example1[] = "Apples";
	//Now I need to find it to return an integer.
	cout << "This is the strings length for apples is \n";
	int i = 0;
	Example1[i];
	strlen(Example1);
	while (Anything = true)
	{
		if (Example1[i] == 0)
		{
			break;
		}
		i++;
	}
	cout << i;
	cout << endl;
	cout << endl;
	return 0;
}

int Utility::UtilityAccess()
{
	cout << "Problem 2 of Assessment" << endl;
	//Need to access a char at a certain index within the string class.
	char Example1[] = "Apples";
	cout << Example1[0] << endl;
	cout << endl;

	return 0;
}

int Utility::UtilityCompare()
{
	cout << "Problem 3 of Assessment" << endl;
	//Need to compare if the string is the same as another string class.
	int i = 0;
	bool Anything = true;
	char Example1[] = "Orange";
	char Example2[] = "Apple";
	strcmp(Example1, Example2);
	while (Anything = true)
	{
		if (Example1[i] < Example2[i])
		{
			cout << Example1 << endl;
			break;
		}
		
		if (Example1[i] > Example2[i])
		{
			cout << Example2 << endl;
			break;
		}

		if (Example1[i] == Example2[i])
		{
			cout << "They are the same" << endl;
			break;
		}
		else
		{
			i++;
		}
	}
	cout << endl;
	return 0;
}

int Utility::UtilityAppend()
{
	cout << "Problem 4 of Assessment" << endl;
	//Need to append one string to another
	char Example1[66] = "I guess this is right.. ";
	char Example2[] = "This is right i guess too..";
	strcat_s(Example1, Example2);
	cout << Example1 << endl;

	return 0;
}
