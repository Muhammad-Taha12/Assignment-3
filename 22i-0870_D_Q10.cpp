/* Name: Muhammad Taha
   Student-ID: 22I-0870
   Assignment# 3 */
#include<iostream>
using namespace std;
int main()
{
	//Declaring Variables
	int totalpairs = 1, newpair = 0, oldpair = 1, months, monthloop = 0;
	//Taking Input from User
	cout << "Enter the number of months: ";
	cin >> months;
	//Input Validation
	while (months < 0)
	{
		cout << "Invalid Input! Number of months must be positive, Enter again: ";
		cin >> months;
	}
	cout << "At Start: " << endl << "New Pairs: 0    Old Pairs: 1" << endl << "Total Pairs: 1" << endl << endl;
	//Starting loop
	while (monthloop <= months)
	{
		//Adding old and new pairs together
		totalpairs = newpair + oldpair;
		newpair = oldpair;
		oldpair = totalpairs;	
		if (monthloop != 0)
		{
			cout << "After " << monthloop << " months:" << endl << "New Pairs: " << newpair << "    Old Pairs: " << oldpair << endl << "Total Pairs: " << totalpairs << endl << endl;
		}
		//Increasing by 2 months
		monthloop += 2;
	}
	//Outputting Result
	cout << "The number of pairs after " << months << " months are: " << totalpairs << endl;
	return 0;
}
