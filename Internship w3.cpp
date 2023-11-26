#include<iostream>
using namespace std;

const int r = 3;
const int col = 3;

int sourcedata[r][col] =
{
	{55, 65, 75},
	{120, 150, 170},
	{210, 230, 240}
};

void costSlab1()
{
	int units = 0;
	int cost = 0;
	for (int a = 0; a <= 100 && a < col; a++)
	{
		units += sourcedata[0][a];
		cost += (a + 1) * 10;
	}

	cout << "Slab 1 bill." << endl;
	cout << "Total Units: " << units << endl;
	cout << "Total Cost Rs. " << cost << endl;
}

void costSlab2()
{
	int units1 = 0;
	int cost1 = 0;

	for (int b = 101; b <= 200 && b < col; ++b)
	{
		units1 += sourcedata[1][b - 101];
		cost1 += (b - 100) * 15;
	}

	cout << "Slab 2 bill." << endl;
	cout << "Total Units: " << units1 << endl;
	cout << "Total Cost Rs. " << cost1 << endl;

}

void costSlab3()
{
	int units2 = 0;
	int cost2 = 0;

	for (int c = 201; c < 300 && c < col; c++)
	{
		units2 += sourcedata[2][c - 201];
		cost2 += (c - 200) * 20;
	}

	cout << "Slab 3 bill." << endl;
	cout << "Total Units: " << units2 << endl;
	cout << "Total Cost Rs. " << cost2 << endl;

}

int main()
{
	cout << "Student's ID: 032188456" << endl;
	char c;

	do
	{
		cout << "Main Menu" << endl;
		cout << "Enter 1 for displaying slab 1 and 2 bills." << endl;
		cout << "Enter 2 for displaying slab 3 bill." << endl;
		cout << "Enter any key to exit." << endl;
		cout << "Enter your choice: ";
		cin >> c;

		switch (c)
		{
		case '1':
			costSlab1();
			costSlab2();
			break;

		case '2':
			costSlab3();
			break;

		default:
			cout << "Exiting from program." << endl;
			break;
		}

	} while (c == '1' || c == '2');

	return 0;
}
