// This progam calculates the user's pay.
#include <iostream>
using namespace std;

int main() {
    //setting up variables
    double hours, rate, pay;
    
    // Get the number of hours worked.
    cout << "How many hours did you work? ";
    
    cin >>hours;
    while(cin.fail()){
        cin.clear();
        cin.ignore();
        cout << "Invalid input.  How many hours did you work? ";
        cin >>hours;
    }
    // Get the hourly pay rate.
    cout << "How much do you get paid per hour? ";
    cin >> rate;
    while(cin.fail()){
        cin.clear();
        cin.ignore();
        cout << "Invalid input.  How much do you get paid per hour? ";
        cin >> rate;
    }
    
    //Fail Statement found at "http://stackoverflow.com/questions/10828937/how-to-make-cin-to-take-only-numbers"
    //cin.ignore found in textbook on page 123
    // Calculate the pay.
    pay = hours * rate;
    
    // Display the pay.
    cout << "You have earned $" << pay << endl;
    return 0;
}
