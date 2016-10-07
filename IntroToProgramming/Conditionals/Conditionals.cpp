#include <iostream>

int main()
{

	int num3 = 0;
	int num4 = 0;
	char bleh = 0;
	int Whatever;



	//Number 1


	int s;
	int z = 0;
	if (z == 0)
	{
		s = 100;
	}
	std::cout << s;
	std::cout << "\n";



	//Number 2

	std::cout << "Please input two numbers" << std::endl;
	int num1;
	int num2;
	std::cin >> num1 >> num2;
	std::cout << "The larger number will be displayed first" << std::endl;
	if (num1 < num2)
	{
		std::cout << num2 << std::endl;
	}
	else if (num1 > num2)
	{
		std::cout << num1 << std::endl;
	}




	//Number 3
	int num[5];
	int i = 0;
	for (i; i < 100; i++);
	std::cout << num[i];



	//Number 4

	std::cout << "Please input a number" << std::endl;
	int choice;
	std::cin >> choice;
	switch (choice)
	{
	case 1:
		std::cout << "1";
		break;
	case 2:
		std::cout << "2 or 3";
		break;
	case 3:
		std::cout << "4";
		break;
	default:
		std::cout << "invalid";
		break;
	}


	//Number 5
	std::cout << "\n";
	std::cout << "Please enter something" << std::endl;
	int x;
	std::cin >> x;
	int y = (x == 0) ? 0 : 10 / x;
	std::cout << y;


	//Number 6
	/*
	Write a program that accepts from the user two numbers and a mathematical operation
	character (+, -, *, /, %).
	Make case breaks to do the problems the user inputs.
	Perform the appropriate maths based on which character is input.
	Explanitory
	*/

	std::cin >> num1 >> bleh >> num2;
	switch (bleh)
	{

	case '+':
		Whatever = num3 + num4;
		break;

	case '*':
		Whatever = num3 * num4;
		break;

	case '-':
		Whatever = num3 - num4;
		break;

	case '/':
		Whatever = num3 / num4;
		break;

	case '%':
		Whatever = num3 / num4;
		break;

	default:
		std::cout << "Incorrect operator, please enter (+ - / *) \n";
		break;

	}
	std::cout << " \n";

	std::cout << "The answer is " << Whatever << "\n";


	//Number 7


	/*
	Write a program that accepts an integer that represents the month of the year.
	cin mos def ; that cin gonna take an int
	that int is gonna be month so prolly not gonna be greater than 12
	1 -> 31
	2 -> 28
	3 -> 31
	4 -> 30
	5 -> 31
	6 -> 30
	7 -> 31
	8 -> 31
	9 -> 30
	10 -> 31
	11 -> 30
	12 -> 31
	It should then display the number of days in that month.
	cout the number of days for the month they put

	If a number that doesn’t correspond to amonth is entered then the program should display an error message.
	If month number is not put, dialog error message. must be x<1 but y>12
	*/

	int input;
	std::cout << "Please give me a month to know how many days. ";
	std::cout << "\n";
	std::cin >> input;


	if (input == 1) {
		std::cout << "January has 31 days.";
		std::cout << "\n ";

	}
	else if (input == 2) {
		std::cout << "Febuary has 28 days.";
		std::cout << "\n";

	}
	else if (input == 3) {
		std::cout << "March has 31 days.";
		std::cout << "\n";

	}
	else if (input == 4) {
		std::cout << "April has 30 days.";
		std::cout << "\n";

	}
	else if (input == 5) {
		std::cout << "May has 31 days.";
		std::cout << "\n";

	}
	else if (input == 6) {
		std::cout << "June has 30 days.";
		std::cout << "\n";

	}
	else if (input == 7) {
		std::cout << "July has 31 days.";
		std::cout << "\n";

	}
	else if (input == 8) {
		std::cout << "August has 31 days.";
		std::cout << "\n";

	}
	else if (input == 9) {
		std::cout << "Spetember has 30 days.";
		std::cout << "\n";

	}
	else if (input == 10) {
		std::cout << "October has 31 days.";
		std::cout << "\n";

	}
	else if (input == 11) {
		std::cout << "November has 30 days.";
		std::cout << "\n";

	}
	else if (input == 12) {
		std::cout << "December has 31 days.";
		std::cout << "\n";

	}
	system("pause");
	return 0;






	/* Number 8
	a. False
	b. True
	c. False
	d. True
	e. True
	f. False
	g. False
	h. True
	i. False
	j. frstChar == 'J'
	*/

	/*Number 9
	a. (a || b) || (a && b)
			T			F
	b. !((!a) && (a)) || (a && b)
				F			T
	c. !((5 || a) || (!b)) && (!(a) && b)
				T					F
	d. a|| b && a
		T	F
	e.!a&&b
		F
	*/











































}