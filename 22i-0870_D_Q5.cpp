/* Name: Muhammad Taha
   Student-ID: 22I-0870
   Assignment# 3 */
#include<iostream>
using namespace std;
int main()
{
	//Declaring Variables
	long int n, n1, k = 0, check = 0;
	//Taking Input from User
	cout << "Enter a positive integer n: ";
	cin >> n;
	//Checking if n is positive
	while (n < 0)
	{
		cout << "Invalid Input! n must be positive, Enter the value of n again: ";
		cin >> n;	
	}
	
	n1 = n;
	//Starting Loop
	while (n > 0)
	{
		if (check == 0)   //Gets added for the first, then subtracted, then added again and so on
		{
			k += n % 10;   //Separating last digit of n and adding it to k
			check = 1;
		}
		else
		{
			k -= n % 10;   //Separating last digit of n and subtracting it from k
			check = 0;
		}
		n /= 10;   //Moving to the next digit of n
	}
	//Outputting Result
	if (k % 11 == 0)
	{
		cout << n1 << " is divisible by 11" << endl;
	}
	else
	{
		cout << n1 << " is not divisible by 11" << endl;
	}
	return 0;
}
