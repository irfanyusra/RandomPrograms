/* Name: Yusra Irfan
Program’s mission: Switch Menu Value Conversion	
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//declaring all variable
	int input;
	double value;
	double output = 1;

	// info and a message that describes the mission
	cout << "***************************************************" << endl;
	cout << "Program’s mission: Switch Menu Value Conversion	" << endl
		<< "***************************************************" << endl;

	do {
		cout << "******************************" << endl <<
			"****** Value Conversion ******" << endl <<
			"******************************" << endl <<
			"* 1. Celsius->Fahrenheit *" << endl <<
			"* 2. Centimeters->Inches *" << endl <<
			"* 3. Meters->Feet *" << endl <<
			"* 4. Km / h->MPH *" << endl <<
			"* 5. Exit *" << endl <<
			"******************************" << endl <<
			"Please input a choice(1 - 5) :";
			cin >> input;

		if (!(input > 0 && input < 6)) {
			cout << "Invalid entry " << endl;
			continue;
		}
		else {
			switch (input) {
			case 1:
				cout << "Input a positive degree in Celsius: ";
				cin >> value;
				if(value<0){
					cout << "Ice may be possible, please be careful." << endl;
				}
				output = (9 / 5)*value + 32;
				cout << "Fahrenheit: "<< output << endl;
				break;

			case 2:
				do {
					cout << "Input a positive value in centimeters: ";
					cin >> value;
				} while (value < 0);
				output = 0.39*value;
				cout << "Inches: " << output << endl;
				break;

			case 3:
				do {
					cout << "Input a positive value in meters: ";
					cin >> value;
				} while (value < 0);
				output = 3.28*value;
				cout << "Feet: " << output << endl;
				break;

			case 4:
				do {
					cout << "Input a value between 0km/h and 160km/h: ";
					cin >> value;
				} while ((value < 0)&&(value >160));
				output = value / 1.609;
				cout << "MPH: " << output << endl;
				break;
			}
		}
	} while (input != 5);
	cout << "GOODBYE!! " << endl;
	return 0;
}