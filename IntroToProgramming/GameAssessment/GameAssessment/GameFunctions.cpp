#include <iostream>
#include "GameHeader.h"

using namespace std;

int Fight(Hero &z, Enemy &n)
{
	std::cout << "You attack the enemy!" << std::endl;
	n.health -= 25;
	std::cout << "You dealt 25 damage. His health is now -> " << n.health << std::endl;
	z.health -= 1;
	return 1;
}

int Fight(Enemy &n, Hero &z)
{
	std::cout << "You have been attacked by the enemy!" << std::endl;
	z.health -= 25;
	std::cout << "The enemy dealt 25 damage. Your health is now -> " << z.health << std::endl;
	n.health -= 1;
	return 1;
}