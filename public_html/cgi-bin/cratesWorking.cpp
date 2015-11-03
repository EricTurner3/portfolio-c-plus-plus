#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()

{
	
		const double COST_PER_CUBIC_FOOT = 0.23;
    	const double CHARGE_PER_CUBIC_FOOT = 0.5;
		double cost, charge, profit;

        // here is the datastring length=1&width=2&height=3
		locale loc;
        string str = "";

        cin >> str;
		
		//"length=" is 7, then it reads the next 2 places.
        string str1 = str.substr(7,1);
	
        string str2 = str.substr (15,1); 
        string str3 = str.substr (24,1);

        int length, width, height, Volume;
	
		stringstream(str1) >> length;
		stringstream(str2) >> width;
		stringstream(str3) >> height;
	
		

        Volume = length * width * height;
		cost = Volume * COST_PER_CUBIC_FOOT;
   	 	charge = Volume * CHARGE_PER_CUBIC_FOOT;
   	 	profit = charge - cost;

        cout << "Content-type: text/html" << endl << endl;

        cout << "<html><head><title>Crate Output</title></head><body>" << endl                                                                              ;

        cout << "Data received: "  << str << endl << "<br>";

        cout << "Length of Crate: "  << length << endl << "<br>";

        cout << "Width of Crate: "  << width << endl << "<br>";

        cout << "Height of Crate: "  << height << endl << "<br>" ;

        cout << "Total Volume: " <<  Volume << endl << "<br>";
		cout << "Total Cost: $" <<  cost << endl << "<br>";
		cout << "Total Charge: $" <<  charge << endl << "<br>";
		cout << "Total Profit: $" <<  profit << endl << "<br>";

        cout << "</body></html>" << endl;

        return 0;

}