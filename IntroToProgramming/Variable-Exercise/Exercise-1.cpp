//Number 1
#include<iostream>

int main()
{
	float a = 2.0f / 3.0f + 3.0f / 5.0f;
	int b = 2 % 3 + 3 % 5;
	int c = 23 % 15 % -2;
	float d = 25.0f * 1.0f / 2.0f;
	float e = 25.0f * 1.0f / 2.0f;
	float f = 25.0f * (1.0f / 2.0f);
	float g = 235.0f / 8.0f + 7.0f;
	float h = 235.0f / 8.0f + 7.0f;
	float i = ((20.0f + 1.0f) / 2.0f - 2.0f) / (23.0f + 3.0f)*0.2f;

	printf("%f \n", a);
	//std::cout << a;
	printf("%i \n", b);
	//std::cout << b;
	printf("%i \n", c);
	//std::cout << c;
	printf("%f \n", d);
	//std::cout << d;
	printf("%f \n", e);
	//std::cout << e;
	printf("%f \n", f);
	//std::cout << f;
	printf("%f \n", g);
	//std::cout << g;
	printf("%f \n", h);
	//std::cout << h;
	printf("%f \n", i);
	//std::cout << i;


	/*Number 2
	avgheight
	taxrateover65k
	taxratebelow5k
	totalonallgamesfromSteam*/


	/*Number 3
	a.Integer
	b.Float
	c.Character
	d.Integer
	e.Bool*/

		/*Number 4*/
	int num1;
	int num2;
	int placeholder;
	std::cout << "Enter an integer for first number then second integer:" << std::endl;
	std::cin >> num1;
	std::cin >> num2;
	std::cout << "first:" << num1 << std::endl << "second:" << num2 << std::endl;
	placeholder = num1;
	num1 = num2;
	num2 = placeholder;
	std::cout << "Consider them switched:" << std::endl << "first:" << num1;
	std::cout << std::endl << "second:" << num2 << std::endl;

	/*Number 5*/
	int z = 0;
	float x = 0;
	char ch = 'a';
	std::cout << "Please enter an integer, character, and float:" << std::endl;
	std::cin >> z >> ch >> x;
	std::cout << "z: " << z << "\nch: " << ch << "\nf: " << x << std::endl;



	/*Number 6*/
	int first;
	int second;
	int third;
	int fourth;
	int fifth;
	float avg;
	std::cout << "Please give me five numbers:" << std::endl;
	std::cin >> first >> second >> third >> fourth >> fifth;
	avg = (first + second + third + fourth + fifth) / 5.0f;
	std::cout << avg << std::endl;
	

	/*Number 7*/
	char warrior;
	char healer;
	std::cout << "Please enter 2 variables:" << std::endl;
	std::cin >> warrior >> healer;
	char mage;
	mage = ((int)warrior + (int)healer) / 2.0f;
	std::cout << mage << std::endl;

	system("pause");
	return 0;
}