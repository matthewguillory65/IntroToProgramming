#pragma once

class Vehicle
{
private:
	char m_Name;
	char m_Manufacturer;
	int m_Year;
	int m_Fuel;
	bool m_Run;

public:

	Vehicle();
	Vehicle(char m_Name, char m_Manufacturer, int m_Year, int m_Fuel, bool m_Run);
	Vehicle Camero("Camero, Chevorlet, 2007, 35, true");
};

Vehicle::Vehicle()
{
	m_Name Camero;
	m_Manufacturer Chevorlet;
	m_Year 2007;
	m_Fuel 35;
	m_Run true;
}