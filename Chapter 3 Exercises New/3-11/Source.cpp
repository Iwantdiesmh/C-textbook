#include<iostream>
using namespace std;

int main() {
	cout << "how many pennies do you have? \n";
	int penny;
	cin >> penny;
	cout << "how many nickels do you have? \n";
	int nickels;
	cin >> nickels;
	cout << "how many dimes do you have? \n";
	int dimes;
	cin >> dimes;
	cout << "how many quarters do you have? \n";
	int quarters;
	cin >> quarters;
	cout << "how many half dollars do you have? \n";
	int hd;
	cin >> hd;
	double total = (penny)+(5 * nickels) + (10 * dimes) + (25 * quarters) + (50 * hd);
	cout << "You have " << penny << " pennies\n";
	cout << "You have " << nickels << " nickels\n";
	cout << "You have " << dimes << " dimes\n";
	cout << "You have " << quarters << " quarters\n";
	cout << "You have " << hd << " half dollars\n";
	cout << "The value of all your coins is " << (penny)+(5 * nickels) + (10 * dimes) + (25 * quarters) + (50 * hd) << " cents or $" << total / 100;
}