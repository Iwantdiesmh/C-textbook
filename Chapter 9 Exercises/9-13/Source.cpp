#include<iostream>
using namespace std;

class Rational {
private:
	int n1, d1; //numberators and denomonators for the two fractions because I haven't quite figured out how to convert "56/23" or a fraction into two digits.
	int n2, d2; 
	double rn, rd; //result numerator and denomonator, this is to set up the 'return_as_double' function

public:
	void set_fraction() {
		int digit;
		cout << "What is the numerator of the first fraction? " << endl;
		cin >> digit;
		n1 = digit;
		cout << "What is the denomonator of the first fraction? " << endl;
		cin >> digit;
		while (digit == 0) {
			cout << "The denomonator cannot be zero." << endl;
			cout << "What is the denomonator of the first fraction? " << endl;
			cin >> digit;
		}
		d1 = digit;
		cout << "What is the denomonator of the first fraction? " << endl;
		cin >> digit;
		n2 = digit;
		cout << "What is the denomonator of the first fraction? " << endl;
		cin >> digit;
		while (digit == 0) {
			cout << "The denomonator cannot be zero." << endl;
			cout << "What is the denomonator of the first fraction? " << endl;
			cin >> digit;
		}
		d2 = digit;
	}

	//can't simplify so I'm just kind of finding values that work.

	void add() { //t stands for temp, I didn't really want to go through and call of them "tempn1" etc, I'll do it when programs are more useful but for excersises I'll save some time
		int tn1, tn2, td;
		tn1 = n1 * d2; //just some cross mulitplying and figuring out a common denomonator
		tn2 = n2 * d1;
		td = d1 * d2;
		cout << tn1 + tn2 << "/" << td << endl;
		rn = tn1 + tn2;
		rd = td;
	}

	void mulitply() {
		cout << n1 * n2 << "/" << d1 * d2 << endl;
		rn = n1 * n2;
		rd = d1 * d2;
	}

	void divide() {
		cout << n1 * d2 << "/" << n2 * d1 << endl; //just using the [(a/b) / (c/d) = (a*d)/(b*c)] formula
		rn = n1 * d2; 
		rd = n2 * d1;
	}

	void subtract(){
		int tn1, tn2, td;
		tn1 = n1 * d2;
		td = d1 * d2;
		tn2 = n2 * d1;
		cout << tn1 - tn2 << "/" << td << endl;
		rn = tn1 - tn2;
		td = td;
	}
	double return_as_double() {
		return rn/rd;
	}
};

int main() {
	Rational one;
	one.set_fraction();
	one.add();
	one.mulitply();
	one.divide();
	one.subtract();
	cout << one.return_as_double();
}