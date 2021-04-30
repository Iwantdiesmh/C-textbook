#include<iostream>
using namespace std;

int main() {
	string cancel;
	while (cancel != "|") {
		double n1;
		cout << "Enter a number: ";
		cin >> n1;
		double n2;
		cout << "Enter another number: ";
		cin >> n2;
		if (((n1 - n2) < 1  && (n1 > n2)) || ((n2 - n1) < 1 && (n2 > n1))) {
			cout << "The numbers are very close";
		}
		else if (n1 > n2) {
			cout << "The smaller number is " << n2 << "\n";
			cout << "The bigger number is " << n1 << "\n";
		}
		else if (n1 == n2) {
			cout << "The numbers are equal\n";
		}
		else{
			cout << "The smaller number is " << n1 << "\n";
			cout << "The bigger number is " << n2 << "\n";
		}
		cin >> cancel;
	}

}