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

	//Pattern 2
	//Getting Input from User
	cout << "Enter number for the second pattern: ";
	cin >> n;
	//Input Validation
	while (n <= 0)
	{
		cout << "Invalid Input! Number must be greater than 0, Enter again: ";
		cin >> n;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << s;
		}
		for (int spaces = 1; spaces <= (2*n+1-(2*i)); spaces++)
		{
			cout << " ";
		}
		for (int k = 0; k < i; k++)
		{
			cout << s;
		}
		cout << endl;
	}
	for (int i = n-1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << s;
		}
		for (int spaces = 1; spaces <= (2*n+1-(2*i)); spaces++)
		{
			cout << " ";
		}
		
		for (int k = 0; k < i; k++)
		{
			cout << s;
		}
		cout << endl;
	}
	return 0;
}
