/* Name: Yusra Irfan
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//declaring all variable
	double input(0);
	double output = 0;
	char choice = 'y';
	// info and a message that describes the mission
	cout << "***************************************************" << endl;
	cout << "Program's mission: Inverse	Tangent" << endl
		<< "***************************************************" << endl;
	while (choice == 'y') {
		
		do {
			cout << "Enter a real number in radians to compute the inverse tangent (-1 to 1): ";
			cin >> input;
		} while (!(input >= -1 && input <= 1));

		// Need to declare this variable inside the loop so it is 0 at the start of each retry
		double output = 0;
		for (int n = 0; n < 500; n++) {//to add all the numbers

			int res1 = 1;
			for (int i = 0; i < n; i++) {
				res1 *= -1;
			}

			double res2 = 1;
			for (int i = 0; i < 2 * n + 1; i++) {
				res2 *= input;
			}

			output += (res1*res2) / (2 * n + 1);
		}

		cout << "the result is " << output << endl;
		cout << "Would you like to continue? (y/n)";
		cin >> choice;
	}
	cout << "GOODBYE!! " << endl;
	return 0;
}
