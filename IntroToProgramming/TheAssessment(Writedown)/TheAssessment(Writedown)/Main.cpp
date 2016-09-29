#include <iostream>
#include "StringClass.h"

using namespace std;

int main()
{
	MyString firststring = MyString("Apple");
	MyString secondstring = MyString("Seed");
	cout << firststring.Length() << endl;
	cout << firststring.Access() << endl;
	firststring.Compare(secondstring);
	firststring.Append(secondstring);
	firststring.Prepend(secondstring);
	firststring.Constant();
	//firststring.Lowercase();
	//firststring.Uppercase();
	//firststring.FindSub();
	//firststring.CertainSub();
	//firststring.Replace(); //Bonus
	//firststring.CStyle();
	system("pause");
}
