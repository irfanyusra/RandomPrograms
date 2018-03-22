/* Name: Yusra Irfan
Date: 10 March 2018
*/

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
int rollDice();
int main() {
	//declaring all variable
	srand((unsigned)time(NULL));
	char choice = 'a';
	int score(0), currentRoll(0);
	// info and a message that describes the mission
	cout << "***************************************************" << endl;
	cout<< "Program's mission: Dice Game Using rand()" << endl
		<< "***************************************************" << endl;

	while (choice != 'n') {
		cout << endl << "The goal is a score of: 25" << endl;
		if (choice == 'y')
		{
			currentRoll = rollDice();
			cout << "You Rolled a: " << currentRoll << endl;
			score += currentRoll;
		}
		cout << "Your current running score is: " << score << endl;
		currentRoll = 0;
		if (score < 25) {
			cout << "Would you like to roll the die? (y/n): ";
			cin >> choice;
		}
		else if (score == 25) {
			cout << "You SCORED 25!!" << endl;
			break;
		}
		else {
			cout << "You scored above 25.. You lost :(" << endl;
			break;
		}
	}
	if (choice == 'n') {
		cout << "Game Over!" << endl;
		cout << "Your score was: " << score << endl;
	}

	return 0;
}
int rollDice() {
	return 1 + rand() % 6;
}
