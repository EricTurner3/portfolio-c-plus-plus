// Base Code from page 379, Program 7-1

#include <iostream>
using namespace std;

int main()
{
	
	int count;
	int totalHours;
	double totalPay;
	double totalWage;
	int NUM_EMPLOYEES;
	//User Input for # of Employees
	cout << "Payroll Calculator" << endl;
	cout << "How many employees are there? ";
	cin >> NUM_EMPLOYEES;
	int hours [NUM_EMPLOYEES];
	double wage[NUM_EMPLOYEES];
	
	//Get the hours worked by each employee.
	cout << "Enter the hours worked by " << NUM_EMPLOYEES << " employees: " << endl;
	
	for (count =0; count < NUM_EMPLOYEES; count++)
	{
		cout << "Employee #" << (count+1) << ": ";
		cin >> hours[count];
	}
	//Get the pay worked by each employee.
	cout << "Enter the hourly wage for each of the " << NUM_EMPLOYEES << " employees: " << endl;
	cout << "Numbers and a decimal only" << endl;
	
	for (count =0; count < NUM_EMPLOYEES; count++)
	{
		cout << "Wage of Employee #" << (count+1) << ": ";
		cin >> wage[count];
	}
	
	//Total up the hours
	for (count = 0 ; count < NUM_EMPLOYEES; count++)
	{
		totalHours = hours[count] + totalHours;
	}
	//Total up the pay
	for (count = 0 ; count < NUM_EMPLOYEES; count++)
	{
		totalWage = wage[count] + totalWage;
	}
		totalPay = totalWage*totalHours;
	//Display total hours
	cout << "Total Hours worked = " << totalHours << " by " << NUM_EMPLOYEES << " employees." << endl;
	cout << "Total Payout = $" << totalPay << " among " << NUM_EMPLOYEES << " employees." << endl;
	cout << "Our logs reflect these hours and wage for each employee: " << endl;
	for (count =0; count < NUM_EMPLOYEES; count++)
	{
		
		cout << "Employee #" << (count+1) << ": " << hours[count] << " hours worked at $" << wage[count] 
			 << " per hour" << endl;
	}
	return 0;
	
}