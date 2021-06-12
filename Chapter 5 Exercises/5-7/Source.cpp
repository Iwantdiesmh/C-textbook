#include<iostream>
using namespace std;

int main() {
	double a;
	double b;
	double c;
	cout << "Enter variable 'a': ";
	cin >> a;
	cout << "Enter variable 'b': ";
	cin >> b;
	cout << "Enter variable 'c': ";
	cin >> c;
	if ((b * b) - (4 * a * c) < 0) {
		cout << "this program does not have any real roots";
	}
	else {
		double rt1 = ((b * -1) + sqrt((b * b) - (4 * a * c))) / (2 * a);
		double rt2 = ((b * -1) - sqrt((b * b) - (4 * a * c))) / (2 * a);
		cout << "Your roots are " << rt1 << " and " << rt2 << ".";
	}
}