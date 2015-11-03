#include <iostream>
#include <sstream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()

{

        // here is the datastring length=1&width=2&height=3
		locale loc;
        string str = "";
		string equals="=";
		string amp = "&";
		string token;
		string l,w,h;
		
		int lengthDigits = 0;
		int widthDigits = 0;
		int heightDigits = 0;

        cin >> str;
	
	
		//"length=" is 7, then it reads the next 2 places.
        string str1 = l.substr(str.find(equals),(str.find(amp)-str.find(equals)));
		
        string str2 = w.substr (str.find(equals),(str.find(amp)-str.find(equals)));
		
        string str3 = h.substr (7,1);

        int length, width, height, Volume;
	
		stringstream(str1) >> length;
		stringstream(str2) >> width;
		stringstream(str3) >> height;

        Volume = length * width * height;


        cout << "Content-type: text/html" << endl << endl;

        cout << "<html><head><title>Crate Output</title></head><body>" << endl                                                                              ;

        cout << "Data received: "  << str << endl << "<br>";

        cout << "Length of Crate: "  << length << endl << "<br>";

        cout << "Width of Crate: "  << width << endl << "<br>";

        cout << "Height of Crate: "  << height << endl << "<br>" ;

        cout << "Total Volume: " <<  Volume << endl << "<br>";

        cout << "</body></html>" << endl;

        return 0;

}