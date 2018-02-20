/* Name: Yusra Irfan
Date: 29 Jan 2018
Program’s mission: Convert a Character to Uppercase
*/

#include <iostream>
#include <cmath>
using namespace std;

int main2() {
	//declaring all variable
	char inputChar;
	char outputChar;

	// info and a message that describes the mission
	cout << "***************************************************" << endl;
	cout << "Program’s mission: Convert a Character to Uppercase" << endl
		<< "***************************************************" << endl;
	//Gets all the grades and weight from the user
	cout << "Enter the character: ";
	cin >> inputChar;

	//calculates the uppercase charater
	int asciiValue = (int)inputChar;
	asciiValue -= 32;
	outputChar = (char)asciiValue;
	//prints the uppercase character
	cout << outputChar<<endl;
	return 0;
}