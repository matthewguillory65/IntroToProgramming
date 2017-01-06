#include <iostream>
int main()
{
	
	//#1
	int x;
	int y;
	if (y == 0)
	{
	x = 100;
	}
	std::cout << x;

	std::cout << "\n" << "\n";

	//#2
	int uno;
	int dos;
	std::cin >> uno >> dos;
	if (uno < dos)
	{
	std::cout << dos << std::endl;
	}
	else if (uno > dos)
	{
	std::cout << uno << std::endl;
	}

	std::cout << "\n" << "\n";

	//#3
	//int num[5];
	//int i = 0;
	//num[i] = 0;
	//for (i = 0; i < 100; i++)
	//std::cout << num[i];

	int numa = 3;
	int numb = 5;
	int numc = 7;
	int numd = 9;
	int nume = 1;
	int numg = numa + numb + numc + numd + nume;
	if (numg < 0)
	{
		std::cout << numd, numc, numb, numa, nume;
	}
	else if (numg > 0)
	{
		std::cout << nume, numa, numb, numc, numd;
	}
	else if (numg == 0)
	{
		std::cout << numa, numb, numc, numd, nume;
	}


	std::cout << "\n" << "\n";
	
	//#4
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
	default:
	std::cout << "Invalid";
	break;
	}

	std::cout << "\n" << "\n";

	//#5

	int w;
	std::cin >> w;
	int d = (w == 0) ? 0 : 10 / w;
	
	std::cout << "\n" << "\n";

	//#6

	int a;
	int b;
	char yuh;
	std::cout << "Enter a simple math problem" << "\n";
	std::cin >> a >> yuh >> b;
	switch (yuh)
	{
	case '+':
		std::cout << a + b;
		break;
	case '-':
		std::cout << a - b;
		break;
	case '*':
		std::cout << a*b;
		break;
	case '/':
		std::cout << a / b;
	case '%':
		std::cout << a % b;
	default:
		break;

	}
	std::cout << "\n" << "\n";


	//#7
	
	std::cout << "Please enter 0-11 for months";
	using std::endl;
	int mon[12];
	mon[0] = 31;
	mon[1] = 29;
	mon[2] = 31;
	mon[3] = 30;
	mon[4] = 31;
	mon[5] = 30;
	mon[6] = 31;
	mon[7] = 31;
	mon[8] = 30;
	mon[9] = 31;
	mon[10] = 30;
	mon[11] = 31;
	int input;
	std::cin >> input;
	if (input < 0)
	{
	std::cout << "That is invalid. Try again.";
	}
	else if (input > 12)
	{
	std::cout << "There are only 12 months";
	}
	else if (mon[input])
	{
	printf("%i", mon[input]);
	}
	
	//#8
	//	bool flag = true;
	//	int numPos = 35, numNeg = -55;
	//	char frstChar = 'J', scndChar = 'O';
	//	double frstPrice = 5.60;
	//}
	
	//a. False
	//b. True
	//c.True
	//d.True
	//e.True
	//f.False
	//g.False
	//h.True
	//i.True
	//j.False
	
	
	//#9
	//bool A = True;
	//bool B = False;
	//a:	(A || B) || (A && B)
	//T			F
	//b:	!((!A) && (A)) || (A&&B);
	//F					T
	//c:	!((5 || A) || (!B)) && (!(A&&B);
	//T					T
	//d:	A || B && A;
	//T		F
	//e:	!A && B;
	//F		F
	
	system("pause");
	return 1;

}