#include <iostream>
#include "GameHeader.h"

using namespace std;

int FirstFight(Hero &z, Enemy &n)
{
	std::cout << "You attack the enemy!" << std::endl;
	n.health -= 25;
	std::cout << "You dealt 25 damage. His health is now -> " << n.health << std::endl;
	z.health -= 0;
	return 1;
}


int SecondFight(Enemy &n, Hero &z)
{
	std::cout << "You have been attacked by the enemy!" << std::endl;
	z.health -= 10;
	std::cout << "The enemy dealt 10 damage. Your health is now -> " << z.health << std::endl;
	n.health -= 0;
	return 1;
}

int main()
{
	char input = '0';
	Hero You = { 300, true };
	Enemy enemy = { 200, true };

	while (input != 'q')
	{
		cin >> input;
		if (input == 'h')
		{
			FirstFight(You, enemy);
		}

		if (enemy.health < 200)
		{
			SecondFight(enemy, You);
		}

		if (enemy.health < 1)
		{
			cout << "You have defeated the enemy. Continue moving. \n";
			break;
		}

		if (You.health < 1)
		{
			cout << "You have died. \n";
			break;
		}


	}
	system("pause");
	return 1;
}