/* Name: Muhammad Taha
   Student-ID: 22I-0870
   Assignment# 3 */
#include<iostream>
using namespace std;
int main()
{
	//Declaring Variables
	int n, N, k = 0;
	//Taking Input from User
	cout << "Enter a positive integer n: ";
	cin >> n;
	//Checking if n is positive
	while (n <= 0)
	{
		cout << "Invalid Input! n must be positive, Enter a positive value for n: ";
		cin >> n;
	}
	cout << "Starting with the number: " << n << endl;
	//Continuing loop until n equals 1
	while (n != 1)
	{
		N = n;
		if (n % 2 == 0) // Checking if n is even
		{
			n /= 2;
			cout << N << " is even, so I take half: " << n << endl;
		}
		else
		{
			n *= 3;
			n++;
			cout << N << " is odd, so I make 3n+1: " << n << endl;
		}
		k++;
	}
	//Outputting Result
	cout << "The value of k is: " << k << endl;
	return 0;
}
