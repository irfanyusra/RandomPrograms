/* Name: Yusra Irfan
Date: 7 March 2018
*/

#include <iostream>
#include <string>
using namespace std;

int findYearParameter(int year);
int findMonthParameter(int month);
bool isLeapYear(int year);
string findDayOfWeek(int result);
int main() {
	//declaring all variable and protoype
	int day, month, year, year2digit,day2(0);
	bool leapYear = false;
	// info and a message that describes the mission
	cout << "***************************************************" << endl;
	cout << "Program’s mission: Day of the week" << endl
		<< "***************************************************" << endl;
	cout << "Please enter your birth-date" << endl << "Day(dd): ";
	cin >> day;
	
	while (day > 31 || day < 1) {
		cout << "invalid, enter a valid Day(dd): ";
		cin >> day;
	}
	day2 = day;
	cout << "Month(mm): ";
	cin >> month;
	while (month > 12 || month < 1) {
		cout << "invalid, enter a valid Month(mm): ";
		cin >> month;
	}
	cout << "Year(yyyy): ";
	cin >> year;
	while (year > 2019 || year < 1900) {
		cout << "invalid, enter a valid year(yyyy): ";
		cin >> year;
	}
	if (year >= 1900 && year < 2000)
		year2digit = year % 1900;
	else 
		year2digit = year % 2000;
	
	day2 += findYearParameter(year2digit);
	day2 += findMonthParameter(month);
	
	leapYear = isLeapYear(year);
	if ((month == 1 || month == 2) && leapYear)
		day2 -= 1;
	if (year >= 2000)
		day2 += 6;
	day2 += year2digit;
	cout << findDayOfWeek(day2) << endl;
	 
	return 0; 
}
int findYearParameter(int year) {
	 year = year / 4;
	 return year;
}
int findMonthParameter(int month) {
	int output = 0;
	switch (month)
	{
	case 1:
		output = 1;
		break; 
	case 2:
		output = 4;
		break;
	case 3:
		output = 4;
		break;
	case 4:
		output = 0;
		break;
	case 5:
		output = 2;
		break;
	case 6:
		output = 5;
		break;
	case 7:
		output = 0;
		break;
	case 8:
		output = 3;
		break;
	case 9:
		output = 6;
		break;
	case 10:
		output = 1;
		break;
	case 11:
		output = 4;
		break;
	case 12:
		output = 6;
		break;
	}
	return output;
}

bool isLeapYear(int year) {
	bool output;
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		output = true;
	else 
		output=false;
	return output;
}
string findDayOfWeek(int result) {
	result %= 7;
	if (result == 1)
		return"Sunday";
	else if (result == 2)
		return"Monday";
	else if (result == 3)
		return"Tuesday";
	else if (result == 4)
		return"Wednesday";
	else if (result == 5)
		return"Thursday";
	else if (result == 6)
		return"Friday";
	else if (result == 7)
		return"Saturday";
	else 
		return"Invalid";

}