/* Name: Muhammad Taha
   Student-ID: 22I-0870
   Assignment# 3 */
#include<iostream>
using namespace std;
int main()
{
	//Declaring Variables
	double loan, rate, interest, monthly, monthly2;
	int months = 0;
	char program = 'N';
	
	while (program == 'N')
	{
		//Getting Input from User
		program = 'Y';
		cout << "Enter the loan amount: ";
		cin >> loan;
		cout << "Enter the interest rate per year, without the percentage sign: ";
		cin >> rate;
		cout << "Enter the monthly payment: ";
		cin >> monthly;
		//Checking if all the inputs are valid
		if (loan <= 0 || rate <= 0 || monthly <= 0)
		{
			cout << "Invalid Input! All of the inputs must be greater than 0, Enter them again" << endl;
			program = 'N';
		}
	}
	
	//Calculating Interest
	rate /= 12;
	interest = loan * rate / 100;
	
	//Checking if interest is more than montly pay
	if (interest >= monthly)
	{
		cout << "The monthly amount is too low and the loan cannot be repaid" << endl;
	}
	else
	{
		//Running until loan is repaid
		while (loan > 0)
		{
			//Calculating monthly payments and subtracting it from loan
			monthly2 = monthly - interest;
			loan -= monthly2;
			interest = loan * rate / 100;
			months++;
		}
		//Outputting Result
		cout << "It will take " << months << " months to repay the loan" << endl;
	}
	return 0;
}
