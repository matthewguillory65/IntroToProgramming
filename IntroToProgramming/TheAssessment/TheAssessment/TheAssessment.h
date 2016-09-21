#pragma once

using namespace std;
class MyString
{
private:
	int m_Length;
	char m_data[90] = "Apples";
	char m_data2[91] = "Pineapple";
	char m_String;
public:
	MyString() {}
	//This is the default constructor. 

	//int MyString::String(char Apples);

	MyString(char string) { string = m_data[20]; }
	/*This takes the value of the first pointer object and assigns it to the second pointer object 
	So it takes the pointer object on 'a' and assigns it to the pointer object 'alright'*/

	int MyString::Length();
	/*This asks for the string's length, and returns how long it is*/

	//int MyString::Access();
	///*Accesses a character from a certain index within the string*/

	int MyString::Compare();
	/*Compare if the string is the same as another string*/

	//int MyString::Append();
	///*Attach one string to another; to the end*/

	//int MyString::Prepend();
	///*Attach one string to another; */

	//int MyString::Return();
	///*Returning the string as a basic constant c-style string*/

	//int MyString::Lowercase();
	///*Convert the string to a duplicate containing all lowercase letters*/

	//int MyString::Uppercase();
	///*Convert the string to a duplicate containing all uppercase letters*/

	//int MyString::FindString();
	///*Finding a sub-string within the class*/

	//int MyString::FindStringIndex();
	///*Finding a sub-string within the class, staring from a certain index within the string*/

	//int MyString::Replace();
	///*Replace a sub-string found within the string of a different sub-string*/

	//int MyString::Set();
	///*Set the string to an input C-Style*/

};