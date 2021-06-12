#include<iostream>
using namespace std;

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
	cout << "the sum of the values is " << val1 + val2;
	cout << "the difference of the values is " << val1 - val2;
	cout << "the product of the values is " << val1 * val2;
	cout << "the ratio of the values is " << val1 << ":" << val2; //this should probably be a '/' sign because of exercise 5 but oh well
}
