#include<iostream>
using namespace std;

int main() {
	int number1 = 0;
	int number2 = 1;
	cout << "1 ";
	int i = 0;
	while(i != 10) {
		int sum;
		sum = number1 + number2;
		cout << sum << " ";
		number1 = number2;
		number2 = sum;
		i++;
	}
}