#include <iostream>
using namespace std;
int main()
{
	//#1.1

	int a;
	for (a = 100; a >= 0; a--)
	{
		cout << a;
	}
	cout << "\n";

	//#1.2

	int b;
	for (b = 99; b >= 0; b--)
	{
		cout << b;
	}
	cout << "\n";

	//#1.3

	int c;
	for (c = 100; c >= 1; c--)
	{
		cout << c;
	}
	cout << "\n";

	//#1.4

	int d;
	for (d = 100; d >= 0; d = d - 2)
	{
		cout << d;
	}
	cout << "\n";

	//#2

	int f;
	for (f = 0; f <= 100; f++)
		if (f % 3 && f % 5 == 0)
		{
			cout << "FizzBuzz";
			cout << "\n";
		}
		else if (f % 3 == 0)
		{
			cout << "Fizz";
			cout << "\n";
		}
		else if (f % 5 == 0)
		{
			cout << "Buzz";
			cout << "\n";
		}
		else if (f % 3 && f % 5 != 0)
		{
			cout << f;
			cout << "\n";
		}
	cout << "\n";

	//#3

	int g;
	int sum = 0;
	for (g = 1; g < 1000; g++)
	{
		if (g % 3 == 0)
		{
			cout << g;
			sum += g;
		}
		else if (g % 5 == 0)
		{
			cout << g;
			sum += g;
		}
	}
	cout << "\n";
	cout << sum;
	cout << "\n";


	//#4.1.A

	int h = 100;
	while (h >= 0)
	{
		cout << h << "\n";
		h--;
	}
	cout << "\n";

	//#4.1.B

	int i = 99;
	while (i >= 0)
	{
		cout << i << "\n";
		i--;
	}
	cout << "\n";

	//#4.1.C

	int j = 100;
	while (j >= 1)
	{
		cout << j << "\n";
		j--;
	}
	cout << "\n";

	//#4.1.D

	int k = 100;
	while (k >= 1)
	{
		cout << k << "\n";
		k = k - 2;
	}
	cout << "\n";

	//#4.2

	int l = 0;
	while (l <= 100)
	{

		if (l % 3 && l % 5 == 0)
		{
			cout << "FizzBuzz";
			cout << "\n";
		}
		else if (l % 3 == 0)
		{
			cout << "Fizz";
			cout << "\n";
		}
		else if (l % 5 == 0)
		{
			cout << "Buzz";
			cout << "\n";
		}
		else if (l % 3 && l % 5 != 0)
		{
			cout << l;
			cout << "\n";
		}
		l++;
	}
	cout << "\n";

	//#4.3

	int m = 0;
	int sumr = 0;
	while (m < 999)
	{
		m++;
		if (m % 3 == 0)
		{
			cout << m;
			sumr += m;
		}
		else if (m % 5 == 0)
		{
			cout << m;
			sumr += m;
		}

	}
	cout << "\n";
	cout << sumr;
	cout << "\n";

	system("pause");
	return 1;
}