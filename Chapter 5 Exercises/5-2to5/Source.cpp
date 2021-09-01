#include<iostream>
using namespace std;

//below is the original code that it wanted me to fix

/*
double ctok(double c)
{
	int k = c + 273.15;
	return int
}
int main() {
	double c = 0;
	cin >> d;
	double k = ctok("c");
	Cout << k << '\n';
}
*/

//this is the fixed version (5-2)

/*
double ctok(double c) {
	double k = c + 273.15;
	return k;
}
int main() {
	double c = 0;
	cin >> c;
	double k = ctok(c);
	cout << k << "\n";
}
*/

//5-3 wants me to make it so you can't put a value under -273.15

double ctok(double c) {
	double k = c + 273.15;
	return k;
}

double ktoc(double k) {
	double c = k - 273.15;
	return c;
}

int main() {
	string initiate;
	cout << "Do you want to convert celcius to kelvin (input 'c') or kelvin to celsius (input 'k')?: ";
	cin >> initiate;
	if (initiate == "c") {
		double temp = 0;
		cout << "Enter a temperature (celcius): ";
		cin >> temp;
		while (temp < -273.15) {
			cout << "Your temperature has to be above -273.15 Celcius\nEnter a temperature (celcius): ";
			cin >> temp;
		}
		double result = ctok(temp);
		cout << result << "\n";
	}
	else if (initiate == "k") {
		double temp = 0;
		cout << "Enter a temperature (kelvin): ";
		cin >> temp;
		while (temp < 0) {
			cout << "Your temperature has to be above 0 Kelvin \nEnter a temperature (kelvin): ";
			cin >> temp;
		}
		double result = ktoc(temp);
		cout << result << "\n";
	}

}
