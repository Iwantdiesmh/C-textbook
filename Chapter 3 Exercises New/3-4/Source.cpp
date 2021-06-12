#include<iostream>
using namespace std;

void findCommonDeno(int& val1, int& val2) {

	//this will only check for factors that are 2, 3 or 5. I'm not sure how to find common denominators beyond that (basically not sure how to do it without somewhat hardcoding it). 
	while (val1 % 2 == 0 && val2 % 2 == 0) {
		val1 = val1 / 2; //does "val1 =/ 2" work?
		val2 = val2 / 2;
	}
	while (val1 % 3 == 0 && val2 % 3 == 0) {
		val1 = val1 / 3; //does "val1 =/ 2" work?
		val2 = val2 / 3;
	}
	while (val1 % 5 == 0 && val2 % 5 == 0) {
		val1 = val1 / 5; //does "val1 =/ 2" work?
		val2 = val2 / 5;
	}
}

int main() {
	int val1;
	int val2;
	cout << "enter a value: ";
	cin >> val1;
	cout << "enter a second value: ";;
	cin >> val2;
	if (val1 > val2) {
		cout << "val 1 is bigger than val 2";
	}
	else {
		cout << "val 2 is bigger than val 1";
	}
	cout << "the sum of the values is " << val1 + val2 << "\n";
	cout << "the difference of the values is " << val1 - val2 << "\n";
	cout << "the product of the values is " << val1 * val2 << "\n";
	findCommonDeno(val1, val2); //confused why does it say "identifier not found?"
	cout << "the ratio of the values is " << val1 << ":" << val2; //this should probably be a '/' sign because of exercise 5 but oh well
}

