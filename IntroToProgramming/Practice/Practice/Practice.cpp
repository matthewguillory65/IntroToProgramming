#include <iostream>
int main()
{
	int num1;
	int num2;
	int placeholder;
	std::cout << "These need to me moved. " << std::endl;
	std::cin >> num1;
	std::cin >> num2;
	std::cout << "First:" << num1 << std::endl << "Second:" << num2 << std::endl;
	placeholder = num1;
	num1 = num2;
	num2 = placeholder;
	std::cout << "Consider them moved. " << std::endl << "first:" << num1;
	std::cout << std::endl << "second:" << num2 << std::endl;


	int a = 2 + 9 * 3;
	printf("%i \n", a);
	//std::cout << a;

	char mage;
	char ninja;
	std::cout << "Please give me two variables. " << std::endl;
	std::cin >> mage >> ninja;
	char assassin;
	assassin = ((int)mage + (int)ninja) / 2.0f;
	std::cout << assassin << std::endl;
	system("pause");

	std::cout << "Please input your age. " << std::endl;
	int age;
	std::cin >> age;
	if (age >= 18)
	{
		std::cout << "Hi adult. ";
	}
	else
	{
		std::cout << "Invalid age. Please be dismissed. ";
	}

	system("pause");
	return 0;
}

{
	int i = 0;
	char a = 0;
	float 'a';
	std::cin >> i >> ch >> f;
	std::cout << "i:" << i << "\nch:" << ch << "\nf:" << f << std::endl;
	system("pause");
	return 0;
}