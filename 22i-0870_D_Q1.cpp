/* Name: Muhammad Taha
   Student-ID: 22I-0870
   Assignment# 3 */
#include<iostream>
using namespace std;
int main()
{
	//Declaring Variables
	int lockers, action, open = 0;
	//Taking Input From User
	cout << "Enter the number of lockers: ";
	cin >> lockers;
	while (lockers <= 0)
	{
		cout << "Invalid Input! The number of lockers must be greater than 0, Enter again: ";
		cin >> lockers;
	}
	//Starting the locker loop
	for (int lock = 1; lock <= lockers; lock++)
	{
		//Setting the value to 0 at the start of loop
		action = 0;
		//Starting the students loop
		for (int students = lock; students >= 1; students--)
		{
			if (lock % students == 0)
			{
				//Checking if the student opens/closes the locker
				action++;
			}
		}
		if (action % 2 == 1)
		{
			//If number of students that interacted with locker are odd, then the locker will be open at the end
			open++;
		}
	}
	//Outputting Result
	cout << "The number of open lockers after every student has gone is: " << open << endl;
	return 0;
}
