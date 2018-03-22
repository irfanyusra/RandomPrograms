/* Name: Yusra Irfan
Date: 15 March 2018
*/

#include <iostream>
using namespace std;
void populateArray(double array[], const int size);
int menuChoice();
void thresholdArray(double array[], double array2Display[], const int size);
void reverseArray(double array[], double array2Display[], const int	size);
void printArray(double array[], const int size);
int main() {

	cout << "***************************************************" << endl;
	cout << "Program's mission: Modifying an Array of Integers" << endl
		<< "***************************************************" << endl;
	//double type array 10 size
	const int size = 10;
	double input[size];
	double arrayToDisplay[size] = { 0,0,0,0,0,0,0,0,0,0 };
	int choice = 0;

	cout << "Please populate the array with 10 real numbers." << endl;
	populateArray(input, size);
	for (int i = 0; i < size; i++) {
		arrayToDisplay[i] = input[i];
	}
	do {
		do
			choice = menuChoice();
		while (!(choice <= 5 && choice >= 0));
		switch (choice) {
		case 1:
			thresholdArray(input, arrayToDisplay, size);
			break;
		case 2:
			reverseArray(input, arrayToDisplay, size);
			break;
		case 3:
			printArray(arrayToDisplay, size);
			break;
		default: break;
		}
	} while (!(choice == 4));
	return 0;
}

void populateArray(double array[], const int size)
{
	double input;
	//cout and cin sttemnt as in the output
	for (int i = 0; i < size; i++) {
		cout << "Enter number " << i + 1 << ": ";
		cin >> array[i];
	}
}

int menuChoice()
{
	int choice;
	cout << "1. Threshold " << endl
		<< "2. Reverse" << endl
		<< "3. Print" << endl
		<< "4. Exit" << endl
		<< "Option: ";
	cin >> choice;
	return choice;
}

void thresholdArray(double array[], double array2Display[], const int size)
{
	double t;
	cout << "Input a threshold: ";
	cin >> t;
	double tempArray[10];
	for (int i = 0; i < size; i++) {
		tempArray[i] = array2Display[i];
	}
	for (int i = 0; i < size; i++) {
		if (tempArray[i] >= 0 && tempArray[i] <= t)
			array2Display[i] = tempArray[i];
		else
			array2Display[i] = 0;
	}
	}

void reverseArray(double array[], double array2Display[], const int size)
{
	double tempArray[10];
	for (int i = 0; i < size; i++) {
		tempArray[i] = array2Display[i];
	}
	int j = size - 1;
	for (int i = 0; i < size; i++) {
		array2Display[j] = tempArray[i];
		j--;
	}
}

void printArray(double array[], const int size)
{
	for (int i = 0; i < size; i++) {
		cout << array[i] << ", ";
	}
	cout << endl;
}
