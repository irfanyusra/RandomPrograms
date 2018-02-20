/* Name: Yusra Irfan
Date: 29 Jan 2018
Program’s mission: This program calculates grades
*/

#include <iostream>
#include <cmath>
using namespace std;

int main1() {
	//declaring all variable
	double grade1, grade2, grade3, grade4;
	double weight1, weight2, weight3, weight4;
	double finalGrade;

	// info and a message that describes the mission
	cout << "***************************************************" << endl;
	cout << "Program’s mission: This program calculates grades" << endl
		<< "***************************************************" << endl;
	//Gets all the grades and weight from the user
	cout << "Enter the First Grade: ";
	cin >> grade1;

	cout << "Enter the First Grade Weight: ";
	cin >> weight1;

	cout << "Enter the Second Grade: ";
	cin >> grade2;

	cout << "Enter the Second Grade Weight: ";
	cin >> weight2;

	cout << "Enter the Third Grade: ";
	cin >> grade3;

	cout << "Enter the Third Grade Weight: ";
	cin >> weight3;

	cout << "Enter the Fourth Grade: ";
	cin >> grade4;

	cout << "Enter the Fourth Grade Weight: ";
	cin >> weight4;
	
	//calculates the final grade
	finalGrade = grade1*weight1 + grade2*weight2 + grade3*weight3 + grade4*weight4;
	
	//prints out the final grade
	cout << "The final grade is: " << finalGrade << endl;

	return 0; 
}