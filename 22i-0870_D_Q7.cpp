/* Name: Muhammad Taha
   Student-ID: 22I-0870
   Assignment# 3 */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	//Delcaring Variables
	double circleradius, coneradius, height, length, volume, max = 0;
	const double pi = 3.142;
	//Getting Input from User
	cout << "Enter the radius of the circular waxed paper: ";
	cin >> circleradius;
	//Checking if radius is greater than 0
	while (circleradius <= 0)
	{
		cout << "Invalid Input! Radius must be positive, Enter again: ";
		cin >> circleradius;
	}
	//Starting loop
	for (int angle = 1; angle <= 360; angle++)
	{
		//Calculating radius of cone
		coneradius = (angle / 360.0) * circleradius;
		//Calculating height of cone using Pyhtagoras Theorem
		height = pow(pow(circleradius, 2) - pow(coneradius, 2), 0.5);
		//Calculating volume
		volume = pi * pow(coneradius, 2) * height / 3;
		//Checking for maximum volume
		if (volume > max)
		{
			max = volume;
			length = circleradius * (360 - angle) * pi/180;
		}
	}
	//Outputting Result
	cout << "The length of the removed sector to get max volume is: " << setprecision(2) << fixed << length << endl;
	return 0;
}
