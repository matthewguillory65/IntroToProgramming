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

bool MyString::Compare(MyString a) //Compares 2 strings
{
	int i = 0;
while (m_data[i] != '\0')
	{
		if (m_data[i] == a.m_data[i])
		{
			int bob = 5 + 3;
			
			//Won't run without this for some reason
		}
		else
		{
			int bobby = 5 + 4;
		}
		i++;
	}
	return false; //0 = False
}

char MyString::Append(MyString a) //Puts the first string on the end of the second string
{
	char newword[245];
	int firstlength = Length();
	int i;
	for (i = 0; i < a.m_data[i] != '\0'; i++)
	{
		m_data[i + firstlength] = a.m_data[i];
	}
	

	return ;

}

char MyString::Prepend(MyString a) //Puts the first string on the beginning of the second string
{
	return 0;
}

//char MyString::Constant() //Returns the string as a basic constant C-Style string
//{
//	
//	return 0;
//}

//char MyString::Lowercase() //Changes all letters to lowercase
//{
//
//	return 0;
//}

//char MyString::Uppercase() //Changes all letters to uppercase
//{
//
//	return 0;
//}

//char MyString::FindSub() //Finds a sub-string within the string class
//{
//
//	return 0;
//}

//char MyString::CertainSub() //Finds a sub-string within the string class, starting fom a certain index
//{
//
//	return 0;
//}

//char MyString::Replace() // Bonus //Replace a sub-string found within the string with a different sub-string
//{
//
//	return 0;
//}

//char MyString::CStyle() //Setting the string to an input C-Style string
//{
//
//	return 0;
//}