/* Name: Yusra Irfan
Program’s mission: Statistics on Integer Inputs	
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//declaring all variable
	int input, iteration (1), even (0), odd (0);
	double value, mean, min, max, sum (0);

	// info and a message that describes the mission
	cout << "***************************************************" << endl;
	cout << "Program’s mission: Statistics on Integer Inputs	" << endl
		<< "***************************************************" << endl;

	do {
		cout << "Enter an integer number for the number of loop iterations:";
		cin >> input;
	} while (input < 0);

	while (!(iteration >input)) {
		cout << "Enter Integer "<< iteration<< ": ";
		cin >> value;
		//Mean Value
		sum += value;
		mean = sum / iteration;

		//Max and min Value
		if (iteration == 1)	{ 
		min = value; max = value;
		}
		else if (value <= min)
			min = value;
		else if (value >= max)
			max = value;
		
		//odd and even
		if ((int)value % 2 == 0)
			even++;
		else
			odd++;

		cout << "The mean of " << iteration << " input(s) is: " << mean << endl
			<< "Max Value: " << max << endl
			<< "Min Value: " << min << endl
			<< "Even Count: " << even << endl
			<< "Odd Count: " << odd << endl;
		iteration++;
	}

	cout << "GOODBYE!! " << endl;
	return 0;
}