#include<iostream>
using namespace std;

int main() {
	string number;
	cin >> number;
	if (number == "one") {
		cout << "1";
	}
	else if (number == "two") {
		cout << "2";
	}
	else if (number == "three") {
		cout << "3";
	}
	else if (number == "four") {
		cout << "4";
	}
	else {
		cout << "Not a number I know";
	}
}