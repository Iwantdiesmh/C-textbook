#include<iostream>
using namespace std;

int main() {
	int number;
	cin >> number;
	if (number % 2 == 1) {
		cout << "the number " << number << "is odd";
	}
	else {
		cout << "the number " << number << "is even";
	}
}
