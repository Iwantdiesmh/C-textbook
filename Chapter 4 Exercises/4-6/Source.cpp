#include<vector> //I only found this a second ago, so I'm very sorry 4-11 is 
#include<iostream>
using namespace std;

int main() {
	int user_input;
	vector<string> strings = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	cout << "enter a number from 0 to 9 and it will convert to a string: \n"; 
	cin >> user_input;
	cout << strings[user_input];

	cout << "\nenter a string from zero to nine and it will convert to an integer: \n";
	string user_input_string;
	cin >> user_input_string;
	int i;
	for (i = 0; i < 10; i++) {
		if (strings[i] == user_input_string) {
			cout << i;
		}
	}
}