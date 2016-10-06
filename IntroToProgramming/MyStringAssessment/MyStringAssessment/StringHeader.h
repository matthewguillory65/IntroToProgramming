#pragma once

using namespace std;
// Makes it to where I don't need to use std in the following: std::cout, std::cin, and/or std::endl;
class MyString
{
private:
	int m_length;
	char m_data[255];
	char m_String;
public:
	//This is the default constructor
	MyString() {}
	MyString(char *b);
	//int stringlength();
	int Length();
	char Access(int i);
	bool Compare(MyString a);
	char* Append(MyString a);
	char* Prepend(MyString a);
	char Constant();
	char Lowercase();
	char Uppercase();
	bool FindSub();
	char* CStyle();
};