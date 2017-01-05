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
	int arr[5];
	int i;

	cout << "Please enter five numbers to reverse. \n \n";

	cin >> arr[0];
	cin >> arr[1];
	cin >> arr[2];
	cin >> arr[3];
	cin >> arr[4];

	cout << endl;

	for (int i = 4; i >= 0; i--)
	{
		cout << arr[i] << endl;
	}

}

void ArrayQuestion5()
{

	int arr[10];
	int d;

	cout << "Please give me 10 numbers. \n \n";

	cin >> arr[0];
	cin >> arr[1];
	cin >> arr[2];
	cin >> arr[3];
	cin >> arr[4];
	cin >> arr[5];
	cin >> arr[6];
	cin >> arr[7];
	cin >> arr[8];
	cin >> arr[9];

	int largeNumber = arr[0];
	int smallNumber = arr[0];
	for (d = 0; d < 10; d++)

	{

		if (largeNumber < arr[d])
			largeNumber = arr[d];

		if (smallNumber > arr[d])
			smallNumber = arr[d];

	}

	cout << "The largest number entered is " << largeNumber << "\n" << "The smallest number entered is " << smallNumber;
	cout << "\n";



}

void ArrayQuestion6()
/*Create a program that creates a small 3x3 array of integers.
Use a nested for loop to initialisethe numbers 1 - 9.
Output the numbers in a grid format.*/
{
	int numbers[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (int i = 0; i < 3; i++)
	{
		cout << endl;
		for (int j = 0; j < 3; j++)
			cout << numbers[i][j];
	}

}

void ArrayQuestion7()
{
	int Days[29][5], colTotal[29] = { 0 }, rowTotal[5] = { 0 };
	int x, y;
	std::cout << "All array inputs for each is 5" << std::endl;
	for (x = 0; x < 29; x++)
	for (y = 0; y < 5; y++)
		{
			Days[x][y] = 5;
		}
	for (x = 0; x < 29; ++x)
	{
		for (y = 0; y < 5; ++y)
		{
			colTotal[x] = colTotal[x] + Days[x][y];
		}
	}
	for (x = 0; x < 29; x++)
	{
		std::cout << colTotal[x] << std::endl;
	}
	for (x = 0; x < 29; x++)
	{
		for (y = 0; y < 5; y++)
		{
			rowTotal[y] = rowTotal[y] + Days[x][y];
		}
	}
	for (y = 0; y < 5; y++)
	{
		std::cout << "sum of col is " << rowTotal[y] << std::endl;
	}
}

void ArrayQuestion8()
{
	int Players[5]{ 100,100,100,100,100 };
	int Damage = 40;
	int P;
	Players[P];
	for (int i = 0; i <= 5; i++)
	{
		std::cin >> P;
		if (P == 1)
		{
			bool(Players[1] >= 0);
			Players[1] = std::abs(Players[1] - Damage);
		}
		else if (P == 2)
		{
			bool(Players[2] >= 0);
			Players[2] = std::abs(Players[2] - Damage);
		}
		else if (P == 3)
		{
			bool(Players[3] >= 0);
			Players[3] = std::abs(Players[3] - Damage);
		}
		else if (P == 4)
		{
			bool(Players[4] >= 0);
			Players[4] = std::abs(Players[4] - Damage);
		}
		else
		{
			bool(Players[0] >= 0);
			Players[0] = std::abs(Players[0] - Damage);
		}
		std::cout << Players[0] << std::endl;
		std::cout << Players[1] << std::endl;
		std::cout << Players[2] << std::endl;
		std::cout << Players[3] << std::endl;
		std::cout << Players[4] << std::endl;
	}
}

void ArrayQuestion9()
{
	int dragons[3][7] = {
		{ 25, 23, 23, 21, 15, 5, 1 }, //donray
		{ 33, 12,  5,  5, 10, 25,25 }, //salty
		{ 1 ,  1, 5,  1,  1,  1, 1 }, //bob
	};
	for (int i = 0; i < 3; i++)
	{
		if (i > 0)
			std::cout << std::endl;
		for (int j = 0; j < 7; j++)
		{
			std::cout << dragons[i][j] << " | ";
		}
	}
	//Average amount of food eaten per day by all the dragons together
	float avgPerDayTotal;
	//- average amount of food eaten per day by any one dragon
	float avgPerDayDonray;
	float avgPerDaySalty;
	float avgPerDayBob;
	//- the greatest amount of food eaten during one day and which dragon that was
	int mostFoodEaten = 0;
	int mostFoodEatenID = -1;
	//- the least amount of food eaten during one day and which dragon t
	int leastFoodEaten = 0;
	int leastFoodEatenID = -1;
	//avg is sum of all numbers / how many numbers you added / summed
	float sum = 0;
	float totalDays = 21;
	//make an array with just donrays foods
	int donraysFoods[7]; //dragons[0][0-6]
	int saltysFoods[7]; //dragons[1][0-6]
	int bobFoods[7]; //dragons[2][0-6]
	float donraySum = 0;
	float saltySum = 0;
	float bobSum = 0;
	int leastPair[2] = { 0,900 };
	int biggestPair[2] = { 0,0 };
	//sum for all dragons
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			//get the biggest value
			if (dragons[i][j] > biggestPair[1])
			{
				biggestPair[0] = i;
				biggestPair[1] = dragons[i][j];
			}
			if (dragons[i][j] < leastPair[1])
			{
				leastPair[0] = i;
				leastPair[1] = dragons[i][j];
			}
			sum += dragons[i][j];
		}
	}
	//array dump for the dragons from 2d to 1d
	for (int i = 0; i < 7; i++)
	{
		donraysFoods[i] = dragons[0][i];
		saltysFoods[i] = dragons[1][i];
		bobFoods[i] = dragons[2][i];
	}
	//sum for individual dragons
	for (int i = 0; i < 7; i++)
	{
		donraySum += donraysFoods[i];
		saltySum += saltysFoods[i];
		bobSum += bobFoods[i];
	}
	//avg calculations
	avgPerDayDonray = donraySum / 7;
	avgPerDaySalty = saltySum / 7;
	avgPerDayBob = bobSum / 7;
	avgPerDayTotal = sum / totalDays;
	//output stuff to user
	std::cout << "sum: is " << sum << std::endl;
	std::cout << "average per day total  is " << avgPerDayTotal << std::endl;
	std::cout << "donray the depressed dragon \n average eaten per day is" << avgPerDayDonray << std::endl;
	std::cout << "salty average eaten per day is " << avgPerDaySalty << "\n";
	std::cout << "bob average eaten per day is " << avgPerDayBob << "\n";
	std::cout << "least food eaten dragon is " << leastPair[0] << " ate " << leastPair[1] << std::endl;
	std::cout << " most food eaten dragon is " << biggestPair[0] << " ate " << biggestPair[1] << std::endl;

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