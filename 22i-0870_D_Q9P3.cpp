/* Name: Muhammad Taha
   Student-ID: 22I-0870
   Assignment# 3 */
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Declaring Variables
	int n, space = 1, height, number, m, count = 0;
	char s = '*';

	//Pattern 3
	//Getting Input from User
	cout << "Enter the Height of the Pyramid: ";
	cin >> height;
	while (height <= 0)
	{
		cout << "Invalid Input! Height of triangle must be greater than 0, Enter again: ";
		cin >> height;
	}
	cout << "Enter the Number of Pyramids: ";
	cin >> number;
	while (number <= 0)
	{
		cout << "Invalid Input! Number of pyramids must be greater than 0, Enter again: ";
		cin >> number;
	}
	for (int rows = 0; rows < height; rows ++)
	{
		for (int cols = 0; cols < number; cols++)
		{
			if (cols == 0)
			{
				for (int spaces = 1; spaces < height - rows; spaces++)
				{
					cout << " ";
				}
			}
			else
			{
				for (int spaces = 1; spaces < 2*(height-rows)-1; spaces++)
				{
					cout << " ";
				}
			}
			for (float stars = 0; stars <= rows; stars += 0.5)
			{
				cout << s;
			}
		}
		cout << endl;
	}
	return 0;
}
