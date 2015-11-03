	#include<iostream>
	#include<iomanip>
	using namespace std;

	//IndyCar Hack #4 - Eric Turner 2015
	//Features: * Calculations of speed, distance or time
	//			* Ability to output answers in multiple forms
	//			* Minimal Error Handling
	//Design:	* Using a Switch Statement, found in CH 4, pg 205
	//			* Using set precision to 2 decimals, found in CH 3, page 113
	int main()
	{
		//Define Variables
		int input;
        double speed_milesperhour;
		double speed_milesperminute;
		double distance_laps;
		double distance_miles;
		double time_min;
		double time_hour;
		double lapsToMiles = 2.5;
		
		cout << "IndyCar Calculator 2015 \n";
		cout << "Are you determining: \n";
		cout << "1. Speed \n";
		cout << "2. Distance \n";
		cout << "3. or Time? \n";
		
		cin >> input;
		
		switch(input)
			{
			case 1:
			//Speed = Distance/Time
			cout << "To Determine Speed, in mph, Please Enter the following: \n";
			//Gather Data
			cout << "Distance, in laps \n";
			cin >> distance_laps;
			cout << "Time, in minutes: \n";
			cin >> time_min;
			//Convert to Usable numbers
			distance_miles = distance_laps * lapsToMiles;
			time_hour = time_min / 60;
			//Make final calculation and output
			speed_milesperhour = distance_miles/time_hour;
			cout << setprecision (2) << fixed << "The speed of the car is " << speed_milesperhour << " miles per hour. \n";
			break;
			
			case 2:
			//Distance  = Speed * Time
			cout << "To Determine Distance, in laps and miles, Please Enter the following: \n";
			//Gather Data
			cout << "Speed, in mph: ";
			cin >> speed_milesperhour;
			cout << "Time, in minutes: ";
			cin >> time_min;
			//Convert to Usable numbers
			speed_milesperminute = speed_milesperhour / 60;
			//Make final calculation and output
			distance_miles = speed_milesperminute * time_min;
			distance_laps = distance_miles / lapsToMiles;
			cout << setprecision (2) << fixed << "The distance traveled by the car is " << distance_laps << " laps, or " << distance_miles << " miles. \n" ;
			break;
			
			case 3:
			//Time = Distance / Speed
			cout << "To Determine Time, in minutes, Please Enter the following: \n";
			//Gather Data
			cout << "Distance, in laps: ";
			cin >> distance_laps;
			cout << "Speed, in miles per hour: ";
			cin >> speed_milesperhour;
			//Convert to Usable numbers
			distance_miles = distance_laps * lapsToMiles;
			speed_milesperminute = speed_milesperhour / 60;
			//Make final calculation and output
			time_min = distance_miles / speed_milesperminute;
			cout << "The time taken for the race car to go  " << distance_laps << " laps @ " << speed_milesperhour << 
				" mph is " << time_min << " minutes. \n";
			break;
			
			default:
			cout << "ERROR: Invalid Input. Program will now termiate \n";
			break;
			
		}
                return 0;
	}


 
