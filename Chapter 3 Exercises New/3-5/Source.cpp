#include<iostream> //suffers from the same problem as 3-4. It just doesn't work at all due to some really confusing stuff + plus a new bug. Probably to do something with uh trying to module a double
using namespace std;

int main() {
	double val1;
	double val2;
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
	//findCommonDeno(val1, val2); same problem as 3-4, though I probably should leave this commented out since you're not really supposed to be ratioing common demonators with floats.
	cout << "the ratio of the values is " << val1 << ":" << val2;
}

/* will fix this is broken sorry

void findCommonDeno(double& val1, double& val2) {

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
*/