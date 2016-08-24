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

	cout << "values[2]; This does work. \n \n";

	cout << "++values[0]; This does not work. \n \n";

	cout << "values[1]++; This does work. \n \n";

	cout << "x = 2; This does not work. \n \n";

	cout << "values[++x]; This does not work. \n \n";

	cout << "values[4]; This does work. \n \n";
}

void ArrayQuestion3()
{
	int numbers[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int number = 0;

	for (int i = 0; i < 10; i++)
		cout << numbers[i] << " \n";
		
}

void ArrayQuestion4()
{

}

void ArrayQuestion5()
{

}

void ArrayQuestion6()
{

}

void ArrayQuestion7()
{

}

void ArrayQuestion8()
{

}

void ArrayQuestion9()
{

}

int main()
{
	char input = 0;

	while (input != 'q')
	{
		cout << "Pick question number, or press q to quit.\n";
		cin >> input;
		cout << endl;

		switch (input)
		{
		case '1': ArrayQuestion1();
			break;

		case '2': ArrayQuestion2();
			break;

		case '3': ArrayQuestion3();
			break;

		case '4': ArrayQuestion4();
			break;

		case '5': ArrayQuestion5();
			break;

		case '6': ArrayQuestion6();
			break;

		case '7': ArrayQuestion7();
			break;

		case '8': ArrayQuestion8();
			break;

		case '9': ArrayQuestion9();
			break;

		default:
			break;
		}
	}

	system("pause");
	return 0;
}