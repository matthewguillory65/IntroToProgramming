#include <iostream>
#include "Car.h"


void Vehicle::Fuel(int a)
{
	m_Fuel = a;
}

void Vehicle::m_Run(int a)
{
	m_Run = a;
}

int main()
{
	Vehicle Camero = Vehicle();
	Camero.Fuel(2);

	if (m_Fuel < 0)
	{
		std::cout << "The car can no longer drive.. " << std::endl;
	}
}
