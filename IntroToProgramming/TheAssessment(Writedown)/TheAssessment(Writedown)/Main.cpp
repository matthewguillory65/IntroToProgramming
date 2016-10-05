#include <iostream>
#include "StringClass.h"

using namespace std;

int main()
{
	MyString firststring = MyString("Apple");
	MyString secondstring = MyString("Seed");
	cout << firststring.Length() << endl;
	cout << firststring.Access(4) << endl;
	cout << firststring.Compare(secondstring) << endl;
	//firststring.Append(secondstring);
	//firststring.Prepend(secondstring);
	//firststring.Constant();
	//firststring.Lowercase();
	//firststring.Uppercase();
	cout << firststring.FindSub() << endl; //Returns 1; 1 = true
	//firststring.CertainSub();
	//firststring.Replace(); //Bonus
	//firststring.CStyle();
	system("pause");

}
