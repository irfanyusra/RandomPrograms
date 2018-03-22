/* Name: Yusra Irfan
Date: 1 March 2018
*/

#include <iostream>
using namespace std;

double sineFunction(double);
int main() {
	//declaring all variable

	const int lines = 72;
	double cycles;
	// info and a message that describes the mission
	cout << "***************************************************" << endl;
	cout<< "Program's mission: Printing	a Full-wave	Rectified Sine Curve" << endl
		<< "***************************************************" << endl;

	cout << "How many rectified sine cycles should be printed? ";
	cin >> cycles;

	for (double i = 0; i < cycles*lines; i++) {

		double degrees = 360 * i / (double)lines;
		double radians = degrees * 3.14 / 180;
		double sinValue = sineFunction(radians);
		sinValue = abs(sinValue); 
	
		for (int i = 0; i < sinValue * 35 + 1; i++)	//print star
			cout << "*";

		cout << endl;
	}
	return 0;
}

double sineFunction(double input) {
	double output = 0;
	for (int n = 0; n < 20; n++) {

		double res1 = 1;
		for (int i = 0; i < n; i++)
			res1 *= -1;

		double res2 = 1;
		for (int i = 0; i < 2 * n + 1; i++)
			res2 *= input;

		double res3 = 1;
		for (int i = 2 * n + 1; i > 0; i--)
			res3 *= i;

		output += (res1*res2) / res3;
	}
	return output;
}

