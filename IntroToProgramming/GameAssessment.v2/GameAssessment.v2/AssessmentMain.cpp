#include <iostream>
#include "AssessmentHeader.h"
using namespace std;



int main()
{

	int arr[4][4] = { { '1', '2', '3', '4' },{ '1','2','3','4' },{ '1','2','3','4' },{ '1','2','3','4' } };
	int position[2][2] = { 0, 0 };
	int w = 0; //North
	int d = 0; //East
	int a = 0; //West
	int s = 0; //South
	int i = 0; // X
	int j = 0; // Y
	char character = '*';
	char input;
	cin >> input;
	if (input == s)
	{
		cout << "Test" << endl;
	}

	position[0][0];
	system("cls");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == position[1][1] && j == position[1][1])
				cout << character;
			else
				cout << arr[i][j];
			cout << " ";
		}
		cout << endl;
	}
	if (input == a)
	{
		cout << "Test" << endl;
	}

	position[0][0];
	system("cls");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i == position[1][1] && j == position[1][1])
				cout << character;
			else
				cout << arr[i][j];
			cout << " ";
		}
		cout << endl;

	}
	//if (input == s)
	//{
	//  cout << "Test" << endl;
	//}
	//for (int i = 0; i < 4; ++i) {
	//  for (int j = 0; j < 4; ++j) {
	//      if (i == position[-1] && j == position[0])
	//          cout << character;
	//      else
	//          cout << arr[i][j];
	//      cout << " ";
	//  }
	//  cout << endl;
	//}
	//position[1] = 1;
	//system("cls");
	//for (int i = 0; i < 4; i++) {
	//  for (int j = 0; j < 4; j++) {
	//      if (i == position[-1] && j == position[0])
	//          cout << character;
	//      else
	//          cout << arr[i][j];
	//      cout << " ";
	//  }
	//  cout << endl;
	//  break;
	//}
	//cin >> input;
	//if (input == w)
	//{
	//  cout << "Test" << endl;
	//}
	//for (int i = 0; i < 4; ++i) {
	//  for (int j = 0; j < 4; ++j) {
	//      if (i == position[0] && j == position[-1])
	//          cout << character;
	//      else
	//          cout << arr[i][j];
	//      cout << " ";
	//  }
	//  cout << endl;
	//}
	//position[1] = 1;
	//system("cls");
	//for (int i = 0; i < 4; i++) {
	//  for (int j = 0; j < 4; j++) {
	//      if (i == position[0] && j == position[-1])
	//          cout << character;
	//      else
	//          cout << arr[i][j];
	//      cout << " ";
	//  }
	//  cout << endl;
	//  break;
	//}
	system("pause");
	return 1;
}

	//cout << "Press 'h' to attack. " << endl;
	//Hero You = { 300, true };
	//Enemy enemy = { 200, true };

	//int FirstFight(Hero &z, Enemy &n)
	//{
	//	std::cout << "You attack the enemy!" << std::endl;
	//	n.health -= 25;
	//	std::cout << "You dealt 25 damage. His health is now -> " << n.health << std::endl;
	//	z.health -= 0;
	//	return 1;
	//}
	//int SecondFight(Enemy &n, Hero &z)
	//{
	//	std::cout << "You have been attacked by the enemy!" << std::endl;
	//	z.health -= 10;
	//	std::cout << "The enemy dealt 10 damage. Your health is now -> " << z.health << std::endl;
	//	n.health -= 0;
	//	return 1;
	//}
	//while (input != 'q')
	//{
	//	cin >> input;
	//	if (input != 'h')
	//	{
	//		cout << "Wrong key" << endl;
	//		cout << "Pressing the wrong key will result in health loss after your first attack" << endl;
	//	}
	//	if (input == 'h')
	//	{
	//		FirstFight(You, enemy);
	//	}
	//	if (enemy.health < 200)
	//	{
	//		SecondFight(enemy, You);
	//	}
	//	if (enemy.health < 1)
	//	{
	//		cout << "You have defeated the enemy. Continue moving. \n";
	//		break;
	//	}
	//	if (You.health < 1)
	//	{
	//		cout << "You have died. \n";
	//		/*break;*/
	//	}
	///*}*/
