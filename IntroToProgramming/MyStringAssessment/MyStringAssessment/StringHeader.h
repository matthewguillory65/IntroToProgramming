#pragma once

using namespace std;
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
	int Length();
	char Access(int i);
	bool Compare(MyString a);
	void Append(MyString a);
	void Prepend(MyString a);
	char* Constant();
	MyString Lowercase();
	MyString Uppercase();
	bool FindSub();
	char* CStyle();
};