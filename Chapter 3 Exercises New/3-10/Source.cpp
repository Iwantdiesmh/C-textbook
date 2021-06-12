#include<iostream>
using namespace std;

//I'm not sure if I'm doing this right and if I'm doing it wrong I'm not sure how to do it correctly

int main() {
	string operation;
	int n1, n2;

	cout << "please enter what operation you're using (+ - * /): \n";
	cin >> operation;
	cout << "enter number 1: \n";
	cin >> n1;
	cout << "enter number 2: \n";
	cin >> n2;

	if (operation == "+") {
		cout << n1 + n2;
	}
	else if (operation == "-") {
		cout << n1 - n2;
	}
	else if (operation == "*") {
		cout << n1 * n2;
	}
	else if (operation == "/") {
		cout << n1 / n2;
	}
}