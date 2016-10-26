#include <iostream>

void main()
{
	int a = Min<int>(5, 7);
	int b = Max<int>(5, 7);
	int c = Clamp<int>(0, 5, 4);
	char d = Min<char>(a, b);
	char e = Max<char>(a, b);
	system("pause");
}