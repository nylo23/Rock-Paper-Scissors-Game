#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{
	int rock = 1;
	int paper = 2;
	int scissors = 3;
	int answer;


	cout << "Choose your weapon! [1] Rock [2] Paper [3] Scissors" << endl;

	cin >> answer;
	if (answer == 1)
		{
		cout << "You Chose Rock\n";
		Sleep(3000);
		return 0;
		}
	if (answer == 2)
	{
		cout << "You Chose Paper\n";
		Sleep(3000);
		return 0;
	}
	if (answer == 3)
	{
		cout << "You Chose Scissors\n";
		Sleep(3000);
		return 0;
	}
	if (answer > 3)
	{
		cout << "Invalid Selection\n";
		Sleep(3000);
		return 0;
	}

	if (answer != 1)
	{
		cout << "Invalid Selection\n";
		Sleep(3000);
		return 0;
	}

	return 0;

}