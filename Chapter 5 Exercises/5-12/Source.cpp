#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> answer = { 8, 2, 9, 6 };
	vector<int> user_guess;
	int bull = 0, cow = 0;
	int guess;
	cout << answer[1];
	while (bull != 4) {
		bull = 0;
		cow = 0;

		cout << "type your guess: \n";
		cin >> guess;

		int multiply = 1000;
		for (int i = 1; i <= 4; i++) { //this just takes in the users code and splits them (the individual digits) into a vector so I can use them easily (thanks stack overflow)
			user_guess.push_back((guess / multiply) % 10);
			multiply /= 10;
		}

		for (int i = 0; i < 4; i++) { //checks if the position in user_guess matches up with the answers
			if (user_guess[i] == answer[i]) {
				bull++;
				//why does this not work???
			}
			if (user_guess[i] == answer[0] || user_guess[i] == answer[1] || user_guess[i] == answer[2] || user_guess[i] == answer[3]) {//just a terrible way of saying if the userinput equals any number from the vector
				cow++;
			}
		}
		cow = cow - bull;
		cout << "You have " << bull << " bulls and " << cow << " cows." << endl;
	}

}