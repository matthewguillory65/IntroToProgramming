#include <iostream>
#include "AssessmentHeader.h"

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