/* Name: Yusra Irfan
Date: 3 March 2018
*/

#include <iostream>
#include <cmath>
using namespace std;

double convertCelsiusToFahrenheit(double degreesCelsius);
float convertCentimetersToInches(double centimeters);
double convertMetersToFeet(float meters);
float convertKilometersToMiles(float kilometers);
int fetchMenuChoice();

int main() {
	//declaring all variable and protoype
	int input;

	// info and a message that describes the mission
	cout << "***************************************************" << endl;
	cout << "Program’s mission: Switch Menu Value Conversion	" << endl
		<< "***************************************************" << endl;
	do {
		 fetchMenuChoice();
		cin >> input;

		if (!(input > 0 && input < 6)) {
			cout << "Invalid entry " << endl;
			continue;
		}
		else {
			switch (input) {
			case 1: {
				cout << "Input a positive degree in Celsius: ";
				double value = 0;
				cin >> value;
				cout << "Fahrenheit: " << convertCelsiusToFahrenheit(value) << endl;
				break;
			}
			case 2: {
				double value;
				do {
					cout << "Input a positive value in centimeters: ";
					cin >> value;
				} while (value < 0);

				cout << "Inches: " << convertCentimetersToInches(value) << endl;
				break;
			}
			case 3: {
				float value;
				do {
					cout << "Input a positive value in meters: ";
					cin >> value;
				} while (value < 0);

				cout << "Feet: " << convertMetersToFeet(value) << endl;
				break;
			}
			case 4: {
				float value;
				do {
					cout << "Input a value between 0km/h and 160km/h: ";
					cin >> value;
				} while ((value < 0) && (value > 160));
				cout << "MPH: " << convertKilometersToMiles(value) << endl;
				break;
			}
			}
		}
	} while (input != 5);
	cout << "GOODBYE!! " << endl;
	return 0;
}

int fetchMenuChoice() {

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
	return 0;
}


double convertCelsiusToFahrenheit(double degreesCelsius) {
	if (degreesCelsius<0) {
		cout << "Ice may be possible, please be careful." << endl;
	}
	return (9.0 / 5)*degreesCelsius + 32;
}
float convertCentimetersToInches(double centimeters) { 
	float output = 0.39*centimeters;
	return output ;
}

double convertMetersToFeet(float meters) {
	return 3.28*meters;
}

float convertKilometersToMiles(float kilometers) {
	return kilometers / 1.609;
}