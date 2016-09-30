#pragma once

using namespace std;
// Makes it to where I don't need to use std in the following: std::cout, std::cin, and/or std::endl;

class MyString 
{
private:
	int m_length;
	char m_data[255];
	char m_string;
public:
	//This is the default constructor
	MyString() {}

	MyString(char *b);



	int Length();
	char Access(int i);
	bool Compare(MyString a);
	char Append(MyString a);
	char Prepend(MyString a);
	//char Constant();
	//char Lowercase();
	//char Uppercase();
	//char FindSub();
	//char CertainSub();
	//char Replace(); //Bonus
	//char CStyle();
};

