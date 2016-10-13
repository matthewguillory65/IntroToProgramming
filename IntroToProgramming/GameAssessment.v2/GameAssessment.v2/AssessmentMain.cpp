#include <iostream>
#include "AssessmentHeader.h"
using namespace std;



int main()
{

	//int arr[4][4] = { { '1', '2', '3', '4' },{ '1','2','3','4' },{ '1','2','3','4' },{ '1','2','3','4' } };
	//int position[2][2] = { 0, 0 };
	//int w = 0; //North
	//int d = 0; //East
	//int a = 0; //West
	//int s = 0; //South
	//int i = 0; // X
	//int j = 0; // Y
	//char character = '*';
	char input;
	cin >> input;
	//if (input == s)
	//{
	//	cout << "Test" << endl;
	//}

	//position[0][0];
	//system("cls");
	//for (int i = 0; i < 4; i++)
	//{
	//	for (int j = 0; j < 4; j++)
	//	{
	//		if (i == position[1][1] && j == position[1][1])
	//			cout << character;
	//		else
	//			cout << arr[i][j];
	//		cout << " ";
	//	}
	//	cout << endl;
	//}
	//if (input == a)
	//{
	//	cout << "Test" << endl;
	//}

	//position[0][0];
	//system("cls");
	//for (int i = 0; i < 4; i++) {
	//	for (int j = 0; j < 4; j++) {
	//		if (i == position[1][1] && j == position[1][1])
	//			cout << character;
	//		else
	//			cout << arr[i][j];
	//		cout << " ";
	//	}
	//	cout << endl;

	//}
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


	cout << "Press 'h' to attack. " << endl;
	Hero You = { 300, true };
	Enemy enemy = { 200, true };


	while (input != 'q')
	{
		cout << "Pressing the wrong key before the battle initiates"
			"will have no cost, but after you initiate the"
			"battle, you will not attack, but yet take damage. ";
		cin >> input;
		if (input != 'h')
		{
			cout << "Wrong key" << endl;
			cout << "Pressing the wrong key will result in health loss after your first attack" << endl;
		}
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
