/* Name: Yusra Irfan
Program’s mission: Encoding characters
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//declaring all variable
	char inputChar;
	char outputChar;

	// info and a message that describes the mission
	cout << "***************************************************" << endl;
	cout << "Program’s mission: Encoding characters" << endl
		<< "***************************************************" << endl;
	//Gets all the character
	cout << "Input a character to encode (a-z or A-Z): ";
	cin >> inputChar;

	int asciiValue = (int)inputChar;

	if ((asciiValue >= 65 && asciiValue < 84)|| asciiValue >= 97 && asciiValue < 116) {
		asciiValue += 7;
		outputChar = (char)asciiValue;
		//prints the encoded character
		cout << outputChar << endl;
	}
	else if ((asciiValue >= 84 && asciiValue <=90)|| (asciiValue >= 116 && asciiValue <= 122)) {
		asciiValue -= 19;
		outputChar = (char)asciiValue;
		//prints the encoded character
		cout << outputChar << endl;
	}

	else 
		cout << "An incorrect character was input, please run the program again to input a valid character.";
	
	//prints the encoded character
	
}