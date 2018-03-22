/* Name: Yusra Irfan
Date: 10 March 2018
*/

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
int rollDice(int n);

int main() {
	//declaring all variable
	srand((unsigned)time(NULL));
	int rollChoice = -1;
	int score(0), currentRoll(0);
	// info and a message that describes the mission
	cout << "***************************************************" << endl;
	cout << "Program's mission: Improvements to	Dice Game" << endl
		<< "***************************************************" << endl;
	cout << endl << "The goal is a score of: 50" << endl;
	while (rollChoice != 0) {//to exit the loop the user has to enter 0
		if (rollChoice > 0)
		{
			currentRoll = rollDice(rollChoice);//modified this to take in int value for rollChoice
			cout << "You Rolled a: " << currentRoll << endl;
			score += currentRoll;
			cout << endl << "The goal is a score of: 50" << endl;
		}
		cout << "Your current running score is: " << score << endl;
		currentRoll = 0;
		if (score < 50) {
			do {
				cout << "How many would you like to roll (0,1,2): ";// validate 
				cin >> rollChoice;
			} while (rollChoice > 2 || rollChoice < 0);
		}
		else if (score == 50) {
			cout << "You SCORED 50!!" << endl;
			break;//breaking the loop
		}
		else {
			cout << "You scored above 50.. You lost :(" << endl;
			break;//breaking the loop
		}
	}
	if (rollChoice == 0) {
		cout << "Game Over!" << endl;
		cout << "Your score was: " << score << endl;
	}
	cout << "GOOD BYE";
	return 0;
}

int rollDice(int n) {
	static int diceRolled = 0;
	int output = 0;
	for (int i = 0; i < n; i++) {
		output += 1 + rand() % 6;
		diceRolled++;
	}
	cout << "Total number of dice rolled so far: " << diceRolled << endl;
	return output;
}
