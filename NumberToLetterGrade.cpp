/* Name: Yusra Irfan
Program’s mission:  Number grade to letter grade conversion
*/

#include <iostream>
#include <cmath>
#include<string>
using namespace std;

int main() {
	//declaring all variable
	double grade;
	string letterGrade;
	
	
	// info and a message that describes the mission
	cout << "***************************************************" << endl;
	cout<< "Program’s mission:  Number grade to letter grade conversion" << endl
		<< "***************************************************" << endl;
	//Gets all the grades and weight from the user
	cout << "Input a numerical course grade (0.0 - 100.0):  ";
	cin >> grade;
	

	//calculates the letter grade
	while (grade < 0 || grade>100) {
		cout << "Enter again: ";
		cin >> grade;
	}
	if (grade <= 100 && grade >= 95)
		letterGrade = "A+";
	else if (grade < 95 && grade >= 90)
		letterGrade = "A";
	else if (grade < 90 && grade >= 85)
		letterGrade = "A-";
	else if (grade < 85 && grade >= 80)
		letterGrade = "B+";
	else if (grade < 80 && grade >= 75)
		letterGrade = "B";
	else if (grade < 75 && grade >= 70)
		letterGrade = "B-";
	else if (grade < 70 && grade >= 65)
		letterGrade = "C+";
	else if (grade < 65 && grade >= 60)
		letterGrade = "C";
	else if (grade < 60 && grade >= 50)
		letterGrade = "C-";
	else 
		letterGrade = "F";

	

	//prints out the final grade
	cout << "The letter grade is: " << letterGrade<< endl;

	return 0;
}