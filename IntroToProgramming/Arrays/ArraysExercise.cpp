#include <iostream>

using namespace std;

void ArrayQuestion1()
{
	cout << "The array declaration of: int numbers[10] = { 0, 0, 1, 0, 0, 1, 0, 0, 1, 1 }; is valid. \n \n ";

	cout << "The array declaration of: int matrix[5] = { 1, 2, 3, 4, 5, 6, 7 }; is not valid \n \n ";

	cout << "The array declaration of: double radii[10] = (3.2, 4.7}; is not valid \n \n";

	cout << "The array declaration of: int table[7] = { 2, , , 27, , 45, 39 }; is not valid \n \n";

	cout << "The array declaration of: char codes[] = { 'A', 'X', '1', '2', 's' }; is valid \n \n";

	cout << "The array declaration of: int blanks[]; is valid \n \n";

	cout << "int collection[-20]; is not valid \n \n";

	cout << "int hours[3] = 8, 12, 16; is not valid \n \n";
}

void ArrayQuestion2()
{
	int values[] = { 2, 6, 10, 14 };
	cout << values[2];
}

int main()
{
	char input = 0;

	while (input != 'q')
	{
		cout << "Pick question number, or press q to quit.\n";
		cin >> input;

		switch (input)
		{
		case '1': ArrayQuestion1();
			break;

		default:
			break;
		}
	}

	system("pause");
	return 0;
}