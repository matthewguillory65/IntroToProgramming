#include <iostream>
#include "StringHeader.h"
#include <cassert>
using namespace std;
int main()
{
	MyString firststring = MyString("Apple");
	MyString secondstring = MyString("Seed");
	cout << firststring.Length() << endl;
	cout << firststring.Access(4) << endl;
	cout << firststring.Compare(secondstring) << endl;
	firststring.Append(secondstring);
	secondstring.Prepend(firststring);
	cout << firststring.Constant() << endl;
	firststring.Lowercase();
	firststring.Uppercase();
	cout << firststring.FindSub() << endl;
	cout << firststring.CStyle() << endl;
	system("pause");
}