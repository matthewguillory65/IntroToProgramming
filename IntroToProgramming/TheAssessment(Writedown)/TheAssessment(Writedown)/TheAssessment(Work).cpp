#include <iostream>
#include "StringClass.h"

using namespace std;
MyString a = MyString();
MyString::MyString(char *b)
{
	int i = 0;
	for (i = 0; i < 255; ++i)
	{
		m_data[i] = b[i];
	}
}

int MyString::Length()
{
		
	int i = 0;
	while (m_data[i] != 0)
	{
		m_data[i];
		i++;
	}

	return i;
}

//char Access
//{
//	return 1;
//}

bool MyString::Compare(MyString a)
{
	int i = 0;
	while (m_data[i] != '\0')
	{
		if (m_data[i] < a.m_data[i])
		{
			cout << m_data << endl;
			break;
		}
		

		if (m_data[i] > a.m_data[i])
		{
			cout << a.m_data << endl;
			break;
		}
		

		if (m_data[i] = a.m_data[i])
		{
			cout << "They are equal" << endl;
			break;
		}
	
	}
	return m_data;
}

//char* MyString::Append(MyString a)
//{
//	a.m_data;
//
//	return a.m_data;
//}