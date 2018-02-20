/* Name: Yusra Irfan
Program\'s  mission:  Quadratic equation
*/

#include <iostream>
#include <cmath>
#include<string>
#include<iomanip>
using namespace std;

int main() {
	//declaring all variable
	double a, b, c, x1,x2,x1i,x2i;


	// info and a message that describes the mission
	cout << "***************************************************" << endl;
	cout << "Program\'s  mission:  Quadratic equation" << endl
		<< "***************************************************" << endl;
	//Gets all the inputs from the user
	cout << "This program solves a quadratic equation of the form ax ^ 2 + bx + c = 0" << endl;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;


	//calculates x values
	if (a == 0) {
		if (b != 0)  
			cout << "Single root " ;

		else if ((b==0) && (c == 0)) 
			std::cout << std::setprecision(4) << std::fixed << "Trivial Solution ";
		
		else if ((b == 0) && (c != 0)) 
			std::cout << std::setprecision(4) << std::fixed << "No solution";
	}

	else if (a != 0) {
		if ((b*b - (4 * a*c)) > 0) {
			x1 = (-b + (sqrt((b*b) - a*a*c))) / (2 * a);
			x2 = (-b - (sqrt((b*b) - a*a*c))) / (2 * a);
			
			std::cout << std::setprecision(4) << std::fixed << "Your equation has real roots: " << x1 << " and " << x2;
		}
		if ((b*b - (4 * a*c)) < 0) {
			x1 = (-b / 2 * a);
			x1i = (sqrt((4 * a*c) - (b*b))) / (2 * a);
			x2 = (-b / 2 * a);
			x2i = -(sqrt((4 * a*c) - (b*b)))/ (2 * a);

			std::cout << std::setprecision(4) << std::fixed <<"Your equation has complex roots:" << x1 << " + " << x1i << "i and " << x2 << " + " << x2i << "i. "<<endl;
		}
	}
	
	return 0;
}