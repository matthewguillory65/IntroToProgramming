#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
float Half(float);
float wordNow();
int Rand = 0;
int whatEver;
int i;


//Problem 1
void Print(int variable)
{
	std::cout << variable << std::endl;
}


//Problem 2

float wordNow()
{
	float value1;
	float value2;
	std::cout << std::endl;
	std::cin >> value1 >> value2;
	if (value1 > value2)
	{
		std::cout << "The smaller number is:" << value2;
		std::cout << std::endl;
		return value2;
	}
	else if (value1 < value2)
	{
		std::cout << "The smaller number is:" << value1;
		std::cout << std::endl;
		return value1;
	}
}


//Problem 3
float wordsNow()
{
	float value1;
	float value2;
	float value3;
	std::cout << std::endl;
	std::cin >> value1 >> value2 >> value3;
	if (value1 > value2)
	{
		std::cout << "The smaller number is:" << value2 << std::endl;
	}
	else if (value1 < value3)
	{
		std::cout << "The smaller number is:" << value1 << std::endl;
	}

	else if (value2 > value3)
	{
		std::cout << "The smaller number is:" << value3;
		std::cout << std::endl;
	}

	else if (value2 < value3)
	{
		std::cout << "The smaller number is:" << value2;
		std::cout << std::endl;
	}

	else if (value1 < value2)
	{
		if (value1 < value3)
		{
			std::cout << "The smaller number is:" << value1;
			std::cout << std::endl;
		}
		else if (value1 > value3)
		{
			std::cout << "The smaller number is:" << value3;
			std::cout << std::endl;
		}
	}
	return value1;
}


//Problem 4
float Half(float numb)
{
	return numb / 2;
}


//Problem 5
int CoinToss()
{

	for (int i = 0; i < Rand; i++)
	{
		whatEver = rand();
		if (whatEver % 2 == 0)
		{
			std::cout << "Tails" << std::endl;
		}

		else
		{
			std::cout << "Heads" << std::endl;
		}
	}
	return 0;
}


//Problem 6
/*
Find the error in each of the following functions
and explain how to fix them.
//*/
//
//int sum(int x, int y)
//{
//	result = x + y;
//There's no return value, needs: return result;
//}
//
//int sum(int n)
//{
//	//"n" is not defined, can input here "int n=1"
//	if (0 == n)
//		return 0;
//	else
//		n = n + n;
// Needs return value: return n + n;
//}
//
//int main()
//{
//	double x = 13.6;
//	//square is not defined, can use "float square()"
//	// "x" has too many arguments in function call 
//	std::cout << "square of 13.6 = " << square(x) << std::endl;
//}
//
//int square(int x) //change "int square(int x)" to "float square(int x)
//{
//	return x * x;
//}


//Problem 7
int SumTo(int n)
{
	int sumz = 0;
	for (int i = 0; i <= n; i++)
	int sumz = i;
	return sumz + n;
}


//Problem 8
int Array(int itArr[], int size)
{
	int added;
	for (int l = 0; l < size; l++)
	{
		added += itArr[l];
	}
	return added;
}


//Problem 9
int MinInArray(int small[], int size)
{
	int smallest = small[0];
	for (int i = 0; i < size; i++)
	{
		if (smallest > small[i])
		{
			smallest = small[i];
		}
	}
	return  smallest;
}


//Problem 10
void MultiplyByIndex(int input_array[], int size, int output_array[])
{
	for (int i = 0; i < size; i++)
	{
		output_array[i] = i * input_array[i];
	}
}


//Problem 11
void Sumof2Arrays(int input_1[], int input_2[], int size, int output_Total[])
{
	for (int i = 0; i < size; i++)
	{
		output_Total[i] = input_1[i] + input_2[i];
	}
}


//Problem 12
void array_Input(int array_input[], int size)
{
	int suma = 0;
	for (int i = 0; i < size; i++)
	{
		suma += array_input[i];
		array_input[i] = suma;
	}
}


//Problem 13
int findIndex(int enter[], int size, int finder)
{
	for (int i = 0; i < size; i++)
	{
		if (finder == enter[i])
		{
			return i;
		}
		else
		{
			return -1;
		}
	}
}


//Problem 14
int Split(int arrayofInt[], int size, int output_1[], int output_2[])
{
	int j = 0;
	int l = 0;
	for (int i = 0; i < size; i++)
	{
		if (arrayofInt[i] > 0)
		{
			output_1[j] = arrayofInt[i];
			j++;
		}
		else if (arrayofInt[i] < 0)
		{
			output_2[l] = arrayofInt[i];
			l++;
		}
	}
	return j;
}


//Problem 15
int powerof(int x, int y)
{
	return x^y;
}


//Problem 16
void sequence(int thearray[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int j = 0;
		if (thearray[i] == thearray[i + 1])
		{

			j++;
		}
	}
}


//Problem 17
int RPS()
{
	do {


		std::string playerPick;

		int computer = 0;
		int srand = 0;

		std::cout << "rock, paper, or scissors?" << std::endl;
		std::cout << " " << std::endl;

		std::cin >> playerPick;

		std::cout << "You entered: " << playerPick << std::endl;
		std::cout << " " << std::endl;

		srand = (rand() + time(0)) % 6;

		computer = rand() % 10 + 1;


		if (playerPick == "q")
		{
			break;
		}


		if (computer <= 3)
		{

			std::cout << "Computer chooses: Rock" << std::endl;
			std::cout << " " << std::endl;

		}

		else if (computer <= 6)
		{

			std::cout << "Computer chooses Paper" << std::endl;
			std::cout << " " << std::endl;

		}
		else if (computer >= 7)
		{

			std::cout << "Computer chooses: Scissors" << std::endl;
			std::cout << " " << std::endl;

		}

		if (playerPick == "rock" && computer <= 3)
		{

			std::cout << "It's a tie" << std::endl;
			std::cout << " " << std::endl;

		}
		else if (playerPick == "rock" && computer <= 6)
		{

			std::cout << "You lose" << std::endl;
			std::cout << " " << std::endl;

		}
		else if (playerPick == "rock" && computer >= 7)
		{

			std::cout << "You win" << std::endl;
			std::cout << " " << std::endl;

		}
		if (playerPick == "paper" && computer <= 3)
		{

			std::cout << "You win" << std::endl;
			std::cout << " " << std::endl;

		}
		else if (playerPick == "paper" && computer <= 6)
		{

			std::cout << "It's a tie" << std::endl;
			std::cout << " " << std::endl;

		}
		else if (playerPick == "paper" && computer >= 7)
		{

			std::cout << "You lose" << std::endl;
			std::cout << " " << std::endl;

		}
		if (playerPick == "scissors" && computer <= 3)
		{

			std::cout << "You lose!" << std::endl;
			std::cout << " " << std::endl;

		}
		else if (playerPick == "scissors" && computer <= 6)
		{

			std::cout << "You win!" << std::endl;
			std::cout << " " << std::endl;

		}
		else if (playerPick == "scissors" && computer >= 7)
		{

			std::cout << "It's a tie!" << std::endl;
			std::cout << " " << std::endl;

		}


	} while (std::cin.get());
	std::cin.get();
	return 1;
}


int main()
{
	/*int the_variable = 1;

	PrintInteger(the_variable)

	{

		PrintInteger(the_variable);

		int the_variable = 2;

		PrintInteger(the_variable);

		{

			PrintInteger(the_variable);

			int the_variable = 3;

			PrintInteger(the_variable);

		}

		PrintInteger(the_variable);

	}

	PrintInteger(the_variable);
	1, 1, 2, 2, 3, 2, 1*/

	//part of 7
	int result = SumTo(3); //result = 1 + 2 + 3 = 6
	std::cout << result << std::endl;
	result = SumTo(15); //result should now be 120
	std::cout << result << std::endl;

	int numbers[4]{ 3,2,4,7 };
	array_Input(numbers, 4);

	int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
	int output_array[7] = {};
	MultiplyByIndex(integer_array, 7, output_array);

	int part16[7] = { 1,3,1,2,2,6 };
	sequence(part16, 7);

	float stuff = wordNow();
	float more = Half(16.721);
	std::cin >> Rand;
	CoinToss();
	RPS();
	std::cout << "\n";
	system("pause");
	return 0;

}