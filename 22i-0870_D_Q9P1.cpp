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

	//Getting Input from User
	cout << "Enter the number for the first pattern: ";
	cin >> n;
	//Input Validation
	while (n <= 0)
	{
		cout << "Invalid Input! Number must be greater than 0, Enter again: ";
		cin >> n;
	}
	
	//Pattern 1
	if (n % 2 == 0)
	{
		m = n + 1;
	}	
	else
	{
		m = n;
	}
	for (int spaces = 1; spaces <= n+2; spaces++)
	{
		cout << " ";
	}
	for (int i = 0; i < m; i++)
	{
		cout << s;
	}
	cout << endl;
	for (int j = 5; j <= n; j+=2)
	{
		for (int spaces = 1; spaces <= n-j/2+3; spaces++)
		{
			cout << " ";
		}
		cout << s;
		for (int spaces = 1; spaces <= m+j-5; spaces++)
		{
			cout << " ";
		}
		cout << s << endl;
		count++;
	}
	if (n % 2 != 0)
	{
		count--;
	}
	for (int k = 2*(n-2); k >= 1; k-=2)
	{
		for (int spaces = 1; spaces <= 7+(n-2-k/2)+count; spaces++)
		{
			cout << " ";
		}
		for (int l = 0; l != (k - 1); l++)
		{
			cout << s;
		}
		cout << endl;
	}
	return 0;
}
