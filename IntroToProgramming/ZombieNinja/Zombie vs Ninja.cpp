#include <iostream>
struct YourPokemon
{
	int health;
	bool alive;
	int spirit;
};
struct Yourpokemon
{
	int health;
	bool alive;
	int chi;
};
int Fight(YourPokemon &z, Yourpokemon &n)
{
	std::cout << "Raichu used thunderbolt!" << std::endl;
	n.health -= 75;
	std::cout << "Super Effective! \nHis health is now -> " << n.health << std::endl;
	z.spirit -= 1;
	std::cout << "Minus one PP -> " << z.spirit << std::endl;
	return 1;
}
//This is the first zombie/ninja fight
int SecondFight(Yourpokemon &n, YourPokemon &z)
{
	std::cout << "A Ninja(Charizard) is attacking a Zambie(Raichu)" << std::endl;
	z.health -= 35;
	std::cout << "The Zambie took 35 damage.\nHis health is now -> " << z.health << std::endl;
	n.chi -= 1;
	std::cout << "Since the Ninja attacked, so his chi is now -> " << n.chi << std::endl;
	return 2;
}

int TheThirdFight(Yourpokemon &n, YourPokemon &z)
{
	std::cout << "A Ninja(Charizard) is attacking a Zambie(Snorlax)" << std::endl;
	z.health -= 35;
	std::cout << "The Zambie took 35 damage.\nHis health is now -> " << z.health << std::endl;
	n.chi -= 1;
	std::cout << "Since the Ninja attacked, so his chi is now -> " << n.chi << std::endl;
	return 3;
}

int FourthFight(YourPokemon &z, Yourpokemon &n)
{
	std::cout << "A Zambie(Raichu) is attacking a Ninja(Caterpie)" << std::endl;
	n.health -= 25;
	std::cout << "The ninja took 25 damage. \nHis health is now -> " << n.health << std::endl;
	z.spirit -= 1;
	std::cout << "Since the zambie attacked, so his spirit is now -> " << z.spirit << std::endl;
	return 4;
}

int FifthFight(Yourpokemon &n, YourPokemon &z)
{
	std::cout << "A Ninja(Caterpie) is attacking a Zambie(Raichu)" << std::endl;
	z.health -= 35;
	std::cout << "The Zambie took 35 damage.\nHis health is now -> " << z.health << std::endl;
	n.chi -= 1;
	std::cout << "Since the Ninja attacked, so his chi is now -> " << n.chi << std::endl;
	return 5;
}

int SixthFight(Yourpokemon &n, YourPokemon &z)
{
	std::cout << "A Ninja(Caterpie) is attacking a Zambie(Snorlax)" << std::endl;
	z.health -= 35;
	std::cout << "The Zambie took 35 damage.\nHis health is now -> " << z.health << std::endl;
	n.chi -= 1;
	std::cout << "Since the Ninja attacked, so his chi is now -> " << n.chi << std::endl;
	return 6;
}

int SeventhFight(YourPokemon &z, Yourpokemon &n)
{
	std::cout << "A Zambie(Snorlax) is attacking a Ninja(Chairzard)" << std::endl;
	z.health -= 30;
	std::cout << "The Ninja took 30 damage.\nHis health is now -> " << z.health << std::endl;
	n.chi -= 1;
	std::cout << "Since the Zambie attacked, so his chi is now -> " << n.chi << std::endl;
	return 7;
}

int EigthFight(YourPokemon &z, Yourpokemon &n)
{
	std::cout << "A Zambie(Snorlax) is attacking a Ninja(Caterpie)" << std::endl;
	z.health -= 30;
	std::cout << "The Ninja took 30 damage.\nHis health is now -> " << z.health << std::endl;
	n.chi -= 1;
	std::cout << "Since the Zambie attacked, so his chi is now -> " << n.chi << std::endl;
	return 7;
}

int main()
{
	YourPokemon Raichu = { 300, true, 25 };
	YourPokemon Snorlax = { 250, true, 20 };
	Yourpokemon Charizard = { 400, true, 15 };
	Yourpokemon Caterpie = { 200, true, 30 };
	char input = '0';

	while (input != 'q')
	{
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << "Press a, b, c, d, e, f, g, or h to start a fight. \n" << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cin >> input;
		if (input == 'a')
		{
			std::cout << "Raichu FIGHTS Charizard. " << std::endl;
			Fight(Raichu, Charizard);
		}
		if (input == 'b')
		{
			std::cout << "Charizard FIGHTS Raichu. " << std::endl;
			SecondFight(Charizard, Raichu);
		}
		if (input == 'c')
		{
			std::cout << "Charizard FIGHTS Snorlax. " << std::endl;
			TheThirdFight(Charizard, Snorlax);
		}
		if (input == 'd')
		{
			std::cout << "Raichu FIGHTS Caterpie. " << std::endl;
			FourthFight(Raichu, Caterpie);
		}
		if (input == 'e')
		{
			std::cout << "Caterpie FIGHTS Raichu. " << std::endl;
			FifthFight(Caterpie, Raichu);
		}
		if (input == 'f')
		{
			std::cout << "Caterpie FIGHTS Snorlax. " << std::endl;
			SixthFight(Caterpie, Snorlax);
		}
		if (input == 'g')
		{
			std::cout << "Snorlax FIGHTS Charizard. " << std::endl;
			FourthFight(Snorlax, Charizard);
		}
		if (input == 'h')
		{
			std::cout << "Snorlax FIGHTS Caterpie. " << std::endl;
			FourthFight(Snorlax, Caterpie);
		}
		if (Charizard.health < 1)
		{
			printf("Charizard Fainted! \n");
			break;
		}
		if (Charizard.chi < 1)
		{
			printf("Not enough PP. \n");
			break;
		}
		if (Caterpie.health < 1)
		{
			printf("Caterpie Fainted! \n");
			break;
		}
		if (Caterpie.chi < 1)
		{
			printf("Not enough PP. ");
			break;
		}
		if (Raichu.health < 1)
		{
			printf("Raichu Fainted! \n");
			break;
		}
		if (Raichu.spirit < 1)
		{
			printf("Not enough PP. ");
			break;
		}
		if (Snorlax.health < 1)
		{
			printf("Snorlax Fainted! \n");
			break;
		}
		if (Snorlax.spirit < 1)
		{
			printf("Not enough PP. ");
			break;
		}

		printf("New frame: \n \n");
	}
	std::cout << "Game over!" << std::endl;
	std::cout << "Code designer, Matt" << std::endl;
	std::cout << "#TeachMasterFlex - A.K.A. Matthew(not me)" << std::endl;
	std::cout << "Special thanks to AIE" << std::endl;
	system("pause");
	//how i fight??
	return 0;
}