/* Name: Yusra Irfan
Date: 15 March 2018
*/

#include <iostream>
using namespace std;
bool isValidGrade(double grade);
bool isValidWeight(double weight);
bool isValidTotalWeight(double weight[]);//takes in all the weights(the array)
int main() {
	//array holding 4 doubles --allGrades
	double allGrades[4];
	//array holding 4 doubles --allWeights
	double allWeights[4];
	double finalGrade = 0;

	cout << "***************************************************" << endl;
	cout<< "Program's mission: Grade Calculator with Arrays" << endl
		<< "***************************************************" << endl;

	do {//validate if weights add up to four otherwise reenter all of them
		for (int i = 0; i < 4; i++) {//loop for 4 grades 
			do {//validate each one  in a do while loop
				cout << "Input grade " << i + 1 << " (0-100): ";
				cin >> allGrades[i];//cin for grades

			} while (!(isValidGrade(allGrades[i])));

			do {//validate each one  in a do while loop
				cout << "Input Weight " << i + 1 << " (0.0-1.0): ";
				cin >> allWeights[i];//cin for weights

			} while (!(isValidWeight(allWeights[i])));
		}
	} while (!(isValidTotalWeight(allWeights)));

	for (int i = 0; i < 4; i++) {
		finalGrade += (allGrades[i] * allWeights[i]);
	}
	cout << "The course grade is: " << finalGrade << endl;
	return 0;
}


bool isValidGrade(double grade)//validaate each grade
{
	if (grade <= 100 && grade >= 0)
		return true;
	else {
		cout << "Invalid Grade input" << endl;
		return false;
	}
}

bool isValidWeight(double weight)
{
	if (weight <= 1 && weight >= 0)
		return true;
	else {
		cout << "Invalid Weight input" << endl;
		return false;
	}
}

bool isValidTotalWeight(double weight[])
{
	float total = 0;
	for (int i = 0; i < 4; i++) {
		total += weight[i];
	}
	if (total == 1)
		return true;
	else
	{
		cout << "weights do not equal to 1" << endl;
		return false;
	}
}
