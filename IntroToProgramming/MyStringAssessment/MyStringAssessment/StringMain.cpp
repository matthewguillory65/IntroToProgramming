#include <iostream>
#include "StringHeader.h"
using namespace std;
int main()
{
	MyString firststring = MyString("Apple");
	MyString secondstring = MyString("Seed");
	cout << firststring.Length() << endl;
	cout << firststring.Access(4) << endl;
	cout << firststring.Compare(secondstring) << endl;
	cout << firststring.Append(secondstring) << endl;
	cout << secondstring.Prepend(firststring) << endl;
	cout << firststring.Constant() << endl;
	cout << firststring.Lowercase() << endl;
	cout << firststring.Uppercase() << endl;
	cout << firststring.FindSub() << endl;
	cout << firststring.CStyle() << endl;
	system("pause");
}