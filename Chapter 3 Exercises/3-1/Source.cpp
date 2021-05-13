#include<iostream>
using namespace std;

int main() {
	double miles;
	cout << "insert a mile to be converted to km: ";
	cin >> miles;
	cout << miles << " miles is equal to " << miles * 1.609 << " km";
}