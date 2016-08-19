#include <iostream>
int main()

	//Number 1

{
		int x;
		int y = 0;
		if (y == 0) {
			x = 100;
		}
		std::cout << x;
		system("pause");
		
	
	
		//Number 2
	
		std::cout << "Please input two numbers" << std::endl;
		int num1;
		int num2;
		std::cin >> num1 >> num2;
		if (num1 < num2)
		{
			std::cout << num2 << std::endl;
		}
		else if (num1 > num2)
		{
			std::cout << num1 << std::endl;
		}
	
		
	
	
		//Number 3
		/*int num[5];
		int i = 0;
		for (int i = 0; i < 100; i++);
		std::cout << num[i];*/
		
	
	
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

		std::cout << "Please enter something" << std::endl;
		int x;
		std::cin >> x;
		int y = (x == 0) ? 0 : 10 / x;
		std::cout << y;


		//Number 6

		int a;
		int b;
		char bleh;
		std::cin >> a >> bleh >> b;
		switch ((int)bleh)
		{
		case 1:
			std::cout << 4 + 4;
			break;
		case 2:
			std::cout << 16 - 5;
			break;
		case 3:
			std::cout << 16 * 16;
			break;
		case 4:
			std::cout << 1.0f / 7.0f;
			break;
		case 5:
			std::cout << 5 % 8;
			break;
		default:
			;
		}


		//Number 7

		system("pause");
		return 0;













































}