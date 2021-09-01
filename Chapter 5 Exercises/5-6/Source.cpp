#include<iostream>
using namespace std;

int main() {
	cout << "you want to covert Celcius to Fahrenheit (input 'c') or Fahrenheit to Celcius (input 'f'): ";
	string input;
	cin >> input;
	if (input == "c") {
		double number;
		cout << "Input a celcius amount: ";
		cin >> number;
		cout << number << " celsius is equal to " << (number * 9 / 5) + 32 << " fahrenheit" << endl;
	}
	if (input == "f") {
		double number;
		cout << "Input a fahrenheit amount: ";
		cin >> number;
		cout << number << " fahrenheit is equal to " << (number - 32) * 5 / 9 << " celcius" << endl;
	}
}