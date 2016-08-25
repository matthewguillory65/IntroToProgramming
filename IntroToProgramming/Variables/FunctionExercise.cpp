#include <iostream>
#include <cstdlib>

using namespace std;

float number = 16.721f;
float result;
int CoinChance;
int CoinFlip = 0;
int i;



void numA(int variable)
{
	cout << variable << endl;
}

float value1 = 0;
float value2 = 0;

float surprise()
{
	if (value1 > value2)
		cout << "The smaller number is: " << value2;

	if (value2 > value1)
		cout << "The smaller number is: " << value1;

	return 0;
}

int Half()
{
	cout << "16.721 cut in half is " << endl;
	result = number / 2;
	cout << result;
	return 0;
}

int CoinToss()
{

	for (int i = 0; i < CoinFlip; i++);
	{
		CoinChance = rand();
		if (CoinChance % 2 == 0)
		{

			cout << "\n" << "Heads";
		}

		else
		{
			cout << "\n" << "Tails";
		}
	}
	return 0;
}

int main()
{

	cout << "1 \n";
	cout << "1 \n";
	cout << "2 \n";
	cout << "2 \n";
	cout << "3 \n";
	cout << "2 \n";
	cout << "1 \n";

	cin >> value1 >> value2;
	surprise();
	cout << "\n";




	Half();
	cout << "\n";

	cin >> CoinFlip;
	CoinToss();
	cout << "\n";
	system("pause");
	cin >> CoinFlip;
	return 0;
































































}









