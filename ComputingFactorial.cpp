/* Name: Yusra Irfan
Program’s mission: Computing a Factorial
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//declaring all variable
	int input;
	double output = 1;

	// info and a message that describes the mission
	cout << "***************************************************" << endl;
	cout << "Program’s mission: Computing a Factorial" << endl
		<< "***************************************************" << endl;

	cout << "Input an integer number to calculate its factorial: ";
	cin >> input;

	//repeats the loop until the user enters the right integer 
	while (input < 0) {
		cout << "Invalid Entry! Please enter a positive integer" << endl;
		cin >> input;
	}

	if (input == 0)
		output = 1;
	else {
		//calculates the factorial
		while (input > 0) {
			output *= input;
			input--;//input is being decremented in every iteration
		}
	}

	//prints the factorial
	cout << "The resulting factorial is: " << output << endl;

	return 0;
}