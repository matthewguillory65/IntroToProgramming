#include <iostream>
#include "StringHeader.h"
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
int MyString::Length() //Gets the length of the string and displays it
{
	int i = 0;
	while (m_data[i] != 0)
	{
		m_data[i];
		i++;
	}
	return i;
}
char MyString::Access(int i) //Accesses a certain character within the string
{
	return m_data[i];
}
bool MyString::Compare(MyString a) //Compares one string to another
{
	if (m_data == a.m_data)
	{
		return true; //It will display the number 1, (1 == true)
	}
	else
	{
		return false; //It will display the number 0, (0 == false)
	}
}
char* MyString::Append(MyString a) //Puts the first string on the end of the second string
{
	int i = Length();
	int l = 0;
	while (a.m_data[l] != 0)
	{
		m_data[i] = a.m_data[l];
		i++;
		l++;
	}
	m_data[i] = '\0';
	return m_data;
}
char* MyString::Prepend(MyString a) //Puts the first string on the beginning of the second string
{
	int i = Length();
	int l = 0;
	while (a.m_data[l] != 0)
	{
		m_data[i] = a.m_data[l];
		++l;
		i++;
	}
	m_data[l] = '\0';
	return m_data;
}
char* MyString::Constant() //Returns the string as a basic constant C-Style string
{
	return m_data;
}
char* MyString::Lowercase() //Changes all letters to lowercase
{
	int i = 0;
	for (i; i < Length(); i++)
	{
		if (m_data[i] >= 65 && m_data[i] <= 90)
		{
			char c = m_data[i];
			c += 32;
			m_data[i] = c;
		}
	}
	return m_data;
}
char* MyString::Uppercase() //Changes all letters to uppercase
{
	int d = 0;
	for (d; d < Length(); d++)
	{
		if (m_data[d] >= 97 && m_data[d] <= 122)
		{
			m_data[d] = (int)m_data[d] - 32;
		}
	}
	return m_data;
}
bool MyString::FindSub() //Finds a sub-string within the string class
{
	char SubString[15] = "ple";
	for (int i = 0; i < m_data['\0']; i++)
	{
		int j = 0;
		if (m_data[i] == SubString[j])
		{
			while (m_data[i] == SubString[j])
				i++;
			j++;
		}
	}
	return true; //It will display the number 1, (1 == true)
}
char* MyString::CStyle()
{
	char String[255];
	cin >> String;
	int i;
	for (i = 0; String[i] != '\0'; i++)
	{
		m_data[i] = String[i];
	}
	m_data[i] = '\0';
	return m_data;
}