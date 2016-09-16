#include <iostream>
using namespace std;

//Create a function that takes in three numbers and returns the sum, then multiplies by 5. Should be able to handle floating numbers and integer values.

int Work()
{
	float inputa;
	float inputb;
	float inputc;
	float sum;
	float total;
	cout << "Please give me 3 numbers, so I may add them. \n";
	cin >> inputa;
	cin >> inputb;
	cin >> inputc;
	sum = inputa + inputb + inputc;

	cout << "Now I shall multiply the sum by 5." << endl;

	total = sum * 5.0;
	cout << total;
	cout << endl;
	return 1;
}


int Parameters(float &a, float &b)
{
	//I got stuck here (Yes the whole time) because i couldn't fix the problem when i call this to the main
	int WhyNot[40];
	int *pointed = &WhyNot[0];

}

int main()
{

	Work();
	Parameters();

	system("pause");
	return 1;
}