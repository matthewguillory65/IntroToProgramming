#include <iostream>

//Create the following function:
//Description: Returns the lower of two values
//Input: Two templates arguements (a, b)
//Output: The lower of the two values
template<typename T>
T Min(T a, T b)
{
	return a < b;
}

//Create the following function:
//Description: Returns the higher of the two values
//Input: Two templates (a, b)
//Output: The higher of the two values a and b
template<typename Z>
Z Max(Z a, Z b)
{
	return a > b;
}

//Create the following function:
//Description: Constrains a value within the range of two other values
//Input: Three template arguements (min, max, val)
//Output: The value of the val constrained between min and max
template<typename min, typename max, typename val>
int Clamp(min a, max b, val c)
{
	while (a <= c && c <= b)
	{
		return c;
	}
	while (c < a)
	{
		return a;
	}
	while (c > b)
	{
		return b;
	}
}

//Create the following function:
//Description: As above but first checks if a and b represent alphabetical characters. If so, the functions will return the value that is alphabetically lower
//Input: Two template arguements(a, b)
//Output: The alphabetically lower of the two values a and b
template<typename H>
char Min(char a, char b)
{
	return b;
}

//Create the following function:
//Description: As above but first checks if a and b represent alphabetical characters. If so, the functions will return the value that is alphabetically higher
//Input: Two template arguements(a, b)
//Output: The alphabetically higher of the two values a and b
template<typename G>
char Max(char a, char b)
{
	return a;
}

void main()
{
	int a = Min<int>(5, 7);
	int b = Max<int>(5, 7);
	int c = Clamp<int>(0, 5, 4);
	char d = Min<char>(a, b);
	char e = Max<char>(a, b);
	system("pause");
}