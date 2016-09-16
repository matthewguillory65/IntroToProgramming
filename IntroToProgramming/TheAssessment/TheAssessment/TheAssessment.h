#pragma once

using namespace std;
class MyString
{
private:
	char *alright;
public:
	MyString();
	//This is the default constructor. 

	MyString(char*a);
	/*This takes the value of the first pointer object and assigns it to the second pointer object 
	So it takes the pointer object on 'a' and assigns it to the pointer object 'alright'*/

	int MyString::Length();
	/*This asks for the string's length, and returns how long it is*/

};