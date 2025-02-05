// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int intInput()
{
	int x;
	cout << "please, enter an integer: ";
	cin >> x;
	return x;
}

string markIntToStr(int mark)
{
	switch (mark)
	{
		case 1:
			return "worst";
		case 2:
			return "bad";
		case 3:
			return "fine";
		case 4:
			return "good";
		case 5:
			return "excellent";
		default:
			throw 505;
	}
}

void marks()
{
	int x = intInput();

	string g = markIntToStr(x);

	cout << g << endl;
}

void handleNumbers(int& x, int& y, int& z)
{
	if (y < x && z < y)
	{
		x <<= 1;
		y <<= 1;
		z <<= 1;

		return;
	}
	
	x *= -1;
	y *= -1;
	z *= -1;
}

void task2()
{
	int x = intInput();
	int y = intInput();
	int z = intInput();

	handleNumbers(x, y, z);

	cout << "x is " + to_string(x)  << endl;
	cout << "y is " + to_string(y) << endl;
	cout << "z is " + to_string(z) << endl;
}

int main()
{
	marks();
	task2();

	return 1;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
