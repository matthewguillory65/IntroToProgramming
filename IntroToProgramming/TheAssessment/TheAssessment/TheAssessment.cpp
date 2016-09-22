#include <iostream>
#include "TheAssessment.h"

using namespace std;
MyString a = MyString();
int String(char *Apples)
{
	int i;
	for (i = 0; Apples[i] != '\0'; ++i)
	{
		m_data[i] = Apples[i];
	}
	m_data[i] = '\0';
	int m_Length = i;
	return 0;
}

int Length()
{
	int i = 0;
	while (m_data[i] != 0)
	{
		m_data[i];
		i++;
	}
	cout << i << endl;
	return i;
}

//int Access()
//{
//
//	return 1;
//}
//
int Compare()
{
	if (m_data < m_data2)
	{
		cout << m_data;
	}
	if(m_data > m_data2)
	{
		cout << m_data2;
	}
	cout << "\n";
	return 0;
}

//int Append()
//{
//
//	return 1;
//}

int Prepend()
{


	return 1;
}