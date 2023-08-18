/* Name: Muhammad Taha
   Student-ID: 22I-0870
   Assignment# 3 */
#include<iostream>
using namespace std;
int main()
{
	//Declaring Variables
	long int popA, popB, years = 0;
	double growA, growB;
	char program;
	do
	{
		program = 'Y';
		//Inputting both Towns' populations
		cout << "Enter the population of Town A: ";
		cin >> popA;
		cout << "Enter the population of Town B: ";
		cin >> popB;
		//Making sure the population of Town B is more than Town A
		while (popB <= popA)
		{
			cout << "Invalid Input! The population of Town B must be greater than the population of Town A, Enter the population for Town B again: ";
			cin >> popB;
		}
		//Inputting both Towna' growth rates
		cout << "Enter the growth rate per year of Town A, without the percentage sign: ";
		cin >> growA;
		cout << "Enter the growth rate per year of Town B, without the percentage sign: ";
		cin >> growB;
		//Making sure the growth rate of Town A is more than Town B
		while (growA <= growB)
		{
			cout << "Invalid Input! The growth rate of Town A must be greater than the growth rate of Town B, Enter the growth rate for Town B again: ";
			cin >> growB;
		}
		//Checking if any values are negative
		if (popA <= 0 || popB <= 0)
		{
			cout << "Invalid Input! All values must be positive. Enter all values again" << endl;
			program = 'N';
		}
		//Checking if population will increase
		if (growA/100 * popA < 1 || growB/100 * popB < 1)
		{
			cout << "Invalid Input! The population will not grow. Enter all values again" << endl;
			program = 'N';
		}
	} while (program == 'N');
	
	//Starting loop
	while (popA < popB)
	{
		popA += popA * growA / 100;
		popB += popB * growB / 100;
		years++;
	}
	//Outputting Result
	cout << "Thw number of years it will take for the population of Town A to exceed the population of Town B is: " << years << endl;
	return 0;
}
