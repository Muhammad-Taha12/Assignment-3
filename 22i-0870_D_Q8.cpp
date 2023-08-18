/* Name: Muhammad Taha
   Student-ID: 22I-0870
   Assignment# 3 */
#include<iostream>
using namespace std;
int main()
{
	//Declaring Variables
	int apartments, rent, increase, maintenance, total, max = 0, number, charge;
	char program;
	do
	{
		program = 'Y';
		//Getting Inputs from User
		cout << "Enter the amount of apartment units: ";
		cin >> apartments;
		cout << "Enter the rent to occupy all the units: ";
		cin >> rent;
		cout << "Enter the increase in rent that causes a vacant unit: ";
		cin >> increase;
		cout << "Enter the maintenance cost of a rented unit: ";
		cin >> maintenance;
		//Input Validation
		if (apartments < 1 || rent < 1 || increase < 1 || maintenance < 1)
		{
			cout << "Invalid Input! All values must be greater than 0, Enter all of them again" << endl;
			program = 'N';
		}
	} while (program == 'N');
	//Starting loop
	for (int rented = apartments; rented > 0; rented--)
	{
		//Calculating total profit
		total = ((rent + (increase * rented)) * (apartments - rented)) - (maintenance * (apartments - rented));
		if (total > max)
		{
			//Storing maximum profit
			max = total;
			charge = rent + (increase * rented);
			number = apartments - rented;
		}
	}
	//Outputting Result
	cout << "The number of apartments to rent is: " << number << endl;
	cout << "The amount of rent to charge is: " << charge << endl;
	return 0;
}
