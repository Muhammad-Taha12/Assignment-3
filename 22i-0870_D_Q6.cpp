/* Name: Muhammad Taha
   Student-ID: 22I-0870
   Assignment# 3 */
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Declaring Variables
	int firstNum, secondNum, sum = 0, squaresum = 0, firstNumber, loop, firstNumber2;
	//a.
	cout << "Enter the value of firstNum: ";
	cin >> firstNum;
	cout << "Enter the value of secondNum: ";
	cin >> secondNum;
	//Checking if secondNum is greater than firstNum
	while (secondNum <= firstNum + 1)
	{
		cout << "Invalid Input! The value of secondNum must be atleast two numbers greater than firstNum, Enter the value for secondNum again: ";
		cin >> secondNum;
	}
	
	cout << "The odd numbers beween firstNum and secondNum are: ";
	firstNumber = firstNum + 1;
	while (firstNumber < secondNum)
	{
		if (firstNumber % 2 == 0) //c.
		{
			sum += firstNumber;
		}
		else
		{
			cout << firstNumber << " "; //b.
			squaresum += firstNumber*firstNumber; //e.
		}
		firstNumber++;
	}
	cout << endl << "The sum of all the even numbers between firstNum and secondNum is: " << sum << endl; //c.
	cout << "Numbers     Squares" << endl; //d.
	loop = 1;
	while (loop <= 10)
	{
		cout << loop << setw(17) << loop*loop << endl;
		loop++;
	}
	cout << "The sum of the square of all the odd numbers between firstNum and secondNum is: " << squaresum << endl; //e.
	if (firstNum >= 90 || secondNum <= 65)
	{
		cout << "There are no uppercase letters between firstNum and secondNum" << endl;
	}
	else
	{
		cout << "The uppercase letters between firstNum and secondNum are: "; //f.
		firstNumber2 = firstNum + 1;
		while (firstNumber2 < secondNum)
		{
			if (firstNumber2 >= 65 && firstNumber2 <= 90)
			{
				cout << char(firstNumber2) << " ";
			}
			firstNumber2++;
		}
		cout << endl;
	}
	return 0;
}
