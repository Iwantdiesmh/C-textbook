#include<iostream>
#include <cmath>
using namespace std;

class Money {
private:
	double money;
public:
	void set_money() {
		double cash;
		cout << "How much money do you have?" << endl;
		cin >> cash;
		money = cash;
	}
	double get_money() {
		cout << "You have " << money << "dollars";
		return money;
	}
	void print() {
		double scale = 00.1; //can't get this to work for some reason
		double value = floor(money / scale + 0.5) * scale;
		cout << "That is $" << value << "." << endl;
	}
};

int main() {
	Money mine;
	mine.set_money();
	mine.print();
};