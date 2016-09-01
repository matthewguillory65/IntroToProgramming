#include <iostream>
struct Zambie
{
	int health;
	bool alive;
	int spirit;
};
struct Ninja
{
	int health;
	bool alive;
	int chi;
};
int Fight(Zambie &z, Ninja &n)
{
	std::cout << "A Zambie(chris) is attacking a Ninja(regi)" << std::endl;
	n.health -= 25;
	std::cout << "The ninja took 25 damage. \nHis health is now -> " << n.health << std::endl;
	z.spirit -= 1;
	std::cout << "Since the zambie attacked, so his spirit is now -> " << z.spirit << std::endl;
	return 1;
}
//This is the first zombie/ninja fight
int SecondFight(Ninja &n, Zambie &z)
{
	std::cout << "A Ninja(regi) is attacking a Zambie(chris)" << std::endl;
	z.health -= 35;
	std::cout << "The Zambie took 35 damage.\nHis health is now -> " << z.health << std::endl;
	n.chi -= 1;
	std::cout << "Since the Ninja attacked, so his chi is now -> " << n.chi << std::endl;
	return 2;
}

int TheThirdFight(Ninja &n, Zambie &z)
{
	std::cout << "A Ninja(regi) is attacking a Zambie(matthew)" << std::endl;
	z.health -= 35;
	std::cout << "The Zambie took 35 damage.\nHis health is now -> " << z.health << std::endl;
	n.chi -= 1;
	std::cout << "Since the Ninja attacked, so his chi is now -> " << n.chi << std::endl;
	return 3;
}

int FourthFight(Zambie &z, Ninja &n)
{
	std::cout << "A Zambie(chris) is attacking a Ninja(wilson)" << std::endl;
	n.health -= 25;
	std::cout << "The ninja took 25 damage. \nHis health is now -> " << n.health << std::endl;
	z.spirit -= 1;
	std::cout << "Since the zambie attacked, so his spirit is now -> " << z.spirit << std::endl;
	return 4;
}

int FifthFight(Ninja &n, Zambie &z)
{
	std::cout << "A Ninja(wilson) is attacking a Zambie(chris)" << std::endl;
	z.health -= 35;
	std::cout << "The Zambie took 35 damage.\nHis health is now -> " << z.health << std::endl;
	n.chi -= 1;
	std::cout << "Since the Ninja attacked, so his chi is now -> " << n.chi << std::endl;
	return 5;
}

int SixthFight(Ninja &n, Zambie &z)
{
	std::cout << "A Ninja(wilson) is attacking a Zambie(matthew)" << std::endl;
	z.health -= 35;
	std::cout << "The Zambie took 35 damage.\nHis health is now -> " << z.health << std::endl;
	n.chi -= 1;
	std::cout << "Since the Ninja attacked, so his chi is now -> " << n.chi << std::endl;
	return 6;
}

int SeventhFight(Zambie &z, Ninja &n)
{
	std::cout << "A Zambie(matthew) is attacking a Ninja(regi)" << std::endl;
	z.health -= 30;
	std::cout << "The Ninja took 30 damage.\nHis health is now -> " << z.health << std::endl;
	n.chi -= 1;
	std::cout << "Since the Zambie attacked, so his chi is now -> " << n.chi << std::endl;
	return 7;
}

int EigthFight(Zambie &z, Ninja &n)
{
	std::cout << "A Zambie(matthew) is attacking a Ninja(wilson)" << std::endl;
	z.health -= 30;
	std::cout << "The Ninja took 30 damage.\nHis health is now -> " << z.health << std::endl;
	n.chi -= 1;
	std::cout << "Since the Zambie attacked, so his chi is now -> " << n.chi << std::endl;
	return 7;
}

int main()
{
	Zambie chris = { 300, true, 25 };
	Zambie matthew = { 250, true, 20 };
	Ninja regi = { 400, true, 15 };
	Ninja wilson = { 200, true, 30 };
	char input = '0';

	while (input != 'q')
	{
		std::cout << "The a key lets the Zambie(chris) attack the Ninja(regi). \n" << std::endl;
		std::cout << "The b key lets the Ninja(regi) attack the Zambie(chris). \n" << std::endl;
		std::cout << "The c key lets the Ninja(regi) attack the Zambie(matthew). \n" << std::endl;
		std::cout << "The d key lets the Zambie(chris) attack the Ninja(wilson). \n" << std::endl;
		std::cout << "The e key lets the Ninja(wilson) attack the Zambie(chris). \n" << std::endl;
		std::cout << "The f key lets the Ninja(wilson) attack the Zambie(matthew). \n" << std::endl;
		std::cout << "The g key lets the Zambie(matthew) attack the Ninja(regi). \n" << std::endl;
		std::cout << "The h key lets the Zambie(matthew) attack the Ninja(wilson). \n" << std::endl;

		std::cin >> input;
		if (input == 'a')
		{
			std::cout << "CHRIS FIGHTS REGI. " << std::endl;
			Fight(chris, regi);
		}
		if (input == 'b')
		{
			std::cout << "REGI FIGHTS CHRIS. " << std::endl;
			SecondFight(regi, chris);
		}
		if (input == 'c')
		{
			std::cout << "REGI FIGHTS MATTHEW. " << std::endl;
			TheThirdFight(regi, matthew);
		}
		if (input == 'd')
		{
			std::cout << "CHRIS FIGHTS WILSON. " << std::endl;
			FourthFight(chris, wilson);
		}
		if (input == 'e')
		{
			std::cout << "WILSON FIGHTS CHRIS. " << std::endl;
			FifthFight(wilson, chris);
		}
		if (input == 'f')
		{
			std::cout << "WILSON FIGHTS MATTHEW. " << std::endl;
			SixthFight(wilson, matthew);
		}
		if (input == 'g')
		{
			std::cout << "MATTHEW FIGHTS REGI. " << std::endl;
			FourthFight(matthew, regi);
		}
		if (input == 'h')
		{
			std::cout << "MATTHEW FIGHTS WILSON. " << std::endl;
			FourthFight(matthew, wilson);
		}
		if (regi.health < 1)
		{
			printf("wasted.... GAME OVER\n");
			printf("get guhd lol. \n \a");
			break;
		}
		if (regi.chi < 1)
		{
			printf("Not enough chi. ");
			printf("You can no longer attack \n \a");
			break;
		}
		if (wilson.health < 1)
		{
			printf("wasted.... GAME OVER\n");
			printf("get guhd lol. \n \a");
			break;
		}
		if (wilson.chi < 1)
		{
			printf("Not enough chi. ");
			printf("You can no longer attack \n \a");
			break;
		}
		if (chris.health < 1)
		{
			printf("Wasted... GAME OVER\n");
			printf("get guhd lol \n \a");
			break;
		}
		if (chris.spirit < 1)
		{
			printf("Not enough spirit. ");
			printf("You can no longer attack. \n \a");
			break;
		}
		if (matthew.health < 1)
		{
			printf("Wasted... GAME OVER\n");
			printf("get guhd lol \n \a");
			break;
		}
		if (matthew.spirit < 1)
		{
			printf("Not enough spirit. ");
			printf("You can no longer attack. \n \a");
			break;
		}

		printf("New frame: \n \n");
	}

	system("pause");
	//how i fight??
	return 0;
}