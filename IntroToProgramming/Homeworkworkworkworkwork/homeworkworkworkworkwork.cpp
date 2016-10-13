#include <iostream>
#include <time.h>
#include <string>
#include "Header.h"


//int main()
//{
//	std::cout << "Press 'm' for menu, or press 'q' to quit at anytime" << std::endl;
//	char input;
//	int rand();
//
//	std::cin >> input;
//	if (input == 'm')
//	{
//		std::cout << "Press 'a' to play Rock, Paper, Scissers" << std::endl;
//		std::cout << "Press 'b' to play Coin Flip" << std::endl;
//		std::cin >> input;
//		// rock paper scissors
//		if (input == 'a')
//		{
//			do {
//				std::string playerPick;
//				int computer = 0;
//				int srand = 0;
//				std::cout << "rock, paper, or scissors?" << std::endl;
//				std::cout << " " << std::endl;
//				std::cin >> playerPick;
//				std::cout << "You entered: " << playerPick << std::endl;
//				std::cout << " " << std::endl;
//				srand = (rand() + time(0)) % 6;
//				computer = rand() % 10 + 1;
//				if (computer <= 3)
//				{
//					std::cout << "Computer chooses: Rock" << std::endl;
//					std::cout << " " << std::endl;
//				}
//				else if (computer <= 6)
//				{
//					std::cout << "Computer chooses Paper" << std::endl;
//					std::cout << " " << std::endl;
//				}
//				else if (computer >= 7)
//				{
//					std::cout << "Computer chooses: Scissors" << std::endl;
//					std::cout << " " << std::endl;
//				}
//				if (playerPick == "rock" && computer <= 3)
//				{
//					std::cout << "It's a tie!" << std::endl;
//					std::cout << " " << std::endl;
//				}
//				else if (playerPick == "rock" && computer <= 6)
//				{
//					std::cout << "You lose!" << std::endl;
//					std::cout << " " << std::endl;
//				}
//				else if (playerPick == "rock" && computer >= 7)
//				{
//					std::cout << "You win!" << std::endl;
//					std::cout << " " << std::endl;
//				}
//				if (playerPick == "paper" && computer <= 3)
//				{
//					std::cout << "You win!" << std::endl;
//					std::cout << " " << std::endl;
//				}
//				else if (playerPick == "paper" && computer <= 6)
//				{
//					std::cout << "It's a tie!" << std::endl;
//					std::cout << " " << std::endl;
//				}
//				else if (playerPick == "paper" && computer >= 7)
//				{
//					std::cout << "You lose!" << std::endl;
//					std::cout << " " << std::endl;
//				}
//				if (playerPick == "scissors" && computer <= 3)
//				{
//					std::cout << "You lose!" << std::endl;
//					std::cout << " " << std::endl;
//				}
//				else if (playerPick == "scissors" && computer <= 6)
//				{
//					std::cout << "You win!" << std::endl;
//					std::cout << " " << std::endl;
//				}
//				else if (playerPick == "scissors" && computer >= 7)
//				{
//					std::cout << "It's a tie!" << std::endl;
//					std::cout << " " << std::endl;
//				}
//
//			}
//			while (std::cin.get());
//			std::cin.get();
//			system("pause");
//			return 1;
//		}
//
//	//}
//	//if (input == 'b' && input != 'q')
//	//{
//	//	std::cout << "Please enter a number" << std::endl;
//	//	std::cin >> input;
//	//	for (int i = 0; i < input; i++)
//	//	{
//	//		int whatEver = rand();
//	//		if (whatEver % 2 == 0)
//	//		{
//	//			std::cout << "Tails" << std::endl;
//	//		}
//	//		else
//	//		{
//	//			std::cout << "Heads" << std::endl;
//	//		}
//	//	}
//	//	system("pause");
//	//	return 1;
//	}
//}

int main()
{
	int num = Math::add(1, 2);
	system("pause");
	return 1;
}