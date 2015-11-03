// Base Code from **Starting Out With C++ 8th Edition by Tony Gaddis** page 379, Program 7-1

/*
/////////////////////////////////////////////////////////////
/ $$$$$$$\                                         $$\ $$\  /
/ $$  __$$\                                        $$ |$$ | /
/ $$ |  $$ |$$$$$$\  $$\   $$\  $$$$$$\   $$$$$$\  $$ |$$ | /
/ $$$$$$$  |\____$$\ $$ |  $$ |$$  __$$\ $$  __$$\ $$ |$$ | /
/ $$  ____/ $$$$$$$ |$$ |  $$ |$$ |  \__|$$ /  $$ |$$ |$$ | /
/ $$ |     $$  __$$ |$$ |  $$ |$$ |      $$ |  $$ |$$ |$$ | /
/ $$ |     \$$$$$$$ |\$$$$$$$ |$$ |      \$$$$$$  |$$ |$$ | /
/ \__|      \_______| \____$$ |\__|       \______/ \__|\__| /
/                    $$\   $$ |                             /
/                    \$$$$$$  |                             /
/                     \______/                              /
/ - Calculates Payroll based off of user entered:           /
/# of Employees, Wage per Employee, Hours Worked            /
/Per Employee                                               /
/////////////////////////////////////////////////////////////
*/
#include <iostream>
using namespace std;

int main()
{
	//Variable Declaration
	int count;
	int totalHours;
	double totalPay;
	double totalWage;
	int NUM_EMPLOYEES;
	
	//User Input for # of Employees
	cout << "Payroll Calculator" <<endl;
	cout << "How many employees are there? ";
	cin >> NUM_EMPLOYEES; //User Entered Number of Employees
	
	int hours [NUM_EMPLOYEES]; //Array holding hours for each employee
	double wage[NUM_EMPLOYEES]; //Array holding wage for each employee
	
	//Get the hours worked by each employee.
	cout << "Enter the hours worked by " << NUM_EMPLOYEES << " employees: " << endl;
	
	for (count =0; count < NUM_EMPLOYEES; count++) //Loops through the array and stops at the NUM_EMPLOYEES set by user
	{
		cout << "Employee #" << (count+1) << ": ";
		cin >> hours[count]; //Stores User Entered Hours to index of specific employee
	}
	//Get the pay worked by each employee.
	cout << "Enter the hourly wage for each of the " << NUM_EMPLOYEES << " employees: " << endl;
	cout << "Numbers and a decimal only" << endl;
	
	for (count =0; count < NUM_EMPLOYEES; count++) //Loops through the array and stops at the NUM_EMPLOYEES set by user
	{
		cout << "Wage of Employee #" << (count+1) << ": ";
		cin >> wage[count]; //Stores User Entered wages to each employee in the array
	}
	
	//Total up the hours
	for (count = 0 ; count < NUM_EMPLOYEES; count++)
	{
		//Recursively adds hours of each employee for a grand total
		totalHours = hours[count] + totalHours; 
		
	}
	//Total up the pay
	for (count = 0 ; count < NUM_EMPLOYEES; count++)
	{
		//Recursively adds hourly wage of each employee for a grand total
		totalWage = wage[count] + totalWage;
	}
		//Multiplies all the hours worked by the cumilative wage per hour for the total payout
		totalPay = totalWage*totalHours;
	//Display Hours and Payout to the Console
	cout << "Total Hours worked = " << totalHours << " by " << NUM_EMPLOYEES << " employees." << endl;
	cout << "Total Payout = $" << totalPay << " among " << NUM_EMPLOYEES << " employees." << endl;
	cout << "Our logs reflect these hours and wage for each employee: " << endl;
	//Print to the console all the date recieved for each employee
	for (count =0; count < NUM_EMPLOYEES; count++)
	{
		
		cout << "Employee #" << (count+1) << ": " << hours[count] << " hours worked at $" << wage[count] 
			 << " per hour" << endl;
	}
	//End of Program
	return 0;
	//Eric Turner, November 3rd 2015
}