#include <iostream>
#include "StringClass.h"

using namespace std;

int main()
{
	MyString firststring = MyString("Apples");
	MyString secondstring = MyString("zed");
	cout << firststring.Length() << endl;
	//firststring.Access()
	firststring.Compare(secondstring);
	//firststring.Append(secondstring);

	system("pause");
}
