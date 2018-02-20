/* Name: Yusra Irfan
Date: 29 Jan 2018
Program’s mission: Calculate the Euclidean distance between two points in three dimensions, input by the user.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//declaring all variable
	double x1, x2, y1, y2, z1, z2, x, y, z, distance;

	// info and a message that describes the mission
	cout << "***************************************************" << endl;
	cout<< "Program’s mission: Calculate the Euclidean distance between two points in three dimensions, input by the user." << endl
		<< "***************************************************" << endl;

	//Gets all the values from the user
	cout << "Enter x1: ";
	cin >> x1;

	cout << "Enter y1: ";
	cin >> y1;

	cout << "Enter z1: ";
	cin >> z1;

	cout << "Enter z2: ";
	cin >> z2;

	cout << "Enter x2: ";
	cin >> x2;


	cout << "Enter y2: ";
	cin >> y2;


	//calculates the distance
	x = x2 - x1;
	y = y2 - y1;
	z = z2 - z1;
	distance = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));

	//prints the distance
	cout << "The two points are separated by " << x
		<< " units in the x - direction, " << y
		<< " units in the y - direction, " << z
		<< " units in the z - direction, and they have a Euclidean distance of "
		<< distance << " units. " << endl;

	return 0;
}