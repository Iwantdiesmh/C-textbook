#include<iostream>
#include"rational.h"
using namespace std;

int main() {
	Rational one;
	one.set_fraction();
	one.add();
	one.mulitply();
	one.divide();
	one.subtract();
	cout << one.return_as_double();
}