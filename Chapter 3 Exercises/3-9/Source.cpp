#include<iostream>
using namespace std;

int main() {
	int penny;
	int nickels;
	int dimes;
	int quarters;
	int hd;
	cin >> penny >> nickels >> dimes >> quarters >> hd;
	cout << "You have " << penny << "pennies\n";
	cout << "You have " << nickels << "nickels\n";
	cout << "You have " << dimes << "dimes\n";
	cout << "You have " << quarters << "quarters\n";
	cout << "You have " << hd << "half dollars\n";
	cout << "The value of all your coins is " << (penny)+(5 * nickels) + (10 * dimes) + (25 * quarters) + (50 * hd) << "cents";
}