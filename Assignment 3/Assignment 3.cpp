// Program Name:	Distance Traveled
// Chapter:			Chapter 4  - Repetition Structures
// Pg. / Ex.:		164  /  4.5
// Programmer:		Michael A Gardner
// Date:			8/March 2016
// Description:		This program gets the mph and hours traveled from the user then calcultes the distance for every hour traveled.
//					This program uses a for loop to calculate distance traveled for every hour that has been driven.

//#include <iomanip>
//#include <cmath>
#include <iostream>
using namespace std;

int main()
{

	//  ** Varables **  


	int
		mph = 0,
		totalHoursTraveled = 0,
		distance = 0,
		hours = 1;  // The hours varable is used to calculate the distance for each hour driven.

	//  **  Imput from user  **

	cout << "What is the speed of the vehicle in mph? ";
	cin >> mph; 
	cout << "How many hours has it traveled? ";
	cin >> totalHoursTraveled; 


	//  **  Header  **

	cout << "\n\nHour\tDistance Traveled\n";


	// ** Repetion Structure  **

	//Every iteration the for loop will add 1 to the hours varable and it will only run while hours is less than or equal to totalHoursTraveled varable.
	for (hours; hours <= totalHoursTraveled; hours++) 
		
	{
		//  Determine the distance traveled each mile.
		distance = hours * mph;
		//  Display the hours and distance to the console/user.
		cout << hours << "\t" << distance << endl;
	}

	cout << endl << endl;  // 2 Blank Lines
	return 0;
}

