#include<iostream>

// this is the code of string-functions.

using namespace std;

int main()
{
	string x = "James Bond";
	cout << x.length() << endl; // function of length of the string
	cout << x[0] << endl; // function to find the index of a specific character in the string
	cout << x.find("Bond", 4) << "\n"; // function to find a specific information in the string.
	cout << x.substr(2,5) << endl; // prints part of the string.
	return 0;

}
