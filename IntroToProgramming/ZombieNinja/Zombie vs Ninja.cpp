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
	std::cout << "Raichu used Thunderbolt! \n" << std::endl;
	n.health -= 75;
	std::cout << "Super Effective! Charizard took 75 damage. \nCharizard's health is now: \n" << n.health << std::endl;
	z.spirit -= 1;
	std::cout << "Minus one PP; \n" << z.spirit << std::endl;
	system("pause");
	return 1;
}

int Fightv1(YourPokemon &z, Yourpokemon &n)
{
	std::cout << "Raichu used Headbutt! \n" << std::endl;
	n.health -= 35;
	std::cout << "Charizard took 35 damage. \nCharizard health is now: \n" << n.health << std::endl;
	z.spirit -= 1;
	std::cout << "Minus one PP; \n" << z.spirit << std::endl;
	system("pause");
	return 1;
}

int Fightv2(YourPokemon &z, Yourpokemon &n)
{
	std::cout << "Raichu used Thunder Punch! \n" << std::endl;
	n.health -= 80;
	std::cout << "Super effective! Charizard took 80 damage. \nCharizard health is now: \n" << n.health << std::endl;
	z.spirit -= 1;
	std::cout << "Minus one PP; \n" << z.spirit << std::endl;
	system("pause");
	return 1;
}

int Fightv3(YourPokemon &z, Yourpokemon &n)
{
	std::cout << "Raichu used Thunder! \n" << std::endl;
	n.health -= 120;
	std::cout << "Super effective! Charizard took 120 damage. \nCharizard health is now: \n" << n.health << std::endl;
	z.spirit -= 10;
	std::cout << "Minus ten PP; \n" << z.spirit << std::endl;
	system("pause");
	return 1;
}

int SecondFight(Yourpokemon &n, YourPokemon &z)
{
	std::cout << "Charizard used Flamethrower!" << std::endl;
	z.health -= 35;
	std::cout << "Raichu took 35 damage.\nRaichu's health is now: \n" << z.health << std::endl;
	n.chi -= 1;
	std::cout << "Minus one PP: \n" << n.chi << std::endl;
	system("pause");
	return 1;
}

int SecondFightv1(Yourpokemon &n, YourPokemon &z)
{
	std::cout << "Charizard used Seismic Toss!" << std::endl;
	z.health -= 35;
	std::cout << "Raichu took 35 damage.\nRaichu's health is now: \n" << z.health << std::endl;
	n.chi -= 1;
	std::cout << "Minus one PP: \n" << n.chi << std::endl;
	system("pause");
	return 1;
}

int SecondFightv2(Yourpokemon &n, YourPokemon &z)
{
	std::cout << "Charizard used Slash" << std::endl;
	z.health -= 25;
	std::cout << "Raichu took 25 damage.\nRaichu's health is now: \n" << z.health << std::endl;
	n.chi -= 1;
	std::cout << "Minus one PP: \n" << n.chi << std::endl;
	system("pause");
	return 1;
}

int SecondFightv3(Yourpokemon &n, YourPokemon &z)
{
	std::cout << "Charizard used Fire Blast!" << std::endl;
	z.health -= 120;
	std::cout << "Raichu took 120 damage.\nRaichu's health is now: \n" << z.health << std::endl;
	n.chi -= 7;
	std::cout << "Minus seven PP: \n" << n.chi << std::endl;
	system("pause");
	return 1;
}

int TheThirdFight(Yourpokemon &n, YourPokemon &z)
{
	std::cout << "Charizard used Flamethrower!" << std::endl;
	z.health -= 35;
	std::cout << "Snorlax took 35 damage.\nSnorlax's health is now: \n" << z.health << std::endl;
	n.chi -= 1;
	std::cout << "Minus one PP: \n" << n.chi << std::endl;
	system("pause");
	return 1;
}

int TheThirdFightv1(Yourpokemon &n, YourPokemon &z)
{
	std::cout << "Charizard used Seismic Toss!" << std::endl;
	z.health -= 25;
	std::cout << "Snorlax took 25 damage.\nSnorlax's health is now: \n" << z.health << std::endl;
	n.chi -= 1;
	std::cout << "Minus one PP: \n" << n.chi << std::endl;
	system("pause");
	return 1;
}

int TheThirdFightv2(Yourpokemon &n, YourPokemon &z)
{
	std::cout << "Charizard used Slash" << std::endl;
	z.health -= 25;
	std::cout << "Snorlax took 25 damage.\nSnorlax's health is now: \n" << z.health << std::endl;
	n.chi -= 1;
	std::cout << "Minus one PP: \n" << n.chi << std::endl;
	system("pause");
	return 1;
}

int TheThirdFightv3(Yourpokemon &n, YourPokemon &z)
{
	std::cout << "Charizard used Fire Blast!" << std::endl;
	z.health -= 120;
	std::cout << "Snorlax took 120 damage.\nSnorlax's health is now: \n" << z.health << std::endl;
	n.chi -= 7;
	std::cout << "Minus seven PP: \n" << n.chi << std::endl;
	system("pause");
	return 1;
}

int FourthFight(YourPokemon &z, Yourpokemon &n)
{
	std::cout << "Raichu used Thunderbolt!" << std::endl;
	n.health -= 25;
	std::cout << "Caterpie took 25 damage. \nCaterpie's health is now: \n" << n.health << std::endl;
	z.spirit -= 1;
	std::cout << "Minus one PP: \n" << z.spirit << std::endl;
	system("pause");
	return 1;
}

int FourthFightv1(YourPokemon &z, Yourpokemon &n)
{
	std::cout << "Raichu used Headbutt!" << std::endl;
	n.health -= 35;
	std::cout << "Caterpie took 35 damage. \nCaterpie's health is now: \n" << n.health << std::endl;
	z.spirit -= 1;
	std::cout << "Minus one PP: \n" << z.spirit << std::endl;
	system("pause");
	return 1;
}

int FourthFightv2(YourPokemon &z, Yourpokemon &n)
{
	std::cout << "Raichu used Thunder Punch! \n" << std::endl;
	n.health -= 80;
	std::cout << "Caterpie took 80 damage. \nCaterpie's health is now: \n" << n.health << std::endl;
	z.spirit -= 1;
	std::cout << "Minus one PP; \n" << z.spirit << std::endl;
	system("pause");
	return 1;
}

int FourthFightv3(YourPokemon &z, Yourpokemon &n)
{
	std::cout << "Raichu used Thunder! \n" << std::endl;
	n.health -= 120;
	std::cout << "Caterpie took 120 damage. \nCaterpie's health is now: \n" << n.health << std::endl;
	z.spirit -= 10;
	std::cout << "Minus ten PP; \n" << z.spirit << std::endl;
	system("pause");
	return 1;
}

int FifthFight(Yourpokemon &n, YourPokemon &z)
{
	std::cout << "Caterpie used Tackle!" << std::endl;
	z.health -= 10;
	std::cout << "Raichu took 10 damage.\nRaichu's health is now: \n" << z.health << std::endl;
	n.chi -= 1;
	std::cout << "Minus one PP: \n" << n.chi << std::endl;
	system("pause");
	return 1;
}

int FifthFightv1(Yourpokemon &n, YourPokemon &z)
{
	std::cout << "Caterpie used Bug Bite!" << std::endl;
	z.health -= 15;
	std::cout << "Raichu took 15 damage.\nRaichu's health is now: \n" << z.health << std::endl;
	n.chi -= 1;
	std::cout << "Minus one PP: \n" << n.chi << std::endl;
	system("pause");
	return 1;
}

int FifthFightv2(Yourpokemon &n, YourPokemon &z)
{
	std::cout << "Caterpie used Electroweb!" << std::endl;
	z.health -= 15;
	std::cout << "It wasn't very effective... Raichu took 15 damage.\nRaichu's health is now: \n" << z.health << std::endl;
	n.chi -= 1;
	std::cout << "Minus one PP: \n" << n.chi << std::endl;
	system("pause");
	return 1;
}

int SixthFight(Yourpokemon &n, YourPokemon &z)
{
	std::cout << "Caterpie used Tackle!" << std::endl;
	z.health -= 10;
	std::cout << "Snorlax took 10 damage.\nSnorlax's health is now: \n" << z.health << std::endl;
	n.chi -= 1;
	std::cout << "Minus one PP: \n" << n.chi << std::endl;
	system("pause");
	return 1;
}

int SixthFightv1(Yourpokemon &n, YourPokemon &z)
{
	std::cout << "Caterpie used Bug Bite!" << std::endl;
	z.health -= 15;
	std::cout << "Snorlax took 15 damage.\nSnorlax's health is now: \n" << z.health << std::endl;
	n.chi -= 1;
	std::cout << "Minus one PP: \n" << n.chi << std::endl;
	system("pause");
	return 1;
}

int SixthFightv2(Yourpokemon &n, YourPokemon &z)
{
	std::cout << "Caterpie used Electroweb!" << std::endl;
	z.health -= 55;
	std::cout << "Snorlax took 55 damage.\nSnorlax's health is now: \n" << z.health << std::endl;
	n.chi -= 1;
	std::cout << "Minus one PP: \n" << n.chi << std::endl;
	system("pause");
	return 1;
}

int SeventhFight(YourPokemon &z, Yourpokemon &n)
{
	std::cout << "Snorlax used Body Slam!" << std::endl;
	n.health -= 40;
	std::cout << "Charizard took 40 damage.\nCharizard's health is now: \n" << n.health << std::endl;
	z.spirit -= 1;
	std::cout << "Minus one PP: \n" << z.spirit << std::endl;
	system("pause");
	return 1;
}

int SeventhFightv1(YourPokemon &z, Yourpokemon &n)
{
	std::cout << "Snorlax used Crunch!" << std::endl;
	n.health -= 60;
	std::cout << "Charizard took 60 damage.\nCharizard's health is now: \n" << n.health << std::endl;
	z.spirit -= 1;
	std::cout << "Minus one PP: \n" << z.spirit << std::endl;
	system("pause");
	return 1;
}

int SeventhFightv2(YourPokemon &z, Yourpokemon &n)
{
	std::cout << "Snorlax used Chip Away!" << std::endl;
	n.health -= 55;
	std::cout << "Charizard took 55 damage.\nCharizard's health is now: \n" << n.health << std::endl;
	z.spirit -= 1;
	std::cout << "Minus one PP: \n" << z.spirit << std::endl;
	system("pause");
	return 1;
}

int SeventhFightv3(YourPokemon &z, Yourpokemon &n)
{
	std::cout << "Snorlax used Focus Blast!" << std::endl;
	n.health -= 75;
	std::cout << "Charizard took 75 damage.\nCharizard's health is now: \n" << n.health << std::endl;
	z.spirit -= 3;
	std::cout << "Minus one PP: \n" << z.spirit << std::endl;
	system("pause");
	return 1;
}

int EigthFight(YourPokemon &z, Yourpokemon &n)
{
	std::cout << "Snorlax used Body Slam!" << std::endl;
	n.health -= 40;
	std::cout << "Caterpie took 40 damage.\nCaterpie's health is now: \n" << n.health << std::endl;
	z.spirit -= 1;
	std::cout << "Minus one PP: \n" << z.spirit << std::endl;
	system("pause");
	return 7;
}

int EigthFightv1(YourPokemon &z, Yourpokemon &n)
{
	std::cout << "Snorlax used Crunch!" << std::endl;
	n.health -= 60;
	std::cout << "Caterpie took 60 damage.\nCaterpie's health is now: \n" << n.health << std::endl;
	z.spirit -= 1;
	std::cout << "Minus one PP: \n" << n.chi << std::endl;
	system("pause");
	return 7;
}

int EigthFightv2(YourPokemon &z, Yourpokemon &n)
{
	std::cout << "Snorlax used Chip Away!" << std::endl;
	n.health -= 55;
	std::cout << "Caterpie took 55 damage.\nCaterpie's health is now: \n" << n.health << std::endl;
	z.spirit -= 1;
	std::cout << "Minus one PP: \n" << z.spirit << std::endl;
	system("pause");
	return 1;
}

int EigthFightv3(YourPokemon &z, Yourpokemon &n)
{
	std::cout << "Snorlax used Focus Blast!" << std::endl;
	n.health -= 75;
	std::cout << "Caterpie took 75 damage.\nCaterpie's health is now: \n" << n.health << std::endl;
	z.spirit -= 3;
	std::cout << "Minus one PP: \n" << z.spirit << std::endl;
	system("pause");
	return 1;
}

int main()
{
	YourPokemon Raichu = { 300, true, 25 };

	YourPokemon Snorlax = { 250, true, 20 };

	Yourpokemon Charizard = { 400, true, 30 };

	Yourpokemon Caterpie = { 200, true, 30 };

	char input = '0';

	while (input != 'q')
	{
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << "Press a, b, c, d, e, f, g, or h to start a fight. \n" << std::endl;
		std::cout << "Press A, B, C, D, E, F, G, OR H to start a fight. \n" << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << "|          If a, only use a and b keys          |" << std::endl;
		std::cout << "|          If c, only use c and g keys          |" << std::endl;
		std::cout << "|          If d, only use d and e keys          |" << std::endl;
		std::cout << "|          If f, only use f and h keys          |" << std::endl;
		std::cout << "|           Capital letters work too            |" << std::endl;
		std::cout << "|                 In same order                 |" << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cin >> input;
		//raichu vs charizard
		if (input == 'a')
		{
			std::cout << "Raichu Battles Charizard. \n" << std::endl;
			Fight(Raichu, Charizard);
		}
		
		if (input == 'A')
		{
			std::cout << "Raichu Battles Charizard. \n" << std::endl;
			Fightv1(Raichu, Charizard);
		}

		if (input == 'b')
		{
			std::cout << "Raichu Battles Charizard. \n" << std::endl;
			Fightv2(Raichu, Charizard);
		}

		if (input == 'B')
		{
			std::cout << "Raichu Battles Charizard. \n" << std::endl;
			Fightv3(Raichu, Charizard);
		}
		//Charizard vs raichu
		if (input == 'c')
		{
			std::cout << "Charizard Battles Raichu. \n" << std::endl;
			SecondFight(Charizard, Raichu);
		}

		if (input == 'C')
		{
			std::cout << "Charizard Battles Raichu. \n" << std::endl;
			SecondFightv1(Charizard, Raichu);
		}

		if (input == 'd')
		{
			std::cout << "Charizard Battles Raichu. \n" << std::endl;
			SecondFightv2(Charizard, Raichu);
		}

		if (input == 'D')
		{
			std::cout << "Charizard Battles Raichu. \n" << std::endl;
			SecondFightv3(Charizard, Raichu);
		}
		//Charizard vs Snorlax
		if (input == 'e')
		{
			std::cout << "Charizard Battles Snorlax. \n" << std::endl;
			TheThirdFight(Charizard, Snorlax);
		}

		if (input == 'E')
		{
			std::cout << "Charizard Battles Snorlax. \n" << std::endl;
			TheThirdFightv1(Charizard, Snorlax);
		}

		if (input == 'f')
		{
			std::cout << "Charizard Battles Snorlax. \n" << std::endl;
			TheThirdFightv2(Charizard, Snorlax);
		}

		if (input == 'F')
		{
			std::cout << "Charizard Battles Snorlax. \n" << std::endl;
			TheThirdFightv3(Charizard, Snorlax);
		}
		//raichu vs caterpie
		if (input == 'g')
		{
			std::cout << "Raichu Battles Caterpie. \n" << std::endl;
			FourthFight(Raichu, Caterpie);
		}

		if (input == 'G')
		{
			std::cout << "Raichu Battles Caterpie. \n" << std::endl;
			FourthFightv1(Raichu, Caterpie);
		}

		if (input == 'h')
		{
			std::cout << "Raichu Battles Caterpie. \n" << std::endl;
			FourthFightv2(Raichu, Caterpie);
		}

		if (input == 'H')
		{
			std::cout << "Raichu Battles Caterpie. \n" << std::endl;
			FourthFightv3(Raichu, Caterpie);
		}
		//caterpie vs raichu
		if (input == 'i')
		{
			std::cout << "Caterpie Battles Raichu. \n" << std::endl;
			FifthFight(Caterpie, Raichu);
		}

		if (input == 'I')
		{
			std::cout << "Caterpie Battles Raichu. \n" << std::endl;
			FifthFightv1(Caterpie, Raichu);
		}

		if (input == 'j')
		{
			std::cout << "Caterpie Battles Raichu. \n" << std::endl;
			FifthFightv2(Caterpie, Raichu);
		}
		//Caterpie vs Raichu
		if (input == 'k')
		{
			std::cout << "Caterpie Battles Snorlax. \n" << std::endl;
			SixthFight(Caterpie, Snorlax);
		}

		if (input == 'K')
		{
			std::cout << "Caterpie Battles Snorlax. \n" << std::endl;
			SixthFightv1(Caterpie, Snorlax);
		}

		if (input == 'l')
		{
			std::cout << "Caterpie Battles Snorlax. \n" << std::endl;
			SixthFightv2(Caterpie, Snorlax);
		}
		//Snorlax vs Charizard
		if (input == 'm')
		{
			std::cout << "Snorlax Battles Charizard. \n" << std::endl;
			SeventhFight(Snorlax, Charizard);
		}

		if (input == 'M')
		{
			std::cout << "Snorlax Battles Charizard. \n" << std::endl;
			SeventhFightv1(Snorlax, Charizard);
		}

		if (input == 'n')
		{
			std::cout << "Snorlax Battles Charizard. \n" << std::endl;
			SeventhFightv2(Snorlax, Charizard);
		}

		if (input == 'N')
		{
			std::cout << "Snorlax Battles Charizard. \n" << std::endl;
			SeventhFightv3(Snorlax, Charizard);
		}
		//Snorlax vs caterpie
		if (input == 'o')
		{
			std::cout << "Snorlax Battles Caterpie. \n" << std::endl;
			EigthFight(Snorlax, Caterpie);
		}

		if (input == 'O')
		{
			std::cout << "Snorlax Battles Caterpie. \n" << std::endl;
			EigthFightv1(Snorlax, Caterpie);
		}

		if (input == 'p')
		{
			std::cout << "Snorlax Battles Caterpie. \n" << std::endl;
			EigthFightv2(Snorlax, Caterpie);
		}

		if (input == 'P')
		{
			std::cout << "Snorlax Battles Caterpie. \n" << std::endl;
			EigthFightv3(Snorlax, Caterpie);
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

	std::cout << "Game over! \n" << std::endl;

	std::cout << "Code designer, Matt(me) \n" << std::endl;

	system("pause");

	//how i fight??
	return 0;
}